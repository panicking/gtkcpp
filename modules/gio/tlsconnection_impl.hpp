// AUTO-GENERATED

#ifndef _GI_GIO_TLSCONNECTION_IMPL_HPP_
#define _GI_GIO_TLSCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_tls_connection_emit_accept_certificate (GTlsConnection* conn, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean g_tls_connection_emit_accept_certificate (::GTlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
bool base::TlsConnectionBase::emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_emit_accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

// GTlsCertificate* g_tls_connection_get_certificate (GTlsConnection* conn);
// ::GTlsCertificate* g_tls_connection_get_certificate (::GTlsConnection* conn);
Gio::TlsCertificate base::TlsConnectionBase::get_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_certificate;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_tls_connection_get_channel_binding_data (GTlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean g_tls_connection_get_channel_binding_data (::GTlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray** data, GError ** error);
// SKIP; inconsistent out data pointer depth (1 vs 2)

// gchar* g_tls_connection_get_ciphersuite_name (GTlsConnection* conn);
// char* g_tls_connection_get_ciphersuite_name (::GTlsConnection* conn);
std::string base::TlsConnectionBase::get_ciphersuite_name () noexcept
{
  typedef char* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_ciphersuite_name;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTlsDatabase* g_tls_connection_get_database (GTlsConnection* conn);
// ::GTlsDatabase* g_tls_connection_get_database (::GTlsConnection* conn);
Gio::TlsDatabase base::TlsConnectionBase::get_database () noexcept
{
  typedef ::GTlsDatabase* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_database;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsInteraction* g_tls_connection_get_interaction (GTlsConnection* conn);
// ::GTlsInteraction* g_tls_connection_get_interaction (::GTlsConnection* conn);
Gio::TlsInteraction base::TlsConnectionBase::get_interaction () noexcept
{
  typedef ::GTlsInteraction* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_interaction;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_tls_connection_get_negotiated_protocol (GTlsConnection* conn);
// const char* g_tls_connection_get_negotiated_protocol (::GTlsConnection* conn);
std::string base::TlsConnectionBase::get_negotiated_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_negotiated_protocol;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsCertificate* g_tls_connection_get_peer_certificate (GTlsConnection* conn);
// ::GTlsCertificate* g_tls_connection_get_peer_certificate (::GTlsConnection* conn);
Gio::TlsCertificate base::TlsConnectionBase::get_peer_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_peer_certificate;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (GTlsConnection* conn);
// ::GTlsCertificateFlags g_tls_connection_get_peer_certificate_errors (::GTlsConnection* conn);
Gio::TlsCertificateFlags base::TlsConnectionBase::get_peer_certificate_errors () noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_peer_certificate_errors;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsProtocolVersion g_tls_connection_get_protocol_version (GTlsConnection* conn);
// ::GTlsProtocolVersion g_tls_connection_get_protocol_version (::GTlsConnection* conn);
Gio::TlsProtocolVersion base::TlsConnectionBase::get_protocol_version () noexcept
{
  typedef ::GTlsProtocolVersion (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_protocol_version;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsRehandshakeMode g_tls_connection_get_rehandshake_mode (GTlsConnection* conn);
//  g_tls_connection_get_rehandshake_mode (::GTlsConnection* conn);
// IGNORE; deprecated

// gboolean g_tls_connection_get_require_close_notify (GTlsConnection* conn);
// gboolean g_tls_connection_get_require_close_notify (::GTlsConnection* conn);
bool base::TlsConnectionBase::get_require_close_notify () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_get_require_close_notify;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()));
  return _temp_ret;
}

// gboolean g_tls_connection_get_use_system_certdb (GTlsConnection* conn);
// gboolean g_tls_connection_get_use_system_certdb (::GTlsConnection* conn);
// IGNORE; deprecated

// gboolean g_tls_connection_handshake (GTlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_tls_connection_handshake (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
bool base::TlsConnectionBase::handshake (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TlsConnectionBase::handshake ()
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TlsConnectionBase::handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::TlsConnectionBase::handshake (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_tls_connection_handshake_async (GTlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_connection_handshake_async (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsConnectionBase::handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GTlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsConnectionBase::handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GTlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_tls_connection_handshake_finish (GTlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_tls_connection_handshake_finish (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
bool base::TlsConnectionBase::handshake_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TlsConnectionBase::handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_tls_connection_set_advertised_protocols (GTlsConnection* conn, const gchar* const* protocols);
// void g_tls_connection_set_advertised_protocols (::GTlsConnection* conn, const char** protocols);
void base::TlsConnectionBase::set_advertised_protocols (const std::vector<std::string> & protocols) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, const char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_advertised_protocols;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  call_wrap_v ((::GTlsConnection*) (gobj_()), (const char**) (protocols_to_c));
}

// void g_tls_connection_set_certificate (GTlsConnection* conn, GTlsCertificate* certificate);
// void g_tls_connection_set_certificate (::GTlsConnection* conn, ::GTlsCertificate* certificate);
void base::TlsConnectionBase::set_certificate (Gio::TlsCertificate certificate) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_certificate;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
}

// void g_tls_connection_set_database (GTlsConnection* conn, GTlsDatabase* database);
// void g_tls_connection_set_database (::GTlsConnection* conn, ::GTlsDatabase* database);
void base::TlsConnectionBase::set_database (Gio::TlsDatabase database) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_database;
  auto database_to_c = gi::unwrap (database, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}
void base::TlsConnectionBase::set_database () noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_database;
  auto database_to_c = nullptr;
  call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}

// void g_tls_connection_set_interaction (GTlsConnection* conn, GTlsInteraction* interaction);
// void g_tls_connection_set_interaction (::GTlsConnection* conn, ::GTlsInteraction* interaction);
void base::TlsConnectionBase::set_interaction (Gio::TlsInteraction interaction) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_interaction;
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}
void base::TlsConnectionBase::set_interaction () noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_interaction;
  auto interaction_to_c = nullptr;
  call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}

// void g_tls_connection_set_rehandshake_mode (GTlsConnection* conn, GTlsRehandshakeMode mode);
// void g_tls_connection_set_rehandshake_mode (::GTlsConnection* conn,  mode);
// IGNORE; deprecated

// void g_tls_connection_set_require_close_notify (GTlsConnection* conn, gboolean require_close_notify);
// void g_tls_connection_set_require_close_notify (::GTlsConnection* conn, gboolean require_close_notify);
void base::TlsConnectionBase::set_require_close_notify (gboolean require_close_notify) noexcept
{
  typedef void (*call_wrap_t) (::GTlsConnection* conn, gboolean require_close_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_connection_set_require_close_notify;
  auto require_close_notify_to_c = require_close_notify;
  call_wrap_v ((::GTlsConnection*) (gobj_()), (gboolean) (require_close_notify_to_c));
}

// void g_tls_connection_set_use_system_certdb (GTlsConnection* conn, gboolean use_system_certdb);
// void g_tls_connection_set_use_system_certdb (::GTlsConnection* conn, gboolean use_system_certdb);
// IGNORE; deprecated



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra_def_impl.hpp>)
#include <gio/tlsconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsconnection_extra_impl.hpp>)
#include <gio/tlsconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsConnectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTlsConnectionClass *methods = (::GTlsConnectionClass *) class_struct;
  (void) methods;

  methods->accept_certificate = (decltype (methods->accept_certificate)) detail::method_wrapper<self, bool (*) (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::accept_certificate_>;
}

// gboolean TlsConnection::accept_certificate (GTlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean TlsConnection::accept_certificate (::GTlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
bool TlsConnectionClass::accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  if (!get_struct_()->accept_certificate) return bool{};
  typedef gboolean (*call_wrap_t) (::GTlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

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

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
