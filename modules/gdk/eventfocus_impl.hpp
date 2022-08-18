// AUTO-GENERATED

#ifndef _GI_GDK_EVENTFOCUS_IMPL_HPP_
#define _GI_GDK_EVENTFOCUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventFocus* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventFocus::type (const ::GdkEventFocus* obj);
// ::GdkEventType EventFocus::type (const ::GdkEventFocus* obj);
Gdk::EventType base::EventFocusBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventFocus* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventFocus*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventFocus* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventFocus::type (::GdkEventFocus* obj, ::GdkEventType _value);
// void EventFocus::type (::GdkEventFocus* obj, ::GdkEventType _value);
void base::EventFocusBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventFocus* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventFocus*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventFocus* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventFocus::window (const ::GdkEventFocus* obj);
// ::GdkWindow* EventFocus::window (const ::GdkEventFocus* obj);
Gdk::Window base::EventFocusBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventFocus* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventFocus*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventFocus* obj) { return (gint8) obj->send_event; }
// gint8 EventFocus::send_event (const ::GdkEventFocus* obj);
// gint8 EventFocus::send_event (const ::GdkEventFocus* obj);
gint8 base::EventFocusBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventFocus* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventFocus*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventFocus* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventFocus::send_event (::GdkEventFocus* obj, gint8 _value);
// void EventFocus::send_event (::GdkEventFocus* obj, gint8 _value);
void base::EventFocusBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventFocus* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventFocus*) (gobj_()), (gint8) (_value_to_c));
}

static gint16 _field_in_get (const ::GdkEventFocus* obj) { return (gint16) obj->in; }
// gint16 EventFocus::in (const ::GdkEventFocus* obj);
// gint16 EventFocus::in (const ::GdkEventFocus* obj);
gint16 base::EventFocusBase::in_ () const noexcept
{
  typedef gint16 (*call_wrap_t) (const ::GdkEventFocus* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventFocus*) (gobj_()));
  return _temp_ret;
}

static void _field_in_set (::GdkEventFocus* obj, gint16 _value) { obj->in = (decltype(obj->in)) _value; }
//  EventFocus::in (::GdkEventFocus* obj, gint16 _value);
// void EventFocus::in (::GdkEventFocus* obj, gint16 _value);
void base::EventFocusBase::in_ (gint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventFocus* obj, gint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_in_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventFocus*) (gobj_()), (gint16) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventfocus_extra_def_impl.hpp>)
#include <gdk/eventfocus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventfocus_extra_impl.hpp>)
#include <gdk/eventfocus_extra_impl.hpp>
#endif
#endif

#endif
