// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWGROUP_IMPL_HPP_
#define _GI_GTK_WINDOWGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWindowGroup* gtk_window_group_new ();
// ::GtkWindowGroup* gtk_window_group_new ();
Gtk::WindowGroup base::WindowGroupBase::new_ () noexcept
{
  typedef ::GtkWindowGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_window_group_add_window (GtkWindowGroup* window_group, GtkWindow* window);
// void gtk_window_group_add_window (::GtkWindowGroup* window_group, ::GtkWindow* window);
void base::WindowGroupBase::add_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowGroup* window_group, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_add_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindowGroup*) (gobj_()), (::GtkWindow*) (window_to_c));
}

// GtkWidget* gtk_window_group_get_current_device_grab (GtkWindowGroup* window_group, GdkDevice* device);
// ::GtkWidget* gtk_window_group_get_current_device_grab (::GtkWindowGroup* window_group, ::GdkDevice* device);
Gtk::Widget base::WindowGroupBase::get_current_device_grab (Gdk::Device device) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindowGroup* window_group, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_get_current_device_grab;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindowGroup*) (gobj_()), (::GdkDevice*) (device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_window_group_get_current_grab (GtkWindowGroup* window_group);
// ::GtkWidget* gtk_window_group_get_current_grab (::GtkWindowGroup* window_group);
Gtk::Widget base::WindowGroupBase::get_current_grab () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWindowGroup* window_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_get_current_grab;
  auto _temp_ret = call_wrap_v ((::GtkWindowGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_window_group_list_windows (GtkWindowGroup* window_group);
// ::GList* gtk_window_group_list_windows (::GtkWindowGroup* window_group);
std::vector<Gtk::Window> base::WindowGroupBase::list_windows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWindowGroup* window_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_list_windows;
  auto _temp_ret = call_wrap_v ((::GtkWindowGroup*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Window> (_temp_ret, gi::transfer_container);
}

// void gtk_window_group_remove_window (GtkWindowGroup* window_group, GtkWindow* window);
// void gtk_window_group_remove_window (::GtkWindowGroup* window_group, ::GtkWindow* window);
void base::WindowGroupBase::remove_window (Gtk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWindowGroup* window_group, ::GtkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_window_group_remove_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWindowGroup*) (gobj_()), (::GtkWindow*) (window_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra_def_impl.hpp>)
#include <gtk/windowgroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowgroup_extra_impl.hpp>)
#include <gtk/windowgroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkWindowGroupClass *methods = (::GtkWindowGroupClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
