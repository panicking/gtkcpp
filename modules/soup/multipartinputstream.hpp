// AUTO-GENERATED

#ifndef _GI_SOUP_MULTIPARTINPUTSTREAM_HPP_
#define _GI_SOUP_MULTIPARTINPUTSTREAM_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Message;
class MessageHeaders;

class MultipartInputStream;

namespace base {


#define GI_SOUP_MULTIPARTINPUTSTREAM_BASE base::MultipartInputStreamBase
class MultipartInputStreamBase : public Gio::FilterInputStream
{
typedef Gio::FilterInputStream super_type;
public:
typedef ::SoupMultipartInputStream BaseObjectType;

MultipartInputStreamBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_multipart_input_stream_get_type(); } 

GI_INLINE_DECL Gio::PollableInputStream interface_ (gi::interface_tag<Gio::PollableInputStream>);

GI_INLINE_DECL operator Gio::PollableInputStream ();

// SoupMultipartInputStream* soup_multipart_input_stream_new (SoupMessage* msg, GInputStream* base_stream);
// ::SoupMultipartInputStream* soup_multipart_input_stream_new (::SoupMessage* msg, ::GInputStream* base_stream);
static GI_INLINE_DECL Soup::MultipartInputStream new_ (Soup::Message msg, Gio::InputStream base_stream) noexcept;

// SoupMessageHeaders* soup_multipart_input_stream_get_headers (SoupMultipartInputStream* multipart);
// ::SoupMessageHeaders* soup_multipart_input_stream_get_headers (::SoupMultipartInputStream* multipart);
GI_INLINE_DECL Soup::MessageHeaders get_headers () noexcept;

// GInputStream* soup_multipart_input_stream_next_part (SoupMultipartInputStream* multipart, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_multipart_input_stream_next_part (::SoupMultipartInputStream* multipart, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::InputStream next_part (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::InputStream next_part ();
GI_INLINE_DECL Gio::InputStream next_part (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::InputStream next_part (GLib::Error * _error) noexcept;

// void soup_multipart_input_stream_next_part_async (SoupMultipartInputStream* multipart, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer data);
// void soup_multipart_input_stream_next_part_async (::SoupMultipartInputStream* multipart, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* data);
GI_INLINE_DECL void next_part_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void next_part_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* soup_multipart_input_stream_next_part_finish (SoupMultipartInputStream* multipart, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_multipart_input_stream_next_part_finish (::SoupMultipartInputStream* multipart, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::InputStream next_part_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::InputStream next_part_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Soup::Message, base::MultipartInputStreamBase> property_message()
{ return gi::property_proxy<Soup::Message, base::MultipartInputStreamBase> (*this, "message"); }
const gi::property_proxy<Soup::Message, base::MultipartInputStreamBase> property_message() const
{ return gi::property_proxy<Soup::Message, base::MultipartInputStreamBase> (*this, "message"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/multipartinputstream_extra_def.hpp>)
#include <soup/multipartinputstream_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/multipartinputstream_extra.hpp>)
#include <soup/multipartinputstream_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class MultipartInputStream : public GI_SOUP_MULTIPARTINPUTSTREAM_BASE
{ typedef GI_SOUP_MULTIPARTINPUTSTREAM_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMultipartInputStream>
{ typedef Soup::MultipartInputStream type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class MultipartInputStreamClassDef
{
typedef MultipartInputStreamClassDef self;
public:
typedef Soup::MultipartInputStream instance_type;
typedef ::SoupMultipartInputStreamClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MultipartInputStreamClass: public detail::ClassTemplate<Soup::impl::internal::MultipartInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl>
{
typedef MultipartInputStreamClass self;
typedef detail::ClassTemplate<Soup::impl::internal::MultipartInputStreamClassDef, Gio::impl::internal::FilterInputStreamClass, Gio::impl::internal::PollableInputStreamInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::PollableInputStreamInterfaceClassImpl GPollableInputStreamInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using MultipartInputStreamImpl = detail::ObjectImpl<MultipartInputStream, internal::MultipartInputStreamClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
