// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCONNECTION_IMPL_HPP_
#define _GI_GIO_SOCKETCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GType g_socket_connection_factory_lookup_type (GSocketFamily family, GSocketType type, gint protocol_id);
// GType g_socket_connection_factory_lookup_type (::GSocketFamily family, ::GSocketType type, gint protocol_id);
GType base::SocketConnectionBase::factory_lookup_type (Gio::SocketFamily family, Gio::SocketType type, gint protocol_id) noexcept
{
  typedef GType (*call_wrap_t) (::GSocketFamily family, ::GSocketType type, gint protocol_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_factory_lookup_type;
  auto protocol_id_to_c = protocol_id;
  auto type_to_c = gi::unwrap (type);
  auto family_to_c = gi::unwrap (family);
  auto _temp_ret = call_wrap_v ((::GSocketFamily) (family_to_c), (::GSocketType) (type_to_c), (gint) (protocol_id_to_c));
  return _temp_ret;
}

// void g_socket_connection_factory_register_type (GType g_type, GSocketFamily family, GSocketType type, gint protocol);
// void g_socket_connection_factory_register_type (GType g_type, ::GSocketFamily family, ::GSocketType type, gint protocol);
void base::SocketConnectionBase::factory_register_type (GType g_type, Gio::SocketFamily family, Gio::SocketType type, gint protocol) noexcept
{
  typedef void (*call_wrap_t) (GType g_type, ::GSocketFamily family, ::GSocketType type, gint protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_factory_register_type;
  auto protocol_to_c = protocol;
  auto type_to_c = gi::unwrap (type);
  auto family_to_c = gi::unwrap (family);
  auto g_type_to_c = g_type;
  call_wrap_v ((GType) (g_type_to_c), (::GSocketFamily) (family_to_c), (::GSocketType) (type_to_c), (gint) (protocol_to_c));
}

// gboolean g_socket_connection_connect (GSocketConnection* connection, GSocketAddress* address, GCancellable* cancellable, GError ** error);
// gboolean g_socket_connection_connect (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
bool base::SocketConnectionBase::connect (Gio::SocketAddress address, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketConnectionBase::connect (Gio::SocketAddress address)
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketConnectionBase::connect (Gio::SocketAddress address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SocketConnectionBase::connect (Gio::SocketAddress address, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_socket_connection_connect_async (GSocketConnection* connection, GSocketAddress* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_connection_connect_async (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketConnectionBase::connect_async (Gio::SocketAddress address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketConnectionBase::connect_async (Gio::SocketAddress address, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketConnection* connection, ::GSocketAddress* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketConnection*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_socket_connection_connect_finish (GSocketConnection* connection, GAsyncResult* result, GError ** error);
// gboolean g_socket_connection_connect_finish (::GSocketConnection* connection, ::GAsyncResult* result, GError ** error);
bool base::SocketConnectionBase::connect_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketConnectionBase::connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GSocketAddress* g_socket_connection_get_local_address (GSocketConnection* connection, GError ** error);
// ::GSocketAddress* g_socket_connection_get_local_address (::GSocketConnection* connection, GError ** error);
Gio::SocketAddress base::SocketConnectionBase::get_local_address ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketConnection* connection, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_get_local_address;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketConnectionBase::get_local_address (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketConnection* connection, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_get_local_address;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketAddress* g_socket_connection_get_remote_address (GSocketConnection* connection, GError ** error);
// ::GSocketAddress* g_socket_connection_get_remote_address (::GSocketConnection* connection, GError ** error);
Gio::SocketAddress base::SocketConnectionBase::get_remote_address ()
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketConnection* connection, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_get_remote_address;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketAddress base::SocketConnectionBase::get_remote_address (GLib::Error * _error) noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketConnection* connection, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_get_remote_address;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocket* g_socket_connection_get_socket (GSocketConnection* connection);
// ::GSocket* g_socket_connection_get_socket (::GSocketConnection* connection);
Gio::Socket base::SocketConnectionBase::get_socket () noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_get_socket;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_socket_connection_is_connected (GSocketConnection* connection);
// gboolean g_socket_connection_is_connected (::GSocketConnection* connection);
bool base::SocketConnectionBase::is_connected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketConnection* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_connection_is_connected;
  auto _temp_ret = call_wrap_v ((::GSocketConnection*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketconnection_extra_def_impl.hpp>)
#include <gio/socketconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketconnection_extra_impl.hpp>)
#include <gio/socketconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketConnectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketConnectionClass *methods = (::GSocketConnectionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
