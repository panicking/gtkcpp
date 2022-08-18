// AUTO-GENERATED

#ifndef _GI_GTK_GESTUREMULTIPRESS_IMPL_HPP_
#define _GI_GTK_GESTUREMULTIPRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkGesture* gtk_gesture_multi_press_new (GtkWidget* widget);
// ::GtkGestureMultiPress* gtk_gesture_multi_press_new (::GtkWidget* widget);
Gtk::GestureMultiPress base::GestureMultiPressBase::new_ (Gtk::Widget widget) noexcept
{
  typedef ::GtkGestureMultiPress* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_multi_press_new;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (widget_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_gesture_multi_press_get_area (GtkGestureMultiPress* gesture, GdkRectangle* rect);
// gboolean gtk_gesture_multi_press_get_area (::GtkGestureMultiPress* gesture, ::GdkRectangle* rect);
bool base::GestureMultiPressBase::get_area (Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureMultiPress* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_multi_press_get_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkGestureMultiPress*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::GestureMultiPressBase::get_area () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureMultiPress* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_multi_press_get_area;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkGestureMultiPress*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}

// void gtk_gesture_multi_press_set_area (GtkGestureMultiPress* gesture, const GdkRectangle* rect);
// void gtk_gesture_multi_press_set_area (::GtkGestureMultiPress* gesture, const ::GdkRectangle* rect);
void base::GestureMultiPressBase::set_area (const Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureMultiPress* gesture, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_multi_press_set_area;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGestureMultiPress*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}
void base::GestureMultiPressBase::set_area () noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureMultiPress* gesture, const ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_multi_press_set_area;
  auto rect_to_c = nullptr;
  call_wrap_v ((::GtkGestureMultiPress*) (gobj_()), (const ::GdkRectangle*) (rect_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturemultipress_extra_def_impl.hpp>)
#include <gtk/gesturemultipress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturemultipress_extra_impl.hpp>)
#include <gtk/gesturemultipress_extra_impl.hpp>
#endif
#endif

#endif
