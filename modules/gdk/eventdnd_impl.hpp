// AUTO-GENERATED

#ifndef _GI_GDK_EVENTDND_IMPL_HPP_
#define _GI_GDK_EVENTDND_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventDND* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventDND::type (const ::GdkEventDND* obj);
// ::GdkEventType EventDND::type (const ::GdkEventDND* obj);
Gdk::EventType base::EventDNDBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventDND* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventDND::type (::GdkEventDND* obj, ::GdkEventType _value);
// void EventDND::type (::GdkEventDND* obj, ::GdkEventType _value);
void base::EventDNDBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventDND* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventDND*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventDND* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventDND::window (const ::GdkEventDND* obj);
// ::GdkWindow* EventDND::window (const ::GdkEventDND* obj);
Gdk::Window base::EventDNDBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventDND* obj) { return (gint8) obj->send_event; }
// gint8 EventDND::send_event (const ::GdkEventDND* obj);
// gint8 EventDND::send_event (const ::GdkEventDND* obj);
gint8 base::EventDNDBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventDND* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventDND::send_event (::GdkEventDND* obj, gint8 _value);
// void EventDND::send_event (::GdkEventDND* obj, gint8 _value);
void base::EventDNDBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventDND* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventDND*) (gobj_()), (gint8) (_value_to_c));
}

static ::GdkDragContext* _field_context_get (const ::GdkEventDND* obj) { return (::GdkDragContext*) obj->context; }
// ::GdkDragContext* EventDND::context (const ::GdkEventDND* obj);
// ::GdkDragContext* EventDND::context (const ::GdkEventDND* obj);
Gdk::DragContext base::EventDNDBase::context_ () const noexcept
{
  typedef ::GdkDragContext* (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_context_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint32 _field_time_get (const ::GdkEventDND* obj) { return (guint32) obj->time; }
// guint32 EventDND::time (const ::GdkEventDND* obj);
// guint32 EventDND::time (const ::GdkEventDND* obj);
guint32 base::EventDNDBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventDND* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventDND::time (::GdkEventDND* obj, guint32 _value);
// void EventDND::time (::GdkEventDND* obj, guint32 _value);
void base::EventDNDBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventDND* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventDND*) (gobj_()), (guint32) (_value_to_c));
}

static gshort _field_x_root_get (const ::GdkEventDND* obj) { return (gshort) obj->x_root; }
// gshort EventDND::x_root (const ::GdkEventDND* obj);
// gshort EventDND::x_root (const ::GdkEventDND* obj);
gshort base::EventDNDBase::x_root_ () const noexcept
{
  typedef gshort (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventDND* obj, gshort _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventDND::x_root (::GdkEventDND* obj, gshort _value);
// void EventDND::x_root (::GdkEventDND* obj, gshort _value);
void base::EventDNDBase::x_root_ (gshort _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventDND* obj, gshort _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventDND*) (gobj_()), (gshort) (_value_to_c));
}

static gshort _field_y_root_get (const ::GdkEventDND* obj) { return (gshort) obj->y_root; }
// gshort EventDND::y_root (const ::GdkEventDND* obj);
// gshort EventDND::y_root (const ::GdkEventDND* obj);
gshort base::EventDNDBase::y_root_ () const noexcept
{
  typedef gshort (*call_wrap_t) (const ::GdkEventDND* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventDND*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventDND* obj, gshort _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventDND::y_root (::GdkEventDND* obj, gshort _value);
// void EventDND::y_root (::GdkEventDND* obj, gshort _value);
void base::EventDNDBase::y_root_ (gshort _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventDND* obj, gshort _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventDND*) (gobj_()), (gshort) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventdnd_extra_def_impl.hpp>)
#include <gdk/eventdnd_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventdnd_extra_impl.hpp>)
#include <gdk/eventdnd_extra_impl.hpp>
#endif
#endif

#endif
