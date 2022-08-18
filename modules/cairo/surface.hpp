// AUTO-GENERATED

#ifndef _GI_CAIRO_SURFACE_HPP_
#define _GI_CAIRO_SURFACE_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Surface;

namespace base {


#define GI_CAIRO_SURFACE_BASE base::SurfaceBase
class SurfaceBase : public gi::detail::GBoxedWrapper<SurfaceBase, ::cairo_surface_t>
{
typedef gi::detail::GBoxedWrapper<SurfaceBase, ::cairo_surface_t> super_type;
public:

SurfaceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_surface_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/surface_extra_def.hpp>)
#include <cairo/surface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/surface_extra.hpp>)
#include <cairo/surface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Surface : public GI_CAIRO_SURFACE_BASE
{ typedef GI_CAIRO_SURFACE_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_surface_t>
{ typedef cairo::Surface type; }; 

} // namespace repository

} // namespace gi

#endif
