// AUTO-GENERATED

#ifndef _GI_GIO_IOSTREAM_IMPL_HPP_
#define _GI_GIO_IOSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_io_stream_splice_finish (GAsyncResult* result, GError ** error);
// gboolean g_io_stream_splice_finish (::GAsyncResult* result, GError ** error);
bool base::IOStreamBase::splice_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_splice_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_io_stream_clear_pending (GIOStream* stream);
// void g_io_stream_clear_pending (::GIOStream* stream);
void base::IOStreamBase::clear_pending () noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_clear_pending;
  call_wrap_v ((::GIOStream*) (gobj_()));
}

// gboolean g_io_stream_close (GIOStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_io_stream_close (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
bool base::IOStreamBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::IOStreamBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_io_stream_close_async (GIOStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_io_stream_close_async (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::IOStreamBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GIOStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IOStreamBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GIOStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_io_stream_close_finish (GIOStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_io_stream_close_finish (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
bool base::IOStreamBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GInputStream* g_io_stream_get_input_stream (GIOStream* stream);
// ::GInputStream* g_io_stream_get_input_stream (::GIOStream* stream);
Gio::InputStream base::IOStreamBase::get_input_stream () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_get_input_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GOutputStream* g_io_stream_get_output_stream (GIOStream* stream);
// ::GOutputStream* g_io_stream_get_output_stream (::GIOStream* stream);
Gio::OutputStream base::IOStreamBase::get_output_stream () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_get_output_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_io_stream_has_pending (GIOStream* stream);
// gboolean g_io_stream_has_pending (::GIOStream* stream);
bool base::IOStreamBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_has_pending;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_stream_is_closed (GIOStream* stream);
// gboolean g_io_stream_is_closed (::GIOStream* stream);
bool base::IOStreamBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_is_closed;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean g_io_stream_set_pending (GIOStream* stream, GError ** error);
// gboolean g_io_stream_set_pending (::GIOStream* stream, GError ** error);
bool base::IOStreamBase::set_pending ()
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_set_pending;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::IOStreamBase::set_pending (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GIOStream* stream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_set_pending;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_io_stream_splice_async (GIOStream* stream1, GIOStream* stream2, GIOStreamSpliceFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_io_stream_splice_async (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::IOStreamBase::splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto stream2_to_c = gi::unwrap (stream2, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GIOStream*) (gobj_()), (::GIOStream*) (stream2_to_c), (::GIOStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IOStreamBase::splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_io_stream_splice_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto stream2_to_c = gi::unwrap (stream2, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GIOStream*) (gobj_()), (::GIOStream*) (stream2_to_c), (::GIOStreamSpliceFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_def_impl.hpp>)
#include <gio/iostream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_impl.hpp>)
#include <gio/iostream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void IOStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GIOStreamClass *methods = (::GIOStreamClass *) class_struct;
  (void) methods;

  methods->get_input_stream = (decltype (methods->get_input_stream)) detail::method_wrapper<self, Gio::InputStream (*) (), gi::transfer_none_t>::wrapper<&self::get_input_stream_>;
  methods->get_output_stream = (decltype (methods->get_output_stream)) detail::method_wrapper<self, Gio::OutputStream (*) (), gi::transfer_none_t>::wrapper<&self::get_output_stream_>;
}

// void IOStream::close_async (GIOStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void IOStream::close_async (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean IOStream::close_finish (GIOStream* stream, GAsyncResult* result, GError ** error);
// gboolean IOStream::close_finish (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean IOStream::close_fn (GIOStream* stream, GCancellable* cancellable, GError ** error);
// gboolean IOStream::close_fn (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GInputStream* IOStream::get_input_stream (GIOStream* stream);
// ::GInputStream* IOStream::get_input_stream (::GIOStream* stream);
Gio::InputStream IOStreamClass::get_input_stream_ () noexcept
{
  if (!get_struct_()->get_input_stream) return Gio::InputStream{};
  typedef ::GInputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_input_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GOutputStream* IOStream::get_output_stream (GIOStream* stream);
// ::GOutputStream* IOStream::get_output_stream (::GIOStream* stream);
Gio::OutputStream IOStreamClass::get_output_stream_ () noexcept
{
  if (!get_struct_()->get_output_stream) return Gio::OutputStream{};
  typedef ::GOutputStream* (*call_wrap_t) (::GIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_output_stream;
  auto _temp_ret = call_wrap_v ((::GIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
