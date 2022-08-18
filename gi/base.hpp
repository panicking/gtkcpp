#ifndef GI_BASE_HPP
#define GI_BASE_HPP

// attempt to auto-discover exception support:
#ifndef GI_CONFIG_EXCEPTIONS
#if defined(_MSC_VER)
#include <cstddef> // for _HAS_EXCEPTIONS
#endif
#if defined(__cpp_exceptions) || defined(__EXCEPTIONS) || (_HAS_EXCEPTIONS)
#define GI_CONFIG_EXCEPTIONS 1
#else
#define GI_CONFIG_EXCEPTIONS 0
#endif
#endif

#include "boxed.hpp"
#include "objectbase.hpp"

#include <cstddef>
#include <functional>
#include <string>
#include <type_traits>
// required for generated code
#include <tuple>

namespace gi
{
namespace detail
{
// constructor does not appreciate NULL, so wrap that here
// map NULL to empty string; not quite the same, but it will do
inline std::string
make_string(const char *s)
{
  return std::string(s ? s : "");
}

class noncopyable
{
public:
  noncopyable() {}
  noncopyable(const noncopyable &) = delete;
  noncopyable &operator=(const noncopyable &) = delete;

  noncopyable(noncopyable &&) = default;
  noncopyable &operator=(noncopyable &&) = default;
};

class scope_guard
{
private:
  std::function<void()> cleanup_;

public:
  scope_guard(std::function<void()> &&cleanup) : cleanup_(std::move(cleanup)) {}

  ~scope_guard() noexcept(false)
  {
#if GI_CONFIG_EXCEPTIONS
    auto pending = std::uncaught_exception();
    try {
#endif
      cleanup_();
#if GI_CONFIG_EXCEPTIONS
    } catch (...) {
      if (!pending)
        throw;
    }
#endif
  }
};

// as in
// http://ericniebler.com/2013/08/07/universal-references-and-the-copy-constructo/
template<typename A, typename B>
using disable_if_same_or_derived = typename std::enable_if<
    !std::is_base_of<A, typename std::remove_reference<B>::type>::value>::type;
} // namespace detail

namespace repository
{
// class types declare c type within class
// others can do so using this (e.g. enum)
template<typename CppType>
struct declare_ctype_of
{};

// and for all cases the reverse cpp type
template<typename CType>
struct declare_cpptype_of
{};

// generate code must specialize appropriately
template<typename T>
struct is_enumeration : public std::false_type
{};

template<typename T>
struct is_bitfield : public std::false_type
{};

// type member should specify a subclass of T with suitable cleanup destructor
template<typename T>
struct declare_unset_subclass_of
{};

} // namespace repository

namespace traits
{
template<typename T>
using is_cboxed =
    typename std::conditional<std::is_base_of<detail::CBoxed, T>::value,
        std::true_type, std::false_type>::type;

template<typename T>
using is_gboxed =
    typename std::conditional<std::is_base_of<detail::GBoxed, T>::value,
        std::true_type, std::false_type>::type;

template<typename T>
using is_boxed =
    typename std::conditional<std::is_base_of<detail::Boxed, T>::value,
        std::true_type, std::false_type>::type;

// avoid derived cases
template<typename T>
using is_object =
    typename std::conditional<std::is_base_of<detail::ObjectBase, T>::value &&
                                  sizeof(T) == sizeof(gpointer),
        std::true_type, std::false_type>::type;

template<typename T>
using is_wrapper =
    typename std::conditional<std::is_base_of<detail::wrapper_tag, T>::value &&
                                  sizeof(T) == sizeof(gpointer),
        std::true_type, std::false_type>::type;

// bring in to this namespace
using repository::is_bitfield;
using repository::is_enumeration;

// aka passthrough
template<typename T>
using is_basic =
    typename std::conditional<std::is_same<T, gpointer>::value ||
                                  std::is_same<T, gconstpointer>::value ||
                                  std::is_arithmetic<T>::value,
        std::true_type, std::false_type>::type;

// almost passthrough (on lower level at least)
template<typename T>
using is_plain = typename std::conditional<traits::is_basic<T>::value ||
                                               std::is_enum<T>::value,
    std::true_type, std::false_type>::type;

template<typename T, typename U = void>
struct if_valid_type
{
  typedef U type;
};

template<typename T, typename U = void>
struct is_valid_type : public std::true_type
{};

template<typename T, typename Enable = void>
struct has_ctype_member : public std::false_type
{};

template<typename T>
struct has_ctype_member<T,
    typename if_valid_type<typename T::BaseObjectType>::type>
    : public std::true_type
{};

// return corresponding c type (if any)
// (string and basic type not considered)
// preserve const
template<typename T, typename Enable = void>
struct ctype
{};

// class case
template<typename T>
struct ctype<T, typename std::enable_if<is_valid_type<
                    typename std::decay<T>::type::BaseObjectType>::value>::type>
{
  typedef typename std::remove_reference<T>::type CppType;
  // make sure; avoid subclassed cases
  static_assert(is_wrapper<CppType>::value || is_boxed<CppType>::value,
      "must be object or boxed wrapper");
  typedef typename CppType::BaseObjectType CType;
  typedef typename std::conditional<std::is_const<CppType>::value, const CType,
      CType>::type *type;
};

// remaining cases
template<typename T>
struct ctype<T, typename if_valid_type<
                    typename repository::declare_ctype_of<T>::type>::type>
{
  typedef typename repository::declare_ctype_of<T>::type CType;
  typedef typename std::conditional<std::is_const<T>::value, const CType,
      CType>::type type;
};

// basic cases passthrough
template<typename T>
struct ctype<T,
    typename std::enable_if<(std::is_fundamental<T>::value &&
                                !std::is_same<T, bool>::value) ||
                            std::is_same<T, gpointer>::value ||
                            std::is_same<T, gconstpointer>::value>::type>
{
  typedef T type;
};

// ... exception though for bool
template<>
struct ctype<bool, void>
{
  typedef gboolean type;
};

// as used in callback signatures
// or in list (un)wrapping
template<>
struct ctype<const std::string &, void>
{
  typedef const char *type;
};
template<>
struct ctype<std::string, void>
{
  typedef char *type;
};

// conversely
// return corresponding cpp type (if known)
// (string and basic type not considered)
// preserve const
template<typename T, typename Enable = void>
struct cpptype
{};

// generic
template<typename T>
struct cpptype<T *,
    typename if_valid_type<typename repository::declare_cpptype_of<
        typename std::remove_const<T>::type>::type>::type>
{
  typedef typename repository::declare_cpptype_of<
      typename std::remove_const<T>::type>::type CppType;
  typedef typename std::conditional<std::is_const<T>::value, const CppType,
      CppType>::type type;
};

template<typename T>
struct cpptype<T,
    typename if_valid_type<typename repository::declare_cpptype_of<
        typename std::remove_const<T>::type>::type>::type>
{
  typedef typename repository::declare_cpptype_of<
      typename std::remove_const<T>::type>::type CppType;
  typedef typename std::conditional<std::is_const<T>::value, const CppType,
      CppType>::type type;
};

// basic cases passthrough
template<typename T>
struct cpptype<T, typename std::enable_if<std::is_fundamental<T>::value>::type>
{
  typedef T type;
};

template<typename T, typename Enable = void>
struct unset_wrapper : public std::false_type
{
  typedef T type;
};

template<typename T>
struct unset_wrapper<T,
    typename std::enable_if<std::is_base_of<T,
        typename repository::declare_unset_subclass_of<
            typename std::decay<T>::type>::type>::value>::type>
    : public std::true_type
{
  typedef typename repository::declare_unset_subclass_of<T>::type type;
};

} // namespace traits

// specify transfer type when (un)wrapping
// this approach is safer than some booleans and allows overload combinations
struct transfer_t
{
  const int value;
  constexpr explicit transfer_t(int v = 0) : value(v) {}
};
struct transfer_none_t : public transfer_t
{
  constexpr transfer_none_t() : transfer_t(0) {}
};
struct transfer_full_t : public transfer_t
{
  constexpr transfer_full_t() : transfer_t(1) {}
};
struct transfer_container_t : public transfer_t
{
  constexpr transfer_container_t() : transfer_t(2) {}
};

const constexpr transfer_t transfer_dummy = transfer_t();
const constexpr transfer_none_t transfer_none = transfer_none_t();
const constexpr transfer_full_t transfer_full = transfer_full_t();
const constexpr transfer_container_t transfer_container =
    transfer_container_t();

template<typename Transfer>
struct element_transfer
{};
template<>
struct element_transfer<transfer_none_t>
{
  typedef transfer_none_t type;
};
template<>
struct element_transfer<transfer_full_t>
{
  typedef transfer_full_t type;
};
template<>
struct element_transfer<transfer_container_t>
{
  typedef transfer_none_t type;
};

// specify direction of wrap/unwrap (in C viewpoint/terminology), so
// * unwrap dir out = unwrap output of a callback (output to C)
// * unwrap dir in = unwrap function parameter (input to C)
// * wrap dir in = wrap callback argument
// * wrap dir out = wrap function output/return
// the above info is only useful/relevant in case of transfer_none;
// * in case of wrapping incoming callback arguments (to pass to Cpp callback)
//   an optimization is to avoid copying incoming boxed (transfer none)
//   (as would otherwise be needed when wrapping such a return value (to Cpp))
// * determines whether to ref/ref_sink (wrap) or unref/refloat (unwrap) objects
struct direction_t
{
  const int value;
  constexpr explicit direction_t(int v = 0) : value(v) {}
};
// copy when needed
struct direction_in_t : public direction_t
{
  constexpr direction_in_t() : direction_t(0) {}
};
struct direction_out_t : public direction_t
{
  constexpr direction_out_t() : direction_t(1) {}
};

const constexpr direction_t direction_dummy = direction_t();
const constexpr direction_in_t direction_in = direction_in_t();
const constexpr direction_out_t direction_out = direction_out_t();

// unwrapping a callback
// specify call scope type
struct scope_t
{
  const int value;
  constexpr explicit scope_t(int v = 0) : value(v) {}
};
struct scope_call_t : public scope_t
{
  constexpr scope_call_t() : scope_t(0) {}
};
struct scope_async_t : public scope_t
{
  constexpr scope_async_t() : scope_t(1) {}
};
struct scope_notified_t : public scope_t
{
  constexpr scope_notified_t() : scope_t(2) {}
};

const constexpr scope_t scope_dummy = scope_t();
const constexpr scope_call_t scope_call = scope_call_t();
const constexpr scope_async_t scope_async = scope_async_t();
const constexpr scope_notified_t scope_notified = scope_notified_t();

// object/boxed conversion
template<typename CType,
    typename CppType = typename traits::cpptype<CType *>::type,
    typename Enable =
        typename std::enable_if<traits::is_boxed<CppType>::value ||
                                traits::is_wrapper<CppType>::value>::type>
inline CppType
wrap(CType *v, const transfer_t &t, const direction_t &w = direction_out)
{
  // the class wrap only has to deal with non-const class type
  typedef typename std::remove_const<CppType>::type TNC;
  return CppType::template wrap<TNC>(v, t.value, w.value);
}

// special case; unwrap a floating ref as output (only for GObject)
// (see also e.g. https://bugzilla.gnome.org/show_bug.cgi?id=693393)
template<typename T,
    typename std::remove_reference<T>::type::BaseObjectType * = nullptr>
inline typename traits::ctype<T>::type
unwrap(T &&v, const transfer_none_t &, const direction_out_t &)
{
  static_assert(traits::is_object<typename std::decay<T>::type>::value,
      "transfer floating on non-GObject");
  // add a floating ref
  return (typename traits::ctype<T>::type)v.gobj_float_();
}

template<typename T,
    typename std::remove_reference<T>::type::BaseObjectType * = nullptr>
inline typename traits::ctype<T>::type
unwrap(T &&v, const transfer_none_t &, const direction_in_t &)
{
  return v.gobj_();
}

template<typename T, typename T::BaseObjectType * = nullptr>
inline typename traits::ctype<T>::type
unwrap(
    const T &v, const transfer_full_t &, const direction_t & = direction_dummy)
{
  return v.gobj_copy_();
}

// string conversion
inline std::string
wrap(const char *v, const transfer_none_t &,
    const direction_t & = direction_dummy)
{
  return detail::make_string(v);
}

// actually should not accept const input (as it makes no sense for full
// transfer) but let's go the runtime way and not mind that too much (code
// generation will warn though)
inline std::string
wrap(const char *v, const transfer_full_t &,
    const direction_t & = direction_dummy)
{
  // a custom type that would allow direct mem transfer might be nice
  // but that might be too nifty and create yet-another-string-type
  std::string s;
  if (v) {
    s = v;
    g_free((char *)v);
  }
  return s;
}

// return const here;
// + wrapped function call is force-casted anyway
// + transfer full on callback return is not allowed in this case
inline const gchar *
unwrap(const std::string &v, const transfer_none_t &,
    const direction_t & = direction_dummy)
{
  return v.c_str();
}

inline gchar *
unwrap(const std::string &v, const transfer_full_t &,
    const direction_t & = direction_dummy)
{
  return g_strdup(v.c_str());
}

// enum conversion
template<typename T,
    typename std::enable_if<std::is_enum<T>::value>::type * = nullptr>
inline typename traits::cpptype<T>::type
wrap(T v, const transfer_t & = transfer_dummy,
    const direction_t & = direction_dummy)
{
  return (typename traits::cpptype<T>::type)v;
}

template<typename T,
    typename std::enable_if<std::is_enum<T>::value>::type * = nullptr>
inline typename traits::ctype<T>::type
unwrap(T v, const transfer_t & = transfer_dummy,
    const direction_t & = direction_dummy)
{
  return (typename traits::ctype<T>::type)v;
}

// plain basic pass along
template<typename T,
    typename std::enable_if<traits::is_basic<T>::value>::type * = nullptr>
inline T
wrap(T v, const transfer_t & = transfer_dummy,
    const direction_t & = direction_dummy)
{
  return v;
}

template<typename T,
    typename std::enable_if<traits::is_basic<T>::value>::type * = nullptr>
inline T
unwrap(T v, const transfer_t & = transfer_dummy,
    const direction_t & = direction_dummy)
{
  return v;
}

// callback conversion
// async or destroy-notify;
// signature forces copy, and std::move is used in unwrap call
template<typename T,
    typename std::remove_reference<T>::type::CallbackWrapperType * = nullptr>
inline typename std::remove_reference<T>::type::CallbackWrapperType
unwrap(T &&v, const transfer_t & = transfer_dummy)
{
  return typename std::remove_reference<T>::type::CallbackWrapperType(
      std::forward<T>(v));
}

// call or destroy-notify scope
template<typename T>
inline typename std::remove_reference<T>::type::template wrapper_type<false> *
unwrap(T &&v, const scope_t &)
{
  return new
      typename std::remove_reference<T>::type::template wrapper_type<false>(
          std::forward<T>(v));
}

// async scope
template<typename T>
inline typename std::remove_reference<T>::type::template wrapper_type<true> *
unwrap(T &&v, const scope_async_t &)
{
  return new
      typename std::remove_reference<T>::type::template wrapper_type<true>(
          std::forward<T>(v));
}

// dynamic GType casting within GObject/interface hierarchy
template<typename T, typename I,
    typename std::enable_if<
        traits::is_object<T>::value &&
        traits::is_object<typename std::decay<I>::type>::value>::type * =
        nullptr>
inline T
object_cast(I &&t)
{
  if (!t || !g_type_is_a(t.gobj_type_(), T::get_type_())) {
    return T();
  } else {
    return wrap((typename T::BaseObjectType *)t.gobj_copy_(), transfer_full,
        direction_dummy);
  }
}

// (dummy) helper tag to aid in overload resolution
template<typename Interface>
struct interface_tag
{
  typedef Interface type;
};

} // namespace gi

#endif // GI_BASE_HPP
