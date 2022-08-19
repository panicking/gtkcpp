// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATAMANAGER_HPP_
#define _GI_WEBKIT2_WEBSITEDATAMANAGER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {

class CookieManager;
class ITPThirdParty;
class MemoryPressureSettings;
class NetworkProxySettings;
class WebsiteData;

class WebsiteDataManager;

namespace base {


#define GI_WEBKIT2_WEBSITEDATAMANAGER_BASE base::WebsiteDataManagerBase
class WebsiteDataManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitWebsiteDataManager BaseObjectType;

WebsiteDataManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_website_data_manager_get_type(); } 

// WebKitWebsiteDataManager* webkit_website_data_manager_new (const gchar* first_option_name);
// ::WebKitWebsiteDataManager* webkit_website_data_manager_new (const char* first_option_name);
// IGNORE; not introspectable, varargs not supported

// WebKitWebsiteDataManager* webkit_website_data_manager_new_ephemeral ();
// ::WebKitWebsiteDataManager* webkit_website_data_manager_new_ephemeral ();
static GI_INLINE_DECL WebKit2::WebsiteDataManager new_ephemeral () noexcept;

// void webkit_website_data_manager_set_memory_pressure_settings (WebKitMemoryPressureSettings* settings);
// void webkit_website_data_manager_set_memory_pressure_settings (::WebKitMemoryPressureSettings* settings);
static GI_INLINE_DECL void set_memory_pressure_settings (WebKit2::MemoryPressureSettings settings) noexcept;

// void webkit_website_data_manager_clear (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GTimeSpan timespan, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_clear (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GTimeSpan timespan, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void clear (WebKit2::WebsiteDataTypes types, ::GTimeSpan timespan, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void clear (WebKit2::WebsiteDataTypes types, ::GTimeSpan timespan, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_website_data_manager_clear_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// gboolean webkit_website_data_manager_clear_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool clear_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool clear_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_website_data_manager_fetch (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_fetch (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void fetch (WebKit2::WebsiteDataTypes types, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void fetch (WebKit2::WebsiteDataTypes types, Gio::AsyncReadyCallback callback) noexcept;

// GList* webkit_website_data_manager_fetch_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_website_data_manager_fetch_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<WebKit2::WebsiteData> fetch_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<WebKit2::WebsiteData> fetch_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// const gchar* webkit_website_data_manager_get_base_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_base_cache_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_base_cache_directory () noexcept;

// const gchar* webkit_website_data_manager_get_base_data_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_base_data_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_base_data_directory () noexcept;

// WebKitCookieManager* webkit_website_data_manager_get_cookie_manager (WebKitWebsiteDataManager* manager);
// ::WebKitCookieManager* webkit_website_data_manager_get_cookie_manager (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL WebKit2::CookieManager get_cookie_manager () noexcept;

// const gchar* webkit_website_data_manager_get_disk_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_disk_cache_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_disk_cache_directory () noexcept;

// const gchar* webkit_website_data_manager_get_dom_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_dom_cache_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_dom_cache_directory () noexcept;

// const gchar* webkit_website_data_manager_get_hsts_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_hsts_cache_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_hsts_cache_directory () noexcept;

// const gchar* webkit_website_data_manager_get_indexeddb_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_indexeddb_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_indexeddb_directory () noexcept;

// const gchar* webkit_website_data_manager_get_itp_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_itp_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_itp_directory () noexcept;

// gboolean webkit_website_data_manager_get_itp_enabled (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_get_itp_enabled (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL bool get_itp_enabled () noexcept;

// void webkit_website_data_manager_get_itp_summary (WebKitWebsiteDataManager* manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_get_itp_summary (::WebKitWebsiteDataManager* manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_itp_summary (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_itp_summary (Gio::AsyncReadyCallback callback) noexcept;

// GList* webkit_website_data_manager_get_itp_summary_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_website_data_manager_get_itp_summary_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<WebKit2::ITPThirdParty> get_itp_summary_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<WebKit2::ITPThirdParty> get_itp_summary_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// const gchar* webkit_website_data_manager_get_local_storage_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_local_storage_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_local_storage_directory () noexcept;

// const gchar* webkit_website_data_manager_get_offline_application_cache_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_offline_application_cache_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_offline_application_cache_directory () noexcept;

// gboolean webkit_website_data_manager_get_persistent_credential_storage_enabled (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_get_persistent_credential_storage_enabled (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL bool get_persistent_credential_storage_enabled () noexcept;

// const gchar* webkit_website_data_manager_get_service_worker_registrations_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_service_worker_registrations_directory (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL std::string get_service_worker_registrations_directory () noexcept;

// WebKitTLSErrorsPolicy webkit_website_data_manager_get_tls_errors_policy (WebKitWebsiteDataManager* manager);
// ::WebKitTLSErrorsPolicy webkit_website_data_manager_get_tls_errors_policy (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL WebKit2::TLSErrorsPolicy get_tls_errors_policy () noexcept;

// const gchar* webkit_website_data_manager_get_websql_directory (WebKitWebsiteDataManager* manager);
// const char* webkit_website_data_manager_get_websql_directory (::WebKitWebsiteDataManager* manager);
// IGNORE; deprecated

// gboolean webkit_website_data_manager_is_ephemeral (WebKitWebsiteDataManager* manager);
// gboolean webkit_website_data_manager_is_ephemeral (::WebKitWebsiteDataManager* manager);
GI_INLINE_DECL bool is_ephemeral () noexcept;

// void webkit_website_data_manager_remove (WebKitWebsiteDataManager* manager, WebKitWebsiteDataTypes types, GList* website_data, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_website_data_manager_remove (::WebKitWebsiteDataManager* manager, ::WebKitWebsiteDataTypes types, ::GList* website_data, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void remove (WebKit2::WebsiteDataTypes types, const std::vector<WebKit2::WebsiteData> & website_data, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void remove (WebKit2::WebsiteDataTypes types, const std::vector<WebKit2::WebsiteData> & website_data, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_website_data_manager_remove_finish (WebKitWebsiteDataManager* manager, GAsyncResult* result, GError ** error);
// gboolean webkit_website_data_manager_remove_finish (::WebKitWebsiteDataManager* manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool remove_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool remove_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_website_data_manager_set_itp_enabled (WebKitWebsiteDataManager* manager, gboolean enabled);
// void webkit_website_data_manager_set_itp_enabled (::WebKitWebsiteDataManager* manager, gboolean enabled);
GI_INLINE_DECL void set_itp_enabled (gboolean enabled) noexcept;

// void webkit_website_data_manager_set_network_proxy_settings (WebKitWebsiteDataManager* manager, WebKitNetworkProxyMode proxy_mode, WebKitNetworkProxySettings* proxy_settings);
// void webkit_website_data_manager_set_network_proxy_settings (::WebKitWebsiteDataManager* manager, ::WebKitNetworkProxyMode proxy_mode, ::WebKitNetworkProxySettings* proxy_settings);
GI_INLINE_DECL void set_network_proxy_settings (WebKit2::NetworkProxyMode proxy_mode, WebKit2::NetworkProxySettings proxy_settings) noexcept;
GI_INLINE_DECL void set_network_proxy_settings (WebKit2::NetworkProxyMode proxy_mode) noexcept;

// void webkit_website_data_manager_set_persistent_credential_storage_enabled (WebKitWebsiteDataManager* manager, gboolean enabled);
// void webkit_website_data_manager_set_persistent_credential_storage_enabled (::WebKitWebsiteDataManager* manager, gboolean enabled);
GI_INLINE_DECL void set_persistent_credential_storage_enabled (gboolean enabled) noexcept;

// void webkit_website_data_manager_set_tls_errors_policy (WebKitWebsiteDataManager* manager, WebKitTLSErrorsPolicy policy);
// void webkit_website_data_manager_set_tls_errors_policy (::WebKitWebsiteDataManager* manager, ::WebKitTLSErrorsPolicy policy);
GI_INLINE_DECL void set_tls_errors_policy (WebKit2::TLSErrorsPolicy policy) noexcept;

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_base_cache_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "base-cache-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_base_cache_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "base-cache-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_base_data_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "base-data-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_base_data_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "base-data-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_disk_cache_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "disk-cache-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_disk_cache_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "disk-cache-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_dom_cache_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "dom-cache-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_dom_cache_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "dom-cache-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_hsts_cache_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "hsts-cache-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_hsts_cache_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "hsts-cache-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_indexeddb_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "indexeddb-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_indexeddb_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "indexeddb-directory"); }

gi::property_proxy<bool, base::WebsiteDataManagerBase> property_is_ephemeral()
{ return gi::property_proxy<bool, base::WebsiteDataManagerBase> (*this, "is-ephemeral"); }
const gi::property_proxy<bool, base::WebsiteDataManagerBase> property_is_ephemeral() const
{ return gi::property_proxy<bool, base::WebsiteDataManagerBase> (*this, "is-ephemeral"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_itp_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "itp-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_itp_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "itp-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_local_storage_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "local-storage-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_local_storage_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "local-storage-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_offline_application_cache_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "offline-application-cache-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_offline_application_cache_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "offline-application-cache-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_service_worker_registrations_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "service-worker-registrations-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_service_worker_registrations_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "service-worker-registrations-directory"); }

gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_websql_directory()
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "websql-directory"); }
const gi::property_proxy<std::string, base::WebsiteDataManagerBase> property_websql_directory() const
{ return gi::property_proxy<std::string, base::WebsiteDataManagerBase> (*this, "websql-directory"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedatamanager_extra_def.hpp>)
#include <webkit2/websitedatamanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedatamanager_extra.hpp>)
#include <webkit2/websitedatamanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class WebsiteDataManager : public GI_WEBKIT2_WEBSITEDATAMANAGER_BASE
{ typedef GI_WEBKIT2_WEBSITEDATAMANAGER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitWebsiteDataManager>
{ typedef WebKit2::WebsiteDataManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class WebsiteDataManagerClassDef
{
typedef WebsiteDataManagerClassDef self;
public:
typedef WebKit2::WebsiteDataManager instance_type;
typedef ::WebKitWebsiteDataManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebsiteDataManagerClass: public detail::ClassTemplate<WebKit2::impl::internal::WebsiteDataManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebsiteDataManagerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::WebsiteDataManagerClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using WebsiteDataManagerImpl = detail::ObjectImpl<WebsiteDataManager, internal::WebsiteDataManagerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
