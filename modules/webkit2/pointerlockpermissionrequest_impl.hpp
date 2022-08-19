// AUTO-GENERATED

#ifndef _GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_POINTERLOCKPERMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

WebKit2::PermissionRequest PointerLockPermissionRequestBase::interface_ (gi::interface_tag<WebKit2::PermissionRequest>)
{ return gi::wrap ((WebKit2::PermissionRequest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

PointerLockPermissionRequestBase::operator WebKit2::PermissionRequest ()
{ return interface_ (gi::interface_tag<WebKit2::PermissionRequest>()); }


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/pointerlockpermissionrequest_extra_def_impl.hpp>)
#include <webkit2/pointerlockpermissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/pointerlockpermissionrequest_extra_impl.hpp>)
#include <webkit2/pointerlockpermissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void PointerLockPermissionRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitPointerLockPermissionRequestClass *methods = (::WebKitPointerLockPermissionRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
