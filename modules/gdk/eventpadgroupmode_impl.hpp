// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADGROUPMODE_IMPL_HPP_
#define _GI_GDK_EVENTPADGROUPMODE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventPadGroupMode* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventPadGroupMode::type (const ::GdkEventPadGroupMode* obj);
// ::GdkEventType EventPadGroupMode::type (const ::GdkEventPadGroupMode* obj);
Gdk::EventType base::EventPadGroupModeBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventPadGroupMode* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventPadGroupMode::type (::GdkEventPadGroupMode* obj, ::GdkEventType _value);
// void EventPadGroupMode::type (::GdkEventPadGroupMode* obj, ::GdkEventType _value);
void base::EventPadGroupModeBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadGroupMode* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventPadGroupMode*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventPadGroupMode* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventPadGroupMode::window (const ::GdkEventPadGroupMode* obj);
// ::GdkWindow* EventPadGroupMode::window (const ::GdkEventPadGroupMode* obj);
Gdk::Window base::EventPadGroupModeBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventPadGroupMode* obj) { return (gint8) obj->send_event; }
// gint8 EventPadGroupMode::send_event (const ::GdkEventPadGroupMode* obj);
// gint8 EventPadGroupMode::send_event (const ::GdkEventPadGroupMode* obj);
gint8 base::EventPadGroupModeBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventPadGroupMode* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventPadGroupMode::send_event (::GdkEventPadGroupMode* obj, gint8 _value);
// void EventPadGroupMode::send_event (::GdkEventPadGroupMode* obj, gint8 _value);
void base::EventPadGroupModeBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadGroupMode* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadGroupMode*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventPadGroupMode* obj) { return (guint32) obj->time; }
// guint32 EventPadGroupMode::time (const ::GdkEventPadGroupMode* obj);
// guint32 EventPadGroupMode::time (const ::GdkEventPadGroupMode* obj);
guint32 base::EventPadGroupModeBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventPadGroupMode* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventPadGroupMode::time (::GdkEventPadGroupMode* obj, guint32 _value);
// void EventPadGroupMode::time (::GdkEventPadGroupMode* obj, guint32 _value);
void base::EventPadGroupModeBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadGroupMode* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadGroupMode*) (gobj_()), (guint32) (_value_to_c));
}

static guint _field_group_get (const ::GdkEventPadGroupMode* obj) { return (guint) obj->group; }
// guint EventPadGroupMode::group (const ::GdkEventPadGroupMode* obj);
// guint EventPadGroupMode::group (const ::GdkEventPadGroupMode* obj);
guint base::EventPadGroupModeBase::group_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return _temp_ret;
}

static void _field_group_set (::GdkEventPadGroupMode* obj, guint _value) { obj->group = (decltype(obj->group)) _value; }
//  EventPadGroupMode::group (::GdkEventPadGroupMode* obj, guint _value);
// void EventPadGroupMode::group (::GdkEventPadGroupMode* obj, guint _value);
void base::EventPadGroupModeBase::group_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadGroupMode* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadGroupMode*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_mode_get (const ::GdkEventPadGroupMode* obj) { return (guint) obj->mode; }
// guint EventPadGroupMode::mode (const ::GdkEventPadGroupMode* obj);
// guint EventPadGroupMode::mode (const ::GdkEventPadGroupMode* obj);
guint base::EventPadGroupModeBase::mode_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadGroupMode* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadGroupMode*) (gobj_()));
  return _temp_ret;
}

static void _field_mode_set (::GdkEventPadGroupMode* obj, guint _value) { obj->mode = (decltype(obj->mode)) _value; }
//  EventPadGroupMode::mode (::GdkEventPadGroupMode* obj, guint _value);
// void EventPadGroupMode::mode (::GdkEventPadGroupMode* obj, guint _value);
void base::EventPadGroupModeBase::mode_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadGroupMode* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadGroupMode*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadgroupmode_extra_def_impl.hpp>)
#include <gdk/eventpadgroupmode_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadgroupmode_extra_impl.hpp>)
#include <gdk/eventpadgroupmode_extra_impl.hpp>
#endif
#endif

#endif
