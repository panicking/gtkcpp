// AUTO-GENERATED

#ifndef _GI_GDK_EVENTANY_IMPL_HPP_
#define _GI_GDK_EVENTANY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventAny* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventAny::type (const ::GdkEventAny* obj);
// ::GdkEventType EventAny::type (const ::GdkEventAny* obj);
Gdk::EventType base::EventAnyBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventAny* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventAny*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventAny* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventAny::type (::GdkEventAny* obj, ::GdkEventType _value);
// void EventAny::type (::GdkEventAny* obj, ::GdkEventType _value);
void base::EventAnyBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventAny* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventAny*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventAny* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventAny::window (const ::GdkEventAny* obj);
// ::GdkWindow* EventAny::window (const ::GdkEventAny* obj);
Gdk::Window base::EventAnyBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventAny* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventAny*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventAny* obj) { return (gint8) obj->send_event; }
// gint8 EventAny::send_event (const ::GdkEventAny* obj);
// gint8 EventAny::send_event (const ::GdkEventAny* obj);
gint8 base::EventAnyBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventAny* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventAny*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventAny* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventAny::send_event (::GdkEventAny* obj, gint8 _value);
// void EventAny::send_event (::GdkEventAny* obj, gint8 _value);
void base::EventAnyBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventAny* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventAny*) (gobj_()), (gint8) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventany_extra_def_impl.hpp>)
#include <gdk/eventany_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventany_extra_impl.hpp>)
#include <gdk/eventany_extra_impl.hpp>
#endif
#endif

#endif
