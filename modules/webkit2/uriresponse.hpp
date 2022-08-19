// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URIRESPONSE_HPP_
#define _GI_WEBKIT2_URIRESPONSE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class URIResponse;

namespace base {


#define GI_WEBKIT2_URIRESPONSE_BASE base::URIResponseBase
class URIResponseBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitURIResponse BaseObjectType;

URIResponseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_uri_response_get_type(); } 

// guint64 webkit_uri_response_get_content_length (WebKitURIResponse* response);
// guint64 webkit_uri_response_get_content_length (::WebKitURIResponse* response);
GI_INLINE_DECL guint64 get_content_length () noexcept;

// SoupMessageHeaders* webkit_uri_response_get_http_headers (WebKitURIResponse* response);
// ::SoupMessageHeaders* webkit_uri_response_get_http_headers (::WebKitURIResponse* response);
GI_INLINE_DECL Soup::MessageHeaders get_http_headers () noexcept;

// const gchar* webkit_uri_response_get_mime_type (WebKitURIResponse* response);
// const char* webkit_uri_response_get_mime_type (::WebKitURIResponse* response);
GI_INLINE_DECL std::string get_mime_type () noexcept;

// guint webkit_uri_response_get_status_code (WebKitURIResponse* response);
// guint webkit_uri_response_get_status_code (::WebKitURIResponse* response);
GI_INLINE_DECL guint get_status_code () noexcept;

// const gchar* webkit_uri_response_get_suggested_filename (WebKitURIResponse* response);
// const char* webkit_uri_response_get_suggested_filename (::WebKitURIResponse* response);
GI_INLINE_DECL std::string get_suggested_filename () noexcept;

// const gchar* webkit_uri_response_get_uri (WebKitURIResponse* response);
// const char* webkit_uri_response_get_uri (::WebKitURIResponse* response);
GI_INLINE_DECL std::string get_uri () noexcept;

gi::property_proxy<guint64, base::URIResponseBase> property_content_length()
{ return gi::property_proxy<guint64, base::URIResponseBase> (*this, "content-length"); }
const gi::property_proxy<guint64, base::URIResponseBase> property_content_length() const
{ return gi::property_proxy<guint64, base::URIResponseBase> (*this, "content-length"); }

gi::property_proxy<Soup::MessageHeaders, base::URIResponseBase> property_http_headers()
{ return gi::property_proxy<Soup::MessageHeaders, base::URIResponseBase> (*this, "http-headers"); }
const gi::property_proxy<Soup::MessageHeaders, base::URIResponseBase> property_http_headers() const
{ return gi::property_proxy<Soup::MessageHeaders, base::URIResponseBase> (*this, "http-headers"); }

gi::property_proxy<std::string, base::URIResponseBase> property_mime_type()
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "mime-type"); }
const gi::property_proxy<std::string, base::URIResponseBase> property_mime_type() const
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "mime-type"); }

gi::property_proxy<guint, base::URIResponseBase> property_status_code()
{ return gi::property_proxy<guint, base::URIResponseBase> (*this, "status-code"); }
const gi::property_proxy<guint, base::URIResponseBase> property_status_code() const
{ return gi::property_proxy<guint, base::URIResponseBase> (*this, "status-code"); }

gi::property_proxy<std::string, base::URIResponseBase> property_suggested_filename()
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "suggested-filename"); }
const gi::property_proxy<std::string, base::URIResponseBase> property_suggested_filename() const
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "suggested-filename"); }

gi::property_proxy<std::string, base::URIResponseBase> property_uri()
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::URIResponseBase> property_uri() const
{ return gi::property_proxy<std::string, base::URIResponseBase> (*this, "uri"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/uriresponse_extra_def.hpp>)
#include <webkit2/uriresponse_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/uriresponse_extra.hpp>)
#include <webkit2/uriresponse_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class URIResponse : public GI_WEBKIT2_URIRESPONSE_BASE
{ typedef GI_WEBKIT2_URIRESPONSE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitURIResponse>
{ typedef WebKit2::URIResponse type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class URIResponseClassDef
{
typedef URIResponseClassDef self;
public:
typedef WebKit2::URIResponse instance_type;
typedef ::WebKitURIResponseClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class URIResponseClass: public detail::ClassTemplate<WebKit2::impl::internal::URIResponseClassDef, GObject::impl::internal::ObjectClass>
{
typedef URIResponseClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::URIResponseClassDef, GObject::impl::internal::ObjectClass> super;

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

using URIResponseImpl = detail::ObjectImpl<URIResponse, internal::URIResponseClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
