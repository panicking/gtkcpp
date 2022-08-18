// AUTO-GENERATED

#ifndef _GI_GIO_DBUSERRORENTRY_IMPL_HPP_
#define _GI_GIO_DBUSERRORENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_error_code_get (const ::GDBusErrorEntry* obj) { return (gint) obj->error_code; }
// gint DBusErrorEntry::error_code (const ::GDBusErrorEntry* obj);
// gint DBusErrorEntry::error_code (const ::GDBusErrorEntry* obj);
gint base::DBusErrorEntryBase::error_code_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusErrorEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_error_code_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusErrorEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_error_code_set (::GDBusErrorEntry* obj, gint _value) { obj->error_code = (decltype(obj->error_code)) _value; }
//  DBusErrorEntry::error_code (::GDBusErrorEntry* obj, gint _value);
// void DBusErrorEntry::error_code (::GDBusErrorEntry* obj, gint _value);
void base::DBusErrorEntryBase::error_code_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusErrorEntry* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_error_code_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusErrorEntry*) (gobj_()), (gint) (_value_to_c));
}

static const char* _field_dbus_error_name_get (const ::GDBusErrorEntry* obj) { return (const char*) obj->dbus_error_name; }
// const char* DBusErrorEntry::dbus_error_name (const ::GDBusErrorEntry* obj);
// const char* DBusErrorEntry::dbus_error_name (const ::GDBusErrorEntry* obj);
std::string base::DBusErrorEntryBase::dbus_error_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GDBusErrorEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dbus_error_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusErrorEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbuserrorentry_extra_def_impl.hpp>)
#include <gio/dbuserrorentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbuserrorentry_extra_impl.hpp>)
#include <gio/dbuserrorentry_extra_impl.hpp>
#endif
#endif

#endif
