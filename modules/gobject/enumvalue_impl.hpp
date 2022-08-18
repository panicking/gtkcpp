// AUTO-GENERATED

#ifndef _GI_GOBJECT_ENUMVALUE_IMPL_HPP_
#define _GI_GOBJECT_ENUMVALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static gint _field_value_get (const ::GEnumValue* obj) { return (gint) obj->value; }
// gint EnumValue::value (const ::GEnumValue* obj);
// gint EnumValue::value (const ::GEnumValue* obj);
gint base::EnumValueBase::value_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GEnumValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumValue*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::GEnumValue* obj, gint _value) { obj->value = (decltype(obj->value)) _value; }
//  EnumValue::value (::GEnumValue* obj, gint _value);
// void EnumValue::value (::GEnumValue* obj, gint _value);
void base::EnumValueBase::value_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GEnumValue* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GEnumValue*) (gobj_()), (gint) (_value_to_c));
}

static const char* _field_value_name_get (const ::GEnumValue* obj) { return (const char*) obj->value_name; }
// const char* EnumValue::value_name (const ::GEnumValue* obj);
// const char* EnumValue::value_name (const ::GEnumValue* obj);
std::string base::EnumValueBase::value_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GEnumValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_name_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_value_nick_get (const ::GEnumValue* obj) { return (const char*) obj->value_nick; }
// const char* EnumValue::value_nick (const ::GEnumValue* obj);
// const char* EnumValue::value_nick (const ::GEnumValue* obj);
std::string base::EnumValueBase::value_nick_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GEnumValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_nick_get;
  auto _temp_ret = call_wrap_v ((const ::GEnumValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra_def_impl.hpp>)
#include <gobject/enumvalue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/enumvalue_extra_impl.hpp>)
#include <gobject/enumvalue_extra_impl.hpp>
#endif
#endif

#endif
