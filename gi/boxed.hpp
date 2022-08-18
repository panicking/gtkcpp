#ifndef GI_BOXED_HPP
#define GI_BOXED_HPP

#include <memory>

#include <glib-object.h>
#include <glib.h>

namespace gi
{
namespace detail
{
// class tags
class Boxed
{};
class CBoxed : public Boxed
{};
class GBoxed : public Boxed
{};

template<typename CType>
class SharedWrapper
{
public:
  typedef SharedWrapper self;
  typedef CType BaseObjectType;

protected:
  std::shared_ptr<CType> data_;

public:
  CType *gobj_() { return data_.get(); }
  const CType *gobj_() const { return data_.get(); }

  explicit operator bool() { return (bool)data_; }

  bool operator==(const SharedWrapper &other) const
  {
    return data_ == other.data_;
  }

  bool operator==(std::nullptr_t o) const { return data_ == o; }

  bool operator!=(const SharedWrapper &other) const
  {
    return data_ != other.data_;
  }

  bool operator!=(std::nullptr_t o) const { return data_ != o; }

  bool use_count() const { return data_ ? data_.use_count() : 0; }
};

template<typename CppType, typename CType>
struct GBoxedFuncs
{
  static CType *copy(const void *data)
  {
    return (CType *)g_boxed_copy(CppType::get_type_(), data);
  }
  static void free(void *data) { g_boxed_free(CppType::get_type_(), data); }
};

template<typename CppType, typename CType>
struct CBoxedFuncs
{
  static CType *copy(const void *data)
  {
#if GLIB_CHECK_VERSION(2, 68, 0)
    return (CType *)g_memdup2(data, sizeof(CType));
#else
    return (CType *)g_memdup(data, sizeof(CType));
#endif
  }
  static void free(void *data) { g_free(data); }
};

template<typename CType, typename Funcs, typename TagType>
class BoxedWrapper : public SharedWrapper<CType>, public TagType
{
  typedef BoxedWrapper self;

protected:
  static void _deleter(CType *obj)
  {
    if (obj)
      Funcs::free(obj);
  }

  static void _dummy_deleter(CType *) {}

  static CType *_copy(const CType *obj)
  {
    return obj ? Funcs::copy(obj) : nullptr;
  }

public:
  BoxedWrapper(CType *obj = nullptr, bool own = true, bool copy = true)
  {
    this->data_ = std::shared_ptr<CType>(own ? obj : (copy ? _copy(obj) : obj),
        own || (!own && copy) ? _deleter : _dummy_deleter);
  }

  CType *gobj_copy_() const { return _copy(this->gobj_()); }

  template<typename Cpp>
  static Cpp wrap(const typename Cpp::BaseObjectType *obj, bool own, bool copy)
  {
    static_assert(sizeof(Cpp) == sizeof(self), "type wrap not supported");
    static_assert(std::is_base_of<self, Cpp>::value, "type wrap not supported");
    BoxedWrapper w(const_cast<typename Cpp::BaseObjectType *>(obj), own, copy);
    return *static_cast<Cpp *>(&w);
  }
};

// basis for registered boxed types
template<typename CppType, typename CType>
class GBoxedWrapper
    : public BoxedWrapper<CType, GBoxedFuncs<CppType, CType>, GBoxed>
{
  typedef BoxedWrapper<CType, GBoxedFuncs<CppType, CType>, GBoxed> super;

public:
  using super::super;

  // essentially g_boxed_copy that can be overridden by subclass if so
  // provided
  CppType copy()
  {
    return GBoxedWrapper::template wrap<CppType>(
        this->gobj_copy_(), true, false);
  }
};

// basis for non-registered plain C boxed type
template<typename CppType, typename CType>
class CBoxedWrapper
    : public BoxedWrapper<CType, CBoxedFuncs<CppType, CType>, CBoxed>
{
public:
  void allocate()
  {
    if (this->data_)
      return;
    this->data_.reset(g_new0(CType, 1), this->_deleter);
  }

  static CppType new_()
  {
    return CBoxedWrapper::template wrap<CppType>(g_new0(CType, 1), true, false);
  }
};

} // namespace detail

} // namespace gi

#endif // GI_BOXED_HPP
