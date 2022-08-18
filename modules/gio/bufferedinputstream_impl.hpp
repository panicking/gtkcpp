// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_BUFFEREDINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable BufferedInputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

BufferedInputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GInputStream* g_buffered_input_stream_new (GInputStream* base_stream);
// ::GBufferedInputStream* g_buffered_input_stream_new (::GInputStream* base_stream);
Gio::BufferedInputStream base::BufferedInputStreamBase::new_ (Gio::InputStream base_stream) noexcept
{
  typedef ::GBufferedInputStream* (*call_wrap_t) (::GInputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInputStream* g_buffered_input_stream_new_sized (GInputStream* base_stream, gsize size);
// ::GBufferedInputStream* g_buffered_input_stream_new_sized (::GInputStream* base_stream, gsize size);
Gio::BufferedInputStream base::BufferedInputStreamBase::new_sized (Gio::InputStream base_stream, gsize size) noexcept
{
  typedef ::GBufferedInputStream* (*call_wrap_t) (::GInputStream* base_stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_new_sized;
  auto size_to_c = size;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c), (gsize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gssize g_buffered_input_stream_fill (GBufferedInputStream* stream, gssize count, GCancellable* cancellable, GError ** error);
// gssize g_buffered_input_stream_fill (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
gssize base::BufferedInputStreamBase::fill (gssize count, Gio::Cancellable cancellable)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill (gssize count, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill;
  auto cancellable_to_c = nullptr;
  auto count_to_c = count;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_buffered_input_stream_fill_async (GBufferedInputStream* stream, gssize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_buffered_input_stream_fill_async (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::BufferedInputStreamBase::fill_async (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::BufferedInputStreamBase::fill_async (gssize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto count_to_c = count;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gssize) (count_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gssize g_buffered_input_stream_fill_finish (GBufferedInputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_buffered_input_stream_fill_finish (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
gssize base::BufferedInputStreamBase::fill_finish (Gio::AsyncResult result)
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::BufferedInputStreamBase::fill_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_fill_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gsize g_buffered_input_stream_get_available (GBufferedInputStream* stream);
// gsize g_buffered_input_stream_get_available (::GBufferedInputStream* stream);
gsize base::BufferedInputStreamBase::get_available () noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_get_available;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_buffered_input_stream_get_buffer_size (GBufferedInputStream* stream);
// gsize g_buffered_input_stream_get_buffer_size (::GBufferedInputStream* stream);
gsize base::BufferedInputStreamBase::get_buffer_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_get_buffer_size;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()));
  return _temp_ret;
}

// gsize g_buffered_input_stream_peek (GBufferedInputStream* stream, void* buffer, gsize offset, gsize count);
// gsize g_buffered_input_stream_peek (::GBufferedInputStream* stream, guint8* buffer, gsize offset, gsize count);
gsize base::BufferedInputStreamBase::peek (guint8 * buffer, gsize offset, gsize count) noexcept
{
  typedef gsize (*call_wrap_t) (::GBufferedInputStream* stream, guint8* buffer, gsize offset, gsize count);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_peek;
  auto offset_to_c = offset;
  auto buffer_i = detail::make_list_unwrap_range (buffer, count, false);
  auto buffer_w = unwrap (buffer_i, gi::transfer_none, direction_in);
  auto buffer_to_c = buffer_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (guint8*) (buffer_to_c), (gsize) (offset_to_c), (gsize) (buffer_w.size()));
  return _temp_ret;
}

// void* g_buffered_input_stream_peek_buffer (GBufferedInputStream* stream, gsize* count);
// guint8* g_buffered_input_stream_peek_buffer (::GBufferedInputStream* stream, gsize* count);
std::vector<guint8> base::BufferedInputStreamBase::peek_buffer () noexcept
{
  typedef guint8* (*call_wrap_t) (::GBufferedInputStream* stream, gsize* count);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_peek_buffer;
  gsize count;
  std::vector<guint8> _temp_ret;
  auto _ret_o = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gsize*) (&count));
  _temp_ret.resize(count);
  detail::wrap_array (_ret_o, gi::transfer_none, count, _temp_ret.data());
  return _temp_ret;
}

// int g_buffered_input_stream_read_byte (GBufferedInputStream* stream, GCancellable* cancellable, GError ** error);
// gint g_buffered_input_stream_read_byte (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
gint base::BufferedInputStreamBase::read_byte (Gio::Cancellable cancellable)
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte ()
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gint base::BufferedInputStreamBase::read_byte (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBufferedInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_buffered_input_stream_set_buffer_size (GBufferedInputStream* stream, gsize size);
// void g_buffered_input_stream_set_buffer_size (::GBufferedInputStream* stream, gsize size);
void base::BufferedInputStreamBase::set_buffer_size (gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GBufferedInputStream* stream, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_buffered_input_stream_set_buffer_size;
  auto size_to_c = size;
  call_wrap_v ((::GBufferedInputStream*) (gobj_()), (gsize) (size_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_def_impl.hpp>)
#include <gio/bufferedinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_impl.hpp>)
#include <gio/bufferedinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void BufferedInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GBufferedInputStreamClass *methods = (::GBufferedInputStreamClass *) class_struct;
  (void) methods;

}

// gssize BufferedInputStream::fill (GBufferedInputStream* stream, gssize count, GCancellable* cancellable, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void BufferedInputStream::fill_async (GBufferedInputStream* stream, gssize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream, GAsyncResult* result, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
