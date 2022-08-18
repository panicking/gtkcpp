// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETLISTENER_IMPL_HPP_
#define _GI_GIO_SOCKETLISTENER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketListener* g_socket_listener_new ();
// ::GSocketListener* g_socket_listener_new ();
Gio::SocketListener base::SocketListenerBase::new_ () noexcept
{
  typedef ::GSocketListener* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSocketConnection* g_socket_listener_accept (GSocketListener* listener, GObject** source_object, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_listener_accept (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
Gio::SocketConnection base::SocketListenerBase::accept (GObject::Object * source_object, Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketListenerBase::accept (GObject::Object * source_object)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketListenerBase::accept (GObject::Object * source_object, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketListenerBase::accept (GObject::Object * source_object, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept (Gio::Cancellable cancellable)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept ()
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept (GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}

// void g_socket_listener_accept_async (GSocketListener* listener, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_listener_accept_async (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketListenerBase::accept_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketListener*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketListenerBase::accept_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSocketListener*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocketConnection* g_socket_listener_accept_finish (GSocketListener* listener, GAsyncResult* result, GObject** source_object, GError ** error);
// ::GSocketConnection* g_socket_listener_accept_finish (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
Gio::SocketConnection base::SocketListenerBase::accept_finish (Gio::AsyncResult result, GObject::Object * source_object)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (source_object ? &source_object_o : nullptr), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::SocketConnection base::SocketListenerBase::accept_finish (Gio::AsyncResult result, GObject::Object * source_object, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (source_object ? &source_object_o : nullptr), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept_finish (Gio::AsyncResult result)
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (&source_object_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::SocketConnection, GObject::Object> base::SocketListenerBase::accept_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocketConnection* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (&source_object_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}

// GSocket* g_socket_listener_accept_socket (GSocketListener* listener, GObject** source_object, GCancellable* cancellable, GError ** error);
// ::GSocket* g_socket_listener_accept_socket (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
Gio::Socket base::SocketListenerBase::accept_socket (GObject::Object * source_object, Gio::Cancellable cancellable)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Socket base::SocketListenerBase::accept_socket (GObject::Object * source_object)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Socket base::SocketListenerBase::accept_socket (GObject::Object * source_object, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Socket base::SocketListenerBase::accept_socket (GObject::Object * source_object, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (source_object ? &source_object_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket (Gio::Cancellable cancellable)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket ()
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket (GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GObject** source_object, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket;
  auto cancellable_to_c = nullptr;
  ::GObject* source_object_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject**) (&source_object_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}

// void g_socket_listener_accept_socket_async (GSocketListener* listener, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_listener_accept_socket_async (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SocketListenerBase::accept_socket_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSocketListener*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SocketListenerBase::accept_socket_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSocketListener*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GSocket* g_socket_listener_accept_socket_finish (GSocketListener* listener, GAsyncResult* result, GObject** source_object, GError ** error);
// ::GSocket* g_socket_listener_accept_socket_finish (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
Gio::Socket base::SocketListenerBase::accept_socket_finish (Gio::AsyncResult result, GObject::Object * source_object)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (source_object ? &source_object_o : nullptr), &error);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Socket base::SocketListenerBase::accept_socket_finish (Gio::AsyncResult result, GObject::Object * source_object, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (source_object ? &source_object_o : nullptr), _error ? &_error_o : nullptr);
  if (source_object) *source_object = gi::wrap (source_object_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket_finish (Gio::AsyncResult result)
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (&source_object_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}
std::tuple<Gio::Socket, GObject::Object> base::SocketListenerBase::accept_socket_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::GSocketListener* listener, ::GAsyncResult* result, ::GObject** source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_accept_socket_finish;
  ::GObject* source_object_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GObject**) (&source_object_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (source_object_o, gi::transfer_none, gi::direction_out));
}

// gboolean g_socket_listener_add_address (GSocketListener* listener, GSocketAddress* address, GSocketType type, GSocketProtocol protocol, GObject* source_object, GSocketAddress** effective_address, GError ** error);
// gboolean g_socket_listener_add_address (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
bool base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, Gio::SocketAddress * effective_address)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (effective_address ? &effective_address_o : nullptr), &error);
  if (effective_address) *effective_address = gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, Gio::SocketAddress * effective_address)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = nullptr;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (effective_address ? &effective_address_o : nullptr), &error);
  if (effective_address) *effective_address = gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, Gio::SocketAddress * effective_address, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (effective_address ? &effective_address_o : nullptr), _error ? &_error_o : nullptr);
  if (effective_address) *effective_address = gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, Gio::SocketAddress * effective_address, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = nullptr;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (effective_address ? &effective_address_o : nullptr), _error ? &_error_o : nullptr);
  if (effective_address) *effective_address = gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gio::SocketAddress> base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (&effective_address_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, Gio::SocketAddress> base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = nullptr;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (&effective_address_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, Gio::SocketAddress> base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GObject::Object source_object, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (&effective_address_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, Gio::SocketAddress> base::SocketListenerBase::add_address (Gio::SocketAddress address, Gio::SocketType type, Gio::SocketProtocol protocol, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocketAddress* address, ::GSocketType type, ::GSocketProtocol protocol, ::GObject* source_object, ::GSocketAddress** effective_address, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_address;
  ::GSocketAddress* effective_address_o {};
  auto source_object_to_c = nullptr;
  auto protocol_to_c = gi::unwrap (protocol);
  auto type_to_c = gi::unwrap (type);
  auto address_to_c = gi::unwrap (address, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketAddress*) (address_to_c), (::GSocketType) (type_to_c), (::GSocketProtocol) (protocol_to_c), (::GObject*) (source_object_to_c), (::GSocketAddress**) (&effective_address_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (effective_address_o, gi::transfer_full, gi::direction_out));
}

// guint16 g_socket_listener_add_any_inet_port (GSocketListener* listener, GObject* source_object, GError ** error);
// guint16 g_socket_listener_add_any_inet_port (::GSocketListener* listener, ::GObject* source_object, GError ** error);
guint16 base::SocketListenerBase::add_any_inet_port (GObject::Object source_object)
{
  typedef guint16 (*call_wrap_t) (::GSocketListener* listener, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_any_inet_port;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::SocketListenerBase::add_any_inet_port ()
{
  typedef guint16 (*call_wrap_t) (::GSocketListener* listener, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_any_inet_port;
  auto source_object_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::SocketListenerBase::add_any_inet_port (GObject::Object source_object, GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GSocketListener* listener, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_any_inet_port;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint16 base::SocketListenerBase::add_any_inet_port (GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GSocketListener* listener, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_any_inet_port;
  auto source_object_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_socket_listener_add_inet_port (GSocketListener* listener, guint16 port, GObject* source_object, GError ** error);
// gboolean g_socket_listener_add_inet_port (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
bool base::SocketListenerBase::add_inet_port (guint16 port, GObject::Object source_object)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_inet_port;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (guint16) (port_to_c), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_inet_port (guint16 port)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_inet_port;
  auto source_object_to_c = nullptr;
  auto port_to_c = port;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (guint16) (port_to_c), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_inet_port (guint16 port, GObject::Object source_object, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_inet_port;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto port_to_c = port;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (guint16) (port_to_c), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SocketListenerBase::add_inet_port (guint16 port, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, guint16 port, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_inet_port;
  auto source_object_to_c = nullptr;
  auto port_to_c = port;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (guint16) (port_to_c), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_socket_listener_add_socket (GSocketListener* listener, GSocket* socket, GObject* source_object, GError ** error);
// gboolean g_socket_listener_add_socket (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
bool base::SocketListenerBase::add_socket (Gio::Socket socket, GObject::Object source_object)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_socket;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocket*) (socket_to_c), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_socket (Gio::Socket socket)
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_socket;
  auto source_object_to_c = nullptr;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocket*) (socket_to_c), (::GObject*) (source_object_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SocketListenerBase::add_socket (Gio::Socket socket, GObject::Object source_object, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_socket;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocket*) (socket_to_c), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SocketListenerBase::add_socket (Gio::Socket socket, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketListener* listener, ::GSocket* socket, ::GObject* source_object, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_add_socket;
  auto source_object_to_c = nullptr;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocket*) (socket_to_c), (::GObject*) (source_object_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_socket_listener_close (GSocketListener* listener);
// void g_socket_listener_close (::GSocketListener* listener);
void base::SocketListenerBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_close;
  call_wrap_v ((::GSocketListener*) (gobj_()));
}

// void g_socket_listener_set_backlog (GSocketListener* listener, int listen_backlog);
// void g_socket_listener_set_backlog (::GSocketListener* listener, gint listen_backlog);
void base::SocketListenerBase::set_backlog (gint listen_backlog) noexcept
{
  typedef void (*call_wrap_t) (::GSocketListener* listener, gint listen_backlog);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_listener_set_backlog;
  auto listen_backlog_to_c = listen_backlog;
  call_wrap_v ((::GSocketListener*) (gobj_()), (gint) (listen_backlog_to_c));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketlistener_extra_def_impl.hpp>)
#include <gio/socketlistener_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketlistener_extra_impl.hpp>)
#include <gio/socketlistener_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketListenerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketListenerClass *methods = (::GSocketListenerClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->event = (decltype (methods->event)) detail::method_wrapper<self, void (*) (Gio::SocketListenerEvent event, Gio::Socket socket), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::event_>;
}

// void SocketListener::changed (GSocketListener* listener);
// void SocketListener::changed (::GSocketListener* listener);
void SocketListenerClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GSocketListener* listener);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GSocketListener*) (gobj_()));
}

// void SocketListener::event (GSocketListener* listener, GSocketListenerEvent event, GSocket* socket);
// void SocketListener::event (::GSocketListener* listener, ::GSocketListenerEvent event, ::GSocket* socket);
void SocketListenerClass::event_ (Gio::SocketListenerEvent event, Gio::Socket socket) noexcept
{
  if (!get_struct_()->event) return ;
  typedef void (*call_wrap_t) (::GSocketListener* listener, ::GSocketListenerEvent event, ::GSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->event;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  auto event_to_c = gi::unwrap (event);
  call_wrap_v ((::GSocketListener*) (gobj_()), (::GSocketListenerEvent) (event_to_c), (::GSocket*) (socket_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
