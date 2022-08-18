// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSCROLL_IMPL_HPP_
#define _GI_GDK_EVENTSCROLL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventScroll* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventScroll::type (const ::GdkEventScroll* obj);
// ::GdkEventType EventScroll::type (const ::GdkEventScroll* obj);
Gdk::EventType base::EventScrollBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventScroll* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventScroll::type (::GdkEventScroll* obj, ::GdkEventType _value);
// void EventScroll::type (::GdkEventScroll* obj, ::GdkEventType _value);
void base::EventScrollBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventScroll* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventScroll::window (const ::GdkEventScroll* obj);
// ::GdkWindow* EventScroll::window (const ::GdkEventScroll* obj);
Gdk::Window base::EventScrollBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventScroll* obj) { return (gint8) obj->send_event; }
// gint8 EventScroll::send_event (const ::GdkEventScroll* obj);
// gint8 EventScroll::send_event (const ::GdkEventScroll* obj);
gint8 base::EventScrollBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventScroll* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventScroll::send_event (::GdkEventScroll* obj, gint8 _value);
// void EventScroll::send_event (::GdkEventScroll* obj, gint8 _value);
void base::EventScrollBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventScroll* obj) { return (guint32) obj->time; }
// guint32 EventScroll::time (const ::GdkEventScroll* obj);
// guint32 EventScroll::time (const ::GdkEventScroll* obj);
guint32 base::EventScrollBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventScroll* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventScroll::time (::GdkEventScroll* obj, guint32 _value);
// void EventScroll::time (::GdkEventScroll* obj, guint32 _value);
void base::EventScrollBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventScroll* obj) { return (gdouble) obj->x; }
// gdouble EventScroll::x (const ::GdkEventScroll* obj);
// gdouble EventScroll::x (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventScroll* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventScroll::x (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::x (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventScroll* obj) { return (gdouble) obj->y; }
// gdouble EventScroll::y (const ::GdkEventScroll* obj);
// gdouble EventScroll::y (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventScroll* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventScroll::y (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::y (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventScroll* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventScroll::state (const ::GdkEventScroll* obj);
// ::GdkModifierType EventScroll::state (const ::GdkEventScroll* obj);
Gdk::ModifierType base::EventScrollBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventScroll* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventScroll::state (::GdkEventScroll* obj, ::GdkModifierType _value);
// void EventScroll::state (::GdkEventScroll* obj, ::GdkModifierType _value);
void base::EventScrollBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static ::GdkScrollDirection _field_direction_get (const ::GdkEventScroll* obj) { return (::GdkScrollDirection) obj->direction; }
// ::GdkScrollDirection EventScroll::direction (const ::GdkEventScroll* obj);
// ::GdkScrollDirection EventScroll::direction (const ::GdkEventScroll* obj);
Gdk::ScrollDirection base::EventScrollBase::direction_ () const noexcept
{
  typedef ::GdkScrollDirection (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::GdkEventScroll* obj, ::GdkScrollDirection _value) { obj->direction = (decltype(obj->direction)) _value; }
//  EventScroll::direction (::GdkEventScroll* obj, ::GdkScrollDirection _value);
// void EventScroll::direction (::GdkEventScroll* obj, ::GdkScrollDirection _value);
void base::EventScrollBase::direction_ (Gdk::ScrollDirection _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, ::GdkScrollDirection _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (::GdkScrollDirection) (_value_to_c));
}

static ::GdkDevice* _field_device_get (const ::GdkEventScroll* obj) { return (::GdkDevice*) obj->device; }
// ::GdkDevice* EventScroll::device (const ::GdkEventScroll* obj);
// ::GdkDevice* EventScroll::device (const ::GdkEventScroll* obj);
Gdk::Device base::EventScrollBase::device_ () const noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_device_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gdouble _field_x_root_get (const ::GdkEventScroll* obj) { return (gdouble) obj->x_root; }
// gdouble EventScroll::x_root (const ::GdkEventScroll* obj);
// gdouble EventScroll::x_root (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventScroll* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventScroll::x_root (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::x_root (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventScroll* obj) { return (gdouble) obj->y_root; }
// gdouble EventScroll::y_root (const ::GdkEventScroll* obj);
// gdouble EventScroll::y_root (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventScroll* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventScroll::y_root (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::y_root (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_delta_x_get (const ::GdkEventScroll* obj) { return (gdouble) obj->delta_x; }
// gdouble EventScroll::delta_x (const ::GdkEventScroll* obj);
// gdouble EventScroll::delta_x (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::delta_x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delta_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_delta_x_set (::GdkEventScroll* obj, gdouble _value) { obj->delta_x = (decltype(obj->delta_x)) _value; }
//  EventScroll::delta_x (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::delta_x (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::delta_x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delta_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_delta_y_get (const ::GdkEventScroll* obj) { return (gdouble) obj->delta_y; }
// gdouble EventScroll::delta_y (const ::GdkEventScroll* obj);
// gdouble EventScroll::delta_y (const ::GdkEventScroll* obj);
gdouble base::EventScrollBase::delta_y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delta_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_delta_y_set (::GdkEventScroll* obj, gdouble _value) { obj->delta_y = (decltype(obj->delta_y)) _value; }
//  EventScroll::delta_y (::GdkEventScroll* obj, gdouble _value);
// void EventScroll::delta_y (::GdkEventScroll* obj, gdouble _value);
void base::EventScrollBase::delta_y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_delta_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (gdouble) (_value_to_c));
}

static guint _field_is_stop_get (const ::GdkEventScroll* obj) { return (guint) obj->is_stop; }
// guint EventScroll::is_stop (const ::GdkEventScroll* obj);
// guint EventScroll::is_stop (const ::GdkEventScroll* obj);
guint base::EventScrollBase::is_stop_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventScroll* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_stop_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventScroll*) (gobj_()));
  return _temp_ret;
}

static void _field_is_stop_set (::GdkEventScroll* obj, guint _value) { obj->is_stop = (decltype(obj->is_stop)) _value; }
//  EventScroll::is_stop (::GdkEventScroll* obj, guint _value);
// void EventScroll::is_stop (::GdkEventScroll* obj, guint _value);
void base::EventScrollBase::is_stop_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventScroll* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_stop_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventScroll*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventscroll_extra_def_impl.hpp>)
#include <gdk/eventscroll_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventscroll_extra_impl.hpp>)
#include <gdk/eventscroll_extra_impl.hpp>
#endif
#endif

#endif
