// AUTO-GENERATED

#ifndef _GI_GIO_PROXYRESOLVER_HPP_
#define _GI_GIO_PROXYRESOLVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class ProxyResolver;

namespace base {


#define GI_GIO_PROXYRESOLVER_BASE base::ProxyResolverBase
class ProxyResolverBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GProxyResolver BaseObjectType;

ProxyResolverBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_resolver_get_type(); } 

// GProxyResolver* g_proxy_resolver_get_default ();
// ::GProxyResolver* g_proxy_resolver_get_default ();
static GI_INLINE_DECL Gio::ProxyResolver get_default () noexcept;

// gboolean g_proxy_resolver_is_supported (GProxyResolver* resolver);
// gboolean g_proxy_resolver_is_supported (::GProxyResolver* resolver);
GI_INLINE_DECL bool is_supported () noexcept;

// gchar** g_proxy_resolver_lookup (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GError ** error);
// char** g_proxy_resolver_lookup (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::vector<std::string> lookup (const std::string & uri, Gio::Cancellable cancellable);
GI_INLINE_DECL std::vector<std::string> lookup (const std::string & uri);
GI_INLINE_DECL std::vector<std::string> lookup (const std::string & uri, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<std::string> lookup (const std::string & uri, GLib::Error * _error) noexcept;

// void g_proxy_resolver_lookup_async (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_proxy_resolver_lookup_async (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void lookup_async (const std::string & uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void lookup_async (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept;

// gchar** g_proxy_resolver_lookup_finish (GProxyResolver* resolver, GAsyncResult* result, GError ** error);
// char** g_proxy_resolver_lookup_finish (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<std::string> lookup_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<std::string> lookup_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra_def.hpp>)
#include <gio/proxyresolver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxyresolver_extra.hpp>)
#include <gio/proxyresolver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ProxyResolver : public GI_GIO_PROXYRESOLVER_BASE
{ typedef GI_GIO_PROXYRESOLVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxyResolver>
{ typedef Gio::ProxyResolver type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyResolverInterfaceDef
{
typedef ProxyResolverInterfaceDef self;
public:
typedef Gio::ProxyResolver instance_type;
typedef ::GProxyResolverInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver);
virtual bool is_supported_ () noexcept = 0;

// gchar** ProxyResolver::lookup (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GError ** error);
// char** ProxyResolver::lookup (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void ProxyResolver::lookup_async (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar** ProxyResolver::lookup_finish (GProxyResolver* resolver, GAsyncResult* result, GError ** error);
// char** ProxyResolver::lookup_finish (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported


};

using ProxyResolverImpl = detail::InterfaceImpl<ProxyResolverInterfaceDef>;

class ProxyResolverInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyResolverImpl>
{
typedef ProxyResolverInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyResolverImpl> super;

protected:
using super::super;

// gboolean ProxyResolver::is_supported (GProxyResolver* resolver);
// gboolean ProxyResolver::is_supported (::GProxyResolver* resolver);
GI_INLINE_DECL bool is_supported_ () noexcept override;

// gchar** ProxyResolver::lookup (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GError ** error);
// char** ProxyResolver::lookup (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void ProxyResolver::lookup_async (GProxyResolver* resolver, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void ProxyResolver::lookup_async (::GProxyResolver* resolver, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gchar** ProxyResolver::lookup_finish (GProxyResolver* resolver, GAsyncResult* result, GError ** error);
// char** ProxyResolver::lookup_finish (::GProxyResolver* resolver, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
