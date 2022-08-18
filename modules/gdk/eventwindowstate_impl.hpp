// AUTO-GENERATED

#ifndef _GI_GDK_EVENTWINDOWSTATE_IMPL_HPP_
#define _GI_GDK_EVENTWINDOWSTATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventWindowState* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventWindowState::type (const ::GdkEventWindowState* obj);
// ::GdkEventType EventWindowState::type (const ::GdkEventWindowState* obj);
Gdk::EventType base::EventWindowStateBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventWindowState* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventWindowState*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventWindowState* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventWindowState::type (::GdkEventWindowState* obj, ::GdkEventType _value);
// void EventWindowState::type (::GdkEventWindowState* obj, ::GdkEventType _value);
void base::EventWindowStateBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventWindowState* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventWindowState*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventWindowState* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventWindowState::window (const ::GdkEventWindowState* obj);
// ::GdkWindow* EventWindowState::window (const ::GdkEventWindowState* obj);
Gdk::Window base::EventWindowStateBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventWindowState* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventWindowState*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventWindowState* obj) { return (gint8) obj->send_event; }
// gint8 EventWindowState::send_event (const ::GdkEventWindowState* obj);
// gint8 EventWindowState::send_event (const ::GdkEventWindowState* obj);
gint8 base::EventWindowStateBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventWindowState* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventWindowState*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventWindowState* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventWindowState::send_event (::GdkEventWindowState* obj, gint8 _value);
// void EventWindowState::send_event (::GdkEventWindowState* obj, gint8 _value);
void base::EventWindowStateBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventWindowState* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventWindowState*) (gobj_()), (gint8) (_value_to_c));
}

static ::GdkWindowState _field_changed_mask_get (const ::GdkEventWindowState* obj) { return (::GdkWindowState) obj->changed_mask; }
// ::GdkWindowState EventWindowState::changed_mask (const ::GdkEventWindowState* obj);
// ::GdkWindowState EventWindowState::changed_mask (const ::GdkEventWindowState* obj);
Gdk::WindowState base::EventWindowStateBase::changed_mask_ () const noexcept
{
  typedef ::GdkWindowState (*call_wrap_t) (const ::GdkEventWindowState* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_changed_mask_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventWindowState*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_changed_mask_set (::GdkEventWindowState* obj, ::GdkWindowState _value) { obj->changed_mask = (decltype(obj->changed_mask)) _value; }
//  EventWindowState::changed_mask (::GdkEventWindowState* obj, ::GdkWindowState _value);
// void EventWindowState::changed_mask (::GdkEventWindowState* obj, ::GdkWindowState _value);
void base::EventWindowStateBase::changed_mask_ (Gdk::WindowState _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventWindowState* obj, ::GdkWindowState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_changed_mask_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventWindowState*) (gobj_()), (::GdkWindowState) (_value_to_c));
}

static ::GdkWindowState _field_new_window_state_get (const ::GdkEventWindowState* obj) { return (::GdkWindowState) obj->new_window_state; }
// ::GdkWindowState EventWindowState::new_window_state (const ::GdkEventWindowState* obj);
// ::GdkWindowState EventWindowState::new_window_state (const ::GdkEventWindowState* obj);
Gdk::WindowState base::EventWindowStateBase::new_window_state_ () const noexcept
{
  typedef ::GdkWindowState (*call_wrap_t) (const ::GdkEventWindowState* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_new_window_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventWindowState*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_new_window_state_set (::GdkEventWindowState* obj, ::GdkWindowState _value) { obj->new_window_state = (decltype(obj->new_window_state)) _value; }
//  EventWindowState::new_window_state (::GdkEventWindowState* obj, ::GdkWindowState _value);
// void EventWindowState::new_window_state (::GdkEventWindowState* obj, ::GdkWindowState _value);
void base::EventWindowStateBase::new_window_state_ (Gdk::WindowState _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventWindowState* obj, ::GdkWindowState _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_new_window_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventWindowState*) (gobj_()), (::GdkWindowState) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventwindowstate_extra_def_impl.hpp>)
#include <gdk/eventwindowstate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventwindowstate_extra_impl.hpp>)
#include <gdk/eventwindowstate_extra_impl.hpp>
#endif
#endif

#endif
