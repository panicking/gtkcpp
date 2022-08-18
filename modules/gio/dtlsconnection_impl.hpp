// AUTO-GENERATED

#ifndef _GI_GIO_DTLSCONNECTION_IMPL_HPP_
#define _GI_GIO_DTLSCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_dtls_connection_close (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_close (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
bool base::DtlsConnectionBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dtls_connection_close_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_close_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DtlsConnectionBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_close_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_close_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
bool base::DtlsConnectionBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dtls_connection_emit_accept_certificate (GDtlsConnection* conn, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean g_dtls_connection_emit_accept_certificate (::GDtlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
bool base::DtlsConnectionBase::emit_accept_certificate (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_emit_accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

// GTlsCertificate* g_dtls_connection_get_certificate (GDtlsConnection* conn);
// ::GTlsCertificate* g_dtls_connection_get_certificate (::GDtlsConnection* conn);
Gio::TlsCertificate base::DtlsConnectionBase::get_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_certificate;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_dtls_connection_get_channel_binding_data (GDtlsConnection* conn, GTlsChannelBindingType type, GByteArray* data, GError ** error);
// gboolean g_dtls_connection_get_channel_binding_data (::GDtlsConnection* conn, ::GTlsChannelBindingType type, ::GByteArray** data, GError ** error);
// SKIP; inconsistent out data pointer depth (1 vs 2)

// gchar* g_dtls_connection_get_ciphersuite_name (GDtlsConnection* conn);
// char* g_dtls_connection_get_ciphersuite_name (::GDtlsConnection* conn);
std::string base::DtlsConnectionBase::get_ciphersuite_name () noexcept
{
  typedef char* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_ciphersuite_name;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTlsDatabase* g_dtls_connection_get_database (GDtlsConnection* conn);
// ::GTlsDatabase* g_dtls_connection_get_database (::GDtlsConnection* conn);
Gio::TlsDatabase base::DtlsConnectionBase::get_database () noexcept
{
  typedef ::GTlsDatabase* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_database;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsInteraction* g_dtls_connection_get_interaction (GDtlsConnection* conn);
// ::GTlsInteraction* g_dtls_connection_get_interaction (::GDtlsConnection* conn);
Gio::TlsInteraction base::DtlsConnectionBase::get_interaction () noexcept
{
  typedef ::GTlsInteraction* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_interaction;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dtls_connection_get_negotiated_protocol (GDtlsConnection* conn);
// const char* g_dtls_connection_get_negotiated_protocol (::GDtlsConnection* conn);
std::string base::DtlsConnectionBase::get_negotiated_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_negotiated_protocol;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsCertificate* g_dtls_connection_get_peer_certificate (GDtlsConnection* conn);
// ::GTlsCertificate* g_dtls_connection_get_peer_certificate (::GDtlsConnection* conn);
Gio::TlsCertificate base::DtlsConnectionBase::get_peer_certificate () noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_peer_certificate;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (GDtlsConnection* conn);
// ::GTlsCertificateFlags g_dtls_connection_get_peer_certificate_errors (::GDtlsConnection* conn);
Gio::TlsCertificateFlags base::DtlsConnectionBase::get_peer_certificate_errors () noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_peer_certificate_errors;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsProtocolVersion g_dtls_connection_get_protocol_version (GDtlsConnection* conn);
// ::GTlsProtocolVersion g_dtls_connection_get_protocol_version (::GDtlsConnection* conn);
Gio::TlsProtocolVersion base::DtlsConnectionBase::get_protocol_version () noexcept
{
  typedef ::GTlsProtocolVersion (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_protocol_version;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GTlsRehandshakeMode g_dtls_connection_get_rehandshake_mode (GDtlsConnection* conn);
//  g_dtls_connection_get_rehandshake_mode (::GDtlsConnection* conn);
// IGNORE; deprecated

// gboolean g_dtls_connection_get_require_close_notify (GDtlsConnection* conn);
// gboolean g_dtls_connection_get_require_close_notify (::GDtlsConnection* conn);
bool base::DtlsConnectionBase::get_require_close_notify () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_get_require_close_notify;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()));
  return _temp_ret;
}

// gboolean g_dtls_connection_handshake (GDtlsConnection* conn, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_handshake (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
bool base::DtlsConnectionBase::handshake (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake ()
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dtls_connection_handshake_async (GDtlsConnection* conn, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_handshake_async (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DtlsConnectionBase::handshake_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::handshake_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_handshake_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_handshake_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
bool base::DtlsConnectionBase::handshake_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::handshake_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_handshake_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dtls_connection_set_advertised_protocols (GDtlsConnection* conn, const gchar* const* protocols);
// void g_dtls_connection_set_advertised_protocols (::GDtlsConnection* conn, const char** protocols);
void base::DtlsConnectionBase::set_advertised_protocols (const std::vector<std::string> & protocols) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, const char** protocols);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_advertised_protocols;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (const char**) (protocols_to_c));
}

// void g_dtls_connection_set_certificate (GDtlsConnection* conn, GTlsCertificate* certificate);
// void g_dtls_connection_set_certificate (::GDtlsConnection* conn, ::GTlsCertificate* certificate);
void base::DtlsConnectionBase::set_certificate (Gio::TlsCertificate certificate) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_certificate;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
}

// void g_dtls_connection_set_database (GDtlsConnection* conn, GTlsDatabase* database);
// void g_dtls_connection_set_database (::GDtlsConnection* conn, ::GTlsDatabase* database);
void base::DtlsConnectionBase::set_database (Gio::TlsDatabase database) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_database;
  auto database_to_c = gi::unwrap (database, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}
void base::DtlsConnectionBase::set_database () noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_database;
  auto database_to_c = nullptr;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsDatabase*) (database_to_c));
}

// void g_dtls_connection_set_interaction (GDtlsConnection* conn, GTlsInteraction* interaction);
// void g_dtls_connection_set_interaction (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
void base::DtlsConnectionBase::set_interaction (Gio::TlsInteraction interaction) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_interaction;
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}
void base::DtlsConnectionBase::set_interaction () noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, ::GTlsInteraction* interaction);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_interaction;
  auto interaction_to_c = nullptr;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsInteraction*) (interaction_to_c));
}

// void g_dtls_connection_set_rehandshake_mode (GDtlsConnection* conn, GTlsRehandshakeMode mode);
// void g_dtls_connection_set_rehandshake_mode (::GDtlsConnection* conn,  mode);
// IGNORE; deprecated

// void g_dtls_connection_set_require_close_notify (GDtlsConnection* conn, gboolean require_close_notify);
// void g_dtls_connection_set_require_close_notify (::GDtlsConnection* conn, gboolean require_close_notify);
void base::DtlsConnectionBase::set_require_close_notify (gboolean require_close_notify) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean require_close_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_set_require_close_notify;
  auto require_close_notify_to_c = require_close_notify;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (require_close_notify_to_c));
}

// gboolean g_dtls_connection_shutdown (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, GCancellable* cancellable, GError ** error);
// gboolean g_dtls_connection_shutdown (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown;
  auto cancellable_to_c = nullptr;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown (gboolean shutdown_read, gboolean shutdown_write, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown;
  auto cancellable_to_c = nullptr;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_dtls_connection_shutdown_async (GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dtls_connection_shutdown_async (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::DtlsConnectionBase::shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::DtlsConnectionBase::shutdown_async (gboolean shutdown_read, gboolean shutdown_write, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GDtlsConnection* conn, gboolean shutdown_read, gboolean shutdown_write, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto shutdown_write_to_c = shutdown_write;
  auto shutdown_read_to_c = shutdown_read;
  call_wrap_v ((::GDtlsConnection*) (gobj_()), (gboolean) (shutdown_read_to_c), (gboolean) (shutdown_write_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_dtls_connection_shutdown_finish (GDtlsConnection* conn, GAsyncResult* result, GError ** error);
// gboolean g_dtls_connection_shutdown_finish (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
bool base::DtlsConnectionBase::shutdown_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DtlsConnectionBase::shutdown_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* conn, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dtls_connection_shutdown_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_def_impl.hpp>)
#include <gio/dtlsconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dtlsconnection_extra_impl.hpp>)
#include <gio/dtlsconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DtlsConnectionInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GDtlsConnectionInterface *methods = (::GDtlsConnectionInterface *) interface_struct;
  (void) methods;

  methods->accept_certificate = (decltype (methods->accept_certificate)) detail::method_wrapper<self, bool (*) (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::accept_certificate_>;
}

// gboolean DtlsConnection::accept_certificate (GDtlsConnection* connection, GTlsCertificate* peer_cert, GTlsCertificateFlags errors);
// gboolean DtlsConnection::accept_certificate (::GDtlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
bool DtlsConnectionInterfaceClassImpl::accept_certificate_ (Gio::TlsCertificate peer_cert, Gio::TlsCertificateFlags errors) noexcept
{
  if (!get_struct_()->accept_certificate) return bool{};
  typedef gboolean (*call_wrap_t) (::GDtlsConnection* connection, ::GTlsCertificate* peer_cert, ::GTlsCertificateFlags errors);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accept_certificate;
  auto errors_to_c = gi::unwrap (errors);
  auto peer_cert_to_c = gi::unwrap (peer_cert, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDtlsConnection*) (gobj_()), (::GTlsCertificate*) (peer_cert_to_c), (::GTlsCertificateFlags) (errors_to_c));
  return _temp_ret;
}

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

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
