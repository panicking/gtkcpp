#ifndef GI_CONTAINER_HPP
#define GI_CONTAINER_HPP

#include "base.hpp"
#include <iterator>
#include <map>
#include <vector>

#include <assert.h>
#include <string.h>

namespace gi
{
namespace detail
{
// helpers

template<typename T, typename D>
struct owned_pointer
{
  T *p_;
  mutable bool own_;

  owned_pointer(T *_p, bool _own) : p_(_p), own_(_own) {}

  owned_pointer(owned_pointer &&other)
  {
    memcpy(this, &other, sizeof(*this));
    other.own_ = false;
  }

  ~owned_pointer()
  {
    if (own_)
      D::free(p_);
  }

  T *gobj_(bool steal = false) const
  {
    if (steal)
      own_ = false;
    return p_;
  }
};

// list

template<typename ListType>
struct list_operations : public std::false_type
{
  static void free(ListType *p) { g_free((gpointer)p); }
};

template<>
struct list_operations<GPtrArray> : public std::false_type
{
  static void free(GPtrArray *p) { g_ptr_array_free(p, TRUE); }
};

template<>
struct list_operations<GList> : public std::true_type
{
  typedef GList list_type;
  static gpointer next(list_type *&it)
  {
    auto result = it->data;
    it = g_list_next(it);
    return result;
  }
  static void push(list_type *&it, gpointer p)
  {
    it = g_list_append(it, p);
    it = g_list_last(it);
  }
  static void free(list_type *&l) { g_list_free(l); }
};

template<>
struct list_operations<GSList> : public std::true_type
{
  typedef GSList list_type;
  static gpointer next(list_type *&it)
  {
    auto result = it->data;
    it = g_slist_next(it);
    return result;
  }
  static void push(list_type *&it, gpointer p)
  {
    it = g_slist_append(it, p);
    it = g_slist_last(it);
  }
  static void free(list_type *&l) { g_slist_free(l); }
};

// generic case; T is plain array base type
// (that is, wrapping T[] where T e.g. char* or gint, etc)
template<typename T, typename Enable = void>
struct ListIterator : private noncopyable,
                      public owned_pointer<T, list_operations<T>>
{
  typedef owned_pointer<T, list_operations<T>> super_type;
  typedef T value_type;

  T *it_;
  // negative if zero-terminated
  int size_;

  ListIterator(T *_l, bool _own, int _size = 0)
      : super_type(_l, _own), it_(_l), size_(_size)
  {}

  explicit operator bool()
  {
    return (size_ < 0 ? !!(*it_) : it_ - this->p_ < size_);
  }

  T next() { return *(it_++); }

  void push(value_type p)
  {
    // old-fashioned way
    if ((it_ - this->p_) == size_) {
      auto nsize = 2 * (size_ + 1);
      this->p_ = (T *)g_realloc_n(this->p_, nsize, sizeof(T));
      it_ = this->p_ + size_;
      size_ = nsize;
    }
    *it_ = p;
    ++it_;
  }

  T *data(bool steal = false) const { return this->gobj_(steal); }

  size_t size() const { return size_; }
};

// GPtrArray specialization
template<>
struct ListIterator<GPtrArray, void>
    : private noncopyable,
      public owned_pointer<GPtrArray, list_operations<GPtrArray>>
{
  typedef GPtrArray ListType;
  typedef owned_pointer<ListType, list_operations<ListType>> super_type;
  typedef gpointer value_type;

  guint index_;

  ListIterator(ListType *_l, bool _own, int = 0)
      : super_type(_l, _own), index_(0)
  {}

  explicit operator bool() { return index_ < p_->len; }

  gpointer next() { return g_ptr_array_index(p_, index_++); }

  void push(gpointer p)
  {
    if (!p_)
      p_ = g_ptr_array_new();
    g_ptr_array_add(p_, p);
    ++index_;
  }
};

template<typename ListType>
struct ListIterator<ListType,
    typename std::enable_if<list_operations<ListType>::value>::type>
    : private noncopyable,
      public owned_pointer<ListType, list_operations<ListType>>
{
  typedef owned_pointer<ListType, list_operations<ListType>> super_type;
  typedef gpointer value_type;
  typedef list_operations<ListType> ops_type;

  ListType *it_;

  ListIterator(ListType *_l, bool _own, int = 0) : super_type(_l, _own), it_(_l)
  {}

  explicit operator bool() { return it_ != nullptr; }

  gpointer next() { return ops_type::next(it_); }

  void push(gpointer p)
  {
    ops_type::push(it_, p);
    if (!this->p_)
      this->p_ = it_;
  }
};

// target is a container type
template<typename TargetList, typename SourceListIt>
struct list_wrap_range
{
  typedef TargetList list_type;
  typedef typename TargetList::value_type value_type;
  SourceListIt src;
};

template<typename TargetList, typename SourceListIt>
list_wrap_range<TargetList, SourceListIt> inline make_list_wrap_range(
    SourceListIt &&_src)
{
  // no lvalue deduction
  static_assert(
      !std::is_reference<SourceListIt>::value, "need rvalue argument");
  return list_wrap_range<TargetList, SourceListIt>{std::move(_src)};
}

// target is a specified plain array
template<typename T, typename SourceListIt>
struct list_wrap_range<T *, SourceListIt>
{
  typedef T *list_type;
  typedef T value_type;
  SourceListIt src;
  T *dest;
};

template<typename T, typename SourceListIt>
list_wrap_range<T *, SourceListIt> inline make_list_wrap_range(
    SourceListIt &&_src, T *dest)
{
  // no lvalue deduction
  static_assert(
      !std::is_reference<SourceListIt>::value, "need rvalue argument");
  // caller responsible for proper fit of src in dest
  // so at least source can not be zero-terminated
  assert(_src.size() >= 0);
  return list_wrap_range<T *, SourceListIt>{std::move(_src), dest};
}

// loop helper
template<typename CppType, typename TargetIt, typename SourceListIt,
    typename Transfer, typename Direction>
void
wrap_loop(TargetIt &dest, SourceListIt &src, const Transfer & /*t*/,
    const Direction &dir)
{
  typedef typename traits::ctype<CppType>::type ElCType;
  typedef typename element_transfer<Transfer>::type ElTransfer;
  ElTransfer el_transfer;

  while (src) {
    // could have const char** or so, so let's (const) cast the hard way
    *dest = wrap((ElCType)(src.next()), el_transfer, dir);
    ++dest;
  }
}

template<typename TargetList, typename SourceListIt, typename Transfer,
    typename Direction>
TargetList
wrap(list_wrap_range<TargetList, SourceListIt> &r, const Transfer &t,
    const Direction &dir)
{
  TargetList result;
  auto it = std::back_inserter(result);
  wrap_loop<typename TargetList::value_type>(it, r.src, t, dir);
  return result;
}

// specialized case
template<typename T, typename SourceListIt, typename Transfer,
    typename Direction>
void
wrap(list_wrap_range<T *, SourceListIt> &r, const Transfer &t,
    const Direction &dir)
{
  wrap_loop<T>(r.dest, r.src, t, dir);
}

// code generation convenience helper
template<typename ElCppType, typename ListType,
    typename CppList = std::vector<ElCppType>, typename Transfer>
CppList
wrap_list(ListType *l, const Transfer &t, const int size = -1)
{
  typedef typename std::decay<ListType>::type BListType;
  auto it = ListIterator<BListType>((BListType *)l, t.value != 0, size);
  auto src = make_list_wrap_range<std::vector<ElCppType>>(std::move(it));
  return wrap(src, t, direction_out);
}

template<typename CType, typename Transfer,
    typename CppType = typename traits::cpptype<CType>::type>
void
wrap_array(CType *l, const Transfer &t, int size, CppType *output)
{
  // other code handles ownership here
  auto it = ListIterator<CType>(l, false, size);
  auto src = make_list_wrap_range(std::move(it), output);
  return wrap(src, t, direction_out);
}

// helper type to capture input cpp and desired output
template<typename TargetList, typename Iterator>
struct list_unwrap_range
{
  // input data
  Iterator begin_, end_;
  // output specs
  typedef TargetList list_type;
  bool zeroterminated;
};

template<typename TargetList, typename CppList>
list_unwrap_range<TargetList,
    typename CppList::
        const_iterator> inline make_list_unwrap_range(const CppList &l,
    bool zeroterminated = false)
{
  return {l.begin(), l.end(), zeroterminated};
}

template<typename T>
list_unwrap_range<typename traits::ctype<T>::type,
    T *> inline make_list_unwrap_range(T *l, int size, bool zeroterminated)
{
  return {l, l + size, zeroterminated};
}

// helper trait
template<typename T, typename Enable = void>
struct is_plain_array_range : public std::false_type
{};

template<typename T, typename Iterator>
struct is_plain_array_range<list_unwrap_range<T, Iterator>,
    typename std::enable_if<
        traits::is_plain<T>::value &&
        std::is_same<T,
            typename std::iterator_traits<Iterator>::value_type>::value>::type>
    : public std::true_type
{};

typedef list_unwrap_range<guint8, std::vector<guint8>::const_iterator> TT;
static_assert(is_plain_array_range<TT>::value, "");

template<typename ListType, typename Iterator, typename Transfer,
    typename Direction = direction_t,
    typename BListType = typename std::decay<ListType>::type,
    typename std::enable_if<!is_plain_array_range<
        list_unwrap_range<ListType, Iterator>>::value>::type * = nullptr>
ListIterator<BListType>
unwrap(list_unwrap_range<ListType, Iterator> &src, const Transfer & /*t*/,
    const Direction &dir = direction_dummy)
{
  typedef ListIterator<BListType> it_type;
  // those are definitely meant for the optimized version below
  static_assert(!std::is_arithmetic<typename it_type::value_type>::value,
      "unexpected type");
  typedef typename element_transfer<Transfer>::type ElTransfer;
  ElTransfer el_transfer;

  // create with ownership; might be stolen later
  it_type it(nullptr, true);
  auto pass = src.begin_;
  for (; pass != src.end_; ++pass) {
    auto &el = *pass;
    typedef decltype(unwrap(el, el_transfer, dir)) el_type;
    // only pointer-like entries expected for (G)List and friends
    // (but anything goes for a plain array)
    static_assert(
        !list_operations<ListType>::value || std::is_pointer<el_type>::value,
        "expected pointer type");
    // runtime nor GValue cares about const stuff
    it.push((typename it_type::value_type)(unwrap(el, el_transfer, dir)));
  }
  if (src.zeroterminated)
    it.push(typename it_type::value_type());
  return it;
}

template<typename ListType, typename Iterator, typename Transfer,
    typename Direction = direction_t,
    typename BListType = typename std::decay<ListType>::type,
    typename std::enable_if<is_plain_array_range<
        list_unwrap_range<ListType, Iterator>>::value>::type * = nullptr>
ListIterator<BListType>
unwrap(list_unwrap_range<ListType, Iterator> &src, const Transfer &t,
    const Direction & /*dir */ = direction_dummy)
{
  // try to re-use incoming data
  // otherwise fall back to plain copy
  // (if transfer or zero-termination fiddling is needed)
  typedef ListIterator<BListType> it_type;
  typedef typename it_type::value_type T;

  bool zeroterminated = src.zeroterminated;
  int lsize = src.end_ - src.begin_;

  bool allocate = (t.value != transfer_none.value) || zeroterminated;
  int size = zeroterminated ? lsize + 1 : lsize;
  // also handle real iterator input (not only plain pointer)
  // (assuming the container's data is plain and contiguous)
  T *inputdata = (T *)&(*src.begin_);
  T *data = inputdata;

  if (allocate) {
    data = (T *)g_malloc(size * sizeof(T));
    memcpy(data, inputdata, lsize * sizeof(T));
    if (zeroterminated)
      data[lsize] = T{};
  }

  it_type w(data, allocate, size);

  return w;
}

// map handling

template<typename ListType>
struct MapIterator
{};

struct map_operations
{
  static void free(GHashTable *p) { g_hash_table_unref(p); }
};

template<>
struct MapIterator<GHashTable>
    : private noncopyable, public owned_pointer<GHashTable, map_operations>
{
  typedef owned_pointer<GHashTable, map_operations> super_type;

  GHashTableIter it_;
  bool end_;

  MapIterator(GHashTable *m, bool own) : super_type(m, own), end_(true)
  {
    if (m)
      g_hash_table_iter_init(&it_, m);
  }

  explicit operator bool() { return end_; }

  bool next(gpointer &key, gpointer &value)
  {
    return (end_ = g_hash_table_iter_next(&it_, &key, &value));
  }

  void push(gpointer p, gpointer value)
  {
    g_hash_table_replace(this->p_, p, value);
  }
};

namespace _traits
{
template<typename T>
struct hash
{};
template<typename T>
struct equal
{};
template<typename T, typename Enable = void>
struct destroy
{};

// let's simply stick to the following for now
// since others are not so likely and not always clear semantics
template<>
struct hash<std::string>
{
  static constexpr GHashFunc func = g_str_hash;
};

template<>
struct equal<std::string>
{
  static constexpr GEqualFunc func = g_str_equal;
};

template<>
struct destroy<std::string, void>
{
  static constexpr GDestroyNotify func = g_free;
};

template<typename T>
struct destroy<T, typename std::enable_if<traits::is_wrapper<T>::value>::type>
{
  struct helper : public T
  {
    friend struct destroy;
    using T::_deleter;
  };
  static constexpr GDestroyNotify func = (GDestroyNotify)helper::_deleter;
};

} // namespace _traits

// avoid overload ambiguity
template<typename CppMap, typename Transfer, typename Direction,
    typename key_type = typename CppMap::key_type>
MapIterator<GHashTable>
unwrap(const CppMap &m, const Transfer & /*t*/, const Direction &dir)
{
  typedef typename CppMap::mapped_type mapped_type;

  GHashTable *d = g_hash_table_new_full(_traits::hash<key_type>::func,
      _traits::equal<key_type>::func, _traits::destroy<key_type>::func,
      _traits::destroy<mapped_type>::func);
  // stolen later
  MapIterator<GHashTable> it(d, true);
  for (auto &e : m) {
    // always full as container assumes ownership with proper functions set
    // above also again never mind possible const pointer
    it.push((gpointer)unwrap(e.first, transfer_full, dir),
        (gpointer)unwrap(e.second, transfer_full, dir));
  }

  return it;
}

template<typename TargetMap, typename SourceMapIt>
struct map_wrap_range
{
  // input data
  SourceMapIt src;
  // output specs
  typedef TargetMap map_type;
};

template<typename TargetMap, typename SourceMapIt>
map_wrap_range<TargetMap, SourceMapIt>
make_map_wrap_range(SourceMapIt &&src)
{
  // no lvalue deduction
  static_assert(!std::is_reference<SourceMapIt>::value, "need rvalue argument");
  return map_wrap_range<TargetMap, SourceMapIt>{std::move(src)};
}

template<typename TargetMap, typename SourceMapIt, typename Transfer,
    typename Direction>
TargetMap
wrap(map_wrap_range<TargetMap, SourceMapIt> &r, const Transfer & /*t*/,
    const Direction &dir)
{
  typedef typename traits::ctype<typename TargetMap::key_type>::type KeyCType;
  typedef
      typename traits::ctype<typename TargetMap::mapped_type>::type EntryCType;

  TargetMap result;
  gpointer key, value;
  while (r.src.next(key, value)) {
    // always enforce transfer none;
    // even if whole is transfer full, the table unref will also clean
    // content (so actually the table then owns the transferred element ref)
    result[wrap(static_cast<KeyCType>(key), transfer_none, dir)] =
        wrap(static_cast<EntryCType>(value), transfer_none, dir);
  }
  return result;
}

// code generation convenience helper
template<typename KeyCppType, typename EntryCppType, typename MapType,
    typename CppMap = std::map<KeyCppType, EntryCppType>, typename Transfer>
CppMap
wrap_map(MapType *l, const Transfer &t)
{
  typedef typename std::decay<MapType>::type BMapType;
  auto it = MapIterator<BMapType>((BMapType *)l, t.value != 0);
  auto src =
      make_map_wrap_range<std::map<KeyCppType, EntryCppType>>(std::move(it));
  return wrap(src, t, direction_out);
}

} // namespace detail

using detail::unwrap;

} // namespace gi

#endif // GI_CONTAINER_HPP
