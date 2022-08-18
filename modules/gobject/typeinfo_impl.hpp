// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINFO_IMPL_HPP_
#define _GI_GOBJECT_TYPEINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint16 _field_class_size_get (const ::GTypeInfo* obj) { return (guint16) obj->class_size; }
// guint16 TypeInfo::class_size (const ::GTypeInfo* obj);
// guint16 TypeInfo::class_size (const ::GTypeInfo* obj);
guint16 base::TypeInfoBase::class_size_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_class_size_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_class_size_set (::GTypeInfo* obj, guint16 _value) { obj->class_size = (decltype(obj->class_size)) _value; }
//  TypeInfo::class_size (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::class_size (::GTypeInfo* obj, guint16 _value);
void base::TypeInfoBase::class_size_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeInfo* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_class_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeInfo*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_instance_size_get (const ::GTypeInfo* obj) { return (guint16) obj->instance_size; }
// guint16 TypeInfo::instance_size (const ::GTypeInfo* obj);
// guint16 TypeInfo::instance_size (const ::GTypeInfo* obj);
guint16 base::TypeInfoBase::instance_size_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_instance_size_set (::GTypeInfo* obj, guint16 _value) { obj->instance_size = (decltype(obj->instance_size)) _value; }
//  TypeInfo::instance_size (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::instance_size (::GTypeInfo* obj, guint16 _value);
void base::TypeInfoBase::instance_size_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeInfo* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_instance_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeInfo*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_n_preallocs_get (const ::GTypeInfo* obj) { return (guint16) obj->n_preallocs; }
// guint16 TypeInfo::n_preallocs (const ::GTypeInfo* obj);
// guint16 TypeInfo::n_preallocs (const ::GTypeInfo* obj);
guint16 base::TypeInfoBase::n_preallocs_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_preallocs_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_n_preallocs_set (::GTypeInfo* obj, guint16 _value) { obj->n_preallocs = (decltype(obj->n_preallocs)) _value; }
//  TypeInfo::n_preallocs (::GTypeInfo* obj, guint16 _value);
// void TypeInfo::n_preallocs (::GTypeInfo* obj, guint16 _value);
void base::TypeInfoBase::n_preallocs_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeInfo* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_preallocs_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GTypeInfo*) (gobj_()), (guint16) (_value_to_c));
}

static const ::GTypeValueTable* _field_value_table_get (const ::GTypeInfo* obj) { return (const ::GTypeValueTable*) obj->value_table; }
// const ::GTypeValueTable* TypeInfo::value_table (const ::GTypeInfo* obj);
// const ::GTypeValueTable* TypeInfo::value_table (const ::GTypeInfo* obj);
GObject::TypeValueTable base::TypeInfoBase::value_table_ () const noexcept
{
  typedef const ::GTypeValueTable* (*call_wrap_t) (const ::GTypeInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_table_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinfo_extra_def_impl.hpp>)
#include <gobject/typeinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinfo_extra_impl.hpp>)
#include <gobject/typeinfo_extra_impl.hpp>
#endif
#endif

#endif
