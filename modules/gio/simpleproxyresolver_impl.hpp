// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEPROXYRESOLVER_IMPL_HPP_
#define _GI_GIO_SIMPLEPROXYRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ProxyResolver SimpleProxyResolverBase::interface_ (gi::interface_tag<Gio::ProxyResolver>)
{ return gi::wrap ((Gio::ProxyResolver::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SimpleProxyResolverBase::operator Gio::ProxyResolver ()
{ return interface_ (gi::interface_tag<Gio::ProxyResolver>()); }

// GProxyResolver* g_simple_proxy_resolver_new (const gchar* default_proxy, gchar** ignore_hosts);
// ::GProxyResolver* g_simple_proxy_resolver_new (const char* default_proxy, char** ignore_hosts);
Gio::ProxyResolver base::SimpleProxyResolverBase::new_ (const std::string & default_proxy, const std::vector<std::string> & ignore_hosts) noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) (const char* default_proxy, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_proxy_resolver_new;
  auto ignore_hosts_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (ignore_hosts);
  auto ignore_hosts_w = unwrap (ignore_hosts_i, gi::transfer_none, direction_in);
  auto ignore_hosts_to_c = ignore_hosts_w.gobj_(false);
  auto default_proxy_to_c = gi::unwrap (default_proxy, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_to_c), (char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::ProxyResolver base::SimpleProxyResolverBase::new_ (const std::vector<std::string> & ignore_hosts) noexcept
{
  typedef ::GProxyResolver* (*call_wrap_t) (const char* default_proxy, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_proxy_resolver_new;
  auto ignore_hosts_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (ignore_hosts);
  auto ignore_hosts_w = unwrap (ignore_hosts_i, gi::transfer_none, direction_in);
  auto ignore_hosts_to_c = ignore_hosts_w.gobj_(false);
  auto default_proxy_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (default_proxy_to_c), (char**) (ignore_hosts_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_simple_proxy_resolver_set_default_proxy (GSimpleProxyResolver* resolver, const gchar* default_proxy);
// void g_simple_proxy_resolver_set_default_proxy (::GSimpleProxyResolver* resolver, const char* default_proxy);
void base::SimpleProxyResolverBase::set_default_proxy (const std::string & default_proxy) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, const char* default_proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_proxy_resolver_set_default_proxy;
  auto default_proxy_to_c = gi::unwrap (default_proxy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (const char*) (default_proxy_to_c));
}

// void g_simple_proxy_resolver_set_ignore_hosts (GSimpleProxyResolver* resolver, gchar** ignore_hosts);
// void g_simple_proxy_resolver_set_ignore_hosts (::GSimpleProxyResolver* resolver, char** ignore_hosts);
void base::SimpleProxyResolverBase::set_ignore_hosts (const std::vector<std::string> & ignore_hosts) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, char** ignore_hosts);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_proxy_resolver_set_ignore_hosts;
  auto ignore_hosts_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (ignore_hosts);
  auto ignore_hosts_w = unwrap (ignore_hosts_i, gi::transfer_none, direction_in);
  auto ignore_hosts_to_c = ignore_hosts_w.gobj_(false);
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (char**) (ignore_hosts_to_c));
}

// void g_simple_proxy_resolver_set_uri_proxy (GSimpleProxyResolver* resolver, const gchar* uri_scheme, const gchar* proxy);
// void g_simple_proxy_resolver_set_uri_proxy (::GSimpleProxyResolver* resolver, const char* uri_scheme, const char* proxy);
void base::SimpleProxyResolverBase::set_uri_proxy (const std::string & uri_scheme, const std::string & proxy) noexcept
{
  typedef void (*call_wrap_t) (::GSimpleProxyResolver* resolver, const char* uri_scheme, const char* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_simple_proxy_resolver_set_uri_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSimpleProxyResolver*) (gobj_()), (const char*) (uri_scheme_to_c), (const char*) (proxy_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_def_impl.hpp>)
#include <gio/simpleproxyresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleproxyresolver_extra_impl.hpp>)
#include <gio/simpleproxyresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SimpleProxyResolverClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSimpleProxyResolverClass *methods = (::GSimpleProxyResolverClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
