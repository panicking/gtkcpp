// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSELECTION_IMPL_HPP_
#define _GI_GDK_EVENTSELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventSelection* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventSelection::type (const ::GdkEventSelection* obj);
// ::GdkEventType EventSelection::type (const ::GdkEventSelection* obj);
Gdk::EventType base::EventSelectionBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventSelection* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSelection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventSelection* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventSelection::type (::GdkEventSelection* obj, ::GdkEventType _value);
// void EventSelection::type (::GdkEventSelection* obj, ::GdkEventType _value);
void base::EventSelectionBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSelection* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventSelection*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventSelection* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventSelection::window (const ::GdkEventSelection* obj);
// ::GdkWindow* EventSelection::window (const ::GdkEventSelection* obj);
Gdk::Window base::EventSelectionBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventSelection* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventSelection* obj) { return (gint8) obj->send_event; }
// gint8 EventSelection::send_event (const ::GdkEventSelection* obj);
// gint8 EventSelection::send_event (const ::GdkEventSelection* obj);
gint8 base::EventSelectionBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventSelection* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSelection*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventSelection* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventSelection::send_event (::GdkEventSelection* obj, gint8 _value);
// void EventSelection::send_event (::GdkEventSelection* obj, gint8 _value);
void base::EventSelectionBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSelection* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventSelection*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventSelection* obj) { return (guint32) obj->time; }
// guint32 EventSelection::time (const ::GdkEventSelection* obj);
// guint32 EventSelection::time (const ::GdkEventSelection* obj);
guint32 base::EventSelectionBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventSelection* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSelection*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventSelection* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventSelection::time (::GdkEventSelection* obj, guint32 _value);
// void EventSelection::time (::GdkEventSelection* obj, guint32 _value);
void base::EventSelectionBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSelection* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventSelection*) (gobj_()), (guint32) (_value_to_c));
}

static ::GdkWindow* _field_requestor_get (const ::GdkEventSelection* obj) { return (::GdkWindow*) obj->requestor; }
// ::GdkWindow* EventSelection::requestor (const ::GdkEventSelection* obj);
// ::GdkWindow* EventSelection::requestor (const ::GdkEventSelection* obj);
Gdk::Window base::EventSelectionBase::requestor_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventSelection* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_requestor_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventselection_extra_def_impl.hpp>)
#include <gdk/eventselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventselection_extra_impl.hpp>)
#include <gdk/eventselection_extra_impl.hpp>
#endif
#endif

#endif
