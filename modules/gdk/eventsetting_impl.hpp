// AUTO-GENERATED

#ifndef _GI_GDK_EVENTSETTING_IMPL_HPP_
#define _GI_GDK_EVENTSETTING_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventSetting* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventSetting::type (const ::GdkEventSetting* obj);
// ::GdkEventType EventSetting::type (const ::GdkEventSetting* obj);
Gdk::EventType base::EventSettingBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventSetting* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSetting*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventSetting* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventSetting::type (::GdkEventSetting* obj, ::GdkEventType _value);
// void EventSetting::type (::GdkEventSetting* obj, ::GdkEventType _value);
void base::EventSettingBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSetting* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventSetting*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventSetting* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventSetting::window (const ::GdkEventSetting* obj);
// ::GdkWindow* EventSetting::window (const ::GdkEventSetting* obj);
Gdk::Window base::EventSettingBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventSetting* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSetting*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventSetting* obj) { return (gint8) obj->send_event; }
// gint8 EventSetting::send_event (const ::GdkEventSetting* obj);
// gint8 EventSetting::send_event (const ::GdkEventSetting* obj);
gint8 base::EventSettingBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventSetting* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSetting*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventSetting* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventSetting::send_event (::GdkEventSetting* obj, gint8 _value);
// void EventSetting::send_event (::GdkEventSetting* obj, gint8 _value);
void base::EventSettingBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSetting* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventSetting*) (gobj_()), (gint8) (_value_to_c));
}

static ::GdkSettingAction _field_action_get (const ::GdkEventSetting* obj) { return (::GdkSettingAction) obj->action; }
// ::GdkSettingAction EventSetting::action (const ::GdkEventSetting* obj);
// ::GdkSettingAction EventSetting::action (const ::GdkEventSetting* obj);
Gdk::SettingAction base::EventSettingBase::action_ () const noexcept
{
  typedef ::GdkSettingAction (*call_wrap_t) (const ::GdkEventSetting* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_action_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSetting*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_action_set (::GdkEventSetting* obj, ::GdkSettingAction _value) { obj->action = (decltype(obj->action)) _value; }
//  EventSetting::action (::GdkEventSetting* obj, ::GdkSettingAction _value);
// void EventSetting::action (::GdkEventSetting* obj, ::GdkSettingAction _value);
void base::EventSettingBase::action_ (Gdk::SettingAction _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventSetting* obj, ::GdkSettingAction _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_action_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventSetting*) (gobj_()), (::GdkSettingAction) (_value_to_c));
}

static char* _field_name_get (const ::GdkEventSetting* obj) { return (char*) obj->name; }
// char* EventSetting::name (const ::GdkEventSetting* obj);
// char* EventSetting::name (const ::GdkEventSetting* obj);
std::string base::EventSettingBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GdkEventSetting* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventSetting*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventsetting_extra_def_impl.hpp>)
#include <gdk/eventsetting_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventsetting_extra_impl.hpp>)
#include <gdk/eventsetting_extra_impl.hpp>
#endif
#endif

#endif
