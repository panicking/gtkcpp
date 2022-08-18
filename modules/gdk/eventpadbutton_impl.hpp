// AUTO-GENERATED

#ifndef _GI_GDK_EVENTPADBUTTON_IMPL_HPP_
#define _GI_GDK_EVENTPADBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventPadButton* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventPadButton::type (const ::GdkEventPadButton* obj);
// ::GdkEventType EventPadButton::type (const ::GdkEventPadButton* obj);
Gdk::EventType base::EventPadButtonBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventPadButton* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventPadButton::type (::GdkEventPadButton* obj, ::GdkEventType _value);
// void EventPadButton::type (::GdkEventPadButton* obj, ::GdkEventType _value);
void base::EventPadButtonBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventPadButton* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventPadButton::window (const ::GdkEventPadButton* obj);
// ::GdkWindow* EventPadButton::window (const ::GdkEventPadButton* obj);
Gdk::Window base::EventPadButtonBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventPadButton* obj) { return (gint8) obj->send_event; }
// gint8 EventPadButton::send_event (const ::GdkEventPadButton* obj);
// gint8 EventPadButton::send_event (const ::GdkEventPadButton* obj);
gint8 base::EventPadButtonBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventPadButton* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventPadButton::send_event (::GdkEventPadButton* obj, gint8 _value);
// void EventPadButton::send_event (::GdkEventPadButton* obj, gint8 _value);
void base::EventPadButtonBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventPadButton* obj) { return (guint32) obj->time; }
// guint32 EventPadButton::time (const ::GdkEventPadButton* obj);
// guint32 EventPadButton::time (const ::GdkEventPadButton* obj);
guint32 base::EventPadButtonBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventPadButton* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventPadButton::time (::GdkEventPadButton* obj, guint32 _value);
// void EventPadButton::time (::GdkEventPadButton* obj, guint32 _value);
void base::EventPadButtonBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (guint32) (_value_to_c));
}

static guint _field_group_get (const ::GdkEventPadButton* obj) { return (guint) obj->group; }
// guint EventPadButton::group (const ::GdkEventPadButton* obj);
// guint EventPadButton::group (const ::GdkEventPadButton* obj);
guint base::EventPadButtonBase::group_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return _temp_ret;
}

static void _field_group_set (::GdkEventPadButton* obj, guint _value) { obj->group = (decltype(obj->group)) _value; }
//  EventPadButton::group (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::group (::GdkEventPadButton* obj, guint _value);
void base::EventPadButtonBase::group_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_button_get (const ::GdkEventPadButton* obj) { return (guint) obj->button; }
// guint EventPadButton::button (const ::GdkEventPadButton* obj);
// guint EventPadButton::button (const ::GdkEventPadButton* obj);
guint base::EventPadButtonBase::button_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_button_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return _temp_ret;
}

static void _field_button_set (::GdkEventPadButton* obj, guint _value) { obj->button = (decltype(obj->button)) _value; }
//  EventPadButton::button (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::button (::GdkEventPadButton* obj, guint _value);
void base::EventPadButtonBase::button_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_button_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_mode_get (const ::GdkEventPadButton* obj) { return (guint) obj->mode; }
// guint EventPadButton::mode (const ::GdkEventPadButton* obj);
// guint EventPadButton::mode (const ::GdkEventPadButton* obj);
guint base::EventPadButtonBase::mode_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventPadButton* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventPadButton*) (gobj_()));
  return _temp_ret;
}

static void _field_mode_set (::GdkEventPadButton* obj, guint _value) { obj->mode = (decltype(obj->mode)) _value; }
//  EventPadButton::mode (::GdkEventPadButton* obj, guint _value);
// void EventPadButton::mode (::GdkEventPadButton* obj, guint _value);
void base::EventPadButtonBase::mode_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventPadButton* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventPadButton*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventpadbutton_extra_def_impl.hpp>)
#include <gdk/eventpadbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventpadbutton_extra_impl.hpp>)
#include <gdk/eventpadbutton_extra_impl.hpp>
#endif
#endif

#endif
