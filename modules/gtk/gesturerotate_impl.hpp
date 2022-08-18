// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREROTATE_IMPL_HPP_
#define _GI_GTK_GESTUREROTATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_rotate_new (GtkWidget* widget);
// ::GtkGestureRotate* gtk_gesture_rotate_new (::GtkWidget* widget);
Gtk::GestureRotate base::GestureRotateBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkGestureRotate* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_rotate_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble gtk_gesture_rotate_get_angle_delta (GtkGestureRotate* gesture);
// gdouble gtk_gesture_rotate_get_angle_delta (::GtkGestureRotate* gesture);
gdouble base::GestureRotateBase::get_angle_delta () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkGestureRotate* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_rotate_get_angle_delta;
  auto _temp_ret = call_wrap_v ((::GtkGestureRotate*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturerotate_extra_def_impl.hpp>)
#include <gtk/gesturerotate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturerotate_extra_impl.hpp>)
#include <gtk/gesturerotate_extra_impl.hpp>
#endif
#endif

#endif
