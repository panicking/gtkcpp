// AUTO-GENERATED

#ifndef _GI_GDK_EVENTCROSSING_IMPL_HPP_
#define _GI_GDK_EVENTCROSSING_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventCrossing* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventCrossing::type (const ::GdkEventCrossing* obj);
// ::GdkEventType EventCrossing::type (const ::GdkEventCrossing* obj);
Gdk::EventType base::EventCrossingBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventCrossing* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventCrossing::type (::GdkEventCrossing* obj, ::GdkEventType _value);
// void EventCrossing::type (::GdkEventCrossing* obj, ::GdkEventType _value);
void base::EventCrossingBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventCrossing* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventCrossing::window (const ::GdkEventCrossing* obj);
// ::GdkWindow* EventCrossing::window (const ::GdkEventCrossing* obj);
Gdk::Window base::EventCrossingBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventCrossing* obj) { return (gint8) obj->send_event; }
// gint8 EventCrossing::send_event (const ::GdkEventCrossing* obj);
// gint8 EventCrossing::send_event (const ::GdkEventCrossing* obj);
gint8 base::EventCrossingBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventCrossing* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventCrossing::send_event (::GdkEventCrossing* obj, gint8 _value);
// void EventCrossing::send_event (::GdkEventCrossing* obj, gint8 _value);
void base::EventCrossingBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gint8) (_value_to_c));
}

static ::GdkWindow* _field_subwindow_get (const ::GdkEventCrossing* obj) { return (::GdkWindow*) obj->subwindow; }
// ::GdkWindow* EventCrossing::subwindow (const ::GdkEventCrossing* obj);
// ::GdkWindow* EventCrossing::subwindow (const ::GdkEventCrossing* obj);
Gdk::Window base::EventCrossingBase::subwindow_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_subwindow_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint32 _field_time_get (const ::GdkEventCrossing* obj) { return (guint32) obj->time; }
// guint32 EventCrossing::time (const ::GdkEventCrossing* obj);
// guint32 EventCrossing::time (const ::GdkEventCrossing* obj);
guint32 base::EventCrossingBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventCrossing* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventCrossing::time (::GdkEventCrossing* obj, guint32 _value);
// void EventCrossing::time (::GdkEventCrossing* obj, guint32 _value);
void base::EventCrossingBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventCrossing* obj) { return (gdouble) obj->x; }
// gdouble EventCrossing::x (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::x (const ::GdkEventCrossing* obj);
gdouble base::EventCrossingBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventCrossing* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventCrossing::x (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::x (::GdkEventCrossing* obj, gdouble _value);
void base::EventCrossingBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventCrossing* obj) { return (gdouble) obj->y; }
// gdouble EventCrossing::y (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::y (const ::GdkEventCrossing* obj);
gdouble base::EventCrossingBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventCrossing* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventCrossing::y (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::y (::GdkEventCrossing* obj, gdouble _value);
void base::EventCrossingBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_x_root_get (const ::GdkEventCrossing* obj) { return (gdouble) obj->x_root; }
// gdouble EventCrossing::x_root (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::x_root (const ::GdkEventCrossing* obj);
gdouble base::EventCrossingBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventCrossing* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventCrossing::x_root (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::x_root (::GdkEventCrossing* obj, gdouble _value);
void base::EventCrossingBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventCrossing* obj) { return (gdouble) obj->y_root; }
// gdouble EventCrossing::y_root (const ::GdkEventCrossing* obj);
// gdouble EventCrossing::y_root (const ::GdkEventCrossing* obj);
gdouble base::EventCrossingBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventCrossing* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventCrossing::y_root (::GdkEventCrossing* obj, gdouble _value);
// void EventCrossing::y_root (::GdkEventCrossing* obj, gdouble _value);
void base::EventCrossingBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkCrossingMode _field_mode_get (const ::GdkEventCrossing* obj) { return (::GdkCrossingMode) obj->mode; }
// ::GdkCrossingMode EventCrossing::mode (const ::GdkEventCrossing* obj);
// ::GdkCrossingMode EventCrossing::mode (const ::GdkEventCrossing* obj);
Gdk::CrossingMode base::EventCrossingBase::mode_ () const noexcept
{
  typedef ::GdkCrossingMode (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_mode_set (::GdkEventCrossing* obj, ::GdkCrossingMode _value) { obj->mode = (decltype(obj->mode)) _value; }
//  EventCrossing::mode (::GdkEventCrossing* obj, ::GdkCrossingMode _value);
// void EventCrossing::mode (::GdkEventCrossing* obj, ::GdkCrossingMode _value);
void base::EventCrossingBase::mode_ (Gdk::CrossingMode _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, ::GdkCrossingMode _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (::GdkCrossingMode) (_value_to_c));
}

static ::GdkNotifyType _field_detail_get (const ::GdkEventCrossing* obj) { return (::GdkNotifyType) obj->detail; }
// ::GdkNotifyType EventCrossing::detail (const ::GdkEventCrossing* obj);
// ::GdkNotifyType EventCrossing::detail (const ::GdkEventCrossing* obj);
Gdk::NotifyType base::EventCrossingBase::detail_ () const noexcept
{
  typedef ::GdkNotifyType (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_detail_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_detail_set (::GdkEventCrossing* obj, ::GdkNotifyType _value) { obj->detail = (decltype(obj->detail)) _value; }
//  EventCrossing::detail (::GdkEventCrossing* obj, ::GdkNotifyType _value);
// void EventCrossing::detail (::GdkEventCrossing* obj, ::GdkNotifyType _value);
void base::EventCrossingBase::detail_ (Gdk::NotifyType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, ::GdkNotifyType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_detail_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (::GdkNotifyType) (_value_to_c));
}

static gboolean _field_focus_get (const ::GdkEventCrossing* obj) { return (gboolean) obj->focus; }
// gboolean EventCrossing::focus (const ::GdkEventCrossing* obj);
// gboolean EventCrossing::focus (const ::GdkEventCrossing* obj);
bool base::EventCrossingBase::focus_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_focus_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return _temp_ret;
}

static void _field_focus_set (::GdkEventCrossing* obj, gboolean _value) { obj->focus = (decltype(obj->focus)) _value; }
//  EventCrossing::focus (::GdkEventCrossing* obj, gboolean _value);
// void EventCrossing::focus (::GdkEventCrossing* obj, gboolean _value);
void base::EventCrossingBase::focus_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_focus_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (gboolean) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventCrossing* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventCrossing::state (const ::GdkEventCrossing* obj);
// ::GdkModifierType EventCrossing::state (const ::GdkEventCrossing* obj);
Gdk::ModifierType base::EventCrossingBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventCrossing* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventCrossing*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventCrossing* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventCrossing::state (::GdkEventCrossing* obj, ::GdkModifierType _value);
// void EventCrossing::state (::GdkEventCrossing* obj, ::GdkModifierType _value);
void base::EventCrossingBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventCrossing* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventCrossing*) (gobj_()), (::GdkModifierType) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventcrossing_extra_def_impl.hpp>)
#include <gdk/eventcrossing_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventcrossing_extra_impl.hpp>)
#include <gdk/eventcrossing_extra_impl.hpp>
#endif
#endif

#endif
