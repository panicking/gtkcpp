// AUTO-GENERATED

#ifndef _GI_GIO_PROXY_HPP_
#define _GI_GIO_PROXY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class ProxyAddress;

class Proxy;

namespace base {


#define GI_GIO_PROXY_BASE base::ProxyBase
class ProxyBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GProxy BaseObjectType;

ProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_proxy_get_type(); } 

// GProxy* g_proxy_get_default_for_protocol (const gchar* protocol);
// ::GProxy* g_proxy_get_default_for_protocol (const char* protocol);
static GI_INLINE_DECL Gio::Proxy get_default_for_protocol (const std::string & protocol) noexcept;

// GIOStream* g_proxy_connect (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GError ** error);
// ::GIOStream* g_proxy_connect (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address);
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::IOStream connect (Gio::IOStream connection, Gio::ProxyAddress proxy_address, GLib::Error * _error) noexcept;

// void g_proxy_connect_async (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_proxy_connect_async (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Gio::IOStream connection, Gio::ProxyAddress proxy_address, Gio::AsyncReadyCallback callback) noexcept;

// GIOStream* g_proxy_connect_finish (GProxy* proxy, GAsyncResult* result, GError ** error);
// ::GIOStream* g_proxy_connect_finish (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::IOStream connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_proxy_supports_hostname (GProxy* proxy);
// gboolean g_proxy_supports_hostname (::GProxy* proxy);
GI_INLINE_DECL bool supports_hostname () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/proxy_extra_def.hpp>)
#include <gio/proxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/proxy_extra.hpp>)
#include <gio/proxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Proxy : public GI_GIO_PROXY_BASE
{ typedef GI_GIO_PROXY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GProxy>
{ typedef Gio::Proxy type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ProxyInterfaceDef
{
typedef ProxyInterfaceDef self;
public:
typedef Gio::Proxy instance_type;
typedef ::GProxyInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GIOStream* Proxy::connect (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GError ** error);
// ::GIOStream* Proxy::connect (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Proxy::connect_async (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GIOStream* Proxy::connect_finish (GProxy* proxy, GAsyncResult* result, GError ** error);
// ::GIOStream* Proxy::connect_finish (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean Proxy::supports_hostname (GProxy* proxy);
// gboolean Proxy::supports_hostname (::GProxy* proxy);
virtual bool supports_hostname_ () noexcept = 0;


};

using ProxyImpl = detail::InterfaceImpl<ProxyInterfaceDef>;

class ProxyInterfaceClassImpl: public detail::InterfaceClassImpl<ProxyImpl>
{
typedef ProxyInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ProxyImpl> super;

protected:
using super::super;

// GIOStream* Proxy::connect (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GError ** error);
// ::GIOStream* Proxy::connect (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Proxy::connect_async (GProxy* proxy, GIOStream* connection, GProxyAddress* proxy_address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Proxy::connect_async (::GProxy* proxy, ::GIOStream* connection, ::GProxyAddress* proxy_address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GIOStream* Proxy::connect_finish (GProxy* proxy, GAsyncResult* result, GError ** error);
// ::GIOStream* Proxy::connect_finish (::GProxy* proxy, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean Proxy::supports_hostname (GProxy* proxy);
// gboolean Proxy::supports_hostname (::GProxy* proxy);
GI_INLINE_DECL bool supports_hostname_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
