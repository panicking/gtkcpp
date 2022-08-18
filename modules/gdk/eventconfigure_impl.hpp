// AUTO-GENERATED

#ifndef _GI_GDK_EVENTCONFIGURE_IMPL_HPP_
#define _GI_GDK_EVENTCONFIGURE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventConfigure* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventConfigure::type (const ::GdkEventConfigure* obj);
// ::GdkEventType EventConfigure::type (const ::GdkEventConfigure* obj);
Gdk::EventType base::EventConfigureBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventConfigure* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventConfigure::type (::GdkEventConfigure* obj, ::GdkEventType _value);
// void EventConfigure::type (::GdkEventConfigure* obj, ::GdkEventType _value);
void base::EventConfigureBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventConfigure* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventConfigure::window (const ::GdkEventConfigure* obj);
// ::GdkWindow* EventConfigure::window (const ::GdkEventConfigure* obj);
Gdk::Window base::EventConfigureBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventConfigure* obj) { return (gint8) obj->send_event; }
// gint8 EventConfigure::send_event (const ::GdkEventConfigure* obj);
// gint8 EventConfigure::send_event (const ::GdkEventConfigure* obj);
gint8 base::EventConfigureBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventConfigure* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventConfigure::send_event (::GdkEventConfigure* obj, gint8 _value);
// void EventConfigure::send_event (::GdkEventConfigure* obj, gint8 _value);
void base::EventConfigureBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (gint8) (_value_to_c));
}

static gint _field_x_get (const ::GdkEventConfigure* obj) { return (gint) obj->x; }
// gint EventConfigure::x (const ::GdkEventConfigure* obj);
// gint EventConfigure::x (const ::GdkEventConfigure* obj);
gint base::EventConfigureBase::x_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return _temp_ret;
}

static void _field_x_set (::GdkEventConfigure* obj, gint _value) { obj->x = (decltype(obj->x)) _value; }
//  EventConfigure::x (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::x (::GdkEventConfigure* obj, gint _value);
void base::EventConfigureBase::x_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_y_get (const ::GdkEventConfigure* obj) { return (gint) obj->y; }
// gint EventConfigure::y (const ::GdkEventConfigure* obj);
// gint EventConfigure::y (const ::GdkEventConfigure* obj);
gint base::EventConfigureBase::y_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return _temp_ret;
}

static void _field_y_set (::GdkEventConfigure* obj, gint _value) { obj->y = (decltype(obj->y)) _value; }
//  EventConfigure::y (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::y (::GdkEventConfigure* obj, gint _value);
void base::EventConfigureBase::y_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_width_get (const ::GdkEventConfigure* obj) { return (gint) obj->width; }
// gint EventConfigure::width (const ::GdkEventConfigure* obj);
// gint EventConfigure::width (const ::GdkEventConfigure* obj);
gint base::EventConfigureBase::width_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::GdkEventConfigure* obj, gint _value) { obj->width = (decltype(obj->width)) _value; }
//  EventConfigure::width (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::width (::GdkEventConfigure* obj, gint _value);
void base::EventConfigureBase::width_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_height_get (const ::GdkEventConfigure* obj) { return (gint) obj->height; }
// gint EventConfigure::height (const ::GdkEventConfigure* obj);
// gint EventConfigure::height (const ::GdkEventConfigure* obj);
gint base::EventConfigureBase::height_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventConfigure* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventConfigure*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::GdkEventConfigure* obj, gint _value) { obj->height = (decltype(obj->height)) _value; }
//  EventConfigure::height (::GdkEventConfigure* obj, gint _value);
// void EventConfigure::height (::GdkEventConfigure* obj, gint _value);
void base::EventConfigureBase::height_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventConfigure* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventConfigure*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventconfigure_extra_def_impl.hpp>)
#include <gdk/eventconfigure_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventconfigure_extra_impl.hpp>)
#include <gdk/eventconfigure_extra_impl.hpp>
#endif
#endif

#endif
