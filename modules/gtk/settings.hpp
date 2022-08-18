// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGS_HPP_
#define _GI_GTK_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class SettingsValue;
class StyleProvider;

class Settings;

namespace base {


#define GI_GTK_SETTINGS_BASE base::SettingsBase
class SettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_settings_get_type(); } 

GI_INLINE_DECL Gtk::StyleProvider interface_ (gi::interface_tag<Gtk::StyleProvider>);

GI_INLINE_DECL operator Gtk::StyleProvider ();

// GtkSettings* gtk_settings_get_default ();
// ::GtkSettings* gtk_settings_get_default ();
static GI_INLINE_DECL Gtk::Settings get_default () noexcept;

// GtkSettings* gtk_settings_get_for_screen (GdkScreen* screen);
// ::GtkSettings* gtk_settings_get_for_screen (::GdkScreen* screen);
static GI_INLINE_DECL Gtk::Settings get_for_screen (Gdk::Screen screen) noexcept;

// void gtk_settings_install_property (GParamSpec* pspec);
// void gtk_settings_install_property (::GParamSpec* pspec);
// IGNORE; deprecated

// void gtk_settings_install_property_parser (GParamSpec* pspec, GtkRcPropertyParser parser);
// void gtk_settings_install_property_parser (::GParamSpec* pspec,  parser);
// IGNORE; deprecated

// void gtk_settings_reset_property (GtkSettings* settings, const gchar* name);
// void gtk_settings_reset_property (::GtkSettings* settings, const char* name);
GI_INLINE_DECL void reset_property (const std::string & name) noexcept;

// void gtk_settings_set_double_property (GtkSettings* settings, const gchar* name, gdouble v_double, const gchar* origin);
// void gtk_settings_set_double_property (::GtkSettings* settings, const char* name, gdouble v_double, const char* origin);
// IGNORE; deprecated

// void gtk_settings_set_long_property (GtkSettings* settings, const gchar* name, glong v_long, const gchar* origin);
// void gtk_settings_set_long_property (::GtkSettings* settings, const char* name, glong v_long, const char* origin);
// IGNORE; deprecated

// void gtk_settings_set_property_value (GtkSettings* settings, const gchar* name, const GtkSettingsValue* svalue);
// void gtk_settings_set_property_value (::GtkSettings* settings, const char* name, const ::GtkSettingsValue* svalue);
// IGNORE; deprecated

// void gtk_settings_set_string_property (GtkSettings* settings, const gchar* name, const gchar* v_string, const gchar* origin);
// void gtk_settings_set_string_property (::GtkSettings* settings, const char* name, const char* v_string, const char* origin);
// IGNORE; deprecated

gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_button_order()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-button-order"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_button_order() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-button-order"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_sort_arrows()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-sort-arrows"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_sort_arrows() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-sort-arrows"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_application_prefer_dark_theme()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-application-prefer-dark-theme"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_application_prefer_dark_theme() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-application-prefer-dark-theme"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_auto_mnemonics()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-auto-mnemonics"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_auto_mnemonics() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-auto-mnemonics"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_button_images()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-button-images"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_button_images() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-button-images"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_can_change_accels()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-can-change-accels"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_can_change_accels() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-can-change-accels"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_color_palette()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-color-palette"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_color_palette() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-color-palette"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_color_scheme()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-color-scheme"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_color_scheme() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-color-scheme"); }

gi::property_proxy<gfloat, base::SettingsBase> property_gtk_cursor_aspect_ratio()
{ return gi::property_proxy<gfloat, base::SettingsBase> (*this, "gtk-cursor-aspect-ratio"); }
const gi::property_proxy<gfloat, base::SettingsBase> property_gtk_cursor_aspect_ratio() const
{ return gi::property_proxy<gfloat, base::SettingsBase> (*this, "gtk-cursor-aspect-ratio"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_cursor_blink()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-cursor-blink"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_cursor_blink() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-cursor-blink"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_time()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-time"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_time() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-time"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_timeout()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-timeout"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_timeout() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-timeout"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_cursor_theme_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-cursor-theme-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_cursor_theme_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-cursor-theme-name"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_theme_size()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-theme-size"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_theme_size() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-theme-size"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_decoration_layout()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-decoration-layout"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_decoration_layout() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-decoration-layout"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_dialogs_use_header()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-dialogs-use-header"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_dialogs_use_header() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-dialogs-use-header"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_dnd_drag_threshold()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-dnd-drag-threshold"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_dnd_drag_threshold() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-dnd-drag-threshold"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_distance()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-distance"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_distance() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-distance"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_time()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-time"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_time() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-time"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_accels()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-accels"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_accels() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-accels"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_animations()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-animations"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_animations() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-animations"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_event_sounds()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-event-sounds"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_event_sounds() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-event-sounds"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_input_feedback_sounds()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-input-feedback-sounds"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_input_feedback_sounds() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-input-feedback-sounds"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_mnemonics()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-mnemonics"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_mnemonics() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-mnemonics"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_primary_paste()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-primary-paste"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_primary_paste() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-primary-paste"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_tooltips()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-tooltips"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_tooltips() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-tooltips"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_entry_password_hint_timeout()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-entry-password-hint-timeout"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_entry_password_hint_timeout() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-entry-password-hint-timeout"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_entry_select_on_focus()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-entry-select-on-focus"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_entry_select_on_focus() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-entry-select-on-focus"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_error_bell()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-error-bell"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_error_bell() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-error-bell"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_fallback_icon_theme()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-fallback-icon-theme"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_fallback_icon_theme() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-fallback-icon-theme"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_file_chooser_backend()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-file-chooser-backend"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_file_chooser_backend() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-file-chooser-backend"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_font_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-font-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_font_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-font-name"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_fontconfig_timestamp()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-fontconfig-timestamp"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_fontconfig_timestamp() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-fontconfig-timestamp"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_icon_sizes()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-icon-sizes"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_icon_sizes() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-icon-sizes"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_icon_theme_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-icon-theme-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_icon_theme_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-icon-theme-name"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_im_module()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-im-module"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_im_module() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-im-module"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_key_theme_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-key-theme-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_key_theme_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-key-theme-name"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_cursor_only()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-cursor-only"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_cursor_only() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-cursor-only"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_use_caret()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-use-caret"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_use_caret() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-use-caret"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_wrap_around()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-wrap-around"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_wrap_around() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-wrap-around"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_label_select_on_focus()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-label-select-on-focus"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_label_select_on_focus() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-label-select-on-focus"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_long_press_time()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-long-press-time"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_long_press_time() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-long-press-time"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_menu_bar_accel()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-menu-bar-accel"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_menu_bar_accel() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-menu-bar-accel"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_bar_popup_delay()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-bar-popup-delay"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_bar_popup_delay() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-bar-popup-delay"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_menu_images()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-menu-images"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_menu_images() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-menu-images"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_popdown_delay()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-popdown-delay"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_popdown_delay() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-popdown-delay"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_popup_delay()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-popup-delay"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_menu_popup_delay() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-menu-popup-delay"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_modules()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-modules"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_modules() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-modules"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_overlay_scrolling()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-overlay-scrolling"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_overlay_scrolling() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-overlay-scrolling"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_primary_button_warps_slider()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-primary-button-warps-slider"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_primary_button_warps_slider() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-primary-button-warps-slider"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_print_backends()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-print-backends"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_print_backends() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-print-backends"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_print_preview_command()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-print-preview-command"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_print_preview_command() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-print-preview-command"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_recent_files_enabled()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-recent-files-enabled"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_recent_files_enabled() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-recent-files-enabled"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_limit()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-limit"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_limit() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-limit"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_max_age()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-max-age"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_max_age() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-max-age"); }

gi::property_proxy<Gtk::CornerType, base::SettingsBase> property_gtk_scrolled_window_placement()
{ return gi::property_proxy<Gtk::CornerType, base::SettingsBase> (*this, "gtk-scrolled-window-placement"); }
const gi::property_proxy<Gtk::CornerType, base::SettingsBase> property_gtk_scrolled_window_placement() const
{ return gi::property_proxy<Gtk::CornerType, base::SettingsBase> (*this, "gtk-scrolled-window-placement"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_app_menu()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-app-menu"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_app_menu() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-app-menu"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_desktop()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-desktop"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_desktop() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-desktop"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_menubar()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-menubar"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_menubar() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-menubar"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_show_input_method_menu()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-show-input-method-menu"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_show_input_method_menu() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-show-input-method-menu"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_show_unicode_menu()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-show-unicode-menu"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_show_unicode_menu() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-show-unicode-menu"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_sound_theme_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-sound-theme-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_sound_theme_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-sound-theme-name"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_split_cursor()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-split-cursor"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_split_cursor() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-split-cursor"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_theme_name()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-theme-name"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_theme_name() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-theme-name"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_expand()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-expand"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_expand() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-expand"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_initial()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-initial"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_initial() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-initial"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_repeat()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-repeat"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_timeout_repeat() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-timeout-repeat"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_double_click()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-double-click"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_double_click() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-double-click"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_middle_click()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-middle-click"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_middle_click() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-middle-click"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_right_click()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-right-click"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_titlebar_right_click() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-titlebar-right-click"); }

gi::property_proxy<Gtk::IconSize, base::SettingsBase> property_gtk_toolbar_icon_size()
{ return gi::property_proxy<Gtk::IconSize, base::SettingsBase> (*this, "gtk-toolbar-icon-size"); }
const gi::property_proxy<Gtk::IconSize, base::SettingsBase> property_gtk_toolbar_icon_size() const
{ return gi::property_proxy<Gtk::IconSize, base::SettingsBase> (*this, "gtk-toolbar-icon-size"); }

gi::property_proxy<Gtk::ToolbarStyle, base::SettingsBase> property_gtk_toolbar_style()
{ return gi::property_proxy<Gtk::ToolbarStyle, base::SettingsBase> (*this, "gtk-toolbar-style"); }
const gi::property_proxy<Gtk::ToolbarStyle, base::SettingsBase> property_gtk_toolbar_style() const
{ return gi::property_proxy<Gtk::ToolbarStyle, base::SettingsBase> (*this, "gtk-toolbar-style"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_browse_mode_timeout()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-browse-mode-timeout"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_browse_mode_timeout() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-browse-mode-timeout"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_browse_timeout()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-browse-timeout"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_browse_timeout() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-browse-timeout"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_timeout()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-timeout"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_tooltip_timeout() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-tooltip-timeout"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_touchscreen_mode()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-touchscreen-mode"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_touchscreen_mode() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-touchscreen-mode"); }

gi::property_proxy<Gtk::PolicyType, base::SettingsBase> property_gtk_visible_focus()
{ return gi::property_proxy<Gtk::PolicyType, base::SettingsBase> (*this, "gtk-visible-focus"); }
const gi::property_proxy<Gtk::PolicyType, base::SettingsBase> property_gtk_visible_focus() const
{ return gi::property_proxy<Gtk::PolicyType, base::SettingsBase> (*this, "gtk-visible-focus"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_antialias()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-antialias"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_antialias() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-antialias"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_dpi()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-dpi"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_dpi() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-dpi"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_hinting()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-hinting"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_hinting() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-hinting"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_xft_hintstyle()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-xft-hintstyle"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_xft_hintstyle() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-xft-hintstyle"); }

gi::property_proxy<std::string, base::SettingsBase> property_gtk_xft_rgba()
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-xft-rgba"); }
const gi::property_proxy<std::string, base::SettingsBase> property_gtk_xft_rgba() const
{ return gi::property_proxy<std::string, base::SettingsBase> (*this, "gtk-xft-rgba"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_def.hpp>)
#include <gtk/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settings_extra.hpp>)
#include <gtk/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Settings : public GI_GTK_SETTINGS_BASE
{ typedef GI_GTK_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSettings>
{ typedef Gtk::Settings type; }; 

} // namespace repository

} // namespace gi

#include "styleprovider.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SettingsClassDef
{
typedef SettingsClassDef self;
public:
typedef Gtk::Settings instance_type;
typedef ::GtkSettingsClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SettingsClass: public detail::ClassTemplate<Gtk::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl>
{
typedef SettingsClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SettingsClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::StyleProviderIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::StyleProviderIfaceClassImpl GtkStyleProviderIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using SettingsImpl = detail::ObjectImpl<Settings, internal::SettingsClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
