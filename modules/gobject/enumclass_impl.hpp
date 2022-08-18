// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMCLASS_IMPL_HPP_
#define _GI_GOBJECT_ENUMCLASS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static gint _field_minimum_get (const ::GEnumClass* obj) { return (gint) obj->minimum; }
// gint EnumClass::minimum (const ::GEnumClass* obj);
// gint EnumClass::minimum (const ::GEnumClass* obj);
gint base::EnumClassBase::minimum_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GEnumClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minimum_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumClass*) (gobj_()));
  return _temp_ret;
}

static void _field_minimum_set (::GEnumClass* obj, gint _value) { obj->minimum = (decltype(obj->minimum)) _value; }
//  EnumClass::minimum (::GEnumClass* obj, gint _value);
// void EnumClass::minimum (::GEnumClass* obj, gint _value);
void base::EnumClassBase::minimum_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GEnumClass* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minimum_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GEnumClass*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_maximum_get (const ::GEnumClass* obj) { return (gint) obj->maximum; }
// gint EnumClass::maximum (const ::GEnumClass* obj);
// gint EnumClass::maximum (const ::GEnumClass* obj);
gint base::EnumClassBase::maximum_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GEnumClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maximum_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumClass*) (gobj_()));
  return _temp_ret;
}

static void _field_maximum_set (::GEnumClass* obj, gint _value) { obj->maximum = (decltype(obj->maximum)) _value; }
//  EnumClass::maximum (::GEnumClass* obj, gint _value);
// void EnumClass::maximum (::GEnumClass* obj, gint _value);
void base::EnumClassBase::maximum_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GEnumClass* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maximum_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GEnumClass*) (gobj_()), (gint) (_value_to_c));
}

static guint _field_n_values_get (const ::GEnumClass* obj) { return (guint) obj->n_values; }
// guint EnumClass::n_values (const ::GEnumClass* obj);
// guint EnumClass::n_values (const ::GEnumClass* obj);
guint base::EnumClassBase::n_values_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GEnumClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_values_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumClass*) (gobj_()));
  return _temp_ret;
}

static void _field_n_values_set (::GEnumClass* obj, guint _value) { obj->n_values = (decltype(obj->n_values)) _value; }
//  EnumClass::n_values (::GEnumClass* obj, guint _value);
// void EnumClass::n_values (::GEnumClass* obj, guint _value);
void base::EnumClassBase::n_values_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GEnumClass* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_values_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GEnumClass*) (gobj_()), (guint) (_value_to_c));
}

static ::GEnumValue* _field_values_get (const ::GEnumClass* obj) { return (::GEnumValue*) obj->values; }
// ::GEnumValue* EnumClass::values (const ::GEnumClass* obj);
// ::GEnumValue* EnumClass::values (const ::GEnumClass* obj);
GObject::EnumValue base::EnumClassBase::values_ () const noexcept
{
  typedef ::GEnumValue* (*call_wrap_t) (const ::GEnumClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_values_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumClass*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra_def_impl.hpp>)
#include <gobject/enumclass_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumclass_extra_impl.hpp>)
#include <gobject/enumclass_extra_impl.hpp>
#endif
#endif

#endif
