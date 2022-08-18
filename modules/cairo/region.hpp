// AUTO-GENERATED

#ifndef _GI_CAIRO_REGION_HPP_
#define _GI_CAIRO_REGION_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Region;

namespace base {


#define GI_CAIRO_REGION_BASE base::RegionBase
class RegionBase : public gi::detail::GBoxedWrapper<RegionBase, ::cairo_region_t>
{
typedef gi::detail::GBoxedWrapper<RegionBase, ::cairo_region_t> super_type;
public:

RegionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_region_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/region_extra_def.hpp>)
#include <cairo/region_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/region_extra.hpp>)
#include <cairo/region_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Region : public GI_CAIRO_REGION_BASE
{ typedef GI_CAIRO_REGION_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_region_t>
{ typedef cairo::Region type; }; 

} // namespace repository

} // namespace gi

#endif
