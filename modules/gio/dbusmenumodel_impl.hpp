// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMENUMODEL_IMPL_HPP_
#define _GI_GIO_DBUSMENUMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusMenuModel* g_dbus_menu_model_get (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path);
// ::GDBusMenuModel* g_dbus_menu_model_get (::GDBusConnection* connection, const char* bus_name, const char* object_path);
Gio::DBusMenuModel base::DBusMenuModelBase::get (Gio::DBusConnection connection, const std::string & bus_name, const std::string & object_path) noexcept
{
  typedef ::GDBusMenuModel* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_menu_model_get;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (bus_name_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMenuModel base::DBusMenuModelBase::get (Gio::DBusConnection connection, const std::string & object_path) noexcept
{
  typedef ::GDBusMenuModel* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_menu_model_get;
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
#if __has_include(<gio/dbusmenumodel_extra_def_impl.hpp>)
#include <gio/dbusmenumodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmenumodel_extra_impl.hpp>)
#include <gio/dbusmenumodel_extra_impl.hpp>
#endif
#endif

#endif
