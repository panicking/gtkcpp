// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBCONTEXT_HPP_
#define _GI_WEBKIT2_WEBCONTEXT_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class AutomationSession;
class CookieManager;
class Download;
class FaviconDatabase;
class GeolocationManager;
class MemoryPressureSettings;
class NetworkProxySettings;
class Plugin;
class SecurityManager;
class SecurityOrigin;
class UserMessage;
class WebsiteDataManager;

class WebContext;

namespace base {


#define GI_WEBKIT2_WEBCONTEXT_BASE base::WebContextBase
class WebContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebContext BaseObjectType;

WebContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_web_context_get_type(); } 

// WebKitWebContext* webkit_web_context_new ();
// ::WebKitWebContext* webkit_web_context_new ();
static GI_INLINE_DECL WebKit2::WebContext new_ () noexcept;

// WebKitWebContext* webkit_web_context_new_ephemeral ();
// ::WebKitWebContext* webkit_web_context_new_ephemeral ();
static GI_INLINE_DECL WebKit2::WebContext new_ephemeral () noexcept;

// WebKitWebContext* webkit_web_context_new_with_website_data_manager (WebKitWebsiteDataManager* manager);
// ::WebKitWebContext* webkit_web_context_new_with_website_data_manager (::WebKitWebsiteDataManager* manager);
static GI_INLINE_DECL WebKit2::WebContext new_with_website_data_manager (WebKit2::WebsiteDataManager manager) noexcept;

// WebKitWebContext* webkit_web_context_get_default ();
// ::WebKitWebContext* webkit_web_context_get_default ();
static GI_INLINE_DECL WebKit2::WebContext get_default () noexcept;

// void webkit_web_context_add_path_to_sandbox (WebKitWebContext* context, const char* path, gboolean read_only);
// void webkit_web_context_add_path_to_sandbox (::WebKitWebContext* context, const char* path, gboolean read_only);
GI_INLINE_DECL void add_path_to_sandbox (const std::string & path, gboolean read_only) noexcept;

// void webkit_web_context_allow_tls_certificate_for_host (WebKitWebContext* context, GTlsCertificate* certificate, const gchar* host);
// void webkit_web_context_allow_tls_certificate_for_host (::WebKitWebContext* context, ::GTlsCertificate* certificate, const char* host);
GI_INLINE_DECL void allow_tls_certificate_for_host (Gio::TlsCertificate certificate, const std::string & host) noexcept;

// void webkit_web_context_clear_cache (WebKitWebContext* context);
// void webkit_web_context_clear_cache (::WebKitWebContext* context);
GI_INLINE_DECL void clear_cache () noexcept;

// WebKitDownload* webkit_web_context_download_uri (WebKitWebContext* context, const gchar* uri);
// ::WebKitDownload* webkit_web_context_download_uri (::WebKitWebContext* context, const char* uri);
GI_INLINE_DECL WebKit2::Download download_uri (const std::string & uri) noexcept;

// WebKitCacheModel webkit_web_context_get_cache_model (WebKitWebContext* context);
// ::WebKitCacheModel webkit_web_context_get_cache_model (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::CacheModel get_cache_model () noexcept;

// WebKitCookieManager* webkit_web_context_get_cookie_manager (WebKitWebContext* context);
// ::WebKitCookieManager* webkit_web_context_get_cookie_manager (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::CookieManager get_cookie_manager () noexcept;

// WebKitFaviconDatabase* webkit_web_context_get_favicon_database (WebKitWebContext* context);
// ::WebKitFaviconDatabase* webkit_web_context_get_favicon_database (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::FaviconDatabase get_favicon_database () noexcept;

// const gchar* webkit_web_context_get_favicon_database_directory (WebKitWebContext* context);
// const char* webkit_web_context_get_favicon_database_directory (::WebKitWebContext* context);
GI_INLINE_DECL std::string get_favicon_database_directory () noexcept;

// WebKitGeolocationManager* webkit_web_context_get_geolocation_manager (WebKitWebContext* context);
// ::WebKitGeolocationManager* webkit_web_context_get_geolocation_manager (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::GeolocationManager get_geolocation_manager () noexcept;

// void webkit_web_context_get_plugins (WebKitWebContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_context_get_plugins (::WebKitWebContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// GList* webkit_web_context_get_plugins_finish (WebKitWebContext* context, GAsyncResult* result, GError ** error);
// ::GList* webkit_web_context_get_plugins_finish (::WebKitWebContext* context, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// WebKitProcessModel webkit_web_context_get_process_model (WebKitWebContext* context);
// ::WebKitProcessModel webkit_web_context_get_process_model (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::ProcessModel get_process_model () noexcept;

// gboolean webkit_web_context_get_sandbox_enabled (WebKitWebContext* context);
// gboolean webkit_web_context_get_sandbox_enabled (::WebKitWebContext* context);
GI_INLINE_DECL bool get_sandbox_enabled () noexcept;

// WebKitSecurityManager* webkit_web_context_get_security_manager (WebKitWebContext* context);
// ::WebKitSecurityManager* webkit_web_context_get_security_manager (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::SecurityManager get_security_manager () noexcept;

// gboolean webkit_web_context_get_spell_checking_enabled (WebKitWebContext* context);
// gboolean webkit_web_context_get_spell_checking_enabled (::WebKitWebContext* context);
GI_INLINE_DECL bool get_spell_checking_enabled () noexcept;

// const gchar* const* webkit_web_context_get_spell_checking_languages (WebKitWebContext* context);
// const char** webkit_web_context_get_spell_checking_languages (::WebKitWebContext* context);
GI_INLINE_DECL std::vector<std::string> get_spell_checking_languages () noexcept;

// WebKitTLSErrorsPolicy webkit_web_context_get_tls_errors_policy (WebKitWebContext* context);
// ::WebKitTLSErrorsPolicy webkit_web_context_get_tls_errors_policy (::WebKitWebContext* context);
// IGNORE; deprecated

// gboolean webkit_web_context_get_use_system_appearance_for_scrollbars (WebKitWebContext* context);
// gboolean webkit_web_context_get_use_system_appearance_for_scrollbars (::WebKitWebContext* context);
GI_INLINE_DECL bool get_use_system_appearance_for_scrollbars () noexcept;

// guint webkit_web_context_get_web_process_count_limit (WebKitWebContext* context);
// guint webkit_web_context_get_web_process_count_limit (::WebKitWebContext* context);
// IGNORE; deprecated

// WebKitWebsiteDataManager* webkit_web_context_get_website_data_manager (WebKitWebContext* context);
// ::WebKitWebsiteDataManager* webkit_web_context_get_website_data_manager (::WebKitWebContext* context);
GI_INLINE_DECL WebKit2::WebsiteDataManager get_website_data_manager () noexcept;

// void webkit_web_context_initialize_notification_permissions (WebKitWebContext* context, GList* allowed_origins, GList* disallowed_origins);
// void webkit_web_context_initialize_notification_permissions (::WebKitWebContext* context, ::GList* allowed_origins, ::GList* disallowed_origins);
GI_INLINE_DECL void initialize_notification_permissions (const std::vector<WebKit2::SecurityOrigin> & allowed_origins, const std::vector<WebKit2::SecurityOrigin> & disallowed_origins) noexcept;

// gboolean webkit_web_context_is_automation_allowed (WebKitWebContext* context);
// gboolean webkit_web_context_is_automation_allowed (::WebKitWebContext* context);
GI_INLINE_DECL bool is_automation_allowed () noexcept;

// gboolean webkit_web_context_is_ephemeral (WebKitWebContext* context);
// gboolean webkit_web_context_is_ephemeral (::WebKitWebContext* context);
GI_INLINE_DECL bool is_ephemeral () noexcept;

// void webkit_web_context_prefetch_dns (WebKitWebContext* context, const gchar* hostname);
// void webkit_web_context_prefetch_dns (::WebKitWebContext* context, const char* hostname);
GI_INLINE_DECL void prefetch_dns (const std::string & hostname) noexcept;

// void webkit_web_context_register_uri_scheme (WebKitWebContext* context, const gchar* scheme, WebKitURISchemeRequestCallback callback, gpointer user_data, GDestroyNotify user_data_destroy_func);
// void webkit_web_context_register_uri_scheme (::WebKitWebContext* context, const char* scheme, WebKit2::URISchemeRequestCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy_func);
GI_INLINE_DECL void register_uri_scheme (const std::string & scheme, WebKit2::URISchemeRequestCallback callback) noexcept;

// void webkit_web_context_send_message_to_all_extensions (WebKitWebContext* context, WebKitUserMessage* message);
// void webkit_web_context_send_message_to_all_extensions (::WebKitWebContext* context, ::WebKitUserMessage* message);
GI_INLINE_DECL void send_message_to_all_extensions (WebKit2::UserMessage message) noexcept;

// void webkit_web_context_set_additional_plugins_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_additional_plugins_directory (::WebKitWebContext* context, const char* directory);
// IGNORE; deprecated

// void webkit_web_context_set_automation_allowed (WebKitWebContext* context, gboolean allowed);
// void webkit_web_context_set_automation_allowed (::WebKitWebContext* context, gboolean allowed);
GI_INLINE_DECL void set_automation_allowed (gboolean allowed) noexcept;

// void webkit_web_context_set_cache_model (WebKitWebContext* context, WebKitCacheModel cache_model);
// void webkit_web_context_set_cache_model (::WebKitWebContext* context, ::WebKitCacheModel cache_model);
GI_INLINE_DECL void set_cache_model (WebKit2::CacheModel cache_model) noexcept;

// void webkit_web_context_set_disk_cache_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_disk_cache_directory (::WebKitWebContext* context, const char* directory);
// IGNORE; deprecated

// void webkit_web_context_set_favicon_database_directory (WebKitWebContext* context, const gchar* path);
// void webkit_web_context_set_favicon_database_directory (::WebKitWebContext* context, const char* path);
GI_INLINE_DECL void set_favicon_database_directory (const std::string & path) noexcept;
GI_INLINE_DECL void set_favicon_database_directory () noexcept;

// void webkit_web_context_set_network_proxy_settings (WebKitWebContext* context, WebKitNetworkProxyMode proxy_mode, WebKitNetworkProxySettings* proxy_settings);
// void webkit_web_context_set_network_proxy_settings (::WebKitWebContext* context, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
// IGNORE; deprecated

// void webkit_web_context_set_preferred_languages (WebKitWebContext* context, const gchar* const* languages);
// void webkit_web_context_set_preferred_languages (::WebKitWebContext* context, const char** languages);
GI_INLINE_DECL void set_preferred_languages (const std::vector<std::string> & languages) noexcept;

// void webkit_web_context_set_process_model (WebKitWebContext* context, WebKitProcessModel process_model);
// void webkit_web_context_set_process_model (::WebKitWebContext* context, ::WebKitProcessModel process_model);
GI_INLINE_DECL void set_process_model (WebKit2::ProcessModel process_model) noexcept;

// void webkit_web_context_set_sandbox_enabled (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_sandbox_enabled (::WebKitWebContext* context, gboolean enabled);
GI_INLINE_DECL void set_sandbox_enabled (gboolean enabled) noexcept;

// void webkit_web_context_set_spell_checking_enabled (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_spell_checking_enabled (::WebKitWebContext* context, gboolean enabled);
GI_INLINE_DECL void set_spell_checking_enabled (gboolean enabled) noexcept;

// void webkit_web_context_set_spell_checking_languages (WebKitWebContext* context, const gchar* const* languages);
// void webkit_web_context_set_spell_checking_languages (::WebKitWebContext* context, const char** languages);
GI_INLINE_DECL void set_spell_checking_languages (const std::vector<std::string> & languages) noexcept;

// void webkit_web_context_set_tls_errors_policy (WebKitWebContext* context, WebKitTLSErrorsPolicy policy);
// void webkit_web_context_set_tls_errors_policy (::WebKitWebContext* context, ::WebKitTLSErrorsPolicy policy);
// IGNORE; deprecated

// void webkit_web_context_set_use_system_appearance_for_scrollbars (WebKitWebContext* context, gboolean enabled);
// void webkit_web_context_set_use_system_appearance_for_scrollbars (::WebKitWebContext* context, gboolean enabled);
GI_INLINE_DECL void set_use_system_appearance_for_scrollbars (gboolean enabled) noexcept;

// void webkit_web_context_set_web_extensions_directory (WebKitWebContext* context, const gchar* directory);
// void webkit_web_context_set_web_extensions_directory (::WebKitWebContext* context, const char* directory);
GI_INLINE_DECL void set_web_extensions_directory (const std::string & directory) noexcept;

// void webkit_web_context_set_web_extensions_initialization_user_data (WebKitWebContext* context, GVariant* user_data);
// void webkit_web_context_set_web_extensions_initialization_user_data (::WebKitWebContext* context, ::GVariant* user_data);
GI_INLINE_DECL void set_web_extensions_initialization_user_data (GLib::Variant user_data) noexcept;

// void webkit_web_context_set_web_process_count_limit (WebKitWebContext* context, guint limit);
// void webkit_web_context_set_web_process_count_limit (::WebKitWebContext* context, guint limit);
// IGNORE; deprecated

gi::property_proxy<std::string, base::WebContextBase> property_local_storage_directory()
{ return gi::property_proxy<std::string, base::WebContextBase> (*this, "local-storage-directory"); }
const gi::property_proxy<std::string, base::WebContextBase> property_local_storage_directory() const
{ return gi::property_proxy<std::string, base::WebContextBase> (*this, "local-storage-directory"); }

gi::property_proxy_write<WebKit2::MemoryPressureSettings, base::WebContextBase> property_memory_pressure_settings()
{ return gi::property_proxy_write<WebKit2::MemoryPressureSettings, base::WebContextBase> (*this, "memory-pressure-settings"); }

gi::property_proxy<bool, base::WebContextBase> property_process_swap_on_cross_site_navigation_enabled()
{ return gi::property_proxy<bool, base::WebContextBase> (*this, "process-swap-on-cross-site-navigation-enabled"); }
const gi::property_proxy<bool, base::WebContextBase> property_process_swap_on_cross_site_navigation_enabled() const
{ return gi::property_proxy<bool, base::WebContextBase> (*this, "process-swap-on-cross-site-navigation-enabled"); }

gi::property_proxy<bool, base::WebContextBase> property_use_system_appearance_for_scrollbars()
{ return gi::property_proxy<bool, base::WebContextBase> (*this, "use-system-appearance-for-scrollbars"); }
const gi::property_proxy<bool, base::WebContextBase> property_use_system_appearance_for_scrollbars() const
{ return gi::property_proxy<bool, base::WebContextBase> (*this, "use-system-appearance-for-scrollbars"); }

gi::property_proxy<WebKit2::WebsiteDataManager, base::WebContextBase> property_website_data_manager()
{ return gi::property_proxy<WebKit2::WebsiteDataManager, base::WebContextBase> (*this, "website-data-manager"); }
const gi::property_proxy<WebKit2::WebsiteDataManager, base::WebContextBase> property_website_data_manager() const
{ return gi::property_proxy<WebKit2::WebsiteDataManager, base::WebContextBase> (*this, "website-data-manager"); }

// signal automation-started
gi::signal_proxy<void(WebKit2::WebContext, WebKit2::AutomationSession session)> signal_automation_started()
{ return gi::signal_proxy<void(WebKit2::WebContext, WebKit2::AutomationSession session)> (*this, "automation-started"); }

// signal download-started
gi::signal_proxy<void(WebKit2::WebContext, WebKit2::Download download)> signal_download_started()
{ return gi::signal_proxy<void(WebKit2::WebContext, WebKit2::Download download)> (*this, "download-started"); }

// signal initialize-notification-permissions
gi::signal_proxy<void(WebKit2::WebContext)> signal_initialize_notification_permissions()
{ return gi::signal_proxy<void(WebKit2::WebContext)> (*this, "initialize-notification-permissions"); }

// signal initialize-web-extensions
gi::signal_proxy<void(WebKit2::WebContext)> signal_initialize_web_extensions()
{ return gi::signal_proxy<void(WebKit2::WebContext)> (*this, "initialize-web-extensions"); }

// signal user-message-received
gi::signal_proxy<bool(WebKit2::WebContext, WebKit2::UserMessage message)> signal_user_message_received()
{ return gi::signal_proxy<bool(WebKit2::WebContext, WebKit2::UserMessage message)> (*this, "user-message-received"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webcontext_extra_def.hpp>)
#include <webkit2/webcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webcontext_extra.hpp>)
#include <webkit2/webcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebContext : public GI_WEBKIT2_WEBCONTEXT_BASE
{ typedef GI_WEBKIT2_WEBCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebContext>
{ typedef WebKit2::WebContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebContextClassDef
{
typedef WebContextClassDef self;
public:
typedef WebKit2::WebContext instance_type;
typedef ::WebKitWebContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void WebContext::automation_started (WebKitWebContext* context, WebKitAutomationSession* session);
// void WebContext::automation_started (::WebKitWebContext* context, ::WebKitAutomationSession* session);
virtual void automation_started_ (WebKit2::AutomationSession session) noexcept = 0;

// void WebContext::download_started (WebKitWebContext* context, WebKitDownload* download);
// void WebContext::download_started (::WebKitWebContext* context, ::WebKitDownload* download);
virtual void download_started_ (WebKit2::Download download) noexcept = 0;

// void WebContext::initialize_notification_permissions (WebKitWebContext* context);
// void WebContext::initialize_notification_permissions (::WebKitWebContext* context);
virtual void initialize_notification_permissions_ () noexcept = 0;

// void WebContext::initialize_web_extensions (WebKitWebContext* context);
// void WebContext::initialize_web_extensions (::WebKitWebContext* context);
virtual void initialize_web_extensions_ () noexcept = 0;

// gboolean WebContext::user_message_received (WebKitWebContext* context, WebKitUserMessage* message);
// gboolean WebContext::user_message_received (::WebKitWebContext* context, ::WebKitUserMessage* message);
virtual bool user_message_received_ (WebKit2::UserMessage message) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WebContextClass: public detail::ClassTemplate<WebKit2::impl::internal::WebContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebContextClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void WebContext::automation_started (WebKitWebContext* context, WebKitAutomationSession* session);
// void WebContext::automation_started (::WebKitWebContext* context, ::WebKitAutomationSession* session);
GI_INLINE_DECL void automation_started_ (WebKit2::AutomationSession session) noexcept override;

// void WebContext::download_started (WebKitWebContext* context, WebKitDownload* download);
// void WebContext::download_started (::WebKitWebContext* context, ::WebKitDownload* download);
GI_INLINE_DECL void download_started_ (WebKit2::Download download) noexcept override;

// void WebContext::initialize_notification_permissions (WebKitWebContext* context);
// void WebContext::initialize_notification_permissions (::WebKitWebContext* context);
GI_INLINE_DECL void initialize_notification_permissions_ () noexcept override;

// void WebContext::initialize_web_extensions (WebKitWebContext* context);
// void WebContext::initialize_web_extensions (::WebKitWebContext* context);
GI_INLINE_DECL void initialize_web_extensions_ () noexcept override;

// gboolean WebContext::user_message_received (WebKitWebContext* context, WebKitUserMessage* message);
// gboolean WebContext::user_message_received (::WebKitWebContext* context, ::WebKitUserMessage* message);
GI_INLINE_DECL bool user_message_received_ (WebKit2::UserMessage message) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using WebContextImpl = detail::ObjectImpl<WebContext, internal::WebContextClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
