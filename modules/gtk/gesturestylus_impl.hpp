// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESTYLUS_IMPL_HPP_
#define _GI_GTK_GESTURESTYLUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_stylus_new (GtkWidget* widget);
// ::GtkGestureStylus* gtk_gesture_stylus_new (::GtkWidget* widget);
Gtk::GestureStylus base::GestureStylusBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkGestureStylus* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_stylus_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_gesture_stylus_get_axes (GtkGestureStylus* gesture);
// gboolean gtk_gesture_stylus_get_axes (::GtkGestureStylus* gesture);
// SKIP; inconsistent array info, inconsistent array info

// gboolean gtk_gesture_stylus_get_axis (GtkGestureStylus* gesture, GdkAxisUse axis, gdouble* value);
// gboolean gtk_gesture_stylus_get_axis (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
bool base::GestureStylusBase::get_axis (Gdk::AxisUse axis, gdouble & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_stylus_get_axis;
  gdouble value_o {};
  auto axis_to_c = gi::unwrap (axis);
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()), (::GdkAxisUse) (axis_to_c), (gdouble*) (&value_o));
  value = value_o;
  return _temp_ret;
}
std::tuple<bool, gdouble> base::GestureStylusBase::get_axis (Gdk::AxisUse axis) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureStylus* gesture, ::GdkAxisUse axis, gdouble* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_stylus_get_axis;
  gdouble value_o {};
  auto axis_to_c = gi::unwrap (axis);
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()), (::GdkAxisUse) (axis_to_c), (gdouble*) (&value_o));
  return std::make_tuple (_temp_ret, value_o);
}

// GdkDeviceTool* gtk_gesture_stylus_get_device_tool (GtkGestureStylus* gesture);
// ::GdkDeviceTool* gtk_gesture_stylus_get_device_tool (::GtkGestureStylus* gesture);
Gdk::DeviceTool base::GestureStylusBase::get_device_tool () noexcept
{
  typedef ::GdkDeviceTool* (*call_wrap_t) (::GtkGestureStylus* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_stylus_get_device_tool;
  auto _temp_ret = call_wrap_v ((::GtkGestureStylus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}






} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_def_impl.hpp>)
#include <gtk/gesturestylus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturestylus_extra_impl.hpp>)
#include <gtk/gesturestylus_extra_impl.hpp>
#endif
#endif

#endif
