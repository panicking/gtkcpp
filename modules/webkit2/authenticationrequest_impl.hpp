// AUTO-GENERATED

#ifndef _GI_WEBKIT2_AUTHENTICATIONREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_AUTHENTICATIONREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_authentication_request_authenticate (WebKitAuthenticationRequest* request, WebKitCredential* credential);
// void webkit_authentication_request_authenticate (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
void base::AuthenticationRequestBase::authenticate (WebKit2::Credential credential) noexcept
{
  typedef void (*call_wrap_t) (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_authenticate;
  auto credential_to_c = gi::unwrap (credential, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()), (::WebKitCredential*) (credential_to_c));
}
void base::AuthenticationRequestBase::authenticate () noexcept
{
  typedef void (*call_wrap_t) (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_authenticate;
  auto credential_to_c = nullptr;
  call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()), (::WebKitCredential*) (credential_to_c));
}

// gboolean webkit_authentication_request_can_save_credentials (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_can_save_credentials (::WebKitAuthenticationRequest* request);
bool base::AuthenticationRequestBase::can_save_credentials () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_can_save_credentials;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return _temp_ret;
}

// void webkit_authentication_request_cancel (WebKitAuthenticationRequest* request);
// void webkit_authentication_request_cancel (::WebKitAuthenticationRequest* request);
void base::AuthenticationRequestBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_cancel;
  call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
}

// GTlsPasswordFlags webkit_authentication_request_get_certificate_pin_flags (WebKitAuthenticationRequest* request);
// ::GTlsPasswordFlags webkit_authentication_request_get_certificate_pin_flags (::WebKitAuthenticationRequest* request);
Gio::TlsPasswordFlags base::AuthenticationRequestBase::get_certificate_pin_flags () noexcept
{
  typedef ::GTlsPasswordFlags (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_certificate_pin_flags;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* webkit_authentication_request_get_host (WebKitAuthenticationRequest* request);
// const char* webkit_authentication_request_get_host (::WebKitAuthenticationRequest* request);
std::string base::AuthenticationRequestBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_host;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint webkit_authentication_request_get_port (WebKitAuthenticationRequest* request);
// guint webkit_authentication_request_get_port (::WebKitAuthenticationRequest* request);
guint base::AuthenticationRequestBase::get_port () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_port;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return _temp_ret;
}

// WebKitCredential* webkit_authentication_request_get_proposed_credential (WebKitAuthenticationRequest* request);
// ::WebKitCredential* webkit_authentication_request_get_proposed_credential (::WebKitAuthenticationRequest* request);
WebKit2::Credential base::AuthenticationRequestBase::get_proposed_credential () noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_proposed_credential;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* webkit_authentication_request_get_realm (WebKitAuthenticationRequest* request);
// const char* webkit_authentication_request_get_realm (::WebKitAuthenticationRequest* request);
std::string base::AuthenticationRequestBase::get_realm () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_realm;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitAuthenticationScheme webkit_authentication_request_get_scheme (WebKitAuthenticationRequest* request);
// ::WebKitAuthenticationScheme webkit_authentication_request_get_scheme (::WebKitAuthenticationRequest* request);
WebKit2::AuthenticationScheme base::AuthenticationRequestBase::get_scheme () noexcept
{
  typedef ::WebKitAuthenticationScheme (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_scheme;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitSecurityOrigin* webkit_authentication_request_get_security_origin (WebKitAuthenticationRequest* request);
// ::WebKitSecurityOrigin* webkit_authentication_request_get_security_origin (::WebKitAuthenticationRequest* request);
WebKit2::SecurityOrigin base::AuthenticationRequestBase::get_security_origin () noexcept
{
  typedef ::WebKitSecurityOrigin* (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_get_security_origin;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean webkit_authentication_request_is_for_proxy (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_is_for_proxy (::WebKitAuthenticationRequest* request);
bool base::AuthenticationRequestBase::is_for_proxy () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_is_for_proxy;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_authentication_request_is_retry (WebKitAuthenticationRequest* request);
// gboolean webkit_authentication_request_is_retry (::WebKitAuthenticationRequest* request);
bool base::AuthenticationRequestBase::is_retry () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitAuthenticationRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_is_retry;
  auto _temp_ret = call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()));
  return _temp_ret;
}

// void webkit_authentication_request_set_can_save_credentials (WebKitAuthenticationRequest* request, gboolean enabled);
// void webkit_authentication_request_set_can_save_credentials (::WebKitAuthenticationRequest* request, gboolean enabled);
void base::AuthenticationRequestBase::set_can_save_credentials (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitAuthenticationRequest* request, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_set_can_save_credentials;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_authentication_request_set_proposed_credential (WebKitAuthenticationRequest* request, WebKitCredential* credential);
// void webkit_authentication_request_set_proposed_credential (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
void base::AuthenticationRequestBase::set_proposed_credential (WebKit2::Credential credential) noexcept
{
  typedef void (*call_wrap_t) (::WebKitAuthenticationRequest* request, ::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_authentication_request_set_proposed_credential;
  auto credential_to_c = gi::unwrap (credential, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitAuthenticationRequest*) (gobj_()), (::WebKitCredential*) (credential_to_c));
}




} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/authenticationrequest_extra_def_impl.hpp>)
#include <webkit2/authenticationrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/authenticationrequest_extra_impl.hpp>)
#include <webkit2/authenticationrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void AuthenticationRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitAuthenticationRequestClass *methods = (::WebKitAuthenticationRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
