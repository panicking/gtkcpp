// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URISCHEMERESPONSE_HPP_
#define _GI_WEBKIT2_URISCHEMERESPONSE_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class URISchemeResponse;

namespace base {


#define GI_WEBKIT2_URISCHEMERESPONSE_BASE base::URISchemeResponseBase
class URISchemeResponseBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitURISchemeResponse BaseObjectType;

URISchemeResponseBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_uri_scheme_response_get_type(); } 

// WebKitURISchemeResponse* webkit_uri_scheme_response_new (GInputStream* input_stream, gint64 stream_length);
// ::WebKitURISchemeResponse* webkit_uri_scheme_response_new (::GInputStream* input_stream, gint64 stream_length);
static GI_INLINE_DECL WebKit2::URISchemeResponse new_ (Gio::InputStream input_stream, gint64 stream_length) noexcept;

// void webkit_uri_scheme_response_set_content_type (WebKitURISchemeResponse* response, const gchar* content_type);
// void webkit_uri_scheme_response_set_content_type (::WebKitURISchemeResponse* response, const char* content_type);
GI_INLINE_DECL void set_content_type (const std::string & content_type) noexcept;

// void webkit_uri_scheme_response_set_http_headers (WebKitURISchemeResponse* response, SoupMessageHeaders* headers);
// void webkit_uri_scheme_response_set_http_headers (::WebKitURISchemeResponse* response, ::SoupMessageHeaders* headers);
GI_INLINE_DECL void set_http_headers (Soup::MessageHeaders headers) noexcept;

// void webkit_uri_scheme_response_set_status (WebKitURISchemeResponse* response, guint status_code, const gchar* reason_phrase);
// void webkit_uri_scheme_response_set_status (::WebKitURISchemeResponse* response, guint status_code, const char* reason_phrase);
GI_INLINE_DECL void set_status (guint status_code, const std::string & reason_phrase) noexcept;
GI_INLINE_DECL void set_status (guint status_code) noexcept;

gi::property_proxy_write<Gio::InputStream, base::URISchemeResponseBase> property_stream()
{ return gi::property_proxy_write<Gio::InputStream, base::URISchemeResponseBase> (*this, "stream"); }

gi::property_proxy_write<gint64, base::URISchemeResponseBase> property_stream_length()
{ return gi::property_proxy_write<gint64, base::URISchemeResponseBase> (*this, "stream-length"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urischemeresponse_extra_def.hpp>)
#include <webkit2/urischemeresponse_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urischemeresponse_extra.hpp>)
#include <webkit2/urischemeresponse_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class URISchemeResponse : public GI_WEBKIT2_URISCHEMERESPONSE_BASE
{ typedef GI_WEBKIT2_URISCHEMERESPONSE_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitURISchemeResponse>
{ typedef WebKit2::URISchemeResponse type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class URISchemeResponseClassDef
{
typedef URISchemeResponseClassDef self;
public:
typedef WebKit2::URISchemeResponse instance_type;
typedef ::WebKitURISchemeResponseClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class URISchemeResponseClass: public detail::ClassTemplate<WebKit2::impl::internal::URISchemeResponseClassDef, GObject::impl::internal::ObjectClass>
{
typedef URISchemeResponseClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::URISchemeResponseClassDef, GObject::impl::internal::ObjectClass> super;

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

using URISchemeResponseImpl = detail::ObjectImpl<URISchemeResponse, internal::URISchemeResponseClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
