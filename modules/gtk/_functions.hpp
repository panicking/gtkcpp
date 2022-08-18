// AUTO-GENERATED

#ifndef _GI_GTK__FUNCTIONS_HPP_
#define _GI_GTK__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace BuilderErrorNS_ {

// GQuark gtk_builder_error_quark ();
// ::GQuark gtk_builder_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace BuilderErrorNS_

namespace CssProviderErrorNS_ {

// GQuark gtk_css_provider_error_quark ();
// ::GQuark gtk_css_provider_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace CssProviderErrorNS_

namespace FileChooserErrorNS_ {

// GQuark gtk_file_chooser_error_quark ();
// ::GQuark gtk_file_chooser_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace FileChooserErrorNS_

namespace IconSizeNS_ {

// GtkIconSize gtk_icon_size_from_name (const gchar* name);
// gint gtk_icon_size_from_name (const char* name);
// IGNORE; deprecated

// const gchar* gtk_icon_size_get_name (GtkIconSize size);
// const char* gtk_icon_size_get_name (gint size);
// IGNORE; deprecated

// gboolean gtk_icon_size_lookup (GtkIconSize size, gint* width, gint* height);
// gboolean gtk_icon_size_lookup (gint size, gint* width, gint* height);
GI_INLINE_DECL bool lookup (gint size, gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> lookup (gint size) noexcept;

// gboolean gtk_icon_size_lookup_for_settings (GtkSettings* settings, GtkIconSize size, gint* width, gint* height);
// gboolean gtk_icon_size_lookup_for_settings (::GtkSettings* settings, gint size, gint* width, gint* height);
// IGNORE; deprecated

// GtkIconSize gtk_icon_size_register (const gchar* name, gint width, gint height);
// gint gtk_icon_size_register (const char* name, gint width, gint height);
// IGNORE; deprecated

// void gtk_icon_size_register_alias (const gchar* alias, GtkIconSize target);
// void gtk_icon_size_register_alias (const char* alias, gint target);
// IGNORE; deprecated

} // namespace IconSizeNS_

namespace IconThemeErrorNS_ {

// GQuark gtk_icon_theme_error_quark ();
// ::GQuark gtk_icon_theme_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace IconThemeErrorNS_

namespace PrintErrorNS_ {

// GQuark gtk_print_error_quark ();
// ::GQuark gtk_print_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace PrintErrorNS_

namespace RecentChooserErrorNS_ {

// GQuark gtk_recent_chooser_error_quark ();
// ::GQuark gtk_recent_chooser_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace RecentChooserErrorNS_

namespace RecentManagerErrorNS_ {

// GQuark gtk_recent_manager_error_quark ();
// ::GQuark gtk_recent_manager_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace RecentManagerErrorNS_

// gboolean gtk_accel_groups_activate (GObject* object, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_groups_activate (::GObject* object, guint accel_key, ::GdkModifierType accel_mods);
GI_INLINE_DECL bool accel_groups_activate (GObject::Object object, guint accel_key, Gdk::ModifierType accel_mods) noexcept;

// GSList* gtk_accel_groups_from_object (GObject* object);
// ::GSList* gtk_accel_groups_from_object (::GObject* object);
GI_INLINE_DECL std::vector<Gtk::AccelGroup> accel_groups_from_object (GObject::Object object) noexcept;

// GdkModifierType gtk_accelerator_get_default_mod_mask ();
// ::GdkModifierType gtk_accelerator_get_default_mod_mask ();
GI_INLINE_DECL Gdk::ModifierType accelerator_get_default_mod_mask () noexcept;

// gchar* gtk_accelerator_get_label (guint accelerator_key, GdkModifierType accelerator_mods);
// char* gtk_accelerator_get_label (guint accelerator_key, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL std::string accelerator_get_label (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept;

// gchar* gtk_accelerator_get_label_with_keycode (GdkDisplay* display, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* gtk_accelerator_get_label_with_keycode (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL std::string accelerator_get_label_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;
GI_INLINE_DECL std::string accelerator_get_label_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;

// gchar* gtk_accelerator_name (guint accelerator_key, GdkModifierType accelerator_mods);
// char* gtk_accelerator_name (guint accelerator_key, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL std::string accelerator_name (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept;

// gchar* gtk_accelerator_name_with_keycode (GdkDisplay* display, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* gtk_accelerator_name_with_keycode (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
GI_INLINE_DECL std::string accelerator_name_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;
GI_INLINE_DECL std::string accelerator_name_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept;

// void gtk_accelerator_parse (const gchar* accelerator, guint* accelerator_key, GdkModifierType* accelerator_mods);
// void gtk_accelerator_parse (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
GI_INLINE_DECL void accelerator_parse (const std::string & accelerator, guint * accelerator_key = nullptr, Gdk::ModifierType * accelerator_mods = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint, Gdk::ModifierType> accelerator_parse (const std::string & accelerator) noexcept;

// void gtk_accelerator_parse_with_keycode (const gchar* accelerator, guint* accelerator_key, guint** accelerator_codes, GdkModifierType* accelerator_mods);
// void gtk_accelerator_parse_with_keycode (const char* accelerator, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
GI_INLINE_DECL void accelerator_parse_with_keycode (const std::string & accelerator, guint * accelerator_key = nullptr, std::vector<guint> * accelerator_codes = nullptr, Gdk::ModifierType * accelerator_mods = nullptr) noexcept;
GI_INLINE_DECL std::tuple<guint, std::vector<guint>, Gdk::ModifierType> accelerator_parse_with_keycode (const std::string & accelerator) noexcept;

// void gtk_accelerator_set_default_mod_mask (GdkModifierType default_mod_mask);
// void gtk_accelerator_set_default_mod_mask (::GdkModifierType default_mod_mask);
GI_INLINE_DECL void accelerator_set_default_mod_mask (Gdk::ModifierType default_mod_mask) noexcept;

// gboolean gtk_accelerator_valid (guint keyval, GdkModifierType modifiers);
// gboolean gtk_accelerator_valid (guint keyval, ::GdkModifierType modifiers);
GI_INLINE_DECL bool accelerator_valid (guint keyval, Gdk::ModifierType modifiers) noexcept;

// gboolean gtk_bindings_activate (GObject* object, guint keyval, GdkModifierType modifiers);
// gboolean gtk_bindings_activate (::GObject* object, guint keyval, ::GdkModifierType modifiers);
GI_INLINE_DECL bool bindings_activate (GObject::Object object, guint keyval, Gdk::ModifierType modifiers) noexcept;

// gboolean gtk_bindings_activate_event (GObject* object, GdkEventKey* event);
// gboolean gtk_bindings_activate_event (::GObject* object, ::GdkEventKey* event);
GI_INLINE_DECL bool bindings_activate_event (GObject::Object object, Gdk::EventKey event) noexcept;

// gboolean gtk_cairo_should_draw_window (cairo_t* cr, GdkWindow* window);
// gboolean gtk_cairo_should_draw_window (::cairo_t* cr, ::GdkWindow* window);
GI_INLINE_DECL bool cairo_should_draw_window (cairo::Context cr, Gdk::Window window) noexcept;

// void gtk_cairo_transform_to_window (cairo_t* cr, GtkWidget* widget, GdkWindow* window);
// void gtk_cairo_transform_to_window (::cairo_t* cr, ::GtkWidget* widget, ::GdkWindow* window);
GI_INLINE_DECL void cairo_transform_to_window (cairo::Context cr, Gtk::Widget widget, Gdk::Window window) noexcept;

// const gchar* gtk_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* gtk_check_version (guint required_major, guint required_minor, guint required_micro);
GI_INLINE_DECL std::string check_version (guint required_major, guint required_minor, guint required_micro) noexcept;

// void gtk_device_grab_add (GtkWidget* widget, GdkDevice* device, gboolean block_others);
// void gtk_device_grab_add (::GtkWidget* widget, ::GdkDevice* device, gboolean block_others);
GI_INLINE_DECL void device_grab_add (Gtk::Widget widget, Gdk::Device device, gboolean block_others) noexcept;

// void gtk_device_grab_remove (GtkWidget* widget, GdkDevice* device);
// void gtk_device_grab_remove (::GtkWidget* widget, ::GdkDevice* device);
GI_INLINE_DECL void device_grab_remove (Gtk::Widget widget, Gdk::Device device) noexcept;

// void gtk_disable_setlocale ();
// void gtk_disable_setlocale ();
GI_INLINE_DECL void disable_setlocale () noexcept;

// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, GtkRequestedSize* sizes);
// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, ::GtkRequestedSize* sizes);
GI_INLINE_DECL gint distribute_natural_allocation (gint extra_space, guint n_requested_sizes, Gtk::RequestedSize sizes) noexcept;

// void gtk_drag_cancel (GdkDragContext* context);
// void gtk_drag_cancel (::GdkDragContext* context);
GI_INLINE_DECL void drag_cancel (Gdk::DragContext context) noexcept;

// void gtk_drag_finish (GdkDragContext* context, gboolean success, gboolean del, guint32 time_);
// void gtk_drag_finish (::GdkDragContext* context, gboolean success, gboolean del, guint32 time_);
GI_INLINE_DECL void drag_finish (Gdk::DragContext context, gboolean success, gboolean del, guint32 time_) noexcept;

// GtkWidget* gtk_drag_get_source_widget (GdkDragContext* context);
// ::GtkWidget* gtk_drag_get_source_widget (::GdkDragContext* context);
GI_INLINE_DECL Gtk::Widget drag_get_source_widget (Gdk::DragContext context) noexcept;

// void gtk_drag_set_icon_default (GdkDragContext* context);
// void gtk_drag_set_icon_default (::GdkDragContext* context);
GI_INLINE_DECL void drag_set_icon_default (Gdk::DragContext context) noexcept;

// void gtk_drag_set_icon_gicon (GdkDragContext* context, GIcon* icon, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_gicon (::GdkDragContext* context, ::GIcon* icon, gint hot_x, gint hot_y);
GI_INLINE_DECL void drag_set_icon_gicon (Gdk::DragContext context, Gio::Icon icon, gint hot_x, gint hot_y) noexcept;

// void gtk_drag_set_icon_name (GdkDragContext* context, const gchar* icon_name, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_name (::GdkDragContext* context, const char* icon_name, gint hot_x, gint hot_y);
GI_INLINE_DECL void drag_set_icon_name (Gdk::DragContext context, const std::string & icon_name, gint hot_x, gint hot_y) noexcept;

// void gtk_drag_set_icon_pixbuf (GdkDragContext* context, GdkPixbuf* pixbuf, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_pixbuf (::GdkDragContext* context, ::GdkPixbuf* pixbuf, gint hot_x, gint hot_y);
GI_INLINE_DECL void drag_set_icon_pixbuf (Gdk::DragContext context, GdkPixbuf::Pixbuf pixbuf, gint hot_x, gint hot_y) noexcept;

// void gtk_drag_set_icon_surface (GdkDragContext* context, cairo_surface_t* surface);
// void gtk_drag_set_icon_surface (::GdkDragContext* context, ::cairo_surface_t* surface);
GI_INLINE_DECL void drag_set_icon_surface (Gdk::DragContext context, cairo::Surface surface) noexcept;

// void gtk_drag_set_icon_widget (GdkDragContext* context, GtkWidget* widget, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_widget (::GdkDragContext* context, ::GtkWidget* widget, gint hot_x, gint hot_y);
GI_INLINE_DECL void drag_set_icon_widget (Gdk::DragContext context, Gtk::Widget widget, gint hot_x, gint hot_y) noexcept;

// gboolean gtk_events_pending ();
// gboolean gtk_events_pending ();
GI_INLINE_DECL bool events_pending () noexcept;

// gboolean gtk_false ();
// gboolean gtk_false ();
GI_INLINE_DECL bool false_ () noexcept;

// guint gtk_get_binary_age ();
// guint gtk_get_binary_age ();
GI_INLINE_DECL guint get_binary_age () noexcept;

// GdkEvent* gtk_get_current_event ();
//  gtk_get_current_event ();
// SKIP;  type  not supported

// GdkDevice* gtk_get_current_event_device ();
// ::GdkDevice* gtk_get_current_event_device ();
GI_INLINE_DECL Gdk::Device get_current_event_device () noexcept;

// gboolean gtk_get_current_event_state (GdkModifierType* state);
// gboolean gtk_get_current_event_state (::GdkModifierType* state);
GI_INLINE_DECL bool get_current_event_state (Gdk::ModifierType & state) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::ModifierType> get_current_event_state () noexcept;

// guint32 gtk_get_current_event_time ();
// guint32 gtk_get_current_event_time ();
GI_INLINE_DECL guint32 get_current_event_time () noexcept;

// guint gtk_get_debug_flags ();
// guint gtk_get_debug_flags ();
GI_INLINE_DECL guint get_debug_flags () noexcept;

// PangoLanguage* gtk_get_default_language ();
// ::PangoLanguage* gtk_get_default_language ();
GI_INLINE_DECL Pango::Language get_default_language () noexcept;

// GtkWidget* gtk_get_event_widget (GdkEvent* event);
// ::GtkWidget* gtk_get_event_widget ( event);
// SKIP; event type  not supported

// guint gtk_get_interface_age ();
// guint gtk_get_interface_age ();
GI_INLINE_DECL guint get_interface_age () noexcept;

// GtkTextDirection gtk_get_locale_direction ();
// ::GtkTextDirection gtk_get_locale_direction ();
GI_INLINE_DECL Gtk::TextDirection get_locale_direction () noexcept;

// guint gtk_get_major_version ();
// guint gtk_get_major_version ();
GI_INLINE_DECL guint get_major_version () noexcept;

// guint gtk_get_micro_version ();
// guint gtk_get_micro_version ();
GI_INLINE_DECL guint get_micro_version () noexcept;

// guint gtk_get_minor_version ();
// guint gtk_get_minor_version ();
GI_INLINE_DECL guint get_minor_version () noexcept;

// GOptionGroup* gtk_get_option_group (gboolean open_default_display);
// ::GOptionGroup* gtk_get_option_group (gboolean open_default_display);
GI_INLINE_DECL GLib::OptionGroup get_option_group (gboolean open_default_display) noexcept;

// GtkWidget* gtk_grab_get_current ();
// ::GtkWidget* gtk_grab_get_current ();
GI_INLINE_DECL Gtk::Widget grab_get_current () noexcept;

// void gtk_init (int* argc, char*** argv);
// void gtk_init (gint* argc, char*** argv);
// SKIP; inout array not supported

// gboolean gtk_init_check (int* argc, char*** argv);
// gboolean gtk_init_check (gint* argc, char*** argv);
// SKIP; inout array not supported

// gboolean gtk_init_with_args (gint* argc, gchar*** argv, const gchar* parameter_string, const GOptionEntry* entries, const gchar* translation_domain, GError ** error);
// gboolean gtk_init_with_args (gint* argc, char*** argv, const char* parameter_string, const ::GOptionEntry** entries, const char* translation_domain, GError ** error);
// SKIP; inconsistent in entries pointer depth (1 vs 2), inout array not supported

// void gtk_main ();
// void gtk_main ();
GI_INLINE_DECL void main () noexcept;

// void gtk_main_do_event (GdkEvent* event);
// void gtk_main_do_event ( event);
// SKIP; event type  not supported

// gboolean gtk_main_iteration ();
// gboolean gtk_main_iteration ();
GI_INLINE_DECL bool main_iteration () noexcept;

// gboolean gtk_main_iteration_do (gboolean blocking);
// gboolean gtk_main_iteration_do (gboolean blocking);
GI_INLINE_DECL bool main_iteration_do (gboolean blocking) noexcept;

// guint gtk_main_level ();
// guint gtk_main_level ();
GI_INLINE_DECL guint main_level () noexcept;

// void gtk_main_quit ();
// void gtk_main_quit ();
GI_INLINE_DECL void main_quit () noexcept;

// gboolean gtk_parse_args (int* argc, char*** argv);
// gboolean gtk_parse_args (gint* argc, char*** argv);
// SKIP; inout array not supported

// GtkPageSetup* gtk_print_run_page_setup_dialog (GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings);
// ::GtkPageSetup* gtk_print_run_page_setup_dialog (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
GI_INLINE_DECL Gtk::PageSetup print_run_page_setup_dialog (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings) noexcept;
GI_INLINE_DECL Gtk::PageSetup print_run_page_setup_dialog (Gtk::PrintSettings settings) noexcept;

// void gtk_print_run_page_setup_dialog_async (GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings, GtkPageSetupDoneFunc done_cb, gpointer data);
// void gtk_print_run_page_setup_dialog_async (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
GI_INLINE_DECL void print_run_page_setup_dialog_async (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept;
GI_INLINE_DECL void print_run_page_setup_dialog_async (Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept;

// void gtk_propagate_event (GtkWidget* widget, GdkEvent* event);
// void gtk_propagate_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_render_activity (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_activity (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_activity (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_arrow (GtkStyleContext* context, cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
// void gtk_render_arrow (::GtkStyleContext* context, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
GI_INLINE_DECL void render_arrow (Gtk::StyleContext context, cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept;

// void gtk_render_background (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_background (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_background (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_background_get_clip (GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, GdkRectangle* out_clip);
// void gtk_render_background_get_clip (::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, ::GdkRectangle* out_clip);
GI_INLINE_DECL void render_background_get_clip (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height, Gdk::Rectangle & out_clip) noexcept;
GI_INLINE_DECL Gdk::Rectangle render_background_get_clip (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_check (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_check (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_check (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_expander (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_expander (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_expander (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_extension (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side);
// void gtk_render_extension (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
GI_INLINE_DECL void render_extension (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side) noexcept;

// void gtk_render_focus (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_focus (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_focus (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_frame (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_frame (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_frame (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_handle (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_handle (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_handle (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_insertion_cursor (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout, int index, PangoDirection direction);
// void gtk_render_insertion_cursor (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout, gint index, ::PangoDirection direction);
GI_INLINE_DECL void render_insertion_cursor (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout, gint index, Pango::Direction direction) noexcept;

// void gtk_render_layout (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout);
// void gtk_render_layout (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
GI_INLINE_DECL void render_layout (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout) noexcept;

// void gtk_render_line (GtkStyleContext* context, cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// void gtk_render_line (::GtkStyleContext* context, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
GI_INLINE_DECL void render_line (Gtk::StyleContext context, cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept;

// void gtk_render_option (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_option (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
GI_INLINE_DECL void render_option (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept;

// void gtk_render_slider (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkOrientation orientation);
// void gtk_render_slider (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
GI_INLINE_DECL void render_slider (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation) noexcept;

// void gtk_rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
// void gtk_rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
GI_INLINE_DECL void rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble & h, gdouble & s, gdouble & v) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble, gdouble> rgb_to_hsv (gdouble r, gdouble g, gdouble b) noexcept;

// void gtk_selection_add_target (GtkWidget* widget, GdkAtom selection, GdkAtom target, guint info);
// void gtk_selection_add_target (::GtkWidget* widget,  selection,  target, guint info);
// SKIP; target type  not supported, selection type  not supported

// void gtk_selection_add_targets (GtkWidget* widget, GdkAtom selection, const GtkTargetEntry* targets, guint ntargets);
// void gtk_selection_add_targets (::GtkWidget* widget,  selection, const ::GtkTargetEntry** targets, guint ntargets);
// SKIP; inconsistent in targets pointer depth (1 vs 2), selection type  not supported

// void gtk_selection_clear_targets (GtkWidget* widget, GdkAtom selection);
// void gtk_selection_clear_targets (::GtkWidget* widget,  selection);
// SKIP; selection type  not supported

// gboolean gtk_selection_convert (GtkWidget* widget, GdkAtom selection, GdkAtom target, guint32 time_);
// gboolean gtk_selection_convert (::GtkWidget* widget,  selection,  target, guint32 time_);
// SKIP; target type  not supported, selection type  not supported

// gboolean gtk_selection_owner_set (GtkWidget* widget, GdkAtom selection, guint32 time_);
// gboolean gtk_selection_owner_set (::GtkWidget* widget,  selection, guint32 time_);
// SKIP; selection type  not supported

// gboolean gtk_selection_owner_set_for_display (GdkDisplay* display, GtkWidget* widget, GdkAtom selection, guint32 time_);
// gboolean gtk_selection_owner_set_for_display (::GdkDisplay* display, ::GtkWidget* widget,  selection, guint32 time_);
// SKIP; selection type  not supported

// void gtk_selection_remove_all (GtkWidget* widget);
// void gtk_selection_remove_all (::GtkWidget* widget);
GI_INLINE_DECL void selection_remove_all (Gtk::Widget widget) noexcept;

// void gtk_set_debug_flags (guint flags);
// void gtk_set_debug_flags (guint flags);
GI_INLINE_DECL void set_debug_flags (guint flags) noexcept;

// void gtk_show_about_dialog (GtkWindow* parent, const gchar* first_property_name);
// void gtk_show_about_dialog (::GtkWindow* parent, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// gboolean gtk_show_uri_on_window (GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
// gboolean gtk_show_uri_on_window (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
GI_INLINE_DECL bool show_uri_on_window (Gtk::Window parent, const std::string & uri, guint32 timestamp);
GI_INLINE_DECL bool show_uri_on_window (const std::string & uri, guint32 timestamp);
GI_INLINE_DECL bool show_uri_on_window (Gtk::Window parent, const std::string & uri, guint32 timestamp, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool show_uri_on_window (const std::string & uri, guint32 timestamp, GLib::Error * _error) noexcept;

// GtkTargetEntry* gtk_target_table_new_from_list (GtkTargetList* list, gint* n_targets);
// ::GtkTargetEntry** gtk_target_table_new_from_list (::GtkTargetList* list, gint* n_targets);
// SKIP; inconsistent return  pointer depth (1 vs 2)

// gboolean gtk_targets_include_image (gint n_targets, gboolean writable);
// gboolean gtk_targets_include_image (gint n_targets, gboolean writable);
// SKIP; container element not supported

// gboolean gtk_targets_include_rich_text (gint n_targets, GtkTextBuffer* buffer);
// gboolean gtk_targets_include_rich_text (gint n_targets, ::GtkTextBuffer* buffer);
// SKIP; container element not supported

// gboolean gtk_targets_include_text (gint n_targets);
// gboolean gtk_targets_include_text (gint n_targets);
// SKIP; container element not supported

// gboolean gtk_targets_include_uri (gint n_targets);
// gboolean gtk_targets_include_uri (gint n_targets);
// SKIP; container element not supported

// GtkWidget* gtk_test_find_label (GtkWidget* widget, const gchar* label_pattern);
// ::GtkWidget* gtk_test_find_label (::GtkWidget* widget, const char* label_pattern);
GI_INLINE_DECL Gtk::Widget test_find_label (Gtk::Widget widget, const std::string & label_pattern) noexcept;

// GtkWidget* gtk_test_find_sibling (GtkWidget* base_widget, GType widget_type);
// ::GtkWidget* gtk_test_find_sibling (::GtkWidget* base_widget, GType widget_type);
GI_INLINE_DECL Gtk::Widget test_find_sibling (Gtk::Widget base_widget, GType widget_type) noexcept;

// GtkWidget* gtk_test_find_widget (GtkWidget* widget, const gchar* label_pattern, GType widget_type);
// ::GtkWidget* gtk_test_find_widget (::GtkWidget* widget, const char* label_pattern, GType widget_type);
GI_INLINE_DECL Gtk::Widget test_find_widget (Gtk::Widget widget, const std::string & label_pattern, GType widget_type) noexcept;

// void gtk_test_init (int* argcp, char*** argvp);
// void gtk_test_init (gint* argcp, char*** argvp);
// IGNORE; not introspectable, varargs not supported

// const GType* gtk_test_list_all_types (guint* n_types);
// const GType* gtk_test_list_all_types (guint* n_types);
GI_INLINE_DECL std::vector<GType> test_list_all_types (guint & n_types) noexcept;
GI_INLINE_DECL std::tuple<std::vector<GType>, guint> test_list_all_types () noexcept;

// void gtk_test_register_all_types ();
// void gtk_test_register_all_types ();
GI_INLINE_DECL void test_register_all_types () noexcept;

// gboolean gtk_test_widget_send_key (GtkWidget* widget, guint keyval, GdkModifierType modifiers);
// gboolean gtk_test_widget_send_key (::GtkWidget* widget, guint keyval, ::GdkModifierType modifiers);
GI_INLINE_DECL bool test_widget_send_key (Gtk::Widget widget, guint keyval, Gdk::ModifierType modifiers) noexcept;

// void gtk_test_widget_wait_for_draw (GtkWidget* widget);
// void gtk_test_widget_wait_for_draw (::GtkWidget* widget);
GI_INLINE_DECL void test_widget_wait_for_draw (Gtk::Widget widget) noexcept;

// gboolean gtk_tree_get_row_drag_data (GtkSelectionData* selection_data, GtkTreeModel** tree_model, GtkTreePath** path);
// gboolean gtk_tree_get_row_drag_data (::GtkSelectionData* selection_data, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
GI_INLINE_DECL bool tree_get_row_drag_data (Gtk::SelectionData selection_data, Gtk::TreeModel * tree_model = nullptr, Gtk::TreePath * path = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreePath> tree_get_row_drag_data (Gtk::SelectionData selection_data) noexcept;

// gboolean gtk_tree_set_row_drag_data (GtkSelectionData* selection_data, GtkTreeModel* tree_model, GtkTreePath* path);
// gboolean gtk_tree_set_row_drag_data (::GtkSelectionData* selection_data, ::GtkTreeModel* tree_model, ::GtkTreePath* path);
GI_INLINE_DECL bool tree_set_row_drag_data (Gtk::SelectionData selection_data, Gtk::TreeModel tree_model, Gtk::TreePath path) noexcept;

// gboolean gtk_true ();
// gboolean gtk_true ();
GI_INLINE_DECL bool true_ () noexcept;

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
