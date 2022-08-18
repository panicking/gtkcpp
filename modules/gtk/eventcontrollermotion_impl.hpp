// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERMOTION_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERMOTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* gtk_event_controller_motion_new (GtkWidget* widget);
// ::GtkEventControllerMotion* gtk_event_controller_motion_new (::GtkWidget* widget);
Gtk::EventControllerMotion base::EventControllerMotionBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkEventControllerMotion* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_motion_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra_def_impl.hpp>)
#include <gtk/eventcontrollermotion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollermotion_extra_impl.hpp>)
#include <gtk/eventcontrollermotion_extra_impl.hpp>
#endif
#endif

#endif
