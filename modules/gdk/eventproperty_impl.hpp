// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPROPERTY_IMPL_HPP_
#define _GI_GDK_EVENTPROPERTY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventProperty* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventProperty::type (const ::GdkEventProperty* obj);
// ::GdkEventType EventProperty::type (const ::GdkEventProperty* obj);
Gdk::EventType base::EventPropertyBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProperty*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventProperty* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventProperty::type (::GdkEventProperty* obj, ::GdkEventType _value);
// void EventProperty::type (::GdkEventProperty* obj, ::GdkEventType _value);
void base::EventPropertyBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProperty* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventProperty*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventProperty* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventProperty::window (const ::GdkEventProperty* obj);
// ::GdkWindow* EventProperty::window (const ::GdkEventProperty* obj);
Gdk::Window base::EventPropertyBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProperty*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventProperty* obj) { return (gint8) obj->send_event; }
// gint8 EventProperty::send_event (const ::GdkEventProperty* obj);
// gint8 EventProperty::send_event (const ::GdkEventProperty* obj);
gint8 base::EventPropertyBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProperty*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventProperty* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventProperty::send_event (::GdkEventProperty* obj, gint8 _value);
// void EventProperty::send_event (::GdkEventProperty* obj, gint8 _value);
void base::EventPropertyBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProperty* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventProperty*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventProperty* obj) { return (guint32) obj->time; }
// guint32 EventProperty::time (const ::GdkEventProperty* obj);
// guint32 EventProperty::time (const ::GdkEventProperty* obj);
guint32 base::EventPropertyBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProperty*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventProperty* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventProperty::time (::GdkEventProperty* obj, guint32 _value);
// void EventProperty::time (::GdkEventProperty* obj, guint32 _value);
void base::EventPropertyBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProperty* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventProperty*) (gobj_()), (guint32) (_value_to_c));
}

static ::GdkPropertyState _field_state_get (const ::GdkEventProperty* obj) { return (::GdkPropertyState) obj->state; }
// ::GdkPropertyState EventProperty::state (const ::GdkEventProperty* obj);
// ::GdkPropertyState EventProperty::state (const ::GdkEventProperty* obj);
Gdk::PropertyState base::EventPropertyBase::state_ () const noexcept
{
  typedef ::GdkPropertyState (*call_wrap_t) (const ::GdkEventProperty* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventProperty*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventProperty* obj, ::GdkPropertyState _value) { obj->state = (decltype(obj->state)) _value; }
//  EventProperty::state (::GdkEventProperty* obj, ::GdkPropertyState _value);
// void EventProperty::state (::GdkEventProperty* obj, ::GdkPropertyState _value);
void base::EventPropertyBase::state_ (Gdk::PropertyState _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventProperty* obj, ::GdkPropertyState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventProperty*) (gobj_()), (::GdkPropertyState) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventproperty_extra_def_impl.hpp>)
#include <gdk/eventproperty_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventproperty_extra_impl.hpp>)
#include <gdk/eventproperty_extra_impl.hpp>
#endif
#endif

#endif
