// AUTO-GENERATED

#ifndef _GI_GDK_GEOMETRY_HPP_
#define _GI_GDK_GEOMETRY_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class Geometry;

namespace base {


#define GI_GDK_GEOMETRY_BASE base::GeometryBase
class GeometryBase : public gi::detail::CBoxedWrapper<GeometryBase, ::GdkGeometry>
{
typedef gi::detail::CBoxedWrapper<GeometryBase, ::GdkGeometry> super_type;
public:

GeometryBase (std::nullptr_t = nullptr) : super_type() {}

// gint Geometry::min_width (const ::GdkGeometry* obj);
// gint Geometry::min_width (const ::GdkGeometry* obj);
GI_INLINE_DECL gint min_width_ () const noexcept;

//  Geometry::min_width (::GdkGeometry* obj, gint _value);
// void Geometry::min_width (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void min_width_ (gint _value) noexcept;

// gint Geometry::min_height (const ::GdkGeometry* obj);
// gint Geometry::min_height (const ::GdkGeometry* obj);
GI_INLINE_DECL gint min_height_ () const noexcept;

//  Geometry::min_height (::GdkGeometry* obj, gint _value);
// void Geometry::min_height (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void min_height_ (gint _value) noexcept;

// gint Geometry::max_width (const ::GdkGeometry* obj);
// gint Geometry::max_width (const ::GdkGeometry* obj);
GI_INLINE_DECL gint max_width_ () const noexcept;

//  Geometry::max_width (::GdkGeometry* obj, gint _value);
// void Geometry::max_width (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void max_width_ (gint _value) noexcept;

// gint Geometry::max_height (const ::GdkGeometry* obj);
// gint Geometry::max_height (const ::GdkGeometry* obj);
GI_INLINE_DECL gint max_height_ () const noexcept;

//  Geometry::max_height (::GdkGeometry* obj, gint _value);
// void Geometry::max_height (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void max_height_ (gint _value) noexcept;

// gint Geometry::base_width (const ::GdkGeometry* obj);
// gint Geometry::base_width (const ::GdkGeometry* obj);
GI_INLINE_DECL gint base_width_ () const noexcept;

//  Geometry::base_width (::GdkGeometry* obj, gint _value);
// void Geometry::base_width (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void base_width_ (gint _value) noexcept;

// gint Geometry::base_height (const ::GdkGeometry* obj);
// gint Geometry::base_height (const ::GdkGeometry* obj);
GI_INLINE_DECL gint base_height_ () const noexcept;

//  Geometry::base_height (::GdkGeometry* obj, gint _value);
// void Geometry::base_height (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void base_height_ (gint _value) noexcept;

// gint Geometry::width_inc (const ::GdkGeometry* obj);
// gint Geometry::width_inc (const ::GdkGeometry* obj);
GI_INLINE_DECL gint width_inc_ () const noexcept;

//  Geometry::width_inc (::GdkGeometry* obj, gint _value);
// void Geometry::width_inc (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void width_inc_ (gint _value) noexcept;

// gint Geometry::height_inc (const ::GdkGeometry* obj);
// gint Geometry::height_inc (const ::GdkGeometry* obj);
GI_INLINE_DECL gint height_inc_ () const noexcept;

//  Geometry::height_inc (::GdkGeometry* obj, gint _value);
// void Geometry::height_inc (::GdkGeometry* obj, gint _value);
GI_INLINE_DECL void height_inc_ (gint _value) noexcept;

// gdouble Geometry::min_aspect (const ::GdkGeometry* obj);
// gdouble Geometry::min_aspect (const ::GdkGeometry* obj);
GI_INLINE_DECL gdouble min_aspect_ () const noexcept;

//  Geometry::min_aspect (::GdkGeometry* obj, gdouble _value);
// void Geometry::min_aspect (::GdkGeometry* obj, gdouble _value);
GI_INLINE_DECL void min_aspect_ (gdouble _value) noexcept;

// gdouble Geometry::max_aspect (const ::GdkGeometry* obj);
// gdouble Geometry::max_aspect (const ::GdkGeometry* obj);
GI_INLINE_DECL gdouble max_aspect_ () const noexcept;

//  Geometry::max_aspect (::GdkGeometry* obj, gdouble _value);
// void Geometry::max_aspect (::GdkGeometry* obj, gdouble _value);
GI_INLINE_DECL void max_aspect_ (gdouble _value) noexcept;

// ::GdkGravity Geometry::win_gravity (const ::GdkGeometry* obj);
// ::GdkGravity Geometry::win_gravity (const ::GdkGeometry* obj);
GI_INLINE_DECL Gdk::Gravity win_gravity_ () const noexcept;

//  Geometry::win_gravity (::GdkGeometry* obj, ::GdkGravity _value);
// void Geometry::win_gravity (::GdkGeometry* obj, ::GdkGravity _value);
GI_INLINE_DECL void win_gravity_ (Gdk::Gravity _value) noexcept;

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/geometry_extra_def.hpp>)
#include <gdk/geometry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/geometry_extra.hpp>)
#include <gdk/geometry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Geometry : public GI_GDK_GEOMETRY_BASE
{ typedef GI_GDK_GEOMETRY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkGeometry>
{ typedef Gdk::Geometry type; }; 

} // namespace repository

} // namespace gi

#endif
