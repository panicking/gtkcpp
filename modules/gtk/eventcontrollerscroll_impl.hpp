// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERSCROLL_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERSCROLL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* gtk_event_controller_scroll_new (GtkWidget* widget, GtkEventControllerScrollFlags flags);
// ::GtkEventControllerScroll* gtk_event_controller_scroll_new (::GtkWidget* widget, ::GtkEventControllerScrollFlags flags);
Gtk::EventControllerScroll base::EventControllerScrollBase::new_ (Gtk::Widget widget, Gtk::EventControllerScrollFlags flags) noexcept
{
  typedef ::GtkEventControllerScroll* (*call_wrap_t) (::GtkWidget* widget, ::GtkEventControllerScrollFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_scroll_new;
  auto flags_to_c = gi::unwrap (flags);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (::GtkEventControllerScrollFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkEventControllerScrollFlags gtk_event_controller_scroll_get_flags (GtkEventControllerScroll* controller);
// ::GtkEventControllerScrollFlags gtk_event_controller_scroll_get_flags (::GtkEventControllerScroll* controller);
Gtk::EventControllerScrollFlags base::EventControllerScrollBase::get_flags () noexcept
{
  typedef ::GtkEventControllerScrollFlags (*call_wrap_t) (::GtkEventControllerScroll* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_scroll_get_flags;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerScroll*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_event_controller_scroll_set_flags (GtkEventControllerScroll* controller, GtkEventControllerScrollFlags flags);
// void gtk_event_controller_scroll_set_flags (::GtkEventControllerScroll* controller, ::GtkEventControllerScrollFlags flags);
void base::EventControllerScrollBase::set_flags (Gtk::EventControllerScrollFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventControllerScroll* controller, ::GtkEventControllerScrollFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_scroll_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkEventControllerScroll*) (gobj_()), (::GtkEventControllerScrollFlags) (flags_to_c));
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerscroll_extra_def_impl.hpp>)
#include <gtk/eventcontrollerscroll_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerscroll_extra_impl.hpp>)
#include <gtk/eventcontrollerscroll_extra_impl.hpp>
#endif
#endif

#endif
