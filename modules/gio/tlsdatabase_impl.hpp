// AUTO-GENERATED

#ifndef _GI_GIO_TLSDATABASE_IMPL_HPP_
#define _GI_GIO_TLSDATABASE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gchar* g_tls_database_create_certificate_handle (GTlsDatabase* self, GTlsCertificate* certificate);
// char* g_tls_database_create_certificate_handle (::GTlsDatabase* self, ::GTlsCertificate* certificate);
std::string base::TlsDatabaseBase::create_certificate_handle (Gio::TlsCertificate certificate) noexcept
{
  typedef char* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_create_certificate_handle;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTlsCertificate* g_tls_database_lookup_certificate_for_handle (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_for_handle (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const std::string & handle, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle (const std::string & handle, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_tls_database_lookup_certificate_for_handle_async (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificate_for_handle_async (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsDatabaseBase::lookup_certificate_for_handle_async (const std::string & handle, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificate_for_handle_async (const std::string & handle, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto handle_to_c = gi::unwrap (handle, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (const char*) (handle_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* g_tls_database_lookup_certificate_for_handle_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_for_handle_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_for_handle_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_for_handle_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTlsCertificate* g_tls_database_lookup_certificate_issuer (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_issuer (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_tls_database_lookup_certificate_issuer_async (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificate_issuer_async (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsDatabaseBase::lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificate_issuer_async (Gio::TlsCertificate certificate, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificate* g_tls_database_lookup_certificate_issuer_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* g_tls_database_lookup_certificate_issuer_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::TlsCertificate base::TlsDatabaseBase::lookup_certificate_issuer_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificate* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificate_issuer_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* g_tls_database_lookup_certificates_issued_by (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* g_tls_database_lookup_certificates_issued_by (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}

// void g_tls_database_lookup_certificates_issued_by_async (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_lookup_certificates_issued_by_async (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsDatabaseBase::lookup_certificates_issued_by_async (GLib::ByteArray issuer_raw_dn, Gio::TlsInteraction interaction, Gio::TlsDatabaseLookupFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::lookup_certificates_issued_by_async (GLib::ByteArray issuer_raw_dn, Gio::TlsDatabaseLookupFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto issuer_raw_dn_to_c = gi::unwrap (issuer_raw_dn, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GByteArray*) (issuer_raw_dn_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseLookupFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_tls_database_lookup_certificates_issued_by_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GList* g_tls_database_lookup_certificates_issued_by_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::TlsCertificate> base::TlsDatabaseBase::lookup_certificates_issued_by_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_lookup_certificates_issued_by_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::TlsCertificate> (_temp_ret, gi::transfer_full);
}

// GTlsCertificateFlags g_tls_database_verify_chain (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none, gi::direction_in);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none, gi::direction_in);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void g_tls_database_verify_chain_async (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_tls_database_verify_chain_async (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::TlsDatabaseBase::verify_chain_async (Gio::TlsCertificate chain, const std::string & purpose, Gio::SocketConnectable identity, Gio::TlsInteraction interaction, Gio::TlsDatabaseVerifyFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = gi::unwrap (interaction, gi::transfer_none, gi::direction_in);
  auto identity_to_c = gi::unwrap (identity, gi::transfer_none, gi::direction_in);
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::TlsDatabaseBase::verify_chain_async (Gio::TlsCertificate chain, const std::string & purpose, Gio::TlsDatabaseVerifyFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto interaction_to_c = nullptr;
  auto identity_to_c = nullptr;
  auto purpose_to_c = gi::unwrap (purpose, gi::transfer_none, gi::direction_in);
  auto chain_to_c = gi::unwrap (chain, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (chain_to_c), (const char*) (purpose_to_c), (::GSocketConnectable*) (identity_to_c), (::GTlsInteraction*) (interaction_to_c), (::GTlsDatabaseVerifyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GTlsCertificateFlags g_tls_database_verify_chain_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificateFlags g_tls_database_verify_chain_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain_finish (Gio::AsyncResult result)
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
Gio::TlsCertificateFlags base::TlsDatabaseBase::verify_chain_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GTlsCertificateFlags (*call_wrap_t) (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tls_database_verify_chain_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_def_impl.hpp>)
#include <gio/tlsdatabase_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/tlsdatabase_extra_impl.hpp>)
#include <gio/tlsdatabase_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void TlsDatabaseClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GTlsDatabaseClass *methods = (::GTlsDatabaseClass *) class_struct;
  (void) methods;

  methods->create_certificate_handle = (decltype (methods->create_certificate_handle)) detail::method_wrapper<self, std::string (*) (Gio::TlsCertificate certificate), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::create_certificate_handle_>;
}

// gchar* TlsDatabase::create_certificate_handle (GTlsDatabase* self, GTlsCertificate* certificate);
// char* TlsDatabase::create_certificate_handle (::GTlsDatabase* self, ::GTlsCertificate* certificate);
std::string TlsDatabaseClass::create_certificate_handle_ (Gio::TlsCertificate certificate) noexcept
{
  if (!get_struct_()->create_certificate_handle) return std::string{};
  typedef char* (*call_wrap_t) (::GTlsDatabase* self, ::GTlsCertificate* certificate);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_certificate_handle;
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GTlsDatabase*) (gobj_()), (::GTlsCertificate*) (certificate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_for_handle_async (GTlsDatabase* self, const gchar* handle, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_for_handle_async (::GTlsDatabase* self, const char* handle, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_for_handle_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::lookup_certificate_issuer_async (GTlsDatabase* self, GTlsCertificate* certificate, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificate_issuer_async (::GTlsDatabase* self, ::GTlsCertificate* certificate, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificate* TlsDatabase::lookup_certificate_issuer_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GList* TlsDatabase::lookup_certificates_issued_by (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; container return not supported, callee GError not supported

// void TlsDatabase::lookup_certificates_issued_by_async (GTlsDatabase* self, GByteArray* issuer_raw_dn, GTlsInteraction* interaction, GTlsDatabaseLookupFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::lookup_certificates_issued_by_async (::GTlsDatabase* self, ::GByteArray* issuer_raw_dn, ::GTlsInteraction* interaction, ::GTlsDatabaseLookupFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* TlsDatabase::lookup_certificates_issued_by_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GList* TlsDatabase::lookup_certificates_issued_by_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

// GTlsCertificateFlags TlsDatabase::verify_chain (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void TlsDatabase::verify_chain_async (GTlsDatabase* self, GTlsCertificate* chain, const gchar* purpose, GSocketConnectable* identity, GTlsInteraction* interaction, GTlsDatabaseVerifyFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void TlsDatabase::verify_chain_async (::GTlsDatabase* self, ::GTlsCertificate* chain, const char* purpose, ::GSocketConnectable* identity, ::GTlsInteraction* interaction, ::GTlsDatabaseVerifyFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GTlsCertificateFlags TlsDatabase::verify_chain_finish (GTlsDatabase* self, GAsyncResult* result, GError ** error);
// ::GTlsCertificateFlags TlsDatabase::verify_chain_finish (::GTlsDatabase* self, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
