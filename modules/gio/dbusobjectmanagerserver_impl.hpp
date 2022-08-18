// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERSERVER_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERSERVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusObjectManager DBusObjectManagerServerBase::interface_ (gi::interface_tag<Gio::DBusObjectManager>)
{ return gi::wrap ((Gio::DBusObjectManager::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusObjectManagerServerBase::operator Gio::DBusObjectManager ()
{ return interface_ (gi::interface_tag<Gio::DBusObjectManager>()); }

// GDBusObjectManagerServer* g_dbus_object_manager_server_new (const gchar* object_path);
// ::GDBusObjectManagerServer* g_dbus_object_manager_server_new (const char* object_path);
Gio::DBusObjectManagerServer base::DBusObjectManagerServerBase::new_ (const std::string & object_path) noexcept
{
  typedef ::GDBusObjectManagerServer* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_object_manager_server_export (GDBusObjectManagerServer* manager, GDBusObjectSkeleton* object);
// void g_dbus_object_manager_server_export (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
void base::DBusObjectManagerServerBase::export_ (Gio::DBusObjectSkeleton object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_export;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
}

// void g_dbus_object_manager_server_export_uniquely (GDBusObjectManagerServer* manager, GDBusObjectSkeleton* object);
// void g_dbus_object_manager_server_export_uniquely (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
void base::DBusObjectManagerServerBase::export_uniquely (Gio::DBusObjectSkeleton object) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_export_uniquely;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
}

// GDBusConnection* g_dbus_object_manager_server_get_connection (GDBusObjectManagerServer* manager);
// ::GDBusConnection* g_dbus_object_manager_server_get_connection (::GDBusObjectManagerServer* manager);
Gio::DBusConnection base::DBusObjectManagerServerBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusObjectManagerServer* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_dbus_object_manager_server_is_exported (GDBusObjectManagerServer* manager, GDBusObjectSkeleton* object);
// gboolean g_dbus_object_manager_server_is_exported (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
bool base::DBusObjectManagerServerBase::is_exported (Gio::DBusObjectSkeleton object) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusObjectSkeleton* object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_is_exported;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusObjectSkeleton*) (object_to_c));
  return _temp_ret;
}

// void g_dbus_object_manager_server_set_connection (GDBusObjectManagerServer* manager, GDBusConnection* connection);
// void g_dbus_object_manager_server_set_connection (::GDBusObjectManagerServer* manager, ::GDBusConnection* connection);
void base::DBusObjectManagerServerBase::set_connection (Gio::DBusConnection connection) noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_set_connection;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}
void base::DBusObjectManagerServerBase::set_connection () noexcept
{
  typedef void (*call_wrap_t) (::GDBusObjectManagerServer* manager, ::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_set_connection;
  auto connection_to_c = nullptr;
  call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (::GDBusConnection*) (connection_to_c));
}

// gboolean g_dbus_object_manager_server_unexport (GDBusObjectManagerServer* manager, const gchar* object_path);
// gboolean g_dbus_object_manager_server_unexport (::GDBusObjectManagerServer* manager, const char* object_path);
bool base::DBusObjectManagerServerBase::unexport (const std::string & object_path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusObjectManagerServer* manager, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_manager_server_unexport;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusObjectManagerServer*) (gobj_()), (const char*) (object_path_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra_def_impl.hpp>)
#include <gio/dbusobjectmanagerserver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerserver_extra_impl.hpp>)
#include <gio/dbusobjectmanagerserver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectManagerServerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDBusObjectManagerServerClass *methods = (::GDBusObjectManagerServerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
