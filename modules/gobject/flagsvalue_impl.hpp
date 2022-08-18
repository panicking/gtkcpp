// AUTO-GENERATED

#ifndef _GI_GOBJECT_FLAGSVALUE_IMPL_HPP_
#define _GI_GOBJECT_FLAGSVALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static guint _field_value_get (const ::GFlagsValue* obj) { return (guint) obj->value; }
// guint FlagsValue::value (const ::GFlagsValue* obj);
// guint FlagsValue::value (const ::GFlagsValue* obj);
guint base::FlagsValueBase::value_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GFlagsValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GFlagsValue*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::GFlagsValue* obj, guint _value) { obj->value = (decltype(obj->value)) _value; }
//  FlagsValue::value (::GFlagsValue* obj, guint _value);
// void FlagsValue::value (::GFlagsValue* obj, guint _value);
void base::FlagsValueBase::value_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GFlagsValue* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GFlagsValue*) (gobj_()), (guint) (_value_to_c));
}

static const char* _field_value_name_get (const ::GFlagsValue* obj) { return (const char*) obj->value_name; }
// const char* FlagsValue::value_name (const ::GFlagsValue* obj);
// const char* FlagsValue::value_name (const ::GFlagsValue* obj);
std::string base::FlagsValueBase::value_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GFlagsValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_name_get;
  auto _temp_ret = call_wrap_v ((const ::GFlagsValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_value_nick_get (const ::GFlagsValue* obj) { return (const char*) obj->value_nick; }
// const char* FlagsValue::value_nick (const ::GFlagsValue* obj);
// const char* FlagsValue::value_nick (const ::GFlagsValue* obj);
std::string base::FlagsValueBase::value_nick_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GFlagsValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_nick_get;
  auto _temp_ret = call_wrap_v ((const ::GFlagsValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra_def_impl.hpp>)
#include <gobject/flagsvalue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/flagsvalue_extra_impl.hpp>)
#include <gobject/flagsvalue_extra_impl.hpp>
#endif
#endif

#endif
