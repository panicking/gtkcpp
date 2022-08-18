// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPROXIMITY_IMPL_HPP_
#define _GI_GDK_EVENTPROXIMITY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventProximity* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventProximity::type (const ::GdkEventProximity* obj);
// ::GdkEventType EventProximity::type (const ::GdkEventProximity* obj);
Gdk::EventType base::EventProximityBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventProximity* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProximity*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventProximity* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventProximity::type (::GdkEventProximity* obj, ::GdkEventType _value);
// void EventProximity::type (::GdkEventProximity* obj, ::GdkEventType _value);
void base::EventProximityBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProximity* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventProximity*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventProximity* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventProximity::window (const ::GdkEventProximity* obj);
// ::GdkWindow* EventProximity::window (const ::GdkEventProximity* obj);
Gdk::Window base::EventProximityBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventProximity* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProximity*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventProximity* obj) { return (gint8) obj->send_event; }
// gint8 EventProximity::send_event (const ::GdkEventProximity* obj);
// gint8 EventProximity::send_event (const ::GdkEventProximity* obj);
gint8 base::EventProximityBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventProximity* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProximity*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventProximity* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventProximity::send_event (::GdkEventProximity* obj, gint8 _value);
// void EventProximity::send_event (::GdkEventProximity* obj, gint8 _value);
void base::EventProximityBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProximity* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventProximity*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventProximity* obj) { return (guint32) obj->time; }
// guint32 EventProximity::time (const ::GdkEventProximity* obj);
// guint32 EventProximity::time (const ::GdkEventProximity* obj);
guint32 base::EventProximityBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventProximity* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProximity*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventProximity* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventProximity::time (::GdkEventProximity* obj, guint32 _value);
// void EventProximity::time (::GdkEventProximity* obj, guint32 _value);
void base::EventProximityBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProximity* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventProximity*) (gobj_()), (guint32) (_value_to_c));
}

static ::GdkDevice* _field_device_get (const ::GdkEventProximity* obj) { return (::GdkDevice*) obj->device; }
// ::GdkDevice* EventProximity::device (const ::GdkEventProximity* obj);
// ::GdkDevice* EventProximity::device (const ::GdkEventProximity* obj);
Gdk::Device base::EventProximityBase::device_ () const noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (const ::GdkEventProximity* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_device_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProximity*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventproximity_extra_def_impl.hpp>)
#include <gdk/eventproximity_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventproximity_extra_impl.hpp>)
#include <gdk/eventproximity_extra_impl.hpp>
#endif
#endif

#endif
