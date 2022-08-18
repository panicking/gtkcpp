// AUTO-GENERATED

#ifndef _GI_GDK_EVENTTOUCH_IMPL_HPP_
#define _GI_GDK_EVENTTOUCH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventTouch* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventTouch::type (const ::GdkEventTouch* obj);
// ::GdkEventType EventTouch::type (const ::GdkEventTouch* obj);
Gdk::EventType base::EventTouchBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventTouch* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventTouch::type (::GdkEventTouch* obj, ::GdkEventType _value);
// void EventTouch::type (::GdkEventTouch* obj, ::GdkEventType _value);
void base::EventTouchBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventTouch* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventTouch::window (const ::GdkEventTouch* obj);
// ::GdkWindow* EventTouch::window (const ::GdkEventTouch* obj);
Gdk::Window base::EventTouchBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventTouch* obj) { return (gint8) obj->send_event; }
// gint8 EventTouch::send_event (const ::GdkEventTouch* obj);
// gint8 EventTouch::send_event (const ::GdkEventTouch* obj);
gint8 base::EventTouchBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventTouch* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventTouch::send_event (::GdkEventTouch* obj, gint8 _value);
// void EventTouch::send_event (::GdkEventTouch* obj, gint8 _value);
void base::EventTouchBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventTouch* obj) { return (guint32) obj->time; }
// guint32 EventTouch::time (const ::GdkEventTouch* obj);
// guint32 EventTouch::time (const ::GdkEventTouch* obj);
guint32 base::EventTouchBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventTouch* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventTouch::time (::GdkEventTouch* obj, guint32 _value);
// void EventTouch::time (::GdkEventTouch* obj, guint32 _value);
void base::EventTouchBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventTouch* obj) { return (gdouble) obj->x; }
// gdouble EventTouch::x (const ::GdkEventTouch* obj);
// gdouble EventTouch::x (const ::GdkEventTouch* obj);
gdouble base::EventTouchBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventTouch* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventTouch::x (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::x (::GdkEventTouch* obj, gdouble _value);
void base::EventTouchBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventTouch* obj) { return (gdouble) obj->y; }
// gdouble EventTouch::y (const ::GdkEventTouch* obj);
// gdouble EventTouch::y (const ::GdkEventTouch* obj);
gdouble base::EventTouchBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventTouch* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventTouch::y (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::y (::GdkEventTouch* obj, gdouble _value);
void base::EventTouchBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventTouch* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventTouch::state (const ::GdkEventTouch* obj);
// ::GdkModifierType EventTouch::state (const ::GdkEventTouch* obj);
Gdk::ModifierType base::EventTouchBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventTouch* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventTouch::state (::GdkEventTouch* obj, ::GdkModifierType _value);
// void EventTouch::state (::GdkEventTouch* obj, ::GdkModifierType _value);
void base::EventTouchBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static ::GdkEventSequence* _field_sequence_get (const ::GdkEventTouch* obj) { return (::GdkEventSequence*) obj->sequence; }
// ::GdkEventSequence* EventTouch::sequence (const ::GdkEventTouch* obj);
// ::GdkEventSequence* EventTouch::sequence (const ::GdkEventTouch* obj);
Gdk::EventSequence base::EventTouchBase::sequence_ () const noexcept
{
  typedef ::GdkEventSequence* (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_sequence_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gboolean _field_emulating_pointer_get (const ::GdkEventTouch* obj) { return (gboolean) obj->emulating_pointer; }
// gboolean EventTouch::emulating_pointer (const ::GdkEventTouch* obj);
// gboolean EventTouch::emulating_pointer (const ::GdkEventTouch* obj);
bool base::EventTouchBase::emulating_pointer_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_emulating_pointer_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_emulating_pointer_set (::GdkEventTouch* obj, gboolean _value) { obj->emulating_pointer = (decltype(obj->emulating_pointer)) _value; }
//  EventTouch::emulating_pointer (::GdkEventTouch* obj, gboolean _value);
// void EventTouch::emulating_pointer (::GdkEventTouch* obj, gboolean _value);
void base::EventTouchBase::emulating_pointer_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_emulating_pointer_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gboolean) (_value_to_c));
}

static ::GdkDevice* _field_device_get (const ::GdkEventTouch* obj) { return (::GdkDevice*) obj->device; }
// ::GdkDevice* EventTouch::device (const ::GdkEventTouch* obj);
// ::GdkDevice* EventTouch::device (const ::GdkEventTouch* obj);
Gdk::Device base::EventTouchBase::device_ () const noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_device_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gdouble _field_x_root_get (const ::GdkEventTouch* obj) { return (gdouble) obj->x_root; }
// gdouble EventTouch::x_root (const ::GdkEventTouch* obj);
// gdouble EventTouch::x_root (const ::GdkEventTouch* obj);
gdouble base::EventTouchBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventTouch* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventTouch::x_root (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::x_root (::GdkEventTouch* obj, gdouble _value);
void base::EventTouchBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventTouch* obj) { return (gdouble) obj->y_root; }
// gdouble EventTouch::y_root (const ::GdkEventTouch* obj);
// gdouble EventTouch::y_root (const ::GdkEventTouch* obj);
gdouble base::EventTouchBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventTouch* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventTouch*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventTouch* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventTouch::y_root (::GdkEventTouch* obj, gdouble _value);
// void EventTouch::y_root (::GdkEventTouch* obj, gdouble _value);
void base::EventTouchBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventTouch* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventTouch*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventtouch_extra_def_impl.hpp>)
#include <gdk/eventtouch_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventtouch_extra_impl.hpp>)
#include <gdk/eventtouch_extra_impl.hpp>
#endif
#endif

#endif
