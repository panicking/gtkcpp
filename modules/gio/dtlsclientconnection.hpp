// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCLIENTCONNECTION_HPP_
#define _GI_GIO_DTLSCLIENTCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DatagramBased;
class SocketConnectable;

class DtlsClientConnection;

namespace base {


#define GI_GIO_DTLSCLIENTCONNECTION_BASE base::DtlsClientConnectionBase
class DtlsClientConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDtlsClientConnection BaseObjectType;

DtlsClientConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dtls_client_connection_get_type(); } 

// GDatagramBased* g_dtls_client_connection_new (GDatagramBased* base_socket, GSocketConnectable* server_identity, GError ** error);
// ::GDtlsClientConnection* g_dtls_client_connection_new (::GDatagramBased* base_socket, ::GSocketConnectable* server_identity, GError ** error);
static GI_INLINE_DECL Gio::DtlsClientConnection new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity);
static GI_INLINE_DECL Gio::DtlsClientConnection new_ (Gio::DatagramBased base_socket);
static GI_INLINE_DECL Gio::DtlsClientConnection new_ (Gio::DatagramBased base_socket, Gio::SocketConnectable server_identity, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DtlsClientConnection new_ (Gio::DatagramBased base_socket, GLib::Error * _error) noexcept;

//  g_dtls_client_connection_get_accepted_cas (GDtlsClientConnection* conn);
//  g_dtls_client_connection_get_accepted_cas (::GDtlsClientConnection* conn);
// SKIP; inconsistent list element info

// GSocketConnectable* g_dtls_client_connection_get_server_identity (GDtlsClientConnection* conn);
// ::GSocketConnectable* g_dtls_client_connection_get_server_identity (::GDtlsClientConnection* conn);
GI_INLINE_DECL Gio::SocketConnectable get_server_identity () noexcept;

// GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (GDtlsClientConnection* conn);
// ::GTlsCertificateFlags g_dtls_client_connection_get_validation_flags (::GDtlsClientConnection* conn);
GI_INLINE_DECL Gio::TlsCertificateFlags get_validation_flags () noexcept;

// void g_dtls_client_connection_set_server_identity (GDtlsClientConnection* conn, GSocketConnectable* identity);
// void g_dtls_client_connection_set_server_identity (::GDtlsClientConnection* conn, ::GSocketConnectable* identity);
GI_INLINE_DECL void set_server_identity (Gio::SocketConnectable identity) noexcept;

// void g_dtls_client_connection_set_validation_flags (GDtlsClientConnection* conn, GTlsCertificateFlags flags);
// void g_dtls_client_connection_set_validation_flags (::GDtlsClientConnection* conn, ::GTlsCertificateFlags flags);
GI_INLINE_DECL void set_validation_flags (Gio::TlsCertificateFlags flags) noexcept;

gi::property_proxy<Gio::SocketConnectable, base::DtlsClientConnectionBase> property_server_identity()
{ return gi::property_proxy<Gio::SocketConnectable, base::DtlsClientConnectionBase> (*this, "server-identity"); }
const gi::property_proxy<Gio::SocketConnectable, base::DtlsClientConnectionBase> property_server_identity() const
{ return gi::property_proxy<Gio::SocketConnectable, base::DtlsClientConnectionBase> (*this, "server-identity"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsClientConnectionBase> property_validation_flags()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsClientConnectionBase> (*this, "validation-flags"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsClientConnectionBase> property_validation_flags() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsClientConnectionBase> (*this, "validation-flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra_def.hpp>)
#include <gio/dtlsclientconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsclientconnection_extra.hpp>)
#include <gio/dtlsclientconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DtlsClientConnection : public GI_GIO_DTLSCLIENTCONNECTION_BASE
{ typedef GI_GIO_DTLSCLIENTCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDtlsClientConnection>
{ typedef Gio::DtlsClientConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DtlsClientConnectionInterfaceDef
{
typedef DtlsClientConnectionInterfaceDef self;
public:
typedef Gio::DtlsClientConnection instance_type;
typedef ::GDtlsClientConnectionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using DtlsClientConnectionImpl = detail::InterfaceImpl<DtlsClientConnectionInterfaceDef>;

class DtlsClientConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<DtlsClientConnectionImpl>
{
typedef DtlsClientConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DtlsClientConnectionImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
