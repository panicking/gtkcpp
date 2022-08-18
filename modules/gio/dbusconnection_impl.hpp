// AUTO-GENERATED

#ifndef _GI_GIO_DBUSCONNECTION_IMPL_HPP_
#define _GI_GIO_DBUSCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncInitable DBusConnectionBase::interface_ (gi::interface_tag<Gio::AsyncInitable>)
{ return gi::wrap ((Gio::AsyncInitable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusConnectionBase::operator Gio::AsyncInitable ()
{ return interface_ (gi::interface_tag<Gio::AsyncInitable>()); }

Gio::Initable DBusConnectionBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DBusConnectionBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDBusConnection* g_dbus_connection_new_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_finish (::GAsyncResult* res, GError ** error);
Gio::DBusConnection base::DBusConnectionBase::new_finish (Gio::AsyncResult res)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusConnection* g_dbus_connection_new_for_address_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_for_address_finish (::GAsyncResult* res, GError ** error);
Gio::DBusConnection base::DBusConnectionBase::new_for_address_finish (Gio::AsyncResult res)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_for_address_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusConnection* g_dbus_connection_new_for_address_sync (const gchar* address, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_for_address_sync (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
Gio::DBusConnection base::DBusConnectionBase::new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable)
{
  typedef ::GDBusConnection* (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags)
{
  typedef ::GDBusConnection* (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusConnection* g_dbus_connection_new_sync (GIOStream* stream, const gchar* guid, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_sync (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
Gio::DBusConnection base::DBusConnectionBase::new_sync (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags)
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_sync (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusConnection base::DBusConnectionBase::new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_sync;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_connection_new (GIOStream* stream, const gchar* guid, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_new (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::new_ (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = gi::unwrap (guid, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::new_ (Gio::IOStream stream, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto guid_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GIOStream*) (stream_to_c), (const char*) (guid_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_dbus_connection_new_for_address (const gchar* address, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_new_for_address (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::new_for_address (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto observer_to_c = gi::unwrap (observer, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::new_for_address (const std::string & address, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_new_for_address;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto observer_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (address_to_c), (::GDBusConnectionFlags) (flags_to_c), (::GDBusAuthObserver*) (observer_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// guint g_dbus_connection_add_filter (GDBusConnection* connection, GDBusMessageFilterFunction filter_function, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_dbus_connection_add_filter (::GDBusConnection* connection, Gio::DBusMessageFilterFunction::cfunction_type filter_function, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
guint base::DBusConnectionBase::add_filter (Gio::DBusMessageFilterFunction filter_function) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, Gio::DBusMessageFilterFunction::cfunction_type filter_function, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_add_filter;
  auto filter_function_wrap_ = filter_function ? unwrap (std::move (filter_function), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (Gio::DBusMessageFilterFunction::cfunction_type) (filter_function_wrap_ ? &filter_function_wrap_->wrapper : nullptr), (void*) (filter_function_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_function_wrap_ ? &filter_function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// void g_dbus_connection_call (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_call (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::call (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::call (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* g_dbus_connection_call_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_connection_call_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
GLib::Variant base::DBusConnectionBase::call_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_dbus_connection_call_sync (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_connection_call_sync (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
GLib::Variant base::DBusConnectionBase::call_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_sync;
  auto cancellable_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_connection_call_with_unix_fd_list (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_call_with_unix_fd_list (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::call_with_unix_fd_list (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::call_with_unix_fd_list (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GVariant* g_dbus_connection_call_with_unix_fd_list_finish (GDBusConnection* connection, GUnixFDList** out_fd_list, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_connection_call_with_unix_fd_list_finish (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_finish (Gio::AsyncResult res)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GUnixFDList**) (&out_fd_list_o), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}

// GVariant* g_dbus_connection_call_with_unix_fd_list_sync (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GUnixFDList** out_fd_list, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_connection_call_with_unix_fd_list_sync (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (out_fd_list ? &out_fd_list_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_fd_list) *out_fd_list = gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec)
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = gi::unwrap (reply_type, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = gi::unwrap (bus_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Variant, Gio::UnixFDList> base::DBusConnectionBase::call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_call_with_unix_fd_list_sync;
  auto cancellable_to_c = nullptr;
  ::GUnixFDList* out_fd_list_o {};
  auto fd_list_to_c = nullptr;
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto reply_type_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto method_name_to_c = gi::unwrap (method_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto bus_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (method_name_to_c), (::GVariant*) (parameters_to_c), (const ::GVariantType*) (reply_type_to_c), (::GDBusCallFlags) (flags_to_c), (gint) (timeout_msec_to_c), (::GUnixFDList*) (fd_list_to_c), (::GUnixFDList**) (&out_fd_list_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (out_fd_list_o, gi::transfer_full, gi::direction_out));
}

// void g_dbus_connection_close (GDBusConnection* connection, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_close (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::close (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::close (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dbus_connection_close_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// gboolean g_dbus_connection_close_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
bool base::DBusConnectionBase::close_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::close_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dbus_connection_close_sync (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// gboolean g_dbus_connection_close_sync (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
bool base::DBusConnectionBase::close_sync (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::close_sync ()
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::close_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DBusConnectionBase::close_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_close_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dbus_connection_emit_signal (GDBusConnection* connection, const gchar* destination_bus_name, const gchar* object_path, const gchar* interface_name, const gchar* signal_name, GVariant* parameters, GError ** error);
// gboolean g_dbus_connection_emit_signal (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
bool base::DBusConnectionBase::emit_signal (const std::string & destination_bus_name, const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Variant parameters)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_emit_signal;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto destination_bus_name_to_c = gi::unwrap (destination_bus_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (destination_bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::emit_signal (const std::string & object_path, const std::string & interface_name, const std::string & signal_name)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_emit_signal;
  auto parameters_to_c = nullptr;
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto destination_bus_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (destination_bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::emit_signal (const std::string & destination_bus_name, const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Variant parameters, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_emit_signal;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto destination_bus_name_to_c = gi::unwrap (destination_bus_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (destination_bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DBusConnectionBase::emit_signal (const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_emit_signal;
  auto parameters_to_c = nullptr;
  auto signal_name_to_c = gi::unwrap (signal_name, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto destination_bus_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (destination_bus_name_to_c), (const char*) (object_path_to_c), (const char*) (interface_name_to_c), (const char*) (signal_name_to_c), (::GVariant*) (parameters_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint g_dbus_connection_export_action_group (GDBusConnection* connection, const gchar* object_path, GActionGroup* action_group, GError ** error);
// guint g_dbus_connection_export_action_group (::GDBusConnection* connection, const char* object_path, ::GActionGroup* action_group, GError ** error);
guint base::DBusConnectionBase::export_action_group (const std::string & object_path, Gio::ActionGroup action_group)
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GActionGroup* action_group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_export_action_group;
  auto action_group_to_c = gi::unwrap (action_group, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GActionGroup*) (action_group_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::DBusConnectionBase::export_action_group (const std::string & object_path, Gio::ActionGroup action_group, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GActionGroup* action_group, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_export_action_group;
  auto action_group_to_c = gi::unwrap (action_group, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GActionGroup*) (action_group_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint g_dbus_connection_export_menu_model (GDBusConnection* connection, const gchar* object_path, GMenuModel* menu, GError ** error);
// guint g_dbus_connection_export_menu_model (::GDBusConnection* connection, const char* object_path, ::GMenuModel* menu, GError ** error);
guint base::DBusConnectionBase::export_menu_model (const std::string & object_path, Gio::MenuModel menu)
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GMenuModel* menu, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_export_menu_model;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GMenuModel*) (menu_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::DBusConnectionBase::export_menu_model (const std::string & object_path, Gio::MenuModel menu, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GMenuModel* menu, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_export_menu_model;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GMenuModel*) (menu_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dbus_connection_flush (GDBusConnection* connection, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_flush (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::flush (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DBusConnectionBase::flush (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dbus_connection_flush_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// gboolean g_dbus_connection_flush_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
bool base::DBusConnectionBase::flush_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::flush_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dbus_connection_flush_sync (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// gboolean g_dbus_connection_flush_sync (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
bool base::DBusConnectionBase::flush_sync (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::flush_sync ()
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_sync;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::flush_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DBusConnectionBase::flush_sync (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_flush_sync;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GDBusCapabilityFlags g_dbus_connection_get_capabilities (GDBusConnection* connection);
// ::GDBusCapabilityFlags g_dbus_connection_get_capabilities (::GDBusConnection* connection);
Gio::DBusCapabilityFlags base::DBusConnectionBase::get_capabilities () noexcept
{
  typedef ::GDBusCapabilityFlags (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_capabilities;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_dbus_connection_get_exit_on_close (GDBusConnection* connection);
// gboolean g_dbus_connection_get_exit_on_close (::GDBusConnection* connection);
bool base::DBusConnectionBase::get_exit_on_close () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_exit_on_close;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return _temp_ret;
}

// GDBusConnectionFlags g_dbus_connection_get_flags (GDBusConnection* connection);
// ::GDBusConnectionFlags g_dbus_connection_get_flags (::GDBusConnection* connection);
Gio::DBusConnectionFlags base::DBusConnectionBase::get_flags () noexcept
{
  typedef ::GDBusConnectionFlags (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* g_dbus_connection_get_guid (GDBusConnection* connection);
// const char* g_dbus_connection_get_guid (::GDBusConnection* connection);
std::string base::DBusConnectionBase::get_guid () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_guid;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint32 g_dbus_connection_get_last_serial (GDBusConnection* connection);
// guint32 g_dbus_connection_get_last_serial (::GDBusConnection* connection);
guint32 base::DBusConnectionBase::get_last_serial () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_last_serial;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return _temp_ret;
}

// GCredentials* g_dbus_connection_get_peer_credentials (GDBusConnection* connection);
// ::GCredentials* g_dbus_connection_get_peer_credentials (::GDBusConnection* connection);
Gio::Credentials base::DBusConnectionBase::get_peer_credentials () noexcept
{
  typedef ::GCredentials* (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_peer_credentials;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIOStream* g_dbus_connection_get_stream (GDBusConnection* connection);
// ::GIOStream* g_dbus_connection_get_stream (::GDBusConnection* connection);
Gio::IOStream base::DBusConnectionBase::get_stream () noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_stream;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_connection_get_unique_name (GDBusConnection* connection);
// const char* g_dbus_connection_get_unique_name (::GDBusConnection* connection);
std::string base::DBusConnectionBase::get_unique_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_get_unique_name;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_dbus_connection_is_closed (GDBusConnection* connection);
// gboolean g_dbus_connection_is_closed (::GDBusConnection* connection);
bool base::DBusConnectionBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_is_closed;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()));
  return _temp_ret;
}

// guint g_dbus_connection_register_object (GDBusConnection* connection, const gchar* object_path, GDBusInterfaceInfo* interface_info, const GDBusInterfaceVTable* vtable, gpointer user_data, GDestroyNotify user_data_free_func, GError ** error);
// guint g_dbus_connection_register_object (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, const ::GDBusInterfaceVTable* vtable, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func, GError ** error);
// SKIP; callback misses closure info

// guint g_dbus_connection_register_object_with_closures (GDBusConnection* connection, const gchar* object_path, GDBusInterfaceInfo* interface_info, GClosure* method_call_closure, GClosure* get_property_closure, GClosure* set_property_closure, GError ** error);
// guint g_dbus_connection_register_object_with_closures (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
guint base::DBusConnectionBase::register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GObject::Closure method_call_closure, GObject::Closure get_property_closure, GObject::Closure set_property_closure)
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_register_object_with_closures;
  auto set_property_closure_to_c = gi::unwrap (set_property_closure, gi::transfer_none, gi::direction_in);
  auto get_property_closure_to_c = gi::unwrap (get_property_closure, gi::transfer_none, gi::direction_in);
  auto method_call_closure_to_c = gi::unwrap (method_call_closure, gi::transfer_none, gi::direction_in);
  auto interface_info_to_c = gi::unwrap (interface_info, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GDBusInterfaceInfo*) (interface_info_to_c), (::GClosure*) (method_call_closure_to_c), (::GClosure*) (get_property_closure_to_c), (::GClosure*) (set_property_closure_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::DBusConnectionBase::register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info)
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_register_object_with_closures;
  auto set_property_closure_to_c = nullptr;
  auto get_property_closure_to_c = nullptr;
  auto method_call_closure_to_c = nullptr;
  auto interface_info_to_c = gi::unwrap (interface_info, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GDBusInterfaceInfo*) (interface_info_to_c), (::GClosure*) (method_call_closure_to_c), (::GClosure*) (get_property_closure_to_c), (::GClosure*) (set_property_closure_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::DBusConnectionBase::register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GObject::Closure method_call_closure, GObject::Closure get_property_closure, GObject::Closure set_property_closure, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_register_object_with_closures;
  auto set_property_closure_to_c = gi::unwrap (set_property_closure, gi::transfer_none, gi::direction_in);
  auto get_property_closure_to_c = gi::unwrap (get_property_closure, gi::transfer_none, gi::direction_in);
  auto method_call_closure_to_c = gi::unwrap (method_call_closure, gi::transfer_none, gi::direction_in);
  auto interface_info_to_c = gi::unwrap (interface_info, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GDBusInterfaceInfo*) (interface_info_to_c), (::GClosure*) (method_call_closure_to_c), (::GClosure*) (get_property_closure_to_c), (::GClosure*) (set_property_closure_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint base::DBusConnectionBase::register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_register_object_with_closures;
  auto set_property_closure_to_c = nullptr;
  auto get_property_closure_to_c = nullptr;
  auto method_call_closure_to_c = nullptr;
  auto interface_info_to_c = gi::unwrap (interface_info, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (object_path_to_c), (::GDBusInterfaceInfo*) (interface_info_to_c), (::GClosure*) (method_call_closure_to_c), (::GClosure*) (get_property_closure_to_c), (::GClosure*) (set_property_closure_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint g_dbus_connection_register_subtree (GDBusConnection* connection, const gchar* object_path, const GDBusSubtreeVTable* vtable, GDBusSubtreeFlags flags, gpointer user_data, GDestroyNotify user_data_free_func, GError ** error);
// guint g_dbus_connection_register_subtree (::GDBusConnection* connection, const char* object_path, const ::GDBusSubtreeVTable* vtable, ::GDBusSubtreeFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func, GError ** error);
// SKIP; callback misses closure info

// void g_dbus_connection_remove_filter (GDBusConnection* connection, guint filter_id);
// void g_dbus_connection_remove_filter (::GDBusConnection* connection, guint filter_id);
void base::DBusConnectionBase::remove_filter (guint filter_id) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, guint filter_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_remove_filter;
  auto filter_id_to_c = filter_id;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (filter_id_to_c));
}

// gboolean g_dbus_connection_send_message (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, volatile guint32* out_serial, GError ** error);
// gboolean g_dbus_connection_send_message (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
bool base::DBusConnectionBase::send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message;
  guint32 out_serial_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), &error);
  if (out_serial) *out_serial = out_serial_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusConnectionBase::send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message;
  guint32 out_serial_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), _error ? &_error_o : nullptr);
  if (out_serial) *out_serial = out_serial_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, guint32> base::DBusConnectionBase::send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message;
  guint32 out_serial_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (guint32*) (&out_serial_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, out_serial_o);
}
std::tuple<bool, guint32> base::DBusConnectionBase::send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message;
  guint32 out_serial_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (guint32*) (&out_serial_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, out_serial_o);
}

// void g_dbus_connection_send_message_with_reply (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_send_message_with_reply (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DBusConnectionBase::send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  if (out_serial) *out_serial = out_serial_o;
}
void base::DBusConnectionBase::send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  if (out_serial) *out_serial = out_serial_o;
}
guint32 base::DBusConnectionBase::send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return out_serial_o;
}
guint32 base::DBusConnectionBase::send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return out_serial_o;
}

// GDBusMessage* g_dbus_connection_send_message_with_reply_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// ::GDBusMessage* g_dbus_connection_send_message_with_reply_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_finish (Gio::AsyncResult res)
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusMessage* g_dbus_connection_send_message_with_reply_sync (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable, GError ** error);
// ::GDBusMessage* g_dbus_connection_send_message_with_reply_sync (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable)
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_serial) *out_serial = out_serial_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial)
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_serial) *out_serial = out_serial_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_serial) *out_serial = out_serial_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (out_serial ? &out_serial_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_serial) *out_serial = out_serial_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::DBusMessage, guint32> base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable)
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), out_serial_o);
}
std::tuple<Gio::DBusMessage, guint32> base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec)
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), out_serial_o);
}
std::tuple<Gio::DBusMessage, guint32> base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), out_serial_o);
}
std::tuple<Gio::DBusMessage, guint32> base::DBusConnectionBase::send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_send_message_with_reply_sync;
  auto cancellable_to_c = nullptr;
  guint32 out_serial_o {};
  auto timeout_msec_to_c = timeout_msec;
  auto flags_to_c = gi::unwrap (flags);
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (::GDBusMessage*) (message_to_c), (::GDBusSendMessageFlags) (flags_to_c), (gint) (timeout_msec_to_c), (guint32*) (&out_serial_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), out_serial_o);
}

// void g_dbus_connection_set_exit_on_close (GDBusConnection* connection, gboolean exit_on_close);
// void g_dbus_connection_set_exit_on_close (::GDBusConnection* connection, gboolean exit_on_close);
void base::DBusConnectionBase::set_exit_on_close (gboolean exit_on_close) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, gboolean exit_on_close);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_set_exit_on_close;
  auto exit_on_close_to_c = exit_on_close;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (gboolean) (exit_on_close_to_c));
}

// guint g_dbus_connection_signal_subscribe (GDBusConnection* connection, const gchar* sender, const gchar* interface_name, const gchar* member, const gchar* object_path, const gchar* arg0, GDBusSignalFlags flags, GDBusSignalCallback callback, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_dbus_connection_signal_subscribe (::GDBusConnection* connection, const char* sender, const char* interface_name, const char* member, const char* object_path, const char* arg0, ::GDBusSignalFlags flags, Gio::DBusSignalCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
guint base::DBusConnectionBase::signal_subscribe (const std::string & sender, const std::string & interface_name, const std::string & member, const std::string & object_path, const std::string & arg0, Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* sender, const char* interface_name, const char* member, const char* object_path, const char* arg0, ::GDBusSignalFlags flags, Gio::DBusSignalCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_signal_subscribe;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto arg0_to_c = gi::unwrap (arg0, gi::transfer_none, gi::direction_in);
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto member_to_c = gi::unwrap (member, gi::transfer_none, gi::direction_in);
  auto interface_name_to_c = gi::unwrap (interface_name, gi::transfer_none, gi::direction_in);
  auto sender_to_c = gi::unwrap (sender, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (sender_to_c), (const char*) (interface_name_to_c), (const char*) (member_to_c), (const char*) (object_path_to_c), (const char*) (arg0_to_c), (::GDBusSignalFlags) (flags_to_c), (Gio::DBusSignalCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return _temp_ret;
}
guint base::DBusConnectionBase::signal_subscribe (Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept
{
  typedef guint (*call_wrap_t) (::GDBusConnection* connection, const char* sender, const char* interface_name, const char* member, const char* object_path, const char* arg0, ::GDBusSignalFlags flags, Gio::DBusSignalCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_signal_subscribe;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto arg0_to_c = nullptr;
  auto object_path_to_c = nullptr;
  auto member_to_c = nullptr;
  auto interface_name_to_c = nullptr;
  auto sender_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (const char*) (sender_to_c), (const char*) (interface_name_to_c), (const char*) (member_to_c), (const char*) (object_path_to_c), (const char*) (arg0_to_c), (::GDBusSignalFlags) (flags_to_c), (Gio::DBusSignalCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return _temp_ret;
}

// void g_dbus_connection_signal_unsubscribe (GDBusConnection* connection, guint subscription_id);
// void g_dbus_connection_signal_unsubscribe (::GDBusConnection* connection, guint subscription_id);
void base::DBusConnectionBase::signal_unsubscribe (guint subscription_id) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, guint subscription_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_signal_unsubscribe;
  auto subscription_id_to_c = subscription_id;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (subscription_id_to_c));
}

// void g_dbus_connection_start_message_processing (GDBusConnection* connection);
// void g_dbus_connection_start_message_processing (::GDBusConnection* connection);
void base::DBusConnectionBase::start_message_processing () noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_start_message_processing;
  call_wrap_v ((::GDBusConnection*) (gobj_()));
}

// void g_dbus_connection_unexport_action_group (GDBusConnection* connection, guint export_id);
// void g_dbus_connection_unexport_action_group (::GDBusConnection* connection, guint export_id);
void base::DBusConnectionBase::unexport_action_group (guint export_id) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, guint export_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_unexport_action_group;
  auto export_id_to_c = export_id;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (export_id_to_c));
}

// void g_dbus_connection_unexport_menu_model (GDBusConnection* connection, guint export_id);
// void g_dbus_connection_unexport_menu_model (::GDBusConnection* connection, guint export_id);
void base::DBusConnectionBase::unexport_menu_model (guint export_id) noexcept
{
  typedef void (*call_wrap_t) (::GDBusConnection* connection, guint export_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_unexport_menu_model;
  auto export_id_to_c = export_id;
  call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (export_id_to_c));
}

// gboolean g_dbus_connection_unregister_object (GDBusConnection* connection, guint registration_id);
// gboolean g_dbus_connection_unregister_object (::GDBusConnection* connection, guint registration_id);
bool base::DBusConnectionBase::unregister_object (guint registration_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, guint registration_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_unregister_object;
  auto registration_id_to_c = registration_id;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (registration_id_to_c));
  return _temp_ret;
}

// gboolean g_dbus_connection_unregister_subtree (GDBusConnection* connection, guint registration_id);
// gboolean g_dbus_connection_unregister_subtree (::GDBusConnection* connection, guint registration_id);
bool base::DBusConnectionBase::unregister_subtree (guint registration_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusConnection* connection, guint registration_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_connection_unregister_subtree;
  auto registration_id_to_c = registration_id;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (gobj_()), (guint) (registration_id_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra_def_impl.hpp>)
#include <gio/dbusconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra_impl.hpp>)
#include <gio/dbusconnection_extra_impl.hpp>
#endif
#endif

#endif
