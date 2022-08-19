// AUTO-GENERATED

#ifndef _GI_SOUP_SERVER_IMPL_HPP_
#define _GI_SOUP_SERVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupServer* soup_server_new (const char* optname1);
// ::SoupServer* soup_server_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// gboolean soup_server_accept_iostream (SoupServer* server, GIOStream* stream, GSocketAddress* local_addr, GSocketAddress* remote_addr, GError ** error);
// gboolean soup_server_accept_iostream (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
bool base::ServerBase::accept_iostream (Gio::IOStream stream, Gio::SocketAddress local_addr, Gio::SocketAddress remote_addr)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_accept_iostream;
  auto remote_addr_to_c = gi::unwrap (remote_addr, gi::transfer_none, gi::direction_in);
  auto local_addr_to_c = gi::unwrap (local_addr, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GIOStream*) (stream_to_c), (::GSocketAddress*) (local_addr_to_c), (::GSocketAddress*) (remote_addr_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::accept_iostream (Gio::IOStream stream)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_accept_iostream;
  auto remote_addr_to_c = nullptr;
  auto local_addr_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GIOStream*) (stream_to_c), (::GSocketAddress*) (local_addr_to_c), (::GSocketAddress*) (remote_addr_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::accept_iostream (Gio::IOStream stream, Gio::SocketAddress local_addr, Gio::SocketAddress remote_addr, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_accept_iostream;
  auto remote_addr_to_c = gi::unwrap (remote_addr, gi::transfer_none, gi::direction_in);
  auto local_addr_to_c = gi::unwrap (local_addr, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GIOStream*) (stream_to_c), (::GSocketAddress*) (local_addr_to_c), (::GSocketAddress*) (remote_addr_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::ServerBase::accept_iostream (Gio::IOStream stream, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GIOStream* stream, ::GSocketAddress* local_addr, ::GSocketAddress* remote_addr, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_accept_iostream;
  auto remote_addr_to_c = nullptr;
  auto local_addr_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GIOStream*) (stream_to_c), (::GSocketAddress*) (local_addr_to_c), (::GSocketAddress*) (remote_addr_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void soup_server_add_auth_domain (SoupServer* server, SoupAuthDomain* auth_domain);
// void soup_server_add_auth_domain (::SoupServer* server, ::SoupAuthDomain* auth_domain);
void base::ServerBase::add_auth_domain (Soup::AuthDomain auth_domain) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupAuthDomain* auth_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_add_auth_domain;
  auto auth_domain_to_c = gi::unwrap (auth_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupAuthDomain*) (auth_domain_to_c));
}

// void soup_server_add_early_handler (SoupServer* server, const char* path, SoupServerCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_early_handler (::SoupServer* server, const char* path,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback type  not supported

// void soup_server_add_handler (SoupServer* server, const char* path, SoupServerCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_handler (::SoupServer* server, const char* path,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; callback type  not supported

// void soup_server_add_websocket_extension (SoupServer* server, GType extension_type);
// void soup_server_add_websocket_extension (::SoupServer* server, GType extension_type);
void base::ServerBase::add_websocket_extension (GType extension_type) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, GType extension_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_add_websocket_extension;
  auto extension_type_to_c = extension_type;
  call_wrap_v ((::SoupServer*) (gobj_()), (GType) (extension_type_to_c));
}

// void soup_server_add_websocket_handler (SoupServer* server, const char* path, const char* origin, char** protocols, SoupServerWebsocketCallback callback, gpointer user_data, GDestroyNotify destroy);
// void soup_server_add_websocket_handler (::SoupServer* server, const char* path, const char* origin, char** protocols, Soup::ServerWebsocketCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
void base::ServerBase::add_websocket_handler (const std::string & path, const std::string & origin, const std::vector<std::string> & protocols, Soup::ServerWebsocketCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, const char* path, const char* origin, char** protocols, Soup::ServerWebsocketCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_add_websocket_handler;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (const char*) (path_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), (Soup::ServerWebsocketCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
}
void base::ServerBase::add_websocket_handler (const std::vector<std::string> & protocols, Soup::ServerWebsocketCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, const char* path, const char* origin, char** protocols, Soup::ServerWebsocketCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_add_websocket_handler;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = nullptr;
  auto path_to_c = nullptr;
  call_wrap_v ((::SoupServer*) (gobj_()), (const char*) (path_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), (Soup::ServerWebsocketCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
}

// void soup_server_disconnect (SoupServer* server);
// void soup_server_disconnect (::SoupServer* server);
void base::ServerBase::disconnect () noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_disconnect;
  call_wrap_v ((::SoupServer*) (gobj_()));
}

// GMainContext* soup_server_get_async_context (SoupServer* server);
// ::GMainContext* soup_server_get_async_context (::SoupServer* server);
// IGNORE; deprecated

// SoupSocket* soup_server_get_listener (SoupServer* server);
// ::SoupSocket* soup_server_get_listener (::SoupServer* server);
// IGNORE; deprecated

// GSList* soup_server_get_listeners (SoupServer* server);
// ::GSList* soup_server_get_listeners (::SoupServer* server);
std::vector<Gio::Socket> base::ServerBase::get_listeners () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_get_listeners;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()));
  return gi::detail::wrap_list<Gio::Socket> (_temp_ret, gi::transfer_container);
}

// guint soup_server_get_port (SoupServer* server);
// guint soup_server_get_port (::SoupServer* server);
// IGNORE; deprecated

// GSList* soup_server_get_uris (SoupServer* server);
// ::GSList* soup_server_get_uris (::SoupServer* server);
std::vector<Soup::URI> base::ServerBase::get_uris () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_get_uris;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()));
  return gi::detail::wrap_list<Soup::URI> (_temp_ret, gi::transfer_full);
}

// gboolean soup_server_is_https (SoupServer* server);
// gboolean soup_server_is_https (::SoupServer* server);
bool base::ServerBase::is_https () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_is_https;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_server_listen (SoupServer* server, GSocketAddress* address, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen (::SoupServer* server, ::GSocketAddress* address, ::SoupServerListenOptions options, GError ** error);
bool base::ServerBase::listen (Gio::SocketAddress address, Soup::ServerListenOptions options)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GSocketAddress* address, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen;
  auto options_to_c = gi::unwrap (options);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GSocketAddress*) (address_to_c), (::SoupServerListenOptions) (options_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::listen (Gio::SocketAddress address, Soup::ServerListenOptions options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GSocketAddress* address, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen;
  auto options_to_c = gi::unwrap (options);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GSocketAddress*) (address_to_c), (::SoupServerListenOptions) (options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_server_listen_all (SoupServer* server, guint port, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_all (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
bool base::ServerBase::listen_all (guint port, Soup::ServerListenOptions options)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_all;
  auto options_to_c = gi::unwrap (options);
  auto port_to_c = port;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (guint) (port_to_c), (::SoupServerListenOptions) (options_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::listen_all (guint port, Soup::ServerListenOptions options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_all;
  auto options_to_c = gi::unwrap (options);
  auto port_to_c = port;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (guint) (port_to_c), (::SoupServerListenOptions) (options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_server_listen_fd (SoupServer* server, int fd, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_fd (::SoupServer* server, gint fd, ::SoupServerListenOptions options, GError ** error);
bool base::ServerBase::listen_fd (gint fd, Soup::ServerListenOptions options)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, gint fd, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_fd;
  auto options_to_c = gi::unwrap (options);
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (gint) (fd_to_c), (::SoupServerListenOptions) (options_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::listen_fd (gint fd, Soup::ServerListenOptions options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, gint fd, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_fd;
  auto options_to_c = gi::unwrap (options);
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (gint) (fd_to_c), (::SoupServerListenOptions) (options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_server_listen_local (SoupServer* server, guint port, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_local (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
bool base::ServerBase::listen_local (guint port, Soup::ServerListenOptions options)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_local;
  auto options_to_c = gi::unwrap (options);
  auto port_to_c = port;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (guint) (port_to_c), (::SoupServerListenOptions) (options_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::listen_local (guint port, Soup::ServerListenOptions options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, guint port, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_local;
  auto options_to_c = gi::unwrap (options);
  auto port_to_c = port;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (guint) (port_to_c), (::SoupServerListenOptions) (options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean soup_server_listen_socket (SoupServer* server, GSocket* socket, SoupServerListenOptions options, GError ** error);
// gboolean soup_server_listen_socket (::SoupServer* server, ::GSocket* socket, ::SoupServerListenOptions options, GError ** error);
bool base::ServerBase::listen_socket (Gio::Socket socket, Soup::ServerListenOptions options)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GSocket* socket, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_socket;
  auto options_to_c = gi::unwrap (options);
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GSocket*) (socket_to_c), (::SoupServerListenOptions) (options_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::listen_socket (Gio::Socket socket, Soup::ServerListenOptions options, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, ::GSocket* socket, ::SoupServerListenOptions options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_listen_socket;
  auto options_to_c = gi::unwrap (options);
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (::GSocket*) (socket_to_c), (::SoupServerListenOptions) (options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void soup_server_pause_message (SoupServer* server, SoupMessage* msg);
// void soup_server_pause_message (::SoupServer* server, ::SoupMessage* msg);
void base::ServerBase::pause_message (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_pause_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// void soup_server_quit (SoupServer* server);
// void soup_server_quit (::SoupServer* server);
// IGNORE; deprecated

// void soup_server_remove_auth_domain (SoupServer* server, SoupAuthDomain* auth_domain);
// void soup_server_remove_auth_domain (::SoupServer* server, ::SoupAuthDomain* auth_domain);
void base::ServerBase::remove_auth_domain (Soup::AuthDomain auth_domain) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupAuthDomain* auth_domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_remove_auth_domain;
  auto auth_domain_to_c = gi::unwrap (auth_domain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupAuthDomain*) (auth_domain_to_c));
}

// void soup_server_remove_handler (SoupServer* server, const char* path);
// void soup_server_remove_handler (::SoupServer* server, const char* path);
void base::ServerBase::remove_handler (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_remove_handler;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (const char*) (path_to_c));
}

// void soup_server_remove_websocket_extension (SoupServer* server, GType extension_type);
// void soup_server_remove_websocket_extension (::SoupServer* server, GType extension_type);
void base::ServerBase::remove_websocket_extension (GType extension_type) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, GType extension_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_remove_websocket_extension;
  auto extension_type_to_c = extension_type;
  call_wrap_v ((::SoupServer*) (gobj_()), (GType) (extension_type_to_c));
}

// void soup_server_run (SoupServer* server);
// void soup_server_run (::SoupServer* server);
// IGNORE; deprecated

// void soup_server_run_async (SoupServer* server);
// void soup_server_run_async (::SoupServer* server);
// IGNORE; deprecated

// gboolean soup_server_set_ssl_cert_file (SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
// gboolean soup_server_set_ssl_cert_file (::SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
bool base::ServerBase::set_ssl_cert_file (const std::string & ssl_cert_file, const std::string & ssl_key_file)
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_set_ssl_cert_file;
  auto ssl_key_file_to_c = gi::unwrap (ssl_key_file, gi::transfer_none, gi::direction_in);
  auto ssl_cert_file_to_c = gi::unwrap (ssl_cert_file, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (const char*) (ssl_cert_file_to_c), (const char*) (ssl_key_file_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ServerBase::set_ssl_cert_file (const std::string & ssl_cert_file, const std::string & ssl_key_file, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupServer* server, const char* ssl_cert_file, const char* ssl_key_file, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_set_ssl_cert_file;
  auto ssl_key_file_to_c = gi::unwrap (ssl_key_file, gi::transfer_none, gi::direction_in);
  auto ssl_cert_file_to_c = gi::unwrap (ssl_cert_file, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupServer*) (gobj_()), (const char*) (ssl_cert_file_to_c), (const char*) (ssl_key_file_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void soup_server_unpause_message (SoupServer* server, SoupMessage* msg);
// void soup_server_unpause_message (::SoupServer* server, ::SoupMessage* msg);
void base::ServerBase::unpause_message (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_server_unpause_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c));
}






} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/server_extra_def_impl.hpp>)
#include <soup/server_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/server_extra_impl.hpp>)
#include <soup/server_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ServerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupServerClass *methods = (::SoupServerClass *) class_struct;
  (void) methods;

  methods->request_aborted = (decltype (methods->request_aborted)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::ClientContext client), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_aborted_>;
  methods->request_finished = (decltype (methods->request_finished)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::ClientContext client), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_finished_>;
  methods->request_read = (decltype (methods->request_read)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::ClientContext client), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_read_>;
  methods->request_started = (decltype (methods->request_started)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::ClientContext client), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_started_>;
}

// void Server::request_aborted (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_aborted (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
void ServerClass::request_aborted_ (Soup::Message msg, Soup::ClientContext client) noexcept
{
  if (!get_struct_()->request_aborted) return ;
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_aborted;
  auto client_to_c = gi::unwrap (client, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupClientContext*) (client_to_c));
}

// void Server::request_finished (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_finished (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
void ServerClass::request_finished_ (Soup::Message msg, Soup::ClientContext client) noexcept
{
  if (!get_struct_()->request_finished) return ;
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_finished;
  auto client_to_c = gi::unwrap (client, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupClientContext*) (client_to_c));
}

// void Server::request_read (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_read (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
void ServerClass::request_read_ (Soup::Message msg, Soup::ClientContext client) noexcept
{
  if (!get_struct_()->request_read) return ;
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_read;
  auto client_to_c = gi::unwrap (client, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupClientContext*) (client_to_c));
}

// void Server::request_started (SoupServer* server, SoupMessage* msg, SoupClientContext* client);
// void Server::request_started (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
void ServerClass::request_started_ (Soup::Message msg, Soup::ClientContext client) noexcept
{
  if (!get_struct_()->request_started) return ;
  typedef void (*call_wrap_t) (::SoupServer* server, ::SoupMessage* msg, ::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_started;
  auto client_to_c = gi::unwrap (client, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupServer*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupClientContext*) (client_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
