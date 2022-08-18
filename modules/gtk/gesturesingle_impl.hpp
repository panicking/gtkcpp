// AUTO-GENERATED

#ifndef _GI_GTK_GESTURESINGLE_IMPL_HPP_
#define _GI_GTK_GESTURESINGLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// guint gtk_gesture_single_get_button (GtkGestureSingle* gesture);
// guint gtk_gesture_single_get_button (::GtkGestureSingle* gesture);
guint base::GestureSingleBase::get_button () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGestureSingle* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_get_button;
  auto _temp_ret = call_wrap_v ((::GtkGestureSingle*) (gobj_()));
  return _temp_ret;
}

// guint gtk_gesture_single_get_current_button (GtkGestureSingle* gesture);
// guint gtk_gesture_single_get_current_button (::GtkGestureSingle* gesture);
guint base::GestureSingleBase::get_current_button () noexcept
{
  typedef guint (*call_wrap_t) (::GtkGestureSingle* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_get_current_button;
  auto _temp_ret = call_wrap_v ((::GtkGestureSingle*) (gobj_()));
  return _temp_ret;
}

// GdkEventSequence* gtk_gesture_single_get_current_sequence (GtkGestureSingle* gesture);
// ::GdkEventSequence* gtk_gesture_single_get_current_sequence (::GtkGestureSingle* gesture);
Gdk::EventSequence base::GestureSingleBase::get_current_sequence () noexcept
{
  typedef ::GdkEventSequence* (*call_wrap_t) (::GtkGestureSingle* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_get_current_sequence;
  auto _temp_ret = call_wrap_v ((::GtkGestureSingle*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_gesture_single_get_exclusive (GtkGestureSingle* gesture);
// gboolean gtk_gesture_single_get_exclusive (::GtkGestureSingle* gesture);
bool base::GestureSingleBase::get_exclusive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSingle* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_get_exclusive;
  auto _temp_ret = call_wrap_v ((::GtkGestureSingle*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_gesture_single_get_touch_only (GtkGestureSingle* gesture);
// gboolean gtk_gesture_single_get_touch_only (::GtkGestureSingle* gesture);
bool base::GestureSingleBase::get_touch_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkGestureSingle* gesture);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_get_touch_only;
  auto _temp_ret = call_wrap_v ((::GtkGestureSingle*) (gobj_()));
  return _temp_ret;
}

// void gtk_gesture_single_set_button (GtkGestureSingle* gesture, guint button);
// void gtk_gesture_single_set_button (::GtkGestureSingle* gesture, guint button);
void base::GestureSingleBase::set_button (guint button) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureSingle* gesture, guint button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_set_button;
  auto button_to_c = button;
  call_wrap_v ((::GtkGestureSingle*) (gobj_()), (guint) (button_to_c));
}

// void gtk_gesture_single_set_exclusive (GtkGestureSingle* gesture, gboolean exclusive);
// void gtk_gesture_single_set_exclusive (::GtkGestureSingle* gesture, gboolean exclusive);
void base::GestureSingleBase::set_exclusive (gboolean exclusive) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureSingle* gesture, gboolean exclusive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_set_exclusive;
  auto exclusive_to_c = exclusive;
  call_wrap_v ((::GtkGestureSingle*) (gobj_()), (gboolean) (exclusive_to_c));
}

// void gtk_gesture_single_set_touch_only (GtkGestureSingle* gesture, gboolean touch_only);
// void gtk_gesture_single_set_touch_only (::GtkGestureSingle* gesture, gboolean touch_only);
void base::GestureSingleBase::set_touch_only (gboolean touch_only) noexcept
{
  typedef void (*call_wrap_t) (::GtkGestureSingle* gesture, gboolean touch_only);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_gesture_single_set_touch_only;
  auto touch_only_to_c = touch_only;
  call_wrap_v ((::GtkGestureSingle*) (gobj_()), (gboolean) (touch_only_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/gesturesingle_extra_def_impl.hpp>)
#include <gtk/gesturesingle_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/gesturesingle_extra_impl.hpp>)
#include <gtk/gesturesingle_extra_impl.hpp>
#endif
#endif

#endif
