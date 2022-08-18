// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADAXIS_IMPL_HPP_
#define _GI_GDK_EVENTPADAXIS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventPadAxis* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventPadAxis::type (const ::GdkEventPadAxis* obj);
// ::GdkEventType EventPadAxis::type (const ::GdkEventPadAxis* obj);
Gdk::EventType base::EventPadAxisBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventPadAxis* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventPadAxis::type (::GdkEventPadAxis* obj, ::GdkEventType _value);
// void EventPadAxis::type (::GdkEventPadAxis* obj, ::GdkEventType _value);
void base::EventPadAxisBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventPadAxis* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventPadAxis::window (const ::GdkEventPadAxis* obj);
// ::GdkWindow* EventPadAxis::window (const ::GdkEventPadAxis* obj);
Gdk::Window base::EventPadAxisBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventPadAxis* obj) { return (gint8) obj->send_event; }
// gint8 EventPadAxis::send_event (const ::GdkEventPadAxis* obj);
// gint8 EventPadAxis::send_event (const ::GdkEventPadAxis* obj);
gint8 base::EventPadAxisBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventPadAxis* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventPadAxis::send_event (::GdkEventPadAxis* obj, gint8 _value);
// void EventPadAxis::send_event (::GdkEventPadAxis* obj, gint8 _value);
void base::EventPadAxisBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventPadAxis* obj) { return (guint32) obj->time; }
// guint32 EventPadAxis::time (const ::GdkEventPadAxis* obj);
// guint32 EventPadAxis::time (const ::GdkEventPadAxis* obj);
guint32 base::EventPadAxisBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventPadAxis* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventPadAxis::time (::GdkEventPadAxis* obj, guint32 _value);
// void EventPadAxis::time (::GdkEventPadAxis* obj, guint32 _value);
void base::EventPadAxisBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (guint32) (_value_to_c));
}

static guint _field_group_get (const ::GdkEventPadAxis* obj) { return (guint) obj->group; }
// guint EventPadAxis::group (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::group (const ::GdkEventPadAxis* obj);
guint base::EventPadAxisBase::group_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_group_set (::GdkEventPadAxis* obj, guint _value) { obj->group = (decltype(obj->group)) _value; }
//  EventPadAxis::group (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::group (::GdkEventPadAxis* obj, guint _value);
void base::EventPadAxisBase::group_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_index_get (const ::GdkEventPadAxis* obj) { return (guint) obj->index; }
// guint EventPadAxis::index (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::index (const ::GdkEventPadAxis* obj);
guint base::EventPadAxisBase::index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_index_set (::GdkEventPadAxis* obj, guint _value) { obj->index = (decltype(obj->index)) _value; }
//  EventPadAxis::index (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::index (::GdkEventPadAxis* obj, guint _value);
void base::EventPadAxisBase::index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_mode_get (const ::GdkEventPadAxis* obj) { return (guint) obj->mode; }
// guint EventPadAxis::mode (const ::GdkEventPadAxis* obj);
// guint EventPadAxis::mode (const ::GdkEventPadAxis* obj);
guint base::EventPadAxisBase::mode_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_mode_set (::GdkEventPadAxis* obj, guint _value) { obj->mode = (decltype(obj->mode)) _value; }
//  EventPadAxis::mode (::GdkEventPadAxis* obj, guint _value);
// void EventPadAxis::mode (::GdkEventPadAxis* obj, guint _value);
void base::EventPadAxisBase::mode_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (guint) (_value_to_c));
}

static gdouble _field_value_get (const ::GdkEventPadAxis* obj) { return (gdouble) obj->value; }
// gdouble EventPadAxis::value (const ::GdkEventPadAxis* obj);
// gdouble EventPadAxis::value (const ::GdkEventPadAxis* obj);
gdouble base::EventPadAxisBase::value_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventPadAxis* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadAxis*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::GdkEventPadAxis* obj, gdouble _value) { obj->value = (decltype(obj->value)) _value; }
//  EventPadAxis::value (::GdkEventPadAxis* obj, gdouble _value);
// void EventPadAxis::value (::GdkEventPadAxis* obj, gdouble _value);
void base::EventPadAxisBase::value_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadAxis* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadAxis*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadaxis_extra_def_impl.hpp>)
#include <gdk/eventpadaxis_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadaxis_extra_impl.hpp>)
#include <gdk/eventpadaxis_extra_impl.hpp>
#endif
#endif

#endif
