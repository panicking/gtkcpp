// AUTO-GENERATED

#ifndef _GI_GIO_BUFFEREDOUTPUTSTREAM_HPP_
#define _GI_GIO_BUFFEREDOUTPUTSTREAM_HPP_

#include "filteroutputstream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class OutputStream;
class Seekable;

class BufferedOutputStream;

namespace base {


#define GI_GIO_BUFFEREDOUTPUTSTREAM_BASE base::BufferedOutputStreamBase
class BufferedOutputStreamBase : public Gio::FilterOutputStream
{
typedef Gio::FilterOutputStream super_type;
public:
typedef ::GBufferedOutputStream BaseObjectType;

BufferedOutputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_buffered_output_stream_get_type(); } 

GI_INLINE_DECL Gio::Seekable interface_ (gi::interface_tag<Gio::Seekable>);

GI_INLINE_DECL operator Gio::Seekable ();

// GOutputStream* g_buffered_output_stream_new (GOutputStream* base_stream);
// ::GBufferedOutputStream* g_buffered_output_stream_new (::GOutputStream* base_stream);
static GI_INLINE_DECL Gio::BufferedOutputStream new_ (Gio::OutputStream base_stream) noexcept;

// GOutputStream* g_buffered_output_stream_new_sized (GOutputStream* base_stream, gsize size);
// ::GBufferedOutputStream* g_buffered_output_stream_new_sized (::GOutputStream* base_stream, gsize size);
static GI_INLINE_DECL Gio::BufferedOutputStream new_sized (Gio::OutputStream base_stream, gsize size) noexcept;

// gboolean g_buffered_output_stream_get_auto_grow (GBufferedOutputStream* stream);
// gboolean g_buffered_output_stream_get_auto_grow (::GBufferedOutputStream* stream);
GI_INLINE_DECL bool get_auto_grow () noexcept;

// gsize g_buffered_output_stream_get_buffer_size (GBufferedOutputStream* stream);
// gsize g_buffered_output_stream_get_buffer_size (::GBufferedOutputStream* stream);
GI_INLINE_DECL gsize get_buffer_size () noexcept;

// void g_buffered_output_stream_set_auto_grow (GBufferedOutputStream* stream, gboolean auto_grow);
// void g_buffered_output_stream_set_auto_grow (::GBufferedOutputStream* stream, gboolean auto_grow);
GI_INLINE_DECL void set_auto_grow (gboolean auto_grow) noexcept;

// void g_buffered_output_stream_set_buffer_size (GBufferedOutputStream* stream, gsize size);
// void g_buffered_output_stream_set_buffer_size (::GBufferedOutputStream* stream, gsize size);
GI_INLINE_DECL void set_buffer_size (gsize size) noexcept;

gi::property_proxy<bool, base::BufferedOutputStreamBase> property_auto_grow()
{ return gi::property_proxy<bool, base::BufferedOutputStreamBase> (*this, "auto-grow"); }
const gi::property_proxy<bool, base::BufferedOutputStreamBase> property_auto_grow() const
{ return gi::property_proxy<bool, base::BufferedOutputStreamBase> (*this, "auto-grow"); }

gi::property_proxy<guint, base::BufferedOutputStreamBase> property_buffer_size()
{ return gi::property_proxy<guint, base::BufferedOutputStreamBase> (*this, "buffer-size"); }
const gi::property_proxy<guint, base::BufferedOutputStreamBase> property_buffer_size() const
{ return gi::property_proxy<guint, base::BufferedOutputStreamBase> (*this, "buffer-size"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/bufferedoutputstream_extra_def.hpp>)
#include <gio/bufferedoutputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/bufferedoutputstream_extra.hpp>)
#include <gio/bufferedoutputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class BufferedOutputStream : public GI_GIO_BUFFEREDOUTPUTSTREAM_BASE
{ typedef GI_GIO_BUFFEREDOUTPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GBufferedOutputStream>
{ typedef Gio::BufferedOutputStream type; }; 

} // namespace repository

} // namespace gi

#include "seekable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class BufferedOutputStreamClassDef
{
typedef BufferedOutputStreamClassDef self;
public:
typedef Gio::BufferedOutputStream instance_type;
typedef ::GBufferedOutputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BufferedOutputStreamClass: public detail::ClassTemplate<Gio::impl::internal::BufferedOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl>
{
typedef BufferedOutputStreamClass self;
typedef detail::ClassTemplate<Gio::impl::internal::BufferedOutputStreamClassDef, Gio::impl::internal::FilterOutputStreamClass, Gio::impl::internal::SeekableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::SeekableIfaceClassImpl GSeekableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using BufferedOutputStreamImpl = detail::ObjectImpl<BufferedOutputStream, internal::BufferedOutputStreamClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
