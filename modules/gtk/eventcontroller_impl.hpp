// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLER_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkPropagationPhase gtk_event_controller_get_propagation_phase (GtkEventController* controller);
// ::GtkPropagationPhase gtk_event_controller_get_propagation_phase (::GtkEventController* controller);
Gtk::PropagationPhase base::EventControllerBase::get_propagation_phase () noexcept
{
  typedef ::GtkPropagationPhase (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_get_propagation_phase;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkWidget* gtk_event_controller_get_widget (GtkEventController* controller);
// ::GtkWidget* gtk_event_controller_get_widget (::GtkEventController* controller);
Gtk::Widget base::EventControllerBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkEventController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_event_controller_handle_event (GtkEventController* controller, const GdkEvent* event);
// gboolean gtk_event_controller_handle_event (::GtkEventController* controller, const  event);
// SKIP; event type  not supported

// void gtk_event_controller_reset (GtkEventController* controller);
// void gtk_event_controller_reset (::GtkEventController* controller);
void base::EventControllerBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_reset;
  call_wrap_v ((::GtkEventController*) (gobj_()));
}

// void gtk_event_controller_set_propagation_phase (GtkEventController* controller, GtkPropagationPhase phase);
// void gtk_event_controller_set_propagation_phase (::GtkEventController* controller, ::GtkPropagationPhase phase);
void base::EventControllerBase::set_propagation_phase (Gtk::PropagationPhase phase) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventController* controller, ::GtkPropagationPhase phase);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_set_propagation_phase;
  auto phase_to_c = gi::unwrap (phase);
  call_wrap_v ((::GtkEventController*) (gobj_()), (::GtkPropagationPhase) (phase_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_def_impl.hpp>)
#include <gtk/eventcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontroller_extra_impl.hpp>)
#include <gtk/eventcontroller_extra_impl.hpp>
#endif
#endif

#endif
