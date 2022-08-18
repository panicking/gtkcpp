// AUTO-GENERATED

#ifndef _GI_GIO_IOSTREAM_HPP_
#define _GI_GIO_IOSTREAM_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class OutputStream;

class IOStream;

namespace base {


#define GI_GIO_IOSTREAM_BASE base::IOStreamBase
class IOStreamBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GIOStream BaseObjectType;

IOStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_io_stream_get_type(); } 

// gboolean g_io_stream_splice_finish (GAsyncResult* result, GError ** error);
// gboolean g_io_stream_splice_finish (::GAsyncResult* result, GError ** error);
static GI_INLINE_DECL bool splice_finish (Gio::AsyncResult result);
static GI_INLINE_DECL bool splice_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_io_stream_clear_pending (GIOStream* stream);
// void g_io_stream_clear_pending (::GIOStream* stream);
GI_INLINE_DECL void clear_pending () noexcept;

// gboolean g_io_stream_close (GIOStream* stream, GCancellable* cancellable, GError ** error);
// gboolean g_io_stream_close (::GIOStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_io_stream_close_async (GIOStream* stream, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_io_stream_close_async (::GIOStream* stream, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_io_stream_close_finish (GIOStream* stream, GAsyncResult* result, GError ** error);
// gboolean g_io_stream_close_finish (::GIOStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GInputStream* g_io_stream_get_input_stream (GIOStream* stream);
// ::GInputStream* g_io_stream_get_input_stream (::GIOStream* stream);
GI_INLINE_DECL Gio::InputStream get_input_stream () noexcept;

// GOutputStream* g_io_stream_get_output_stream (GIOStream* stream);
// ::GOutputStream* g_io_stream_get_output_stream (::GIOStream* stream);
GI_INLINE_DECL Gio::OutputStream get_output_stream () noexcept;

// gboolean g_io_stream_has_pending (GIOStream* stream);
// gboolean g_io_stream_has_pending (::GIOStream* stream);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean g_io_stream_is_closed (GIOStream* stream);
// gboolean g_io_stream_is_closed (::GIOStream* stream);
GI_INLINE_DECL bool is_closed () noexcept;

// gboolean g_io_stream_set_pending (GIOStream* stream, GError ** error);
// gboolean g_io_stream_set_pending (::GIOStream* stream, GError ** error);
GI_INLINE_DECL bool set_pending ();
GI_INLINE_DECL bool set_pending (GLib::Error * _error) noexcept;

// void g_io_stream_splice_async (GIOStream* stream1, GIOStream* stream2, GIOStreamSpliceFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_io_stream_splice_async (::GIOStream* stream1, ::GIOStream* stream2, ::GIOStreamSpliceFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void splice_async (Gio::IOStream stream2, Gio::IOStreamSpliceFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

gi::property_proxy<bool, base::IOStreamBase> property_closed()
{ return gi::property_proxy<bool, base::IOStreamBase> (*this, "closed"); }
const gi::property_proxy<bool, base::IOStreamBase> property_closed() const
{ return gi::property_proxy<bool, base::IOStreamBase> (*this, "closed"); }

gi::property_proxy<Gio::InputStream, base::IOStreamBase> property_input_stream()
{ return gi::property_proxy<Gio::InputStream, base::IOStreamBase> (*this, "input-stream"); }
const gi::property_proxy<Gio::InputStream, base::IOStreamBase> property_input_stream() const
{ return gi::property_proxy<Gio::InputStream, base::IOStreamBase> (*this, "input-stream"); }

gi::property_proxy<Gio::OutputStream, base::IOStreamBase> property_output_stream()
{ return gi::property_proxy<Gio::OutputStream, base::IOStreamBase> (*this, "output-stream"); }
const gi::property_proxy<Gio::OutputStream, base::IOStreamBase> property_output_stream() const
{ return gi::property_proxy<Gio::OutputStream, base::IOStreamBase> (*this, "output-stream"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/iostream_extra_def.hpp>)
#include <gio/iostream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/iostream_extra.hpp>)
#include <gio/iostream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class IOStream : public GI_GIO_IOSTREAM_BASE
{ typedef GI_GIO_IOSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GIOStream>
{ typedef Gio::IOStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class IOStreamClassDef
{
typedef IOStreamClassDef self;
public:
typedef Gio::IOStream instance_type;
typedef ::GIOStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

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
virtual Gio::InputStream get_input_stream_ () noexcept = 0;

// GOutputStream* IOStream::get_output_stream (GIOStream* stream);
// ::GOutputStream* IOStream::get_output_stream (::GIOStream* stream);
virtual Gio::OutputStream get_output_stream_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IOStreamClass: public detail::ClassTemplate<Gio::impl::internal::IOStreamClassDef, GObject::impl::internal::ObjectClass>
{
typedef IOStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::IOStreamClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


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
GI_INLINE_DECL Gio::InputStream get_input_stream_ () noexcept override;

// GOutputStream* IOStream::get_output_stream (GIOStream* stream);
// ::GOutputStream* IOStream::get_output_stream (::GIOStream* stream);
GI_INLINE_DECL Gio::OutputStream get_output_stream_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using IOStreamImpl = detail::ObjectImpl<IOStream, internal::IOStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
