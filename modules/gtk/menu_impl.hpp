// AUTO-GENERATED

#ifndef _GI_GTK_MENU_IMPL_HPP_
#define _GI_GTK_MENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_menu_new ();
// ::GtkMenu* gtk_menu_new ();
Gtk::Menu base::MenuBase::new_ () noexcept
{
  typedef ::GtkMenu* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_new_from_model (GMenuModel* model);
// ::GtkMenu* gtk_menu_new_from_model (::GMenuModel* model);
Gtk::Menu base::MenuBase::new_from_model (Gio::MenuModel model) noexcept
{
  typedef ::GtkMenu* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_menu_get_for_attach_widget (GtkWidget* widget);
// ::GList* gtk_menu_get_for_attach_widget (::GtkWidget* widget);
std::vector<Gtk::Widget> base::MenuBase::get_for_attach_widget (Gtk::Widget widget) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_for_attach_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_none);
}

// void gtk_menu_attach (GtkMenu* menu, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
// void gtk_menu_attach (::GtkMenu* menu, ::GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
void base::MenuBase::attach (Gtk::Widget child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_attach;
  auto bottom_attach_to_c = bottom_attach;
  auto top_attach_to_c = top_attach;
  auto right_attach_to_c = right_attach;
  auto left_attach_to_c = left_attach;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GtkWidget*) (child_to_c), (guint) (left_attach_to_c), (guint) (right_attach_to_c), (guint) (top_attach_to_c), (guint) (bottom_attach_to_c));
}

// void gtk_menu_attach_to_widget (GtkMenu* menu, GtkWidget* attach_widget, GtkMenuDetachFunc detacher);
// void gtk_menu_attach_to_widget (::GtkMenu* menu, ::GtkWidget* attach_widget,  detacher);
// SKIP; detacher type  not supported

// void gtk_menu_detach (GtkMenu* menu);
// void gtk_menu_detach (::GtkMenu* menu);
void base::MenuBase::detach () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_detach;
  call_wrap_v ((::GtkMenu*) (gobj_()));
}

// GtkAccelGroup* gtk_menu_get_accel_group (GtkMenu* menu);
// ::GtkAccelGroup* gtk_menu_get_accel_group (::GtkMenu* menu);
Gtk::AccelGroup base::MenuBase::get_accel_group () noexcept
{
  typedef ::GtkAccelGroup* (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_accel_group;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_menu_get_accel_path (GtkMenu* menu);
// const char* gtk_menu_get_accel_path (::GtkMenu* menu);
std::string base::MenuBase::get_accel_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_accel_path;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_get_active (GtkMenu* menu);
// ::GtkWidget* gtk_menu_get_active (::GtkMenu* menu);
Gtk::Widget base::MenuBase::get_active () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_active;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_get_attach_widget (GtkMenu* menu);
// ::GtkWidget* gtk_menu_get_attach_widget (::GtkMenu* menu);
Gtk::Widget base::MenuBase::get_attach_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_attach_widget;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gtk_menu_get_monitor (GtkMenu* menu);
// gint gtk_menu_get_monitor (::GtkMenu* menu);
gint base::MenuBase::get_monitor () noexcept
{
  typedef gint (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_monitor;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_get_reserve_toggle_size (GtkMenu* menu);
// gboolean gtk_menu_get_reserve_toggle_size (::GtkMenu* menu);
bool base::MenuBase::get_reserve_toggle_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_get_reserve_toggle_size;
  auto _temp_ret = call_wrap_v ((::GtkMenu*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_get_tearoff_state (GtkMenu* menu);
// gboolean gtk_menu_get_tearoff_state (::GtkMenu* menu);
// IGNORE; deprecated

// const gchar* gtk_menu_get_title (GtkMenu* menu);
// const char* gtk_menu_get_title (::GtkMenu* menu);
// IGNORE; deprecated

// void gtk_menu_place_on_monitor (GtkMenu* menu, GdkMonitor* monitor);
// void gtk_menu_place_on_monitor (::GtkMenu* menu, ::GdkMonitor* monitor);
void base::MenuBase::place_on_monitor (Gdk::Monitor monitor) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_place_on_monitor;
  auto monitor_to_c = gi::unwrap (monitor, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GdkMonitor*) (monitor_to_c));
}

// void gtk_menu_popdown (GtkMenu* menu);
// void gtk_menu_popdown (::GtkMenu* menu);
void base::MenuBase::popdown () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_popdown;
  call_wrap_v ((::GtkMenu*) (gobj_()));
}

// void gtk_menu_popup (GtkMenu* menu, GtkWidget* parent_menu_shell, GtkWidget* parent_menu_item, GtkMenuPositionFunc func, gpointer data, guint button, guint32 activate_time);
// void gtk_menu_popup (::GtkMenu* menu, ::GtkWidget* parent_menu_shell, ::GtkWidget* parent_menu_item,  func, void* data, guint button, guint32 activate_time);
// IGNORE; deprecated

// void gtk_menu_popup_at_pointer (GtkMenu* menu, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_pointer (::GtkMenu* menu, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_at_rect (GtkMenu* menu, GdkWindow* rect_window, const GdkRectangle* rect, GdkGravity rect_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_rect (::GtkMenu* menu, ::GdkWindow* rect_window, const ::GdkRectangle* rect, ::GdkGravity rect_anchor, ::GdkGravity menu_anchor, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_at_widget (GtkMenu* menu, GtkWidget* widget, GdkGravity widget_anchor, GdkGravity menu_anchor, const GdkEvent* trigger_event);
// void gtk_menu_popup_at_widget (::GtkMenu* menu, ::GtkWidget* widget, ::GdkGravity widget_anchor, ::GdkGravity menu_anchor, const  trigger_event);
// SKIP; trigger_event type  not supported

// void gtk_menu_popup_for_device (GtkMenu* menu, GdkDevice* device, GtkWidget* parent_menu_shell, GtkWidget* parent_menu_item, GtkMenuPositionFunc func, gpointer data, GDestroyNotify destroy, guint button, guint32 activate_time);
// void gtk_menu_popup_for_device (::GtkMenu* menu, ::GdkDevice* device, ::GtkWidget* parent_menu_shell, ::GtkWidget* parent_menu_item,  func, void* data, GLib::DestroyNotify::cfunction_type destroy, guint button, guint32 activate_time);
// IGNORE; deprecated

// void gtk_menu_reorder_child (GtkMenu* menu, GtkWidget* child, gint position);
// void gtk_menu_reorder_child (::GtkMenu* menu, ::GtkWidget* child, gint position);
void base::MenuBase::reorder_child (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_reorder_child;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_menu_reposition (GtkMenu* menu);
// void gtk_menu_reposition (::GtkMenu* menu);
void base::MenuBase::reposition () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_reposition;
  call_wrap_v ((::GtkMenu*) (gobj_()));
}

// void gtk_menu_set_accel_group (GtkMenu* menu, GtkAccelGroup* accel_group);
// void gtk_menu_set_accel_group (::GtkMenu* menu, ::GtkAccelGroup* accel_group);
void base::MenuBase::set_accel_group (Gtk::AccelGroup accel_group) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_accel_group;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GtkAccelGroup*) (accel_group_to_c));
}
void base::MenuBase::set_accel_group () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_accel_group;
  auto accel_group_to_c = nullptr;
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GtkAccelGroup*) (accel_group_to_c));
}

// void gtk_menu_set_accel_path (GtkMenu* menu, const gchar* accel_path);
// void gtk_menu_set_accel_path (::GtkMenu* menu, const char* accel_path);
void base::MenuBase::set_accel_path (const std::string & accel_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_accel_path;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (const char*) (accel_path_to_c));
}
void base::MenuBase::set_accel_path () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_accel_path;
  auto accel_path_to_c = nullptr;
  call_wrap_v ((::GtkMenu*) (gobj_()), (const char*) (accel_path_to_c));
}

// void gtk_menu_set_active (GtkMenu* menu, guint index);
// void gtk_menu_set_active (::GtkMenu* menu, guint index);
void base::MenuBase::set_active (guint index) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_active;
  auto index_to_c = index;
  call_wrap_v ((::GtkMenu*) (gobj_()), (guint) (index_to_c));
}

// void gtk_menu_set_monitor (GtkMenu* menu, gint monitor_num);
// void gtk_menu_set_monitor (::GtkMenu* menu, gint monitor_num);
void base::MenuBase::set_monitor (gint monitor_num) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, gint monitor_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_monitor;
  auto monitor_num_to_c = monitor_num;
  call_wrap_v ((::GtkMenu*) (gobj_()), (gint) (monitor_num_to_c));
}

// void gtk_menu_set_reserve_toggle_size (GtkMenu* menu, gboolean reserve_toggle_size);
// void gtk_menu_set_reserve_toggle_size (::GtkMenu* menu, gboolean reserve_toggle_size);
void base::MenuBase::set_reserve_toggle_size (gboolean reserve_toggle_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, gboolean reserve_toggle_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_reserve_toggle_size;
  auto reserve_toggle_size_to_c = reserve_toggle_size;
  call_wrap_v ((::GtkMenu*) (gobj_()), (gboolean) (reserve_toggle_size_to_c));
}

// void gtk_menu_set_screen (GtkMenu* menu, GdkScreen* screen);
// void gtk_menu_set_screen (::GtkMenu* menu, ::GdkScreen* screen);
void base::MenuBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GdkScreen*) (screen_to_c));
}
void base::MenuBase::set_screen () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenu* menu, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_set_screen;
  auto screen_to_c = nullptr;
  call_wrap_v ((::GtkMenu*) (gobj_()), (::GdkScreen*) (screen_to_c));
}

// void gtk_menu_set_tearoff_state (GtkMenu* menu, gboolean torn_off);
// void gtk_menu_set_tearoff_state (::GtkMenu* menu, gboolean torn_off);
// IGNORE; deprecated

// void gtk_menu_set_title (GtkMenu* menu, const gchar* title);
// void gtk_menu_set_title (::GtkMenu* menu, const char* title);
// IGNORE; deprecated




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menu_extra_def_impl.hpp>)
#include <gtk/menu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menu_extra_impl.hpp>)
#include <gtk/menu_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuClass *methods = (::GtkMenuClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
