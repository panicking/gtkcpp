// AUTO-GENERATED

#ifndef _GI_WEBKIT2__FUNCTIONS_IMPL_HPP_
#define _GI_WEBKIT2__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace DownloadErrorNS_ {

// GQuark webkit_download_error_quark ();
// ::GQuark webkit_download_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace DownloadErrorNS_

namespace FaviconDatabaseErrorNS_ {

// GQuark webkit_favicon_database_error_quark ();
// ::GQuark webkit_favicon_database_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace FaviconDatabaseErrorNS_

namespace JavascriptErrorNS_ {

// GQuark webkit_javascript_error_quark ();
// ::GQuark webkit_javascript_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_javascript_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace JavascriptErrorNS_

namespace NetworkErrorNS_ {

// GQuark webkit_network_error_quark ();
// ::GQuark webkit_network_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_network_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace NetworkErrorNS_

namespace PluginErrorNS_ {

// GQuark webkit_plugin_error_quark ();
// ::GQuark webkit_plugin_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_plugin_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PluginErrorNS_

namespace PolicyErrorNS_ {

// GQuark webkit_policy_error_quark ();
// ::GQuark webkit_policy_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_policy_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PolicyErrorNS_

namespace PrintErrorNS_ {

// GQuark webkit_print_error_quark ();
// ::GQuark webkit_print_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_print_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PrintErrorNS_

namespace SnapshotErrorNS_ {

// GQuark webkit_snapshot_error_quark ();
// ::GQuark webkit_snapshot_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_snapshot_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace SnapshotErrorNS_

namespace UserContentFilterErrorNS_ {

// GQuark webkit_user_content_filter_error_quark ();
// ::GQuark webkit_user_content_filter_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace UserContentFilterErrorNS_

namespace UserMessageErrorNS_ {

// GQuark webkit_user_message_error_quark ();
// ::GQuark webkit_user_message_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace UserMessageErrorNS_

// guint webkit_get_major_version ();
// guint webkit_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint webkit_get_micro_version ();
// guint webkit_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint webkit_get_minor_version ();
// guint webkit_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const gchar* webkit_media_key_system_permission_get_name (WebKitMediaKeySystemPermissionRequest* request);
// const char* webkit_media_key_system_permission_get_name (::WebKitMediaKeySystemPermissionRequest* request);
std::string media_key_system_permission_get_name (WebKit2::MediaKeySystemPermissionRequest request) noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitMediaKeySystemPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_media_key_system_permission_get_name;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitMediaKeySystemPermissionRequest*) (request_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* webkit_uri_for_display (const gchar* uri);
// char* webkit_uri_for_display (const char* uri);
std::string uri_for_display (const std::string & uri) noexcept
{
  typedef char* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_uri_for_display;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean webkit_user_media_permission_is_for_audio_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_audio_device (::WebKitUserMediaPermissionRequest* request);
bool user_media_permission_is_for_audio_device (WebKit2::UserMediaPermissionRequest request) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserMediaPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_media_permission_is_for_audio_device;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserMediaPermissionRequest*) (request_to_c));
  return _temp_ret;
}

// gboolean webkit_user_media_permission_is_for_display_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_display_device (::WebKitUserMediaPermissionRequest* request);
bool user_media_permission_is_for_display_device (WebKit2::UserMediaPermissionRequest request) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserMediaPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_media_permission_is_for_display_device;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserMediaPermissionRequest*) (request_to_c));
  return _temp_ret;
}

// gboolean webkit_user_media_permission_is_for_video_device (WebKitUserMediaPermissionRequest* request);
// gboolean webkit_user_media_permission_is_for_video_device (::WebKitUserMediaPermissionRequest* request);
bool user_media_permission_is_for_video_device (WebKit2::UserMediaPermissionRequest request) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserMediaPermissionRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_media_permission_is_for_video_device;
  auto request_to_c = gi::unwrap (request, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserMediaPermissionRequest*) (request_to_c));
  return _temp_ret;
}

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
