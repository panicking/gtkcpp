// AUTO-GENERATED

#ifndef _GI_GTK_GESTURE_IMPL_HPP_
#define _GI_GTK_GESTURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_gesture_get_bounding_box (GtkGesture* gesture, GdkRectangle* rect);
// gboolean gtk_gesture_get_bounding_box (::GtkGesture* gesture, ::GdkRectangle* rect);
bool base::GestureBase::get_bounding_box (Gdk::Rectangle & rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_bounding_box;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::GestureBase::get_bounding_box () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_bounding_box;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_gesture_get_bounding_box_center (GtkGesture* gesture, gdouble* x, gdouble* y);
// gboolean gtk_gesture_get_bounding_box_center (::GtkGesture* gesture, gdouble* x, gdouble* y);
bool base::GestureBase::get_bounding_box_center (gdouble & x, gdouble & y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_bounding_box_center;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  y = y_o;
  x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_bounding_box_center () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_bounding_box_center;
  gdouble y_o {};
  gdouble x_o {};
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// GdkDevice* gtk_gesture_get_device (GtkGesture* gesture);
// ::GdkDevice* gtk_gesture_get_device (::GtkGesture* gesture);
Gdk::Device base::GestureBase::get_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_device;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gtk_gesture_get_group (GtkGesture* gesture);
// ::GList* gtk_gesture_get_group (::GtkGesture* gesture);
std::vector<Gtk::Gesture> base::GestureBase::get_group () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_group;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Gesture> (_temp_ret, gi::transfer_container);
}

// const GdkEvent* gtk_gesture_get_last_event (GtkGesture* gesture, GdkEventSequence* sequence);
// const  gtk_gesture_get_last_event (::GtkGesture* gesture, ::GdkEventSequence* sequence);
// SKIP;  type  not supported

// GdkEventSequence* gtk_gesture_get_last_updated_sequence (GtkGesture* gesture);
// ::GdkEventSequence* gtk_gesture_get_last_updated_sequence (::GtkGesture* gesture);
Gdk::EventSequence base::GestureBase::get_last_updated_sequence () noexcept
{
  typedef ::GdkEventSequence* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_last_updated_sequence;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_gesture_get_point (GtkGesture* gesture, GdkEventSequence* sequence, gdouble* x, gdouble* y);
// gboolean gtk_gesture_get_point (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
bool base::GestureBase::get_point (Gdk::EventSequence sequence, gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
bool base::GestureBase::get_point (gdouble * x, gdouble * y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_point (Gdk::EventSequence sequence) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}
std::tuple<bool, gdouble, gdouble> base::GestureBase::get_point () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_point;
  gdouble y_o {};
  gdouble x_o {};
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// GtkEventSequenceState gtk_gesture_get_sequence_state (GtkGesture* gesture, GdkEventSequence* sequence);
// ::GtkEventSequenceState gtk_gesture_get_sequence_state (::GtkGesture* gesture, ::GdkEventSequence* sequence);
Gtk::EventSequenceState base::GestureBase::get_sequence_state (Gdk::EventSequence sequence) noexcept
{
  typedef ::GtkEventSequenceState (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_sequence_state;
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return gi::wrap (_temp_ret);
}

// GList* gtk_gesture_get_sequences (GtkGesture* gesture);
// ::GList* gtk_gesture_get_sequences (::GtkGesture* gesture);
std::vector<Gdk::EventSequence> base::GestureBase::get_sequences () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_sequences;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::detail::wrap_list<Gdk::EventSequence> (_temp_ret, gi::transfer_container);
}

// GdkWindow* gtk_gesture_get_window (GtkGesture* gesture);
// ::GdkWindow* gtk_gesture_get_window (::GtkGesture* gesture);
Gdk::Window base::GestureBase::get_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_get_window;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_gesture_group (GtkGesture* group_gesture, GtkGesture* gesture);
// void gtk_gesture_group (::GtkGesture* group_gesture, ::GtkGesture* gesture);
void base::GestureBase::group (Gtk::Gesture gesture) noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* group_gesture, ::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_group;
  auto gesture_to_c = gi::unwrap (gesture, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkGesture*) (gesture_to_c));
}

// gboolean gtk_gesture_handles_sequence (GtkGesture* gesture, GdkEventSequence* sequence);
// gboolean gtk_gesture_handles_sequence (::GtkGesture* gesture, ::GdkEventSequence* sequence);
bool base::GestureBase::handles_sequence (Gdk::EventSequence sequence) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_handles_sequence;
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return _temp_ret;
}
bool base::GestureBase::handles_sequence () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_handles_sequence;
  auto sequence_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_is_active (GtkGesture* gesture);
// gboolean gtk_gesture_is_active (::GtkGesture* gesture);
bool base::GestureBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_is_active;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gesture_is_grouped_with (GtkGesture* gesture, GtkGesture* other);
// gboolean gtk_gesture_is_grouped_with (::GtkGesture* gesture, ::GtkGesture* other);
bool base::GestureBase::is_grouped_with (Gtk::Gesture other) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GtkGesture* other);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_is_grouped_with;
  auto other_to_c = gi::unwrap (other, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkGesture*) (other_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_is_recognized (GtkGesture* gesture);
// gboolean gtk_gesture_is_recognized (::GtkGesture* gesture);
bool base::GestureBase::is_recognized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_is_recognized;
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gesture_set_sequence_state (GtkGesture* gesture, GdkEventSequence* sequence, GtkEventSequenceState state);
// gboolean gtk_gesture_set_sequence_state (::GtkGesture* gesture, ::GdkEventSequence* sequence, ::GtkEventSequenceState state);
bool base::GestureBase::set_sequence_state (Gdk::EventSequence sequence, Gtk::EventSequenceState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GdkEventSequence* sequence, ::GtkEventSequenceState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_set_sequence_state;
  auto state_to_c = gi::unwrap (state);
  auto sequence_to_c = gi::unwrap (sequence, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkEventSequence*) (sequence_to_c), (::GtkEventSequenceState) (state_to_c));
  return _temp_ret;
}

// gboolean gtk_gesture_set_state (GtkGesture* gesture, GtkEventSequenceState state);
// gboolean gtk_gesture_set_state (::GtkGesture* gesture, ::GtkEventSequenceState state);
bool base::GestureBase::set_state (Gtk::EventSequenceState state) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGesture* gesture, ::GtkEventSequenceState state);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_set_state;
  auto state_to_c = gi::unwrap (state);
  auto _temp_ret = call_wrap_v ((::GtkGesture*) (gobj_()), (::GtkEventSequenceState) (state_to_c));
  return _temp_ret;
}

// void gtk_gesture_set_window (GtkGesture* gesture, GdkWindow* window);
// void gtk_gesture_set_window (::GtkGesture* gesture, ::GdkWindow* window);
void base::GestureBase::set_window (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* gesture, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_set_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkWindow*) (window_to_c));
}
void base::GestureBase::set_window () noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* gesture, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_set_window;
  auto window_to_c = nullptr;
  call_wrap_v ((::GtkGesture*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// void gtk_gesture_ungroup (GtkGesture* gesture);
// void gtk_gesture_ungroup (::GtkGesture* gesture);
void base::GestureBase::ungroup () noexcept
{
  typedef void (*call_wrap_t) (::GtkGesture* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_ungroup;
  call_wrap_v ((::GtkGesture*) (gobj_()));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_def_impl.hpp>)
#include <gtk/gesture_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesture_extra_impl.hpp>)
#include <gtk/gesture_extra_impl.hpp>
#endif
#endif

#endif
