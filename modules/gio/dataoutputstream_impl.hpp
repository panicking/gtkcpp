// AUTO-GENERATED

#ifndef _GI_GIO_DATAOUTPUTSTREAM_IMPL_HPP_
#define _GI_GIO_DATAOUTPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable DataOutputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DataOutputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GDataOutputStream* g_data_output_stream_new (GOutputStream* base_stream);
// ::GDataOutputStream* g_data_output_stream_new (::GOutputStream* base_stream);
Gio::DataOutputStream base::DataOutputStreamBase::new_ (Gio::OutputStream base_stream) noexcept
{
  typedef ::GDataOutputStream* (*call_wrap_t) (::GOutputStream* base_stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_new;
  auto base_stream_to_c = gi::unwrap (base_stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GOutputStream*) (base_stream_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDataStreamByteOrder g_data_output_stream_get_byte_order (GDataOutputStream* stream);
// ::GDataStreamByteOrder g_data_output_stream_get_byte_order (::GDataOutputStream* stream);
Gio::DataStreamByteOrder base::DataOutputStreamBase::get_byte_order () noexcept
{
  typedef ::GDataStreamByteOrder (*call_wrap_t) (::GDataOutputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_get_byte_order;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_data_output_stream_put_byte (GDataOutputStream* stream, guchar data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_byte (::GDataOutputStream* stream, guint8 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_byte (guint8 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint8 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint8) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_byte (guint8 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint8 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_byte;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint8) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_byte (guint8 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint8 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_byte;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint8) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_byte (guint8 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint8 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_byte;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint8) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_int16 (GDataOutputStream* stream, gint16 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_int16 (::GDataOutputStream* stream, gint16 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_int16 (gint16 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint16) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int16 (gint16 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int16;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint16) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int16 (gint16 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint16) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int16 (gint16 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int16;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint16) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_int32 (GDataOutputStream* stream, gint32 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_int32 (::GDataOutputStream* stream, gint32 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_int32 (gint32 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint32) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int32 (gint32 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int32;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint32) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int32 (gint32 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint32) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int32 (gint32 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int32;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint32) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_int64 (GDataOutputStream* stream, gint64 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_int64 (::GDataOutputStream* stream, gint64 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_int64 (gint64 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint64) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int64 (gint64 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int64;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint64) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int64 (gint64 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint64) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_int64 (gint64 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, gint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_int64;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (gint64) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_string (GDataOutputStream* stream, const char* str, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_string (::GDataOutputStream* stream, const char* str, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_string (const std::string & str, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, const char* str, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (const char*) (str_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_string (const std::string & str)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, const char* str, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_string;
  auto cancellable_to_c = nullptr;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (const char*) (str_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_string (const std::string & str, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, const char* str, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (const char*) (str_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_string (const std::string & str, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, const char* str, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_string;
  auto cancellable_to_c = nullptr;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (const char*) (str_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_uint16 (GDataOutputStream* stream, guint16 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_uint16 (::GDataOutputStream* stream, guint16 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_uint16 (guint16 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint16) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint16 (guint16 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint16;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint16) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint16 (guint16 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint16;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint16) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint16 (guint16 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint16 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint16;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint16) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_uint32 (GDataOutputStream* stream, guint32 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_uint32 (::GDataOutputStream* stream, guint32 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_uint32 (guint32 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint32) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint32 (guint32 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint32;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint32) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint32 (guint32 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint32) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint32 (guint32 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint32 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint32;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint32) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_data_output_stream_put_uint64 (GDataOutputStream* stream, guint64 data, GCancellable* cancellable, GError ** error);
// gboolean g_data_output_stream_put_uint64 (::GDataOutputStream* stream, guint64 data, ::GCancellable* cancellable, GError ** error);
bool base::DataOutputStreamBase::put_uint64 (guint64 data, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint64) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint64 (guint64 data)
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint64;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint64) (data_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint64 (guint64 data, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint64) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DataOutputStreamBase::put_uint64 (guint64 data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDataOutputStream* stream, guint64 data, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_put_uint64;
  auto cancellable_to_c = nullptr;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDataOutputStream*) (gobj_()), (guint64) (data_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_data_output_stream_set_byte_order (GDataOutputStream* stream, GDataStreamByteOrder order);
// void g_data_output_stream_set_byte_order (::GDataOutputStream* stream, ::GDataStreamByteOrder order);
void base::DataOutputStreamBase::set_byte_order (Gio::DataStreamByteOrder order) noexcept
{
  typedef void (*call_wrap_t) (::GDataOutputStream* stream, ::GDataStreamByteOrder order);
  call_wrap_t call_wrap_v = (call_wrap_t) g_data_output_stream_set_byte_order;
  auto order_to_c = gi::unwrap (order);
  call_wrap_v ((::GDataOutputStream*) (gobj_()), (::GDataStreamByteOrder) (order_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dataoutputstream_extra_def_impl.hpp>)
#include <gio/dataoutputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dataoutputstream_extra_impl.hpp>)
#include <gio/dataoutputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DataOutputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDataOutputStreamClass *methods = (::GDataOutputStreamClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
