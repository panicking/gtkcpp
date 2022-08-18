// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCHPADSWIPE_IMPL_HPP_
#define _GI_GDK_EVENTTOUCHPADSWIPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventTouchpadSwipe* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventTouchpadSwipe::type (const ::GdkEventTouchpadSwipe* obj);
// ::GdkEventType EventTouchpadSwipe::type (const ::GdkEventTouchpadSwipe* obj);
Gdk::EventType base::EventTouchpadSwipeBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventTouchpadSwipe::type (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value);
// void EventTouchpadSwipe::type (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value);
void base::EventTouchpadSwipeBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventTouchpadSwipe* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventTouchpadSwipe::window (const ::GdkEventTouchpadSwipe* obj);
// ::GdkWindow* EventTouchpadSwipe::window (const ::GdkEventTouchpadSwipe* obj);
Gdk::Window base::EventTouchpadSwipeBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventTouchpadSwipe* obj) { return (gint8) obj->send_event; }
// gint8 EventTouchpadSwipe::send_event (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::send_event (const ::GdkEventTouchpadSwipe* obj);
gint8 base::EventTouchpadSwipeBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventTouchpadSwipe* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventTouchpadSwipe::send_event (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::send_event (::GdkEventTouchpadSwipe* obj, gint8 _value);
void base::EventTouchpadSwipeBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gint8) (_value_to_c));
}

static gint8 _field_phase_get (const ::GdkEventTouchpadSwipe* obj) { return (gint8) obj->phase; }
// gint8 EventTouchpadSwipe::phase (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::phase (const ::GdkEventTouchpadSwipe* obj);
gint8 base::EventTouchpadSwipeBase::phase_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_phase_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_phase_set (::GdkEventTouchpadSwipe* obj, gint8 _value) { obj->phase = (decltype(obj->phase)) _value; }
//  EventTouchpadSwipe::phase (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::phase (::GdkEventTouchpadSwipe* obj, gint8 _value);
void base::EventTouchpadSwipeBase::phase_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_phase_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gint8) (_value_to_c));
}

static gint8 _field_n_fingers_get (const ::GdkEventTouchpadSwipe* obj) { return (gint8) obj->n_fingers; }
// gint8 EventTouchpadSwipe::n_fingers (const ::GdkEventTouchpadSwipe* obj);
// gint8 EventTouchpadSwipe::n_fingers (const ::GdkEventTouchpadSwipe* obj);
gint8 base::EventTouchpadSwipeBase::n_fingers_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_fingers_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_n_fingers_set (::GdkEventTouchpadSwipe* obj, gint8 _value) { obj->n_fingers = (decltype(obj->n_fingers)) _value; }
//  EventTouchpadSwipe::n_fingers (::GdkEventTouchpadSwipe* obj, gint8 _value);
// void EventTouchpadSwipe::n_fingers (::GdkEventTouchpadSwipe* obj, gint8 _value);
void base::EventTouchpadSwipeBase::n_fingers_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_fingers_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventTouchpadSwipe* obj) { return (guint32) obj->time; }
// guint32 EventTouchpadSwipe::time (const ::GdkEventTouchpadSwipe* obj);
// guint32 EventTouchpadSwipe::time (const ::GdkEventTouchpadSwipe* obj);
guint32 base::EventTouchpadSwipeBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventTouchpadSwipe* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventTouchpadSwipe::time (::GdkEventTouchpadSwipe* obj, guint32 _value);
// void EventTouchpadSwipe::time (::GdkEventTouchpadSwipe* obj, guint32 _value);
void base::EventTouchpadSwipeBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->x; }
// gdouble EventTouchpadSwipe::x (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::x (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventTouchpadSwipe::x (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::x (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->y; }
// gdouble EventTouchpadSwipe::y (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::y (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventTouchpadSwipe::y (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::y (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_dx_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->dx; }
// gdouble EventTouchpadSwipe::dx (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::dx (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::dx_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_dx_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->dx = (decltype(obj->dx)) _value; }
//  EventTouchpadSwipe::dx (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::dx (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::dx_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_dy_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->dy; }
// gdouble EventTouchpadSwipe::dy (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::dy (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::dy_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_dy_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->dy = (decltype(obj->dy)) _value; }
//  EventTouchpadSwipe::dy (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::dy (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::dy_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_x_root_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->x_root; }
// gdouble EventTouchpadSwipe::x_root (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::x_root (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventTouchpadSwipe::x_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::x_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventTouchpadSwipe* obj) { return (gdouble) obj->y_root; }
// gdouble EventTouchpadSwipe::y_root (const ::GdkEventTouchpadSwipe* obj);
// gdouble EventTouchpadSwipe::y_root (const ::GdkEventTouchpadSwipe* obj);
gdouble base::EventTouchpadSwipeBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventTouchpadSwipe* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventTouchpadSwipe::y_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
// void EventTouchpadSwipe::y_root (::GdkEventTouchpadSwipe* obj, gdouble _value);
void base::EventTouchpadSwipeBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventTouchpadSwipe* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventTouchpadSwipe::state (const ::GdkEventTouchpadSwipe* obj);
// ::GdkModifierType EventTouchpadSwipe::state (const ::GdkEventTouchpadSwipe* obj);
Gdk::ModifierType base::EventTouchpadSwipeBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventTouchpadSwipe* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadSwipe*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventTouchpadSwipe::state (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value);
// void EventTouchpadSwipe::state (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value);
void base::EventTouchpadSwipeBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadSwipe* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouchpadSwipe*) (gobj_()), (::GdkModifierType) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadswipe_extra_def_impl.hpp>)
#include <gdk/eventtouchpadswipe_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadswipe_extra_impl.hpp>)
#include <gdk/eventtouchpadswipe_extra_impl.hpp>
#endif
#endif

#endif
