// AUTO-GENERATED

#ifndef _GI_GDK_EVENTKEY_IMPL_HPP_
#define _GI_GDK_EVENTKEY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventKey* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventKey::type (const ::GdkEventKey* obj);
// ::GdkEventType EventKey::type (const ::GdkEventKey* obj);
Gdk::EventType base::EventKeyBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventKey* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventKey::type (::GdkEventKey* obj, ::GdkEventType _value);
// void EventKey::type (::GdkEventKey* obj, ::GdkEventType _value);
void base::EventKeyBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventKey*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventKey* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventKey::window (const ::GdkEventKey* obj);
// ::GdkWindow* EventKey::window (const ::GdkEventKey* obj);
Gdk::Window base::EventKeyBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventKey* obj) { return (gint8) obj->send_event; }
// gint8 EventKey::send_event (const ::GdkEventKey* obj);
// gint8 EventKey::send_event (const ::GdkEventKey* obj);
gint8 base::EventKeyBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventKey* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventKey::send_event (::GdkEventKey* obj, gint8 _value);
// void EventKey::send_event (::GdkEventKey* obj, gint8 _value);
void base::EventKeyBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (gint8) (_value_to_c));
}

static guint32 _field_time_get (const ::GdkEventKey* obj) { return (guint32) obj->time; }
// guint32 EventKey::time (const ::GdkEventKey* obj);
// guint32 EventKey::time (const ::GdkEventKey* obj);
guint32 base::EventKeyBase::time_ () const noexcept
{
  typedef guint32 (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_time_set (::GdkEventKey* obj, guint32 _value) { obj->time = (decltype(obj->time)) _value; }
//  EventKey::time (::GdkEventKey* obj, guint32 _value);
// void EventKey::time (::GdkEventKey* obj, guint32 _value);
void base::EventKeyBase::time_ (guint32 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, guint32 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_time_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (guint32) (_value_to_c));
}

static ::GdkModifierType _field_state_get (const ::GdkEventKey* obj) { return (::GdkModifierType) obj->state; }
// ::GdkModifierType EventKey::state (const ::GdkEventKey* obj);
// ::GdkModifierType EventKey::state (const ::GdkEventKey* obj);
Gdk::ModifierType base::EventKeyBase::state_ () const noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_state_set (::GdkEventKey* obj, ::GdkModifierType _value) { obj->state = (decltype(obj->state)) _value; }
//  EventKey::state (::GdkEventKey* obj, ::GdkModifierType _value);
// void EventKey::state (::GdkEventKey* obj, ::GdkModifierType _value);
void base::EventKeyBase::state_ (Gdk::ModifierType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, ::GdkModifierType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_state_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventKey*) (gobj_()), (::GdkModifierType) (_value_to_c));
}

static guint _field_keyval_get (const ::GdkEventKey* obj) { return (guint) obj->keyval; }
// guint EventKey::keyval (const ::GdkEventKey* obj);
// guint EventKey::keyval (const ::GdkEventKey* obj);
guint base::EventKeyBase::keyval_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_keyval_set (::GdkEventKey* obj, guint _value) { obj->keyval = (decltype(obj->keyval)) _value; }
//  EventKey::keyval (::GdkEventKey* obj, guint _value);
// void EventKey::keyval (::GdkEventKey* obj, guint _value);
void base::EventKeyBase::keyval_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_keyval_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (guint) (_value_to_c));
}

static gint _field_length_get (const ::GdkEventKey* obj) { return (gint) obj->length; }
// gint EventKey::length (const ::GdkEventKey* obj);
// gint EventKey::length (const ::GdkEventKey* obj);
gint base::EventKeyBase::length_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::GdkEventKey* obj, gint _value) { obj->length = (decltype(obj->length)) _value; }
//  EventKey::length (::GdkEventKey* obj, gint _value);
// void EventKey::length (::GdkEventKey* obj, gint _value);
void base::EventKeyBase::length_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (gint) (_value_to_c));
}

static char* _field_string_get (const ::GdkEventKey* obj) { return (char*) obj->string; }
// char* EventKey::string (const ::GdkEventKey* obj);
// char* EventKey::string (const ::GdkEventKey* obj);
std::string base::EventKeyBase::string_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_string_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static guint16 _field_hardware_keycode_get (const ::GdkEventKey* obj) { return (guint16) obj->hardware_keycode; }
// guint16 EventKey::hardware_keycode (const ::GdkEventKey* obj);
// guint16 EventKey::hardware_keycode (const ::GdkEventKey* obj);
guint16 base::EventKeyBase::hardware_keycode_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hardware_keycode_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_hardware_keycode_set (::GdkEventKey* obj, guint16 _value) { obj->hardware_keycode = (decltype(obj->hardware_keycode)) _value; }
//  EventKey::hardware_keycode (::GdkEventKey* obj, guint16 _value);
// void EventKey::hardware_keycode (::GdkEventKey* obj, guint16 _value);
void base::EventKeyBase::hardware_keycode_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_hardware_keycode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (guint16) (_value_to_c));
}

static guint8 _field_group_get (const ::GdkEventKey* obj) { return (guint8) obj->group; }
// guint8 EventKey::group (const ::GdkEventKey* obj);
// guint8 EventKey::group (const ::GdkEventKey* obj);
guint8 base::EventKeyBase::group_ () const noexcept
{
  typedef guint8 (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_group_set (::GdkEventKey* obj, guint8 _value) { obj->group = (decltype(obj->group)) _value; }
//  EventKey::group (::GdkEventKey* obj, guint8 _value);
// void EventKey::group (::GdkEventKey* obj, guint8 _value);
void base::EventKeyBase::group_ (guint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, guint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_group_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (guint8) (_value_to_c));
}

static guint _field_is_modifier_get (const ::GdkEventKey* obj) { return (guint) obj->is_modifier; }
// guint EventKey::is_modifier (const ::GdkEventKey* obj);
// guint EventKey::is_modifier (const ::GdkEventKey* obj);
guint base::EventKeyBase::is_modifier_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GdkEventKey* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_modifier_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventKey*) (gobj_()));
  return _temp_ret;
}

static void _field_is_modifier_set (::GdkEventKey* obj, guint _value) { obj->is_modifier = (decltype(obj->is_modifier)) _value; }
//  EventKey::is_modifier (::GdkEventKey* obj, guint _value);
// void EventKey::is_modifier (::GdkEventKey* obj, guint _value);
void base::EventKeyBase::is_modifier_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventKey* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_modifier_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventKey*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventkey_extra_def_impl.hpp>)
#include <gdk/eventkey_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventkey_extra_impl.hpp>)
#include <gdk/eventkey_extra_impl.hpp>
#endif
#endif

#endif
