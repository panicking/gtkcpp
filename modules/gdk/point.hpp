// AUTO-GENERATED

#ifndef _GI_GDK_POINT_HPP_
#define _GI_GDK_POINT_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class Point;

namespace base {


#define GI_GDK_POINT_BASE base::PointBase
class PointBase : public gi::detail::CBoxedWrapper<PointBase, ::GdkPoint>
{
typedef gi::detail::CBoxedWrapper<PointBase, ::GdkPoint> super_type;
public:

PointBase (std::nullptr_t = nullptr) : super_type() {}

// gint Point::x (const ::GdkPoint* obj);
// gint Point::x (const ::GdkPoint* obj);
GI_INLINE_DECL gint x_ () const noexcept;

//  Point::x (::GdkPoint* obj, gint _value);
// void Point::x (::GdkPoint* obj, gint _value);
GI_INLINE_DECL void x_ (gint _value) noexcept;

// gint Point::y (const ::GdkPoint* obj);
// gint Point::y (const ::GdkPoint* obj);
GI_INLINE_DECL gint y_ () const noexcept;

//  Point::y (::GdkPoint* obj, gint _value);
// void Point::y (::GdkPoint* obj, gint _value);
GI_INLINE_DECL void y_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/point_extra_def.hpp>)
#include <gdk/point_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/point_extra.hpp>)
#include <gdk/point_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Point : public GI_GDK_POINT_BASE
{ typedef GI_GDK_POINT_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkPoint>
{ typedef Gdk::Point type; }; 

} // namespace repository

} // namespace gi

#endif
