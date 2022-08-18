// AUTO-GENERATED

#ifndef _GI_GST_TIMEDVALUE_IMPL_HPP_
#define _GI_GST_TIMEDVALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstClockTime _field_timestamp_get (const ::GstTimedValue* obj) { return (::GstClockTime) obj->timestamp; }
// ::GstClockTime TimedValue::timestamp (const ::GstTimedValue* obj);
// ::GstClockTime TimedValue::timestamp (const ::GstTimedValue* obj);
Gst::ClockTime base::TimedValueBase::timestamp_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstTimedValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_get;
  auto _temp_ret = call_wrap_v ((const ::GstTimedValue*) (gobj_()));
  return _temp_ret;
}

static void _field_timestamp_set (::GstTimedValue* obj, ::GstClockTime _value) { obj->timestamp = (decltype(obj->timestamp)) _value; }
//  TimedValue::timestamp (::GstTimedValue* obj, ::GstClockTime _value);
// void TimedValue::timestamp (::GstTimedValue* obj, ::GstClockTime _value);
void base::TimedValueBase::timestamp_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstTimedValue* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstTimedValue*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static gdouble _field_value_get (const ::GstTimedValue* obj) { return (gdouble) obj->value; }
// gdouble TimedValue::value (const ::GstTimedValue* obj);
// gdouble TimedValue::value (const ::GstTimedValue* obj);
gdouble base::TimedValueBase::value_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::GstTimedValue* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GstTimedValue*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::GstTimedValue* obj, gdouble _value) { obj->value = (decltype(obj->value)) _value; }
//  TimedValue::value (::GstTimedValue* obj, gdouble _value);
// void TimedValue::value (::GstTimedValue* obj, gdouble _value);
void base::TimedValueBase::value_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::GstTimedValue* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstTimedValue*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/timedvalue_extra_def_impl.hpp>)
#include <gst/timedvalue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/timedvalue_extra_impl.hpp>)
#include <gst/timedvalue_extra_impl.hpp>
#endif
#endif

#endif
