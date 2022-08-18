// AUTO-GENERATED

#ifndef _GI_GIO_DBUSACTIONGROUP_IMPL_HPP_
#define _GI_GIO_DBUSACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ActionGroup DBusActionGroupBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusActionGroupBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::RemoteActionGroup DBusActionGroupBase::interface_ (gi::interface_tag<Gio::RemoteActionGroup>)
{ return gi::wrap ((Gio::RemoteActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusActionGroupBase::operator Gio::RemoteActionGroup ()
{ return interface_ (gi::interface_tag<Gio::RemoteActionGroup>()); }

// GDBusActionGroup* g_dbus_action_group_get (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path);
// ::GDBusActionGroup* g_dbus_action_group_get (::GDBusConnection* connection, const char* bus_name, const char* object_path);
Gio::DBusActionGroup base::DBusActionGroupBase::get (Gio::DBusConnection connection, const std::string & bus_name, const std::string & object_path) noexcept
{
  typedef ::GDBusActionGroup* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_action_group_get;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (bus_name_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusActionGroup base::DBusActionGroupBase::get (Gio::DBusConnection connection, const std::string & object_path) noexcept
{
  typedef ::GDBusActionGroup* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_action_group_get;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (bus_name_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusactiongroup_extra_def_impl.hpp>)
#include <gio/dbusactiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusactiongroup_extra_impl.hpp>)
#include <gio/dbusactiongroup_extra_impl.hpp>
#endif
#endif

#endif
