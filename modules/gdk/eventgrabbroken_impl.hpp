// AUTO-GENERATED

#ifndef _GI_GDK_EVENTGRABBROKEN_IMPL_HPP_
#define _GI_GDK_EVENTGRABBROKEN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventGrabBroken* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventGrabBroken::type (const ::GdkEventGrabBroken* obj);
// ::GdkEventType EventGrabBroken::type (const ::GdkEventGrabBroken* obj);
Gdk::EventType base::EventGrabBrokenBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventGrabBroken* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventGrabBroken::type (::GdkEventGrabBroken* obj, ::GdkEventType _value);
// void EventGrabBroken::type (::GdkEventGrabBroken* obj, ::GdkEventType _value);
void base::EventGrabBrokenBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventGrabBroken* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventGrabBroken*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventGrabBroken* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventGrabBroken::window (const ::GdkEventGrabBroken* obj);
// ::GdkWindow* EventGrabBroken::window (const ::GdkEventGrabBroken* obj);
Gdk::Window base::EventGrabBrokenBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventGrabBroken* obj) { return (gint8) obj->send_event; }
// gint8 EventGrabBroken::send_event (const ::GdkEventGrabBroken* obj);
// gint8 EventGrabBroken::send_event (const ::GdkEventGrabBroken* obj);
gint8 base::EventGrabBrokenBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventGrabBroken* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventGrabBroken::send_event (::GdkEventGrabBroken* obj, gint8 _value);
// void EventGrabBroken::send_event (::GdkEventGrabBroken* obj, gint8 _value);
void base::EventGrabBrokenBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventGrabBroken* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventGrabBroken*) (gobj_()), (gint8) (_value_to_c));
}

static gboolean _field_keyboard_get (const ::GdkEventGrabBroken* obj) { return (gboolean) obj->keyboard; }
// gboolean EventGrabBroken::keyboard (const ::GdkEventGrabBroken* obj);
// gboolean EventGrabBroken::keyboard (const ::GdkEventGrabBroken* obj);
bool base::EventGrabBrokenBase::keyboard_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyboard_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return _temp_ret;
}

static void _field_keyboard_set (::GdkEventGrabBroken* obj, gboolean _value) { obj->keyboard = (decltype(obj->keyboard)) _value; }
//  EventGrabBroken::keyboard (::GdkEventGrabBroken* obj, gboolean _value);
// void EventGrabBroken::keyboard (::GdkEventGrabBroken* obj, gboolean _value);
void base::EventGrabBrokenBase::keyboard_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventGrabBroken* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyboard_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventGrabBroken*) (gobj_()), (gboolean) (_value_to_c));
}

static gboolean _field_implicit_get (const ::GdkEventGrabBroken* obj) { return (gboolean) obj->implicit; }
// gboolean EventGrabBroken::implicit (const ::GdkEventGrabBroken* obj);
// gboolean EventGrabBroken::implicit (const ::GdkEventGrabBroken* obj);
bool base::EventGrabBrokenBase::implicit_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_implicit_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return _temp_ret;
}

static void _field_implicit_set (::GdkEventGrabBroken* obj, gboolean _value) { obj->implicit = (decltype(obj->implicit)) _value; }
//  EventGrabBroken::implicit (::GdkEventGrabBroken* obj, gboolean _value);
// void EventGrabBroken::implicit (::GdkEventGrabBroken* obj, gboolean _value);
void base::EventGrabBrokenBase::implicit_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventGrabBroken* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_implicit_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventGrabBroken*) (gobj_()), (gboolean) (_value_to_c));
}

static ::GdkWindow* _field_grab_window_get (const ::GdkEventGrabBroken* obj) { return (::GdkWindow*) obj->grab_window; }
// ::GdkWindow* EventGrabBroken::grab_window (const ::GdkEventGrabBroken* obj);
// ::GdkWindow* EventGrabBroken::grab_window (const ::GdkEventGrabBroken* obj);
Gdk::Window base::EventGrabBrokenBase::grab_window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventGrabBroken* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_grab_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventGrabBroken*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventgrabbroken_extra_def_impl.hpp>)
#include <gdk/eventgrabbroken_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventgrabbroken_extra_impl.hpp>)
#include <gdk/eventgrabbroken_extra_impl.hpp>
#endif
#endif

#endif
