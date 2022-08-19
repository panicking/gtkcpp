// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_WEBSITEDATAACCESSPERMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

WebKit2::PermissionRequest WebsiteDataAccessPermissionRequestBase::interface_ (gi::interface_tag<WebKit2::PermissionRequest>)
{ return gi::wrap ((WebKit2::PermissionRequest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

WebsiteDataAccessPermissionRequestBase::operator WebKit2::PermissionRequest ()
{ return interface_ (gi::interface_tag<WebKit2::PermissionRequest>()); }

// const char* webkit_website_data_access_permission_request_get_current_domain (WebKitWebsiteDataAccessPermissionRequest* request);
// const char* webkit_website_data_access_permission_request_get_current_domain (::WebKitWebsiteDataAccessPermissionRequest* request);
std::string base::WebsiteDataAccessPermissionRequestBase::get_current_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataAccessPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_access_permission_request_get_current_domain;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataAccessPermissionRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* webkit_website_data_access_permission_request_get_requesting_domain (WebKitWebsiteDataAccessPermissionRequest* request);
// const char* webkit_website_data_access_permission_request_get_requesting_domain (::WebKitWebsiteDataAccessPermissionRequest* request);
std::string base::WebsiteDataAccessPermissionRequestBase::get_requesting_domain () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataAccessPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_access_permission_request_get_requesting_domain;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataAccessPermissionRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedataaccesspermissionrequest_extra_def_impl.hpp>)
#include <webkit2/websitedataaccesspermissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedataaccesspermissionrequest_extra_impl.hpp>)
#include <webkit2/websitedataaccesspermissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebsiteDataAccessPermissionRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebsiteDataAccessPermissionRequestClass *methods = (::WebKitWebsiteDataAccessPermissionRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
