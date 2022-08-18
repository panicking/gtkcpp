// AUTO-GENERATED

#ifndef _GI_GTK_EVENTCONTROLLERKEY_IMPL_HPP_
#define _GI_GTK_EVENTCONTROLLERKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkEventController* gtk_event_controller_key_new (GtkWidget* widget);
// ::GtkEventControllerKey* gtk_event_controller_key_new (::GtkWidget* widget);
Gtk::EventControllerKey base::EventControllerKeyBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkEventControllerKey* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_event_controller_key_forward (GtkEventControllerKey* controller, GtkWidget* widget);
// gboolean gtk_event_controller_key_forward (::GtkEventControllerKey* controller, ::GtkWidget* widget);
bool base::EventControllerKeyBase::forward (Gtk::Widget widget) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkEventControllerKey* controller, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_forward;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()), (::GtkWidget*) (widget_to_c));
  return _temp_ret;
}

// guint gtk_event_controller_key_get_group (GtkEventControllerKey* controller);
// guint gtk_event_controller_key_get_group (::GtkEventControllerKey* controller);
guint base::EventControllerKeyBase::get_group () noexcept
{
  typedef guint (*call_wrap_t) (::GtkEventControllerKey* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_get_group;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()));
  return _temp_ret;
}

// GtkIMContext* gtk_event_controller_key_get_im_context (GtkEventControllerKey* controller);
// ::GtkIMContext* gtk_event_controller_key_get_im_context (::GtkEventControllerKey* controller);
Gtk::IMContext base::EventControllerKeyBase::get_im_context () noexcept
{
  typedef ::GtkIMContext* (*call_wrap_t) (::GtkEventControllerKey* controller);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_get_im_context;
  auto _temp_ret = call_wrap_v ((::GtkEventControllerKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_event_controller_key_set_im_context (GtkEventControllerKey* controller, GtkIMContext* im_context);
// void gtk_event_controller_key_set_im_context (::GtkEventControllerKey* controller, ::GtkIMContext* im_context);
void base::EventControllerKeyBase::set_im_context (Gtk::IMContext im_context) noexcept
{
  typedef void (*call_wrap_t) (::GtkEventControllerKey* controller, ::GtkIMContext* im_context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_event_controller_key_set_im_context;
  auto im_context_to_c = gi::unwrap (im_context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkEventControllerKey*) (gobj_()), (::GtkIMContext*) (im_context_to_c));
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra_def_impl.hpp>)
#include <gtk/eventcontrollerkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/eventcontrollerkey_extra_impl.hpp>)
#include <gtk/eventcontrollerkey_extra_impl.hpp>
#endif
#endif

#endif
