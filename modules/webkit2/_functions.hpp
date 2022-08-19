// AUTO-GENERATED

#ifndef _GI_WEBKIT2__FUNCTIONS_HPP_
#define _GI_WEBKIT2__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace DownloadErrorNS_ {

// GQuark webkit_download_error_quark ();
// ::GQuark webkit_download_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace DownloadErrorNS_

namespace FaviconDatabaseErrorNS_ {

// GQuark webkit_favicon_database_error_quark ();
// ::GQuark webkit_favicon_database_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace FaviconDatabaseErrorNS_

namespace JavascriptErrorNS_ {

// GQuark webkit_javascript_error_quark ();
// ::GQuark webkit_javascript_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace JavascriptErrorNS_

namespace NetworkErrorNS_ {

// GQuark webkit_network_error_quark ();
// ::GQuark webkit_network_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace NetworkErrorNS_

namespace PluginErrorNS_ {

// GQuark webkit_plugin_error_quark ();
// ::GQuark webkit_plugin_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PluginErrorNS_

namespace PolicyErrorNS_ {

// GQuark webkit_policy_error_quark ();
// ::GQuark webkit_policy_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PolicyErrorNS_

namespace PrintErrorNS_ {

// GQuark webkit_print_error_quark ();
// ::GQuark webkit_print_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PrintErrorNS_

namespace SnapshotErrorNS_ {

// GQuark webkit_snapshot_error_quark ();
// ::GQuark webkit_snapshot_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace SnapshotErrorNS_

namespace UserContentFilterErrorNS_ {

// GQuark webkit_user_content_filter_error_quark ();
// ::GQuark webkit_user_content_filter_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace UserContentFilterErrorNS_

namespace UserMessageErrorNS_ {

// GQuark webkit_user_message_error_quark ();
// ::GQuark webkit_user_message_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace UserMessageErrorNS_

// guint webkit_get_major_version ();
// guint webkit_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint webkit_get_micro_version ();
// guint webkit_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint webkit_get_minor_version ();
// guint webkit_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// const gchar* webkit_media_key_system_permission_get_name (WebKitMediaKeySystemPermissionRequest* request);
// const char* webkit_media_key_system_permission_get_name (::WebKitMediaKeySystemPermissionRequest* request);
GI_INLINE_DECL std::string media_key_system_permission_get_name (WebKit2::MediaKeySystemPermissionRequest request) noexcept;

// gchar* webkit_uri_for_display (const gchar* uri);
// char* webkit_uri_for_display (const char* uri);
GI_INLINE_DECL std::string uri_for_display (const std::string & uri) noexcept;

// gboolean webkit_user_media_permission_is_for_audio_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_audio_device (::WebKitUserMediaPermissionRequest* request);
GI_INLINE_DECL bool user_media_permission_is_for_audio_device (WebKit2::UserMediaPermissionRequest request) noexcept;

// gboolean webkit_user_media_permission_is_for_display_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_display_device (::WebKitUserMediaPermissionRequest* request);
GI_INLINE_DECL bool user_media_permission_is_for_display_device (WebKit2::UserMediaPermissionRequest request) noexcept;

// gboolean webkit_user_media_permission_is_for_video_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_video_device (::WebKitUserMediaPermissionRequest* request);
GI_INLINE_DECL bool user_media_permission_is_for_video_device (WebKit2::UserMediaPermissionRequest request) noexcept;

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
