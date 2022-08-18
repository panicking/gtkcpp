// AUTO-GENERATED

#ifndef _GI_GTK_PADCONTROLLER_IMPL_HPP_
#define _GI_GTK_PADCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPadController* gtk_pad_controller_new (GtkWindow* window, GActionGroup* group, GdkDevice* pad);
// ::GtkPadController* gtk_pad_controller_new (::GtkWindow* window, ::GActionGroup* group, ::GdkDevice* pad);
Gtk::PadController base::PadControllerBase::new_ (Gtk::Window window, Gio::ActionGroup group, Gdk::Device pad) noexcept
{
  typedef ::GtkPadController* (*call_wrap_t) (::GtkWindow* window, ::GActionGroup* group, ::GdkDevice* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_pad_controller_new;
  auto pad_to_c = gi::unwrap (pad, gi::transfer_none, gi::direction_in);
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (window_to_c), (::GActionGroup*) (group_to_c), (::GdkDevice*) (pad_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::PadController base::PadControllerBase::new_ (Gtk::Window window, Gio::ActionGroup group) noexcept
{
  typedef ::GtkPadController* (*call_wrap_t) (::GtkWindow* window, ::GActionGroup* group, ::GdkDevice* pad);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_pad_controller_new;
  auto pad_to_c = nullptr;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (window_to_c), (::GActionGroup*) (group_to_c), (::GdkDevice*) (pad_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_pad_controller_set_action (GtkPadController* controller, GtkPadActionType type, gint index, gint mode, const gchar* label, const gchar* action_name);
// void gtk_pad_controller_set_action (::GtkPadController* controller, ::GtkPadActionType type, gint index, gint mode, const char* label, const char* action_name);
void base::PadControllerBase::set_action (Gtk::PadActionType type, gint index, gint mode, const std::string & label, const std::string & action_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPadController* controller, ::GtkPadActionType type, gint index, gint mode, const char* label, const char* action_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_pad_controller_set_action;
  auto action_name_to_c = gi::unwrap (action_name, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto mode_to_c = mode;
  auto index_to_c = index;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkPadController*) (gobj_()), (::GtkPadActionType) (type_to_c), (gint) (index_to_c), (gint) (mode_to_c), (const char*) (label_to_c), (const char*) (action_name_to_c));
}

// void gtk_pad_controller_set_action_entries (GtkPadController* controller, const GtkPadActionEntry* entries, gint n_entries);
// void gtk_pad_controller_set_action_entries (::GtkPadController* controller, const ::GtkPadActionEntry** entries, gint n_entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2)


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra_def_impl.hpp>)
#include <gtk/padcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/padcontroller_extra_impl.hpp>)
#include <gtk/padcontroller_extra_impl.hpp>
#endif
#endif

#endif
