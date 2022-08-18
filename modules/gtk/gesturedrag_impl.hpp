// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREDRAG_IMPL_HPP_
#define _GI_GTK_GESTUREDRAG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_drag_new (GtkWidget* widget);
// ::GtkGestureDrag* gtk_gesture_drag_new (::GtkWidget* widget);
Gtk::GestureDrag base::GestureDragBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkGestureDrag* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_gesture_drag_get_offset (GtkGestureDrag* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_drag_get_offset (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
bool base::GestureDragBase::get_offset (gdouble & x, gdouble & y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_get_offset;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureDragBase::get_offset () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_get_offset;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// gboolean gtk_gesture_drag_get_start_point (GtkGestureDrag* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_drag_get_start_point (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
bool base::GestureDragBase::get_start_point (gdouble & x, gdouble & y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_get_start_point;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureDragBase::get_start_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureDrag* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_drag_get_start_point;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGestureDrag*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra_def_impl.hpp>)
#include <gtk/gesturedrag_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturedrag_extra_impl.hpp>)
#include <gtk/gesturedrag_extra_impl.hpp>
#endif
#endif

#endif
