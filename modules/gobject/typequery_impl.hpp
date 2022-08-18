// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEQUERY_IMPL_HPP_
#define _GI_GOBJECT_TYPEQUERY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static GType _field_type_get (const ::GTypeQuery* obj) { return (GType) obj->type; }
// GType TypeQuery::type (const ::GTypeQuery* obj);
// GType TypeQuery::type (const ::GTypeQuery* obj);
GType base::TypeQueryBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GTypeQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GTypeQuery* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  TypeQuery::type (::GTypeQuery* obj, GType _value);
// void TypeQuery::type (::GTypeQuery* obj, GType _value);
void base::TypeQueryBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeQuery* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeQuery*) (gobj_()), (GType) (_value_to_c));
}

static const char* _field_type_name_get (const ::GTypeQuery* obj) { return (const char*) obj->type_name; }
// const char* TypeQuery::type_name (const ::GTypeQuery* obj);
// const char* TypeQuery::type_name (const ::GTypeQuery* obj);
std::string base::TypeQueryBase::type_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GTypeQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_name_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeQuery*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint _field_class_size_get (const ::GTypeQuery* obj) { return (guint) obj->class_size; }
// guint TypeQuery::class_size (const ::GTypeQuery* obj);
// guint TypeQuery::class_size (const ::GTypeQuery* obj);
guint base::TypeQueryBase::class_size_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GTypeQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_class_size_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_class_size_set (::GTypeQuery* obj, guint _value) { obj->class_size = (decltype(obj->class_size)) _value; }
//  TypeQuery::class_size (::GTypeQuery* obj, guint _value);
// void TypeQuery::class_size (::GTypeQuery* obj, guint _value);
void base::TypeQueryBase::class_size_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeQuery* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_class_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeQuery*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_instance_size_get (const ::GTypeQuery* obj) { return (guint) obj->instance_size; }
// guint TypeQuery::instance_size (const ::GTypeQuery* obj);
// guint TypeQuery::instance_size (const ::GTypeQuery* obj);
guint base::TypeQueryBase::instance_size_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GTypeQuery* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeQuery*) (gobj_()));
  return _temp_ret;
}

static void _field_instance_size_set (::GTypeQuery* obj, guint _value) { obj->instance_size = (decltype(obj->instance_size)) _value; }
//  TypeQuery::instance_size (::GTypeQuery* obj, guint _value);
// void TypeQuery::instance_size (::GTypeQuery* obj, guint _value);
void base::TypeQueryBase::instance_size_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeQuery* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeQuery*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typequery_extra_def_impl.hpp>)
#include <gobject/typequery_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typequery_extra_impl.hpp>)
#include <gobject/typequery_extra_impl.hpp>
#endif
#endif

#endif
