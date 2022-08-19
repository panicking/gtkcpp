// AUTO-GENERATED

#ifndef _GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_HPP_
#define _GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class PermissionRequest;

class PointerLockPermissionRequest;

namespace base {


#define GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_BASE base::PointerLockPermissionRequestBase
class PointerLockPermissionRequestBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitPointerLockPermissionRequest BaseObjectType;

PointerLockPermissionRequestBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_pointer_lock_permission_request_get_type(); } 

GI_INLINE_DECL WebKit2::PermissionRequest interface_ (gi::interface_tag<WebKit2::PermissionRequest>);

GI_INLINE_DECL operator WebKit2::PermissionRequest ();

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/pointerlockpermissionrequest_extra_def.hpp>)
#include <webkit2/pointerlockpermissionrequest_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/pointerlockpermissionrequest_extra.hpp>)
#include <webkit2/pointerlockpermissionrequest_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class PointerLockPermissionRequest : public GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_BASE
{ typedef GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitPointerLockPermissionRequest>
{ typedef WebKit2::PointerLockPermissionRequest type; }; 

} // namespace repository

} // namespace gi

#include "permissionrequest.hpp"

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class PointerLockPermissionRequestClassDef
{
typedef PointerLockPermissionRequestClassDef self;
public:
typedef WebKit2::PointerLockPermissionRequest instance_type;
typedef ::WebKitPointerLockPermissionRequestClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PointerLockPermissionRequestClass: public detail::ClassTemplate<WebKit2::impl::internal::PointerLockPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl>
{
typedef PointerLockPermissionRequestClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::PointerLockPermissionRequestClassDef, GObject::impl::internal::ObjectClass, WebKit2::impl::internal::PermissionRequestIfaceClassImpl> super;

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

using PointerLockPermissionRequestImpl = detail::ObjectImpl<PointerLockPermissionRequest, internal::PointerLockPermissionRequestClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
