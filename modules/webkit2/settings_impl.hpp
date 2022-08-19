// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SETTINGS_IMPL_HPP_
#define _GI_WEBKIT2_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitSettings* webkit_settings_new ();
// ::WebKitSettings* webkit_settings_new ();
WebKit2::Settings base::SettingsBase::new_ () noexcept
{
  typedef ::WebKitSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitSettings* webkit_settings_new_with_settings (const gchar* first_setting_name);
// ::WebKitSettings* webkit_settings_new_with_settings (const char* first_setting_name);
// IGNORE; not introspectable, varargs not supported

// guint32 webkit_settings_font_size_to_pixels (guint32 points);
// guint32 webkit_settings_font_size_to_pixels (guint32 points);
guint32 base::SettingsBase::font_size_to_pixels (guint32 points) noexcept
{
  typedef guint32 (*call_wrap_t) (guint32 points);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_font_size_to_pixels;
  auto points_to_c = points;
  auto _temp_ret = call_wrap_v ((guint32) (points_to_c));
  return _temp_ret;
}

// guint32 webkit_settings_font_size_to_points (guint32 pixels);
// guint32 webkit_settings_font_size_to_points (guint32 pixels);
guint32 base::SettingsBase::font_size_to_points (guint32 pixels) noexcept
{
  typedef guint32 (*call_wrap_t) (guint32 pixels);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_font_size_to_points;
  auto pixels_to_c = pixels;
  auto _temp_ret = call_wrap_v ((guint32) (pixels_to_c));
  return _temp_ret;
}

// gboolean webkit_settings_get_allow_file_access_from_file_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_file_access_from_file_urls (::WebKitSettings* settings);
bool base::SettingsBase::get_allow_file_access_from_file_urls () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_allow_file_access_from_file_urls;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_allow_modal_dialogs (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_modal_dialogs (::WebKitSettings* settings);
bool base::SettingsBase::get_allow_modal_dialogs () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_allow_modal_dialogs;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_allow_top_navigation_to_data_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_top_navigation_to_data_urls (::WebKitSettings* settings);
bool base::SettingsBase::get_allow_top_navigation_to_data_urls () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_allow_top_navigation_to_data_urls;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_allow_universal_access_from_file_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_universal_access_from_file_urls (::WebKitSettings* settings);
bool base::SettingsBase::get_allow_universal_access_from_file_urls () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_allow_universal_access_from_file_urls;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_auto_load_images (WebKitSettings* settings);
// gboolean webkit_settings_get_auto_load_images (::WebKitSettings* settings);
bool base::SettingsBase::get_auto_load_images () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_auto_load_images;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_settings_get_cursive_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_cursive_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_cursive_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_cursive_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_settings_get_default_charset (WebKitSettings* settings);
// const char* webkit_settings_get_default_charset (::WebKitSettings* settings);
std::string base::SettingsBase::get_default_charset () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_default_charset;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_settings_get_default_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_default_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_default_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_default_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint32 webkit_settings_get_default_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_default_font_size (::WebKitSettings* settings);
guint32 base::SettingsBase::get_default_font_size () noexcept
{
  typedef guint32 (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_default_font_size;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// guint32 webkit_settings_get_default_monospace_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_default_monospace_font_size (::WebKitSettings* settings);
guint32 base::SettingsBase::get_default_monospace_font_size () noexcept
{
  typedef guint32 (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_default_monospace_font_size;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_draw_compositing_indicators (WebKitSettings* settings);
// gboolean webkit_settings_get_draw_compositing_indicators (::WebKitSettings* settings);
bool base::SettingsBase::get_draw_compositing_indicators () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_draw_compositing_indicators;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_accelerated_2d_canvas (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_accelerated_2d_canvas (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_back_forward_navigation_gestures (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_back_forward_navigation_gestures (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_back_forward_navigation_gestures () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_back_forward_navigation_gestures;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_caret_browsing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_caret_browsing (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_caret_browsing () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_caret_browsing;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_developer_extras (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_developer_extras (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_developer_extras () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_developer_extras;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_dns_prefetching (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_dns_prefetching (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_dns_prefetching () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_dns_prefetching;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_encrypted_media (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_encrypted_media (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_encrypted_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_encrypted_media;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_frame_flattening (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_frame_flattening (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_frame_flattening () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_frame_flattening;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_fullscreen (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_fullscreen (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_fullscreen () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_fullscreen;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_html5_database (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_html5_database (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_html5_database () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_html5_database;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_html5_local_storage (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_html5_local_storage (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_html5_local_storage () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_html5_local_storage;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_hyperlink_auditing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_hyperlink_auditing (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_hyperlink_auditing () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_hyperlink_auditing;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_java (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_java (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_java () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_java;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_javascript (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_javascript (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_javascript () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_javascript;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_javascript_markup (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_javascript_markup (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_javascript_markup () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_javascript_markup;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_media (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_media;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_media_capabilities (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media_capabilities (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_media_capabilities () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_media_capabilities;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_media_stream (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media_stream (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_media_stream () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_media_stream;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_mediasource (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_mediasource (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_mediasource () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_mediasource;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_mock_capture_devices (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_mock_capture_devices (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_mock_capture_devices () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_mock_capture_devices;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_offline_web_application_cache (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_offline_web_application_cache (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_offline_web_application_cache () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_offline_web_application_cache;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_page_cache (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_page_cache (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_page_cache () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_page_cache;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_plugins (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_plugins (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_private_browsing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_private_browsing (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_resizable_text_areas (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_resizable_text_areas (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_resizable_text_areas () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_resizable_text_areas;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_site_specific_quirks (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_site_specific_quirks (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_site_specific_quirks () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_site_specific_quirks;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_smooth_scrolling (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_smooth_scrolling (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_smooth_scrolling () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_smooth_scrolling;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_spatial_navigation (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_spatial_navigation (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_spatial_navigation () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_spatial_navigation;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_tabs_to_links (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_tabs_to_links (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_tabs_to_links () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_tabs_to_links;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_webaudio (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_webaudio (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_webaudio () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_webaudio;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_webgl (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_webgl (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_webgl () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_webgl;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_write_console_messages_to_stdout (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_write_console_messages_to_stdout (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_write_console_messages_to_stdout () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_write_console_messages_to_stdout;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_enable_xss_auditor (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_xss_auditor (::WebKitSettings* settings);
bool base::SettingsBase::get_enable_xss_auditor () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_enable_xss_auditor;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_settings_get_fantasy_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_fantasy_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_fantasy_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_fantasy_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitHardwareAccelerationPolicy webkit_settings_get_hardware_acceleration_policy (WebKitSettings* settings);
// ::WebKitHardwareAccelerationPolicy webkit_settings_get_hardware_acceleration_policy (::WebKitSettings* settings);
WebKit2::HardwareAccelerationPolicy base::SettingsBase::get_hardware_acceleration_policy () noexcept
{
  typedef ::WebKitHardwareAccelerationPolicy (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_hardware_acceleration_policy;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean webkit_settings_get_javascript_can_access_clipboard (WebKitSettings* settings);
// gboolean webkit_settings_get_javascript_can_access_clipboard (::WebKitSettings* settings);
bool base::SettingsBase::get_javascript_can_access_clipboard () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_javascript_can_access_clipboard;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_javascript_can_open_windows_automatically (WebKitSettings* settings);
// gboolean webkit_settings_get_javascript_can_open_windows_automatically (::WebKitSettings* settings);
bool base::SettingsBase::get_javascript_can_open_windows_automatically () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_javascript_can_open_windows_automatically;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_load_icons_ignoring_image_load_setting (WebKitSettings* settings);
// gboolean webkit_settings_get_load_icons_ignoring_image_load_setting (::WebKitSettings* settings);
bool base::SettingsBase::get_load_icons_ignoring_image_load_setting () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_load_icons_ignoring_image_load_setting;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_settings_get_media_content_types_requiring_hardware_support (WebKitSettings* settings);
// const char* webkit_settings_get_media_content_types_requiring_hardware_support (::WebKitSettings* settings);
std::string base::SettingsBase::get_media_content_types_requiring_hardware_support () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_media_content_types_requiring_hardware_support;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_settings_get_media_playback_allows_inline (WebKitSettings* settings);
// gboolean webkit_settings_get_media_playback_allows_inline (::WebKitSettings* settings);
bool base::SettingsBase::get_media_playback_allows_inline () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_media_playback_allows_inline;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_settings_get_media_playback_requires_user_gesture (WebKitSettings* settings);
// gboolean webkit_settings_get_media_playback_requires_user_gesture (::WebKitSettings* settings);
bool base::SettingsBase::get_media_playback_requires_user_gesture () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_media_playback_requires_user_gesture;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// guint32 webkit_settings_get_minimum_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_minimum_font_size (::WebKitSettings* settings);
guint32 base::SettingsBase::get_minimum_font_size () noexcept
{
  typedef guint32 (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_minimum_font_size;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_settings_get_monospace_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_monospace_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_monospace_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_monospace_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_settings_get_pictograph_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_pictograph_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_pictograph_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_pictograph_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_settings_get_print_backgrounds (WebKitSettings* settings);
// gboolean webkit_settings_get_print_backgrounds (::WebKitSettings* settings);
bool base::SettingsBase::get_print_backgrounds () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_print_backgrounds;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_settings_get_sans_serif_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_sans_serif_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_sans_serif_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_sans_serif_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_settings_get_serif_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_serif_font_family (::WebKitSettings* settings);
std::string base::SettingsBase::get_serif_font_family () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_serif_font_family;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_settings_get_user_agent (WebKitSettings* settings);
// const char* webkit_settings_get_user_agent (::WebKitSettings* settings);
std::string base::SettingsBase::get_user_agent () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_user_agent;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_settings_get_zoom_text_only (WebKitSettings* settings);
// gboolean webkit_settings_get_zoom_text_only (::WebKitSettings* settings);
bool base::SettingsBase::get_zoom_text_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_get_zoom_text_only;
  auto _temp_ret = call_wrap_v ((::WebKitSettings*) (gobj_()));
  return _temp_ret;
}

// void webkit_settings_set_allow_file_access_from_file_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_file_access_from_file_urls (::WebKitSettings* settings, gboolean allowed);
void base::SettingsBase::set_allow_file_access_from_file_urls (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_allow_file_access_from_file_urls;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_settings_set_allow_modal_dialogs (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_modal_dialogs (::WebKitSettings* settings, gboolean allowed);
void base::SettingsBase::set_allow_modal_dialogs (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_allow_modal_dialogs;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_settings_set_allow_top_navigation_to_data_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_top_navigation_to_data_urls (::WebKitSettings* settings, gboolean allowed);
void base::SettingsBase::set_allow_top_navigation_to_data_urls (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_allow_top_navigation_to_data_urls;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_settings_set_allow_universal_access_from_file_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_universal_access_from_file_urls (::WebKitSettings* settings, gboolean allowed);
void base::SettingsBase::set_allow_universal_access_from_file_urls (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_allow_universal_access_from_file_urls;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_settings_set_auto_load_images (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_auto_load_images (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_auto_load_images (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_auto_load_images;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_cursive_font_family (WebKitSettings* settings, const gchar* cursive_font_family);
// void webkit_settings_set_cursive_font_family (::WebKitSettings* settings, const char* cursive_font_family);
void base::SettingsBase::set_cursive_font_family (const std::string & cursive_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* cursive_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_cursive_font_family;
  auto cursive_font_family_to_c = gi::unwrap (cursive_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (cursive_font_family_to_c));
}

// void webkit_settings_set_default_charset (WebKitSettings* settings, const gchar* default_charset);
// void webkit_settings_set_default_charset (::WebKitSettings* settings, const char* default_charset);
void base::SettingsBase::set_default_charset (const std::string & default_charset) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* default_charset);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_default_charset;
  auto default_charset_to_c = gi::unwrap (default_charset, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (default_charset_to_c));
}

// void webkit_settings_set_default_font_family (WebKitSettings* settings, const gchar* default_font_family);
// void webkit_settings_set_default_font_family (::WebKitSettings* settings, const char* default_font_family);
void base::SettingsBase::set_default_font_family (const std::string & default_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* default_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_default_font_family;
  auto default_font_family_to_c = gi::unwrap (default_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (default_font_family_to_c));
}

// void webkit_settings_set_default_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_default_font_size (::WebKitSettings* settings, guint32 font_size);
void base::SettingsBase::set_default_font_size (guint32 font_size) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, guint32 font_size);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_default_font_size;
  auto font_size_to_c = font_size;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (guint32) (font_size_to_c));
}

// void webkit_settings_set_default_monospace_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_default_monospace_font_size (::WebKitSettings* settings, guint32 font_size);
void base::SettingsBase::set_default_monospace_font_size (guint32 font_size) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, guint32 font_size);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_default_monospace_font_size;
  auto font_size_to_c = font_size;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (guint32) (font_size_to_c));
}

// void webkit_settings_set_draw_compositing_indicators (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_draw_compositing_indicators (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_draw_compositing_indicators (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_draw_compositing_indicators;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_accelerated_2d_canvas (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_accelerated_2d_canvas (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_back_forward_navigation_gestures (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_back_forward_navigation_gestures (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_back_forward_navigation_gestures (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_back_forward_navigation_gestures;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_caret_browsing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_caret_browsing (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_caret_browsing (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_caret_browsing;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_developer_extras (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_developer_extras (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_developer_extras (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_developer_extras;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_dns_prefetching (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_dns_prefetching (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_dns_prefetching (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_dns_prefetching;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_encrypted_media (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_encrypted_media (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_encrypted_media (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_encrypted_media;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_frame_flattening (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_frame_flattening (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_frame_flattening (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_frame_flattening;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_fullscreen (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_fullscreen (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_fullscreen (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_fullscreen;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_html5_database (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_html5_database (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_html5_database (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_html5_database;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_html5_local_storage (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_html5_local_storage (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_html5_local_storage (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_html5_local_storage;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_hyperlink_auditing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_hyperlink_auditing (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_hyperlink_auditing (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_hyperlink_auditing;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_java (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_java (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_java (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_java;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_javascript (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_javascript (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_javascript (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_javascript;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_javascript_markup (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_javascript_markup (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_javascript_markup (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_javascript_markup;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_media (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_media (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_media;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_media_capabilities (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media_capabilities (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_media_capabilities (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_media_capabilities;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_media_stream (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media_stream (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_media_stream (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_media_stream;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_mediasource (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_mediasource (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_mediasource (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_mediasource;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_mock_capture_devices (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_mock_capture_devices (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_mock_capture_devices (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_mock_capture_devices;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_offline_web_application_cache (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_offline_web_application_cache (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_offline_web_application_cache (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_offline_web_application_cache;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_page_cache (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_page_cache (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_page_cache (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_page_cache;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_plugins (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_plugins (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_private_browsing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_private_browsing (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_resizable_text_areas (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_resizable_text_areas (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_resizable_text_areas (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_resizable_text_areas;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_site_specific_quirks (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_site_specific_quirks (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_site_specific_quirks (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_site_specific_quirks;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_smooth_scrolling (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_smooth_scrolling (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_smooth_scrolling (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_smooth_scrolling;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_spatial_navigation (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_spatial_navigation (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_spatial_navigation (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_spatial_navigation;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_tabs_to_links (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_tabs_to_links (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_tabs_to_links (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_tabs_to_links;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_webaudio (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_webaudio (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_webaudio (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_webaudio;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_webgl (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_webgl (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_webgl (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_webgl;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_write_console_messages_to_stdout (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_write_console_messages_to_stdout (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_write_console_messages_to_stdout (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_write_console_messages_to_stdout;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_enable_xss_auditor (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_xss_auditor (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_enable_xss_auditor (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_enable_xss_auditor;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_fantasy_font_family (WebKitSettings* settings, const gchar* fantasy_font_family);
// void webkit_settings_set_fantasy_font_family (::WebKitSettings* settings, const char* fantasy_font_family);
void base::SettingsBase::set_fantasy_font_family (const std::string & fantasy_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* fantasy_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_fantasy_font_family;
  auto fantasy_font_family_to_c = gi::unwrap (fantasy_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (fantasy_font_family_to_c));
}

// void webkit_settings_set_hardware_acceleration_policy (WebKitSettings* settings, WebKitHardwareAccelerationPolicy policy);
// void webkit_settings_set_hardware_acceleration_policy (::WebKitSettings* settings, ::WebKitHardwareAccelerationPolicy policy);
void base::SettingsBase::set_hardware_acceleration_policy (WebKit2::HardwareAccelerationPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, ::WebKitHardwareAccelerationPolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_hardware_acceleration_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (::WebKitHardwareAccelerationPolicy) (policy_to_c));
}

// void webkit_settings_set_javascript_can_access_clipboard (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_javascript_can_access_clipboard (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_javascript_can_access_clipboard (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_javascript_can_access_clipboard;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_javascript_can_open_windows_automatically (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_javascript_can_open_windows_automatically (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_javascript_can_open_windows_automatically (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_javascript_can_open_windows_automatically;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_load_icons_ignoring_image_load_setting (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_load_icons_ignoring_image_load_setting (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_load_icons_ignoring_image_load_setting (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_load_icons_ignoring_image_load_setting;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_media_content_types_requiring_hardware_support (WebKitSettings* settings, const gchar* content_types);
// void webkit_settings_set_media_content_types_requiring_hardware_support (::WebKitSettings* settings, const char* content_types);
void base::SettingsBase::set_media_content_types_requiring_hardware_support (const std::string & content_types) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* content_types);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_media_content_types_requiring_hardware_support;
  auto content_types_to_c = gi::unwrap (content_types, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (content_types_to_c));
}
void base::SettingsBase::set_media_content_types_requiring_hardware_support () noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* content_types);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_media_content_types_requiring_hardware_support;
  auto content_types_to_c = nullptr;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (content_types_to_c));
}

// void webkit_settings_set_media_playback_allows_inline (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_media_playback_allows_inline (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_media_playback_allows_inline (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_media_playback_allows_inline;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_media_playback_requires_user_gesture (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_media_playback_requires_user_gesture (::WebKitSettings* settings, gboolean enabled);
void base::SettingsBase::set_media_playback_requires_user_gesture (gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_media_playback_requires_user_gesture;
  auto enabled_to_c = enabled;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (enabled_to_c));
}

// void webkit_settings_set_minimum_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_minimum_font_size (::WebKitSettings* settings, guint32 font_size);
void base::SettingsBase::set_minimum_font_size (guint32 font_size) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, guint32 font_size);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_minimum_font_size;
  auto font_size_to_c = font_size;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (guint32) (font_size_to_c));
}

// void webkit_settings_set_monospace_font_family (WebKitSettings* settings, const gchar* monospace_font_family);
// void webkit_settings_set_monospace_font_family (::WebKitSettings* settings, const char* monospace_font_family);
void base::SettingsBase::set_monospace_font_family (const std::string & monospace_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* monospace_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_monospace_font_family;
  auto monospace_font_family_to_c = gi::unwrap (monospace_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (monospace_font_family_to_c));
}

// void webkit_settings_set_pictograph_font_family (WebKitSettings* settings, const gchar* pictograph_font_family);
// void webkit_settings_set_pictograph_font_family (::WebKitSettings* settings, const char* pictograph_font_family);
void base::SettingsBase::set_pictograph_font_family (const std::string & pictograph_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* pictograph_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_pictograph_font_family;
  auto pictograph_font_family_to_c = gi::unwrap (pictograph_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (pictograph_font_family_to_c));
}

// void webkit_settings_set_print_backgrounds (WebKitSettings* settings, gboolean print_backgrounds);
// void webkit_settings_set_print_backgrounds (::WebKitSettings* settings, gboolean print_backgrounds);
void base::SettingsBase::set_print_backgrounds (gboolean print_backgrounds) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean print_backgrounds);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_print_backgrounds;
  auto print_backgrounds_to_c = print_backgrounds;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (print_backgrounds_to_c));
}

// void webkit_settings_set_sans_serif_font_family (WebKitSettings* settings, const gchar* sans_serif_font_family);
// void webkit_settings_set_sans_serif_font_family (::WebKitSettings* settings, const char* sans_serif_font_family);
void base::SettingsBase::set_sans_serif_font_family (const std::string & sans_serif_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* sans_serif_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_sans_serif_font_family;
  auto sans_serif_font_family_to_c = gi::unwrap (sans_serif_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (sans_serif_font_family_to_c));
}

// void webkit_settings_set_serif_font_family (WebKitSettings* settings, const gchar* serif_font_family);
// void webkit_settings_set_serif_font_family (::WebKitSettings* settings, const char* serif_font_family);
void base::SettingsBase::set_serif_font_family (const std::string & serif_font_family) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* serif_font_family);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_serif_font_family;
  auto serif_font_family_to_c = gi::unwrap (serif_font_family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (serif_font_family_to_c));
}

// void webkit_settings_set_user_agent (WebKitSettings* settings, const gchar* user_agent);
// void webkit_settings_set_user_agent (::WebKitSettings* settings, const char* user_agent);
void base::SettingsBase::set_user_agent (const std::string & user_agent) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* user_agent);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_user_agent;
  auto user_agent_to_c = gi::unwrap (user_agent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (user_agent_to_c));
}
void base::SettingsBase::set_user_agent () noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* user_agent);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_user_agent;
  auto user_agent_to_c = nullptr;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (user_agent_to_c));
}

// void webkit_settings_set_user_agent_with_application_details (WebKitSettings* settings, const gchar* application_name, const gchar* application_version);
// void webkit_settings_set_user_agent_with_application_details (::WebKitSettings* settings, const char* application_name, const char* application_version);
void base::SettingsBase::set_user_agent_with_application_details (const std::string & application_name, const std::string & application_version) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* application_name, const char* application_version);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_user_agent_with_application_details;
  auto application_version_to_c = gi::unwrap (application_version, gi::transfer_none, gi::direction_in);
  auto application_name_to_c = gi::unwrap (application_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (application_name_to_c), (const char*) (application_version_to_c));
}
void base::SettingsBase::set_user_agent_with_application_details () noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, const char* application_name, const char* application_version);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_user_agent_with_application_details;
  auto application_version_to_c = nullptr;
  auto application_name_to_c = nullptr;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (const char*) (application_name_to_c), (const char*) (application_version_to_c));
}

// void webkit_settings_set_zoom_text_only (WebKitSettings* settings, gboolean zoom_text_only);
// void webkit_settings_set_zoom_text_only (::WebKitSettings* settings, gboolean zoom_text_only);
void base::SettingsBase::set_zoom_text_only (gboolean zoom_text_only) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSettings* settings, gboolean zoom_text_only);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_settings_set_zoom_text_only;
  auto zoom_text_only_to_c = zoom_text_only;
  call_wrap_v ((::WebKitSettings*) (gobj_()), (gboolean) (zoom_text_only_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/settings_extra_def_impl.hpp>)
#include <webkit2/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/settings_extra_impl.hpp>)
#include <webkit2/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void SettingsClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitSettingsClass *methods = (::WebKitSettingsClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
