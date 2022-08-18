// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESWIPE_IMPL_HPP_
#define _GI_GTK_GESTURESWIPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_swipe_new (GtkWidget* widget);
// ::GtkGestureSwipe* gtk_gesture_swipe_new (::GtkWidget* widget);
Gtk::GestureSwipe base::GestureSwipeBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkGestureSwipe* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_swipe_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_gesture_swipe_get_velocity (GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
// gboolean gtk_gesture_swipe_get_velocity (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
bool base::GestureSwipeBase::get_velocity (gdouble & velocity_x, gdouble & velocity_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_swipe_get_velocity;
  gdouble velocity_y_o {};
  gdouble velocity_x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureSwipe*) (gobj_()), (gdouble*) (&velocity_x_o), (gdouble*) (&velocity_y_o));
  velocity_y = velocity_y_o;
  velocity_x = velocity_x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureSwipeBase::get_velocity () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSwipe* gesture, gdouble* velocity_x, gdouble* velocity_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_swipe_get_velocity;
  gdouble velocity_y_o {};
  gdouble velocity_x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureSwipe*) (gobj_()), (gdouble*) (&velocity_x_o), (gdouble*) (&velocity_y_o));
  return std::make_tuple (_temp_ret, velocity_x_o, velocity_y_o);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra_def_impl.hpp>)
#include <gtk/gestureswipe_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gestureswipe_extra_impl.hpp>)
#include <gtk/gestureswipe_extra_impl.hpp>
#endif
#endif

#endif
