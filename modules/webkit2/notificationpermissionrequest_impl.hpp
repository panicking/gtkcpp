// AUTO-GENERATED

#ifndef _GI_WEBKIT2_NOTIFICATIONPERMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_NOTIFICATIONPERMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

WebKit2::PermissionRequest NotificationPermissionRequestBase::interface_ (gi::interface_tag<WebKit2::PermissionRequest>)
{ return gi::wrap ((WebKit2::PermissionRequest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NotificationPermissionRequestBase::operator WebKit2::PermissionRequest ()
{ return interface_ (gi::interface_tag<WebKit2::PermissionRequest>()); }


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/notificationpermissionrequest_extra_def_impl.hpp>)
#include <webkit2/notificationpermissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/notificationpermissionrequest_extra_impl.hpp>)
#include <webkit2/notificationpermissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void NotificationPermissionRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitNotificationPermissionRequestClass *methods = (::WebKitNotificationPermissionRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
