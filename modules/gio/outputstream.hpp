// AUTO-GENERATED

#ifndef _GI_GIO_OUTPUTSTREAM_HPP_
#define _GI_GIO_OUTPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class OutputVector;

class OutputStream;

namespace base {


#define GI_GIO_OUTPUTSTREAM_BASE base::OutputStreamBase
class OutputStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GOutputStream BaseObjectType;

OutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_output_stream_get_type(); } 

// void g_output_stream_clear_pending (GOutputStream* stream);
// void g_output_stream_clear_pending (::GOutputStream* stream);
GI_INLINE_DECL void clear_pending () noexcept;

// gboolean g_output_stream_close (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_close (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_output_stream_close_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_close_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_close_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_output_stream_close_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_flush (GOutputStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_flush (::GOutputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool flush (Gio::Cancellable cancellable);
GI_INLINE_DECL bool flush ();
GI_INLINE_DECL bool flush (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool flush (GLib::Error * _error) noexcept;

// void g_output_stream_flush_async (GOutputStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_flush_async (::GOutputStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void flush_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void flush_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_flush_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_output_stream_flush_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_has_pending (GOutputStream* stream);
// gboolean g_output_stream_has_pending (::GOutputStream* stream);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_output_stream_is_closed (GOutputStream* stream);
// gboolean g_output_stream_is_closed (::GOutputStream* stream);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_output_stream_is_closing (GOutputStream* stream);
// gboolean g_output_stream_is_closing (::GOutputStream* stream);
GI_INLINE_DECL bool is_closing () noexcept;

// gboolean g_output_stream_printf (GOutputStream* stream, gsize* bytes_written, GCancellable* cancellable, GError** error, const gchar* format);
// gboolean g_output_stream_printf (::GOutputStream* stream, gsize* bytes_written, ::GCancellable* cancellable, ::GError* error, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_output_stream_set_pending (GOutputStream* stream, GError ** error);
// gboolean g_output_stream_set_pending (::GOutputStream* stream, GError ** error);
GI_INLINE_DECL bool set_pending ();
GI_INLINE_DECL bool set_pending (GLib::Error * _error) noexcept;

// gssize g_output_stream_splice (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_splice (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags);
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize splice (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, GLib::Error * _error) noexcept;

// void g_output_stream_splice_async (GOutputStream* stream, GInputStream* source, GOutputStreamSpliceFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_splice_async (::GOutputStream* stream, ::GInputStream* source, ::GOutputStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void splice_async (Gio::InputStream source, Gio::OutputStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_splice_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_splice_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL gssize splice_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_output_stream_vprintf (GOutputStream* stream, gsize* bytes_written, GCancellable* cancellable, GError** error, const gchar* format, va_list args);
// gboolean g_output_stream_vprintf (::GOutputStream* stream, gsize* bytes_written, ::GCancellable* cancellable, ::GError* error, const char* format,  args);
// IGNORE; not introspectable, args type  not supported, inconsistent in error pointer depth (2 vs 1)

// gssize g_output_stream_write (GOutputStream* stream, void* buffer, gsize count, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_write (::GOutputStream* stream, guint8* buffer, gsize count, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize write (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write (guint8 * buffer, gsize count);
GI_INLINE_DECL gssize write (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// gboolean g_output_stream_write_all (GOutputStream* stream, void* buffer, gsize count, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_output_stream_write_all (::GOutputStream* stream, guint8* buffer, gsize count, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool write_all (guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable);
GI_INLINE_DECL bool write_all (guint8 * buffer, gsize count, gsize * bytes_written = nullptr);
GI_INLINE_DECL bool write_all (guint8 * buffer, gsize count, gsize * bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool write_all (guint8 * buffer, gsize count, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gsize> write_all (guint8 * buffer, gsize count);
GI_INLINE_DECL std::tuple<bool, gsize> write_all (guint8 * buffer, gsize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all (guint8 * buffer, gsize count, GLib::Error * _error) noexcept;

// void g_output_stream_write_all_async (GOutputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_all_async (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void write_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_all_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_output_stream_write_all_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_write_all_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool write_all_finish (Gio::AsyncResult result, gsize * bytes_written = nullptr);
GI_INLINE_DECL bool write_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> write_all_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> write_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_output_stream_write_async (GOutputStream* stream, void* buffer, gsize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_async (::GOutputStream* stream, guint8* buffer, gsize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void write_async (guint8 * buffer, gsize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_async (guint8 * buffer, gsize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_write_bytes (GOutputStream* stream, GBytes* bytes, GCancellable* cancellable, GError ** error);
// gssize g_output_stream_write_bytes (::GOutputStream* stream, ::GBytes* bytes, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes bytes, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes bytes);
GI_INLINE_DECL gssize write_bytes (GLib::Bytes bytes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize write_bytes (GLib::Bytes bytes, GLib::Error * _error) noexcept;

// void g_output_stream_write_bytes_async (GOutputStream* stream, GBytes* bytes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_write_bytes_async (::GOutputStream* stream, ::GBytes* bytes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void write_bytes_async (GLib::Bytes bytes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void write_bytes_async (GLib::Bytes bytes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_output_stream_write_bytes_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_write_bytes_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL gssize write_bytes_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize write_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gssize g_output_stream_write_finish (GOutputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_output_stream_write_finish (::GOutputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL gssize write_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize write_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

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
GI_INLINE_DECL bool writev_all_finish (Gio::AsyncResult result, gsize * bytes_written = nullptr);
GI_INLINE_DECL bool writev_all_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> writev_all_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> writev_all_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_output_stream_writev_async (GOutputStream* stream, const GOutputVector* vectors, gsize n_vectors, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_output_stream_writev_async (::GOutputStream* stream, const ::GOutputVector** vectors, gsize n_vectors, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; inconsistent in vectors pointer depth (1 vs 2)

// gboolean g_output_stream_writev_finish (GOutputStream* stream, GAsyncResult* result, gsize* bytes_written, GError ** error);
// gboolean g_output_stream_writev_finish (::GOutputStream* stream, ::GAsyncResult* result, gsize* bytes_written, GError ** error);
GI_INLINE_DECL bool writev_finish (Gio::AsyncResult result, gsize * bytes_written = nullptr);
GI_INLINE_DECL bool writev_finish (Gio::AsyncResult result, gsize * bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> writev_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, gsize> writev_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra_def.hpp>)
#include <gio/outputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/outputstream_extra.hpp>)
#include <gio/outputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class OutputStream : public GI_GIO_OUTPUTSTREAM_BASE
{ typedef GI_GIO_OUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GOutputStream>
{ typedef Gio::OutputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class OutputStreamClassDef
{
typedef OutputStreamClassDef self;
public:
typedef Gio::OutputStream instance_type;
typedef ::GOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

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


};

GI_CLASS_IMPL_BEGIN


class OutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::OutputStreamClassDef, GObject::impl::internal::ObjectClass>
{
typedef OutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::OutputStreamClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


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


};

} // namespace internal

GI_CLASS_IMPL_END

using OutputStreamImpl = detail::ObjectImpl<OutputStream, internal::OutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
