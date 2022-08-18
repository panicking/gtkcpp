// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCONNECTION_HPP_
#define _GI_GIO_DTLSCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class DatagramBased;
class TlsCertificate;
class TlsDatabase;
class TlsInteraction;

class DtlsConnection;

namespace base {


#define GI_GIO_DTLSCONNECTION_BASE base::DtlsConnectionBase
class DtlsConnectionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GDtlsConnection BaseObjectType;

DtlsConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dtls_connection_get_type(); } 

// gboolean g_dtls_connection_close (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_close (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool close (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close ();
GI_INLINE_DECL bool close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close (GLib::Error * _error) noexcept;

// void g_dtls_connection_close_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_close_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_close_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_close_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_dtls_connection_emit_accept_certificate (GDtlsConnection* conn, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean g_dtls_connection_emit_accept_certificate (::GDtlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept;

// GTlsCertificate* g_dtls_connection_get_certificate (GDtlsConnection* conn);
// ::GTlsCertificate* g_dtls_connection_get_certificate (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificate get_certificate () noexcept;

// gboolean g_dtls_connection_get_channel_binding_data (GDtlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean g_dtls_connection_get_channel_binding_data (::GDtlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray** data, GError ** error);
// SKIP; inconsistent out data pointer depth (1 vs 2)

// gchar* g_dtls_connection_get_ciphersuite_name (GDtlsConnection* conn);
// char* g_dtls_connection_get_ciphersuite_name (::GDtlsConnection* conn);
GI_INLINE_DECL std::string get_ciphersuite_name () noexcept;

// GTlsDatabase* g_dtls_connection_get_database (GDtlsConnection* conn);
// ::GTlsDatabase* g_dtls_connection_get_database (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsDatabase get_database () noexcept;

// GTlsInteraction* g_dtls_connection_get_interaction (GDtlsConnection* conn);
// ::GTlsInteraction* g_dtls_connection_get_interaction (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsInteraction get_interaction () noexcept;

// const gchar* g_dtls_connection_get_negotiated_protocol (GDtlsConnection* conn);
// const char* g_dtls_connection_get_negotiated_protocol (::GDtlsConnection* conn);
GI_INLINE_DECL std::string get_negotiated_protocol () noexcept;

// GTlsCertificate* g_dtls_connection_get_peer_certificate (GDtlsConnection* conn);
// ::GTlsCertificate* g_dtls_connection_get_peer_certificate (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificate get_peer_certificate () noexcept;

// GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (GDtlsConnection* conn);
// ::GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificateFlags get_peer_certificate_errors () noexcept;

// GTlsProtocolVersion g_dtls_connection_get_protocol_version (GDtlsConnection* conn);
// ::GTlsProtocolVersion g_dtls_connection_get_protocol_version (::GDtlsConnection* conn);
GI_INLINE_DECL Gio::TlsProtocolVersion get_protocol_version () noexcept;

// GTlsRehandshakeMode g_dtls_connection_get_rehandshake_mode (GDtlsConnection* conn);
//  g_dtls_connection_get_rehandshake_mode (::GDtlsConnection* conn);
// IGNORE; deprecated

// gboolean g_dtls_connection_get_require_close_notify (GDtlsConnection* conn);
// gboolean g_dtls_connection_get_require_close_notify (::GDtlsConnection* conn);
GI_INLINE_DECL bool get_require_close_notify () noexcept;

// gboolean g_dtls_connection_handshake (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_handshake (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable);
GI_INLINE_DECL bool handshake ();
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool handshake (GLib::Error * _error) noexcept;

// void g_dtls_connection_handshake_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_handshake_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_handshake_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_handshake_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_dtls_connection_set_advertised_protocols (GDtlsConnection* conn, const gchar* const* protocols);
// void g_dtls_connection_set_advertised_protocols (::GDtlsConnection* conn, const char** protocols);
GI_INLINE_DECL void set_advertised_protocols (const std::vector<std::string> & protocols) noexcept;

// void g_dtls_connection_set_certificate (GDtlsConnection* conn, GTlsCertificate* certificate);
// void g_dtls_connection_set_certificate (::GDtlsConnection* conn, ::GTlsCertificate* certificate);
GI_INLINE_DECL void set_certificate (Gio::TlsCertificate certificate) noexcept;

// void g_dtls_connection_set_database (GDtlsConnection* conn, GTlsDatabase* database);
// void g_dtls_connection_set_database (::GDtlsConnection* conn, ::GTlsDatabase* database);
GI_INLINE_DECL void set_database (Gio::TlsDatabase database) noexcept;
GI_INLINE_DECL void set_database () noexcept;

// void g_dtls_connection_set_interaction (GDtlsConnection* conn, GTlsInteraction* interaction);
// void g_dtls_connection_set_interaction (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
GI_INLINE_DECL void set_interaction (Gio::TlsInteraction interaction) noexcept;
GI_INLINE_DECL void set_interaction () noexcept;

// void g_dtls_connection_set_rehandshake_mode (GDtlsConnection* conn, GTlsRehandshakeMode mode);
// void g_dtls_connection_set_rehandshake_mode (::GDtlsConnection* conn,  mode);
// IGNORE; deprecated

// void g_dtls_connection_set_require_close_notify (GDtlsConnection* conn, gboolean require_close_notify);
// void g_dtls_connection_set_require_close_notify (::GDtlsConnection* conn, gboolean require_close_notify);
GI_INLINE_DECL void set_require_close_notify (gboolean require_close_notify) noexcept;

// gboolean g_dtls_connection_shutdown (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_shutdown (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write);
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept;

// void g_dtls_connection_shutdown_async (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_shutdown_async (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dtls_connection_shutdown_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_shutdown_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool shutdown_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool shutdown_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> property_base_socket()
{ return gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> (*this, "base-socket"); }
const gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> property_base_socket() const
{ return gi::property_proxy<Gio::DatagramBased, base::DtlsConnectionBase> (*this, "base-socket"); }

gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "certificate"); }

gi::property_proxy<std::string, base::DtlsConnectionBase> property_ciphersuite_name()
{ return gi::property_proxy<std::string, base::DtlsConnectionBase> (*this, "ciphersuite-name"); }
const gi::property_proxy<std::string, base::DtlsConnectionBase> property_ciphersuite_name() const
{ return gi::property_proxy<std::string, base::DtlsConnectionBase> (*this, "ciphersuite-name"); }

gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> property_database()
{ return gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> (*this, "database"); }
const gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> property_database() const
{ return gi::property_proxy<Gio::TlsDatabase, base::DtlsConnectionBase> (*this, "database"); }

gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> property_interaction()
{ return gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> (*this, "interaction"); }
const gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> property_interaction() const
{ return gi::property_proxy<Gio::TlsInteraction, base::DtlsConnectionBase> (*this, "interaction"); }

gi::property_proxy<std::string, base::DtlsConnectionBase> property_negotiated_protocol()
{ return gi::property_proxy<std::string, base::DtlsConnectionBase> (*this, "negotiated-protocol"); }
const gi::property_proxy<std::string, base::DtlsConnectionBase> property_negotiated_protocol() const
{ return gi::property_proxy<std::string, base::DtlsConnectionBase> (*this, "negotiated-protocol"); }

gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_peer_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "peer-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> property_peer_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::DtlsConnectionBase> (*this, "peer-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> property_peer_certificate_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> (*this, "peer-certificate-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> property_peer_certificate_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::DtlsConnectionBase> (*this, "peer-certificate-errors"); }

gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> property_protocol_version()
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> (*this, "protocol-version"); }
const gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> property_protocol_version() const
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::DtlsConnectionBase> (*this, "protocol-version"); }

gi::property_proxy<bool, base::DtlsConnectionBase> property_require_close_notify()
{ return gi::property_proxy<bool, base::DtlsConnectionBase> (*this, "require-close-notify"); }
const gi::property_proxy<bool, base::DtlsConnectionBase> property_require_close_notify() const
{ return gi::property_proxy<bool, base::DtlsConnectionBase> (*this, "require-close-notify"); }

// signal accept-certificate
gi::signal_proxy<bool(Gio::DtlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> signal_accept_certificate()
{ return gi::signal_proxy<bool(Gio::DtlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> (*this, "accept-certificate"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_def.hpp>)
#include <gio/dtlsconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra.hpp>)
#include <gio/dtlsconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DtlsConnection : public GI_GIO_DTLSCONNECTION_BASE
{ typedef GI_GIO_DTLSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDtlsConnection>
{ typedef Gio::DtlsConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DtlsConnectionInterfaceDef
{
typedef DtlsConnectionInterfaceDef self;
public:
typedef Gio::DtlsConnection instance_type;
typedef ::GDtlsConnectionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
virtual bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept = 0;

// gboolean DtlsConnection::get_binding_data (GDtlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean DtlsConnection::get_binding_data (::GDtlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray* data, GError ** error);
// SKIP; callee GError not supported

// const gchar* DtlsConnection::get_negotiated_protocol (GDtlsConnection* conn);
// const char* DtlsConnection::get_negotiated_protocol (::GDtlsConnection* conn);
// SKIP; invalid callback return transfer none

// gboolean DtlsConnection::handshake (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean DtlsConnection::handshake (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::handshake_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void DtlsConnection::handshake_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean DtlsConnection::handshake_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean DtlsConnection::handshake_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::set_advertised_protocols (GDtlsConnection* conn, const gchar* const* protocols);
// void DtlsConnection::set_advertised_protocols (::GDtlsConnection* conn, const char** protocols);
// SKIP; virtual-method container parameter not supported

// gboolean DtlsConnection::shutdown (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable, GError ** error);
// gboolean DtlsConnection::shutdown (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::shutdown_async (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void DtlsConnection::shutdown_async (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean DtlsConnection::shutdown_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean DtlsConnection::shutdown_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

using DtlsConnectionImpl = detail::InterfaceImpl<DtlsConnectionInterfaceDef>;

class DtlsConnectionInterfaceClassImpl: public detail::InterfaceClassImpl<DtlsConnectionImpl>
{
typedef DtlsConnectionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<DtlsConnectionImpl> super;

protected:
using super::super;

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept override;

// gboolean DtlsConnection::get_binding_data (GDtlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean DtlsConnection::get_binding_data (::GDtlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray* data, GError ** error);
// SKIP; callee GError not supported

// const gchar* DtlsConnection::get_negotiated_protocol (GDtlsConnection* conn);
// const char* DtlsConnection::get_negotiated_protocol (::GDtlsConnection* conn);
// SKIP; invalid callback return transfer none

// gboolean DtlsConnection::handshake (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean DtlsConnection::handshake (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::handshake_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void DtlsConnection::handshake_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean DtlsConnection::handshake_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean DtlsConnection::handshake_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::set_advertised_protocols (GDtlsConnection* conn, const gchar* const* protocols);
// void DtlsConnection::set_advertised_protocols (::GDtlsConnection* conn, const char** protocols);
// SKIP; virtual-method container parameter not supported

// gboolean DtlsConnection::shutdown (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable, GError ** error);
// gboolean DtlsConnection::shutdown (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void DtlsConnection::shutdown_async (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void DtlsConnection::shutdown_async (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean DtlsConnection::shutdown_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean DtlsConnection::shutdown_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
