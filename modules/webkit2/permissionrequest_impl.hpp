// AUTO-GENERATED

#ifndef _GI_WEBKIT2_PERMISSIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_PERMISSIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_permission_request_allow (WebKitPermissionRequest* request);
// void webkit_permission_request_allow (::WebKitPermissionRequest* request);
void base::PermissionRequestBase::allow () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_permission_request_allow;
  call_wrap_v ((::WebKitPermissionRequest*) (gobj_()));
}

// void webkit_permission_request_deny (WebKitPermissionRequest* request);
// void webkit_permission_request_deny (::WebKitPermissionRequest* request);
void base::PermissionRequestBase::deny () noexcept
{
  typedef void (*call_wrap_t) (::WebKitPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_permission_request_deny;
  call_wrap_v ((::WebKitPermissionRequest*) (gobj_()));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/permissionrequest_extra_def_impl.hpp>)
#include <webkit2/permissionrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/permissionrequest_extra_impl.hpp>)
#include <webkit2/permissionrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void PermissionRequestIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::WebKitPermissionRequestIface *methods = (::WebKitPermissionRequestIface *) interface_struct;
  (void) methods;

  methods->allow = (decltype (methods->allow)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::allow_>;
  methods->deny = (decltype (methods->deny)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::deny_>;
}

// void PermissionRequest::allow (WebKitPermissionRequest* request);
// void PermissionRequest::allow (::WebKitPermissionRequest* request);
void PermissionRequestIfaceClassImpl::allow_ () noexcept
{
  if (!get_struct_()->allow) return ;
  typedef void (*call_wrap_t) (::WebKitPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->allow;
  call_wrap_v ((::WebKitPermissionRequest*) (gobj_()));
}

// void PermissionRequest::deny (WebKitPermissionRequest* request);
// void PermissionRequest::deny (::WebKitPermissionRequest* request);
void PermissionRequestIfaceClassImpl::deny_ () noexcept
{
  if (!get_struct_()->deny) return ;
  typedef void (*call_wrap_t) (::WebKitPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deny;
  call_wrap_v ((::WebKitPermissionRequest*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
