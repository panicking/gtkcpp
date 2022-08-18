#ifndef GI_OBJECTBASE_HPP
#define GI_OBJECTBASE_HPP

#include <type_traits>
#include <utility>

#include <glib-object.h>
#include <glib.h>
// not mentioned in gir, but needs to be included for some parts
#include <glib/gstdio.h>

namespace gi
{
namespace detail
{
struct GObjectFuncs
{
  static void *ref(void *data) { return g_object_ref(data); }
  static void *sink(void *data) { return g_object_ref_sink(data); }
  static void free(void *data) { g_object_unref(data); }
  static void *float_(void *data)
  {
    g_object_force_floating((GObject *)data);
    return g_object_ref(data);
  }
};

template<typename Funcs>
class Wrapper
{
protected:
  void *data_ = nullptr;

  static void *_ref(void *data) { return data ? Funcs::ref(data) : data; }
  static void *_sink(void *data) { return data ? Funcs::sink(data) : data; }
  static void *_float(void *data) { return data ? Funcs::float_(data) : data; }
  static void _deleter(void *data)
  {
    if (data)
      Funcs::free(data);
  }

public:
  Wrapper(decltype(data_) d = nullptr, bool own = true, bool sink = true)
      : data_(own ? d : (sink ? _sink(d) : _ref(d)))
  {}

  ~Wrapper() { _deleter(data_); }

  Wrapper(const Wrapper &other)
  {
    _deleter(data_);
    data_ = _ref(other.data_);
  }

  Wrapper(Wrapper &&other) noexcept
  {
    _deleter(data_);
    data_ = other.data_;
    other.data_ = nullptr;
  }

  explicit operator bool() { return (bool)data_; }

  Wrapper &operator=(const Wrapper &other)
  {
    if (&other != this) {
      _deleter(data_);
      data_ = _ref(other.data_);
    }
    return *this;
  }

  Wrapper &operator=(Wrapper &&other) noexcept
  {
    if (&other != this) {
      _deleter(data_);
      data_ = other.data_;
      other.data_ = nullptr;
    }
    return *this;
  }

  bool operator==(const Wrapper &other) const { return data_ == other.data_; }

  bool operator==(std::nullptr_t o) const
  {
    (void)o;
    return data_ == o;
  }

  bool operator!=(const Wrapper &other) const { return data_ != other.data_; }

  bool operator!=(std::nullptr_t o) const { return data_ != o; }
};

class wrapper_tag
{};

template<typename CType, typename Funcs, GType GTYPE_>
class WrapperBase : public Wrapper<Funcs>, public wrapper_tag
{
  typedef WrapperBase self;
  typedef Wrapper<Funcs> super_type;

public:
  typedef CType BaseObjectType;

  BaseObjectType *gobj_() { return (BaseObjectType *)this->data_; }
  const BaseObjectType *gobj_() const
  {
    return (const BaseObjectType *)this->data_;
  }
  BaseObjectType *gobj_copy_() const
  {
    return (BaseObjectType *)self::_ref(this->data_);
  }
  BaseObjectType *gobj_float_() const
  {
    return (BaseObjectType *)self::_float(this->data_);
  }
  BaseObjectType *release_()
  {
    void *r = nullptr;
    std::swap(this->data_, r);
    return (BaseObjectType *)r;
  }

  static GType get_type_() { return GTYPE_; }
  GType gobj_type_() { return GTYPE_; }

  WrapperBase(BaseObjectType *p = nullptr, bool own = true, bool argout = true)
      : super_type(p, own, argout)
  {}

  WrapperBase(const self &other) = default;
  WrapperBase(self &&other) = default;

  self &operator=(const self &other) = default;
  self &operator=(self &&other) = default;

  template<typename Cpp>
  static Cpp wrap(
      const typename Cpp::BaseObjectType *obj, bool own, bool argout)
  {
    static_assert(sizeof(Cpp) == sizeof(self), "type wrap not supported");
    static_assert(std::is_base_of<self, Cpp>::value, "type wrap not supported");
    WrapperBase w((self::BaseObjectType *)(obj), own, argout);
    return *static_cast<Cpp *>(&w);
  }
};

typedef WrapperBase<void, GObjectFuncs, G_TYPE_NONE> ObjectBase;

// foundation for Variant that will be generated
struct GVariantFuncs
{
  static void *ref(void *data) { return g_variant_ref((GVariant *)data); }
  static void *sink(void *data) { return g_variant_ref_sink((GVariant *)data); }
  static void free(void *data) { g_variant_unref((GVariant *)data); }
  static void *float_(void *data) { return data; }
};

typedef WrapperBase<GVariant, GVariantFuncs, G_TYPE_VARIANT> VariantWrapper;

} // namespace detail

} // namespace gi

#endif // GI_OBJECTBASE_HPP
