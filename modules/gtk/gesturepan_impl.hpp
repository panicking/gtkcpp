// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREPAN_IMPL_HPP_
#define _GI_GTK_GESTUREPAN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_pan_new (GtkWidget* widget, GtkOrientation orientation);
// ::GtkGesturePan* gtk_gesture_pan_new (::GtkWidget* widget, ::GtkOrientation orientation);
Gtk::GesturePan base::GesturePanBase::new_ (Gtk::Widget widget, Gtk::Orientation orientation) noexcept
{
  typedef ::GtkGesturePan* (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_pan_new;
  auto orientation_to_c = gi::unwrap (orientation);
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c), (::GtkOrientation) (orientation_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkOrientation gtk_gesture_pan_get_orientation (GtkGesturePan* gesture);
// ::GtkOrientation gtk_gesture_pan_get_orientation (::GtkGesturePan* gesture);
Gtk::Orientation base::GesturePanBase::get_orientation () noexcept
{
  typedef ::GtkOrientation (*call_wrap_t) (::GtkGesturePan* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_pan_get_orientation;
  auto _temp_ret = call_wrap_v ((::GtkGesturePan*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_gesture_pan_set_orientation (GtkGesturePan* gesture, GtkOrientation orientation);
// void gtk_gesture_pan_set_orientation (::GtkGesturePan* gesture, ::GtkOrientation orientation);
void base::GesturePanBase::set_orientation (Gtk::Orientation orientation) noexcept
{
  typedef void (*call_wrap_t) (::GtkGesturePan* gesture, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_pan_set_orientation;
  auto orientation_to_c = gi::unwrap (orientation);
  call_wrap_v ((::GtkGesturePan*) (gobj_()), (::GtkOrientation) (orientation_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturepan_extra_def_impl.hpp>)
#include <gtk/gesturepan_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturepan_extra_impl.hpp>)
#include <gtk/gesturepan_extra_impl.hpp>
#endif
#endif

#endif
