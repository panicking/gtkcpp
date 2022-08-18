// AUTO-GENERATED

#ifndef _GI_GIO_TLSSERVERCONNECTION_HPP_
#define _GI_GIO_TLSSERVERCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class IOStream;
class TlsCertificate;

class TlsServerConnection;

namespace base {


#define GI_GIO_TLSSERVERCONNECTION_BASE base::TlsServerConnectionBase
class TlsServerConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GTlsServerConnection BaseObjectType;

TlsServerConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_server_connection_get_type(); } 

// GIOStream* g_tls_server_connection_new (GIOStream* base_io_stream, GTlsCertificate* certificate, GError ** error);
// ::GTlsServerConnection* g_tls_server_connection_new (::GIOStream* base_io_stream, ::GTlsCertificate* certificate, GError ** error);
static GI_INLINE_DECL Gio::TlsServerConnection new_ (Gio::IOStream base_io_stream, Gio::TlsCertificate certificate);
static GI_INLINE_DECL Gio::TlsServerConnection new_ (Gio::IOStream base_io_stream);
static GI_INLINE_DECL Gio::TlsServerConnection new_ (Gio::IOStream base_io_stream, Gio::TlsCertificate certificate, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::TlsServerConnection new_ (Gio::IOStream base_io_stream, GLib::Error * _error) noexcept;

gi::property_proxy<Gio::TlsAuthenticationMode, base::TlsServerConnectionBase> property_authentication_mode()
{ return gi::property_proxy<Gio::TlsAuthenticationMode, base::TlsServerConnectionBase> (*this, "authentication-mode"); }
const gi::property_proxy<Gio::TlsAuthenticationMode, base::TlsServerConnectionBase> property_authentication_mode() const
{ return gi::property_proxy<Gio::TlsAuthenticationMode, base::TlsServerConnectionBase> (*this, "authentication-mode"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsserverconnection_extra_def.hpp>)
#include <gio/tlsserverconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsserverconnection_extra.hpp>)
#include <gio/tlsserverconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsServerConnection : public GI_GIO_TLSSERVERCONNECTION_BASE
{ typedef GI_GIO_TLSSERVERCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsServerConnection>
{ typedef Gio::TlsServerConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsServerConnectionInterfaceDef
{
typedef TlsServerConnectionInterfaceDef self;
public:
typedef Gio::TlsServerConnection instance_type;
typedef ::GTlsServerConnectionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using TlsServerConnectionImpl = detail::InterfaceImpl<TlsServerConnectionInterfaceDef>;

class TlsServerConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<TlsServerConnectionImpl>
{
typedef TlsServerConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<TlsServerConnectionImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
