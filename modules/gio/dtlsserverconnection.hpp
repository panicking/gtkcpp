// AUTO-GENERATED

#ifndef _GI_GIO_DTLSSERVERCONNECTION_HPP_
#define _GI_GIO_DTLSSERVERCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DatagramBased;
class TlsCertificate;

class DtlsServerConnection;

namespace base {


#define GI_GIO_DTLSSERVERCONNECTION_BASE base::DtlsServerConnectionBase
class DtlsServerConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDtlsServerConnection BaseObjectType;

DtlsServerConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dtls_server_connection_get_type(); } 

// GDatagramBased* g_dtls_server_connection_new (GDatagramBased* base_socket, GTlsCertificate* certificate, GError ** error);
// ::GDtlsServerConnection* g_dtls_server_connection_new (::GDatagramBased* base_socket, ::GTlsCertificate* certificate, GError ** error);
static GI_INLINE_DECL Gio::DtlsServerConnection new_ (Gio::DatagramBased base_socket, Gio::TlsCertificate certificate);
static GI_INLINE_DECL Gio::DtlsServerConnection new_ (Gio::DatagramBased base_socket);
static GI_INLINE_DECL Gio::DtlsServerConnection new_ (Gio::DatagramBased base_socket, Gio::TlsCertificate certificate, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DtlsServerConnection new_ (Gio::DatagramBased base_socket, GLib::Error * _error) noexcept;

gi::property_proxy<Gio::TlsAuthenticationMode, base::DtlsServerConnectionBase> property_authentication_mode()
{ return gi::property_proxy<Gio::TlsAuthenticationMode, base::DtlsServerConnectionBase> (*this, "authentication-mode"); }
const gi::property_proxy<Gio::TlsAuthenticationMode, base::DtlsServerConnectionBase> property_authentication_mode() const
{ return gi::property_proxy<Gio::TlsAuthenticationMode, base::DtlsServerConnectionBase> (*this, "authentication-mode"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsserverconnection_extra_def.hpp>)
#include <gio/dtlsserverconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsserverconnection_extra.hpp>)
#include <gio/dtlsserverconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DtlsServerConnection : public GI_GIO_DTLSSERVERCONNECTION_BASE
{ typedef GI_GIO_DTLSSERVERCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDtlsServerConnection>
{ typedef Gio::DtlsServerConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DtlsServerConnectionInterfaceDef
{
typedef DtlsServerConnectionInterfaceDef self;
public:
typedef Gio::DtlsServerConnection instance_type;
typedef ::GDtlsServerConnectionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using DtlsServerConnectionImpl = detail::InterfaceImpl<DtlsServerConnectionInterfaceDef>;

class DtlsServerConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<DtlsServerConnectionImpl>
{
typedef DtlsServerConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DtlsServerConnectionImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
