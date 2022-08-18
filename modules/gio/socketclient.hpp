// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETCLIENT_HPP_
#define _GI_GIO_SOCKETCLIENT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class ProxyResolver;
class SocketAddress;
class SocketConnectable;
class SocketConnection;

class SocketClient;

namespace base {


#define GI_GIO_SOCKETCLIENT_BASE base::SocketClientBase
class SocketClientBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSocketClient BaseObjectType;

SocketClientBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_socket_client_get_type(); } 

// GSocketClient* g_socket_client_new ();
// ::GSocketClient* g_socket_client_new ();
static GI_INLINE_DECL Gio::SocketClient new_ () noexcept;

// void g_socket_client_add_application_proxy (GSocketClient* client, const gchar* protocol);
// void g_socket_client_add_application_proxy (::GSocketClient* client, const char* protocol);
GI_INLINE_DECL void add_application_proxy (const std::string & protocol) noexcept;

// GSocketConnection* g_socket_client_connect (GSocketClient* client, GSocketConnectable* connectable, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable);
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect (Gio::SocketConnectable connectable, GLib::Error * _error) noexcept;

// void g_socket_client_connect_async (GSocketClient* client, GSocketConnectable* connectable, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_async (::GSocketClient* client, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_async (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Gio::SocketConnectable connectable, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* g_socket_client_connect_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* g_socket_client_connect_to_host (GSocketClient* client, const gchar* host_and_port, guint16 default_port, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_host (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const std::string & host_and_port, guint16 default_port);
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_host (const std::string & host_and_port, guint16 default_port, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_host_async (GSocketClient* client, const gchar* host_and_port, guint16 default_port, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_host_async (::GSocketClient* client, const char* host_and_port, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_to_host_async (const std::string & host_and_port, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_host_async (const std::string & host_and_port, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* g_socket_client_connect_to_host_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_host_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_host_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_host_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* g_socket_client_connect_to_service (GSocketClient* client, const gchar* domain, const gchar* service, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_service (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const std::string & domain, const std::string & service, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const std::string & domain, const std::string & service);
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const std::string & domain, const std::string & service, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_service (const std::string & domain, const std::string & service, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_service_async (GSocketClient* client, const gchar* domain, const gchar* service, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_service_async (::GSocketClient* client, const char* domain, const char* service, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_to_service_async (const std::string & domain, const std::string & service, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_service_async (const std::string & domain, const std::string & service, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* g_socket_client_connect_to_service_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_service_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_service_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_service_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GSocketConnection* g_socket_client_connect_to_uri (GSocketClient* client, const gchar* uri, guint16 default_port, GCancellable* cancellable, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_uri (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const std::string & uri, guint16 default_port);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::SocketConnection connect_to_uri (const std::string & uri, guint16 default_port, GLib::Error * _error) noexcept;

// void g_socket_client_connect_to_uri_async (GSocketClient* client, const gchar* uri, guint16 default_port, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_socket_client_connect_to_uri_async (::GSocketClient* client, const char* uri, guint16 default_port, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_to_uri_async (const std::string & uri, guint16 default_port, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void connect_to_uri_async (const std::string & uri, guint16 default_port, Gio::AsyncReadyCallback callback) noexcept;

// GSocketConnection* g_socket_client_connect_to_uri_finish (GSocketClient* client, GAsyncResult* result, GError ** error);
// ::GSocketConnection* g_socket_client_connect_to_uri_finish (::GSocketClient* client, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::SocketConnection connect_to_uri_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_socket_client_get_enable_proxy (GSocketClient* client);
// gboolean g_socket_client_get_enable_proxy (::GSocketClient* client);
GI_INLINE_DECL bool get_enable_proxy () noexcept;

// GSocketFamily g_socket_client_get_family (GSocketClient* client);
// ::GSocketFamily g_socket_client_get_family (::GSocketClient* client);
GI_INLINE_DECL Gio::SocketFamily get_family () noexcept;

// GSocketAddress* g_socket_client_get_local_address (GSocketClient* client);
// ::GSocketAddress* g_socket_client_get_local_address (::GSocketClient* client);
GI_INLINE_DECL Gio::SocketAddress get_local_address () noexcept;

// GSocketProtocol g_socket_client_get_protocol (GSocketClient* client);
// ::GSocketProtocol g_socket_client_get_protocol (::GSocketClient* client);
GI_INLINE_DECL Gio::SocketProtocol get_protocol () noexcept;

// GProxyResolver* g_socket_client_get_proxy_resolver (GSocketClient* client);
// ::GProxyResolver* g_socket_client_get_proxy_resolver (::GSocketClient* client);
GI_INLINE_DECL Gio::ProxyResolver get_proxy_resolver () noexcept;

// GSocketType g_socket_client_get_socket_type (GSocketClient* client);
// ::GSocketType g_socket_client_get_socket_type (::GSocketClient* client);
GI_INLINE_DECL Gio::SocketType get_socket_type () noexcept;

// guint g_socket_client_get_timeout (GSocketClient* client);
// guint g_socket_client_get_timeout (::GSocketClient* client);
GI_INLINE_DECL guint get_timeout () noexcept;

// gboolean g_socket_client_get_tls (GSocketClient* client);
// gboolean g_socket_client_get_tls (::GSocketClient* client);
GI_INLINE_DECL bool get_tls () noexcept;

// GTlsCertificateFlags g_socket_client_get_tls_validation_flags (GSocketClient* client);
// ::GTlsCertificateFlags g_socket_client_get_tls_validation_flags (::GSocketClient* client);
// IGNORE; deprecated

// void g_socket_client_set_enable_proxy (GSocketClient* client, gboolean enable);
// void g_socket_client_set_enable_proxy (::GSocketClient* client, gboolean enable);
GI_INLINE_DECL void set_enable_proxy (gboolean enable) noexcept;

// void g_socket_client_set_family (GSocketClient* client, GSocketFamily family);
// void g_socket_client_set_family (::GSocketClient* client, ::GSocketFamily family);
GI_INLINE_DECL void set_family (Gio::SocketFamily family) noexcept;

// void g_socket_client_set_local_address (GSocketClient* client, GSocketAddress* address);
// void g_socket_client_set_local_address (::GSocketClient* client, ::GSocketAddress* address);
GI_INLINE_DECL void set_local_address (Gio::SocketAddress address) noexcept;
GI_INLINE_DECL void set_local_address () noexcept;

// void g_socket_client_set_protocol (GSocketClient* client, GSocketProtocol protocol);
// void g_socket_client_set_protocol (::GSocketClient* client, ::GSocketProtocol protocol);
GI_INLINE_DECL void set_protocol (Gio::SocketProtocol protocol) noexcept;

// void g_socket_client_set_proxy_resolver (GSocketClient* client, GProxyResolver* proxy_resolver);
// void g_socket_client_set_proxy_resolver (::GSocketClient* client, ::GProxyResolver* proxy_resolver);
GI_INLINE_DECL void set_proxy_resolver (Gio::ProxyResolver proxy_resolver) noexcept;
GI_INLINE_DECL void set_proxy_resolver () noexcept;

// void g_socket_client_set_socket_type (GSocketClient* client, GSocketType type);
// void g_socket_client_set_socket_type (::GSocketClient* client, ::GSocketType type);
GI_INLINE_DECL void set_socket_type (Gio::SocketType type) noexcept;

// void g_socket_client_set_timeout (GSocketClient* client, guint timeout);
// void g_socket_client_set_timeout (::GSocketClient* client, guint timeout);
GI_INLINE_DECL void set_timeout (guint timeout) noexcept;

// void g_socket_client_set_tls (GSocketClient* client, gboolean tls);
// void g_socket_client_set_tls (::GSocketClient* client, gboolean tls);
GI_INLINE_DECL void set_tls (gboolean tls) noexcept;

// void g_socket_client_set_tls_validation_flags (GSocketClient* client, GTlsCertificateFlags flags);
// void g_socket_client_set_tls_validation_flags (::GSocketClient* client, ::GTlsCertificateFlags flags);
// IGNORE; deprecated

gi::property_proxy<bool, base::SocketClientBase> property_enable_proxy()
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "enable-proxy"); }
const gi::property_proxy<bool, base::SocketClientBase> property_enable_proxy() const
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "enable-proxy"); }

gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> property_family()
{ return gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> (*this, "family"); }
const gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> property_family() const
{ return gi::property_proxy<Gio::SocketFamily, base::SocketClientBase> (*this, "family"); }

gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> property_local_address()
{ return gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> (*this, "local-address"); }
const gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> property_local_address() const
{ return gi::property_proxy<Gio::SocketAddress, base::SocketClientBase> (*this, "local-address"); }

gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> property_protocol()
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> (*this, "protocol"); }
const gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> property_protocol() const
{ return gi::property_proxy<Gio::SocketProtocol, base::SocketClientBase> (*this, "protocol"); }

gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> property_proxy_resolver()
{ return gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> (*this, "proxy-resolver"); }
const gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> property_proxy_resolver() const
{ return gi::property_proxy<Gio::ProxyResolver, base::SocketClientBase> (*this, "proxy-resolver"); }

gi::property_proxy<guint, base::SocketClientBase> property_timeout()
{ return gi::property_proxy<guint, base::SocketClientBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::SocketClientBase> property_timeout() const
{ return gi::property_proxy<guint, base::SocketClientBase> (*this, "timeout"); }

gi::property_proxy<bool, base::SocketClientBase> property_tls()
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "tls"); }
const gi::property_proxy<bool, base::SocketClientBase> property_tls() const
{ return gi::property_proxy<bool, base::SocketClientBase> (*this, "tls"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> property_tls_validation_flags()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> (*this, "tls-validation-flags"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> property_tls_validation_flags() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketClientBase> (*this, "tls-validation-flags"); }

gi::property_proxy<Gio::SocketType, base::SocketClientBase> property_type()
{ return gi::property_proxy<Gio::SocketType, base::SocketClientBase> (*this, "type"); }
const gi::property_proxy<Gio::SocketType, base::SocketClientBase> property_type() const
{ return gi::property_proxy<Gio::SocketType, base::SocketClientBase> (*this, "type"); }

// signal event
gi::signal_proxy<void(Gio::SocketClient, Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection)> signal_event()
{ return gi::signal_proxy<void(Gio::SocketClient, Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection)> (*this, "event"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra_def.hpp>)
#include <gio/socketclient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketclient_extra.hpp>)
#include <gio/socketclient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SocketClient : public GI_GIO_SOCKETCLIENT_BASE
{ typedef GI_GIO_SOCKETCLIENT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSocketClient>
{ typedef Gio::SocketClient type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class SocketClientClassDef
{
typedef SocketClientClassDef self;
public:
typedef Gio::SocketClient instance_type;
typedef ::GSocketClientClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void SocketClient::event (GSocketClient* client, GSocketClientEvent event, GSocketConnectable* connectable, GIOStream* connection);
// void SocketClient::event (::GSocketClient* client, ::GSocketClientEvent event, ::GSocketConnectable* connectable, ::GIOStream* connection);
virtual void event_ (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketClientClass: public detail::ClassTemplate<Gio::impl::internal::SocketClientClassDef, GObject::impl::internal::ObjectClass>
{
typedef SocketClientClass self;
typedef detail::ClassTemplate<Gio::impl::internal::SocketClientClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void SocketClient::event (GSocketClient* client, GSocketClientEvent event, GSocketConnectable* connectable, GIOStream* connection);
// void SocketClient::event (::GSocketClient* client, ::GSocketClientEvent event, ::GSocketConnectable* connectable, ::GIOStream* connection);
GI_INLINE_DECL void event_ (Gio::SocketClientEvent event, Gio::SocketConnectable connectable, Gio::IOStream connection) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketClientImpl = detail::ObjectImpl<SocketClient, internal::SocketClientClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
