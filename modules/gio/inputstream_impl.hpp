// AUTO-GENERATED

#ifndef _GI_GIO_INPUTSTREAM_IMPL_HPP_
#define _GI_GIO_INPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_input_stream_clear_pending (GInputStream* stream);
// void g_input_stream_clear_pending (::GInputStream* stream);
void base::InputStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_clear_pending;
  call_wrap_v ((::GInputStream*) (gobj_()));
}

// gboolean g_input_stream_close (GInputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_input_stream_close (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
bool base::InputStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::InputStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_input_stream_close_async (GInputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_input_stream_close_async (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::InputStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_input_stream_close_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_input_stream_close_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
bool base::InputStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_input_stream_has_pending (GInputStream* stream);
// gboolean g_input_stream_has_pending (::GInputStream* stream);
bool base::InputStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_input_stream_is_closed (GInputStream* stream);
// gboolean g_input_stream_is_closed (::GInputStream* stream);
bool base::InputStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()));
  return _temp_ret;
}

// gssize g_input_stream_read (GInputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_input_stream_read (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::InputStreamBase::read (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_input_stream_read_all (GInputStream* stream, void* buffer, gsize count, gsize* bytes_read, GCancellable* cancellable, GError ** error);
// gboolean g_input_stream_read_all (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::InputStreamBase::read_all (guint8 * buffer, gsize count, gsize & bytes_read, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<bool, gsize> base::InputStreamBase::read_all (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gsize* bytes_read, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_read_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gsize*) (&bytes_read_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}

// void g_input_stream_read_all_async (GInputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_input_stream_read_all_async (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::InputStreamBase::read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_input_stream_read_all_finish (GInputStream* stream, GAsyncResult* result, gsize* bytes_read, GError ** error);
// gboolean g_input_stream_read_all_finish (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
bool base::InputStreamBase::read_all_finish (Gio::AsyncResult result, gsize & bytes_read)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), &error);
  bytes_read = bytes_read_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::read_all_finish (Gio::AsyncResult result, gsize & bytes_read, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), _error ? &_error_o : nullptr);
  bytes_read = bytes_read_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::InputStreamBase::read_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_read_o);
}
std::tuple<bool, gsize> base::InputStreamBase::read_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, gsize* bytes_read, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_all_finish;
  gsize bytes_read_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_read_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_read_o);
}

// void g_input_stream_read_async (GInputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_input_stream_read_async (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::InputStreamBase::read_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GInputStream*) (gobj_()), (guint8*) (buffer), (gsize) (count), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* g_input_stream_read_bytes (GInputStream* stream, gsize count, GCancellable* cancellable, GError ** error);
// ::GBytes* g_input_stream_read_bytes (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::InputStreamBase::read_bytes (gsize count, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_input_stream_read_bytes_async (GInputStream* stream, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_input_stream_read_bytes_async (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::InputStreamBase::read_bytes_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::read_bytes_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* g_input_stream_read_bytes_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// ::GBytes* g_input_stream_read_bytes_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
GLib::Bytes base::InputStreamBase::read_bytes_finish (Gio::AsyncResult result)
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::InputStreamBase::read_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gssize g_input_stream_read_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_input_stream_read_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::InputStreamBase::read_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::read_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_read_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_input_stream_set_pending (GInputStream* stream, GError ** error);
// gboolean g_input_stream_set_pending (::GInputStream* stream, GError ** error);
bool base::InputStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::InputStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GInputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gssize g_input_stream_skip (GInputStream* stream, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_input_stream_skip (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
gssize base::InputStreamBase::skip (gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::InputStreamBase::skip (gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_input_stream_skip_async (GInputStream* stream, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_input_stream_skip_async (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::InputStreamBase::skip_async (gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::InputStreamBase::skip_async (gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GInputStream*) (gobj_()), (gsize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_input_stream_skip_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_input_stream_skip_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::InputStreamBase::skip_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::InputStreamBase::skip_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_input_stream_skip_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra_def_impl.hpp>)
#include <gio/inputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/inputstream_extra_impl.hpp>)
#include <gio/inputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void InputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GInputStreamClass *methods = (::GInputStreamClass *) class_struct;
  (void) methods;

}

// void InputStream::close_async (GInputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void InputStream::close_async (::GInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean InputStream::close_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gboolean InputStream::close_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean InputStream::close_fn (GInputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean InputStream::close_fn (::GInputStream* stream, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void InputStream::read_async (GInputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void InputStream::read_async (::GInputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method out parameter not supported, virtual-method callback parameter not supported

// gssize InputStream::read_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gssize InputStream::read_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gssize InputStream::read_fn (GInputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize InputStream::read_fn (::GInputStream* stream, void* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// gssize InputStream::skip (GInputStream* stream, gsize count, GCancellable* cancellable, GError ** error);
// gssize InputStream::skip (::GInputStream* stream, gsize count, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void InputStream::skip_async (GInputStream* stream, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void InputStream::skip_async (::GInputStream* stream, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gssize InputStream::skip_finish (GInputStream* stream, GAsyncResult* result, GError ** error);
// gssize InputStream::skip_finish (::GInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
