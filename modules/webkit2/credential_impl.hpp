// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CREDENTIAL_IMPL_HPP_
#define _GI_WEBKIT2_CREDENTIAL_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitCredential* webkit_credential_new (const gchar* username, const gchar* password, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new (const char* username, const char* password, ::WebKitCredentialPersistence persistence);
WebKit2::Credential base::CredentialBase::new_ (const std::string & username, const std::string & password, WebKit2::CredentialPersistence persistence) noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (const char* username, const char* password, ::WebKitCredentialPersistence persistence);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_new;
  auto persistence_to_c = gi::unwrap (persistence);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (username_to_c), (const char*) (password_to_c), (::WebKitCredentialPersistence) (persistence_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitCredential* webkit_credential_new_for_certificate (GTlsCertificate* certificate, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new_for_certificate (::GTlsCertificate* certificate, ::WebKitCredentialPersistence persistence);
WebKit2::Credential base::CredentialBase::new_for_certificate (Gio::TlsCertificate certificate, WebKit2::CredentialPersistence persistence) noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (::GTlsCertificate* certificate, ::WebKitCredentialPersistence persistence);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_new_for_certificate;
  auto persistence_to_c = gi::unwrap (persistence);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (certificate_to_c), (::WebKitCredentialPersistence) (persistence_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::Credential base::CredentialBase::new_for_certificate (WebKit2::CredentialPersistence persistence) noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (::GTlsCertificate* certificate, ::WebKitCredentialPersistence persistence);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_new_for_certificate;
  auto persistence_to_c = gi::unwrap (persistence);
  auto certificate_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GTlsCertificate*) (certificate_to_c), (::WebKitCredentialPersistence) (persistence_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitCredential* webkit_credential_new_for_certificate_pin (const gchar* pin, WebKitCredentialPersistence persistence);
// ::WebKitCredential* webkit_credential_new_for_certificate_pin (const char* pin, ::WebKitCredentialPersistence persistence);
WebKit2::Credential base::CredentialBase::new_for_certificate_pin (const std::string & pin, WebKit2::CredentialPersistence persistence) noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (const char* pin, ::WebKitCredentialPersistence persistence);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_new_for_certificate_pin;
  auto persistence_to_c = gi::unwrap (persistence);
  auto pin_to_c = gi::unwrap (pin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pin_to_c), (::WebKitCredentialPersistence) (persistence_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitCredential* webkit_credential_copy (WebKitCredential* credential);
// ::WebKitCredential* webkit_credential_copy (::WebKitCredential* credential);
WebKit2::Credential base::CredentialBase::copy () noexcept
{
  typedef ::WebKitCredential* (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_copy;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_credential_free (WebKitCredential* credential);
// void webkit_credential_free (::WebKitCredential* credential);
// IGNORE; marked ignore

// GTlsCertificate* webkit_credential_get_certificate (WebKitCredential* credential);
// ::GTlsCertificate* webkit_credential_get_certificate (::WebKitCredential* credential);
Gio::TlsCertificate base::CredentialBase::get_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_get_certificate;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_credential_get_password (WebKitCredential* credential);
// const char* webkit_credential_get_password (::WebKitCredential* credential);
std::string base::CredentialBase::get_password () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_get_password;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitCredentialPersistence webkit_credential_get_persistence (WebKitCredential* credential);
// ::WebKitCredentialPersistence webkit_credential_get_persistence (::WebKitCredential* credential);
WebKit2::CredentialPersistence base::CredentialBase::get_persistence () noexcept
{
  typedef ::WebKitCredentialPersistence (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_get_persistence;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* webkit_credential_get_username (WebKitCredential* credential);
// const char* webkit_credential_get_username (::WebKitCredential* credential);
std::string base::CredentialBase::get_username () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_get_username;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_credential_has_password (WebKitCredential* credential);
// gboolean webkit_credential_has_password (::WebKitCredential* credential);
bool base::CredentialBase::has_password () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitCredential* credential);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_credential_has_password;
  auto _temp_ret = call_wrap_v ((::WebKitCredential*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/credential_extra_def_impl.hpp>)
#include <webkit2/credential_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/credential_extra_impl.hpp>)
#include <webkit2/credential_extra_impl.hpp>
#endif
#endif

#endif
