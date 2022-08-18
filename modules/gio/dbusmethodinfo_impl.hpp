// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINFO_IMPL_HPP_
#define _GI_GIO_DBUSMETHODINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static gint _field_ref_count_get (const ::GDBusMethodInfo* obj) { return (gint) obj->ref_count; }
// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj);
// gint DBusMethodInfo::ref_count (const ::GDBusMethodInfo* obj);
gint base::DBusMethodInfoBase::ref_count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GDBusMethodInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusMethodInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_ref_count_set (::GDBusMethodInfo* obj, gint _value) { obj->ref_count = (decltype(obj->ref_count)) _value; }
//  DBusMethodInfo::ref_count (::GDBusMethodInfo* obj, gint _value);
// void DBusMethodInfo::ref_count (::GDBusMethodInfo* obj, gint _value);
void base::DBusMethodInfoBase::ref_count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInfo* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ref_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GDBusMethodInfo*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_name_get (const ::GDBusMethodInfo* obj) { return (char*) obj->name; }
// char* DBusMethodInfo::name (const ::GDBusMethodInfo* obj);
// char* DBusMethodInfo::name (const ::GDBusMethodInfo* obj);
std::string base::DBusMethodInfoBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GDBusMethodInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GDBusMethodInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusMethodInfo* g_dbus_method_info_ref (GDBusMethodInfo* info);
// ::GDBusMethodInfo* g_dbus_method_info_ref (::GDBusMethodInfo* info);
// IGNORE; marked ignore

// void g_dbus_method_info_unref (GDBusMethodInfo* info);
// void g_dbus_method_info_unref (::GDBusMethodInfo* info);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra_def_impl.hpp>)
#include <gio/dbusmethodinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinfo_extra_impl.hpp>)
#include <gio/dbusmethodinfo_extra_impl.hpp>
#endif
#endif

#endif
