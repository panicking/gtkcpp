// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_OUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// void g_output_stream_clear_pending (GOutputStream* stream);
// void g_output_stream_clear_pending (::GOutputStream* stream);
void base::OutputStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_clear_pending;
  call_wrap_v ((::GOutputStream*) (gobj_()));
}

// gboolean g_output_stream_close (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_close (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
bool base::OutputStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::OutputStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_output_stream_close_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_close_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_close_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_output_stream_close_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
bool base::OutputStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_output_stream_flush (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_flush (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
bool base::OutputStreamBase::flush (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::OutputStreamBase::flush (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_output_stream_flush_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_flush_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::flush_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::flush_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GOutputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_flush_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_output_stream_flush_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
bool base::OutputStreamBase::flush_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::flush_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_flush_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_output_stream_has_pending (GOutputStream* stream);
// gboolean g_output_stream_has_pending (::GOutputStream* stream);
bool base::OutputStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_is_closed (GOutputStream* stream);
// gboolean g_output_stream_is_closed (::GOutputStream* stream);
bool base::OutputStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_is_closing (GOutputStream* stream);
// gboolean g_output_stream_is_closing (::GOutputStream* stream);
bool base::OutputStreamBase::is_closing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_is_closing;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_output_stream_printf (GOutputStream* stream, gsize* bytes_written, GCancellable* cancellable, GError** error, const gchar* format);
// gboolean g_output_stream_printf (::GOutputStream* stream, gsize* bytes_written, ::GCancellable* cancellable, ::GError* error, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_output_stream_set_pending (GOutputStream* stream, GError ** error);
// gboolean g_output_stream_set_pending (::GOutputStream* stream, GError ** error);
bool base::OutputStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gssize g_output_stream_splice (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_splice (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_output_stream_splice_async (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_splice_async (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GInputStream*) (source_to_c), (::GOutputStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_splice_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_splice_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::OutputStreamBase::splice_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_output_stream_vprintf (GOutputStream* stream, gsize* bytes_written, GCancellable* cancellable, GError** error, const gchar* format, va_list args);
// gboolean g_output_stream_vprintf (::GOutputStream* stream, gsize* bytes_written, ::GCancellable* cancellable, ::GError* error, const char* format,  args);
// IGNORE; not introspectable, args type  not supported, inconsistent in error pointer depth (2 vs 1)

// gssize g_output_stream_write (GOutputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_write (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
gssize base::OutputStreamBase::write (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (guint8 * buffer, gsize count)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write;
  auto cancellable_to_c = nullptr;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::OutputStreamBase::write (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write;
  auto cancellable_to_c = nullptr;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_output_stream_write_all (GOutputStream* stream, void* buffer, gsize count, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_write_all (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
bool base::OutputStreamBase::write_all (guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (guint8 * buffer, gsize count, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all (guint8 * buffer, gsize count, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (bytes_written ? &bytes_written_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (guint8 * buffer, gsize count)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all (guint8 * buffer, gsize count, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all;
  auto cancellable_to_c = nullptr;
  gsize bytes_written_o {};
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gsize*) (&bytes_written_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}

// void g_output_stream_write_all_async (GOutputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_all_async (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::write_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_output_stream_write_all_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_write_all_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::write_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}

// void g_output_stream_write_async (GOutputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_async (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::write_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  call_wrap_v ((::GOutputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (buffer_w.size()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_write_bytes (GOutputStream* stream, GBytes* bytes, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_write_bytes (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
gssize base::OutputStreamBase::write_bytes (GLib::Bytes bytes, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes bytes)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes;
  auto cancellable_to_c = nullptr;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes bytes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes (GLib::Bytes bytes, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes;
  auto cancellable_to_c = nullptr;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_output_stream_write_bytes_async (GOutputStream* stream, GBytes* bytes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_bytes_async (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::OutputStreamBase::write_bytes_async (GLib::Bytes bytes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::OutputStreamBase::write_bytes_async (GLib::Bytes bytes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GOutputStream*) (gobj_()), (::GBytes*) (bytes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_output_stream_write_bytes_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_write_bytes_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::OutputStreamBase::write_bytes_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_bytes_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gssize g_output_stream_write_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_write_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::OutputStreamBase::write_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::OutputStreamBase::write_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_write_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_output_stream_writev (GOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_writev (::GOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

// gboolean g_output_stream_writev_all (GOutputStream* stream, GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_writev_all (::GOutputStream* stream, ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

// void g_output_stream_writev_all_async (GOutputStream* stream, GOutputVector* vectors, gsize n_vectors, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_writev_all_async (::GOutputStream* stream, ::GOutputVector** vectors, gsize n_vectors, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

// gboolean g_output_stream_writev_all_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_all_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_all_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}

// void g_output_stream_writev_async (GOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_writev_async (::GOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

// gboolean g_output_stream_writev_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
bool base::OutputStreamBase::writev_finish (Gio::AsyncResult result, gsize * bytes_written)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), &error);
  if (bytes_written) *bytes_written = bytes_written_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::OutputStreamBase::writev_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (bytes_written ? &bytes_written_o : nullptr), _error ? &_error_o : nullptr);
  if (bytes_written) *bytes_written = bytes_written_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, bytes_written_o);
}
std::tuple<bool, gsize> base::OutputStreamBase::writev_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_output_stream_writev_finish;
  gsize bytes_written_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&bytes_written_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, bytes_written_o);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_def_impl.hpp>)
#include <gio/outputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_impl.hpp>)
#include <gio/outputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void OutputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GOutputStreamClass *methods = (::GOutputStreamClass *) class_struct;
  (void) methods;

}

// void OutputStream::close_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void OutputStream::close_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean OutputStream::close_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean OutputStream::close_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean OutputStream::close_fn (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean OutputStream::close_fn (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// gboolean OutputStream::flush (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean OutputStream::flush (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void OutputStream::flush_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void OutputStream::flush_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean OutputStream::flush_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean OutputStream::flush_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gssize OutputStream::splice (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, GCancellable* cancellable, GError ** error);
// gssize OutputStream::splice (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void OutputStream::splice_async (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void OutputStream::splice_async (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gssize OutputStream::splice_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize OutputStream::splice_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void OutputStream::write_async (GOutputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void OutputStream::write_async (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

// gssize OutputStream::write_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize OutputStream::write_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gssize OutputStream::write_fn (GOutputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize OutputStream::write_fn (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// void OutputStream::writev_async (GOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void OutputStream::writev_async (::GOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method container parameter not supported, virtual-method callback parameter not supported

// gboolean OutputStream::writev_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean OutputStream::writev_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// gboolean OutputStream::writev_fn (GOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean OutputStream::writev_fn (::GOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
// SKIP; virtual-method container parameter not supported, virtual-method out parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
