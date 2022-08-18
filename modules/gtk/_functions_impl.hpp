// AUTO-GENERATED

#ifndef _GI_GTK__FUNCTIONS_IMPL_HPP_
#define _GI_GTK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace BuilderErrorNS_ {

// GQuark gtk_builder_error_quark ();
// ::GQuark gtk_builder_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_builder_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace BuilderErrorNS_

namespace CssProviderErrorNS_ {

// GQuark gtk_css_provider_error_quark ();
// ::GQuark gtk_css_provider_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_css_provider_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace CssProviderErrorNS_

namespace FileChooserErrorNS_ {

// GQuark gtk_file_chooser_error_quark ();
// ::GQuark gtk_file_chooser_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

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
bool lookup (gint size, gint * width, gint * height) noexcept
{
  typedef gboolean (*call_wrap_t) (gint size, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_size_lookup;
  gint height_o {};
  gint width_o {};
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> lookup (gint size) noexcept
{
  typedef gboolean (*call_wrap_t) (gint size, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_size_lookup;
  gint height_o {};
  gint width_o {};
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((gint) (size_to_c), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (_temp_ret, width_o, height_o);
}

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
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace IconThemeErrorNS_

namespace PrintErrorNS_ {

// GQuark gtk_print_error_quark ();
// ::GQuark gtk_print_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace PrintErrorNS_

namespace RecentChooserErrorNS_ {

// GQuark gtk_recent_chooser_error_quark ();
// ::GQuark gtk_recent_chooser_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace RecentChooserErrorNS_

namespace RecentManagerErrorNS_ {

// GQuark gtk_recent_manager_error_quark ();
// ::GQuark gtk_recent_manager_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_manager_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace RecentManagerErrorNS_

// gboolean gtk_accel_groups_activate (GObject* object, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_accel_groups_activate (::GObject* object, guint accel_key, ::GdkModifierType accel_mods);
bool accel_groups_activate (GObject::Object object, guint accel_key, Gdk::ModifierType accel_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* object, guint accel_key, ::GdkModifierType accel_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_groups_activate;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c));
  return _temp_ret;
}

// GSList* gtk_accel_groups_from_object (GObject* object);
// ::GSList* gtk_accel_groups_from_object (::GObject* object);
std::vector<Gtk::AccelGroup> accel_groups_from_object (GObject::Object object) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::GObject* object);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_groups_from_object;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c));
  return gi::detail::wrap_list<Gtk::AccelGroup> (_temp_ret, gi::transfer_none);
}

// GdkModifierType gtk_accelerator_get_default_mod_mask ();
// ::GdkModifierType gtk_accelerator_get_default_mod_mask ();
Gdk::ModifierType accelerator_get_default_mod_mask () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_get_default_mod_mask;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// gchar* gtk_accelerator_get_label (guint accelerator_key, GdkModifierType accelerator_mods);
// char* gtk_accelerator_get_label (guint accelerator_key, ::GdkModifierType accelerator_mods);
std::string accelerator_get_label (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (guint accelerator_key, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_get_label;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto accelerator_key_to_c = accelerator_key;
  auto _temp_ret = call_wrap_v ((guint) (accelerator_key_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_accelerator_get_label_with_keycode (GdkDisplay* display, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* gtk_accelerator_get_label_with_keycode (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
std::string accelerator_get_label_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_get_label_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string accelerator_get_label_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_get_label_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_accelerator_name (guint accelerator_key, GdkModifierType accelerator_mods);
// char* gtk_accelerator_name (guint accelerator_key, ::GdkModifierType accelerator_mods);
std::string accelerator_name (guint accelerator_key, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (guint accelerator_key, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_name;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto accelerator_key_to_c = accelerator_key;
  auto _temp_ret = call_wrap_v ((guint) (accelerator_key_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_accelerator_name_with_keycode (GdkDisplay* display, guint accelerator_key, guint keycode, GdkModifierType accelerator_mods);
// char* gtk_accelerator_name_with_keycode (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
std::string accelerator_name_with_keycode (Gdk::Display display, guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_name_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string accelerator_name_with_keycode (guint accelerator_key, guint keycode, Gdk::ModifierType accelerator_mods) noexcept
{
  typedef char* (*call_wrap_t) (::GdkDisplay* display, guint accelerator_key, guint keycode, ::GdkModifierType accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_name_with_keycode;
  auto accelerator_mods_to_c = gi::unwrap (accelerator_mods);
  auto keycode_to_c = keycode;
  auto accelerator_key_to_c = accelerator_key;
  auto display_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c), (guint) (accelerator_key_to_c), (guint) (keycode_to_c), (::GdkModifierType) (accelerator_mods_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_accelerator_parse (const gchar* accelerator, guint* accelerator_key, GdkModifierType* accelerator_mods);
// void gtk_accelerator_parse (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
void accelerator_parse (const std::string & accelerator, guint * accelerator_key, Gdk::ModifierType * accelerator_mods) noexcept
{
  typedef void (*call_wrap_t) (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_parse;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accelerator_to_c), (guint*) (accelerator_key ? &accelerator_key_o : nullptr), (::GdkModifierType*) (accelerator_mods ? &accelerator_mods_o : nullptr));
  if (accelerator_mods) *accelerator_mods = gi::wrap (accelerator_mods_o);
  if (accelerator_key) *accelerator_key = accelerator_key_o;
}
std::tuple<guint, Gdk::ModifierType> accelerator_parse (const std::string & accelerator) noexcept
{
  typedef void (*call_wrap_t) (const char* accelerator, guint* accelerator_key, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_parse;
  ::GdkModifierType accelerator_mods_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accelerator_to_c), (guint*) (&accelerator_key_o), (::GdkModifierType*) (&accelerator_mods_o));
  return std::make_tuple (accelerator_key_o, gi::wrap (accelerator_mods_o));
}

// void gtk_accelerator_parse_with_keycode (const gchar* accelerator, guint* accelerator_key, guint** accelerator_codes, GdkModifierType* accelerator_mods);
// void gtk_accelerator_parse_with_keycode (const char* accelerator, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
void accelerator_parse_with_keycode (const std::string & accelerator, guint * accelerator_key, std::vector<guint> * accelerator_codes, Gdk::ModifierType * accelerator_mods) noexcept
{
  typedef void (*call_wrap_t) (const char* accelerator, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accelerator_to_c), (guint*) (accelerator_key ? &accelerator_key_o : nullptr), (guint**) (accelerator_codes ? &accelerator_codes_o : nullptr), (::GdkModifierType*) (accelerator_mods ? &accelerator_mods_o : nullptr));
  if (accelerator_mods) *accelerator_mods = gi::wrap (accelerator_mods_o);
  if (accelerator_codes) *accelerator_codes = gi::detail::wrap_list<guint> (accelerator_codes_o, gi::transfer_full);
  if (accelerator_key) *accelerator_key = accelerator_key_o;
}
std::tuple<guint, std::vector<guint>, Gdk::ModifierType> accelerator_parse_with_keycode (const std::string & accelerator) noexcept
{
  typedef void (*call_wrap_t) (const char* accelerator, guint* accelerator_key, guint** accelerator_codes, ::GdkModifierType* accelerator_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_parse_with_keycode;
  ::GdkModifierType accelerator_mods_o {};
  guint* accelerator_codes_o {};
  guint accelerator_key_o {};
  auto accelerator_to_c = gi::unwrap (accelerator, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accelerator_to_c), (guint*) (&accelerator_key_o), (guint**) (&accelerator_codes_o), (::GdkModifierType*) (&accelerator_mods_o));
  return std::make_tuple (accelerator_key_o, gi::detail::wrap_list<guint> (accelerator_codes_o, gi::transfer_full), gi::wrap (accelerator_mods_o));
}

// void gtk_accelerator_set_default_mod_mask (GdkModifierType default_mod_mask);
// void gtk_accelerator_set_default_mod_mask (::GdkModifierType default_mod_mask);
void accelerator_set_default_mod_mask (Gdk::ModifierType default_mod_mask) noexcept
{
  typedef void (*call_wrap_t) (::GdkModifierType default_mod_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_set_default_mod_mask;
  auto default_mod_mask_to_c = gi::unwrap (default_mod_mask);
  call_wrap_v ((::GdkModifierType) (default_mod_mask_to_c));
}

// gboolean gtk_accelerator_valid (guint keyval, GdkModifierType modifiers);
// gboolean gtk_accelerator_valid (guint keyval, ::GdkModifierType modifiers);
bool accelerator_valid (guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accelerator_valid;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
  return _temp_ret;
}

// gboolean gtk_bindings_activate (GObject* object, guint keyval, GdkModifierType modifiers);
// gboolean gtk_bindings_activate (::GObject* object, guint keyval, ::GdkModifierType modifiers);
bool bindings_activate (GObject::Object object, guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* object, guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bindings_activate;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
  return _temp_ret;
}

// gboolean gtk_bindings_activate_event (GObject* object, GdkEventKey* event);
// gboolean gtk_bindings_activate_event (::GObject* object, ::GdkEventKey* event);
bool bindings_activate_event (GObject::Object object, Gdk::EventKey event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GObject* object, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_bindings_activate_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (object_to_c), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// gboolean gtk_cairo_should_draw_window (cairo_t* cr, GdkWindow* window);
// gboolean gtk_cairo_should_draw_window (::cairo_t* cr, ::GdkWindow* window);
bool cairo_should_draw_window (cairo::Context cr, Gdk::Window window) noexcept
{
  typedef gboolean (*call_wrap_t) (::cairo_t* cr, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cairo_should_draw_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c), (::GdkWindow*) (window_to_c));
  return _temp_ret;
}

// void gtk_cairo_transform_to_window (cairo_t* cr, GtkWidget* widget, GdkWindow* window);
// void gtk_cairo_transform_to_window (::cairo_t* cr, ::GtkWidget* widget, ::GdkWindow* window);
void cairo_transform_to_window (cairo::Context cr, Gtk::Widget widget, Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::GtkWidget* widget, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cairo_transform_to_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::GtkWidget*) (widget_to_c), (::GdkWindow*) (window_to_c));
}

// const gchar* gtk_check_version (guint required_major, guint required_minor, guint required_micro);
// const char* gtk_check_version (guint required_major, guint required_minor, guint required_micro);
std::string check_version (guint required_major, guint required_minor, guint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (guint required_major, guint required_minor, guint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_check_version;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((guint) (required_major_to_c), (guint) (required_minor_to_c), (guint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_device_grab_add (GtkWidget* widget, GdkDevice* device, gboolean block_others);
// void gtk_device_grab_add (::GtkWidget* widget, ::GdkDevice* device, gboolean block_others);
void device_grab_add (Gtk::Widget widget, Gdk::Device device, gboolean block_others) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device, gboolean block_others);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_device_grab_add;
  auto block_others_to_c = block_others;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (widget_to_c), (::GdkDevice*) (device_to_c), (gboolean) (block_others_to_c));
}

// void gtk_device_grab_remove (GtkWidget* widget, GdkDevice* device);
// void gtk_device_grab_remove (::GtkWidget* widget, ::GdkDevice* device);
void device_grab_remove (Gtk::Widget widget, Gdk::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_device_grab_remove;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (widget_to_c), (::GdkDevice*) (device_to_c));
}

// void gtk_disable_setlocale ();
// void gtk_disable_setlocale ();
void disable_setlocale () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_disable_setlocale;
  call_wrap_v ();
}

// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, GtkRequestedSize* sizes);
// gint gtk_distribute_natural_allocation (gint extra_space, guint n_requested_sizes, ::GtkRequestedSize* sizes);
gint distribute_natural_allocation (gint extra_space, guint n_requested_sizes, Gtk::RequestedSize sizes) noexcept
{
  typedef gint (*call_wrap_t) (gint extra_space, guint n_requested_sizes, ::GtkRequestedSize* sizes);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_distribute_natural_allocation;
  auto sizes_to_c = gi::unwrap (sizes, gi::transfer_none, gi::direction_in);
  auto n_requested_sizes_to_c = n_requested_sizes;
  auto extra_space_to_c = extra_space;
  auto _temp_ret = call_wrap_v ((gint) (extra_space_to_c), (guint) (n_requested_sizes_to_c), (::GtkRequestedSize*) (sizes_to_c));
  return _temp_ret;
}

// void gtk_drag_cancel (GdkDragContext* context);
// void gtk_drag_cancel (::GdkDragContext* context);
void drag_cancel (Gdk::DragContext context) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_cancel;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c));
}

// void gtk_drag_finish (GdkDragContext* context, gboolean success, gboolean del, guint32 time_);
// void gtk_drag_finish (::GdkDragContext* context, gboolean success, gboolean del, guint32 time_);
void drag_finish (Gdk::DragContext context, gboolean success, gboolean del, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, gboolean success, gboolean del, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_finish;
  auto time__to_c = time_;
  auto del_to_c = del;
  auto success_to_c = success;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (gboolean) (success_to_c), (gboolean) (del_to_c), (guint32) (time__to_c));
}

// GtkWidget* gtk_drag_get_source_widget (GdkDragContext* context);
// ::GtkWidget* gtk_drag_get_source_widget (::GdkDragContext* context);
Gtk::Widget drag_get_source_widget (Gdk::DragContext context) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_get_source_widget;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_drag_set_icon_default (GdkDragContext* context);
// void gtk_drag_set_icon_default (::GdkDragContext* context);
void drag_set_icon_default (Gdk::DragContext context) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_default;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c));
}

// void gtk_drag_set_icon_gicon (GdkDragContext* context, GIcon* icon, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_gicon (::GdkDragContext* context, ::GIcon* icon, gint hot_x, gint hot_y);
void drag_set_icon_gicon (Gdk::DragContext context, Gio::Icon icon, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GIcon* icon, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_gicon;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GIcon*) (icon_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}

// void gtk_drag_set_icon_name (GdkDragContext* context, const gchar* icon_name, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_name (::GdkDragContext* context, const char* icon_name, gint hot_x, gint hot_y);
void drag_set_icon_name (Gdk::DragContext context, const std::string & icon_name, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, const char* icon_name, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_name;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (const char*) (icon_name_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}

// void gtk_drag_set_icon_pixbuf (GdkDragContext* context, GdkPixbuf* pixbuf, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_pixbuf (::GdkDragContext* context, ::GdkPixbuf* pixbuf, gint hot_x, gint hot_y);
void drag_set_icon_pixbuf (Gdk::DragContext context, GdkPixbuf::Pixbuf pixbuf, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GdkPixbuf* pixbuf, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_pixbuf;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GdkPixbuf*) (pixbuf_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}

// void gtk_drag_set_icon_surface (GdkDragContext* context, cairo_surface_t* surface);
// void gtk_drag_set_icon_surface (::GdkDragContext* context, ::cairo_surface_t* surface);
void drag_set_icon_surface (Gdk::DragContext context, cairo::Surface surface) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::cairo_surface_t*) (surface_to_c));
}

// void gtk_drag_set_icon_widget (GdkDragContext* context, GtkWidget* widget, gint hot_x, gint hot_y);
// void gtk_drag_set_icon_widget (::GdkDragContext* context, ::GtkWidget* widget, gint hot_x, gint hot_y);
void drag_set_icon_widget (Gdk::DragContext context, Gtk::Widget widget, gint hot_x, gint hot_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GtkWidget* widget, gint hot_x, gint hot_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_set_icon_widget;
  auto hot_y_to_c = hot_y;
  auto hot_x_to_c = hot_x;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GtkWidget*) (widget_to_c), (gint) (hot_x_to_c), (gint) (hot_y_to_c));
}

// gboolean gtk_events_pending ();
// gboolean gtk_events_pending ();
bool events_pending () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_events_pending;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gtk_false ();
// gboolean gtk_false ();
bool false_ () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_false;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_binary_age ();
// guint gtk_get_binary_age ();
guint get_binary_age () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_binary_age;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GdkEvent* gtk_get_current_event ();
//  gtk_get_current_event ();
// SKIP;  type  not supported

// GdkDevice* gtk_get_current_event_device ();
// ::GdkDevice* gtk_get_current_event_device ();
Gdk::Device get_current_event_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_current_event_device;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_get_current_event_state (GdkModifierType* state);
// gboolean gtk_get_current_event_state (::GdkModifierType* state);
bool get_current_event_state (Gdk::ModifierType & state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkModifierType* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_current_event_state;
  ::GdkModifierType state_o {};
  auto _temp_ret = call_wrap_v ((::GdkModifierType*) (&state_o));
  state = gi::wrap (state_o);
  return _temp_ret;
}
std::tuple<bool, Gdk::ModifierType> get_current_event_state () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkModifierType* state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_current_event_state;
  ::GdkModifierType state_o {};
  auto _temp_ret = call_wrap_v ((::GdkModifierType*) (&state_o));
  return std::make_tuple (_temp_ret, gi::wrap (state_o));
}

// guint32 gtk_get_current_event_time ();
// guint32 gtk_get_current_event_time ();
guint32 get_current_event_time () noexcept
{
  typedef guint32 (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_current_event_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_debug_flags ();
// guint gtk_get_debug_flags ();
guint get_debug_flags () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_debug_flags;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// PangoLanguage* gtk_get_default_language ();
// ::PangoLanguage* gtk_get_default_language ();
Pango::Language get_default_language () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_default_language;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_get_event_widget (GdkEvent* event);
// ::GtkWidget* gtk_get_event_widget ( event);
// SKIP; event type  not supported

// guint gtk_get_interface_age ();
// guint gtk_get_interface_age ();
guint get_interface_age () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_interface_age;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GtkTextDirection gtk_get_locale_direction ();
// ::GtkTextDirection gtk_get_locale_direction ();
Gtk::TextDirection get_locale_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_locale_direction;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

// guint gtk_get_major_version ();
// guint gtk_get_major_version ();
guint get_major_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_major_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_micro_version ();
// guint gtk_get_micro_version ();
guint get_micro_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_micro_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint gtk_get_minor_version ();
// guint gtk_get_minor_version ();
guint get_minor_version () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_minor_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GOptionGroup* gtk_get_option_group (gboolean open_default_display);
// ::GOptionGroup* gtk_get_option_group (gboolean open_default_display);
GLib::OptionGroup get_option_group (gboolean open_default_display) noexcept
{
  typedef ::GOptionGroup* (*call_wrap_t) (gboolean open_default_display);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_get_option_group;
  auto open_default_display_to_c = open_default_display;
  auto _temp_ret = call_wrap_v ((gboolean) (open_default_display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkWidget* gtk_grab_get_current ();
// ::GtkWidget* gtk_grab_get_current ();
Gtk::Widget grab_get_current () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grab_get_current;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

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
void main () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_main;
  call_wrap_v ();
}

// void gtk_main_do_event (GdkEvent* event);
// void gtk_main_do_event ( event);
// SKIP; event type  not supported

// gboolean gtk_main_iteration ();
// gboolean gtk_main_iteration ();
bool main_iteration () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_main_iteration;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gboolean gtk_main_iteration_do (gboolean blocking);
// gboolean gtk_main_iteration_do (gboolean blocking);
bool main_iteration_do (gboolean blocking) noexcept
{
  typedef gboolean (*call_wrap_t) (gboolean blocking);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_main_iteration_do;
  auto blocking_to_c = blocking;
  auto _temp_ret = call_wrap_v ((gboolean) (blocking_to_c));
  return _temp_ret;
}

// guint gtk_main_level ();
// guint gtk_main_level ();
guint main_level () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_main_level;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gtk_main_quit ();
// void gtk_main_quit ();
void main_quit () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_main_quit;
  call_wrap_v ();
}

// gboolean gtk_parse_args (int* argc, char*** argv);
// gboolean gtk_parse_args (gint* argc, char*** argv);
// SKIP; inout array not supported

// GtkPageSetup* gtk_print_run_page_setup_dialog (GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings);
// ::GtkPageSetup* gtk_print_run_page_setup_dialog (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
Gtk::PageSetup print_run_page_setup_dialog (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_run_page_setup_dialog;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PageSetup print_run_page_setup_dialog (Gtk::PrintSettings settings) noexcept
{
  typedef ::GtkPageSetup* (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_run_page_setup_dialog;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto page_setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_print_run_page_setup_dialog_async (GtkWindow* parent, GtkPageSetup* page_setup, GtkPrintSettings* settings, GtkPageSetupDoneFunc done_cb, gpointer data);
// void gtk_print_run_page_setup_dialog_async (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
void print_run_page_setup_dialog_async (Gtk::Window parent, Gtk::PageSetup page_setup, Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_run_page_setup_dialog_async;
  auto done_cb_wrap_ = done_cb ? unwrap (std::move (done_cb), gi::scope_async) : nullptr;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto page_setup_to_c = gi::unwrap (page_setup, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c), (Gtk::PageSetupDoneFunc::cfunction_type) (done_cb_wrap_ ? &done_cb_wrap_->wrapper : nullptr), (void*) (done_cb_wrap_));
}
void print_run_page_setup_dialog_async (Gtk::PrintSettings settings, Gtk::PageSetupDoneFunc done_cb) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* parent, ::GtkPageSetup* page_setup, ::GtkPrintSettings* settings, Gtk::PageSetupDoneFunc::cfunction_type done_cb, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_print_run_page_setup_dialog_async;
  auto done_cb_wrap_ = done_cb ? unwrap (std::move (done_cb), gi::scope_async) : nullptr;
  auto settings_to_c = gi::unwrap (settings, gi::transfer_none, gi::direction_in);
  auto page_setup_to_c = nullptr;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkPageSetup*) (page_setup_to_c), (::GtkPrintSettings*) (settings_to_c), (Gtk::PageSetupDoneFunc::cfunction_type) (done_cb_wrap_ ? &done_cb_wrap_->wrapper : nullptr), (void*) (done_cb_wrap_));
}

// void gtk_propagate_event (GtkWidget* widget, GdkEvent* event);
// void gtk_propagate_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_render_activity (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_activity (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_activity (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_activity;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_arrow (GtkStyleContext* context, cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
// void gtk_render_arrow (::GtkStyleContext* context, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
void render_arrow (Gtk::StyleContext context, cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_arrow;
  auto size_to_c = size;
  auto y_to_c = y;
  auto x_to_c = x;
  auto angle_to_c = angle;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (angle_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (size_to_c));
}

// void gtk_render_background (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_background (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_background (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_background;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_background_get_clip (GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, GdkRectangle* out_clip);
// void gtk_render_background_get_clip (::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, ::GdkRectangle* out_clip);
void render_background_get_clip (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height, Gdk::Rectangle & out_clip) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, ::GdkRectangle* out_clip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_background_get_clip;
  traits::unset_wrapper<::GdkRectangle>::type out_clip_c;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GdkRectangle*) ((::GdkRectangle*) &out_clip_c));
  out_clip = gi::wrap ((::GdkRectangle*) &out_clip_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle render_background_get_clip (Gtk::StyleContext context, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, gdouble x, gdouble y, gdouble width, gdouble height, ::GdkRectangle* out_clip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_background_get_clip;
  traits::unset_wrapper<::GdkRectangle>::type out_clip_c;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GdkRectangle*) ((::GdkRectangle*) &out_clip_c));
  return gi::wrap ((::GdkRectangle*) &out_clip_c, gi::transfer_none, gi::direction_out);
}

// void gtk_render_check (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_check (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_check (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_check;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_expander (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_expander (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_expander (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_expander;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_extension (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side);
// void gtk_render_extension (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
void render_extension (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_extension;
  auto gap_side_to_c = gi::unwrap (gap_side);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkPositionType) (gap_side_to_c));
}

// void gtk_render_focus (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_focus (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_focus (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_focus;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_frame (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_frame (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_frame (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_frame;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_handle (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_handle (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_handle (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_handle;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_insertion_cursor (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout, int index, PangoDirection direction);
// void gtk_render_insertion_cursor (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout, gint index, ::PangoDirection direction);
void render_insertion_cursor (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout, gint index, Pango::Direction direction) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout, gint index, ::PangoDirection direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_insertion_cursor;
  auto direction_to_c = gi::unwrap (direction);
  auto index_to_c = index;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none, gi::direction_in);
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c), (gint) (index_to_c), (::PangoDirection) (direction_to_c));
}

// void gtk_render_layout (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout);
// void gtk_render_layout (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
void render_layout (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none, gi::direction_in);
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c));
}

// void gtk_render_line (GtkStyleContext* context, cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// void gtk_render_line (::GtkStyleContext* context, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
void render_line (Gtk::StyleContext context, cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_line;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  auto y0_to_c = y0;
  auto x0_to_c = x0;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x0_to_c), (gdouble) (y0_to_c), (gdouble) (x1_to_c), (gdouble) (y1_to_c));
}

// void gtk_render_option (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void gtk_render_option (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void render_option (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_option;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void gtk_render_slider (GtkStyleContext* context, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkOrientation orientation);
// void gtk_render_slider (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
void render_slider (Gtk::StyleContext context, cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_render_slider;
  auto orientation_to_c = gi::unwrap (orientation);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (context_to_c), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkOrientation) (orientation_to_c));
}

// void gtk_rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
// void gtk_rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
void rgb_to_hsv (gdouble r, gdouble g, gdouble b, gdouble & h, gdouble & s, gdouble & v) noexcept
{
  typedef void (*call_wrap_t) (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rgb_to_hsv;
  gdouble v_o {};
  gdouble s_o {};
  gdouble h_o {};
  auto b_to_c = b;
  auto g_to_c = g;
  auto r_to_c = r;
  call_wrap_v ((gdouble) (r_to_c), (gdouble) (g_to_c), (gdouble) (b_to_c), (gdouble*) (&h_o), (gdouble*) (&s_o), (gdouble*) (&v_o));
  v = v_o;
  s = s_o;
  h = h_o;
}
std::tuple<gdouble, gdouble, gdouble> rgb_to_hsv (gdouble r, gdouble g, gdouble b) noexcept
{
  typedef void (*call_wrap_t) (gdouble r, gdouble g, gdouble b, gdouble* h, gdouble* s, gdouble* v);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_rgb_to_hsv;
  gdouble v_o {};
  gdouble s_o {};
  gdouble h_o {};
  auto b_to_c = b;
  auto g_to_c = g;
  auto r_to_c = r;
  call_wrap_v ((gdouble) (r_to_c), (gdouble) (g_to_c), (gdouble) (b_to_c), (gdouble*) (&h_o), (gdouble*) (&s_o), (gdouble*) (&v_o));
  return std::make_tuple (h_o, s_o, v_o);
}

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
void selection_remove_all (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_selection_remove_all;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (widget_to_c));
}

// void gtk_set_debug_flags (guint flags);
// void gtk_set_debug_flags (guint flags);
void set_debug_flags (guint flags) noexcept
{
  typedef void (*call_wrap_t) (guint flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_set_debug_flags;
  auto flags_to_c = flags;
  call_wrap_v ((guint) (flags_to_c));
}

// void gtk_show_about_dialog (GtkWindow* parent, const gchar* first_property_name);
// void gtk_show_about_dialog (::GtkWindow* parent, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// gboolean gtk_show_uri_on_window (GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
// gboolean gtk_show_uri_on_window (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
bool show_uri_on_window (Gtk::Window parent, const std::string & uri, guint32 timestamp)
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_show_uri_on_window;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool show_uri_on_window (const std::string & uri, guint32 timestamp)
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_show_uri_on_window;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto parent_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool show_uri_on_window (Gtk::Window parent, const std::string & uri, guint32 timestamp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_show_uri_on_window;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool show_uri_on_window (const std::string & uri, guint32 timestamp, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* parent, const char* uri, guint32 timestamp, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_show_uri_on_window;
  auto timestamp_to_c = timestamp;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto parent_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (const char*) (uri_to_c), (guint32) (timestamp_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

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
Gtk::Widget test_find_label (Gtk::Widget widget, const std::string & label_pattern) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget, const char* label_pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_find_label;
  auto label_pattern_to_c = gi::unwrap (label_pattern, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (const char*) (label_pattern_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_test_find_sibling (GtkWidget* base_widget, GType widget_type);
// ::GtkWidget* gtk_test_find_sibling (::GtkWidget* base_widget, GType widget_type);
Gtk::Widget test_find_sibling (Gtk::Widget base_widget, GType widget_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* base_widget, GType widget_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_find_sibling;
  auto widget_type_to_c = widget_type;
  auto base_widget_to_c = gi::unwrap (base_widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (base_widget_to_c), (GType) (widget_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_test_find_widget (GtkWidget* widget, const gchar* label_pattern, GType widget_type);
// ::GtkWidget* gtk_test_find_widget (::GtkWidget* widget, const char* label_pattern, GType widget_type);
Gtk::Widget test_find_widget (Gtk::Widget widget, const std::string & label_pattern, GType widget_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget, const char* label_pattern, GType widget_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_find_widget;
  auto widget_type_to_c = widget_type;
  auto label_pattern_to_c = gi::unwrap (label_pattern, gi::transfer_none, gi::direction_in);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (const char*) (label_pattern_to_c), (GType) (widget_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_test_init (int* argcp, char*** argvp);
// void gtk_test_init (gint* argcp, char*** argvp);
// IGNORE; not introspectable, varargs not supported

// const GType* gtk_test_list_all_types (guint* n_types);
// const GType* gtk_test_list_all_types (guint* n_types);
std::vector<GType> test_list_all_types (guint & n_types) noexcept
{
  typedef const GType* (*call_wrap_t) (guint* n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_list_all_types;
  guint n_types_o {};
  auto _temp_ret = call_wrap_v ((guint*) (&n_types_o));
  n_types = n_types_o;
  return gi::detail::wrap_list<GType> (_temp_ret, gi::transfer_none);
}
std::tuple<std::vector<GType>, guint> test_list_all_types () noexcept
{
  typedef const GType* (*call_wrap_t) (guint* n_types);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_list_all_types;
  guint n_types_o {};
  auto _temp_ret = call_wrap_v ((guint*) (&n_types_o));
  return std::make_tuple (gi::detail::wrap_list<GType> (_temp_ret, gi::transfer_none), n_types_o);
}

// void gtk_test_register_all_types ();
// void gtk_test_register_all_types ();
void test_register_all_types () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_register_all_types;
  call_wrap_v ();
}

// gboolean gtk_test_widget_send_key (GtkWidget* widget, guint keyval, GdkModifierType modifiers);
// gboolean gtk_test_widget_send_key (::GtkWidget* widget, guint keyval, ::GdkModifierType modifiers);
bool test_widget_send_key (Gtk::Widget widget, guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_widget_send_key;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
  return _temp_ret;
}

// void gtk_test_widget_wait_for_draw (GtkWidget* widget);
// void gtk_test_widget_wait_for_draw (::GtkWidget* widget);
void test_widget_wait_for_draw (Gtk::Widget widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_test_widget_wait_for_draw;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (widget_to_c));
}

// gboolean gtk_tree_get_row_drag_data (GtkSelectionData* selection_data, GtkTreeModel** tree_model, GtkTreePath** path);
// gboolean gtk_tree_get_row_drag_data (::GtkSelectionData* selection_data, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
bool tree_get_row_drag_data (Gtk::SelectionData selection_data, Gtk::TreeModel * tree_model, Gtk::TreePath * path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_get_row_drag_data;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* tree_model_o {};
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (selection_data_to_c), (::GtkTreeModel**) (tree_model ? &tree_model_o : nullptr), (::GtkTreePath**) (path ? &path_o : nullptr));
  if (path) *path = gi::wrap (path_o, gi::transfer_full, gi::direction_out);
  if (tree_model) *tree_model = gi::wrap (tree_model_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreePath> tree_get_row_drag_data (Gtk::SelectionData selection_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, ::GtkTreeModel** tree_model, ::GtkTreePath** path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_get_row_drag_data;
  ::GtkTreePath* path_o {};
  ::GtkTreeModel* tree_model_o {};
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (selection_data_to_c), (::GtkTreeModel**) (&tree_model_o), (::GtkTreePath**) (&path_o));
  return std::make_tuple (_temp_ret, gi::wrap (tree_model_o, gi::transfer_none, gi::direction_out), gi::wrap (path_o, gi::transfer_full, gi::direction_out));
}

// gboolean gtk_tree_set_row_drag_data (GtkSelectionData* selection_data, GtkTreeModel* tree_model, GtkTreePath* path);
// gboolean gtk_tree_set_row_drag_data (::GtkSelectionData* selection_data, ::GtkTreeModel* tree_model, ::GtkTreePath* path);
bool tree_set_row_drag_data (Gtk::SelectionData selection_data, Gtk::TreeModel tree_model, Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkSelectionData* selection_data, ::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_set_row_drag_data;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto tree_model_to_c = gi::unwrap (tree_model, gi::transfer_none, gi::direction_in);
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkSelectionData*) (selection_data_to_c), (::GtkTreeModel*) (tree_model_to_c), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gboolean gtk_true ();
// gboolean gtk_true ();
bool true_ () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_true;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
