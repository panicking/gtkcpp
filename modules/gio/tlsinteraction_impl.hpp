// AUTO-GENERATED

#ifndef _GI_GIO_TLSINTERACTION_IMPL_HPP_
#define _GI_GIO_TLSINTERACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GTlsInteractionResult g_tls_interaction_ask_password (GTlsInteraction* interaction, GTlsPassword* password, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void g_tls_interaction_ask_password_async (GTlsInteraction* interaction, GTlsPassword* password, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_interaction_ask_password_async (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsInteractionBase::ask_password_async (Gio::TlsPassword password, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsInteractionBase::ask_password_async (Gio::TlsPassword password, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult g_tls_interaction_ask_password_finish (GTlsInteraction* interaction, GAsyncResult* result, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_ask_password_finish (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password_finish (Gio::AsyncResult result)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::ask_password_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_ask_password_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_invoke_ask_password (GTlsInteraction* interaction, GTlsPassword* password, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_ask_password (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_ask_password (Gio::TlsPassword password, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_ask_password;
  auto cancellable_to_c = nullptr;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsPassword*) (password_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_invoke_request_certificate (GTlsInteraction* interaction, GTlsConnection* connection, GTlsCertificateRequestFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_invoke_request_certificate (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::invoke_request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_invoke_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// GTlsInteractionResult g_tls_interaction_request_certificate (GTlsInteraction* interaction, GTlsConnection* connection, GTlsCertificateRequestFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void g_tls_interaction_request_certificate_async (GTlsInteraction* interaction, GTlsConnection* connection, GTlsCertificateRequestFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_interaction_request_certificate_async (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsInteractionBase::request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsInteractionBase::request_certificate_async (Gio::TlsConnection connection, Gio::TlsCertificateRequestFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GTlsConnection*) (connection_to_c), (::GTlsCertificateRequestFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsInteractionResult g_tls_interaction_request_certificate_finish (GTlsInteraction* interaction, GAsyncResult* result, GError ** error);
// ::GTlsInteractionResult g_tls_interaction_request_certificate_finish (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate_finish (Gio::AsyncResult result)
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsInteractionResult base::TlsInteractionBase::request_certificate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsInteractionResult (*call_wrap_t) (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_interaction_request_certificate_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsInteraction*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra_def_impl.hpp>)
#include <gio/tlsinteraction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsinteraction_extra_impl.hpp>)
#include <gio/tlsinteraction_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsInteractionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTlsInteractionClass *methods = (::GTlsInteractionClass *) class_struct;
  (void) methods;

}

// GTlsInteractionResult TlsInteraction::ask_password (GTlsInteraction* interaction, GTlsPassword* password, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsInteraction::ask_password_async (GTlsInteraction* interaction, GTlsPassword* password, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsInteraction::ask_password_async (::GTlsInteraction* interaction, ::GTlsPassword* password, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsInteractionResult TlsInteraction::ask_password_finish (GTlsInteraction* interaction, GAsyncResult* result, GError ** error);
// ::GTlsInteractionResult TlsInteraction::ask_password_finish (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GTlsInteractionResult TlsInteraction::request_certificate (GTlsInteraction* interaction, GTlsConnection* connection, GTlsCertificateRequestFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsInteraction::request_certificate_async (GTlsInteraction* interaction, GTlsConnection* connection, GTlsCertificateRequestFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsInteraction::request_certificate_async (::GTlsInteraction* interaction, ::GTlsConnection* connection, ::GTlsCertificateRequestFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsInteractionResult TlsInteraction::request_certificate_finish (GTlsInteraction* interaction, GAsyncResult* result, GError ** error);
// ::GTlsInteractionResult TlsInteraction::request_certificate_finish (::GTlsInteraction* interaction, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
