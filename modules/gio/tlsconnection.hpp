// AUTO-GENERATED

#ifndef _GI_GIO_TLSCONNECTION_HPP_
#define _GI_GIO_TLSCONNECTION_HPP_

#include "iostream.hpp"

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class IOStream;
class TlsCertificate;
class TlsDatabase;
class TlsInteraction;

class TlsConnection;

namespace base {


#define GI_GIO_TLSCONNECTION_BASE base::TlsConnectionBase
class TlsConnectionBase : public Gio::IOStream
{
typedef Gio::IOStream super_type;
public:
typedef ::GTlsConnection BaseObjectType;

TlsConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_tls_connection_get_type(); } 

// gboolean g_tls_connection_emit_accept_certificate (GTlsConnection* conn, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean g_tls_connection_emit_accept_certificate (::GTlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept;

// GTlsCertificate* g_tls_connection_get_certificate (GTlsConnection* conn);
// ::GTlsCertificate* g_tls_connection_get_certificate (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificate get_certificate () noexcept;

// gboolean g_tls_connection_get_channel_binding_data (GTlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean g_tls_connection_get_channel_binding_data (::GTlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray** data, GError ** error);
// SKIP; inconsistent out data pointer depth (1 vs 2)

// gchar* g_tls_connection_get_ciphersuite_name (GTlsConnection* conn);
// char* g_tls_connection_get_ciphersuite_name (::GTlsConnection* conn);
GI_INLINE_DECL std::string get_ciphersuite_name () noexcept;

// GTlsDatabase* g_tls_connection_get_database (GTlsConnection* conn);
// ::GTlsDatabase* g_tls_connection_get_database (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsDatabase get_database () noexcept;

// GTlsInteraction* g_tls_connection_get_interaction (GTlsConnection* conn);
// ::GTlsInteraction* g_tls_connection_get_interaction (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsInteraction get_interaction () noexcept;

// const gchar* g_tls_connection_get_negotiated_protocol (GTlsConnection* conn);
// const char* g_tls_connection_get_negotiated_protocol (::GTlsConnection* conn);
GI_INLINE_DECL std::string get_negotiated_protocol () noexcept;

// GTlsCertificate* g_tls_connection_get_peer_certificate (GTlsConnection* conn);
// ::GTlsCertificate* g_tls_connection_get_peer_certificate (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificate get_peer_certificate () noexcept;

// GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (GTlsConnection* conn);
// ::GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsCertificateFlags get_peer_certificate_errors () noexcept;

// GTlsProtocolVersion g_tls_connection_get_protocol_version (GTlsConnection* conn);
// ::GTlsProtocolVersion g_tls_connection_get_protocol_version (::GTlsConnection* conn);
GI_INLINE_DECL Gio::TlsProtocolVersion get_protocol_version () noexcept;

// GTlsRehandshakeMode g_tls_connection_get_rehandshake_mode (GTlsConnection* conn);
//  g_tls_connection_get_rehandshake_mode (::GTlsConnection* conn);
// IGNORE; deprecated

// gboolean g_tls_connection_get_require_close_notify (GTlsConnection* conn);
// gboolean g_tls_connection_get_require_close_notify (::GTlsConnection* conn);
GI_INLINE_DECL bool get_require_close_notify () noexcept;

// gboolean g_tls_connection_get_use_system_certdb (GTlsConnection* conn);
// gboolean g_tls_connection_get_use_system_certdb (::GTlsConnection* conn);
// IGNORE; deprecated

// gboolean g_tls_connection_handshake (GTlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_tls_connection_handshake (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable);
GI_INLINE_DECL bool handshake ();
GI_INLINE_DECL bool handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool handshake (GLib::Error * _error) noexcept;

// void g_tls_connection_handshake_async (GTlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_connection_handshake_async (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_tls_connection_handshake_finish (GTlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_tls_connection_handshake_finish (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_tls_connection_set_advertised_protocols (GTlsConnection* conn, const gchar* const* protocols);
// void g_tls_connection_set_advertised_protocols (::GTlsConnection* conn, const char** protocols);
GI_INLINE_DECL void set_advertised_protocols (const std::vector<std::string> & protocols) noexcept;

// void g_tls_connection_set_certificate (GTlsConnection* conn, GTlsCertificate* certificate);
// void g_tls_connection_set_certificate (::GTlsConnection* conn, ::GTlsCertificate* certificate);
GI_INLINE_DECL void set_certificate (Gio::TlsCertificate certificate) noexcept;

// void g_tls_connection_set_database (GTlsConnection* conn, GTlsDatabase* database);
// void g_tls_connection_set_database (::GTlsConnection* conn, ::GTlsDatabase* database);
GI_INLINE_DECL void set_database (Gio::TlsDatabase database) noexcept;
GI_INLINE_DECL void set_database () noexcept;

// void g_tls_connection_set_interaction (GTlsConnection* conn, GTlsInteraction* interaction);
// void g_tls_connection_set_interaction (::GTlsConnection* conn, ::GTlsInteraction* interaction);
GI_INLINE_DECL void set_interaction (Gio::TlsInteraction interaction) noexcept;
GI_INLINE_DECL void set_interaction () noexcept;

// void g_tls_connection_set_rehandshake_mode (GTlsConnection* conn, GTlsRehandshakeMode mode);
// void g_tls_connection_set_rehandshake_mode (::GTlsConnection* conn,  mode);
// IGNORE; deprecated

// void g_tls_connection_set_require_close_notify (GTlsConnection* conn, gboolean require_close_notify);
// void g_tls_connection_set_require_close_notify (::GTlsConnection* conn, gboolean require_close_notify);
GI_INLINE_DECL void set_require_close_notify (gboolean require_close_notify) noexcept;

// void g_tls_connection_set_use_system_certdb (GTlsConnection* conn, gboolean use_system_certdb);
// void g_tls_connection_set_use_system_certdb (::GTlsConnection* conn, gboolean use_system_certdb);
// IGNORE; deprecated

gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> property_base_io_stream()
{ return gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> (*this, "base-io-stream"); }
const gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> property_base_io_stream() const
{ return gi::property_proxy<Gio::IOStream, base::TlsConnectionBase> (*this, "base-io-stream"); }

gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "certificate"); }

gi::property_proxy<std::string, base::TlsConnectionBase> property_ciphersuite_name()
{ return gi::property_proxy<std::string, base::TlsConnectionBase> (*this, "ciphersuite-name"); }
const gi::property_proxy<std::string, base::TlsConnectionBase> property_ciphersuite_name() const
{ return gi::property_proxy<std::string, base::TlsConnectionBase> (*this, "ciphersuite-name"); }

gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> property_database()
{ return gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> (*this, "database"); }
const gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> property_database() const
{ return gi::property_proxy<Gio::TlsDatabase, base::TlsConnectionBase> (*this, "database"); }

gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> property_interaction()
{ return gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> (*this, "interaction"); }
const gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> property_interaction() const
{ return gi::property_proxy<Gio::TlsInteraction, base::TlsConnectionBase> (*this, "interaction"); }

gi::property_proxy<std::string, base::TlsConnectionBase> property_negotiated_protocol()
{ return gi::property_proxy<std::string, base::TlsConnectionBase> (*this, "negotiated-protocol"); }
const gi::property_proxy<std::string, base::TlsConnectionBase> property_negotiated_protocol() const
{ return gi::property_proxy<std::string, base::TlsConnectionBase> (*this, "negotiated-protocol"); }

gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_peer_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "peer-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> property_peer_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::TlsConnectionBase> (*this, "peer-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> property_peer_certificate_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> (*this, "peer-certificate-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> property_peer_certificate_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::TlsConnectionBase> (*this, "peer-certificate-errors"); }

gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> property_protocol_version()
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> (*this, "protocol-version"); }
const gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> property_protocol_version() const
{ return gi::property_proxy<Gio::TlsProtocolVersion, base::TlsConnectionBase> (*this, "protocol-version"); }

gi::property_proxy<bool, base::TlsConnectionBase> property_require_close_notify()
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "require-close-notify"); }
const gi::property_proxy<bool, base::TlsConnectionBase> property_require_close_notify() const
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "require-close-notify"); }

gi::property_proxy<bool, base::TlsConnectionBase> property_use_system_certdb()
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "use-system-certdb"); }
const gi::property_proxy<bool, base::TlsConnectionBase> property_use_system_certdb() const
{ return gi::property_proxy<bool, base::TlsConnectionBase> (*this, "use-system-certdb"); }

// signal accept-certificate
gi::signal_proxy<bool(Gio::TlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> signal_accept_certificate()
{ return gi::signal_proxy<bool(Gio::TlsConnection, Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors)> (*this, "accept-certificate"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra_def.hpp>)
#include <gio/tlsconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra.hpp>)
#include <gio/tlsconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class TlsConnection : public GI_GIO_TLSCONNECTION_BASE
{ typedef GI_GIO_TLSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTlsConnection>
{ typedef Gio::TlsConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class TlsConnectionClassDef
{
typedef TlsConnectionClassDef self;
public:
typedef Gio::TlsConnection instance_type;
typedef ::GTlsConnectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean TlsConnection::accept_certificate (GTlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean TlsConnection::accept_certificate (::GTlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
virtual bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept = 0;

// gboolean TlsConnection::get_binding_data (GTlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean TlsConnection::get_binding_data (::GTlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray* data, GError ** error);
// SKIP; callee GError not supported

// const gchar* TlsConnection::get_negotiated_protocol (GTlsConnection* conn);
// const char* TlsConnection::get_negotiated_protocol (::GTlsConnection* conn);
// SKIP; invalid callback return transfer none

// gboolean TlsConnection::handshake (GTlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean TlsConnection::handshake (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsConnection::handshake_async (GTlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsConnection::handshake_async (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean TlsConnection::handshake_finish (GTlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean TlsConnection::handshake_finish (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class TlsConnectionClass: public detail::ClassTemplate<Gio::impl::internal::TlsConnectionClassDef, Gio::impl::internal::IOStreamClass>
{
typedef TlsConnectionClass self;
typedef detail::ClassTemplate<Gio::impl::internal::TlsConnectionClassDef, Gio::impl::internal::IOStreamClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean TlsConnection::accept_certificate (GTlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean TlsConnection::accept_certificate (::GTlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
GI_INLINE_DECL bool accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept override;

// gboolean TlsConnection::get_binding_data (GTlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean TlsConnection::get_binding_data (::GTlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray* data, GError ** error);
// SKIP; callee GError not supported

// const gchar* TlsConnection::get_negotiated_protocol (GTlsConnection* conn);
// const char* TlsConnection::get_negotiated_protocol (::GTlsConnection* conn);
// SKIP; invalid callback return transfer none

// gboolean TlsConnection::handshake (GTlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean TlsConnection::handshake (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsConnection::handshake_async (GTlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsConnection::handshake_async (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean TlsConnection::handshake_finish (GTlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean TlsConnection::handshake_finish (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using TlsConnectionImpl = detail::ObjectImpl<TlsConnection, internal::TlsConnectionClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
