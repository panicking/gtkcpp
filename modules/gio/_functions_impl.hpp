// AUTO-GENERATED

#ifndef _GI_GIO__FUNCTIONS_IMPL_HPP_
#define _GI_GIO__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace DBusErrorNS_ {

// gchar* g_dbus_error_encode_gerror (const GError* error);
// char* g_dbus_error_encode_gerror (const ::GError* error);
std::string encode_gerror (const GLib::Error & error) noexcept
{
  typedef char* (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_encode_gerror;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_dbus_error_get_remote_error (const GError* error);
// char* g_dbus_error_get_remote_error (const ::GError* error);
std::string get_remote_error (const GLib::Error & error) noexcept
{
  typedef char* (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_get_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_dbus_error_is_remote_error (const GError* error);
// gboolean g_dbus_error_is_remote_error (const ::GError* error);
bool is_remote_error (const GLib::Error & error) noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_is_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GError*) (error_to_c));
  return _temp_ret;
}

// GError* g_dbus_error_new_for_dbus_error (const gchar* dbus_error_name, const gchar* dbus_error_message);
// ::GError* g_dbus_error_new_for_dbus_error (const char* dbus_error_name, const char* dbus_error_message);
GLib::Error new_for_dbus_error (const std::string & dbus_error_name, const std::string & dbus_error_message) noexcept
{
  typedef ::GError* (*call_wrap_t) (const char* dbus_error_name, const char* dbus_error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_new_for_dbus_error;
  auto dbus_error_message_to_c = gi::unwrap (dbus_error_message, gi::transfer_none, gi::direction_in);
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (dbus_error_name_to_c), (const char*) (dbus_error_message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GQuark g_dbus_error_quark ();
// ::GQuark g_dbus_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean g_dbus_error_register_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name);
// gboolean g_dbus_error_register_error (::GQuark error_domain, gint error_code, const char* dbus_error_name);
bool register_error (::GQuark error_domain, gint error_code, const std::string & dbus_error_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GQuark error_domain, gint error_code, const char* dbus_error_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_register_error;
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none, gi::direction_in);
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto _temp_ret = call_wrap_v ((::GQuark) (error_domain_to_c), (gint) (error_code_to_c), (const char*) (dbus_error_name_to_c));
  return _temp_ret;
}

// void g_dbus_error_register_error_domain (const gchar* error_domain_quark_name, volatile gsize* quark_volatile, const GDBusErrorEntry* entries, guint num_entries);
// void g_dbus_error_register_error_domain (const char* error_domain_quark_name, gsize quark_volatile, const ::GDBusErrorEntry** entries, guint num_entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2), inconsistent in quark_volatile pointer depth (1 vs 0)

// void g_dbus_error_set_dbus_error (GError** error, const gchar* dbus_error_name, const gchar* dbus_error_message, const gchar* format);
// void g_dbus_error_set_dbus_error (::GError* error, const char* dbus_error_name, const char* dbus_error_message, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_error_set_dbus_error_valist (GError** error, const gchar* dbus_error_name, const gchar* dbus_error_message, const gchar* format, va_list var_args);
// void g_dbus_error_set_dbus_error_valist (::GError* error, const char* dbus_error_name, const char* dbus_error_message, const char* format,  var_args);
// IGNORE; not introspectable, var_args type  not supported, inconsistent in error pointer depth (2 vs 1)

// gboolean g_dbus_error_strip_remote_error (GError* error);
// gboolean g_dbus_error_strip_remote_error (::GError* error);
bool strip_remote_error (GLib::Error error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_strip_remote_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GError*) (error_to_c));
  return _temp_ret;
}

// gboolean g_dbus_error_unregister_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name);
// gboolean g_dbus_error_unregister_error (::GQuark error_domain, gint error_code, const char* dbus_error_name);
bool unregister_error (::GQuark error_domain, gint error_code, const std::string & dbus_error_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GQuark error_domain, gint error_code, const char* dbus_error_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_error_unregister_error;
  auto dbus_error_name_to_c = gi::unwrap (dbus_error_name, gi::transfer_none, gi::direction_in);
  auto error_code_to_c = error_code;
  auto error_domain_to_c = error_domain;
  auto _temp_ret = call_wrap_v ((::GQuark) (error_domain_to_c), (gint) (error_code_to_c), (const char*) (dbus_error_name_to_c));
  return _temp_ret;
}

} // namespace DBusErrorNS_

namespace ResolverErrorNS_ {

// GQuark g_resolver_error_quark ();
// ::GQuark g_resolver_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_resolver_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ResolverErrorNS_

namespace ResourceErrorNS_ {

// GQuark g_resource_error_quark ();
// ::GQuark g_resource_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace ResourceErrorNS_

namespace TlsChannelBindingErrorNS_ {

// GQuark g_tls_channel_binding_error_quark ();
// ::GQuark g_tls_channel_binding_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_channel_binding_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TlsChannelBindingErrorNS_

namespace TlsErrorNS_ {

// GQuark g_tls_error_quark ();
// ::GQuark g_tls_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace TlsErrorNS_

// void g_bus_get (GBusType bus_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_bus_get (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void bus_get (Gio::BusType bus_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void bus_get (Gio::BusType bus_type, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GDBusConnection* g_bus_get_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_bus_get_finish (::GAsyncResult* res, GError ** error);
Gio::DBusConnection bus_get_finish (Gio::AsyncResult res)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection bus_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusConnection* g_bus_get_sync (GBusType bus_type, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_bus_get_sync (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_get_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint g_bus_own_name (GBusType bus_type, const gchar* name, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_own_name (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, Gio::BusAcquiredCallback::cfunction_type bus_acquired_handler, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler, Gio::BusNameLostCallback::cfunction_type name_lost_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_own_name_with_closures

// guint g_bus_own_name_on_connection (GDBusConnection* connection, const gchar* name, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_own_name_on_connection (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler, Gio::BusNameLostCallback::cfunction_type name_lost_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_own_name_on_connection_with_closures

// guint g_bus_own_name_on_connection_with_closures (GDBusConnection* connection, const gchar* name, GBusNameOwnerFlags flags, GClosure* name_acquired_closure, GClosure* name_lost_closure);
// guint g_bus_own_name_on_connection_with_closures (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
guint bus_own_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameOwnerFlags flags, GObject::Closure name_acquired_closure, GObject::Closure name_lost_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_own_name_on_connection_with_closures;
  auto name_lost_closure_to_c = gi::unwrap (name_lost_closure, gi::transfer_none, gi::direction_in);
  auto name_acquired_closure_to_c = gi::unwrap (name_acquired_closure, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}
guint bus_own_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameOwnerFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_own_name_on_connection_with_closures;
  auto name_lost_closure_to_c = nullptr;
  auto name_acquired_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}

// guint g_bus_own_name_with_closures (GBusType bus_type, const gchar* name, GBusNameOwnerFlags flags, GClosure* bus_acquired_closure, GClosure* name_acquired_closure, GClosure* name_lost_closure);
// guint g_bus_own_name_with_closures (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
guint bus_own_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameOwnerFlags flags, GObject::Closure bus_acquired_closure, GObject::Closure name_acquired_closure, GObject::Closure name_lost_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_own_name_with_closures;
  auto name_lost_closure_to_c = gi::unwrap (name_lost_closure, gi::transfer_none, gi::direction_in);
  auto name_acquired_closure_to_c = gi::unwrap (name_acquired_closure, gi::transfer_none, gi::direction_in);
  auto bus_acquired_closure_to_c = gi::unwrap (bus_acquired_closure, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (bus_acquired_closure_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}
guint bus_own_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameOwnerFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_own_name_with_closures;
  auto name_lost_closure_to_c = nullptr;
  auto name_acquired_closure_to_c = nullptr;
  auto bus_acquired_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameOwnerFlags) (flags_to_c), (::GClosure*) (bus_acquired_closure_to_c), (::GClosure*) (name_acquired_closure_to_c), (::GClosure*) (name_lost_closure_to_c));
  return _temp_ret;
}

// void g_bus_unown_name (guint owner_id);
// void g_bus_unown_name (guint owner_id);
void bus_unown_name (guint owner_id) noexcept
{
  typedef void (*call_wrap_t) (guint owner_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_unown_name;
  auto owner_id_to_c = owner_id;
  call_wrap_v ((guint) (owner_id_to_c));
}

// void g_bus_unwatch_name (guint watcher_id);
// void g_bus_unwatch_name (guint watcher_id);
void bus_unwatch_name (guint watcher_id) noexcept
{
  typedef void (*call_wrap_t) (guint watcher_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_unwatch_name;
  auto watcher_id_to_c = watcher_id;
  call_wrap_v ((guint) (watcher_id_to_c));
}

// guint g_bus_watch_name (GBusType bus_type, const gchar* name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_watch_name (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_watch_name_with_closures

// guint g_bus_watch_name_on_connection (GDBusConnection* connection, const gchar* name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_watch_name_on_connection (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_watch_name_on_connection_with_closures

// guint g_bus_watch_name_on_connection_with_closures (GDBusConnection* connection, const gchar* name, GBusNameWatcherFlags flags, GClosure* name_appeared_closure, GClosure* name_vanished_closure);
// guint g_bus_watch_name_on_connection_with_closures (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
guint bus_watch_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameWatcherFlags flags, GObject::Closure name_appeared_closure, GObject::Closure name_vanished_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_watch_name_on_connection_with_closures;
  auto name_vanished_closure_to_c = gi::unwrap (name_vanished_closure, gi::transfer_none, gi::direction_in);
  auto name_appeared_closure_to_c = gi::unwrap (name_appeared_closure, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}
guint bus_watch_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameWatcherFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_watch_name_on_connection_with_closures;
  auto name_vanished_closure_to_c = nullptr;
  auto name_appeared_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}

// guint g_bus_watch_name_with_closures (GBusType bus_type, const gchar* name, GBusNameWatcherFlags flags, GClosure* name_appeared_closure, GClosure* name_vanished_closure);
// guint g_bus_watch_name_with_closures (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
guint bus_watch_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameWatcherFlags flags, GObject::Closure name_appeared_closure, GObject::Closure name_vanished_closure) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_watch_name_with_closures;
  auto name_vanished_closure_to_c = gi::unwrap (name_vanished_closure, gi::transfer_none, gi::direction_in);
  auto name_appeared_closure_to_c = gi::unwrap (name_appeared_closure, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}
guint bus_watch_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameWatcherFlags flags) noexcept
{
  typedef guint (*call_wrap_t) (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
  call_wrap_t call_wrap_v = (call_wrap_t) g_bus_watch_name_with_closures;
  auto name_vanished_closure_to_c = nullptr;
  auto name_appeared_closure_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (const char*) (name_to_c), (::GBusNameWatcherFlags) (flags_to_c), (::GClosure*) (name_appeared_closure_to_c), (::GClosure*) (name_vanished_closure_to_c));
  return _temp_ret;
}

// gboolean g_content_type_can_be_executable (const gchar* type);
// gboolean g_content_type_can_be_executable (const char* type);
bool content_type_can_be_executable (const std::string & type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_can_be_executable;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return _temp_ret;
}

// gboolean g_content_type_equals (const gchar* type1, const gchar* type2);
// gboolean g_content_type_equals (const char* type1, const char* type2);
bool content_type_equals (const std::string & type1, const std::string & type2) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type1, const char* type2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_equals;
  auto type2_to_c = gi::unwrap (type2, gi::transfer_none, gi::direction_in);
  auto type1_to_c = gi::unwrap (type1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type1_to_c), (const char*) (type2_to_c));
  return _temp_ret;
}

// gchar* g_content_type_from_mime_type (const gchar* mime_type);
// char* g_content_type_from_mime_type (const char* mime_type);
std::string content_type_from_mime_type (const std::string & mime_type) noexcept
{
  typedef char* (*call_wrap_t) (const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_from_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (mime_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_content_type_get_description (const gchar* type);
// char* g_content_type_get_description (const char* type);
std::string content_type_get_description (const std::string & type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_description;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_content_type_get_generic_icon_name (const gchar* type);
// char* g_content_type_get_generic_icon_name (const char* type);
std::string content_type_get_generic_icon_name (const std::string & type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_generic_icon_name;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_content_type_get_icon (const gchar* type);
// ::GIcon* g_content_type_get_icon (const char* type);
Gio::Icon content_type_get_icon (const std::string & type) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_icon;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* const* g_content_type_get_mime_dirs ();
// const char** g_content_type_get_mime_dirs ();
std::vector<std::string> content_type_get_mime_dirs () noexcept
{
  typedef const char** (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_mime_dirs;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gchar* g_content_type_get_mime_type (const gchar* type);
// char* g_content_type_get_mime_type (const char* type);
std::string content_type_get_mime_type (const std::string & type) noexcept
{
  typedef char* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_mime_type;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GIcon* g_content_type_get_symbolic_icon (const gchar* type);
// ::GIcon* g_content_type_get_symbolic_icon (const char* type);
Gio::Icon content_type_get_symbolic_icon (const std::string & type) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_get_symbolic_icon;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_content_type_guess (const gchar* filename, const guchar* data, gsize data_size, gboolean* result_uncertain);
// char* g_content_type_guess (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
std::string content_type_guess (const std::string & filename, guint8 * data, gsize data_size, bool * result_uncertain) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_i = detail::make_list_unwrap_range (data, data_size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()), (gboolean*) (result_uncertain ? &result_uncertain_o : nullptr));
  if (result_uncertain) *result_uncertain = result_uncertain_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string content_type_guess (guint8 * data, gsize data_size, bool * result_uncertain) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_i = detail::make_list_unwrap_range (data, data_size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()), (gboolean*) (result_uncertain ? &result_uncertain_o : nullptr));
  if (result_uncertain) *result_uncertain = result_uncertain_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, bool> content_type_guess (const std::string & filename, guint8 * data, gsize data_size) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_i = detail::make_list_unwrap_range (data, data_size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()), (gboolean*) (&result_uncertain_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), result_uncertain_o);
}
std::tuple<std::string, bool> content_type_guess (guint8 * data, gsize data_size) noexcept
{
  typedef char* (*call_wrap_t) (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_guess;
  gboolean result_uncertain_o {};
  auto data_i = detail::make_list_unwrap_range (data, data_size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto filename_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()), (gboolean*) (&result_uncertain_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), result_uncertain_o);
}

// gchar** g_content_type_guess_for_tree (GFile* root);
// char** g_content_type_guess_for_tree (::GFile* root);
std::vector<std::string> content_type_guess_for_tree (Gio::File root) noexcept
{
  typedef char** (*call_wrap_t) (::GFile* root);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_guess_for_tree;
  auto root_to_c = gi::unwrap (root, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (root_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_content_type_is_a (const gchar* type, const gchar* supertype);
// gboolean g_content_type_is_a (const char* type, const char* supertype);
bool content_type_is_a (const std::string & type, const std::string & supertype) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type, const char* supertype);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_is_a;
  auto supertype_to_c = gi::unwrap (supertype, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c), (const char*) (supertype_to_c));
  return _temp_ret;
}

// gboolean g_content_type_is_mime_type (const gchar* type, const gchar* mime_type);
// gboolean g_content_type_is_mime_type (const char* type, const char* mime_type);
bool content_type_is_mime_type (const std::string & type, const std::string & mime_type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_is_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c), (const char*) (mime_type_to_c));
  return _temp_ret;
}

// gboolean g_content_type_is_unknown (const gchar* type);
// gboolean g_content_type_is_unknown (const char* type);
bool content_type_is_unknown (const std::string & type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_is_unknown;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_to_c));
  return _temp_ret;
}

// void g_content_type_set_mime_dirs (const gchar* const* dirs);
// void g_content_type_set_mime_dirs (const char** dirs);
void content_type_set_mime_dirs (const std::vector<std::string> & dirs) noexcept
{
  typedef void (*call_wrap_t) (const char** dirs);
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_type_set_mime_dirs;
  auto dirs_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (dirs);
  auto dirs_w = unwrap (dirs_i, gi::transfer_none, direction_in);
  auto dirs_to_c = dirs_w.gobj_(false);
  call_wrap_v ((const char**) (dirs_to_c));
}

// GList* g_content_types_get_registered ();
// ::GList* g_content_types_get_registered ();
std::vector<std::string> content_types_get_registered () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_content_types_get_registered;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar* g_dbus_address_escape_value (const gchar* string);
// char* g_dbus_address_escape_value (const char* string);
std::string dbus_address_escape_value (const std::string & string) noexcept
{
  typedef char* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_escape_value;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_dbus_address_get_for_bus_sync (GBusType bus_type, GCancellable* cancellable, GError ** error);
// char* g_dbus_address_get_for_bus_sync (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type)
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_for_bus_sync;
  auto cancellable_to_c = nullptr;
  auto bus_type_to_c = gi::unwrap (bus_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBusType) (bus_type_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_address_get_stream (const gchar* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_address_get_stream (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void dbus_address_get_stream (const std::string & address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void dbus_address_get_stream (const std::string & address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GIOStream* g_dbus_address_get_stream_finish (GAsyncResult* res, gchar** out_guid, GError ** error);
// ::GIOStream* g_dbus_address_get_stream_finish (::GAsyncResult* res, char** out_guid, GError ** error);
Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, std::string * out_guid)
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (out_guid ? &out_guid_o : nullptr), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, std::string * out_guid, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (out_guid ? &out_guid_o : nullptr), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_finish (Gio::AsyncResult res)
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (&out_guid_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GAsyncResult* res, char** out_guid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_finish;
  char* out_guid_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), (char**) (&out_guid_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}

// GIOStream* g_dbus_address_get_stream_sync (const gchar* address, gchar** out_guid, GCancellable* cancellable, GError ** error);
// ::GIOStream* g_dbus_address_get_stream_sync (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (out_guid ? &out_guid_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_guid) *out_guid = gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, Gio::Cancellable cancellable)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address)
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_address_get_stream_sync;
  auto cancellable_to_c = nullptr;
  char* out_guid_o {};
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (char**) (&out_guid_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_guid_o, gi::transfer_full, gi::direction_out));
}

// gchar* g_dbus_escape_object_path (const gchar* s);
// char* g_dbus_escape_object_path (const char* s);
std::string dbus_escape_object_path (const std::string & s) noexcept
{
  typedef char* (*call_wrap_t) (const char* s);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_escape_object_path;
  auto s_to_c = gi::unwrap (s, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (s_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_dbus_escape_object_path_bytestring (const guint8* bytes);
// char* g_dbus_escape_object_path_bytestring (const guint8* bytes);
std::string dbus_escape_object_path_bytestring (const std::vector<guint8> & bytes) noexcept
{
  typedef char* (*call_wrap_t) (const guint8* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_escape_object_path_bytestring;
  auto bytes_i = detail::make_list_unwrap_range<traits::ctype<guint8>::type> (bytes);
  auto bytes_w = unwrap (bytes_i, gi::transfer_none, direction_in);
  auto bytes_to_c = bytes_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_dbus_generate_guid ();
// char* g_dbus_generate_guid ();
std::string dbus_generate_guid () noexcept
{
  typedef char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_generate_guid;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_dbus_gvalue_to_gvariant (const GValue* gvalue, const GVariantType* type);
// ::GVariant* g_dbus_gvalue_to_gvariant (const ::GValue* gvalue, const ::GVariantType* type);
GLib::Variant dbus_gvalue_to_gvariant (const GObject::Value & gvalue, const GLib::VariantType & type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GValue* gvalue, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_gvalue_to_gvariant;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto gvalue_to_c = gi::unwrap (gvalue, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GValue*) (gvalue_to_c), (const ::GVariantType*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_gvariant_to_gvalue (GVariant* value, GValue* out_gvalue);
// void g_dbus_gvariant_to_gvalue (::GVariant* value, ::GValue* out_gvalue);
void dbus_gvariant_to_gvalue (GLib::Variant value, GObject::Value & out_gvalue) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, ::GValue* out_gvalue);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_gvariant_to_gvalue;
  traits::unset_wrapper<GValue>::type out_gvalue_c;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariant*) (value_to_c), (::GValue*) ((GValue*) &out_gvalue_c));
  out_gvalue = gi::wrap ((GValue*) &out_gvalue_c, gi::transfer_none, gi::direction_out);
}
GObject::Value dbus_gvariant_to_gvalue (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, ::GValue* out_gvalue);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_gvariant_to_gvalue;
  traits::unset_wrapper<GValue>::type out_gvalue_c;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariant*) (value_to_c), (::GValue*) ((GValue*) &out_gvalue_c));
  return gi::wrap ((GValue*) &out_gvalue_c, gi::transfer_none, gi::direction_out);
}

// gboolean g_dbus_is_address (const gchar* string);
// gboolean g_dbus_is_address (const char* string);
bool dbus_is_address (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_error_name (const gchar* string);
// gboolean g_dbus_is_error_name (const char* string);
bool dbus_is_error_name (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_error_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_guid (const gchar* string);
// gboolean g_dbus_is_guid (const char* string);
bool dbus_is_guid (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_guid;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_interface_name (const gchar* string);
// gboolean g_dbus_is_interface_name (const char* string);
bool dbus_is_interface_name (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_interface_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_member_name (const gchar* string);
// gboolean g_dbus_is_member_name (const char* string);
bool dbus_is_member_name (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_member_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_name (const gchar* string);
// gboolean g_dbus_is_name (const char* string);
bool dbus_is_name (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_dbus_is_supported_address (const gchar* string, GError ** error);
// gboolean g_dbus_is_supported_address (const char* string, GError ** error);
bool dbus_is_supported_address (const std::string & string)
{
  typedef gboolean (*call_wrap_t) (const char* string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_supported_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool dbus_is_supported_address (const std::string & string, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_supported_address;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dbus_is_unique_name (const gchar* string);
// gboolean g_dbus_is_unique_name (const char* string);
bool dbus_is_unique_name (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_is_unique_name;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// guint8* g_dbus_unescape_object_path (const gchar* s);
// guint8* g_dbus_unescape_object_path (const char* s);
std::vector<guint8> dbus_unescape_object_path (const std::string & s) noexcept
{
  typedef guint8* (*call_wrap_t) (const char* s);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_unescape_object_path;
  auto s_to_c = gi::unwrap (s, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (s_to_c));
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_none);
}

// GIOErrorEnum g_io_error_from_errno (gint err_no);
// ::GIOErrorEnum g_io_error_from_errno (gint err_no);
Gio::IOErrorEnum io_error_from_errno (gint err_no) noexcept
{
  typedef ::GIOErrorEnum (*call_wrap_t) (gint err_no);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_error_from_errno;
  auto err_no_to_c = err_no;
  auto _temp_ret = call_wrap_v ((gint) (err_no_to_c));
  return gi::wrap (_temp_ret);
}

// GQuark g_io_error_quark ();
// ::GQuark g_io_error_quark ();
GLib::Quark io_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GList* g_io_modules_load_all_in_directory (const gchar* dirname);
// ::GList* g_io_modules_load_all_in_directory (const char* dirname);
std::vector<Gio::IOModule> io_modules_load_all_in_directory (const std::string & dirname) noexcept
{
  typedef ::GList* (*call_wrap_t) (const char* dirname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_modules_load_all_in_directory;
  auto dirname_to_c = gi::unwrap (dirname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (dirname_to_c));
  return gi::detail::wrap_list<Gio::IOModule> (_temp_ret, gi::transfer_full);
}

// GList* g_io_modules_load_all_in_directory_with_scope (const gchar* dirname, GIOModuleScope* scope);
// ::GList* g_io_modules_load_all_in_directory_with_scope (const char* dirname,  scope);
// SKIP; scope type  not supported

// void g_io_modules_scan_all_in_directory (const char* dirname);
// void g_io_modules_scan_all_in_directory (const char* dirname);
void io_modules_scan_all_in_directory (const std::string & dirname) noexcept
{
  typedef void (*call_wrap_t) (const char* dirname);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_modules_scan_all_in_directory;
  auto dirname_to_c = gi::unwrap (dirname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (dirname_to_c));
}

// void g_io_modules_scan_all_in_directory_with_scope (const gchar* dirname, GIOModuleScope* scope);
// void g_io_modules_scan_all_in_directory_with_scope (const char* dirname,  scope);
// SKIP; scope type  not supported

// GSettingsBackend* g_keyfile_settings_backend_new (const gchar* filename, const gchar* root_path, const gchar* root_group);
// ::GSettingsBackend* g_keyfile_settings_backend_new (const char* filename, const char* root_path, const char* root_group);
Gio::SettingsBackend keyfile_settings_backend_new (const std::string & filename, const std::string & root_path, const std::string & root_group) noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) (const char* filename, const char* root_path, const char* root_group);
  call_wrap_t call_wrap_v = (call_wrap_t) g_keyfile_settings_backend_new;
  auto root_group_to_c = gi::unwrap (root_group, gi::transfer_none, gi::direction_in);
  auto root_path_to_c = gi::unwrap (root_path, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (root_path_to_c), (const char*) (root_group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SettingsBackend keyfile_settings_backend_new (const std::string & filename, const std::string & root_path) noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) (const char* filename, const char* root_path, const char* root_group);
  call_wrap_t call_wrap_v = (call_wrap_t) g_keyfile_settings_backend_new;
  auto root_group_to_c = nullptr;
  auto root_path_to_c = gi::unwrap (root_path, gi::transfer_none, gi::direction_in);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (const char*) (root_path_to_c), (const char*) (root_group_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettingsBackend* g_memory_settings_backend_new ();
// ::GSettingsBackend* g_memory_settings_backend_new ();
Gio::SettingsBackend memory_settings_backend_new () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_memory_settings_backend_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_networking_init ();
// void g_networking_init ();
// IGNORE; marked ignore

// GSettingsBackend* g_null_settings_backend_new ();
// ::GSettingsBackend* g_null_settings_backend_new ();
Gio::SettingsBackend null_settings_backend_new () noexcept
{
  typedef ::GSettingsBackend* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_null_settings_backend_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSource* g_pollable_source_new (GObject* pollable_stream);
// ::GSource* g_pollable_source_new (::GObject* pollable_stream);
GLib::Source pollable_source_new (GObject::Object pollable_stream) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_source_new;
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSource* g_pollable_source_new_full (gpointer pollable_stream, GSource* child_source, GCancellable* cancellable);
// ::GSource* g_pollable_source_new_full (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
GLib::Source pollable_source_new_full (GObject::Object pollable_stream, GLib::Source child_source, Gio::Cancellable cancellable) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_source_new_full;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto child_source_to_c = gi::unwrap (child_source, gi::transfer_none, gi::direction_in);
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c), (::GSource*) (child_source_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Source pollable_source_new_full (GObject::Object pollable_stream) noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_source_new_full;
  auto cancellable_to_c = nullptr;
  auto child_source_to_c = nullptr;
  auto pollable_stream_to_c = gi::unwrap (pollable_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (pollable_stream_to_c), (::GSource*) (child_source_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gssize g_pollable_stream_read (GInputStream* stream, void* buffer, gsize count, gboolean blocking, GCancellable* cancellable, GError ** error);
// gssize g_pollable_stream_read (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_read;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_read;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gssize g_pollable_stream_write (GOutputStream* stream, void* buffer, gsize count, gboolean blocking, GCancellable* cancellable, GError ** error);
// gssize g_pollable_stream_write (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write;
  auto cancellable_to_c = nullptr;
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_pollable_stream_write_all (GOutputStream* stream, void* buffer, gsize count, gboolean blocking, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_pollable_stream_write_all (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pollable_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto blocking_to_c = blocking;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (stream_to_c), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gboolean) (blocking_to_c), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}

// char** g_resources_enumerate_children (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// char** g_resources_enumerate_children (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
std::vector<std::string> resources_enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef char** (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> resources_enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_resources_get_info (const char* path, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resources_get_info (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
bool resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags)
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), &error);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  gi::check_error (error);
  return _temp_ret;
}
bool resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), _error ? &_error_o : nullptr);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize, guint32> resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, size_o, flags_o);
}
std::tuple<bool, gsize, guint32> resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, size_o, flags_o);
}

// GBytes* g_resources_lookup_data (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* g_resources_lookup_data (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GLib::Bytes resources_lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GBytes* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes resources_lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInputStream* g_resources_open_stream (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* g_resources_open_stream (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
Gio::InputStream resources_open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GInputStream* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream resources_open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_resources_register (GResource* resource);
// void g_resources_register (::GResource* resource);
void resources_register (Gio::Resource resource) noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_register;
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResource*) (resource_to_c));
}

// void g_resources_unregister (GResource* resource);
// void g_resources_unregister (::GResource* resource);
void resources_unregister (Gio::Resource resource) noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_unregister;
  auto resource_to_c = gi::unwrap (resource, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GResource*) (resource_to_c));
}

// gboolean g_unix_is_mount_path_system_internal (const char* mount_path);
// gboolean g_unix_is_mount_path_system_internal (const char* mount_path);
bool unix_is_mount_path_system_internal (const std::string & mount_path) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* mount_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_is_mount_path_system_internal;
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c));
  return _temp_ret;
}

// gboolean g_unix_is_system_device_path (const char* device_path);
// gboolean g_unix_is_system_device_path (const char* device_path);
bool unix_is_system_device_path (const std::string & device_path) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* device_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_is_system_device_path;
  auto device_path_to_c = gi::unwrap (device_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (device_path_to_c));
  return _temp_ret;
}

// gboolean g_unix_is_system_fs_type (const char* fs_type);
// gboolean g_unix_is_system_fs_type (const char* fs_type);
bool unix_is_system_fs_type (const std::string & fs_type) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* fs_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_is_system_fs_type;
  auto fs_type_to_c = gi::unwrap (fs_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (fs_type_to_c));
  return _temp_ret;
}

// GUnixMountEntry* g_unix_mount_at (const char* mount_path, guint64* time_read);
// ::GUnixMountEntry* g_unix_mount_at (const char* mount_path, guint64* time_read);
Gio::UnixMountEntry unix_mount_at (const std::string & mount_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::UnixMountEntry, guint64> unix_mount_at (const std::string & mount_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* mount_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_at;
  guint64 time_read_o {};
  auto mount_path_to_c = gi::unwrap (mount_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (mount_path_to_c), (guint64*) (&time_read_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), time_read_o);
}

// gint g_unix_mount_compare (GUnixMountEntry* mount1, GUnixMountEntry* mount2);
// gint g_unix_mount_compare (::GUnixMountEntry* mount1, ::GUnixMountEntry* mount2);
gint unix_mount_compare (Gio::UnixMountEntry mount1, Gio::UnixMountEntry mount2) noexcept
{
  typedef gint (*call_wrap_t) (::GUnixMountEntry* mount1, ::GUnixMountEntry* mount2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_compare;
  auto mount2_to_c = gi::unwrap (mount2, gi::transfer_none, gi::direction_in);
  auto mount1_to_c = gi::unwrap (mount1, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount1_to_c), (::GUnixMountEntry*) (mount2_to_c));
  return _temp_ret;
}

// GUnixMountEntry* g_unix_mount_copy (GUnixMountEntry* mount_entry);
// ::GUnixMountEntry* g_unix_mount_copy (::GUnixMountEntry* mount_entry);
Gio::UnixMountEntry unix_mount_copy (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_copy;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GUnixMountEntry* g_unix_mount_for (const char* file_path, guint64* time_read);
// ::GUnixMountEntry* g_unix_mount_for (const char* file_path, guint64* time_read);
Gio::UnixMountEntry unix_mount_for (const std::string & file_path, guint64 * time_read) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::UnixMountEntry, guint64> unix_mount_for (const std::string & file_path) noexcept
{
  typedef ::GUnixMountEntry* (*call_wrap_t) (const char* file_path, guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_for;
  guint64 time_read_o {};
  auto file_path_to_c = gi::unwrap (file_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (file_path_to_c), (guint64*) (&time_read_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), time_read_o);
}

// const char* g_unix_mount_get_device_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_device_path (::GUnixMountEntry* mount_entry);
std::string unix_mount_get_device_path (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_get_device_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_unix_mount_get_fs_type (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_fs_type (::GUnixMountEntry* mount_entry);
std::string unix_mount_get_fs_type (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_get_fs_type;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_unix_mount_get_mount_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_mount_path (::GUnixMountEntry* mount_entry);
std::string unix_mount_get_mount_path (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_get_mount_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_unix_mount_get_options (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_options (::GUnixMountEntry* mount_entry);
std::string unix_mount_get_options (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_get_options;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* g_unix_mount_get_root_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_root_path (::GUnixMountEntry* mount_entry);
std::string unix_mount_get_root_path (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef const char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_get_root_path;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_unix_mount_guess_can_eject (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_guess_can_eject (::GUnixMountEntry* mount_entry);
bool unix_mount_guess_can_eject (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_guess_can_eject;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// GIcon* g_unix_mount_guess_icon (GUnixMountEntry* mount_entry);
// ::GIcon* g_unix_mount_guess_icon (::GUnixMountEntry* mount_entry);
Gio::Icon unix_mount_guess_icon (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_guess_icon;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_unix_mount_guess_name (GUnixMountEntry* mount_entry);
// char* g_unix_mount_guess_name (::GUnixMountEntry* mount_entry);
std::string unix_mount_guess_name (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef char* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_guess_name;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_mount_guess_should_display (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_guess_should_display (::GUnixMountEntry* mount_entry);
bool unix_mount_guess_should_display (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_guess_should_display;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// GIcon* g_unix_mount_guess_symbolic_icon (GUnixMountEntry* mount_entry);
// ::GIcon* g_unix_mount_guess_symbolic_icon (::GUnixMountEntry* mount_entry);
Gio::Icon unix_mount_guess_symbolic_icon (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_guess_symbolic_icon;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_unix_mount_is_readonly (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_is_readonly (::GUnixMountEntry* mount_entry);
bool unix_mount_is_readonly (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_is_readonly;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// gboolean g_unix_mount_is_system_internal (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_is_system_internal (::GUnixMountEntry* mount_entry);
bool unix_mount_is_system_internal (Gio::UnixMountEntry mount_entry) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUnixMountEntry* mount_entry);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_is_system_internal;
  auto mount_entry_to_c = gi::unwrap (mount_entry, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GUnixMountEntry*) (mount_entry_to_c));
  return _temp_ret;
}

// gboolean g_unix_mount_points_changed_since (guint64 time);
// gboolean g_unix_mount_points_changed_since (guint64 time);
bool unix_mount_points_changed_since (guint64 time) noexcept
{
  typedef gboolean (*call_wrap_t) (guint64 time);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_points_changed_since;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((guint64) (time_to_c));
  return _temp_ret;
}

// GList* g_unix_mount_points_get (guint64* time_read);
// ::GList* g_unix_mount_points_get (guint64* time_read);
std::vector<Gio::UnixMountPoint> unix_mount_points_get (guint64 * time_read) noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_points_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::detail::wrap_list<Gio::UnixMountPoint> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<Gio::UnixMountPoint>, guint64> unix_mount_points_get () noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_points_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (&time_read_o));
  return std::make_tuple (gi::detail::wrap_list<Gio::UnixMountPoint> (_temp_ret, gi::transfer_full), time_read_o);
}

// gboolean g_unix_mounts_changed_since (guint64 time);
// gboolean g_unix_mounts_changed_since (guint64 time);
bool unix_mounts_changed_since (guint64 time) noexcept
{
  typedef gboolean (*call_wrap_t) (guint64 time);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mounts_changed_since;
  auto time_to_c = time;
  auto _temp_ret = call_wrap_v ((guint64) (time_to_c));
  return _temp_ret;
}

// GList* g_unix_mounts_get (guint64* time_read);
// ::GList* g_unix_mounts_get (guint64* time_read);
std::vector<Gio::UnixMountEntry> unix_mounts_get (guint64 * time_read) noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mounts_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (time_read ? &time_read_o : nullptr));
  if (time_read) *time_read = time_read_o;
  return gi::detail::wrap_list<Gio::UnixMountEntry> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<Gio::UnixMountEntry>, guint64> unix_mounts_get () noexcept
{
  typedef ::GList* (*call_wrap_t) (guint64* time_read);
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mounts_get;
  guint64 time_read_o {};
  auto _temp_ret = call_wrap_v ((guint64*) (&time_read_o));
  return std::make_tuple (gi::detail::wrap_list<Gio::UnixMountEntry> (_temp_ret, gi::transfer_full), time_read_o);
}

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
