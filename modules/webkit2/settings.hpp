// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SETTINGS_HPP_
#define _GI_WEBKIT2_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class Settings;

namespace base {


#define GI_WEBKIT2_SETTINGS_BASE base::SettingsBase
class SettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_settings_get_type(); } 

// WebKitSettings* webkit_settings_new ();
// ::WebKitSettings* webkit_settings_new ();
static GI_INLINE_DECL WebKit2::Settings new_ () noexcept;

// WebKitSettings* webkit_settings_new_with_settings (const gchar* first_setting_name);
// ::WebKitSettings* webkit_settings_new_with_settings (const char* first_setting_name);
// IGNORE; not introspectable, varargs not supported

// guint32 webkit_settings_font_size_to_pixels (guint32 points);
// guint32 webkit_settings_font_size_to_pixels (guint32 points);
static GI_INLINE_DECL guint32 font_size_to_pixels (guint32 points) noexcept;

// guint32 webkit_settings_font_size_to_points (guint32 pixels);
// guint32 webkit_settings_font_size_to_points (guint32 pixels);
static GI_INLINE_DECL guint32 font_size_to_points (guint32 pixels) noexcept;

// gboolean webkit_settings_get_allow_file_access_from_file_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_file_access_from_file_urls (::WebKitSettings* settings);
GI_INLINE_DECL bool get_allow_file_access_from_file_urls () noexcept;

// gboolean webkit_settings_get_allow_modal_dialogs (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_modal_dialogs (::WebKitSettings* settings);
GI_INLINE_DECL bool get_allow_modal_dialogs () noexcept;

// gboolean webkit_settings_get_allow_top_navigation_to_data_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_top_navigation_to_data_urls (::WebKitSettings* settings);
GI_INLINE_DECL bool get_allow_top_navigation_to_data_urls () noexcept;

// gboolean webkit_settings_get_allow_universal_access_from_file_urls (WebKitSettings* settings);
// gboolean webkit_settings_get_allow_universal_access_from_file_urls (::WebKitSettings* settings);
GI_INLINE_DECL bool get_allow_universal_access_from_file_urls () noexcept;

// gboolean webkit_settings_get_auto_load_images (WebKitSettings* settings);
// gboolean webkit_settings_get_auto_load_images (::WebKitSettings* settings);
GI_INLINE_DECL bool get_auto_load_images () noexcept;

// const gchar* webkit_settings_get_cursive_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_cursive_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_cursive_font_family () noexcept;

// const gchar* webkit_settings_get_default_charset (WebKitSettings* settings);
// const char* webkit_settings_get_default_charset (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_default_charset () noexcept;

// const gchar* webkit_settings_get_default_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_default_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_default_font_family () noexcept;

// guint32 webkit_settings_get_default_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_default_font_size (::WebKitSettings* settings);
GI_INLINE_DECL guint32 get_default_font_size () noexcept;

// guint32 webkit_settings_get_default_monospace_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_default_monospace_font_size (::WebKitSettings* settings);
GI_INLINE_DECL guint32 get_default_monospace_font_size () noexcept;

// gboolean webkit_settings_get_draw_compositing_indicators (WebKitSettings* settings);
// gboolean webkit_settings_get_draw_compositing_indicators (::WebKitSettings* settings);
GI_INLINE_DECL bool get_draw_compositing_indicators () noexcept;

// gboolean webkit_settings_get_enable_accelerated_2d_canvas (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_accelerated_2d_canvas (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_back_forward_navigation_gestures (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_back_forward_navigation_gestures (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_back_forward_navigation_gestures () noexcept;

// gboolean webkit_settings_get_enable_caret_browsing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_caret_browsing (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_caret_browsing () noexcept;

// gboolean webkit_settings_get_enable_developer_extras (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_developer_extras (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_developer_extras () noexcept;

// gboolean webkit_settings_get_enable_dns_prefetching (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_dns_prefetching (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_dns_prefetching () noexcept;

// gboolean webkit_settings_get_enable_encrypted_media (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_encrypted_media (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_encrypted_media () noexcept;

// gboolean webkit_settings_get_enable_frame_flattening (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_frame_flattening (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_frame_flattening () noexcept;

// gboolean webkit_settings_get_enable_fullscreen (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_fullscreen (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_fullscreen () noexcept;

// gboolean webkit_settings_get_enable_html5_database (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_html5_database (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_html5_database () noexcept;

// gboolean webkit_settings_get_enable_html5_local_storage (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_html5_local_storage (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_html5_local_storage () noexcept;

// gboolean webkit_settings_get_enable_hyperlink_auditing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_hyperlink_auditing (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_hyperlink_auditing () noexcept;

// gboolean webkit_settings_get_enable_java (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_java (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_java () noexcept;

// gboolean webkit_settings_get_enable_javascript (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_javascript (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_javascript () noexcept;

// gboolean webkit_settings_get_enable_javascript_markup (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_javascript_markup (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_javascript_markup () noexcept;

// gboolean webkit_settings_get_enable_media (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_media () noexcept;

// gboolean webkit_settings_get_enable_media_capabilities (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media_capabilities (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_media_capabilities () noexcept;

// gboolean webkit_settings_get_enable_media_stream (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_media_stream (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_media_stream () noexcept;

// gboolean webkit_settings_get_enable_mediasource (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_mediasource (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_mediasource () noexcept;

// gboolean webkit_settings_get_enable_mock_capture_devices (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_mock_capture_devices (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_mock_capture_devices () noexcept;

// gboolean webkit_settings_get_enable_offline_web_application_cache (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_offline_web_application_cache (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_offline_web_application_cache () noexcept;

// gboolean webkit_settings_get_enable_page_cache (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_page_cache (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_page_cache () noexcept;

// gboolean webkit_settings_get_enable_plugins (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_plugins (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_private_browsing (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_private_browsing (::WebKitSettings* settings);
// IGNORE; deprecated

// gboolean webkit_settings_get_enable_resizable_text_areas (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_resizable_text_areas (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_resizable_text_areas () noexcept;

// gboolean webkit_settings_get_enable_site_specific_quirks (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_site_specific_quirks (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_site_specific_quirks () noexcept;

// gboolean webkit_settings_get_enable_smooth_scrolling (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_smooth_scrolling (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_smooth_scrolling () noexcept;

// gboolean webkit_settings_get_enable_spatial_navigation (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_spatial_navigation (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_spatial_navigation () noexcept;

// gboolean webkit_settings_get_enable_tabs_to_links (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_tabs_to_links (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_tabs_to_links () noexcept;

// gboolean webkit_settings_get_enable_webaudio (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_webaudio (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_webaudio () noexcept;

// gboolean webkit_settings_get_enable_webgl (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_webgl (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_webgl () noexcept;

// gboolean webkit_settings_get_enable_write_console_messages_to_stdout (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_write_console_messages_to_stdout (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_write_console_messages_to_stdout () noexcept;

// gboolean webkit_settings_get_enable_xss_auditor (WebKitSettings* settings);
// gboolean webkit_settings_get_enable_xss_auditor (::WebKitSettings* settings);
GI_INLINE_DECL bool get_enable_xss_auditor () noexcept;

// const gchar* webkit_settings_get_fantasy_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_fantasy_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_fantasy_font_family () noexcept;

// WebKitHardwareAccelerationPolicy webkit_settings_get_hardware_acceleration_policy (WebKitSettings* settings);
// ::WebKitHardwareAccelerationPolicy webkit_settings_get_hardware_acceleration_policy (::WebKitSettings* settings);
GI_INLINE_DECL WebKit2::HardwareAccelerationPolicy get_hardware_acceleration_policy () noexcept;

// gboolean webkit_settings_get_javascript_can_access_clipboard (WebKitSettings* settings);
// gboolean webkit_settings_get_javascript_can_access_clipboard (::WebKitSettings* settings);
GI_INLINE_DECL bool get_javascript_can_access_clipboard () noexcept;

// gboolean webkit_settings_get_javascript_can_open_windows_automatically (WebKitSettings* settings);
// gboolean webkit_settings_get_javascript_can_open_windows_automatically (::WebKitSettings* settings);
GI_INLINE_DECL bool get_javascript_can_open_windows_automatically () noexcept;

// gboolean webkit_settings_get_load_icons_ignoring_image_load_setting (WebKitSettings* settings);
// gboolean webkit_settings_get_load_icons_ignoring_image_load_setting (::WebKitSettings* settings);
GI_INLINE_DECL bool get_load_icons_ignoring_image_load_setting () noexcept;

// const gchar* webkit_settings_get_media_content_types_requiring_hardware_support (WebKitSettings* settings);
// const char* webkit_settings_get_media_content_types_requiring_hardware_support (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_media_content_types_requiring_hardware_support () noexcept;

// gboolean webkit_settings_get_media_playback_allows_inline (WebKitSettings* settings);
// gboolean webkit_settings_get_media_playback_allows_inline (::WebKitSettings* settings);
GI_INLINE_DECL bool get_media_playback_allows_inline () noexcept;

// gboolean webkit_settings_get_media_playback_requires_user_gesture (WebKitSettings* settings);
// gboolean webkit_settings_get_media_playback_requires_user_gesture (::WebKitSettings* settings);
GI_INLINE_DECL bool get_media_playback_requires_user_gesture () noexcept;

// guint32 webkit_settings_get_minimum_font_size (WebKitSettings* settings);
// guint32 webkit_settings_get_minimum_font_size (::WebKitSettings* settings);
GI_INLINE_DECL guint32 get_minimum_font_size () noexcept;

// const gchar* webkit_settings_get_monospace_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_monospace_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_monospace_font_family () noexcept;

// const gchar* webkit_settings_get_pictograph_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_pictograph_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_pictograph_font_family () noexcept;

// gboolean webkit_settings_get_print_backgrounds (WebKitSettings* settings);
// gboolean webkit_settings_get_print_backgrounds (::WebKitSettings* settings);
GI_INLINE_DECL bool get_print_backgrounds () noexcept;

// const gchar* webkit_settings_get_sans_serif_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_sans_serif_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_sans_serif_font_family () noexcept;

// const gchar* webkit_settings_get_serif_font_family (WebKitSettings* settings);
// const char* webkit_settings_get_serif_font_family (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_serif_font_family () noexcept;

// const gchar* webkit_settings_get_user_agent (WebKitSettings* settings);
// const char* webkit_settings_get_user_agent (::WebKitSettings* settings);
GI_INLINE_DECL std::string get_user_agent () noexcept;

// gboolean webkit_settings_get_zoom_text_only (WebKitSettings* settings);
// gboolean webkit_settings_get_zoom_text_only (::WebKitSettings* settings);
GI_INLINE_DECL bool get_zoom_text_only () noexcept;

// void webkit_settings_set_allow_file_access_from_file_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_file_access_from_file_urls (::WebKitSettings* settings, gboolean allowed);
GI_INLINE_DECL void set_allow_file_access_from_file_urls (gboolean allowed) noexcept;

// void webkit_settings_set_allow_modal_dialogs (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_modal_dialogs (::WebKitSettings* settings, gboolean allowed);
GI_INLINE_DECL void set_allow_modal_dialogs (gboolean allowed) noexcept;

// void webkit_settings_set_allow_top_navigation_to_data_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_top_navigation_to_data_urls (::WebKitSettings* settings, gboolean allowed);
GI_INLINE_DECL void set_allow_top_navigation_to_data_urls (gboolean allowed) noexcept;

// void webkit_settings_set_allow_universal_access_from_file_urls (WebKitSettings* settings, gboolean allowed);
// void webkit_settings_set_allow_universal_access_from_file_urls (::WebKitSettings* settings, gboolean allowed);
GI_INLINE_DECL void set_allow_universal_access_from_file_urls (gboolean allowed) noexcept;

// void webkit_settings_set_auto_load_images (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_auto_load_images (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_auto_load_images (gboolean enabled) noexcept;

// void webkit_settings_set_cursive_font_family (WebKitSettings* settings, const gchar* cursive_font_family);
// void webkit_settings_set_cursive_font_family (::WebKitSettings* settings, const char* cursive_font_family);
GI_INLINE_DECL void set_cursive_font_family (const std::string & cursive_font_family) noexcept;

// void webkit_settings_set_default_charset (WebKitSettings* settings, const gchar* default_charset);
// void webkit_settings_set_default_charset (::WebKitSettings* settings, const char* default_charset);
GI_INLINE_DECL void set_default_charset (const std::string & default_charset) noexcept;

// void webkit_settings_set_default_font_family (WebKitSettings* settings, const gchar* default_font_family);
// void webkit_settings_set_default_font_family (::WebKitSettings* settings, const char* default_font_family);
GI_INLINE_DECL void set_default_font_family (const std::string & default_font_family) noexcept;

// void webkit_settings_set_default_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_default_font_size (::WebKitSettings* settings, guint32 font_size);
GI_INLINE_DECL void set_default_font_size (guint32 font_size) noexcept;

// void webkit_settings_set_default_monospace_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_default_monospace_font_size (::WebKitSettings* settings, guint32 font_size);
GI_INLINE_DECL void set_default_monospace_font_size (guint32 font_size) noexcept;

// void webkit_settings_set_draw_compositing_indicators (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_draw_compositing_indicators (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_draw_compositing_indicators (gboolean enabled) noexcept;

// void webkit_settings_set_enable_accelerated_2d_canvas (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_accelerated_2d_canvas (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_back_forward_navigation_gestures (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_back_forward_navigation_gestures (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_back_forward_navigation_gestures (gboolean enabled) noexcept;

// void webkit_settings_set_enable_caret_browsing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_caret_browsing (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_caret_browsing (gboolean enabled) noexcept;

// void webkit_settings_set_enable_developer_extras (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_developer_extras (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_developer_extras (gboolean enabled) noexcept;

// void webkit_settings_set_enable_dns_prefetching (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_dns_prefetching (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_dns_prefetching (gboolean enabled) noexcept;

// void webkit_settings_set_enable_encrypted_media (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_encrypted_media (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_encrypted_media (gboolean enabled) noexcept;

// void webkit_settings_set_enable_frame_flattening (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_frame_flattening (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_frame_flattening (gboolean enabled) noexcept;

// void webkit_settings_set_enable_fullscreen (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_fullscreen (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_fullscreen (gboolean enabled) noexcept;

// void webkit_settings_set_enable_html5_database (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_html5_database (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_html5_database (gboolean enabled) noexcept;

// void webkit_settings_set_enable_html5_local_storage (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_html5_local_storage (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_html5_local_storage (gboolean enabled) noexcept;

// void webkit_settings_set_enable_hyperlink_auditing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_hyperlink_auditing (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_hyperlink_auditing (gboolean enabled) noexcept;

// void webkit_settings_set_enable_java (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_java (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_java (gboolean enabled) noexcept;

// void webkit_settings_set_enable_javascript (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_javascript (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_javascript (gboolean enabled) noexcept;

// void webkit_settings_set_enable_javascript_markup (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_javascript_markup (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_javascript_markup (gboolean enabled) noexcept;

// void webkit_settings_set_enable_media (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_media (gboolean enabled) noexcept;

// void webkit_settings_set_enable_media_capabilities (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media_capabilities (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_media_capabilities (gboolean enabled) noexcept;

// void webkit_settings_set_enable_media_stream (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_media_stream (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_media_stream (gboolean enabled) noexcept;

// void webkit_settings_set_enable_mediasource (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_mediasource (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_mediasource (gboolean enabled) noexcept;

// void webkit_settings_set_enable_mock_capture_devices (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_mock_capture_devices (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_mock_capture_devices (gboolean enabled) noexcept;

// void webkit_settings_set_enable_offline_web_application_cache (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_offline_web_application_cache (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_offline_web_application_cache (gboolean enabled) noexcept;

// void webkit_settings_set_enable_page_cache (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_page_cache (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_page_cache (gboolean enabled) noexcept;

// void webkit_settings_set_enable_plugins (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_plugins (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_private_browsing (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_private_browsing (::WebKitSettings* settings, gboolean enabled);
// IGNORE; deprecated

// void webkit_settings_set_enable_resizable_text_areas (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_resizable_text_areas (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_resizable_text_areas (gboolean enabled) noexcept;

// void webkit_settings_set_enable_site_specific_quirks (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_site_specific_quirks (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_site_specific_quirks (gboolean enabled) noexcept;

// void webkit_settings_set_enable_smooth_scrolling (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_smooth_scrolling (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_smooth_scrolling (gboolean enabled) noexcept;

// void webkit_settings_set_enable_spatial_navigation (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_spatial_navigation (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_spatial_navigation (gboolean enabled) noexcept;

// void webkit_settings_set_enable_tabs_to_links (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_tabs_to_links (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_tabs_to_links (gboolean enabled) noexcept;

// void webkit_settings_set_enable_webaudio (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_webaudio (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_webaudio (gboolean enabled) noexcept;

// void webkit_settings_set_enable_webgl (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_webgl (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_webgl (gboolean enabled) noexcept;

// void webkit_settings_set_enable_write_console_messages_to_stdout (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_write_console_messages_to_stdout (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_write_console_messages_to_stdout (gboolean enabled) noexcept;

// void webkit_settings_set_enable_xss_auditor (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_enable_xss_auditor (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_enable_xss_auditor (gboolean enabled) noexcept;

// void webkit_settings_set_fantasy_font_family (WebKitSettings* settings, const gchar* fantasy_font_family);
// void webkit_settings_set_fantasy_font_family (::WebKitSettings* settings, const char* fantasy_font_family);
GI_INLINE_DECL void set_fantasy_font_family (const std::string & fantasy_font_family) noexcept;

// void webkit_settings_set_hardware_acceleration_policy (WebKitSettings* settings, WebKitHardwareAccelerationPolicy policy);
// void webkit_settings_set_hardware_acceleration_policy (::WebKitSettings* settings, ::WebKitHardwareAccelerationPolicy policy);
GI_INLINE_DECL void set_hardware_acceleration_policy (WebKit2::HardwareAccelerationPolicy policy) noexcept;

// void webkit_settings_set_javascript_can_access_clipboard (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_javascript_can_access_clipboard (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_javascript_can_access_clipboard (gboolean enabled) noexcept;

// void webkit_settings_set_javascript_can_open_windows_automatically (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_javascript_can_open_windows_automatically (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_javascript_can_open_windows_automatically (gboolean enabled) noexcept;

// void webkit_settings_set_load_icons_ignoring_image_load_setting (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_load_icons_ignoring_image_load_setting (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_load_icons_ignoring_image_load_setting (gboolean enabled) noexcept;

// void webkit_settings_set_media_content_types_requiring_hardware_support (WebKitSettings* settings, const gchar* content_types);
// void webkit_settings_set_media_content_types_requiring_hardware_support (::WebKitSettings* settings, const char* content_types);
GI_INLINE_DECL void set_media_content_types_requiring_hardware_support (const std::string & content_types) noexcept;
GI_INLINE_DECL void set_media_content_types_requiring_hardware_support () noexcept;

// void webkit_settings_set_media_playback_allows_inline (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_media_playback_allows_inline (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_media_playback_allows_inline (gboolean enabled) noexcept;

// void webkit_settings_set_media_playback_requires_user_gesture (WebKitSettings* settings, gboolean enabled);
// void webkit_settings_set_media_playback_requires_user_gesture (::WebKitSettings* settings, gboolean enabled);
GI_INLINE_DECL void set_media_playback_requires_user_gesture (gboolean enabled) noexcept;

// void webkit_settings_set_minimum_font_size (WebKitSettings* settings, guint32 font_size);
// void webkit_settings_set_minimum_font_size (::WebKitSettings* settings, guint32 font_size);
GI_INLINE_DECL void set_minimum_font_size (guint32 font_size) noexcept;

// void webkit_settings_set_monospace_font_family (WebKitSettings* settings, const gchar* monospace_font_family);
// void webkit_settings_set_monospace_font_family (::WebKitSettings* settings, const char* monospace_font_family);
GI_INLINE_DECL void set_monospace_font_family (const std::string & monospace_font_family) noexcept;

// void webkit_settings_set_pictograph_font_family (WebKitSettings* settings, const gchar* pictograph_font_family);
// void webkit_settings_set_pictograph_font_family (::WebKitSettings* settings, const char* pictograph_font_family);
GI_INLINE_DECL void set_pictograph_font_family (const std::string & pictograph_font_family) noexcept;

// void webkit_settings_set_print_backgrounds (WebKitSettings* settings, gboolean print_backgrounds);
// void webkit_settings_set_print_backgrounds (::WebKitSettings* settings, gboolean print_backgrounds);
GI_INLINE_DECL void set_print_backgrounds (gboolean print_backgrounds) noexcept;

// void webkit_settings_set_sans_serif_font_family (WebKitSettings* settings, const gchar* sans_serif_font_family);
// void webkit_settings_set_sans_serif_font_family (::WebKitSettings* settings, const char* sans_serif_font_family);
GI_INLINE_DECL void set_sans_serif_font_family (const std::string & sans_serif_font_family) noexcept;

// void webkit_settings_set_serif_font_family (WebKitSettings* settings, const gchar* serif_font_family);
// void webkit_settings_set_serif_font_family (::WebKitSettings* settings, const char* serif_font_family);
GI_INLINE_DECL void set_serif_font_family (const std::string & serif_font_family) noexcept;

// void webkit_settings_set_user_agent (WebKitSettings* settings, const gchar* user_agent);
// void webkit_settings_set_user_agent (::WebKitSettings* settings, const char* user_agent);
GI_INLINE_DECL void set_user_agent (const std::string & user_agent) noexcept;
GI_INLINE_DECL void set_user_agent () noexcept;

// void webkit_settings_set_user_agent_with_application_details (WebKitSettings* settings, const gchar* application_name, const gchar* application_version);
// void webkit_settings_set_user_agent_with_application_details (::WebKitSettings* settings, const char* application_name, const char* application_version);
GI_INLINE_DECL void set_user_agent_with_application_details (const std::string & application_name, const std::string & application_version) noexcept;
GI_INLINE_DECL void set_user_agent_with_application_details () noexcept;

// void webkit_settings_set_zoom_text_only (WebKitSettings* settings, gboolean zoom_text_only);
// void webkit_settings_set_zoom_text_only (::WebKitSettings* settings, gboolean zoom_text_only);
GI_INLINE_DECL void set_zoom_text_only (gboolean zoom_text_only) noexcept;

gi::property_proxy<bool, base::SettingsBase> property_allow_file_access_from_file_urls()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-file-access-from-file-urls"); }
const gi::property_proxy<bool, base::SettingsBase> property_allow_file_access_from_file_urls() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-file-access-from-file-urls"); }

gi::property_proxy<bool, base::SettingsBase> property_allow_modal_dialogs()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-modal-dialogs"); }
const gi::property_proxy<bool, base::SettingsBase> property_allow_modal_dialogs() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-modal-dialogs"); }

gi::property_proxy<bool, base::SettingsBase> property_allow_top_navigation_to_data_urls()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-top-navigation-to-data-urls"); }
const gi::property_proxy<bool, base::SettingsBase> property_allow_top_navigation_to_data_urls() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-top-navigation-to-data-urls"); }

gi::property_proxy<bool, base::SettingsBase> property_allow_universal_access_from_file_urls()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-universal-access-from-file-urls"); }
const gi::property_proxy<bool, base::SettingsBase> property_allow_universal_access_from_file_urls() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "allow-universal-access-from-file-urls"); }

gi::property_proxy<bool, base::SettingsBase> property_auto_load_images()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "auto-load-images"); }
const gi::property_proxy<bool, base::SettingsBase> property_auto_load_images() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "auto-load-images"); }

gi::property_proxy<std::string, base::SettingsBase> property_cursive_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "cursive-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_cursive_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "cursive-font-family"); }

gi::property_proxy<std::string, base::SettingsBase> property_default_charset()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "default-charset"); }
const gi::property_proxy<std::string, base::SettingsBase> property_default_charset() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "default-charset"); }

gi::property_proxy<std::string, base::SettingsBase> property_default_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "default-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_default_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "default-font-family"); }

gi::property_proxy<guint, base::SettingsBase> property_default_font_size()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "default-font-size"); }
const gi::property_proxy<guint, base::SettingsBase> property_default_font_size() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "default-font-size"); }

gi::property_proxy<guint, base::SettingsBase> property_default_monospace_font_size()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "default-monospace-font-size"); }
const gi::property_proxy<guint, base::SettingsBase> property_default_monospace_font_size() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "default-monospace-font-size"); }

gi::property_proxy<bool, base::SettingsBase> property_draw_compositing_indicators()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "draw-compositing-indicators"); }
const gi::property_proxy<bool, base::SettingsBase> property_draw_compositing_indicators() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "draw-compositing-indicators"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_accelerated_2d_canvas()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-accelerated-2d-canvas"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_accelerated_2d_canvas() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-accelerated-2d-canvas"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_back_forward_navigation_gestures()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-back-forward-navigation-gestures"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_back_forward_navigation_gestures() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-back-forward-navigation-gestures"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_caret_browsing()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-caret-browsing"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_caret_browsing() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-caret-browsing"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_developer_extras()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-developer-extras"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_developer_extras() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-developer-extras"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_dns_prefetching()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-dns-prefetching"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_dns_prefetching() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-dns-prefetching"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_encrypted_media()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-encrypted-media"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_encrypted_media() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-encrypted-media"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_frame_flattening()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-frame-flattening"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_frame_flattening() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-frame-flattening"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_fullscreen()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-fullscreen"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_fullscreen() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-fullscreen"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_html5_database()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-html5-database"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_html5_database() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-html5-database"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_html5_local_storage()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-html5-local-storage"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_html5_local_storage() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-html5-local-storage"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_hyperlink_auditing()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-hyperlink-auditing"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_hyperlink_auditing() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-hyperlink-auditing"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_java()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-java"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_java() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-java"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_javascript()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-javascript"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_javascript() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-javascript"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_javascript_markup()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-javascript-markup"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_javascript_markup() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-javascript-markup"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_media()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_media() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_media_capabilities()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media-capabilities"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_media_capabilities() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media-capabilities"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_media_stream()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media-stream"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_media_stream() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-media-stream"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_mediasource()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-mediasource"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_mediasource() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-mediasource"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_mock_capture_devices()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-mock-capture-devices"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_mock_capture_devices() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-mock-capture-devices"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_offline_web_application_cache()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-offline-web-application-cache"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_offline_web_application_cache() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-offline-web-application-cache"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_page_cache()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-page-cache"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_page_cache() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-page-cache"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_plugins()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-plugins"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_plugins() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-plugins"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_private_browsing()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-private-browsing"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_private_browsing() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-private-browsing"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_resizable_text_areas()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-resizable-text-areas"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_resizable_text_areas() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-resizable-text-areas"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_site_specific_quirks()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-site-specific-quirks"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_site_specific_quirks() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-site-specific-quirks"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_smooth_scrolling()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-smooth-scrolling"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_smooth_scrolling() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-smooth-scrolling"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_spatial_navigation()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-spatial-navigation"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_spatial_navigation() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-spatial-navigation"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_tabs_to_links()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-tabs-to-links"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_tabs_to_links() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-tabs-to-links"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_webaudio()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-webaudio"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_webaudio() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-webaudio"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_webgl()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-webgl"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_webgl() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-webgl"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_write_console_messages_to_stdout()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-write-console-messages-to-stdout"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_write_console_messages_to_stdout() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-write-console-messages-to-stdout"); }

gi::property_proxy<bool, base::SettingsBase> property_enable_xss_auditor()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-xss-auditor"); }
const gi::property_proxy<bool, base::SettingsBase> property_enable_xss_auditor() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "enable-xss-auditor"); }

gi::property_proxy<std::string, base::SettingsBase> property_fantasy_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "fantasy-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_fantasy_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "fantasy-font-family"); }

gi::property_proxy<WebKit2::HardwareAccelerationPolicy, base::SettingsBase> property_hardware_acceleration_policy()
{ return gi::property_proxy<WebKit2::HardwareAccelerationPolicy, base::SettingsBase> (*this, "hardware-acceleration-policy"); }
const gi::property_proxy<WebKit2::HardwareAccelerationPolicy, base::SettingsBase> property_hardware_acceleration_policy() const
{ return gi::property_proxy<WebKit2::HardwareAccelerationPolicy, base::SettingsBase> (*this, "hardware-acceleration-policy"); }

gi::property_proxy<bool, base::SettingsBase> property_javascript_can_access_clipboard()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "javascript-can-access-clipboard"); }
const gi::property_proxy<bool, base::SettingsBase> property_javascript_can_access_clipboard() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "javascript-can-access-clipboard"); }

gi::property_proxy<bool, base::SettingsBase> property_javascript_can_open_windows_automatically()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "javascript-can-open-windows-automatically"); }
const gi::property_proxy<bool, base::SettingsBase> property_javascript_can_open_windows_automatically() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "javascript-can-open-windows-automatically"); }

gi::property_proxy<bool, base::SettingsBase> property_load_icons_ignoring_image_load_setting()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "load-icons-ignoring-image-load-setting"); }
const gi::property_proxy<bool, base::SettingsBase> property_load_icons_ignoring_image_load_setting() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "load-icons-ignoring-image-load-setting"); }

gi::property_proxy<std::string, base::SettingsBase> property_media_content_types_requiring_hardware_support()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "media-content-types-requiring-hardware-support"); }
const gi::property_proxy<std::string, base::SettingsBase> property_media_content_types_requiring_hardware_support() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "media-content-types-requiring-hardware-support"); }

gi::property_proxy<bool, base::SettingsBase> property_media_playback_allows_inline()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "media-playback-allows-inline"); }
const gi::property_proxy<bool, base::SettingsBase> property_media_playback_allows_inline() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "media-playback-allows-inline"); }

gi::property_proxy<bool, base::SettingsBase> property_media_playback_requires_user_gesture()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "media-playback-requires-user-gesture"); }
const gi::property_proxy<bool, base::SettingsBase> property_media_playback_requires_user_gesture() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "media-playback-requires-user-gesture"); }

gi::property_proxy<guint, base::SettingsBase> property_minimum_font_size()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "minimum-font-size"); }
const gi::property_proxy<guint, base::SettingsBase> property_minimum_font_size() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "minimum-font-size"); }

gi::property_proxy<std::string, base::SettingsBase> property_monospace_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "monospace-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_monospace_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "monospace-font-family"); }

gi::property_proxy<std::string, base::SettingsBase> property_pictograph_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "pictograph-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_pictograph_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "pictograph-font-family"); }

gi::property_proxy<bool, base::SettingsBase> property_print_backgrounds()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "print-backgrounds"); }
const gi::property_proxy<bool, base::SettingsBase> property_print_backgrounds() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "print-backgrounds"); }

gi::property_proxy<std::string, base::SettingsBase> property_sans_serif_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "sans-serif-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_sans_serif_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "sans-serif-font-family"); }

gi::property_proxy<std::string, base::SettingsBase> property_serif_font_family()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "serif-font-family"); }
const gi::property_proxy<std::string, base::SettingsBase> property_serif_font_family() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "serif-font-family"); }

gi::property_proxy<std::string, base::SettingsBase> property_user_agent()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "user-agent"); }
const gi::property_proxy<std::string, base::SettingsBase> property_user_agent() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "user-agent"); }

gi::property_proxy<bool, base::SettingsBase> property_zoom_text_only()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "zoom-text-only"); }
const gi::property_proxy<bool, base::SettingsBase> property_zoom_text_only() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "zoom-text-only"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/settings_extra_def.hpp>)
#include <webkit2/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/settings_extra.hpp>)
#include <webkit2/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class Settings : public GI_WEBKIT2_SETTINGS_BASE
{ typedef GI_WEBKIT2_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitSettings>
{ typedef WebKit2::Settings type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class SettingsClassDef
{
typedef SettingsClassDef self;
public:
typedef WebKit2::Settings instance_type;
typedef ::WebKitSettingsClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SettingsClass: public detail::ClassTemplate<WebKit2::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass>
{
typedef SettingsClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass> super;

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

using SettingsImpl = detail::ObjectImpl<Settings, internal::SettingsClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
