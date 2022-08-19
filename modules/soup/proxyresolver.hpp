// AUTO-GENERATED

#ifndef _GI_SOUP_PROXYRESOLVER_HPP_
#define _GI_SOUP_PROXYRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;
class Message;

class ProxyResolver;

namespace base {


#define GI_SOUP_PROXYRESOLVER_BASE base::ProxyResolverBase
class ProxyResolverBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SoupProxyResolver BaseObjectType;

ProxyResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_proxy_resolver_get_type(); } 

// void soup_proxy_resolver_get_proxy_async (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GMainContext* async_context, GCancellable* cancellable, SoupProxyResolverCallback callback, gpointer user_data);
// void soup_proxy_resolver_get_proxy_async (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GMainContext* async_context, ::GCancellable* cancellable,  callback, void* user_data);
// IGNORE; deprecated

// guint soup_proxy_resolver_get_proxy_sync (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GCancellable* cancellable, SoupAddress** addr);
// guint soup_proxy_resolver_get_proxy_sync (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GCancellable* cancellable, ::SoupAddress** addr);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/proxyresolver_extra_def.hpp>)
#include <soup/proxyresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/proxyresolver_extra.hpp>)
#include <soup/proxyresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class ProxyResolver : public GI_SOUP_PROXYRESOLVER_BASE
{ typedef GI_SOUP_PROXYRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupProxyResolver>
{ typedef Soup::ProxyResolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class ProxyResolverInterfaceDef
{
typedef ProxyResolverInterfaceDef self;
public:
typedef Soup::ProxyResolver instance_type;
typedef ::SoupProxyResolverInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ProxyResolver::get_proxy_async (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GMainContext* async_context, GCancellable* cancellable, SoupProxyResolverCallback callback, gpointer user_data);
// void ProxyResolver::get_proxy_async (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GMainContext* async_context, ::GCancellable* cancellable,  callback, void* user_data);
// IGNORE; deprecated

// guint ProxyResolver::get_proxy_sync (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GCancellable* cancellable, SoupAddress** addr);
// guint ProxyResolver::get_proxy_sync (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GCancellable* cancellable, ::SoupAddress** addr);
// IGNORE; deprecated, virtual-method out parameter not supported


};

using ProxyResolverImpl = detail::InterfaceImpl<ProxyResolverInterfaceDef>;

class ProxyResolverInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyResolverImpl>
{
typedef ProxyResolverInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyResolverImpl> super;

protected:
using super::super;

// void ProxyResolver::get_proxy_async (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GMainContext* async_context, GCancellable* cancellable, SoupProxyResolverCallback callback, gpointer user_data);
// void ProxyResolver::get_proxy_async (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GMainContext* async_context, ::GCancellable* cancellable,  callback, void* user_data);
// IGNORE; deprecated

// guint ProxyResolver::get_proxy_sync (SoupProxyResolver* proxy_resolver, SoupMessage* msg, GCancellable* cancellable, SoupAddress** addr);
// guint ProxyResolver::get_proxy_sync (::SoupProxyResolver* proxy_resolver, ::SoupMessage* msg, ::GCancellable* cancellable, ::SoupAddress** addr);
// IGNORE; deprecated, virtual-method out parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
