// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAINDIGEST_IMPL_HPP_
#define _GI_SOUP_AUTHDOMAINDIGEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupAuthDomain* soup_auth_domain_digest_new (const char* optname1);
// ::SoupAuthDomainDigest* soup_auth_domain_digest_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// char* soup_auth_domain_digest_encode_password (const char* username, const char* realm, const char* password);
// char* soup_auth_domain_digest_encode_password (const char* username, const char* realm, const char* password);
std::string base::AuthDomainDigestBase::encode_password (const std::string & username, const std::string & realm, const std::string & password) noexcept
{
  typedef char* (*call_wrap_t) (const char* username, const char* realm, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_digest_encode_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto realm_to_c = gi::unwrap (realm, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (username_to_c), (const char*) (realm_to_c), (const char*) (password_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_auth_domain_digest_set_auth_callback (SoupAuthDomain* domain, SoupAuthDomainDigestAuthCallback callback, gpointer user_data, GDestroyNotify dnotify);
// void soup_auth_domain_digest_set_auth_callback (::SoupAuthDomainDigest* domain, Soup::AuthDomainDigestAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
void base::AuthDomainDigestBase::set_auth_callback (Soup::AuthDomainDigestAuthCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomainDigest* domain, Soup::AuthDomainDigestAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_digest_set_auth_callback;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupAuthDomainDigest*) (gobj_()), (Soup::AuthDomainDigestAuthCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomaindigest_extra_def_impl.hpp>)
#include <soup/authdomaindigest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomaindigest_extra_impl.hpp>)
#include <soup/authdomaindigest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AuthDomainDigestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAuthDomainDigestClass *methods = (::SoupAuthDomainDigestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
