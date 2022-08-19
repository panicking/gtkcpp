// AUTO-GENERATED

#ifndef _GI_SOUP_REQUEST_HPP_
#define _GI_SOUP_REQUEST_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Session;
class URI;

class Request;

namespace base {


#define GI_SOUP_REQUEST_BASE base::RequestBase
class RequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupRequest BaseObjectType;

RequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_request_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// goffset soup_request_get_content_length (SoupRequest* request);
// gint64 soup_request_get_content_length (::SoupRequest* request);
GI_INLINE_DECL gint64 get_content_length () noexcept;

// const char* soup_request_get_content_type (SoupRequest* request);
// const char* soup_request_get_content_type (::SoupRequest* request);
GI_INLINE_DECL std::string get_content_type () noexcept;

// SoupSession* soup_request_get_session (SoupRequest* request);
// ::SoupSession* soup_request_get_session (::SoupRequest* request);
GI_INLINE_DECL Soup::Session get_session () noexcept;

// SoupURI* soup_request_get_uri (SoupRequest* request);
// ::SoupURI* soup_request_get_uri (::SoupRequest* request);
GI_INLINE_DECL Soup::URI get_uri () noexcept;

// GInputStream* soup_request_send (SoupRequest* request, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_request_send (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::InputStream send (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::InputStream send ();
GI_INLINE_DECL Gio::InputStream send (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::InputStream send (GLib::Error * _error) noexcept;

// void soup_request_send_async (SoupRequest* request, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_request_send_async (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void send_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_async (Gio::AsyncReadyCallback callback) noexcept;

// GInputStream* soup_request_send_finish (SoupRequest* request, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_request_send_finish (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::InputStream send_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::InputStream send_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Soup::Session, base::RequestBase> property_session()
{ return gi::property_proxy<Soup::Session, base::RequestBase> (*this, "session"); }
const gi::property_proxy<Soup::Session, base::RequestBase> property_session() const
{ return gi::property_proxy<Soup::Session, base::RequestBase> (*this, "session"); }

gi::property_proxy<Soup::URI, base::RequestBase> property_uri()
{ return gi::property_proxy<Soup::URI, base::RequestBase> (*this, "uri"); }
const gi::property_proxy<Soup::URI, base::RequestBase> property_uri() const
{ return gi::property_proxy<Soup::URI, base::RequestBase> (*this, "uri"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/request_extra_def.hpp>)
#include <soup/request_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/request_extra.hpp>)
#include <soup/request_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Request : public GI_SOUP_REQUEST_BASE
{ typedef GI_SOUP_REQUEST_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupRequest>
{ typedef Soup::Request type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class RequestClassDef
{
typedef RequestClassDef self;
public:
typedef Soup::Request instance_type;
typedef ::SoupRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean Request::check_uri (SoupRequest* req_base, SoupURI* uri, GError ** error);
// gboolean Request::check_uri (::SoupRequest* req_base, ::SoupURI* uri, GError ** error);
// SKIP; callee GError not supported

// goffset Request::get_content_length (SoupRequest* request);
// gint64 Request::get_content_length (::SoupRequest* request);
virtual gint64 get_content_length_ () noexcept = 0;

// const char* Request::get_content_type (SoupRequest* request);
// const char* Request::get_content_type (::SoupRequest* request);
// SKIP; invalid callback return transfer none

// GInputStream* Request::send (SoupRequest* request, GCancellable* cancellable, GError ** error);
// ::GInputStream* Request::send (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Request::send_async (SoupRequest* request, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Request::send_async (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* Request::send_finish (SoupRequest* request, GAsyncResult* result, GError ** error);
// ::GInputStream* Request::send_finish (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class RequestClass: public detail::ClassTemplate<Soup::impl::internal::RequestClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef RequestClass self;
typedef detail::ClassTemplate<Soup::impl::internal::RequestClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// gboolean Request::check_uri (SoupRequest* req_base, SoupURI* uri, GError ** error);
// gboolean Request::check_uri (::SoupRequest* req_base, ::SoupURI* uri, GError ** error);
// SKIP; callee GError not supported

// goffset Request::get_content_length (SoupRequest* request);
// gint64 Request::get_content_length (::SoupRequest* request);
GI_INLINE_DECL gint64 get_content_length_ () noexcept override;

// const char* Request::get_content_type (SoupRequest* request);
// const char* Request::get_content_type (::SoupRequest* request);
// SKIP; invalid callback return transfer none

// GInputStream* Request::send (SoupRequest* request, GCancellable* cancellable, GError ** error);
// ::GInputStream* Request::send (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Request::send_async (SoupRequest* request, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Request::send_async (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* Request::send_finish (SoupRequest* request, GAsyncResult* result, GError ** error);
// ::GInputStream* Request::send_finish (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using RequestImpl = detail::ObjectImpl<Request, internal::RequestClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
