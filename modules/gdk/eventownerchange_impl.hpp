// AUTO-GENERATED

#ifndef _GI_GDK_EVENTOWNERCHANGE_IMPL_HPP_
#define _GI_GDK_EVENTOWNERCHANGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventOwnerChange* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventOwnerChange::type (const ::GdkEventOwnerChange* obj);
// ::GdkEventType EventOwnerChange::type (const ::GdkEventOwnerChange* obj);
Gdk::EventType base::EventOwnerChangeBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventOwnerChange* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventOwnerChange::type (::GdkEventOwnerChange* obj, ::GdkEventType _value);
// void EventOwnerChange::type (::GdkEventOwnerChange* obj, ::GdkEventType _value);
void base::EventOwnerChangeBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventOwnerChange* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventOwnerChange*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventOwnerChange* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventOwnerChange::window (const ::GdkEventOwnerChange* obj);
// ::GdkWindow* EventOwnerChange::window (const ::GdkEventOwnerChange* obj);
Gdk::Window base::EventOwnerChangeBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventOwnerChange* obj) { return (gint8) obj->send_event; }
// gint8 EventOwnerChange::send_event (const ::GdkEventOwnerChange* obj);
// gint8 EventOwnerChange::send_event (const ::GdkEventOwnerChange* obj);
gint8 base::EventOwnerChangeBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventOwnerChange* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventOwnerChange::send_event (::GdkEventOwnerChange* obj, gint8 _value);
// void EventOwnerChange::send_event (::GdkEventOwnerChange* obj, gint8 _value);
void base::EventOwnerChangeBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventOwnerChange* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventOwnerChange*) (gobj_()), (gint8) (_value_to_c));
}

static ::GdkWindow* _field_owner_get (const ::GdkEventOwnerChange* obj) { return (::GdkWindow*) obj->owner; }
// ::GdkWindow* EventOwnerChange::owner (const ::GdkEventOwnerChange* obj);
// ::GdkWindow* EventOwnerChange::owner (const ::GdkEventOwnerChange* obj);
Gdk::Window base::EventOwnerChangeBase::owner_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_owner_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GdkOwnerChange _field_reason_get (const ::GdkEventOwnerChange* obj) { return (::GdkOwnerChange) obj->reason; }
// ::GdkOwnerChange EventOwnerChange::reason (const ::GdkEventOwnerChange* obj);
// ::GdkOwnerChange EventOwnerChange::reason (const ::GdkEventOwnerChange* obj);
Gdk::OwnerChange base::EventOwnerChangeBase::reason_ () const noexcept
{
  typedef ::GdkOwnerChange (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_reason_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_reason_set (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value) { obj->reason = (decltype(obj->reason)) _value; }
//  EventOwnerChange::reason (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value);
// void EventOwnerChange::reason (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value);
void base::EventOwnerChangeBase::reason_ (Gdk::OwnerChange _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventOwnerChange* obj, ::GdkOwnerChange _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_reason_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventOwnerChange*) (gobj_()), (::GdkOwnerChange) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventOwnerChange* obj) { return (guint32) obj->time; }
// guint32 EventOwnerChange::time (const ::GdkEventOwnerChange* obj);
// guint32 EventOwnerChange::time (const ::GdkEventOwnerChange* obj);
guint32 base::EventOwnerChangeBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventOwnerChange* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventOwnerChange::time (::GdkEventOwnerChange* obj, guint32 _value);
// void EventOwnerChange::time (::GdkEventOwnerChange* obj, guint32 _value);
void base::EventOwnerChangeBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventOwnerChange* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventOwnerChange*) (gobj_()), (guint32) (_value_to_c));
}

static guint32 _field_selection_time_get (const ::GdkEventOwnerChange* obj) { return (guint32) obj->selection_time; }
// guint32 EventOwnerChange::selection_time (const ::GdkEventOwnerChange* obj);
// guint32 EventOwnerChange::selection_time (const ::GdkEventOwnerChange* obj);
guint32 base::EventOwnerChangeBase::selection_time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventOwnerChange* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_selection_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventOwnerChange*) (gobj_()));
  return _temp_ret;
}

static void _field_selection_time_set (::GdkEventOwnerChange* obj, guint32 _value) { obj->selection_time = (decltype(obj->selection_time)) _value; }
//  EventOwnerChange::selection_time (::GdkEventOwnerChange* obj, guint32 _value);
// void EventOwnerChange::selection_time (::GdkEventOwnerChange* obj, guint32 _value);
void base::EventOwnerChangeBase::selection_time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventOwnerChange* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_selection_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventOwnerChange*) (gobj_()), (guint32) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventownerchange_extra_def_impl.hpp>)
#include <gdk/eventownerchange_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventownerchange_extra_impl.hpp>)
#include <gdk/eventownerchange_extra_impl.hpp>
#endif
#endif

#endif
