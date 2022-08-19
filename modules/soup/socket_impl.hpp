// AUTO-GENERATED

#ifndef _GI_SOUP_SOCKET_IMPL_HPP_
#define _GI_SOUP_SOCKET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Gio::Initable SocketBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SocketBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// SoupSocket* soup_socket_new (const char* optname1);
// ::SoupSocket* soup_socket_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_socket_connect_async (SoupSocket* sock, GCancellable* cancellable, SoupSocketCallback callback, gpointer user_data);
// void soup_socket_connect_async (::SoupSocket* sock, ::GCancellable* cancellable, Soup::SocketCallback::cfunction_type callback, void* user_data);
void base::SocketBase::connect_async (Gio::Cancellable cancellable, Soup::SocketCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable, Soup::SocketCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Soup::SocketCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketBase::connect_async (Soup::SocketCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable, Soup::SocketCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Soup::SocketCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// guint soup_socket_connect_sync (SoupSocket* sock, GCancellable* cancellable);
// guint soup_socket_connect_sync (::SoupSocket* sock, ::GCancellable* cancellable);
guint base::SocketBase::connect_sync (Gio::Cancellable cancellable) noexcept
{
  typedef guint (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_connect_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
guint base::SocketBase::connect_sync () noexcept
{
  typedef guint (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_connect_sync;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}

// void soup_socket_disconnect (SoupSocket* sock);
// void soup_socket_disconnect (::SoupSocket* sock);
void base::SocketBase::disconnect () noexcept
{
  typedef void (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_disconnect;
  call_wrap_v ((::SoupSocket*) (gobj_()));
}

// int soup_socket_get_fd (SoupSocket* sock);
// gint soup_socket_get_fd (::SoupSocket* sock);
gint base::SocketBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_get_fd;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return _temp_ret;
}

// SoupAddress* soup_socket_get_local_address (SoupSocket* sock);
// ::SoupAddress* soup_socket_get_local_address (::SoupSocket* sock);
Soup::Address base::SocketBase::get_local_address () noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_get_local_address;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupAddress* soup_socket_get_remote_address (SoupSocket* sock);
// ::SoupAddress* soup_socket_get_remote_address (::SoupSocket* sock);
Soup::Address base::SocketBase::get_remote_address () noexcept
{
  typedef ::SoupAddress* (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_get_remote_address;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean soup_socket_is_connected (SoupSocket* sock);
// gboolean soup_socket_is_connected (::SoupSocket* sock);
bool base::SocketBase::is_connected () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_is_connected;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_socket_is_ssl (SoupSocket* sock);
// gboolean soup_socket_is_ssl (::SoupSocket* sock);
bool base::SocketBase::is_ssl () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_is_ssl;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_socket_listen (SoupSocket* sock);
// gboolean soup_socket_listen (::SoupSocket* sock);
bool base::SocketBase::listen () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_listen;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()));
  return _temp_ret;
}

// SoupSocketIOStatus soup_socket_read (SoupSocket* sock, gpointer buffer, gsize len, gsize* nread, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_read (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
Soup::SocketIOStatus base::SocketBase::read (guint8 * buffer, gsize len, gsize & nread, Gio::Cancellable cancellable)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), &error);
  nread = nread_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::read (guint8 * buffer, gsize len, gsize & nread)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = nullptr;
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), &error);
  nread = nread_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::read (guint8 * buffer, gsize len, gsize & nread, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  nread = nread_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::read (guint8 * buffer, gsize len, gsize & nread, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = nullptr;
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  nread = nread_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::read (guint8 * buffer, gsize len, Gio::Cancellable cancellable)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), nread_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::read (guint8 * buffer, gsize len)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = nullptr;
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), nread_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::read (guint8 * buffer, gsize len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), nread_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::read (guint8 * buffer, gsize len, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_read;
  auto cancellable_to_c = nullptr;
  gsize nread_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nread_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), nread_o);
}

// SoupSocketIOStatus soup_socket_read_until (SoupSocket* sock, gpointer buffer, gsize len, gconstpointer boundary, gsize boundary_len, gsize* nread, gboolean* got_boundary, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_read_until (::SoupSocket* sock, guint8* buffer, gsize len, const void* boundary, gsize boundary_len, gsize* nread, gboolean got_boundary, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in got_boundary pointer depth (1 vs 0)

// gboolean soup_socket_start_proxy_ssl (SoupSocket* sock, const char* ssl_host, GCancellable* cancellable);
// gboolean soup_socket_start_proxy_ssl (::SoupSocket* sock, const char* ssl_host, ::GCancellable* cancellable);
bool base::SocketBase::start_proxy_ssl (const std::string & ssl_host, Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock, const char* ssl_host, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_start_proxy_ssl;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto ssl_host_to_c = gi::unwrap (ssl_host, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const char*) (ssl_host_to_c), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
bool base::SocketBase::start_proxy_ssl (const std::string & ssl_host) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock, const char* ssl_host, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_start_proxy_ssl;
  auto cancellable_to_c = nullptr;
  auto ssl_host_to_c = gi::unwrap (ssl_host, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const char*) (ssl_host_to_c), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}

// gboolean soup_socket_start_ssl (SoupSocket* sock, GCancellable* cancellable);
// gboolean soup_socket_start_ssl (::SoupSocket* sock, ::GCancellable* cancellable);
bool base::SocketBase::start_ssl (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_start_ssl;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
bool base::SocketBase::start_ssl () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSocket* sock, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_start_ssl;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}

// SoupSocketIOStatus soup_socket_write (SoupSocket* sock, gconstpointer buffer, gsize len, gsize* nwrote, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_write (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
Soup::SocketIOStatus base::SocketBase::write (guint8 * buffer, gsize len, gsize & nwrote, Gio::Cancellable cancellable)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), &error);
  nwrote = nwrote_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::write (guint8 * buffer, gsize len, gsize & nwrote)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = nullptr;
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), &error);
  nwrote = nwrote_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::write (guint8 * buffer, gsize len, gsize & nwrote, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  nwrote = nwrote_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Soup::SocketIOStatus base::SocketBase::write (guint8 * buffer, gsize len, gsize & nwrote, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = nullptr;
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  nwrote = nwrote_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::write (guint8 * buffer, gsize len, Gio::Cancellable cancellable)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), nwrote_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::write (guint8 * buffer, gsize len)
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = nullptr;
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret), nwrote_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::write (guint8 * buffer, gsize len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), nwrote_o);
}
std::tuple<Soup::SocketIOStatus, gsize> base::SocketBase::write (guint8 * buffer, gsize len, GLib::Error * _error) noexcept
{
  typedef ::SoupSocketIOStatus (*call_wrap_t) (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_socket_write;
  auto cancellable_to_c = nullptr;
  gsize nwrote_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, len, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSocket*) (gobj_()), (const guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&nwrote_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret), nwrote_o);
}







} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/socket_extra_def_impl.hpp>)
#include <soup/socket_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/socket_extra_impl.hpp>)
#include <soup/socket_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void SocketClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupSocketClass *methods = (::SoupSocketClass *) class_struct;
  (void) methods;

  methods->disconnected = (decltype (methods->disconnected)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::disconnected_>;
  methods->new_connection = (decltype (methods->new_connection)) detail::method_wrapper<self, void (*) (Soup::Socket new_sock), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::new_connection_>;
  methods->readable = (decltype (methods->readable)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::readable_>;
  methods->writable = (decltype (methods->writable)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::writable_>;
}

// void Socket::disconnected (SoupSocket* sock);
// void Socket::disconnected (::SoupSocket* sock);
void SocketClass::disconnected_ () noexcept
{
  if (!get_struct_()->disconnected) return ;
  typedef void (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->disconnected;
  call_wrap_v ((::SoupSocket*) (gobj_()));
}

// void Socket::new_connection (SoupSocket* listener, SoupSocket* new_sock);
// void Socket::new_connection (::SoupSocket* listener, ::SoupSocket* new_sock);
void SocketClass::new_connection_ (Soup::Socket new_sock) noexcept
{
  if (!get_struct_()->new_connection) return ;
  typedef void (*call_wrap_t) (::SoupSocket* listener, ::SoupSocket* new_sock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->new_connection;
  auto new_sock_to_c = gi::unwrap (new_sock, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSocket*) (gobj_()), (::SoupSocket*) (new_sock_to_c));
}

// void Socket::readable (SoupSocket* sock);
// void Socket::readable (::SoupSocket* sock);
void SocketClass::readable_ () noexcept
{
  if (!get_struct_()->readable) return ;
  typedef void (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->readable;
  call_wrap_v ((::SoupSocket*) (gobj_()));
}

// void Socket::writable (SoupSocket* sock);
// void Socket::writable (::SoupSocket* sock);
void SocketClass::writable_ () noexcept
{
  if (!get_struct_()->writable) return ;
  typedef void (*call_wrap_t) (::SoupSocket* sock);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writable;
  call_wrap_v ((::SoupSocket*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
