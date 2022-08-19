// AUTO-GENERATED

#ifndef _GI_SOUP_CLIENTCONTEXT_IMPL_HPP_
#define _GI_SOUP_CLIENTCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupAddress* soup_client_context_get_address (SoupClientContext* client);
// ::SoupAddress* soup_client_context_get_address (::SoupClientContext* client);
// IGNORE; deprecated

// SoupAuthDomain* soup_client_context_get_auth_domain (SoupClientContext* client);
// ::SoupAuthDomain* soup_client_context_get_auth_domain (::SoupClientContext* client);
Soup::AuthDomain base::ClientContextBase::get_auth_domain () noexcept
{
  typedef ::SoupAuthDomain* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_auth_domain;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_client_context_get_auth_user (SoupClientContext* client);
// const char* soup_client_context_get_auth_user (::SoupClientContext* client);
std::string base::ClientContextBase::get_auth_user () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_auth_user;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocket* soup_client_context_get_gsocket (SoupClientContext* client);
// ::GSocket* soup_client_context_get_gsocket (::SoupClientContext* client);
Gio::Socket base::ClientContextBase::get_gsocket () noexcept
{
  typedef ::GSocket* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_gsocket;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_client_context_get_host (SoupClientContext* client);
// const char* soup_client_context_get_host (::SoupClientContext* client);
std::string base::ClientContextBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_host;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocketAddress* soup_client_context_get_local_address (SoupClientContext* client);
// ::GSocketAddress* soup_client_context_get_local_address (::SoupClientContext* client);
Gio::SocketAddress base::ClientContextBase::get_local_address () noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_local_address;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSocketAddress* soup_client_context_get_remote_address (SoupClientContext* client);
// ::GSocketAddress* soup_client_context_get_remote_address (::SoupClientContext* client);
Gio::SocketAddress base::ClientContextBase::get_remote_address () noexcept
{
  typedef ::GSocketAddress* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_get_remote_address;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupSocket* soup_client_context_get_socket (SoupClientContext* client);
// ::SoupSocket* soup_client_context_get_socket (::SoupClientContext* client);
// IGNORE; deprecated

// GIOStream* soup_client_context_steal_connection (SoupClientContext* client);
// ::GIOStream* soup_client_context_steal_connection (::SoupClientContext* client);
Gio::IOStream base::ClientContextBase::steal_connection () noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::SoupClientContext* client);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_client_context_steal_connection;
  auto _temp_ret = call_wrap_v ((::SoupClientContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/clientcontext_extra_def_impl.hpp>)
#include <soup/clientcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/clientcontext_extra_impl.hpp>)
#include <soup/clientcontext_extra_impl.hpp>
#endif
#endif

#endif
