// AUTO-GENERATED

#ifndef _GI_GIO_TLSCLIENTCONNECTION_HPP_
#define _GI_GIO_TLSCLIENTCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class IOStream;
class SocketConnectable;

class TlsClientConnection;

namespace base {


#define GI_GIO_TLSCLIENTCONNECTION_BASE base::TlsClientConnectionBase
class TlsClientConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GTlsClientConnection BaseObjectType;

TlsClientConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_client_connection_get_type(); } 

// GIOStream* g_tls_client_connection_new (GIOStream* base_io_stream, GSocketConnectable* server_identity, GError ** error);
// ::GTlsClientConnection* g_tls_client_connection_new (::GIOStream* base_io_stream, ::GSocketConnectable* server_identity, GError ** error);
static GI_INLINE_DECL Gio::TlsClientConnection new_ (Gio::IOStream base_io_stream, Gio::SocketConnectable server_identity);
static GI_INLINE_DECL Gio::TlsClientConnection new_ (Gio::IOStream base_io_stream);
static GI_INLINE_DECL Gio::TlsClientConnection new_ (Gio::IOStream base_io_stream, Gio::SocketConnectable server_identity, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::TlsClientConnection new_ (Gio::IOStream base_io_stream, GLib::Error * _error) noexcept;

// void g_tls_client_connection_copy_session_state (GTlsClientConnection* conn, GTlsClientConnection* source);
// void g_tls_client_connection_copy_session_state (::GTlsClientConnection* conn, ::GTlsClientConnection* source);
GI_INLINE_DECL void copy_session_state (Gio::TlsClientConnection source) noexcept;

//  g_tls_client_connection_get_accepted_cas (GTlsClientConnection* conn);
//  g_tls_client_connection_get_accepted_cas (::GTlsClientConnection* conn);
// SKIP; inconsistent list element info

// GSocketConnectable* g_tls_client_connection_get_server_identity (GTlsClientConnection* conn);
// ::GSocketConnectable* g_tls_client_connection_get_server_identity (::GTlsClientConnection* conn);
GI_INLINE_DECL Gio::SocketConnectable get_server_identity () noexcept;

// gboolean g_tls_client_connection_get_use_ssl3 (GTlsClientConnection* conn);
// gboolean g_tls_client_connection_get_use_ssl3 (::GTlsClientConnection* conn);
// IGNORE; deprecated

// GTlsCertificateFlags g_tls_client_connection_get_validation_flags (GTlsClientConnection* conn);
// ::GTlsCertificateFlags g_tls_client_connection_get_validation_flags (::GTlsClientConnection* conn);
// IGNORE; deprecated

// void g_tls_client_connection_set_server_identity (GTlsClientConnection* conn, GSocketConnectable* identity);
// void g_tls_client_connection_set_server_identity (::GTlsClientConnection* conn, ::GSocketConnectable* identity);
GI_INLINE_DECL void set_server_identity (Gio::SocketConnectable identity) noexcept;

// void g_tls_client_connection_set_use_ssl3 (GTlsClientConnection* conn, gboolean use_ssl3);
// void g_tls_client_connection_set_use_ssl3 (::GTlsClientConnection* conn, gboolean use_ssl3);
// IGNORE; deprecated

// void g_tls_client_connection_set_validation_flags (GTlsClientConnection* conn, GTlsCertificateFlags flags);
// void g_tls_client_connection_set_validation_flags (::GTlsClientConnection* conn, ::GTlsCertificateFlags flags);
// IGNORE; deprecated

gi::property_proxy<Gio::SocketConnectable, base::TlsClientConnectionBase> property_server_identity()
{ return gi::property_proxy<Gio::SocketConnectable, base::TlsClientConnectionBase> (*this, "server-identity"); }
const gi::property_proxy<Gio::SocketConnectable, base::TlsClientConnectionBase> property_server_identity() const
{ return gi::property_proxy<Gio::SocketConnectable, base::TlsClientConnectionBase> (*this, "server-identity"); }

gi::property_proxy<bool, base::TlsClientConnectionBase> property_use_ssl3()
{ return gi::property_proxy<bool, base::TlsClientConnectionBase> (*this, "use-ssl3"); }
const gi::property_proxy<bool, base::TlsClientConnectionBase> property_use_ssl3() const
{ return gi::property_proxy<bool, base::TlsClientConnectionBase> (*this, "use-ssl3"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::TlsClientConnectionBase> property_validation_flags()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsClientConnectionBase> (*this, "validation-flags"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::TlsClientConnectionBase> property_validation_flags() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsClientConnectionBase> (*this, "validation-flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsclientconnection_extra_def.hpp>)
#include <gio/tlsclientconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsclientconnection_extra.hpp>)
#include <gio/tlsclientconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsClientConnection : public GI_GIO_TLSCLIENTCONNECTION_BASE
{ typedef GI_GIO_TLSCLIENTCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsClientConnection>
{ typedef Gio::TlsClientConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsClientConnectionInterfaceDef
{
typedef TlsClientConnectionInterfaceDef self;
public:
typedef Gio::TlsClientConnection instance_type;
typedef ::GTlsClientConnectionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void TlsClientConnection::copy_session_state (GTlsClientConnection* conn, GTlsClientConnection* source);
// void TlsClientConnection::copy_session_state (::GTlsClientConnection* conn, ::GTlsClientConnection* source);
virtual void copy_session_state_ (Gio::TlsClientConnection source) noexcept = 0;


};

using TlsClientConnectionImpl = detail::InterfaceImpl<TlsClientConnectionInterfaceDef>;

class TlsClientConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<TlsClientConnectionImpl>
{
typedef TlsClientConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TlsClientConnectionImpl> super;

protected:
using super::super;

// void TlsClientConnection::copy_session_state (GTlsClientConnection* conn, GTlsClientConnection* source);
// void TlsClientConnection::copy_session_state (::GTlsClientConnection* conn, ::GTlsClientConnection* source);
GI_INLINE_DECL void copy_session_state_ (Gio::TlsClientConnection source) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
