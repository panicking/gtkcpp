// AUTO-GENERATED

#ifndef _GI_GDK_EVENTMOTION_IMPL_HPP_
#define _GI_GDK_EVENTMOTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventMotion* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventMotion::type (const ::GdkEventMotion* obj);
// ::GdkEventType EventMotion::type (const ::GdkEventMotion* obj);
Gdk::EventType base::EventMotionBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventMotion* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventMotion::type (::GdkEventMotion* obj, ::GdkEventType _value);
// void EventMotion::type (::GdkEventMotion* obj, ::GdkEventType _value);
void base::EventMotionBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventMotion* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventMotion::window (const ::GdkEventMotion* obj);
// ::GdkWindow* EventMotion::window (const ::GdkEventMotion* obj);
Gdk::Window base::EventMotionBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventMotion* obj) { return (gint8) obj->send_event; }
// gint8 EventMotion::send_event (const ::GdkEventMotion* obj);
// gint8 EventMotion::send_event (const ::GdkEventMotion* obj);
gint8 base::EventMotionBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventMotion* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventMotion::send_event (::GdkEventMotion* obj, gint8 _value);
// void EventMotion::send_event (::GdkEventMotion* obj, gint8 _value);
void base::EventMotionBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventMotion* obj) { return (guint32) obj->time; }
// guint32 EventMotion::time (const ::GdkEventMotion* obj);
// guint32 EventMotion::time (const ::GdkEventMotion* obj);
guint32 base::EventMotionBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventMotion* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventMotion::time (::GdkEventMotion* obj, guint32 _value);
// void EventMotion::time (::GdkEventMotion* obj, guint32 _value);
void base::EventMotionBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventMotion* obj) { return (gdouble) obj->x; }
// gdouble EventMotion::x (const ::GdkEventMotion* obj);
// gdouble EventMotion::x (const ::GdkEventMotion* obj);
gdouble base::EventMotionBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventMotion* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventMotion::x (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::x (::GdkEventMotion* obj, gdouble _value);
void base::EventMotionBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventMotion* obj) { return (gdouble) obj->y; }
// gdouble EventMotion::y (const ::GdkEventMotion* obj);
// gdouble EventMotion::y (const ::GdkEventMotion* obj);
gdouble base::EventMotionBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventMotion* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventMotion::y (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::y (::GdkEventMotion* obj, gdouble _value);
void base::EventMotionBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventMotion* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventMotion::state (const ::GdkEventMotion* obj);
// ::GdkModifierType EventMotion::state (const ::GdkEventMotion* obj);
Gdk::ModifierType base::EventMotionBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventMotion* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventMotion::state (::GdkEventMotion* obj, ::GdkModifierType _value);
// void EventMotion::state (::GdkEventMotion* obj, ::GdkModifierType _value);
void base::EventMotionBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static gint16 _field_is_hint_get (const ::GdkEventMotion* obj) { return (gint16) obj->is_hint; }
// gint16 EventMotion::is_hint (const ::GdkEventMotion* obj);
// gint16 EventMotion::is_hint (const ::GdkEventMotion* obj);
gint16 base::EventMotionBase::is_hint_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_hint_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_is_hint_set (::GdkEventMotion* obj, gint16 _value) { obj->is_hint = (decltype(obj->is_hint)) _value; }
//  EventMotion::is_hint (::GdkEventMotion* obj, gint16 _value);
// void EventMotion::is_hint (::GdkEventMotion* obj, gint16 _value);
void base::EventMotionBase::is_hint_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_hint_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gint16) (_value_to_c));
}

static ::GdkDevice* _field_device_get (const ::GdkEventMotion* obj) { return (::GdkDevice*) obj->device; }
// ::GdkDevice* EventMotion::device (const ::GdkEventMotion* obj);
// ::GdkDevice* EventMotion::device (const ::GdkEventMotion* obj);
Gdk::Device base::EventMotionBase::device_ () const noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_device_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gdouble _field_x_root_get (const ::GdkEventMotion* obj) { return (gdouble) obj->x_root; }
// gdouble EventMotion::x_root (const ::GdkEventMotion* obj);
// gdouble EventMotion::x_root (const ::GdkEventMotion* obj);
gdouble base::EventMotionBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventMotion* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventMotion::x_root (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::x_root (::GdkEventMotion* obj, gdouble _value);
void base::EventMotionBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventMotion* obj) { return (gdouble) obj->y_root; }
// gdouble EventMotion::y_root (const ::GdkEventMotion* obj);
// gdouble EventMotion::y_root (const ::GdkEventMotion* obj);
gdouble base::EventMotionBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventMotion* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventMotion*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventMotion* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventMotion::y_root (::GdkEventMotion* obj, gdouble _value);
// void EventMotion::y_root (::GdkEventMotion* obj, gdouble _value);
void base::EventMotionBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventMotion* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventMotion*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventmotion_extra_def_impl.hpp>)
#include <gdk/eventmotion_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventmotion_extra_impl.hpp>)
#include <gdk/eventmotion_extra_impl.hpp>
#endif
#endif

#endif
