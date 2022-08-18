// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTPROXY_IMPL_HPP_
#define _GI_GIO_DBUSOBJECTPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DBusObject DBusObjectProxyBase::interface_ (gi::interface_tag<Gio::DBusObject>)
{ return gi::wrap ((Gio::DBusObject::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusObjectProxyBase::operator Gio::DBusObject ()
{ return interface_ (gi::interface_tag<Gio::DBusObject>()); }

// GDBusObjectProxy* g_dbus_object_proxy_new (GDBusConnection* connection, const gchar* object_path);
// ::GDBusObjectProxy* g_dbus_object_proxy_new (::GDBusConnection* connection, const char* object_path);
Gio::DBusObjectProxy base::DBusObjectProxyBase::new_ (Gio::DBusConnection connection, const std::string & object_path) noexcept
{
  typedef ::GDBusObjectProxy* (*call_wrap_t) (::GDBusConnection* connection, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_proxy_new;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusConnection* g_dbus_object_proxy_get_connection (GDBusObjectProxy* proxy);
// ::GDBusConnection* g_dbus_object_proxy_get_connection (::GDBusObjectProxy* proxy);
Gio::DBusConnection base::DBusObjectProxyBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusObjectProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_object_proxy_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusObjectProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectproxy_extra_def_impl.hpp>)
#include <gio/dbusobjectproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectproxy_extra_impl.hpp>)
#include <gio/dbusobjectproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusObjectProxyClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDBusObjectProxyClass *methods = (::GDBusObjectProxyClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
