// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYURIRESOLVER_HPP_
#define _GI_SOUP_PROXYURIRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class URI;

class ProxyURIResolver;

namespace base {


#define GI_SOUP_PROXYURIRESOLVER_BASE base::ProxyURIResolverBase
class ProxyURIResolverBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SoupProxyURIResolver BaseObjectType;

ProxyURIResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_proxy_uri_resolver_get_type(); } 

// void soup_proxy_uri_resolver_get_proxy_uri_async (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GMainContext* async_context, GCancellable* cancellable, SoupProxyURIResolverCallback callback, gpointer user_data);
// void soup_proxy_uri_resolver_get_proxy_uri_async (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::ProxyURIResolverCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// guint soup_proxy_uri_resolver_get_proxy_uri_sync (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GCancellable* cancellable, SoupURI** proxy_uri);
// guint soup_proxy_uri_resolver_get_proxy_uri_sync (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GCancellable* cancellable, ::SoupURI** proxy_uri);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyuriresolver_extra_def.hpp>)
#include <soup/proxyuriresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyuriresolver_extra.hpp>)
#include <soup/proxyuriresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class ProxyURIResolver : public GI_SOUP_PROXYURIRESOLVER_BASE
{ typedef GI_SOUP_PROXYURIRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupProxyURIResolver>
{ typedef Soup::ProxyURIResolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class ProxyURIResolverInterfaceDef
{
typedef ProxyURIResolverInterfaceDef self;
public:
typedef Soup::ProxyURIResolver instance_type;
typedef ::SoupProxyURIResolverInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ProxyURIResolver::get_proxy_uri_async (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GMainContext* async_context, GCancellable* cancellable, SoupProxyURIResolverCallback callback, gpointer user_data);
// void ProxyURIResolver::get_proxy_uri_async (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::ProxyURIResolverCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// guint ProxyURIResolver::get_proxy_uri_sync (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GCancellable* cancellable, SoupURI** proxy_uri);
// guint ProxyURIResolver::get_proxy_uri_sync (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GCancellable* cancellable, ::SoupURI** proxy_uri);
// IGNORE; deprecated, virtual-method out parameter not supported


};

using ProxyURIResolverImpl = detail::InterfaceImpl<ProxyURIResolverInterfaceDef>;

class ProxyURIResolverInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyURIResolverImpl>
{
typedef ProxyURIResolverInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyURIResolverImpl> super;

protected:
using super::super;

// void ProxyURIResolver::get_proxy_uri_async (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GMainContext* async_context, GCancellable* cancellable, SoupProxyURIResolverCallback callback, gpointer user_data);
// void ProxyURIResolver::get_proxy_uri_async (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::ProxyURIResolverCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// guint ProxyURIResolver::get_proxy_uri_sync (SoupProxyURIResolver* proxy_uri_resolver, SoupURI* uri, GCancellable* cancellable, SoupURI** proxy_uri);
// guint ProxyURIResolver::get_proxy_uri_sync (::SoupProxyURIResolver* proxy_uri_resolver, ::SoupURI* uri, ::GCancellable* cancellable, ::SoupURI** proxy_uri);
// IGNORE; deprecated, virtual-method out parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
