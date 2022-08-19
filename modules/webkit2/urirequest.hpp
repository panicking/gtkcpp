// AUTO-GENERATED

#ifndef _GI_WEBKIT2_URIREQUEST_HPP_
#define _GI_WEBKIT2_URIREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class URIRequest;

namespace base {


#define GI_WEBKIT2_URIREQUEST_BASE base::URIRequestBase
class URIRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitURIRequest BaseObjectType;

URIRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_uri_request_get_type(); } 

// WebKitURIRequest* webkit_uri_request_new (const gchar* uri);
// ::WebKitURIRequest* webkit_uri_request_new (const char* uri);
static GI_INLINE_DECL WebKit2::URIRequest new_ (const std::string & uri) noexcept;

// SoupMessageHeaders* webkit_uri_request_get_http_headers (WebKitURIRequest* request);
// ::SoupMessageHeaders* webkit_uri_request_get_http_headers (::WebKitURIRequest* request);
GI_INLINE_DECL Soup::MessageHeaders get_http_headers () noexcept;

// const gchar* webkit_uri_request_get_http_method (WebKitURIRequest* request);
// const char* webkit_uri_request_get_http_method (::WebKitURIRequest* request);
GI_INLINE_DECL std::string get_http_method () noexcept;

// const gchar* webkit_uri_request_get_uri (WebKitURIRequest* request);
// const char* webkit_uri_request_get_uri (::WebKitURIRequest* request);
GI_INLINE_DECL std::string get_uri () noexcept;

// void webkit_uri_request_set_uri (WebKitURIRequest* request, const gchar* uri);
// void webkit_uri_request_set_uri (::WebKitURIRequest* request, const char* uri);
GI_INLINE_DECL void set_uri (const std::string & uri) noexcept;

gi::property_proxy<std::string, base::URIRequestBase> property_uri()
{ return gi::property_proxy<std::string, base::URIRequestBase> (*this, "uri"); }
const gi::property_proxy<std::string, base::URIRequestBase> property_uri() const
{ return gi::property_proxy<std::string, base::URIRequestBase> (*this, "uri"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/urirequest_extra_def.hpp>)
#include <webkit2/urirequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/urirequest_extra.hpp>)
#include <webkit2/urirequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class URIRequest : public GI_WEBKIT2_URIREQUEST_BASE
{ typedef GI_WEBKIT2_URIREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitURIRequest>
{ typedef WebKit2::URIRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class URIRequestClassDef
{
typedef URIRequestClassDef self;
public:
typedef WebKit2::URIRequest instance_type;
typedef ::WebKitURIRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class URIRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::URIRequestClassDef, GObject::impl::internal::ObjectClass>
{
typedef URIRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::URIRequestClassDef, GObject::impl::internal::ObjectClass> super;

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

using URIRequestImpl = detail::ObjectImpl<URIRequest, internal::URIRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
