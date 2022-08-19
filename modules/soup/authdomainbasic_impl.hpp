// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAINBASIC_IMPL_HPP_
#define _GI_SOUP_AUTHDOMAINBASIC_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupAuthDomain* soup_auth_domain_basic_new (const char* optname1);
// ::SoupAuthDomainBasic* soup_auth_domain_basic_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_auth_domain_basic_set_auth_callback (SoupAuthDomain* domain, SoupAuthDomainBasicAuthCallback callback, gpointer user_data, GDestroyNotify dnotify);
// void soup_auth_domain_basic_set_auth_callback (::SoupAuthDomainBasic* domain, Soup::AuthDomainBasicAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
void base::AuthDomainBasicBase::set_auth_callback (Soup::AuthDomainBasicAuthCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomainBasic* domain, Soup::AuthDomainBasicAuthCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_basic_set_auth_callback;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupAuthDomainBasic*) (gobj_()), (Soup::AuthDomainBasicAuthCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomainbasic_extra_def_impl.hpp>)
#include <soup/authdomainbasic_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomainbasic_extra_impl.hpp>)
#include <soup/authdomainbasic_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AuthDomainBasicClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAuthDomainBasicClass *methods = (::SoupAuthDomainBasicClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
