// AUTO-GENERATED

#ifndef _GI_GTK_WINDOW_IMPL_HPP_
#define _GI_GTK_WINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_window_new (GtkWindowType type);
// ::GtkWindow* gtk_window_new (::GtkWindowType type);
Gtk::Window base::WindowBase::new_ (Gtk::WindowType type) noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkWindowType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_new;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::GtkWindowType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_window_get_default_icon_list ();
// ::GList* gtk_window_get_default_icon_list ();
std::vector<GdkPixbuf::Pixbuf> base::WindowBase::get_default_icon_list () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_default_icon_list;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<GdkPixbuf::Pixbuf> (_temp_ret, gi::transfer_container);
}

// const gchar* gtk_window_get_default_icon_name ();
// const char* gtk_window_get_default_icon_name ();
std::string base::WindowBase::get_default_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_default_icon_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_window_list_toplevels ();
// ::GList* gtk_window_list_toplevels ();
std::vector<Gtk::Widget> base::WindowBase::list_toplevels () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_list_toplevels;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_container);
}

// void gtk_window_set_auto_startup_notification (gboolean setting);
// void gtk_window_set_auto_startup_notification (gboolean setting);
void base::WindowBase::set_auto_startup_notification (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_auto_startup_notification;
  auto setting_to_c = setting;
  call_wrap_v ((gboolean) (setting_to_c));
}

// void gtk_window_set_default_icon (GdkPixbuf* icon);
// void gtk_window_set_default_icon (::GdkPixbuf* icon);
void base::WindowBase::set_default_icon (GdkPixbuf::Pixbuf icon) noexcept
{
  typedef void (*call_wrap_t) (::GdkPixbuf* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkPixbuf*) (icon_to_c));
}

// gboolean gtk_window_set_default_icon_from_file (const gchar* filename, GError ** error);
// gboolean gtk_window_set_default_icon_from_file (const char* filename, GError ** error);
bool base::WindowBase::set_default_icon_from_file (const std::string & filename)
{
  typedef gboolean (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_icon_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WindowBase::set_default_icon_from_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_icon_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_window_set_default_icon_list (GList* list);
// void gtk_window_set_default_icon_list (::GList* list);
void base::WindowBase::set_default_icon_list (const std::vector<GdkPixbuf::Pixbuf> & list) noexcept
{
  typedef void (*call_wrap_t) (::GList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_icon_list;
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_container, direction_in);
  auto list_to_c = list_w.gobj_(true);
  call_wrap_v ((::GList*) (list_to_c));
}

// void gtk_window_set_default_icon_name (const gchar* name);
// void gtk_window_set_default_icon_name (const char* name);
void base::WindowBase::set_default_icon_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_icon_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (name_to_c));
}

// void gtk_window_set_interactive_debugging (gboolean enable);
// void gtk_window_set_interactive_debugging (gboolean enable);
void base::WindowBase::set_interactive_debugging (gboolean enable) noexcept
{
  typedef void (*call_wrap_t) (gboolean enable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_interactive_debugging;
  auto enable_to_c = enable;
  call_wrap_v ((gboolean) (enable_to_c));
}

// gboolean gtk_window_activate_default (GtkWindow* window);
// gboolean gtk_window_activate_default (::GtkWindow* window);
bool base::WindowBase::activate_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_activate_default;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_activate_focus (GtkWindow* window);
// gboolean gtk_window_activate_focus (::GtkWindow* window);
bool base::WindowBase::activate_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_activate_focus;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_activate_key (GtkWindow* window, GdkEventKey* event);
// gboolean gtk_window_activate_key (::GtkWindow* window, ::GdkEventKey* event);
bool base::WindowBase::activate_key (Gdk::EventKey event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_activate_key;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// void gtk_window_add_accel_group (GtkWindow* window, GtkAccelGroup* accel_group);
// void gtk_window_add_accel_group (::GtkWindow* window, ::GtkAccelGroup* accel_group);
void base::WindowBase::add_accel_group (Gtk::AccelGroup accel_group) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_add_accel_group;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkAccelGroup*) (accel_group_to_c));
}

// void gtk_window_add_mnemonic (GtkWindow* window, guint keyval, GtkWidget* target);
// void gtk_window_add_mnemonic (::GtkWindow* window, guint keyval, ::GtkWidget* target);
void base::WindowBase::add_mnemonic (guint keyval, Gtk::Widget target) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, guint keyval, ::GtkWidget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_add_mnemonic;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto keyval_to_c = keyval;
  call_wrap_v ((::GtkWindow*) (gobj_()), (guint) (keyval_to_c), (::GtkWidget*) (target_to_c));
}

// void gtk_window_begin_move_drag (GtkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gtk_window_begin_move_drag (::GtkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_move_drag (gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_begin_move_drag;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gtk_window_begin_resize_drag (GtkWindow* window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gtk_window_begin_resize_drag (::GtkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_resize_drag (Gdk::WindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_begin_resize_drag;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  auto edge_to_c = gi::unwrap (edge);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkWindowEdge) (edge_to_c), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gtk_window_close (GtkWindow* window);
// void gtk_window_close (::GtkWindow* window);
void base::WindowBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_close;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_deiconify (GtkWindow* window);
// void gtk_window_deiconify (::GtkWindow* window);
void base::WindowBase::deiconify () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_deiconify;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_fullscreen (GtkWindow* window);
// void gtk_window_fullscreen (::GtkWindow* window);
void base::WindowBase::fullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_fullscreen;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_fullscreen_on_monitor (GtkWindow* window, GdkScreen* screen, gint monitor);
// void gtk_window_fullscreen_on_monitor (::GtkWindow* window, ::GdkScreen* screen, gint monitor);
void base::WindowBase::fullscreen_on_monitor (Gdk::Screen screen, gint monitor) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkScreen* screen, gint monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_fullscreen_on_monitor;
  auto monitor_to_c = monitor;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkScreen*) (screen_to_c), (gint) (monitor_to_c));
}

// gboolean gtk_window_get_accept_focus (GtkWindow* window);
// gboolean gtk_window_get_accept_focus (::GtkWindow* window);
bool base::WindowBase::get_accept_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_accept_focus;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GtkApplication* gtk_window_get_application (GtkWindow* window);
// ::GtkApplication* gtk_window_get_application (::GtkWindow* window);
Gtk::Application base::WindowBase::get_application () noexcept
{
  typedef ::GtkApplication* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_application;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_window_get_attached_to (GtkWindow* window);
// ::GtkWidget* gtk_window_get_attached_to (::GtkWindow* window);
Gtk::Widget base::WindowBase::get_attached_to () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_attached_to;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_window_get_decorated (GtkWindow* window);
// gboolean gtk_window_get_decorated (::GtkWindow* window);
bool base::WindowBase::get_decorated () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_decorated;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_window_get_default_size (GtkWindow* window, gint* width, gint* height);
// void gtk_window_get_default_size (::GtkWindow* window, gint* width, gint* height);
void base::WindowBase::get_default_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_default_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::WindowBase::get_default_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_default_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// GtkWidget* gtk_window_get_default_widget (GtkWindow* window);
// ::GtkWidget* gtk_window_get_default_widget (::GtkWindow* window);
Gtk::Widget base::WindowBase::get_default_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_default_widget;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_window_get_deletable (GtkWindow* window);
// gboolean gtk_window_get_deletable (::GtkWindow* window);
bool base::WindowBase::get_deletable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_deletable;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_destroy_with_parent (GtkWindow* window);
// gboolean gtk_window_get_destroy_with_parent (::GtkWindow* window);
bool base::WindowBase::get_destroy_with_parent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_destroy_with_parent;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWidget* gtk_window_get_focus (GtkWindow* window);
// ::GtkWidget* gtk_window_get_focus (::GtkWindow* window);
Gtk::Widget base::WindowBase::get_focus () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_focus;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_window_get_focus_on_map (GtkWindow* window);
// gboolean gtk_window_get_focus_on_map (::GtkWindow* window);
bool base::WindowBase::get_focus_on_map () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_focus_on_map;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_focus_visible (GtkWindow* window);
// gboolean gtk_window_get_focus_visible (::GtkWindow* window);
bool base::WindowBase::get_focus_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_focus_visible;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkGravity gtk_window_get_gravity (GtkWindow* window);
// ::GdkGravity gtk_window_get_gravity (::GtkWindow* window);
Gdk::Gravity base::WindowBase::get_gravity () noexcept
{
  typedef ::GdkGravity (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_gravity;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWindowGroup* gtk_window_get_group (GtkWindow* window);
// ::GtkWindowGroup* gtk_window_get_group (::GtkWindow* window);
Gtk::WindowGroup base::WindowBase::get_group () noexcept
{
  typedef ::GtkWindowGroup* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_group;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_window_get_has_resize_grip (GtkWindow* window);
// gboolean gtk_window_get_has_resize_grip (::GtkWindow* window);
// IGNORE; deprecated

// gboolean gtk_window_get_hide_titlebar_when_maximized (GtkWindow* window);
// gboolean gtk_window_get_hide_titlebar_when_maximized (::GtkWindow* window);
bool base::WindowBase::get_hide_titlebar_when_maximized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_hide_titlebar_when_maximized;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gtk_window_get_icon (GtkWindow* window);
// ::GdkPixbuf* gtk_window_get_icon (::GtkWindow* window);
GdkPixbuf::Pixbuf base::WindowBase::get_icon () noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_icon;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_window_get_icon_list (GtkWindow* window);
// ::GList* gtk_window_get_icon_list (::GtkWindow* window);
std::vector<GdkPixbuf::Pixbuf> base::WindowBase::get_icon_list () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_icon_list;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::detail::wrap_list<GdkPixbuf::Pixbuf> (_temp_ret, gi::transfer_container);
}

// const gchar* gtk_window_get_icon_name (GtkWindow* window);
// const char* gtk_window_get_icon_name (::GtkWindow* window);
std::string base::WindowBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkModifierType gtk_window_get_mnemonic_modifier (GtkWindow* window);
// ::GdkModifierType gtk_window_get_mnemonic_modifier (::GtkWindow* window);
Gdk::ModifierType base::WindowBase::get_mnemonic_modifier () noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_mnemonic_modifier;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_window_get_mnemonics_visible (GtkWindow* window);
// gboolean gtk_window_get_mnemonics_visible (::GtkWindow* window);
bool base::WindowBase::get_mnemonics_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_mnemonics_visible;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_modal (GtkWindow* window);
// gboolean gtk_window_get_modal (::GtkWindow* window);
bool base::WindowBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gdouble gtk_window_get_opacity (GtkWindow* window);
// gdouble gtk_window_get_opacity (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_get_position (GtkWindow* window, gint* root_x, gint* root_y);
// void gtk_window_get_position (::GtkWindow* window, gint* root_x, gint* root_y);
void base::WindowBase::get_position (gint * root_x, gint * root_y) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* root_x, gint* root_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_position;
  gint root_y_o {};
  gint root_x_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (root_x ? &root_x_o : nullptr), (gint*) (root_y ? &root_y_o : nullptr));
  if (root_y) *root_y = root_y_o;
  if (root_x) *root_x = root_x_o;
}
std::tuple<gint, gint> base::WindowBase::get_position () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* root_x, gint* root_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_position;
  gint root_y_o {};
  gint root_x_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (&root_x_o), (gint*) (&root_y_o));
  return std::make_tuple (root_x_o, root_y_o);
}

// gboolean gtk_window_get_resizable (GtkWindow* window);
// gboolean gtk_window_get_resizable (::GtkWindow* window);
bool base::WindowBase::get_resizable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_resizable;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_resize_grip_area (GtkWindow* window, GdkRectangle* rect);
// gboolean gtk_window_get_resize_grip_area (::GtkWindow* window, ::GdkRectangle* rect);
// IGNORE; deprecated

// const gchar* gtk_window_get_role (GtkWindow* window);
// const char* gtk_window_get_role (::GtkWindow* window);
std::string base::WindowBase::get_role () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_role;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkScreen* gtk_window_get_screen (GtkWindow* window);
// ::GdkScreen* gtk_window_get_screen (::GtkWindow* window);
Gdk::Screen base::WindowBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_screen;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_window_get_size (GtkWindow* window, gint* width, gint* height);
// void gtk_window_get_size (::GtkWindow* window, gint* width, gint* height);
void base::WindowBase::get_size (gint & width, gint & height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  height = height_o;
  width = width_o;
}
std::tuple<gint, gint> base::WindowBase::get_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// gboolean gtk_window_get_skip_pager_hint (GtkWindow* window);
// gboolean gtk_window_get_skip_pager_hint (::GtkWindow* window);
bool base::WindowBase::get_skip_pager_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_skip_pager_hint;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_get_skip_taskbar_hint (GtkWindow* window);
// gboolean gtk_window_get_skip_taskbar_hint (::GtkWindow* window);
bool base::WindowBase::get_skip_taskbar_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_skip_taskbar_hint;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_window_get_title (GtkWindow* window);
// const char* gtk_window_get_title (::GtkWindow* window);
std::string base::WindowBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_title;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_window_get_titlebar (GtkWindow* window);
// ::GtkWidget* gtk_window_get_titlebar (::GtkWindow* window);
Gtk::Widget base::WindowBase::get_titlebar () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_titlebar;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWindow* gtk_window_get_transient_for (GtkWindow* window);
// ::GtkWindow* gtk_window_get_transient_for (::GtkWindow* window);
Gtk::Window base::WindowBase::get_transient_for () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_transient_for;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindowTypeHint gtk_window_get_type_hint (GtkWindow* window);
// ::GdkWindowTypeHint gtk_window_get_type_hint (::GtkWindow* window);
Gdk::WindowTypeHint base::WindowBase::get_type_hint () noexcept
{
  typedef ::GdkWindowTypeHint (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_type_hint;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_window_get_urgency_hint (GtkWindow* window);
// gboolean gtk_window_get_urgency_hint (::GtkWindow* window);
bool base::WindowBase::get_urgency_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_urgency_hint;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// GtkWindowType gtk_window_get_window_type (GtkWindow* window);
// ::GtkWindowType gtk_window_get_window_type (::GtkWindow* window);
Gtk::WindowType base::WindowBase::get_window_type () noexcept
{
  typedef ::GtkWindowType (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_get_window_type;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_window_has_group (GtkWindow* window);
// gboolean gtk_window_has_group (::GtkWindow* window);
bool base::WindowBase::has_group () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_has_group;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_has_toplevel_focus (GtkWindow* window);
// gboolean gtk_window_has_toplevel_focus (::GtkWindow* window);
bool base::WindowBase::has_toplevel_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_has_toplevel_focus;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_window_iconify (GtkWindow* window);
// void gtk_window_iconify (::GtkWindow* window);
void base::WindowBase::iconify () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_iconify;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// gboolean gtk_window_is_active (GtkWindow* window);
// gboolean gtk_window_is_active (::GtkWindow* window);
bool base::WindowBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_is_active;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_window_is_maximized (GtkWindow* window);
// gboolean gtk_window_is_maximized (::GtkWindow* window);
bool base::WindowBase::is_maximized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_is_maximized;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()));
  return _temp_ret;
}

// void gtk_window_maximize (GtkWindow* window);
// void gtk_window_maximize (::GtkWindow* window);
void base::WindowBase::maximize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_maximize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// gboolean gtk_window_mnemonic_activate (GtkWindow* window, guint keyval, GdkModifierType modifier);
// gboolean gtk_window_mnemonic_activate (::GtkWindow* window, guint keyval, ::GdkModifierType modifier);
bool base::WindowBase::mnemonic_activate (guint keyval, Gdk::ModifierType modifier) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, guint keyval, ::GdkModifierType modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_mnemonic_activate;
  auto modifier_to_c = gi::unwrap (modifier);
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (guint) (keyval_to_c), (::GdkModifierType) (modifier_to_c));
  return _temp_ret;
}

// void gtk_window_move (GtkWindow* window, gint x, gint y);
// void gtk_window_move (::GtkWindow* window, gint x, gint y);
void base::WindowBase::move (gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_move;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
}

// gboolean gtk_window_parse_geometry (GtkWindow* window, const gchar* geometry);
// gboolean gtk_window_parse_geometry (::GtkWindow* window, const char* geometry);
// IGNORE; deprecated

// void gtk_window_present (GtkWindow* window);
// void gtk_window_present (::GtkWindow* window);
void base::WindowBase::present () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_present;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_present_with_time (GtkWindow* window, guint32 timestamp);
// void gtk_window_present_with_time (::GtkWindow* window, guint32 timestamp);
void base::WindowBase::present_with_time (guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_present_with_time;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GtkWindow*) (gobj_()), (guint32) (timestamp_to_c));
}

// gboolean gtk_window_propagate_key_event (GtkWindow* window, GdkEventKey* event);
// gboolean gtk_window_propagate_key_event (::GtkWindow* window, ::GdkEventKey* event);
bool base::WindowBase::propagate_key_event (Gdk::EventKey event) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_propagate_key_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// void gtk_window_remove_accel_group (GtkWindow* window, GtkAccelGroup* accel_group);
// void gtk_window_remove_accel_group (::GtkWindow* window, ::GtkAccelGroup* accel_group);
void base::WindowBase::remove_accel_group (Gtk::AccelGroup accel_group) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_remove_accel_group;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkAccelGroup*) (accel_group_to_c));
}

// void gtk_window_remove_mnemonic (GtkWindow* window, guint keyval, GtkWidget* target);
// void gtk_window_remove_mnemonic (::GtkWindow* window, guint keyval, ::GtkWidget* target);
void base::WindowBase::remove_mnemonic (guint keyval, Gtk::Widget target) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, guint keyval, ::GtkWidget* target);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_remove_mnemonic;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto keyval_to_c = keyval;
  call_wrap_v ((::GtkWindow*) (gobj_()), (guint) (keyval_to_c), (::GtkWidget*) (target_to_c));
}

// void gtk_window_reshow_with_initial_size (GtkWindow* window);
// void gtk_window_reshow_with_initial_size (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_resize (GtkWindow* window, gint width, gint height);
// void gtk_window_resize (::GtkWindow* window, gint width, gint height);
void base::WindowBase::resize (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_resize;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// gboolean gtk_window_resize_grip_is_visible (GtkWindow* window);
// gboolean gtk_window_resize_grip_is_visible (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_resize_to_geometry (GtkWindow* window, gint width, gint height);
// void gtk_window_resize_to_geometry (::GtkWindow* window, gint width, gint height);
// IGNORE; deprecated

// void gtk_window_set_accept_focus (GtkWindow* window, gboolean setting);
// void gtk_window_set_accept_focus (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_accept_focus (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_accept_focus;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_application (GtkWindow* window, GtkApplication* application);
// void gtk_window_set_application (::GtkWindow* window, ::GtkApplication* application);
void base::WindowBase::set_application (Gtk::Application application) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_application;
  auto application_to_c = gi::unwrap (application, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkApplication*) (application_to_c));
}
void base::WindowBase::set_application () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_application;
  auto application_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkApplication*) (application_to_c));
}

// void gtk_window_set_attached_to (GtkWindow* window, GtkWidget* attach_widget);
// void gtk_window_set_attached_to (::GtkWindow* window, ::GtkWidget* attach_widget);
void base::WindowBase::set_attached_to (Gtk::Widget attach_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* attach_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_attached_to;
  auto attach_widget_to_c = gi::unwrap (attach_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (attach_widget_to_c));
}
void base::WindowBase::set_attached_to () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* attach_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_attached_to;
  auto attach_widget_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (attach_widget_to_c));
}

// void gtk_window_set_decorated (GtkWindow* window, gboolean setting);
// void gtk_window_set_decorated (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_decorated (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_decorated;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_default (GtkWindow* window, GtkWidget* default_widget);
// void gtk_window_set_default (::GtkWindow* window, ::GtkWidget* default_widget);
void base::WindowBase::set_default (Gtk::Widget default_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default;
  auto default_widget_to_c = gi::unwrap (default_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}
void base::WindowBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* default_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default;
  auto default_widget_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (default_widget_to_c));
}

// void gtk_window_set_default_geometry (GtkWindow* window, gint width, gint height);
// void gtk_window_set_default_geometry (::GtkWindow* window, gint width, gint height);
// IGNORE; deprecated

// void gtk_window_set_default_size (GtkWindow* window, gint width, gint height);
// void gtk_window_set_default_size (::GtkWindow* window, gint width, gint height);
void base::WindowBase::set_default_size (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_default_size;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_window_set_deletable (GtkWindow* window, gboolean setting);
// void gtk_window_set_deletable (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_deletable (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_deletable;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_destroy_with_parent (GtkWindow* window, gboolean setting);
// void gtk_window_set_destroy_with_parent (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_destroy_with_parent (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_destroy_with_parent;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_focus (GtkWindow* window, GtkWidget* focus);
// void gtk_window_set_focus (::GtkWindow* window, ::GtkWidget* focus);
void base::WindowBase::set_focus (Gtk::Widget focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_focus;
  auto focus_to_c = gi::unwrap (focus, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (focus_to_c));
}
void base::WindowBase::set_focus () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_focus;
  auto focus_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (focus_to_c));
}

// void gtk_window_set_focus_on_map (GtkWindow* window, gboolean setting);
// void gtk_window_set_focus_on_map (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_focus_on_map (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_focus_on_map;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_focus_visible (GtkWindow* window, gboolean setting);
// void gtk_window_set_focus_visible (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_focus_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_focus_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_geometry_hints (GtkWindow* window, GtkWidget* geometry_widget, GdkGeometry* geometry, GdkWindowHints geom_mask);
// void gtk_window_set_geometry_hints (::GtkWindow* window, ::GtkWidget* geometry_widget, ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
void base::WindowBase::set_geometry_hints (Gtk::Widget geometry_widget, Gdk::Geometry geometry, Gdk::WindowHints geom_mask) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* geometry_widget, ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_geometry_hints;
  auto geom_mask_to_c = gi::unwrap (geom_mask);
  auto geometry_to_c = gi::unwrap (geometry, gi::transfer_none, gi::direction_in);
  auto geometry_widget_to_c = gi::unwrap (geometry_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (geometry_widget_to_c), (::GdkGeometry*) (geometry_to_c), (::GdkWindowHints) (geom_mask_to_c));
}
void base::WindowBase::set_geometry_hints (Gdk::WindowHints geom_mask) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* geometry_widget, ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_geometry_hints;
  auto geom_mask_to_c = gi::unwrap (geom_mask);
  auto geometry_to_c = nullptr;
  auto geometry_widget_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (geometry_widget_to_c), (::GdkGeometry*) (geometry_to_c), (::GdkWindowHints) (geom_mask_to_c));
}

// void gtk_window_set_gravity (GtkWindow* window, GdkGravity gravity);
// void gtk_window_set_gravity (::GtkWindow* window, ::GdkGravity gravity);
void base::WindowBase::set_gravity (Gdk::Gravity gravity) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_gravity;
  auto gravity_to_c = gi::unwrap (gravity);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkGravity) (gravity_to_c));
}

// void gtk_window_set_has_resize_grip (GtkWindow* window, gboolean value);
// void gtk_window_set_has_resize_grip (::GtkWindow* window, gboolean value);
// IGNORE; deprecated

// void gtk_window_set_has_user_ref_count (GtkWindow* window, gboolean setting);
// void gtk_window_set_has_user_ref_count (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_has_user_ref_count (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_has_user_ref_count;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_hide_titlebar_when_maximized (GtkWindow* window, gboolean setting);
// void gtk_window_set_hide_titlebar_when_maximized (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_hide_titlebar_when_maximized (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_hide_titlebar_when_maximized;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_icon (GtkWindow* window, GdkPixbuf* icon);
// void gtk_window_set_icon (::GtkWindow* window, ::GdkPixbuf* icon);
void base::WindowBase::set_icon (GdkPixbuf::Pixbuf icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkPixbuf* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkPixbuf*) (icon_to_c));
}
void base::WindowBase::set_icon () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkPixbuf* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon;
  auto icon_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkPixbuf*) (icon_to_c));
}

// gboolean gtk_window_set_icon_from_file (GtkWindow* window, const gchar* filename, GError ** error);
// gboolean gtk_window_set_icon_from_file (::GtkWindow* window, const char* filename, GError ** error);
bool base::WindowBase::set_icon_from_file (const std::string & filename)
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WindowBase::set_icon_from_file (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon_from_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void gtk_window_set_icon_list (GtkWindow* window, GList* list);
// void gtk_window_set_icon_list (::GtkWindow* window, ::GList* list);
void base::WindowBase::set_icon_list (const std::vector<GdkPixbuf::Pixbuf> & list) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon_list;
  auto list_i = detail::make_list_unwrap_range<::GList> (list);
  auto list_w = unwrap (list_i, gi::transfer_none, direction_in);
  auto list_to_c = list_w.gobj_(false);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GList*) (list_to_c));
}

// void gtk_window_set_icon_name (GtkWindow* window, const gchar* name);
// void gtk_window_set_icon_name (::GtkWindow* window, const char* name);
void base::WindowBase::set_icon_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (name_to_c));
}
void base::WindowBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_icon_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_window_set_keep_above (GtkWindow* window, gboolean setting);
// void gtk_window_set_keep_above (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_keep_above (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_keep_above;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_keep_below (GtkWindow* window, gboolean setting);
// void gtk_window_set_keep_below (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_keep_below (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_keep_below;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_mnemonic_modifier (GtkWindow* window, GdkModifierType modifier);
// void gtk_window_set_mnemonic_modifier (::GtkWindow* window, ::GdkModifierType modifier);
void base::WindowBase::set_mnemonic_modifier (Gdk::ModifierType modifier) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkModifierType modifier);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_mnemonic_modifier;
  auto modifier_to_c = gi::unwrap (modifier);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkModifierType) (modifier_to_c));
}

// void gtk_window_set_mnemonics_visible (GtkWindow* window, gboolean setting);
// void gtk_window_set_mnemonics_visible (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_mnemonics_visible (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_mnemonics_visible;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_modal (GtkWindow* window, gboolean modal);
// void gtk_window_set_modal (::GtkWindow* window, gboolean modal);
void base::WindowBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_window_set_opacity (GtkWindow* window, gdouble opacity);
// void gtk_window_set_opacity (::GtkWindow* window, gdouble opacity);
// IGNORE; deprecated

// void gtk_window_set_position (GtkWindow* window, GtkWindowPosition position);
// void gtk_window_set_position (::GtkWindow* window, ::GtkWindowPosition position);
void base::WindowBase::set_position (Gtk::WindowPosition position) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWindowPosition position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWindowPosition) (position_to_c));
}

// void gtk_window_set_resizable (GtkWindow* window, gboolean resizable);
// void gtk_window_set_resizable (::GtkWindow* window, gboolean resizable);
void base::WindowBase::set_resizable (gboolean resizable) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean resizable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_resizable;
  auto resizable_to_c = resizable;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (resizable_to_c));
}

// void gtk_window_set_role (GtkWindow* window, const gchar* role);
// void gtk_window_set_role (::GtkWindow* window, const char* role);
void base::WindowBase::set_role (const std::string & role) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* role);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_role;
  auto role_to_c = gi::unwrap (role, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (role_to_c));
}

// void gtk_window_set_screen (GtkWindow* window, GdkScreen* screen);
// void gtk_window_set_screen (::GtkWindow* window, ::GdkScreen* screen);
void base::WindowBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkScreen*) (screen_to_c));
}

// void gtk_window_set_skip_pager_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_skip_pager_hint (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_skip_pager_hint (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_skip_pager_hint;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_skip_taskbar_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_skip_taskbar_hint (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_skip_taskbar_hint (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_skip_taskbar_hint;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_startup_id (GtkWindow* window, const gchar* startup_id);
// void gtk_window_set_startup_id (::GtkWindow* window, const char* startup_id);
void base::WindowBase::set_startup_id (const std::string & startup_id) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_startup_id;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (startup_id_to_c));
}

// void gtk_window_set_title (GtkWindow* window, const gchar* title);
// void gtk_window_set_title (::GtkWindow* window, const char* title);
void base::WindowBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_window_set_titlebar (GtkWindow* window, GtkWidget* titlebar);
// void gtk_window_set_titlebar (::GtkWindow* window, ::GtkWidget* titlebar);
void base::WindowBase::set_titlebar (Gtk::Widget titlebar) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* titlebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_titlebar;
  auto titlebar_to_c = gi::unwrap (titlebar, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (titlebar_to_c));
}
void base::WindowBase::set_titlebar () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* titlebar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_titlebar;
  auto titlebar_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (titlebar_to_c));
}

// void gtk_window_set_transient_for (GtkWindow* window, GtkWindow* parent);
// void gtk_window_set_transient_for (::GtkWindow* window, ::GtkWindow* parent);
void base::WindowBase::set_transient_for (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_transient_for;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::WindowBase::set_transient_for () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_transient_for;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWindow*) (parent_to_c));
}

// void gtk_window_set_type_hint (GtkWindow* window, GdkWindowTypeHint hint);
// void gtk_window_set_type_hint (::GtkWindow* window, ::GdkWindowTypeHint hint);
void base::WindowBase::set_type_hint (Gdk::WindowTypeHint hint) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GdkWindowTypeHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_type_hint;
  auto hint_to_c = gi::unwrap (hint);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GdkWindowTypeHint) (hint_to_c));
}

// void gtk_window_set_urgency_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_urgency_hint (::GtkWindow* window, gboolean setting);
void base::WindowBase::set_urgency_hint (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_set_urgency_hint;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_window_set_wmclass (GtkWindow* window, const gchar* wmclass_name, const gchar* wmclass_class);
// void gtk_window_set_wmclass (::GtkWindow* window, const char* wmclass_name, const char* wmclass_class);
// IGNORE; deprecated

// void gtk_window_stick (GtkWindow* window);
// void gtk_window_stick (::GtkWindow* window);
void base::WindowBase::stick () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_stick;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_unfullscreen (GtkWindow* window);
// void gtk_window_unfullscreen (::GtkWindow* window);
void base::WindowBase::unfullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_unfullscreen;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_unmaximize (GtkWindow* window);
// void gtk_window_unmaximize (::GtkWindow* window);
void base::WindowBase::unmaximize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_unmaximize;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void gtk_window_unstick (GtkWindow* window);
// void gtk_window_unstick (::GtkWindow* window);
void base::WindowBase::unstick () noexcept
{
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_unstick;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/window_extra_def_impl.hpp>)
#include <gtk/window_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/window_extra_impl.hpp>)
#include <gtk/window_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkWindowClass *methods = (::GtkWindowClass *) class_struct;
  (void) methods;

  methods->activate_default = (decltype (methods->activate_default)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_default_>;
  methods->activate_focus = (decltype (methods->activate_focus)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_focus_>;
  methods->enable_debugging = (decltype (methods->enable_debugging)) detail::method_wrapper<self, bool (*) (gboolean toggle), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::enable_debugging_>;
  methods->keys_changed = (decltype (methods->keys_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::keys_changed_>;
  methods->set_focus = (decltype (methods->set_focus)) detail::method_wrapper<self, void (*) (Gtk::Widget focus), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_focus_>;
}

// void Window::activate_default (GtkWindow* window);
// void Window::activate_default (::GtkWindow* window);
void WindowClass::activate_default_ () noexcept
{
  if (!get_struct_()->activate_default) return ;
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_default;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void Window::activate_focus (GtkWindow* window);
// void Window::activate_focus (::GtkWindow* window);
void WindowClass::activate_focus_ () noexcept
{
  if (!get_struct_()->activate_focus) return ;
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_focus;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// gboolean Window::enable_debugging (GtkWindow* window, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window, gboolean toggle);
bool WindowClass::enable_debugging_ (gboolean toggle) noexcept
{
  if (!get_struct_()->enable_debugging) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWindow* window, gboolean toggle);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enable_debugging;
  auto toggle_to_c = toggle;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (gobj_()), (gboolean) (toggle_to_c));
  return _temp_ret;
}

// void Window::keys_changed (GtkWindow* window);
// void Window::keys_changed (::GtkWindow* window);
void WindowClass::keys_changed_ () noexcept
{
  if (!get_struct_()->keys_changed) return ;
  typedef void (*call_wrap_t) (::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->keys_changed;
  call_wrap_v ((::GtkWindow*) (gobj_()));
}

// void Window::set_focus (GtkWindow* window, GtkWidget* focus);
// void Window::set_focus (::GtkWindow* window, ::GtkWidget* focus);
void WindowClass::set_focus_ (Gtk::Widget focus) noexcept
{
  if (!get_struct_()->set_focus) return ;
  typedef void (*call_wrap_t) (::GtkWindow* window, ::GtkWidget* focus);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_focus;
  auto focus_to_c = gi::unwrap (focus, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindow*) (gobj_()), (::GtkWidget*) (focus_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
