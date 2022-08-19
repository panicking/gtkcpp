// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYURIRESOLVER_IMPL_HPP_
#define _GI_SOUP_PROXYURIRESOLVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// void soup_proxy_uri_resolver_get_proxy_uri_async (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GMainContext* async_context, GCancellable* cancellable, SoupProxyURIResolverCallback callback, gpointer user_data);
// void soup_proxy_uri_resolver_get_proxy_uri_async (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::ProxyURIResolverCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// guint soup_proxy_uri_resolver_get_proxy_uri_sync (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GCancellable* cancellable, SoupURI** proxy_uri);
// guint soup_proxy_uri_resolver_get_proxy_uri_sync (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GCancellable* cancellable, ::SoupURI** proxy_uri);
// IGNORE; deprecated


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyuriresolver_extra_def_impl.hpp>)
#include <soup/proxyuriresolver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyuriresolver_extra_impl.hpp>)
#include <soup/proxyuriresolver_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void ProxyURIResolverInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::SoupProxyURIResolverInterface *methods = (::SoupProxyURIResolverInterface *) interface_struct;
  (void) methods;

}

// void ProxyURIResolver::get_proxy_uri_async (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GMainContext* async_context, GCancellable* cancellable, SoupProxyURIResolverCallback callback, gpointer user_data);
// void ProxyURIResolver::get_proxy_uri_async (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::ProxyURIResolverCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// guint ProxyURIResolver::get_proxy_uri_sync (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GCancellable* cancellable, SoupURI** proxy_uri);
// guint ProxyURIResolver::get_proxy_uri_sync (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GCancellable* cancellable, ::SoupURI** proxy_uri);
// IGNORE; deprecated, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
