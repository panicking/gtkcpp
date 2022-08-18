// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDINPUTSTREAM_HPP_
#define _GI_GIO_BUFFEREDINPUTSTREAM_HPP_

#include "filterinputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class InputStream;
class Seekable;

class BufferedInputStream;

namespace base {


#define GI_GIO_BUFFEREDINPUTSTREAM_BASE base::BufferedInputStreamBase
class BufferedInputStreamBase : public Gio::FilterInputStream
{
typedef Gio::FilterInputStream super_type;
public:
typedef ::GBufferedInputStream BaseObjectType;

BufferedInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_buffered_input_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GInputStream* g_buffered_input_stream_new (GInputStream* base_stream);
// ::GBufferedInputStream* g_buffered_input_stream_new (::GInputStream* base_stream);
static GI_INLINE_DECL Gio::BufferedInputStream new_ (Gio::InputStream base_stream) noexcept;

// GInputStream* g_buffered_input_stream_new_sized (GInputStream* base_stream, gsize size);
// ::GBufferedInputStream* g_buffered_input_stream_new_sized (::GInputStream* base_stream, gsize size);
static GI_INLINE_DECL Gio::BufferedInputStream new_sized (Gio::InputStream base_stream, gsize size) noexcept;

// gssize g_buffered_input_stream_fill (GBufferedInputStream* stream, gssize count, GCancellable* cancellable, GError ** error);
// gssize g_buffered_input_stream_fill (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize fill (gssize count, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize fill (gssize count);
GI_INLINE_DECL gssize fill (gssize count, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize fill (gssize count, GLib::Error * _error) noexcept;

// void g_buffered_input_stream_fill_async (GBufferedInputStream* stream, gssize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_buffered_input_stream_fill_async (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void fill_async (gssize count, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void fill_async (gssize count, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gssize g_buffered_input_stream_fill_finish (GBufferedInputStream* stream, GAsyncResult* result, GError ** error);
// gssize g_buffered_input_stream_fill_finish (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL gssize fill_finish (Gio::AsyncResult result);
GI_INLINE_DECL gssize fill_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gsize g_buffered_input_stream_get_available (GBufferedInputStream* stream);
// gsize g_buffered_input_stream_get_available (::GBufferedInputStream* stream);
GI_INLINE_DECL gsize get_available () noexcept;

// gsize g_buffered_input_stream_get_buffer_size (GBufferedInputStream* stream);
// gsize g_buffered_input_stream_get_buffer_size (::GBufferedInputStream* stream);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// gsize g_buffered_input_stream_peek (GBufferedInputStream* stream, void* buffer, gsize offset, gsize count);
// gsize g_buffered_input_stream_peek (::GBufferedInputStream* stream, guint8* buffer, gsize offset, gsize count);
GI_INLINE_DECL gsize peek (guint8 * buffer, gsize offset, gsize count) noexcept;

// void* g_buffered_input_stream_peek_buffer (GBufferedInputStream* stream, gsize* count);
// guint8* g_buffered_input_stream_peek_buffer (::GBufferedInputStream* stream, gsize* count);
GI_INLINE_DECL std::vector<guint8> peek_buffer () noexcept;

// int g_buffered_input_stream_read_byte (GBufferedInputStream* stream, GCancellable* cancellable, GError ** error);
// gint g_buffered_input_stream_read_byte (::GBufferedInputStream* stream, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gint read_byte (Gio::Cancellable cancellable);
GI_INLINE_DECL gint read_byte ();
GI_INLINE_DECL gint read_byte (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gint read_byte (GLib::Error * _error) noexcept;

// void g_buffered_input_stream_set_buffer_size (GBufferedInputStream* stream, gsize size);
// void g_buffered_input_stream_set_buffer_size (::GBufferedInputStream* stream, gsize size);
GI_INLINE_DECL void set_buffer_size (gsize size) noexcept;

gi::property_proxy<guint, base::BufferedInputStreamBase> property_buffer_size()
{ return gi::property_proxy<guint, base::BufferedInputStreamBase> (*this, "buffer-size"); }
const gi::property_proxy<guint, base::BufferedInputStreamBase> property_buffer_size() const
{ return gi::property_proxy<guint, base::BufferedInputStreamBase> (*this, "buffer-size"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra_def.hpp>)
#include <gio/bufferedinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedinputstream_extra.hpp>)
#include <gio/bufferedinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class BufferedInputStream : public GI_GIO_BUFFEREDINPUTSTREAM_BASE
{ typedef GI_GIO_BUFFEREDINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GBufferedInputStream>
{ typedef Gio::BufferedInputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class BufferedInputStreamClassDef
{
typedef BufferedInputStreamClassDef self;
public:
typedef Gio::BufferedInputStream instance_type;
typedef ::GBufferedInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gssize BufferedInputStream::fill (GBufferedInputStream* stream, gssize count, GCancellable* cancellable, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void BufferedInputStream::fill_async (GBufferedInputStream* stream, gssize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream, GAsyncResult* result, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class BufferedInputStreamClass: public detail::ClassTemplate<Gio::impl::internal::BufferedInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef BufferedInputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::BufferedInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;


// gssize BufferedInputStream::fill (GBufferedInputStream* stream, gssize count, GCancellable* cancellable, GError ** error);
// gssize BufferedInputStream::fill (::GBufferedInputStream* stream, gssize count, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void BufferedInputStream::fill_async (GBufferedInputStream* stream, gssize count, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void BufferedInputStream::fill_async (::GBufferedInputStream* stream, gssize count, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gssize BufferedInputStream::fill_finish (GBufferedInputStream* stream, GAsyncResult* result, GError ** error);
// gssize BufferedInputStream::fill_finish (::GBufferedInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using BufferedInputStreamImpl = detail::ObjectImpl<BufferedInputStream, internal::BufferedInputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
