// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URISCHEMEREQUEST_HPP_
#define _GI_WEBKIT2_URISCHEMEREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class URISchemeResponse;
class WebView;

class URISchemeRequest;

namespace base {


#define GI_WEBKIT2_URISCHEMEREQUEST_BASE base::URISchemeRequestBase
class URISchemeRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitURISchemeRequest BaseObjectType;

URISchemeRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_uri_scheme_request_get_type(); } 

// void webkit_uri_scheme_request_finish (WebKitURISchemeRequest* request, GInputStream* stream, gint64 stream_length, const gchar* content_type);
// void webkit_uri_scheme_request_finish (::WebKitURISchemeRequest* request, ::GInputStream* stream, gint64 stream_length, const char* content_type);
GI_INLINE_DECL void finish (Gio::InputStream stream, gint64 stream_length, const std::string & content_type) noexcept;
GI_INLINE_DECL void finish (Gio::InputStream stream, gint64 stream_length) noexcept;

// void webkit_uri_scheme_request_finish_error (WebKitURISchemeRequest* request, GError* error);
// void webkit_uri_scheme_request_finish_error (::WebKitURISchemeRequest* request, ::GError* error);
GI_INLINE_DECL void finish_error (GLib::Error error) noexcept;

// void webkit_uri_scheme_request_finish_with_response (WebKitURISchemeRequest* request, WebKitURISchemeResponse* response);
// void webkit_uri_scheme_request_finish_with_response (::WebKitURISchemeRequest* request, ::WebKitURISchemeResponse* response);
GI_INLINE_DECL void finish_with_response (WebKit2::URISchemeResponse response) noexcept;

// SoupMessageHeaders* webkit_uri_scheme_request_get_http_headers (WebKitURISchemeRequest* request);
// ::SoupMessageHeaders* webkit_uri_scheme_request_get_http_headers (::WebKitURISchemeRequest* request);
GI_INLINE_DECL Soup::MessageHeaders get_http_headers () noexcept;

// const gchar* webkit_uri_scheme_request_get_http_method (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_http_method (::WebKitURISchemeRequest* request);
GI_INLINE_DECL std::string get_http_method () noexcept;

// const gchar* webkit_uri_scheme_request_get_path (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_path (::WebKitURISchemeRequest* request);
GI_INLINE_DECL std::string get_path () noexcept;

// const gchar* webkit_uri_scheme_request_get_scheme (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_scheme (::WebKitURISchemeRequest* request);
GI_INLINE_DECL std::string get_scheme () noexcept;

// const gchar* webkit_uri_scheme_request_get_uri (WebKitURISchemeRequest* request);
// const char* webkit_uri_scheme_request_get_uri (::WebKitURISchemeRequest* request);
GI_INLINE_DECL std::string get_uri () noexcept;

// WebKitWebView* webkit_uri_scheme_request_get_web_view (WebKitURISchemeRequest* request);
// ::WebKitWebView* webkit_uri_scheme_request_get_web_view (::WebKitURISchemeRequest* request);
GI_INLINE_DECL WebKit2::WebView get_web_view () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urischemerequest_extra_def.hpp>)
#include <webkit2/urischemerequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urischemerequest_extra.hpp>)
#include <webkit2/urischemerequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class URISchemeRequest : public GI_WEBKIT2_URISCHEMEREQUEST_BASE
{ typedef GI_WEBKIT2_URISCHEMEREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitURISchemeRequest>
{ typedef WebKit2::URISchemeRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class URISchemeRequestClassDef
{
typedef URISchemeRequestClassDef self;
public:
typedef WebKit2::URISchemeRequest instance_type;
typedef ::WebKitURISchemeRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class URISchemeRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::URISchemeRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef URISchemeRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::URISchemeRequestClassDef, GObject::impl::internal::ObjectClass> super;

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

using URISchemeRequestImpl = detail::ObjectImpl<URISchemeRequest, internal::URISchemeRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
