// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBCONTEXT_IMPL_HPP_
#define _GI_WEBKIT2_WEBCONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitWebContext* webkit_web_context_new ();
// ::WebKitWebContext* webkit_web_context_new ();
WebKit2::WebContext base::WebContextBase::new_ () noexcept
{
  typedef ::WebKitWebContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitWebContext* webkit_web_context_new_ephemeral ();
// ::WebKitWebContext* webkit_web_context_new_ephemeral ();
WebKit2::WebContext base::WebContextBase::new_ephemeral () noexcept
{
  typedef ::WebKitWebContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_new_ephemeral;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitWebContext* webkit_web_context_new_with_website_data_manager (WebKitWebsiteDataManager* manager);
// ::WebKitWebContext* webkit_web_context_new_with_website_data_manager (::WebKitWebsiteDataManager* manager);
WebKit2::WebContext base::WebContextBase::new_with_website_data_manager (WebKit2::WebsiteDataManager manager) noexcept
{
  typedef ::WebKitWebContext* (*call_wrap_t) (::WebKitWebsiteDataManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_new_with_website_data_manager;
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteDataManager*) (manager_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitWebContext* webkit_web_context_get_default ();
// ::WebKitWebContext* webkit_web_context_get_default ();
WebKit2::WebContext base::WebContextBase::get_default () noexcept
{
  typedef ::WebKitWebContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_context_add_path_to_sandbox (WebKitWebContext* context, const char* path, gboolean read_only);
// void webkit_web_context_add_path_to_sandbox (::WebKitWebContext* context, const char* path, gboolean read_only);
void base::WebContextBase::add_path_to_sandbox (const std::string & path, gboolean read_only) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* path, gboolean read_only);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_add_path_to_sandbox;
  auto read_only_to_c = read_only;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (path_to_c), (gboolean) (read_only_to_c));
}

// void webkit_web_context_allow_tls_certificate_for_host (WebKitWebContext* context, GTlsCertificate* certificate, const gchar* host);
// void webkit_web_context_allow_tls_certificate_for_host (::WebKitWebContext* context, ::GTlsCertificate* certificate, const char* host);
void base::WebContextBase::allow_tls_certificate_for_host (Gio::TlsCertificate certificate, const std::string & host) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::GTlsCertificate* certificate, const char* host);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_allow_tls_certificate_for_host;
  auto host_to_c = gi::unwrap (host, gi::transfer_none, gi::direction_in);
  auto certificate_to_c = gi::unwrap (certificate, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::GTlsCertificate*) (certificate_to_c), (const char*) (host_to_c));
}

// void webkit_web_context_clear_cache (WebKitWebContext* context);
// void webkit_web_context_clear_cache (::WebKitWebContext* context);
void base::WebContextBase::clear_cache () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_clear_cache;
  call_wrap_v ((::WebKitWebContext*) (gobj_()));
}

// WebKitDownload* webkit_web_context_download_uri (WebKitWebContext* context, const gchar* uri);
// ::WebKitDownload* webkit_web_context_download_uri (::WebKitWebContext* context, const char* uri);
WebKit2::Download base::WebContextBase::download_uri (const std::string & uri) noexcept
{
  typedef ::WebKitDownload* (*call_wrap_t) (::WebKitWebContext* context, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_download_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitCacheModel webkit_web_context_get_cache_model (WebKitWebContext* context);
// ::WebKitCacheModel webkit_web_context_get_cache_model (::WebKitWebContext* context);
WebKit2::CacheModel base::WebContextBase::get_cache_model () noexcept
{
  typedef ::WebKitCacheModel (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_cache_model;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitCookieManager* webkit_web_context_get_cookie_manager (WebKitWebContext* context);
// ::WebKitCookieManager* webkit_web_context_get_cookie_manager (::WebKitWebContext* context);
WebKit2::CookieManager base::WebContextBase::get_cookie_manager () noexcept
{
  typedef ::WebKitCookieManager* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_cookie_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitFaviconDatabase* webkit_web_context_get_favicon_database (WebKitWebContext* context);
// ::WebKitFaviconDatabase* webkit_web_context_get_favicon_database (::WebKitWebContext* context);
WebKit2::FaviconDatabase base::WebContextBase::get_favicon_database () noexcept
{
  typedef ::WebKitFaviconDatabase* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_favicon_database;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_web_context_get_favicon_database_directory (WebKitWebContext* context);
// const char* webkit_web_context_get_favicon_database_directory (::WebKitWebContext* context);
std::string base::WebContextBase::get_favicon_database_directory () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_favicon_database_directory;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitGeolocationManager* webkit_web_context_get_geolocation_manager (WebKitWebContext* context);
// ::WebKitGeolocationManager* webkit_web_context_get_geolocation_manager (::WebKitWebContext* context);
WebKit2::GeolocationManager base::WebContextBase::get_geolocation_manager () noexcept
{
  typedef ::WebKitGeolocationManager* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_geolocation_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_context_get_plugins (WebKitWebContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_context_get_plugins (::WebKitWebContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// GList* webkit_web_context_get_plugins_finish (WebKitWebContext* context, GAsyncResult* result, GError ** error);
// ::GList* webkit_web_context_get_plugins_finish (::WebKitWebContext* context, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// WebKitProcessModel webkit_web_context_get_process_model (WebKitWebContext* context);
// ::WebKitProcessModel webkit_web_context_get_process_model (::WebKitWebContext* context);
WebKit2::ProcessModel base::WebContextBase::get_process_model () noexcept
{
  typedef ::WebKitProcessModel (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_process_model;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean webkit_web_context_get_sandbox_enabled (WebKitWebContext* context);
// gboolean webkit_web_context_get_sandbox_enabled (::WebKitWebContext* context);
bool base::WebContextBase::get_sandbox_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_sandbox_enabled;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return _temp_ret;
}

// WebKitSecurityManager* webkit_web_context_get_security_manager (WebKitWebContext* context);
// ::WebKitSecurityManager* webkit_web_context_get_security_manager (::WebKitWebContext* context);
WebKit2::SecurityManager base::WebContextBase::get_security_manager () noexcept
{
  typedef ::WebKitSecurityManager* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_security_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_web_context_get_spell_checking_enabled (WebKitWebContext* context);
// gboolean webkit_web_context_get_spell_checking_enabled (::WebKitWebContext* context);
bool base::WebContextBase::get_spell_checking_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_spell_checking_enabled;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return _temp_ret;
}

// const gchar* const* webkit_web_context_get_spell_checking_languages (WebKitWebContext* context);
// const char** webkit_web_context_get_spell_checking_languages (::WebKitWebContext* context);
std::vector<std::string> base::WebContextBase::get_spell_checking_languages () noexcept
{
  typedef const char** (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_spell_checking_languages;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// WebKitTLSErrorsPolicy webkit_web_context_get_tls_errors_policy (WebKitWebContext* context);
// ::WebKitTLSErrorsPolicy webkit_web_context_get_tls_errors_policy (::WebKitWebContext* context);
// IGNORE; deprecated

// gboolean webkit_web_context_get_use_system_appearance_for_scrollbars (WebKitWebContext* context);
// gboolean webkit_web_context_get_use_system_appearance_for_scrollbars (::WebKitWebContext* context);
bool base::WebContextBase::get_use_system_appearance_for_scrollbars () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_use_system_appearance_for_scrollbars;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return _temp_ret;
}

// guint webkit_web_context_get_web_process_count_limit (WebKitWebContext* context);
// guint webkit_web_context_get_web_process_count_limit (::WebKitWebContext* context);
// IGNORE; deprecated

// WebKitWebsiteDataManager* webkit_web_context_get_website_data_manager (WebKitWebContext* context);
// ::WebKitWebsiteDataManager* webkit_web_context_get_website_data_manager (::WebKitWebContext* context);
WebKit2::WebsiteDataManager base::WebContextBase::get_website_data_manager () noexcept
{
  typedef ::WebKitWebsiteDataManager* (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_get_website_data_manager;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_web_context_initialize_notification_permissions (WebKitWebContext* context, GList* allowed_origins, GList* disallowed_origins);
// void webkit_web_context_initialize_notification_permissions (::WebKitWebContext* context, ::GList* allowed_origins, ::GList* disallowed_origins);
void base::WebContextBase::initialize_notification_permissions (const std::vector<WebKit2::SecurityOrigin> & allowed_origins, const std::vector<WebKit2::SecurityOrigin> & disallowed_origins) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::GList* allowed_origins, ::GList* disallowed_origins);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_initialize_notification_permissions;
  auto disallowed_origins_i = detail::make_list_unwrap_range<::GList> (disallowed_origins);
  auto disallowed_origins_w = unwrap (disallowed_origins_i, gi::transfer_none, direction_in);
  auto disallowed_origins_to_c = disallowed_origins_w.gobj_(false);
  auto allowed_origins_i = detail::make_list_unwrap_range<::GList> (allowed_origins);
  auto allowed_origins_w = unwrap (allowed_origins_i, gi::transfer_none, direction_in);
  auto allowed_origins_to_c = allowed_origins_w.gobj_(false);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::GList*) (allowed_origins_to_c), (::GList*) (disallowed_origins_to_c));
}

// gboolean webkit_web_context_is_automation_allowed (WebKitWebContext* context);
// gboolean webkit_web_context_is_automation_allowed (::WebKitWebContext* context);
bool base::WebContextBase::is_automation_allowed () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_is_automation_allowed;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_context_is_ephemeral (WebKitWebContext* context);
// gboolean webkit_web_context_is_ephemeral (::WebKitWebContext* context);
bool base::WebContextBase::is_ephemeral () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_is_ephemeral;
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()));
  return _temp_ret;
}

// void webkit_web_context_prefetch_dns (WebKitWebContext* context, const gchar* hostname);
// void webkit_web_context_prefetch_dns (::WebKitWebContext* context, const char* hostname);
void base::WebContextBase::prefetch_dns (const std::string & hostname) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* hostname);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_prefetch_dns;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (hostname_to_c));
}

// void webkit_web_context_register_uri_scheme (WebKitWebContext* context, const gchar* scheme, WebKitURISchemeRequestCallback callback, gpointer user_data, GDestroyNotify user_data_destroy_func);
// void webkit_web_context_register_uri_scheme (::WebKitWebContext* context, const char* scheme, WebKit2::URISchemeRequestCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy_func);
void base::WebContextBase::register_uri_scheme (const std::string & scheme, WebKit2::URISchemeRequestCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* scheme, WebKit2::URISchemeRequestCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy_func);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_register_uri_scheme;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (scheme_to_c), (WebKit2::URISchemeRequestCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
}

// void webkit_web_context_send_message_to_all_extensions (WebKitWebContext* context, WebKitUserMessage* message);
// void webkit_web_context_send_message_to_all_extensions (::WebKitWebContext* context, ::WebKitUserMessage* message);
void base::WebContextBase::send_message_to_all_extensions (WebKit2::UserMessage message) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_send_message_to_all_extensions;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitUserMessage*) (message_to_c));
}

// void webkit_web_context_set_additional_plugins_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_additional_plugins_directory (::WebKitWebContext* context, const char* directory);
// IGNORE; deprecated

// void webkit_web_context_set_automation_allowed (WebKitWebContext* context, gboolean allowed);
// void webkit_web_context_set_automation_allowed (::WebKitWebContext* context, gboolean allowed);
void base::WebContextBase::set_automation_allowed (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_automation_allowed;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_web_context_set_cache_model (WebKitWebContext* context, WebKitCacheModel cache_model);
// void webkit_web_context_set_cache_model (::WebKitWebContext* context, ::WebKitCacheModel cache_model);
void base::WebContextBase::set_cache_model (WebKit2::CacheModel cache_model) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::WebKitCacheModel cache_model);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_cache_model;
  auto cache_model_to_c = gi::unwrap (cache_model);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitCacheModel) (cache_model_to_c));
}

// void webkit_web_context_set_disk_cache_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_disk_cache_directory (::WebKitWebContext* context, const char* directory);
// IGNORE; deprecated

// void webkit_web_context_set_favicon_database_directory (WebKitWebContext* context, const gchar* path);
// void webkit_web_context_set_favicon_database_directory (::WebKitWebContext* context, const char* path);
void base::WebContextBase::set_favicon_database_directory (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_favicon_database_directory;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (path_to_c));
}
void base::WebContextBase::set_favicon_database_directory () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_favicon_database_directory;
  auto path_to_c = nullptr;
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (path_to_c));
}

// void webkit_web_context_set_network_proxy_settings (WebKitWebContext* context, WebKitNetworkProxyMode proxy_mode, WebKitNetworkProxySettings* proxy_settings);
// void webkit_web_context_set_network_proxy_settings (::WebKitWebContext* context, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
// IGNORE; deprecated

// void webkit_web_context_set_preferred_languages (WebKitWebContext* context, const gchar* const* languages);
// void webkit_web_context_set_preferred_languages (::WebKitWebContext* context, const char** languages);
void base::WebContextBase::set_preferred_languages (const std::vector<std::string> & languages) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char** languages);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_preferred_languages;
  auto languages_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (languages);
  auto languages_w = unwrap (languages_i, gi::transfer_none, direction_in);
  auto languages_to_c = languages_w.gobj_(false);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char**) (languages_to_c));
}

// void webkit_web_context_set_process_model (WebKitWebContext* context, WebKitProcessModel process_model);
// void webkit_web_context_set_process_model (::WebKitWebContext* context, ::WebKitProcessModel process_model);
void base::WebContextBase::set_process_model (WebKit2::ProcessModel process_model) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::WebKitProcessModel process_model);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_process_model;
  auto process_model_to_c = gi::unwrap (process_model);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitProcessModel) (process_model_to_c));
}

// void webkit_web_context_set_sandbox_enabled (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_sandbox_enabled (::WebKitWebContext* context, gboolean enabled);
void base::WebContextBase::set_sandbox_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_sandbox_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_web_context_set_spell_checking_enabled (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_spell_checking_enabled (::WebKitWebContext* context, gboolean enabled);
void base::WebContextBase::set_spell_checking_enabled (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_spell_checking_enabled;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_web_context_set_spell_checking_languages (WebKitWebContext* context, const gchar* const* languages);
// void webkit_web_context_set_spell_checking_languages (::WebKitWebContext* context, const char** languages);
void base::WebContextBase::set_spell_checking_languages (const std::vector<std::string> & languages) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char** languages);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_spell_checking_languages;
  auto languages_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (languages);
  auto languages_w = unwrap (languages_i, gi::transfer_none, direction_in);
  auto languages_to_c = languages_w.gobj_(false);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char**) (languages_to_c));
}

// void webkit_web_context_set_tls_errors_policy (WebKitWebContext* context, WebKitTLSErrorsPolicy policy);
// void webkit_web_context_set_tls_errors_policy (::WebKitWebContext* context, ::WebKitTLSErrorsPolicy policy);
// IGNORE; deprecated

// void webkit_web_context_set_use_system_appearance_for_scrollbars (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_use_system_appearance_for_scrollbars (::WebKitWebContext* context, gboolean enabled);
void base::WebContextBase::set_use_system_appearance_for_scrollbars (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_use_system_appearance_for_scrollbars;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_web_context_set_web_extensions_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_web_extensions_directory (::WebKitWebContext* context, const char* directory);
void base::WebContextBase::set_web_extensions_directory (const std::string & directory) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, const char* directory);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_web_extensions_directory;
  auto directory_to_c = gi::unwrap (directory, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (const char*) (directory_to_c));
}

// void webkit_web_context_set_web_extensions_initialization_user_data (WebKitWebContext* context, GVariant* user_data);
// void webkit_web_context_set_web_extensions_initialization_user_data (::WebKitWebContext* context, ::GVariant* user_data);
void base::WebContextBase::set_web_extensions_initialization_user_data (GLib::Variant user_data) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::GVariant* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_context_set_web_extensions_initialization_user_data;
  auto user_data_to_c = gi::unwrap (user_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::GVariant*) (user_data_to_c));
}

// void webkit_web_context_set_web_process_count_limit (WebKitWebContext* context, guint limit);
// void webkit_web_context_set_web_process_count_limit (::WebKitWebContext* context, guint limit);
// IGNORE; deprecated







} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webcontext_extra_def_impl.hpp>)
#include <webkit2/webcontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webcontext_extra_impl.hpp>)
#include <webkit2/webcontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebContextClass *methods = (::WebKitWebContextClass *) class_struct;
  (void) methods;

  methods->automation_started = (decltype (methods->automation_started)) detail::method_wrapper<self, void (*) (WebKit2::AutomationSession session), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::automation_started_>;
  methods->download_started = (decltype (methods->download_started)) detail::method_wrapper<self, void (*) (WebKit2::Download download), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::download_started_>;
  methods->initialize_notification_permissions = (decltype (methods->initialize_notification_permissions)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::initialize_notification_permissions_>;
  methods->initialize_web_extensions = (decltype (methods->initialize_web_extensions)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::initialize_web_extensions_>;
  methods->user_message_received = (decltype (methods->user_message_received)) detail::method_wrapper<self, bool (*) (WebKit2::UserMessage message), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::user_message_received_>;
}

// void WebContext::automation_started (WebKitWebContext* context, WebKitAutomationSession* session);
// void WebContext::automation_started (::WebKitWebContext* context, ::WebKitAutomationSession* session);
void WebContextClass::automation_started_ (WebKit2::AutomationSession session) noexcept
{
  if (!get_struct_()->automation_started) return ;
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::WebKitAutomationSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->automation_started;
  auto session_to_c = gi::unwrap (session, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitAutomationSession*) (session_to_c));
}

// void WebContext::download_started (WebKitWebContext* context, WebKitDownload* download);
// void WebContext::download_started (::WebKitWebContext* context, ::WebKitDownload* download);
void WebContextClass::download_started_ (WebKit2::Download download) noexcept
{
  if (!get_struct_()->download_started) return ;
  typedef void (*call_wrap_t) (::WebKitWebContext* context, ::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->download_started;
  auto download_to_c = gi::unwrap (download, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitDownload*) (download_to_c));
}

// void WebContext::initialize_notification_permissions (WebKitWebContext* context);
// void WebContext::initialize_notification_permissions (::WebKitWebContext* context);
void WebContextClass::initialize_notification_permissions_ () noexcept
{
  if (!get_struct_()->initialize_notification_permissions) return ;
  typedef void (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->initialize_notification_permissions;
  call_wrap_v ((::WebKitWebContext*) (gobj_()));
}

// void WebContext::initialize_web_extensions (WebKitWebContext* context);
// void WebContext::initialize_web_extensions (::WebKitWebContext* context);
void WebContextClass::initialize_web_extensions_ () noexcept
{
  if (!get_struct_()->initialize_web_extensions) return ;
  typedef void (*call_wrap_t) (::WebKitWebContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->initialize_web_extensions;
  call_wrap_v ((::WebKitWebContext*) (gobj_()));
}

// gboolean WebContext::user_message_received (WebKitWebContext* context, WebKitUserMessage* message);
// gboolean WebContext::user_message_received (::WebKitWebContext* context, ::WebKitUserMessage* message);
bool WebContextClass::user_message_received_ (WebKit2::UserMessage message) noexcept
{
  if (!get_struct_()->user_message_received) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitWebContext* context, ::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->user_message_received;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitWebContext*) (gobj_()), (::WebKitUserMessage*) (message_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
