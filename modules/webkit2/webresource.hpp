// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBRESOURCE_HPP_
#define _GI_WEBKIT2_WEBRESOURCE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class URIRequest;
class URIResponse;

class WebResource;

namespace base {


#define GI_WEBKIT2_WEBRESOURCE_BASE base::WebResourceBase
class WebResourceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebResource BaseObjectType;

WebResourceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_web_resource_get_type(); } 

// void webkit_web_resource_get_data (WebKitWebResource* resource, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_resource_get_data (::WebKitWebResource* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_data (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_data (Gio::AsyncReadyCallback callback) noexcept;

// guchar* webkit_web_resource_get_data_finish (WebKitWebResource* resource, GAsyncResult* result, gsize* length, GError ** error);
// guint8* webkit_web_resource_get_data_finish (::WebKitWebResource* resource, ::GAsyncResult* result, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<guint8> get_data_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<guint8> get_data_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// WebKitURIResponse* webkit_web_resource_get_response (WebKitWebResource* resource);
// ::WebKitURIResponse* webkit_web_resource_get_response (::WebKitWebResource* resource);
GI_INLINE_DECL WebKit2::URIResponse get_response () noexcept;

// const gchar* webkit_web_resource_get_uri (WebKitWebResource* resource);
// const char* webkit_web_resource_get_uri (::WebKitWebResource* resource);
GI_INLINE_DECL std::string get_uri () noexcept;

gi::property_proxy<WebKit2::URIResponse, base::WebResourceBase> property_response()
{ return gi::property_proxy<WebKit2::URIResponse, base::WebResourceBase> (*this, "response"); }
const gi::property_proxy<WebKit2::URIResponse, base::WebResourceBase> property_response() const
{ return gi::property_proxy<WebKit2::URIResponse, base::WebResourceBase> (*this, "response"); }

gi::property_proxy<std::string, base::WebResourceBase> property_uri()
{ return gi::property_proxy<std::string, base::WebResourceBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::WebResourceBase> property_uri() const
{ return gi::property_proxy<std::string, base::WebResourceBase> (*this, "uri"); }

// signal failed
gi::signal_proxy<void(WebKit2::WebResource, GLib::Error error)> signal_failed()
{ return gi::signal_proxy<void(WebKit2::WebResource, GLib::Error error)> (*this, "failed"); }

// signal failed-with-tls-errors
gi::signal_proxy<void(WebKit2::WebResource, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors)> signal_failed_with_tls_errors()
{ return gi::signal_proxy<void(WebKit2::WebResource, Gio::TlsCertificate certificate, Gio::TlsCertificateFlags errors)> (*this, "failed-with-tls-errors"); }

// signal finished
gi::signal_proxy<void(WebKit2::WebResource)> signal_finished()
{ return gi::signal_proxy<void(WebKit2::WebResource)> (*this, "finished"); }

// signal received-data
gi::signal_proxy<void(WebKit2::WebResource, guint64 data_length)> signal_received_data()
{ return gi::signal_proxy<void(WebKit2::WebResource, guint64 data_length)> (*this, "received-data"); }

// signal sent-request
gi::signal_proxy<void(WebKit2::WebResource, WebKit2::URIRequest request, WebKit2::URIResponse redirected_response)> signal_sent_request()
{ return gi::signal_proxy<void(WebKit2::WebResource, WebKit2::URIRequest request, WebKit2::URIResponse redirected_response)> (*this, "sent-request"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webresource_extra_def.hpp>)
#include <webkit2/webresource_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webresource_extra.hpp>)
#include <webkit2/webresource_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebResource : public GI_WEBKIT2_WEBRESOURCE_BASE
{ typedef GI_WEBKIT2_WEBRESOURCE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebResource>
{ typedef WebKit2::WebResource type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebResourceClassDef
{
typedef WebResourceClassDef self;
public:
typedef WebKit2::WebResource instance_type;
typedef ::WebKitWebResourceClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebResourceClass: public detail::ClassTemplate<WebKit2::impl::internal::WebResourceClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebResourceClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebResourceClassDef, GObject::impl::internal::ObjectClass> super;

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

using WebResourceImpl = detail::ObjectImpl<WebResource, internal::WebResourceClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
