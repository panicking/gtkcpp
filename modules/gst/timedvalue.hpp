// AUTO-GENERATED

#ifndef _GI_GST_TIMEDVALUE_HPP_
#define _GI_GST_TIMEDVALUE_HPP_


namespace gi {

namespace repository {

namespace Gst {


class TimedValue;

namespace base {


#define GI_GST_TIMEDVALUE_BASE base::TimedValueBase
class TimedValueBase : public gi::detail::CBoxedWrapper<TimedValueBase, ::GstTimedValue>
{
typedef gi::detail::CBoxedWrapper<TimedValueBase, ::GstTimedValue> super_type;
public:

TimedValueBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstClockTime TimedValue::timestamp (const ::GstTimedValue* obj);
// ::GstClockTime TimedValue::timestamp (const ::GstTimedValue* obj);
GI_INLINE_DECL Gst::ClockTime timestamp_ () const noexcept;

//  TimedValue::timestamp (::GstTimedValue* obj, ::GstClockTime _value);
// void TimedValue::timestamp (::GstTimedValue* obj, ::GstClockTime _value);
GI_INLINE_DECL void timestamp_ (::GstClockTime _value) noexcept;

// gdouble TimedValue::value (const ::GstTimedValue* obj);
// gdouble TimedValue::value (const ::GstTimedValue* obj);
GI_INLINE_DECL gdouble value_ () const noexcept;

//  TimedValue::value (::GstTimedValue* obj, gdouble _value);
// void TimedValue::value (::GstTimedValue* obj, gdouble _value);
GI_INLINE_DECL void value_ (gdouble _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/timedvalue_extra_def.hpp>)
#include <gst/timedvalue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/timedvalue_extra.hpp>)
#include <gst/timedvalue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class TimedValue : public GI_GST_TIMEDVALUE_BASE
{ typedef GI_GST_TIMEDVALUE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstTimedValue>
{ typedef Gst::TimedValue type; }; 

} // namespace repository

} // namespace gi

#endif
