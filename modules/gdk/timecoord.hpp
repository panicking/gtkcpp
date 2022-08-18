// AUTO-GENERATED

#ifndef _GI_GDK_TIMECOORD_HPP_
#define _GI_GDK_TIMECOORD_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class TimeCoord;

namespace base {


#define GI_GDK_TIMECOORD_BASE base::TimeCoordBase
class TimeCoordBase : public gi::detail::CBoxedWrapper<TimeCoordBase, ::GdkTimeCoord>
{
typedef gi::detail::CBoxedWrapper<TimeCoordBase, ::GdkTimeCoord> super_type;
public:

TimeCoordBase (std::nullptr_t = nullptr) : super_type() {}

// guint32 TimeCoord::time (const ::GdkTimeCoord* obj);
// guint32 TimeCoord::time (const ::GdkTimeCoord* obj);
GI_INLINE_DECL guint32 time_ () const noexcept;

//  TimeCoord::time (::GdkTimeCoord* obj, guint32 _value);
// void TimeCoord::time (::GdkTimeCoord* obj, guint32 _value);
GI_INLINE_DECL void time_ (guint32 _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra_def.hpp>)
#include <gdk/timecoord_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/timecoord_extra.hpp>)
#include <gdk/timecoord_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class TimeCoord : public GI_GDK_TIMECOORD_BASE
{ typedef GI_GDK_TIMECOORD_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkTimeCoord>
{ typedef Gdk::TimeCoord type; }; 

} // namespace repository

} // namespace gi

#endif
