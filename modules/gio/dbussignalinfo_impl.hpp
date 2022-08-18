// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSIGNALINFO_IMPL_HPP_
#define _GI_GIO_DBUSSIGNALINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusSignalInfo* obj) { return (gint) obj->ref_count; }
// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj);
// gint DBusSignalInfo::ref_count (const ::GDBusSignalInfo* obj);
gint base::DBusSignalInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusSignalInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusSignalInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusSignalInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusSignalInfo::ref_count (::GDBusSignalInfo* obj, gint _value);
// void DBusSignalInfo::ref_count (::GDBusSignalInfo* obj, gint _value);
void base::DBusSignalInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusSignalInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusSignalInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_name_get (const ::GDBusSignalInfo* obj) { return (char*) obj->name; }
// char* DBusSignalInfo::name (const ::GDBusSignalInfo* obj);
// char* DBusSignalInfo::name (const ::GDBusSignalInfo* obj);
std::string base::DBusSignalInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusSignalInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusSignalInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusSignalInfo* g_dbus_signal_info_ref (GDBusSignalInfo* info);
// ::GDBusSignalInfo* g_dbus_signal_info_ref (::GDBusSignalInfo* info);
// IGNORE; marked ignore

// void g_dbus_signal_info_unref (GDBusSignalInfo* info);
// void g_dbus_signal_info_unref (::GDBusSignalInfo* info);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra_def_impl.hpp>)
#include <gio/dbussignalinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbussignalinfo_extra_impl.hpp>)
#include <gio/dbussignalinfo_extra_impl.hpp>
#endif
#endif

#endif
