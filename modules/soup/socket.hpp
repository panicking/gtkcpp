// AUTO-GENERATED

#ifndef _GI_SOUP_SOCKET_HPP_
#define _GI_SOUP_SOCKET_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;

class Socket;

namespace base {


#define GI_SOUP_SOCKET_BASE base::SocketBase
class SocketBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupSocket BaseObjectType;

SocketBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_socket_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// SoupSocket* soup_socket_new (const char* optname1);
// ::SoupSocket* soup_socket_new (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_socket_connect_async (SoupSocket* sock, GCancellable* cancellable, SoupSocketCallback callback, gpointer user_data);
// void soup_socket_connect_async (::SoupSocket* sock, ::GCancellable* cancellable, Soup::SocketCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void connect_async (Gio::Cancellable cancellable, Soup::SocketCallback callback) noexcept;
GI_INLINE_DECL void connect_async (Soup::SocketCallback callback) noexcept;

// guint soup_socket_connect_sync (SoupSocket* sock, GCancellable* cancellable);
// guint soup_socket_connect_sync (::SoupSocket* sock, ::GCancellable* cancellable);
GI_INLINE_DECL guint connect_sync (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL guint connect_sync () noexcept;

// void soup_socket_disconnect (SoupSocket* sock);
// void soup_socket_disconnect (::SoupSocket* sock);
GI_INLINE_DECL void disconnect () noexcept;

// int soup_socket_get_fd (SoupSocket* sock);
// gint soup_socket_get_fd (::SoupSocket* sock);
GI_INLINE_DECL gint get_fd () noexcept;

// SoupAddress* soup_socket_get_local_address (SoupSocket* sock);
// ::SoupAddress* soup_socket_get_local_address (::SoupSocket* sock);
GI_INLINE_DECL Soup::Address get_local_address () noexcept;

// SoupAddress* soup_socket_get_remote_address (SoupSocket* sock);
// ::SoupAddress* soup_socket_get_remote_address (::SoupSocket* sock);
GI_INLINE_DECL Soup::Address get_remote_address () noexcept;

// gboolean soup_socket_is_connected (SoupSocket* sock);
// gboolean soup_socket_is_connected (::SoupSocket* sock);
GI_INLINE_DECL bool is_connected () noexcept;

// gboolean soup_socket_is_ssl (SoupSocket* sock);
// gboolean soup_socket_is_ssl (::SoupSocket* sock);
GI_INLINE_DECL bool is_ssl () noexcept;

// gboolean soup_socket_listen (SoupSocket* sock);
// gboolean soup_socket_listen (::SoupSocket* sock);
GI_INLINE_DECL bool listen () noexcept;

// SoupSocketIOStatus soup_socket_read (SoupSocket* sock, gpointer buffer, gsize len, gsize* nread, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_read (::SoupSocket* sock, guint8* buffer, gsize len, gsize* nread, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Soup::SocketIOStatus read (guint8 * buffer, gsize len, gsize & nread, Gio::Cancellable cancellable);
GI_INLINE_DECL Soup::SocketIOStatus read (guint8 * buffer, gsize len, gsize & nread);
GI_INLINE_DECL Soup::SocketIOStatus read (guint8 * buffer, gsize len, gsize & nread, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Soup::SocketIOStatus read (guint8 * buffer, gsize len, gsize & nread, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> read (guint8 * buffer, gsize len, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> read (guint8 * buffer, gsize len);
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> read (guint8 * buffer, gsize len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> read (guint8 * buffer, gsize len, GLib::Error * _error) noexcept;

// SoupSocketIOStatus soup_socket_read_until (SoupSocket* sock, gpointer buffer, gsize len, gconstpointer boundary, gsize boundary_len, gsize* nread, gboolean* got_boundary, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_read_until (::SoupSocket* sock, guint8* buffer, gsize len, const void* boundary, gsize boundary_len, gsize* nread, gboolean got_boundary, ::GCancellable* cancellable, GError ** error);
// SKIP; inconsistent in got_boundary pointer depth (1 vs 0)

// gboolean soup_socket_start_proxy_ssl (SoupSocket* sock, const char* ssl_host, GCancellable* cancellable);
// gboolean soup_socket_start_proxy_ssl (::SoupSocket* sock, const char* ssl_host, ::GCancellable* cancellable);
GI_INLINE_DECL bool start_proxy_ssl (const std::string & ssl_host, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL bool start_proxy_ssl (const std::string & ssl_host) noexcept;

// gboolean soup_socket_start_ssl (SoupSocket* sock, GCancellable* cancellable);
// gboolean soup_socket_start_ssl (::SoupSocket* sock, ::GCancellable* cancellable);
GI_INLINE_DECL bool start_ssl (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL bool start_ssl () noexcept;

// SoupSocketIOStatus soup_socket_write (SoupSocket* sock, gconstpointer buffer, gsize len, gsize* nwrote, GCancellable* cancellable, GError ** error);
// ::SoupSocketIOStatus soup_socket_write (::SoupSocket* sock, const guint8* buffer, gsize len, gsize* nwrote, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Soup::SocketIOStatus write (guint8 * buffer, gsize len, gsize & nwrote, Gio::Cancellable cancellable);
GI_INLINE_DECL Soup::SocketIOStatus write (guint8 * buffer, gsize len, gsize & nwrote);
GI_INLINE_DECL Soup::SocketIOStatus write (guint8 * buffer, gsize len, gsize & nwrote, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Soup::SocketIOStatus write (guint8 * buffer, gsize len, gsize & nwrote, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> write (guint8 * buffer, gsize len, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> write (guint8 * buffer, gsize len);
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> write (guint8 * buffer, gsize len, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Soup::SocketIOStatus, gsize> write (guint8 * buffer, gsize len, GLib::Error * _error) noexcept;

gi::property_proxy<gpointer, base::SocketBase> property_async_context()
{ return gi::property_proxy<gpointer, base::SocketBase> (*this, "async-context"); }
const gi::property_proxy<gpointer, base::SocketBase> property_async_context() const
{ return gi::property_proxy<gpointer, base::SocketBase> (*this, "async-context"); }

gi::property_proxy<gint, base::SocketBase> property_fd()
{ return gi::property_proxy<gint, base::SocketBase> (*this, "fd"); }
const gi::property_proxy<gint, base::SocketBase> property_fd() const
{ return gi::property_proxy<gint, base::SocketBase> (*this, "fd"); }

gi::property_proxy_write<Gio::Socket, base::SocketBase> property_gsocket()
{ return gi::property_proxy_write<Gio::Socket, base::SocketBase> (*this, "gsocket"); }

gi::property_proxy_write<Gio::IOStream, base::SocketBase> property_iostream()
{ return gi::property_proxy_write<Gio::IOStream, base::SocketBase> (*this, "iostream"); }

gi::property_proxy<bool, base::SocketBase> property_ipv6_only()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ipv6-only"); }
const gi::property_proxy<bool, base::SocketBase> property_ipv6_only() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ipv6-only"); }

gi::property_proxy<bool, base::SocketBase> property_is_server()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "is-server"); }
const gi::property_proxy<bool, base::SocketBase> property_is_server() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "is-server"); }

gi::property_proxy<Soup::Address, base::SocketBase> property_local_address()
{ return gi::property_proxy<Soup::Address, base::SocketBase> (*this, "local-address"); }
const gi::property_proxy<Soup::Address, base::SocketBase> property_local_address() const
{ return gi::property_proxy<Soup::Address, base::SocketBase> (*this, "local-address"); }

gi::property_proxy<bool, base::SocketBase> property_non_blocking()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "non-blocking"); }
const gi::property_proxy<bool, base::SocketBase> property_non_blocking() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "non-blocking"); }

gi::property_proxy<Soup::Address, base::SocketBase> property_remote_address()
{ return gi::property_proxy<Soup::Address, base::SocketBase> (*this, "remote-address"); }
const gi::property_proxy<Soup::Address, base::SocketBase> property_remote_address() const
{ return gi::property_proxy<Soup::Address, base::SocketBase> (*this, "remote-address"); }

gi::property_proxy<gpointer, base::SocketBase> property_ssl_creds()
{ return gi::property_proxy<gpointer, base::SocketBase> (*this, "ssl-creds"); }
const gi::property_proxy<gpointer, base::SocketBase> property_ssl_creds() const
{ return gi::property_proxy<gpointer, base::SocketBase> (*this, "ssl-creds"); }

gi::property_proxy<bool, base::SocketBase> property_ssl_fallback()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ssl-fallback"); }
const gi::property_proxy<bool, base::SocketBase> property_ssl_fallback() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ssl-fallback"); }

gi::property_proxy<bool, base::SocketBase> property_ssl_strict()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ssl-strict"); }
const gi::property_proxy<bool, base::SocketBase> property_ssl_strict() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "ssl-strict"); }

gi::property_proxy<guint, base::SocketBase> property_timeout()
{ return gi::property_proxy<guint, base::SocketBase> (*this, "timeout"); }
const gi::property_proxy<guint, base::SocketBase> property_timeout() const
{ return gi::property_proxy<guint, base::SocketBase> (*this, "timeout"); }

gi::property_proxy<Gio::TlsCertificate, base::SocketBase> property_tls_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::SocketBase> (*this, "tls-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::SocketBase> property_tls_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::SocketBase> (*this, "tls-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::SocketBase> property_tls_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketBase> (*this, "tls-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::SocketBase> property_tls_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::SocketBase> (*this, "tls-errors"); }

gi::property_proxy<bool, base::SocketBase> property_trusted_certificate()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "trusted-certificate"); }
const gi::property_proxy<bool, base::SocketBase> property_trusted_certificate() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "trusted-certificate"); }

gi::property_proxy<bool, base::SocketBase> property_use_thread_context()
{ return gi::property_proxy<bool, base::SocketBase> (*this, "use-thread-context"); }
const gi::property_proxy<bool, base::SocketBase> property_use_thread_context() const
{ return gi::property_proxy<bool, base::SocketBase> (*this, "use-thread-context"); }

// signal disconnected
gi::signal_proxy<void(Soup::Socket)> signal_disconnected()
{ return gi::signal_proxy<void(Soup::Socket)> (*this, "disconnected"); }

// signal event
gi::signal_proxy<void(Soup::Socket, Gio::SocketClientEvent event, Gio::IOStream connection)> signal_event()
{ return gi::signal_proxy<void(Soup::Socket, Gio::SocketClientEvent event, Gio::IOStream connection)> (*this, "event"); }

// signal new-connection
gi::signal_proxy<void(Soup::Socket, Soup::Socket new_)> signal_new_connection()
{ return gi::signal_proxy<void(Soup::Socket, Soup::Socket new_)> (*this, "new-connection"); }

// signal readable
gi::signal_proxy<void(Soup::Socket)> signal_readable()
{ return gi::signal_proxy<void(Soup::Socket)> (*this, "readable"); }

// signal writable
gi::signal_proxy<void(Soup::Socket)> signal_writable()
{ return gi::signal_proxy<void(Soup::Socket)> (*this, "writable"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/socket_extra_def.hpp>)
#include <soup/socket_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/socket_extra.hpp>)
#include <soup/socket_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Socket : public GI_SOUP_SOCKET_BASE
{ typedef GI_SOUP_SOCKET_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupSocket>
{ typedef Soup::Socket type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class SocketClassDef
{
typedef SocketClassDef self;
public:
typedef Soup::Socket instance_type;
typedef ::SoupSocketClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Socket::disconnected (SoupSocket* sock);
// void Socket::disconnected (::SoupSocket* sock);
virtual void disconnected_ () noexcept = 0;

// void Socket::new_connection (SoupSocket* listener, SoupSocket* new_sock);
// void Socket::new_connection (::SoupSocket* listener, ::SoupSocket* new_sock);
virtual void new_connection_ (Soup::Socket new_sock) noexcept = 0;

// void Socket::readable (SoupSocket* sock);
// void Socket::readable (::SoupSocket* sock);
virtual void readable_ () noexcept = 0;

// void Socket::writable (SoupSocket* sock);
// void Socket::writable (::SoupSocket* sock);
virtual void writable_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SocketClass: public detail::ClassTemplate<Soup::impl::internal::SocketClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef SocketClass self;
typedef detail::ClassTemplate<Soup::impl::internal::SocketClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// void Socket::disconnected (SoupSocket* sock);
// void Socket::disconnected (::SoupSocket* sock);
GI_INLINE_DECL void disconnected_ () noexcept override;

// void Socket::new_connection (SoupSocket* listener, SoupSocket* new_sock);
// void Socket::new_connection (::SoupSocket* listener, ::SoupSocket* new_sock);
GI_INLINE_DECL void new_connection_ (Soup::Socket new_sock) noexcept override;

// void Socket::readable (SoupSocket* sock);
// void Socket::readable (::SoupSocket* sock);
GI_INLINE_DECL void readable_ () noexcept override;

// void Socket::writable (SoupSocket* sock);
// void Socket::writable (::SoupSocket* sock);
GI_INLINE_DECL void writable_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SocketImpl = detail::ObjectImpl<Socket, internal::SocketClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
