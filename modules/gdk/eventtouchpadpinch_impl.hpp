// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCHPADPINCH_IMPL_HPP_
#define _GI_GDK_EVENTTOUCHPADPINCH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventTouchpadPinch* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventTouchpadPinch::type (const ::GdkEventTouchpadPinch* obj);
// ::GdkEventType EventTouchpadPinch::type (const ::GdkEventTouchpadPinch* obj);
Gdk::EventType base::EventTouchpadPinchBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventTouchpadPinch* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventTouchpadPinch::type (::GdkEventTouchpadPinch* obj, ::GdkEventType _value);
// void EventTouchpadPinch::type (::GdkEventTouchpadPinch* obj, ::GdkEventType _value);
void base::EventTouchpadPinchBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventTouchpadPinch* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventTouchpadPinch::window (const ::GdkEventTouchpadPinch* obj);
// ::GdkWindow* EventTouchpadPinch::window (const ::GdkEventTouchpadPinch* obj);
Gdk::Window base::EventTouchpadPinchBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventTouchpadPinch* obj) { return (gint8) obj->send_event; }
// gint8 EventTouchpadPinch::send_event (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::send_event (const ::GdkEventTouchpadPinch* obj);
gint8 base::EventTouchpadPinchBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventTouchpadPinch* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventTouchpadPinch::send_event (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::send_event (::GdkEventTouchpadPinch* obj, gint8 _value);
void base::EventTouchpadPinchBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gint8) (_value_to_c));
}

static gint8 _field_phase_get (const ::GdkEventTouchpadPinch* obj) { return (gint8) obj->phase; }
// gint8 EventTouchpadPinch::phase (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::phase (const ::GdkEventTouchpadPinch* obj);
gint8 base::EventTouchpadPinchBase::phase_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_phase_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_phase_set (::GdkEventTouchpadPinch* obj, gint8 _value) { obj->phase = (decltype(obj->phase)) _value; }
//  EventTouchpadPinch::phase (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::phase (::GdkEventTouchpadPinch* obj, gint8 _value);
void base::EventTouchpadPinchBase::phase_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_phase_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gint8) (_value_to_c));
}

static gint8 _field_n_fingers_get (const ::GdkEventTouchpadPinch* obj) { return (gint8) obj->n_fingers; }
// gint8 EventTouchpadPinch::n_fingers (const ::GdkEventTouchpadPinch* obj);
// gint8 EventTouchpadPinch::n_fingers (const ::GdkEventTouchpadPinch* obj);
gint8 base::EventTouchpadPinchBase::n_fingers_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_fingers_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_n_fingers_set (::GdkEventTouchpadPinch* obj, gint8 _value) { obj->n_fingers = (decltype(obj->n_fingers)) _value; }
//  EventTouchpadPinch::n_fingers (::GdkEventTouchpadPinch* obj, gint8 _value);
// void EventTouchpadPinch::n_fingers (::GdkEventTouchpadPinch* obj, gint8 _value);
void base::EventTouchpadPinchBase::n_fingers_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_fingers_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventTouchpadPinch* obj) { return (guint32) obj->time; }
// guint32 EventTouchpadPinch::time (const ::GdkEventTouchpadPinch* obj);
// guint32 EventTouchpadPinch::time (const ::GdkEventTouchpadPinch* obj);
guint32 base::EventTouchpadPinchBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventTouchpadPinch* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventTouchpadPinch::time (::GdkEventTouchpadPinch* obj, guint32 _value);
// void EventTouchpadPinch::time (::GdkEventTouchpadPinch* obj, guint32 _value);
void base::EventTouchpadPinchBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->x; }
// gdouble EventTouchpadPinch::x (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::x (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventTouchpadPinch::x (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::x (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->y; }
// gdouble EventTouchpadPinch::y (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::y (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventTouchpadPinch::y (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::y (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_dx_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->dx; }
// gdouble EventTouchpadPinch::dx (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::dx (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::dx_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_dx_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->dx = (decltype(obj->dx)) _value; }
//  EventTouchpadPinch::dx (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::dx (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::dx_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dx_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_dy_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->dy; }
// gdouble EventTouchpadPinch::dy (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::dy (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::dy_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_dy_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->dy = (decltype(obj->dy)) _value; }
//  EventTouchpadPinch::dy (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::dy (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::dy_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_dy_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_angle_delta_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->angle_delta; }
// gdouble EventTouchpadPinch::angle_delta (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::angle_delta (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::angle_delta_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_angle_delta_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_angle_delta_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->angle_delta = (decltype(obj->angle_delta)) _value; }
//  EventTouchpadPinch::angle_delta (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::angle_delta (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::angle_delta_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_angle_delta_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_scale_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->scale; }
// gdouble EventTouchpadPinch::scale (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::scale (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::scale_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scale_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_scale_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->scale = (decltype(obj->scale)) _value; }
//  EventTouchpadPinch::scale (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::scale (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::scale_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_scale_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_x_root_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->x_root; }
// gdouble EventTouchpadPinch::x_root (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::x_root (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventTouchpadPinch::x_root (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::x_root (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventTouchpadPinch* obj) { return (gdouble) obj->y_root; }
// gdouble EventTouchpadPinch::y_root (const ::GdkEventTouchpadPinch* obj);
// gdouble EventTouchpadPinch::y_root (const ::GdkEventTouchpadPinch* obj);
gdouble base::EventTouchpadPinchBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventTouchpadPinch* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventTouchpadPinch::y_root (::GdkEventTouchpadPinch* obj, gdouble _value);
// void EventTouchpadPinch::y_root (::GdkEventTouchpadPinch* obj, gdouble _value);
void base::EventTouchpadPinchBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventTouchpadPinch* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventTouchpadPinch::state (const ::GdkEventTouchpadPinch* obj);
// ::GdkModifierType EventTouchpadPinch::state (const ::GdkEventTouchpadPinch* obj);
Gdk::ModifierType base::EventTouchpadPinchBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventTouchpadPinch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouchpadPinch*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventTouchpadPinch::state (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value);
// void EventTouchpadPinch::state (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value);
void base::EventTouchpadPinchBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouchpadPinch* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouchpadPinch*) (gobj_()), (::GdkModifierType) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadpinch_extra_def_impl.hpp>)
#include <gdk/eventtouchpadpinch_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouchpadpinch_extra_impl.hpp>)
#include <gdk/eventtouchpadpinch_extra_impl.hpp>
#endif
#endif

#endif
