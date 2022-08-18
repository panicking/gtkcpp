// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCLIENT_IMPL_HPP_
#define _GI_GIO_SOCKETCLIENT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketClient* g_socket_client_new ();
// ::GSocketClient* g_socket_client_new ();
Gio::SocketClient base::SocketClientBase::new_ () noexcept
{
  typedef ::GSocketClient* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_client_add_application_proxy (GSocketClient* client, const gchar* protocol);
// void g_socket_client_add_application_proxy (::GSocketClient* client, const char* protocol);
void base::SocketClientBase::add_application_proxy (const std::string & protocol) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_add_application_proxy;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (protocol_to_c));
}

// GSocketConnection* g_socket_client_connect (GSocketClient* client, GSocketConnectable* connectable, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect (Gio::SocketConnectable connectable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect (Gio::SocketConnectable connectable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_client_connect_async (GSocketClient* client, GSocketConnectable* connectable, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_async (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketClientBase::connect_async (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketClientBase::connect_async (Gio::SocketConnectable connectable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketConnectable*) (connectable_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketConnection* g_socket_client_connect_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_finish (Gio::AsyncResult result)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketConnection* g_socket_client_connect_to_host (GSocketClient* client, const gchar* host_and_port, guint16 default_port, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_host (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_host (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_host (const std::string & host_and_port, guint16 default_port)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_host (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_host (const std::string & host_and_port, guint16 default_port, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_client_connect_to_host_async (GSocketClient* client, const gchar* host_and_port, guint16 default_port, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_host_async (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketClientBase::connect_to_host_async (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketClientBase::connect_to_host_async (const std::string & host_and_port, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto host_and_port_to_c = gi::unwrap (host_and_port, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (host_and_port_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketConnection* g_socket_client_connect_to_host_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_host_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_host_finish (Gio::AsyncResult result)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_host_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_host_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketConnection* g_socket_client_connect_to_service (GSocketClient* client, const gchar* domain, const gchar* service, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_service (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_service (const std::string & domain, const std::string & service, Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_service (const std::string & domain, const std::string & service)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service;
  auto cancellable_to_c = nullptr;
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_service (const std::string & domain, const std::string & service, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_service (const std::string & domain, const std::string & service, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service;
  auto cancellable_to_c = nullptr;
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_client_connect_to_service_async (GSocketClient* client, const gchar* domain, const gchar* service, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_service_async (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketClientBase::connect_to_service_async (const std::string & domain, const std::string & service, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketClientBase::connect_to_service_async (const std::string & domain, const std::string & service, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto service_to_c = gi::unwrap (service, gi::transfer_none, gi::direction_in);
  auto domain_to_c = gi::unwrap (domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (domain_to_c), (const char*) (service_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketConnection* g_socket_client_connect_to_service_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_service_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_service_finish (Gio::AsyncResult result)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_service_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketConnection* g_socket_client_connect_to_uri (GSocketClient* client, const gchar* uri, guint16 default_port, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_uri (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_uri (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_uri (const std::string & uri, guint16 default_port)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_uri (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_uri (const std::string & uri, guint16 default_port, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_socket_client_connect_to_uri_async (GSocketClient* client, const gchar* uri, guint16 default_port, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_uri_async (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketClientBase::connect_to_uri_async (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketClientBase::connect_to_uri_async (const std::string & uri, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto default_port_to_c = default_port;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (const char*) (uri_to_c), (guint16) (default_port_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketConnection* g_socket_client_connect_to_uri_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_uri_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
Gio::SocketConnection base::SocketClientBase::connect_to_uri_finish (Gio::AsyncResult result)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketClientBase::connect_to_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_connect_to_uri_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_socket_client_get_enable_proxy (GSocketClient* client);
// gboolean g_socket_client_get_enable_proxy (::GSocketClient* client);
bool base::SocketClientBase::get_enable_proxy () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_enable_proxy;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return _temp_ret;
}

// GSocketFamily g_socket_client_get_family (GSocketClient* client);
// ::GSocketFamily g_socket_client_get_family (::GSocketClient* client);
Gio::SocketFamily base::SocketClientBase::get_family () noexcept
{
  typedef ::GSocketFamily (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_family;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GSocketAddress* g_socket_client_get_local_address (GSocketClient* client);
// ::GSocketAddress* g_socket_client_get_local_address (::GSocketClient* client);
Gio::SocketAddress base::SocketClientBase::get_local_address () noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_local_address;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocketProtocol g_socket_client_get_protocol (GSocketClient* client);
// ::GSocketProtocol g_socket_client_get_protocol (::GSocketClient* client);
Gio::SocketProtocol base::SocketClientBase::get_protocol () noexcept
{
  typedef ::GSocketProtocol (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_protocol;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GProxyResolver* g_socket_client_get_proxy_resolver (GSocketClient* client);
// ::GProxyResolver* g_socket_client_get_proxy_resolver (::GSocketClient* client);
Gio::ProxyResolver base::SocketClientBase::get_proxy_resolver () noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_proxy_resolver;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocketType g_socket_client_get_socket_type (GSocketClient* client);
// ::GSocketType g_socket_client_get_socket_type (::GSocketClient* client);
Gio::SocketType base::SocketClientBase::get_socket_type () noexcept
{
  typedef ::GSocketType (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_socket_type;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_socket_client_get_timeout (GSocketClient* client);
// guint g_socket_client_get_timeout (::GSocketClient* client);
guint base::SocketClientBase::get_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_timeout;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return _temp_ret;
}

// gboolean g_socket_client_get_tls (GSocketClient* client);
// gboolean g_socket_client_get_tls (::GSocketClient* client);
bool base::SocketClientBase::get_tls () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketClient* client);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_get_tls;
  auto _temp_ret = call_wrap_v ((::GSocketClient*) (gobj_()));
  return _temp_ret;
}

// GTlsCertificateFlags g_socket_client_get_tls_validation_flags (GSocketClient* client);
// ::GTlsCertificateFlags g_socket_client_get_tls_validation_flags (::GSocketClient* client);
// IGNORE; deprecated

// void g_socket_client_set_enable_proxy (GSocketClient* client, gboolean enable);
// void g_socket_client_set_enable_proxy (::GSocketClient* client, gboolean enable);
void base::SocketClientBase::set_enable_proxy (gboolean enable) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, gboolean enable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_enable_proxy;
  auto enable_to_c = enable;
  call_wrap_v ((::GSocketClient*) (gobj_()), (gboolean) (enable_to_c));
}

// void g_socket_client_set_family (GSocketClient* client, GSocketFamily family);
// void g_socket_client_set_family (::GSocketClient* client, ::GSocketFamily family);
void base::SocketClientBase::set_family (Gio::SocketFamily family) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketFamily family);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_family;
  auto family_to_c = gi::unwrap (family);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketFamily) (family_to_c));
}

// void g_socket_client_set_local_address (GSocketClient* client, GSocketAddress* address);
// void g_socket_client_set_local_address (::GSocketClient* client, ::GSocketAddress* address);
void base::SocketClientBase::set_local_address (Gio::SocketAddress address) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_local_address;
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketAddress*) (address_to_c));
}
void base::SocketClientBase::set_local_address () noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketAddress* address);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_local_address;
  auto address_to_c = nullptr;
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketAddress*) (address_to_c));
}

// void g_socket_client_set_protocol (GSocketClient* client, GSocketProtocol protocol);
// void g_socket_client_set_protocol (::GSocketClient* client, ::GSocketProtocol protocol);
void base::SocketClientBase::set_protocol (Gio::SocketProtocol protocol) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketProtocol protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_protocol;
  auto protocol_to_c = gi::unwrap (protocol);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketProtocol) (protocol_to_c));
}

// void g_socket_client_set_proxy_resolver (GSocketClient* client, GProxyResolver* proxy_resolver);
// void g_socket_client_set_proxy_resolver (::GSocketClient* client, ::GProxyResolver* proxy_resolver);
void base::SocketClientBase::set_proxy_resolver (Gio::ProxyResolver proxy_resolver) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GProxyResolver* proxy_resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_proxy_resolver;
  auto proxy_resolver_to_c = gi::unwrap (proxy_resolver, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GProxyResolver*) (proxy_resolver_to_c));
}
void base::SocketClientBase::set_proxy_resolver () noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GProxyResolver* proxy_resolver);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_proxy_resolver;
  auto proxy_resolver_to_c = nullptr;
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GProxyResolver*) (proxy_resolver_to_c));
}

// void g_socket_client_set_socket_type (GSocketClient* client, GSocketType type);
// void g_socket_client_set_socket_type (::GSocketClient* client, ::GSocketType type);
void base::SocketClientBase::set_socket_type (Gio::SocketType type) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_socket_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketType) (type_to_c));
}

// void g_socket_client_set_timeout (GSocketClient* client, guint timeout);
// void g_socket_client_set_timeout (::GSocketClient* client, guint timeout);
void base::SocketClientBase::set_timeout (guint timeout) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, guint timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_timeout;
  auto timeout_to_c = timeout;
  call_wrap_v ((::GSocketClient*) (gobj_()), (guint) (timeout_to_c));
}

// void g_socket_client_set_tls (GSocketClient* client, gboolean tls);
// void g_socket_client_set_tls (::GSocketClient* client, gboolean tls);
void base::SocketClientBase::set_tls (gboolean tls) noexcept
{
  typedef void (*call_wrap_t) (::GSocketClient* client, gboolean tls);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_client_set_tls;
  auto tls_to_c = tls;
  call_wrap_v ((::GSocketClient*) (gobj_()), (gboolean) (tls_to_c));
}

// void g_socket_client_set_tls_validation_flags (GSocketClient* client, GTlsCertificateFlags flags);
// void g_socket_client_set_tls_validation_flags (::GSocketClient* client, ::GTlsCertificateFlags flags);
// IGNORE; deprecated



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra_def_impl.hpp>)
#include <gio/socketclient_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra_impl.hpp>)
#include <gio/socketclient_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketClientClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketClientClass *methods = (::GSocketClientClass *) class_struct;
  (void) methods;

  methods->event = (decltype (methods->event)) detail::method_wrapper<self, void (*) (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::event_>;
}

// void SocketClient::event (GSocketClient* client, GSocketClientEvent event, GSocketConnectable* connectable, GIOStream* connection);
// void SocketClient::event (::GSocketClient* client, ::GSocketClientEvent event, ::GSocketConnectable* connectable, ::GIOStream* connection);
void SocketClientClass::event_ (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection) noexcept
{
  if (!get_struct_()->event) return ;
  typedef void (*call_wrap_t) (::GSocketClient* client, ::GSocketClientEvent event, ::GSocketConnectable* connectable, ::GIOStream* connection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->event;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto connectable_to_c = gi::unwrap (connectable, gi::transfer_none, gi::direction_in);
  auto event_to_c = gi::unwrap (event);
  call_wrap_v ((::GSocketClient*) (gobj_()), (::GSocketClientEvent) (event_to_c), (::GSocketConnectable*) (connectable_to_c), (::GIOStream*) (connection_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
