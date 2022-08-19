// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHMANAGER_IMPL_HPP_
#define _GI_SOUP_AUTHMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature AuthManagerBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

AuthManagerBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// void soup_auth_manager_clear_cached_credentials (SoupAuthManager* manager);
// void soup_auth_manager_clear_cached_credentials (::SoupAuthManager* manager);
void base::AuthManagerBase::clear_cached_credentials () noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_manager_clear_cached_credentials;
  call_wrap_v ((::SoupAuthManager*) (gobj_()));
}

// void soup_auth_manager_use_auth (SoupAuthManager* manager, SoupURI* uri, SoupAuth* auth);
// void soup_auth_manager_use_auth (::SoupAuthManager* manager, ::SoupURI* uri, ::SoupAuth* auth);
void base::AuthManagerBase::use_auth (Soup::URI uri, Soup::Auth auth) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthManager* manager, ::SoupURI* uri, ::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_manager_use_auth;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuthManager*) (gobj_()), (::SoupURI*) (uri_to_c), (::SoupAuth*) (auth_to_c));
}



} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authmanager_extra_def_impl.hpp>)
#include <soup/authmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authmanager_extra_impl.hpp>)
#include <soup/authmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AuthManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAuthManagerClass *methods = (::SoupAuthManagerClass *) class_struct;
  (void) methods;

  methods->authenticate = (decltype (methods->authenticate)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::Auth auth, gboolean retrying), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::authenticate_>;
}

// void AuthManager::authenticate (SoupAuthManager* manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void AuthManager::authenticate (::SoupAuthManager* manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
void AuthManagerClass::authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept
{
  if (!get_struct_()->authenticate) return ;
  typedef void (*call_wrap_t) (::SoupAuthManager* manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authenticate;
  auto retrying_to_c = retrying;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuthManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (gboolean) (retrying_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
