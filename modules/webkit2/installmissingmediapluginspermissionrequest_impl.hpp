// AUTO-GENERATED

#ifndef _GI_WEBKIT2_INSTALLMISSINGMEDIAPLUGINSPERMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_INSTALLMISSINGMEDIAPLUGINSPERMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

WebKit2::PermissionRequest InstallMissingMediaPluginsPermissionRequestBase::interface_ (gi::interface_tag<WebKit2::PermissionRequest>)
{ return gi::wrap ((WebKit2::PermissionRequest::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

InstallMissingMediaPluginsPermissionRequestBase::operator WebKit2::PermissionRequest ()
{ return interface_ (gi::interface_tag<WebKit2::PermissionRequest>()); }

// const gchar* webkit_install_missing_media_plugins_permission_request_get_description (WebKitInstallMissingMediaPluginsPermissionRequest* request);
// const char* webkit_install_missing_media_plugins_permission_request_get_description (::WebKitInstallMissingMediaPluginsPermissionRequest* request);
std::string base::InstallMissingMediaPluginsPermissionRequestBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitInstallMissingMediaPluginsPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_install_missing_media_plugins_permission_request_get_description;
  auto _temp_ret = call_wrap_v ((::WebKitInstallMissingMediaPluginsPermissionRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/installmissingmediapluginspermissionrequest_extra_def_impl.hpp>)
#include <webkit2/installmissingmediapluginspermissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/installmissingmediapluginspermissionrequest_extra_impl.hpp>)
#include <webkit2/installmissingmediapluginspermissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void InstallMissingMediaPluginsPermissionRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitInstallMissingMediaPluginsPermissionRequestClass *methods = (::WebKitInstallMissingMediaPluginsPermissionRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
