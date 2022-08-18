// AUTO-GENERATED

#ifndef _GI_GIO_DATAINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_DATAINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDataInputStream* g_data_input_stream_new (GInputStream* base_stream);
// ::GDataInputStream* g_data_input_stream_new (::GInputStream* base_stream);
Gio::DataInputStream base::DataInputStreamBase::new_ (Gio::InputStream base_stream) noexcept
{
  typedef ::GDataInputStream* (*call_wrap_t) (::GInputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GInputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDataStreamByteOrder g_data_input_stream_get_byte_order (GDataInputStream* stream);
// ::GDataStreamByteOrder g_data_input_stream_get_byte_order (::GDataInputStream* stream);
Gio::DataStreamByteOrder base::DataInputStreamBase::get_byte_order () noexcept
{
  typedef ::GDataStreamByteOrder (*call_wrap_t) (::GDataInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_get_byte_order;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GDataStreamNewlineType g_data_input_stream_get_newline_type (GDataInputStream* stream);
// ::GDataStreamNewlineType g_data_input_stream_get_newline_type (::GDataInputStream* stream);
Gio::DataStreamNewlineType base::DataInputStreamBase::get_newline_type () noexcept
{
  typedef ::GDataStreamNewlineType (*call_wrap_t) (::GDataInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_get_newline_type;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guchar g_data_input_stream_read_byte (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint8 g_data_input_stream_read_byte (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
guint8 base::DataInputStreamBase::read_byte (Gio::Cancellable cancellable)
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte ()
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint8 base::DataInputStreamBase::read_byte (GLib::Error * _error) noexcept
{
  typedef guint8 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_byte;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint16 g_data_input_stream_read_int16 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint16 g_data_input_stream_read_int16 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
gint16 base::DataInputStreamBase::read_int16 (Gio::Cancellable cancellable)
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 ()
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int16;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gint16 base::DataInputStreamBase::read_int16 (GLib::Error * _error) noexcept
{
  typedef gint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int16;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint32 g_data_input_stream_read_int32 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint32 g_data_input_stream_read_int32 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
gint32 base::DataInputStreamBase::read_int32 (Gio::Cancellable cancellable)
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 ()
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int32;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gint32 base::DataInputStreamBase::read_int32 (GLib::Error * _error) noexcept
{
  typedef gint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int32;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gint64 g_data_input_stream_read_int64 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint64 g_data_input_stream_read_int64 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
gint64 base::DataInputStreamBase::read_int64 (Gio::Cancellable cancellable)
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 ()
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int64;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
gint64 base::DataInputStreamBase::read_int64 (GLib::Error * _error) noexcept
{
  typedef gint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_int64;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char* g_data_input_stream_read_line (GDataInputStream* stream, gsize* length, GCancellable* cancellable, GError ** error);
// guint8* g_data_input_stream_read_line (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
std::vector<guint8> base::DataInputStreamBase::read_line (gsize * length, Gio::Cancellable cancellable)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::vector<guint8> base::DataInputStreamBase::read_line (gsize * length)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::vector<guint8> base::DataInputStreamBase::read_line (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::vector<guint8> base::DataInputStreamBase::read_line (gsize * length, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line (Gio::Cancellable cancellable)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line ()
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line (GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}

// void g_data_input_stream_read_line_async (GDataInputStream* stream, gint io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_data_input_stream_read_line_async (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DataInputStreamBase::read_line_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDataInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DataInputStreamBase::read_line_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDataInputStream*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// char* g_data_input_stream_read_line_finish (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// guint8* g_data_input_stream_read_line_finish (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
std::vector<guint8> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, gsize * length)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::vector<guint8> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result)
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}
std::tuple<std::vector<guint8>, gsize> base::DataInputStreamBase::read_line_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}

// char* g_data_input_stream_read_line_finish_utf8 (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// char* g_data_input_stream_read_line_finish_utf8 (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
std::string base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_finish_utf8 (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_finish_utf8;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// char* g_data_input_stream_read_line_utf8 (GDataInputStream* stream, gsize* length, GCancellable* cancellable, GError ** error);
// char* g_data_input_stream_read_line_utf8 (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
std::string base::DataInputStreamBase::read_line_utf8 (gsize * length, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_line_utf8 (gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_line_utf8 (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_line_utf8 (gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_utf8 (Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_utf8 ()
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_utf8 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_line_utf8 (GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_line_utf8;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// guint16 g_data_input_stream_read_uint16 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint16 g_data_input_stream_read_uint16 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
guint16 base::DataInputStreamBase::read_uint16 (Gio::Cancellable cancellable)
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 ()
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint16;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint16 base::DataInputStreamBase::read_uint16 (GLib::Error * _error) noexcept
{
  typedef guint16 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint16;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint32 g_data_input_stream_read_uint32 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint32 g_data_input_stream_read_uint32 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
guint32 base::DataInputStreamBase::read_uint32 (Gio::Cancellable cancellable)
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 ()
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint32;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint32 base::DataInputStreamBase::read_uint32 (GLib::Error * _error) noexcept
{
  typedef guint32 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint32;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// guint64 g_data_input_stream_read_uint64 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint64 g_data_input_stream_read_uint64 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
guint64 base::DataInputStreamBase::read_uint64 (Gio::Cancellable cancellable)
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 ()
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint64;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
guint64 base::DataInputStreamBase::read_uint64 (GLib::Error * _error) noexcept
{
  typedef guint64 (*call_wrap_t) (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_uint64;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char* g_data_input_stream_read_until (GDataInputStream* stream, const gchar* stop_chars, gsize* length, GCancellable* cancellable, GError ** error);
// char* g_data_input_stream_read_until (::GDataInputStream* stream, const char* stop_chars, gsize* length, ::GCancellable* cancellable, GError ** error);
// IGNORE; deprecated

// void g_data_input_stream_read_until_async (GDataInputStream* stream, const gchar* stop_chars, gint io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_data_input_stream_read_until_async (::GDataInputStream* stream, const char* stop_chars, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// char* g_data_input_stream_read_until_finish (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// char* g_data_input_stream_read_until_finish (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
// IGNORE; deprecated

// char* g_data_input_stream_read_upto (GDataInputStream* stream, const gchar* stop_chars, gssize stop_chars_len, gsize* length, GCancellable* cancellable, GError ** error);
// char* g_data_input_stream_read_upto (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
std::string base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (length ? &length_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto (const std::string & stop_chars, gssize stop_chars_len, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gsize* length, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto;
  auto cancellable_to_c = nullptr;
  gsize length_o {};
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gsize*) (&length_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// void g_data_input_stream_read_upto_async (GDataInputStream* stream, const gchar* stop_chars, gssize stop_chars_len, gint io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_data_input_stream_read_upto_async (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DataInputStreamBase::read_upto_async (const std::string & stop_chars, gssize stop_chars_len, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DataInputStreamBase::read_upto_async (const std::string & stop_chars, gssize stop_chars_len, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto stop_chars_len_to_c = stop_chars_len;
  auto stop_chars_to_c = gi::unwrap (stop_chars, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (const char*) (stop_chars_to_c), (gssize) (stop_chars_len_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// char* g_data_input_stream_read_upto_finish (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// char* g_data_input_stream_read_upto_finish (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
std::string base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, gsize * length)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), &error);
  if (length) *length = length_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (length ? &length_o : nullptr), _error ? &_error_o : nullptr);
  if (length) *length = length_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result)
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}
std::tuple<std::string, gsize> base::DataInputStreamBase::read_upto_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_read_upto_finish;
  gsize length_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// void g_data_input_stream_set_byte_order (GDataInputStream* stream, GDataStreamByteOrder order);
// void g_data_input_stream_set_byte_order (::GDataInputStream* stream, ::GDataStreamByteOrder order);
void base::DataInputStreamBase::set_byte_order (Gio::DataStreamByteOrder order) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, ::GDataStreamByteOrder order);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_set_byte_order;
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (::GDataStreamByteOrder) (order_to_c));
}

// void g_data_input_stream_set_newline_type (GDataInputStream* stream, GDataStreamNewlineType type);
// void g_data_input_stream_set_newline_type (::GDataInputStream* stream, ::GDataStreamNewlineType type);
void base::DataInputStreamBase::set_newline_type (Gio::DataStreamNewlineType type) noexcept
{
  typedef void (*call_wrap_t) (::GDataInputStream* stream, ::GDataStreamNewlineType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_input_stream_set_newline_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GDataInputStream*) (gobj_()), (::GDataStreamNewlineType) (type_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_def_impl.hpp>)
#include <gio/datainputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_impl.hpp>)
#include <gio/datainputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DataInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDataInputStreamClass *methods = (::GDataInputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
