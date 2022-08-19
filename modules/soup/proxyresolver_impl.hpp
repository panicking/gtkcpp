// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYRESOLVER_IMPL_HPP_
#define _GI_SOUP_PROXYRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// void soup_proxy_resolver_get_proxy_async (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GMainContext* async_context, GCancellable* cancellable, SoupProxyResolverCallback callback, gpointer user_data);
// void soup_proxy_resolver_get_proxy_async (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GMainContext* async_context, ::GCancellable* cancellable,  callback, void* user_data);
// IGNORE; deprecated

// guint soup_proxy_resolver_get_proxy_sync (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GCancellable* cancellable, SoupAddress** addr);
// guint soup_proxy_resolver_get_proxy_sync (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GCancellable* cancellable, ::SoupAddress** addr);
// IGNORE; deprecated


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyresolver_extra_def_impl.hpp>)
#include <soup/proxyresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyresolver_extra_impl.hpp>)
#include <soup/proxyresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ProxyResolverInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::SoupProxyResolverInterface *methods = (::SoupProxyResolverInterface *) interface_struct;
  (void) methods;

}

// void ProxyResolver::get_proxy_async (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GMainContext* async_context, GCancellable* cancellable, SoupProxyResolverCallback callback, gpointer user_data);
// void ProxyResolver::get_proxy_async (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GMainContext* async_context, ::GCancellable* cancellable,  callback, void* user_data);
// IGNORE; deprecated

// guint ProxyResolver::get_proxy_sync (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GCancellable* cancellable, SoupAddress** addr);
// guint ProxyResolver::get_proxy_sync (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GCancellable* cancellable, ::SoupAddress** addr);
// IGNORE; deprecated, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
