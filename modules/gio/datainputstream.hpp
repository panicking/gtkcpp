// AUTO-GENERATED

#ifndef _GI_GIO_DATAINPUTSTREAM_HPP_
#define _GI_GIO_DATAINPUTSTREAM_HPP_

#include "bufferedinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;

class DataInputStream;

namespace base {


#define GI_GIO_DATAINPUTSTREAM_BASE base::DataInputStreamBase
class DataInputStreamBase : public Gio::BufferedInputStream
{
typedef Gio::BufferedInputStream super_type;
public:
typedef ::GDataInputStream BaseObjectType;

DataInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_data_input_stream_get_type(); } 

// GDataInputStream* g_data_input_stream_new (GInputStream* base_stream);
// ::GDataInputStream* g_data_input_stream_new (::GInputStream* base_stream);
static GI_INLINE_DECL Gio::DataInputStream new_ (Gio::InputStream base_stream) noexcept;

// GDataStreamByteOrder g_data_input_stream_get_byte_order (GDataInputStream* stream);
// ::GDataStreamByteOrder g_data_input_stream_get_byte_order (::GDataInputStream* stream);
GI_INLINE_DECL Gio::DataStreamByteOrder get_byte_order () noexcept;

// GDataStreamNewlineType g_data_input_stream_get_newline_type (GDataInputStream* stream);
// ::GDataStreamNewlineType g_data_input_stream_get_newline_type (::GDataInputStream* stream);
GI_INLINE_DECL Gio::DataStreamNewlineType get_newline_type () noexcept;

// guchar g_data_input_stream_read_byte (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint8 g_data_input_stream_read_byte (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL guint8 read_byte (Gio::Cancellable cancellable);
GI_INLINE_DECL guint8 read_byte ();
GI_INLINE_DECL guint8 read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint8 read_byte (GLib::Error * _error) noexcept;

// gint16 g_data_input_stream_read_int16 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint16 g_data_input_stream_read_int16 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gint16 read_int16 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint16 read_int16 ();
GI_INLINE_DECL gint16 read_int16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint16 read_int16 (GLib::Error * _error) noexcept;

// gint32 g_data_input_stream_read_int32 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint32 g_data_input_stream_read_int32 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gint32 read_int32 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint32 read_int32 ();
GI_INLINE_DECL gint32 read_int32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint32 read_int32 (GLib::Error * _error) noexcept;

// gint64 g_data_input_stream_read_int64 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// gint64 g_data_input_stream_read_int64 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gint64 read_int64 (Gio::Cancellable cancellable);
GI_INLINE_DECL gint64 read_int64 ();
GI_INLINE_DECL gint64 read_int64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint64 read_int64 (GLib::Error * _error) noexcept;

// char* g_data_input_stream_read_line (GDataInputStream* stream, gsize* length, GCancellable* cancellable, GError ** error);
// guint8* g_data_input_stream_read_line (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<guint8> read_line (gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<guint8> read_line (gsize * length = nullptr);
GI_INLINE_DECL std::vector<guint8> read_line (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<guint8> read_line (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line ();
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line (GLib::Error * _error) noexcept;

// void g_data_input_stream_read_line_async (GDataInputStream* stream, gint io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_data_input_stream_read_line_async (::GDataInputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void read_line_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_line_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// char* g_data_input_stream_read_line_finish (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// guint8* g_data_input_stream_read_line_finish (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<guint8> read_line_finish (Gio::AsyncResult result, gsize * length = nullptr);
GI_INLINE_DECL std::vector<guint8> read_line_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> read_line_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char* g_data_input_stream_read_line_finish_utf8 (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// char* g_data_input_stream_read_line_finish_utf8 (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
GI_INLINE_DECL std::string read_line_finish_utf8 (Gio::AsyncResult result, gsize * length = nullptr);
GI_INLINE_DECL std::string read_line_finish_utf8 (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_finish_utf8 (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_finish_utf8 (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// char* g_data_input_stream_read_line_utf8 (GDataInputStream* stream, gsize* length, GCancellable* cancellable, GError ** error);
// char* g_data_input_stream_read_line_utf8 (::GDataInputStream* stream, gsize* length, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::string read_line_utf8 (gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL std::string read_line_utf8 (gsize * length = nullptr);
GI_INLINE_DECL std::string read_line_utf8 (gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string read_line_utf8 (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_utf8 (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_utf8 ();
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_utf8 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_line_utf8 (GLib::Error * _error) noexcept;

// guint16 g_data_input_stream_read_uint16 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint16 g_data_input_stream_read_uint16 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL guint16 read_uint16 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint16 read_uint16 ();
GI_INLINE_DECL guint16 read_uint16 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint16 read_uint16 (GLib::Error * _error) noexcept;

// guint32 g_data_input_stream_read_uint32 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint32 g_data_input_stream_read_uint32 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL guint32 read_uint32 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint32 read_uint32 ();
GI_INLINE_DECL guint32 read_uint32 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint32 read_uint32 (GLib::Error * _error) noexcept;

// guint64 g_data_input_stream_read_uint64 (GDataInputStream* stream, GCancellable* cancellable, GError ** error);
// guint64 g_data_input_stream_read_uint64 (::GDataInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL guint64 read_uint64 (Gio::Cancellable cancellable);
GI_INLINE_DECL guint64 read_uint64 ();
GI_INLINE_DECL guint64 read_uint64 (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint64 read_uint64 (GLib::Error * _error) noexcept;

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
GI_INLINE_DECL std::string read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable);
GI_INLINE_DECL std::string read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length = nullptr);
GI_INLINE_DECL std::string read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string read_upto (const std::string & stop_chars, gssize stop_chars_len, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto (const std::string & stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto (const std::string & stop_chars, gssize stop_chars_len);
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto (const std::string & stop_chars, gssize stop_chars_len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto (const std::string & stop_chars, gssize stop_chars_len, GLib::Error * _error) noexcept;

// void g_data_input_stream_read_upto_async (GDataInputStream* stream, const gchar* stop_chars, gssize stop_chars_len, gint io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_data_input_stream_read_upto_async (::GDataInputStream* stream, const char* stop_chars, gssize stop_chars_len, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void read_upto_async (const std::string & stop_chars, gssize stop_chars_len, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_upto_async (const std::string & stop_chars, gssize stop_chars_len, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// char* g_data_input_stream_read_upto_finish (GDataInputStream* stream, GAsyncResult* result, gsize* length, GError ** error);
// char* g_data_input_stream_read_upto_finish (::GDataInputStream* stream, ::GAsyncResult* result, gsize* length, GError ** error);
GI_INLINE_DECL std::string read_upto_finish (Gio::AsyncResult result, gsize * length = nullptr);
GI_INLINE_DECL std::string read_upto_finish (Gio::AsyncResult result, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<std::string, gsize> read_upto_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_data_input_stream_set_byte_order (GDataInputStream* stream, GDataStreamByteOrder order);
// void g_data_input_stream_set_byte_order (::GDataInputStream* stream, ::GDataStreamByteOrder order);
GI_INLINE_DECL void set_byte_order (Gio::DataStreamByteOrder order) noexcept;

// void g_data_input_stream_set_newline_type (GDataInputStream* stream, GDataStreamNewlineType type);
// void g_data_input_stream_set_newline_type (::GDataInputStream* stream, ::GDataStreamNewlineType type);
GI_INLINE_DECL void set_newline_type (Gio::DataStreamNewlineType type) noexcept;

gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> property_byte_order()
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> (*this, "byte-order"); }
const gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> property_byte_order() const
{ return gi::property_proxy<Gio::DataStreamByteOrder, base::DataInputStreamBase> (*this, "byte-order"); }

gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> property_newline_type()
{ return gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> (*this, "newline-type"); }
const gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> property_newline_type() const
{ return gi::property_proxy<Gio::DataStreamNewlineType, base::DataInputStreamBase> (*this, "newline-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra_def.hpp>)
#include <gio/datainputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/datainputstream_extra.hpp>)
#include <gio/datainputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DataInputStream : public GI_GIO_DATAINPUTSTREAM_BASE
{ typedef GI_GIO_DATAINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDataInputStream>
{ typedef Gio::DataInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DataInputStreamClassDef
{
typedef DataInputStreamClassDef self;
public:
typedef Gio::DataInputStream instance_type;
typedef ::GDataInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DataInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::DataInputStreamClassDef, Gio::impl::internal::BufferedInputStreamClass>
{
typedef DataInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DataInputStreamClassDef, Gio::impl::internal::BufferedInputStreamClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using DataInputStreamImpl = detail::ObjectImpl<DataInputStream, internal::DataInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
