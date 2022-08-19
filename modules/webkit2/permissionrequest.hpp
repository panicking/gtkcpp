// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PERMISSIONREQUEST_HPP_
#define _GI_WEBKIT2_PERMISSIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class PermissionRequest;

namespace base {


#define GI_WEBKIT2_PERMISSIONREQUEST_BASE base::PermissionRequestBase
class PermissionRequestBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::WebKitPermissionRequest BaseObjectType;

PermissionRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_permission_request_get_type(); } 

// void webkit_permission_request_allow (WebKitPermissionRequest* request);
// void webkit_permission_request_allow (::WebKitPermissionRequest* request);
GI_INLINE_DECL void allow () noexcept;

// void webkit_permission_request_deny (WebKitPermissionRequest* request);
// void webkit_permission_request_deny (::WebKitPermissionRequest* request);
GI_INLINE_DECL void deny () noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/permissionrequest_extra_def.hpp>)
#include <webkit2/permissionrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/permissionrequest_extra.hpp>)
#include <webkit2/permissionrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class PermissionRequest : public GI_WEBKIT2_PERMISSIONREQUEST_BASE
{ typedef GI_WEBKIT2_PERMISSIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPermissionRequest>
{ typedef WebKit2::PermissionRequest type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PermissionRequestIfaceDef
{
typedef PermissionRequestIfaceDef self;
public:
typedef WebKit2::PermissionRequest instance_type;
typedef ::WebKitPermissionRequestIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void PermissionRequest::allow (WebKitPermissionRequest* request);
// void PermissionRequest::allow (::WebKitPermissionRequest* request);
virtual void allow_ () noexcept = 0;

// void PermissionRequest::deny (WebKitPermissionRequest* request);
// void PermissionRequest::deny (::WebKitPermissionRequest* request);
virtual void deny_ () noexcept = 0;


};

using PermissionRequestImpl = detail::InterfaceImpl<PermissionRequestIfaceDef>;

class PermissionRequestIfaceClassImpl: public detail::InterfaceClassImpl<PermissionRequestImpl>
{
typedef PermissionRequestIfaceClassImpl self;
typedef detail::InterfaceClassImpl<PermissionRequestImpl> super;

protected:
using super::super;

// void PermissionRequest::allow (WebKitPermissionRequest* request);
// void PermissionRequest::allow (::WebKitPermissionRequest* request);
GI_INLINE_DECL void allow_ () noexcept override;

// void PermissionRequest::deny (WebKitPermissionRequest* request);
// void PermissionRequest::deny (::WebKitPermissionRequest* request);
GI_INLINE_DECL void deny_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
