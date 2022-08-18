// AUTO-GENERATED

#ifndef _GI_GDK_EVENTBUTTON_IMPL_HPP_
#define _GI_GDK_EVENTBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventButton* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventButton::type (const ::GdkEventButton* obj);
// ::GdkEventType EventButton::type (const ::GdkEventButton* obj);
Gdk::EventType base::EventButtonBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventButton* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventButton::type (::GdkEventButton* obj, ::GdkEventType _value);
// void EventButton::type (::GdkEventButton* obj, ::GdkEventType _value);
void base::EventButtonBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventButton*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventButton* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventButton::window (const ::GdkEventButton* obj);
// ::GdkWindow* EventButton::window (const ::GdkEventButton* obj);
Gdk::Window base::EventButtonBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventButton* obj) { return (gint8) obj->send_event; }
// gint8 EventButton::send_event (const ::GdkEventButton* obj);
// gint8 EventButton::send_event (const ::GdkEventButton* obj);
gint8 base::EventButtonBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventButton* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventButton::send_event (::GdkEventButton* obj, gint8 _value);
// void EventButton::send_event (::GdkEventButton* obj, gint8 _value);
void base::EventButtonBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventButton* obj) { return (guint32) obj->time; }
// guint32 EventButton::time (const ::GdkEventButton* obj);
// guint32 EventButton::time (const ::GdkEventButton* obj);
guint32 base::EventButtonBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventButton* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventButton::time (::GdkEventButton* obj, guint32 _value);
// void EventButton::time (::GdkEventButton* obj, guint32 _value);
void base::EventButtonBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (guint32) (_value_to_c));
}

static gdouble _field_x_get (const ::GdkEventButton* obj) { return (gdouble) obj->x; }
// gdouble EventButton::x (const ::GdkEventButton* obj);
// gdouble EventButton::x (const ::GdkEventButton* obj);
gdouble base::EventButtonBase::x_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventButton* obj, gdouble _value) { obj->x = (decltype(obj->x)) _value; }
//  EventButton::x (::GdkEventButton* obj, gdouble _value);
// void EventButton::x (::GdkEventButton* obj, gdouble _value);
void base::EventButtonBase::x_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_get (const ::GdkEventButton* obj) { return (gdouble) obj->y; }
// gdouble EventButton::y (const ::GdkEventButton* obj);
// gdouble EventButton::y (const ::GdkEventButton* obj);
gdouble base::EventButtonBase::y_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventButton* obj, gdouble _value) { obj->y = (decltype(obj->y)) _value; }
//  EventButton::y (::GdkEventButton* obj, gdouble _value);
// void EventButton::y (::GdkEventButton* obj, gdouble _value);
void base::EventButtonBase::y_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (gdouble) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventButton* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventButton::state (const ::GdkEventButton* obj);
// ::GdkModifierType EventButton::state (const ::GdkEventButton* obj);
Gdk::ModifierType base::EventButtonBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventButton* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventButton::state (::GdkEventButton* obj, ::GdkModifierType _value);
// void EventButton::state (::GdkEventButton* obj, ::GdkModifierType _value);
void base::EventButtonBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventButton*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static guint _field_button_get (const ::GdkEventButton* obj) { return (guint) obj->button; }
// guint EventButton::button (const ::GdkEventButton* obj);
// guint EventButton::button (const ::GdkEventButton* obj);
guint base::EventButtonBase::button_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_button_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_button_set (::GdkEventButton* obj, guint _value) { obj->button = (decltype(obj->button)) _value; }
//  EventButton::button (::GdkEventButton* obj, guint _value);
// void EventButton::button (::GdkEventButton* obj, guint _value);
void base::EventButtonBase::button_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_button_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (guint) (_value_to_c));
}

static ::GdkDevice* _field_device_get (const ::GdkEventButton* obj) { return (::GdkDevice*) obj->device; }
// ::GdkDevice* EventButton::device (const ::GdkEventButton* obj);
// ::GdkDevice* EventButton::device (const ::GdkEventButton* obj);
Gdk::Device base::EventButtonBase::device_ () const noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_device_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gdouble _field_x_root_get (const ::GdkEventButton* obj) { return (gdouble) obj->x_root; }
// gdouble EventButton::x_root (const ::GdkEventButton* obj);
// gdouble EventButton::x_root (const ::GdkEventButton* obj);
gdouble base::EventButtonBase::x_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_x_root_set (::GdkEventButton* obj, gdouble _value) { obj->x_root = (decltype(obj->x_root)) _value; }
//  EventButton::x_root (::GdkEventButton* obj, gdouble _value);
// void EventButton::x_root (::GdkEventButton* obj, gdouble _value);
void base::EventButtonBase::x_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (gdouble) (_value_to_c));
}

static gdouble _field_y_root_get (const ::GdkEventButton* obj) { return (gdouble) obj->y_root; }
// gdouble EventButton::y_root (const ::GdkEventButton* obj);
// gdouble EventButton::y_root (const ::GdkEventButton* obj);
gdouble base::EventButtonBase::y_root_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GdkEventButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventButton*) (gobj_()));
  return _temp_ret;
}

static void _field_y_root_set (::GdkEventButton* obj, gdouble _value) { obj->y_root = (decltype(obj->y_root)) _value; }
//  EventButton::y_root (::GdkEventButton* obj, gdouble _value);
// void EventButton::y_root (::GdkEventButton* obj, gdouble _value);
void base::EventButtonBase::y_root_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventButton* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_root_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventButton*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventbutton_extra_def_impl.hpp>)
#include <gdk/eventbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventbutton_extra_impl.hpp>)
#include <gdk/eventbutton_extra_impl.hpp>
#endif
#endif

#endif
