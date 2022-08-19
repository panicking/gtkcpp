// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_HPP_
#define _GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class PermissionRequest;

class WebsiteDataAccessPermissionRequest;

namespace base {


#define GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_BASE base::WebsiteDataAccessPermissionRequestBase
class WebsiteDataAccessPermissionRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebsiteDataAccessPermissionRequest BaseObjectType;

WebsiteDataAccessPermissionRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_website_data_access_permission_request_get_type(); } 

GI_INLINE_DECL WebKit2::PermissionRequest interface_ (gi::interface_tag<WebKit2::PermissionRequest>);

GI_INLINE_DECL operator WebKit2::PermissionRequest ();

// const char* webkit_website_data_access_permission_request_get_current_domain (WebKitWebsiteDataAccessPermissionRequest* request);
// const char* webkit_website_data_access_permission_request_get_current_domain (::WebKitWebsiteDataAccessPermissionRequest* request);
GI_INLINE_DECL std::string get_current_domain () noexcept;

// const char* webkit_website_data_access_permission_request_get_requesting_domain (WebKitWebsiteDataAccessPermissionRequest* request);
// const char* webkit_website_data_access_permission_request_get_requesting_domain (::WebKitWebsiteDataAccessPermissionRequest* request);
GI_INLINE_DECL std::string get_requesting_domain () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedataaccesspermissionrequest_extra_def.hpp>)
#include <webkit2/websitedataaccesspermissionrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedataaccesspermissionrequest_extra.hpp>)
#include <webkit2/websitedataaccesspermissionrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebsiteDataAccessPermissionRequest : public GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_BASE
{ typedef GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebsiteDataAccessPermissionRequest>
{ typedef WebKit2::WebsiteDataAccessPermissionRequest type; }; 

} // namespace repository

} // namespace gi

#include "permissionrequest.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebsiteDataAccessPermissionRequestClassDef
{
typedef WebsiteDataAccessPermissionRequestClassDef self;
public:
typedef WebKit2::WebsiteDataAccessPermissionRequest instance_type;
typedef ::WebKitWebsiteDataAccessPermissionRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebsiteDataAccessPermissionRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::WebsiteDataAccessPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl>
{
typedef WebsiteDataAccessPermissionRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebsiteDataAccessPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef WebKit2::impl::internal::PermissionRequestIfaceClassImpl WebKitPermissionRequestIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using WebsiteDataAccessPermissionRequestImpl = detail::ObjectImpl<WebsiteDataAccessPermissionRequest, internal::WebsiteDataAccessPermissionRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
