// AUTO-GENERATED

#ifndef _GI_GDK_EVENTEXPOSE_IMPL_HPP_
#define _GI_GDK_EVENTEXPOSE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

static ::GdkEventType _field_type_get (const ::GdkEventExpose* obj) { return (::GdkEventType) obj->type; }
// ::GdkEventType EventExpose::type (const ::GdkEventExpose* obj);
// ::GdkEventType EventExpose::type (const ::GdkEventExpose* obj);
Gdk::EventType base::EventExposeBase::type_ () const noexcept
{
  typedef ::GdkEventType (*call_wrap_t) (const ::GdkEventExpose* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventExpose*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GdkEventExpose* obj, ::GdkEventType _value) { obj->type = (decltype(obj->type)) _value; }
//  EventExpose::type (::GdkEventExpose* obj, ::GdkEventType _value);
// void EventExpose::type (::GdkEventExpose* obj, ::GdkEventType _value);
void base::EventExposeBase::type_ (Gdk::EventType _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventExpose* obj, ::GdkEventType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GdkEventExpose*) (gobj_()), (::GdkEventType) (_value_to_c));
}

static ::GdkWindow* _field_window_get (const ::GdkEventExpose* obj) { return (::GdkWindow*) obj->window; }
// ::GdkWindow* EventExpose::window (const ::GdkEventExpose* obj);
// ::GdkWindow* EventExpose::window (const ::GdkEventExpose* obj);
Gdk::Window base::EventExposeBase::window_ () const noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (const ::GdkEventExpose* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_window_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventExpose*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint8 _field_send_event_get (const ::GdkEventExpose* obj) { return (gint8) obj->send_event; }
// gint8 EventExpose::send_event (const ::GdkEventExpose* obj);
// gint8 EventExpose::send_event (const ::GdkEventExpose* obj);
gint8 base::EventExposeBase::send_event_ () const noexcept
{
  typedef gint8 (*call_wrap_t) (const ::GdkEventExpose* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventExpose*) (gobj_()));
  return _temp_ret;
}

static void _field_send_event_set (::GdkEventExpose* obj, gint8 _value) { obj->send_event = (decltype(obj->send_event)) _value; }
//  EventExpose::send_event (::GdkEventExpose* obj, gint8 _value);
// void EventExpose::send_event (::GdkEventExpose* obj, gint8 _value);
void base::EventExposeBase::send_event_ (gint8 _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventExpose* obj, gint8 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_send_event_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventExpose*) (gobj_()), (gint8) (_value_to_c));
}

static ::cairo_region_t* _field_region_get (const ::GdkEventExpose* obj) { return (::cairo_region_t*) obj->region; }
// ::cairo_region_t* EventExpose::region (const ::GdkEventExpose* obj);
// ::cairo_region_t* EventExpose::region (const ::GdkEventExpose* obj);
cairo::Region base::EventExposeBase::region_ () const noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (const ::GdkEventExpose* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_region_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventExpose*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint _field_count_get (const ::GdkEventExpose* obj) { return (gint) obj->count; }
// gint EventExpose::count (const ::GdkEventExpose* obj);
// gint EventExpose::count (const ::GdkEventExpose* obj);
gint base::EventExposeBase::count_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GdkEventExpose* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_count_get;
  auto _temp_ret = call_wrap_v ((const ::GdkEventExpose*) (gobj_()));
  return _temp_ret;
}

static void _field_count_set (::GdkEventExpose* obj, gint _value) { obj->count = (decltype(obj->count)) _value; }
//  EventExpose::count (::GdkEventExpose* obj, gint _value);
// void EventExpose::count (::GdkEventExpose* obj, gint _value);
void base::EventExposeBase::count_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GdkEventExpose* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_count_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GdkEventExpose*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/eventexpose_extra_def_impl.hpp>)
#include <gdk/eventexpose_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/eventexpose_extra_impl.hpp>)
#include <gdk/eventexpose_extra_impl.hpp>
#endif
#endif

#endif
