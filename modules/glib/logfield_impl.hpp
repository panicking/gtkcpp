// AUTO-GENERATED

#ifndef _GI_GLIB_LOGFIELD_IMPL_HPP_
#define _GI_GLIB_LOGFIELD_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static const char* _field_key_get (const ::GLogField* obj) { return (const char*) obj->key; }
// const char* LogField::key (const ::GLogField* obj);
// const char* LogField::key (const ::GLogField* obj);
std::string base::LogFieldBase::key_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GLogField* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_key_get;
  auto _temp_ret = call_wrap_v ((const ::GLogField*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gssize _field_length_get (const ::GLogField* obj) { return (gssize) obj->length; }
// gssize LogField::length (const ::GLogField* obj);
// gssize LogField::length (const ::GLogField* obj);
gssize base::LogFieldBase::length_ () const noexcept
{
  typedef gssize (*call_wrap_t) (const ::GLogField* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::GLogField*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::GLogField* obj, gssize _value) { obj->length = (decltype(obj->length)) _value; }
//  LogField::length (::GLogField* obj, gssize _value);
// void LogField::length (::GLogField* obj, gssize _value);
void base::LogFieldBase::length_ (gssize _value) noexcept
{
  typedef void (*call_wrap_t) (::GLogField* obj, gssize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GLogField*) (gobj_()), (gssize) (_value_to_c));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/logfield_extra_def_impl.hpp>)
#include <glib/logfield_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/logfield_extra_impl.hpp>)
#include <glib/logfield_extra_impl.hpp>
#endif
#endif

#endif
