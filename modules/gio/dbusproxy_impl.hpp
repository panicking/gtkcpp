// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROXY_IMPL_HPP_
#define _GI_GIO_DBUSPROXY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncInitable DBusProxyBase::interface_ (gi::interface_tag<Gio::AsyncInitable>)
{ return gi::wrap ((Gio::AsyncInitable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusProxyBase::operator Gio::AsyncInitable ()
{ return interface_ (gi::interface_tag<Gio::AsyncInitable>()); }

Gio::DBusInterface DBusProxyBase::interface_ (gi::interface_tag<Gio::DBusInterface>)
{ return gi::wrap ((Gio::DBusInterface::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusProxyBase::operator Gio::DBusInterface ()
{ return interface_ (gi::interface_tag<Gio::DBusInterface>()); }

Gio::Initable DBusProxyBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusProxyBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDBusProxy* g_dbus_proxy_new_finish (GAsyncResult* res, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_finish (::GAsyncResult* res, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusProxy* g_dbus_proxy_new_for_bus_finish (GAsyncResult* res, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_for_bus_finish (::GAsyncResult* res, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_for_bus_finish (Gio::AsyncResult res)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusProxy* g_dbus_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusProxy* g_dbus_proxy_new_sync (GDBusConnection* connection, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_sync (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name)
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusProxy base::DBusProxyBase::new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name, GLib::Error * _error) noexcept
{
  typedef ::GDBusProxy* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_sync;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_proxy_new (GDBusConnection* connection, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_new (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_new_for_bus;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto info_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GDBusProxyFlags) (flags_to_c), (::GDBusInterfaceInfo*) (info_to_c), (const char*) (name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_proxy_call (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_call (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusProxyBase::call (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::call (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* g_dbus_proxy_call_finish (GDBusProxy* proxy, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_proxy_call_finish (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
GLib::Variant base::DBusProxyBase::call_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_dbus_proxy_call_sync (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_proxy_call_sync (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
GLib::Variant base::DBusProxyBase::call_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_proxy_call_with_unix_fd_list (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_call_with_unix_fd_list (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusProxyBase::call_with_unix_fd_list (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusProxyBase::call_with_unix_fd_list (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* g_dbus_proxy_call_with_unix_fd_list_finish (GDBusProxy* proxy, GUnixFDList** out_fd_list, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_proxy_call_with_unix_fd_list_finish (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}

// GVariant* g_dbus_proxy_call_with_unix_fd_list_sync (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GUnixFDList** out_fd_list, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_proxy_call_with_unix_fd_list_sync (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusProxyBase::call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}

// GVariant* g_dbus_proxy_get_cached_property (GDBusProxy* proxy, const gchar* property_name);
// ::GVariant* g_dbus_proxy_get_cached_property (::GDBusProxy* proxy, const char* property_name);
GLib::Variant base::DBusProxyBase::get_cached_property (const std::string & property_name) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_cached_property;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_dbus_proxy_get_cached_property_names (GDBusProxy* proxy);
// char** g_dbus_proxy_get_cached_property_names (::GDBusProxy* proxy);
std::vector<std::string> base::DBusProxyBase::get_cached_property_names () noexcept
{
  typedef char** (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_cached_property_names;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GDBusConnection* g_dbus_proxy_get_connection (GDBusProxy* proxy);
// ::GDBusConnection* g_dbus_proxy_get_connection (::GDBusProxy* proxy);
Gio::DBusConnection base::DBusProxyBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint g_dbus_proxy_get_default_timeout (GDBusProxy* proxy);
// gint g_dbus_proxy_get_default_timeout (::GDBusProxy* proxy);
gint base::DBusProxyBase::get_default_timeout () noexcept
{
  typedef gint (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_default_timeout;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return _temp_ret;
}

// GDBusProxyFlags g_dbus_proxy_get_flags (GDBusProxy* proxy);
// ::GDBusProxyFlags g_dbus_proxy_get_flags (::GDBusProxy* proxy);
Gio::DBusProxyFlags base::DBusProxyBase::get_flags () noexcept
{
  typedef ::GDBusProxyFlags (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDBusInterfaceInfo* g_dbus_proxy_get_interface_info (GDBusProxy* proxy);
// ::GDBusInterfaceInfo* g_dbus_proxy_get_interface_info (::GDBusProxy* proxy);
Gio::DBusInterfaceInfo base::DBusProxyBase::get_interface_info () noexcept
{
  typedef ::GDBusInterfaceInfo* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_interface_info;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_proxy_get_interface_name (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_interface_name (::GDBusProxy* proxy);
std::string base::DBusProxyBase::get_interface_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_interface_name;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_proxy_get_name (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_name (::GDBusProxy* proxy);
std::string base::DBusProxyBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_name;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_dbus_proxy_get_name_owner (GDBusProxy* proxy);
// char* g_dbus_proxy_get_name_owner (::GDBusProxy* proxy);
std::string base::DBusProxyBase::get_name_owner () noexcept
{
  typedef char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_name_owner;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_dbus_proxy_get_object_path (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_object_path (::GDBusProxy* proxy);
std::string base::DBusProxyBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusProxy* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusProxy*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_dbus_proxy_set_cached_property (GDBusProxy* proxy, const gchar* property_name, GVariant* value);
// void g_dbus_proxy_set_cached_property (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
void base::DBusProxyBase::set_cached_property (const std::string & property_name, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_set_cached_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c), (::GVariant*) (value_to_c));
}
void base::DBusProxyBase::set_cached_property (const std::string & property_name) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_set_cached_property;
  auto value_to_c = nullptr;
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (property_name_to_c), (::GVariant*) (value_to_c));
}

// void g_dbus_proxy_set_default_timeout (GDBusProxy* proxy, gint timeout_msec);
// void g_dbus_proxy_set_default_timeout (::GDBusProxy* proxy, gint timeout_msec);
void base::DBusProxyBase::set_default_timeout (gint timeout_msec) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, gint timeout_msec);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_set_default_timeout;
  auto timeout_msec_to_c = timeout_msec;
  call_wrap_v ((::GDBusProxy*) (gobj_()), (gint) (timeout_msec_to_c));
}

// void g_dbus_proxy_set_interface_info (GDBusProxy* proxy, GDBusInterfaceInfo* info);
// void g_dbus_proxy_set_interface_info (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
void base::DBusProxyBase::set_interface_info (Gio::DBusInterfaceInfo info) noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_set_interface_info;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (::GDBusInterfaceInfo*) (info_to_c));
}
void base::DBusProxyBase::set_interface_info () noexcept
{
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_proxy_set_interface_info;
  auto info_to_c = nullptr;
  call_wrap_v ((::GDBusProxy*) (gobj_()), (::GDBusInterfaceInfo*) (info_to_c));
}

// SKIP; glib:signal container parameter not supported



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_def_impl.hpp>)
#include <gio/dbusproxy_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_impl.hpp>)
#include <gio/dbusproxy_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DBusProxyClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDBusProxyClass *methods = (::GDBusProxyClass *) class_struct;
  (void) methods;

  methods->g_signal = (decltype (methods->g_signal)) detail::method_wrapper<self, void (*) (const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::g_signal_>;
}

// void DBusProxy::g_properties_changed (GDBusProxy* proxy, GVariant* changed_properties, const gchar* const* invalidated_properties);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy, ::GVariant* changed_properties, const char* invalidated_properties);
// SKIP; inconsistent in invalidated_properties pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
// void DBusProxy::g_signal (::GDBusProxy* proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
void DBusProxyClass::g_signal_ (const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters) noexcept
{
  if (!get_struct_()->g_signal) return ;
  typedef void (*call_wrap_t) (::GDBusProxy* proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->g_signal;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto sender_name_to_c = gi::unwrap (sender_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusProxy*) (gobj_()), (const char*) (sender_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
