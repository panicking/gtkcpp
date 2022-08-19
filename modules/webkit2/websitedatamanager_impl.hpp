// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATAMANAGER_IMPL_HPP_
#define _GI_WEBKIT2_WEBSITEDATAMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitWebsiteDataManager* webkit_website_data_manager_new (const gchar* first_option_name);
// ::WebKitWebsiteDataManager* webkit_website_data_manager_new (const char* first_option_name);
// IGNORE; not introspectable, varargs not supported

// WebKitWebsiteDataManager* webkit_website_data_manager_new_ephemeral ();
// ::WebKitWebsiteDataManager* webkit_website_data_manager_new_ephemeral ();
WebKit2::WebsiteDataManager base::WebsiteDataManagerBase::new_ephemeral () noexcept
{
  typedef ::WebKitWebsiteDataManager* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_new_ephemeral;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_website_data_manager_set_memory_pressure_settings (WebKitMemoryPressureSettings* settings);
// void webkit_website_data_manager_set_memory_pressure_settings (::WebKitMemoryPressureSettings* settings);
void base::WebsiteDataManagerBase::set_memory_pressure_settings (WebKit2::MemoryPressureSettings settings) noexcept
{
  typedef void (*call_wrap_t) (::WebKitMemoryPressureSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_memory_pressure_settings;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitMemoryPressureSettings*) (settings_to_c));
}

// void webkit_website_data_manager_clear (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GTimeSpan timespan, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_clear (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GTimeSpan timespan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebsiteDataManagerBase::clear (WebKit2::WebsiteDataTypes types, ::GTimeSpan timespan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GTimeSpan timespan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_clear;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto timespan_to_c = timespan;
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GTimeSpan) (timespan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebsiteDataManagerBase::clear (WebKit2::WebsiteDataTypes types, ::GTimeSpan timespan, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GTimeSpan timespan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_clear;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto timespan_to_c = timespan;
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GTimeSpan) (timespan_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_website_data_manager_clear_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// gboolean webkit_website_data_manager_clear_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
bool base::WebsiteDataManagerBase::clear_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_clear_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WebsiteDataManagerBase::clear_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_clear_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_website_data_manager_fetch (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_fetch (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebsiteDataManagerBase::fetch (WebKit2::WebsiteDataTypes types, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_fetch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebsiteDataManagerBase::fetch (WebKit2::WebsiteDataTypes types, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_fetch;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* webkit_website_data_manager_fetch_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_website_data_manager_fetch_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
std::vector<WebKit2::WebsiteData> base::WebsiteDataManagerBase::fetch_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_fetch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<WebKit2::WebsiteData> (_temp_ret, gi::transfer_full);
}
std::vector<WebKit2::WebsiteData> base::WebsiteDataManagerBase::fetch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_fetch_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<WebKit2::WebsiteData> (_temp_ret, gi::transfer_full);
}

// const gchar* webkit_website_data_manager_get_base_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_base_cache_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_base_cache_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_base_cache_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_base_data_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_base_data_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_base_data_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_base_data_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitCookieManager* webkit_website_data_manager_get_cookie_manager (WebKitWebsiteDataManager* manager);
// ::WebKitCookieManager* webkit_website_data_manager_get_cookie_manager (::WebKitWebsiteDataManager* manager);
WebKit2::CookieManager base::WebsiteDataManagerBase::get_cookie_manager () noexcept
{
  typedef ::WebKitCookieManager* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_cookie_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_disk_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_disk_cache_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_disk_cache_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_disk_cache_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_dom_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_dom_cache_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_dom_cache_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_dom_cache_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_hsts_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_hsts_cache_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_hsts_cache_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_hsts_cache_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_indexeddb_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_indexeddb_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_indexeddb_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_indexeddb_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_itp_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_itp_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_itp_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_website_data_manager_get_itp_enabled (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_get_itp_enabled (::WebKitWebsiteDataManager* manager);
bool base::WebsiteDataManagerBase::get_itp_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_enabled;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return _temp_ret;
}

// void webkit_website_data_manager_get_itp_summary (WebKitWebsiteDataManager* manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_get_itp_summary (::WebKitWebsiteDataManager* manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebsiteDataManagerBase::get_itp_summary (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_summary;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebsiteDataManagerBase::get_itp_summary (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_summary;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* webkit_website_data_manager_get_itp_summary_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_website_data_manager_get_itp_summary_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
std::vector<WebKit2::ITPThirdParty> base::WebsiteDataManagerBase::get_itp_summary_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_summary_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<WebKit2::ITPThirdParty> (_temp_ret, gi::transfer_full);
}
std::vector<WebKit2::ITPThirdParty> base::WebsiteDataManagerBase::get_itp_summary_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_itp_summary_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<WebKit2::ITPThirdParty> (_temp_ret, gi::transfer_full);
}

// const gchar* webkit_website_data_manager_get_local_storage_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_local_storage_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_local_storage_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_local_storage_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_website_data_manager_get_offline_application_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_offline_application_cache_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_offline_application_cache_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_offline_application_cache_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_website_data_manager_get_persistent_credential_storage_enabled (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_get_persistent_credential_storage_enabled (::WebKitWebsiteDataManager* manager);
bool base::WebsiteDataManagerBase::get_persistent_credential_storage_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_persistent_credential_storage_enabled;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_website_data_manager_get_service_worker_registrations_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_service_worker_registrations_directory (::WebKitWebsiteDataManager* manager);
std::string base::WebsiteDataManagerBase::get_service_worker_registrations_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_service_worker_registrations_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitTLSErrorsPolicy webkit_website_data_manager_get_tls_errors_policy (WebKitWebsiteDataManager* manager);
// ::WebKitTLSErrorsPolicy webkit_website_data_manager_get_tls_errors_policy (::WebKitWebsiteDataManager* manager);
WebKit2::TLSErrorsPolicy base::WebsiteDataManagerBase::get_tls_errors_policy () noexcept
{
  typedef ::WebKitTLSErrorsPolicy (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_get_tls_errors_policy;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* webkit_website_data_manager_get_websql_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_websql_directory (::WebKitWebsiteDataManager* manager);
// IGNORE; deprecated

// gboolean webkit_website_data_manager_is_ephemeral (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_is_ephemeral (::WebKitWebsiteDataManager* manager);
bool base::WebsiteDataManagerBase::is_ephemeral () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_is_ephemeral;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()));
  return _temp_ret;
}

// void webkit_website_data_manager_remove (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GList* website_data, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_remove (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GList* website_data, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebsiteDataManagerBase::remove (WebKit2::WebsiteDataTypes types, const std::vector<WebKit2::WebsiteData> & website_data, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GList* website_data, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_remove;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto website_data_i = detail::make_list_unwrap_range<::GList> (website_data);
  auto website_data_w = unwrap (website_data_i, gi::transfer_none, direction_in);
  auto website_data_to_c = website_data_w.gobj_(false);
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GList*) (website_data_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebsiteDataManagerBase::remove (WebKit2::WebsiteDataTypes types, const std::vector<WebKit2::WebsiteData> & website_data, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GList* website_data, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_remove;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto website_data_i = detail::make_list_unwrap_range<::GList> (website_data);
  auto website_data_w = unwrap (website_data_i, gi::transfer_none, direction_in);
  auto website_data_to_c = website_data_w.gobj_(false);
  auto types_to_c = gi::unwrap (types);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c), (::GList*) (website_data_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_website_data_manager_remove_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// gboolean webkit_website_data_manager_remove_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
bool base::WebsiteDataManagerBase::remove_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_remove_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WebsiteDataManagerBase::remove_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_remove_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_website_data_manager_set_itp_enabled (WebKitWebsiteDataManager* manager, gboolean enabled);
// void webkit_website_data_manager_set_itp_enabled (::WebKitWebsiteDataManager* manager, gboolean enabled);
void base::WebsiteDataManagerBase::set_itp_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_itp_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_website_data_manager_set_network_proxy_settings (WebKitWebsiteDataManager* manager, WebKitNetworkProxyMode proxy_mode, WebKitNetworkProxySettings* proxy_settings);
// void webkit_website_data_manager_set_network_proxy_settings (::WebKitWebsiteDataManager* manager, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
void base::WebsiteDataManagerBase::set_network_proxy_settings (WebKit2::NetworkProxyMode proxy_mode, WebKit2::NetworkProxySettings proxy_settings) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_network_proxy_settings;
  auto proxy_settings_to_c = gi::unwrap (proxy_settings, gi::transfer_none, gi::direction_in);
  auto proxy_mode_to_c = gi::unwrap (proxy_mode);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitNetworkProxyMode) (proxy_mode_to_c), (::WebKitNetworkProxySettings*) (proxy_settings_to_c));
}
void base::WebsiteDataManagerBase::set_network_proxy_settings (WebKit2::NetworkProxyMode proxy_mode) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_network_proxy_settings;
  auto proxy_settings_to_c = nullptr;
  auto proxy_mode_to_c = gi::unwrap (proxy_mode);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitNetworkProxyMode) (proxy_mode_to_c), (::WebKitNetworkProxySettings*) (proxy_settings_to_c));
}

// void webkit_website_data_manager_set_persistent_credential_storage_enabled (WebKitWebsiteDataManager* manager, gboolean enabled);
// void webkit_website_data_manager_set_persistent_credential_storage_enabled (::WebKitWebsiteDataManager* manager, gboolean enabled);
void base::WebsiteDataManagerBase::set_persistent_credential_storage_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_persistent_credential_storage_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_website_data_manager_set_tls_errors_policy (WebKitWebsiteDataManager* manager, WebKitTLSErrorsPolicy policy);
// void webkit_website_data_manager_set_tls_errors_policy (::WebKitWebsiteDataManager* manager, ::WebKitTLSErrorsPolicy policy);
void base::WebsiteDataManagerBase::set_tls_errors_policy (WebKit2::TLSErrorsPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebsiteDataManager* manager, ::WebKitTLSErrorsPolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_manager_set_tls_errors_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::WebKitWebsiteDataManager*) (gobj_()), (::WebKitTLSErrorsPolicy) (policy_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedatamanager_extra_def_impl.hpp>)
#include <webkit2/websitedatamanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedatamanager_extra_impl.hpp>)
#include <webkit2/websitedatamanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebsiteDataManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebsiteDataManagerClass *methods = (::WebKitWebsiteDataManagerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
