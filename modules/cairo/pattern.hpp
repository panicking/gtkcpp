// AUTO-GENERATED

#ifndef _GI_CAIRO_PATTERN_HPP_
#define _GI_CAIRO_PATTERN_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Pattern;

namespace base {


#define GI_CAIRO_PATTERN_BASE base::PatternBase
class PatternBase : public gi::detail::GBoxedWrapper<PatternBase, ::cairo_pattern_t>
{
typedef gi::detail::GBoxedWrapper<PatternBase, ::cairo_pattern_t> super_type;
public:

PatternBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_pattern_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/pattern_extra_def.hpp>)
#include <cairo/pattern_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/pattern_extra.hpp>)
#include <cairo/pattern_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Pattern : public GI_CAIRO_PATTERN_BASE
{ typedef GI_CAIRO_PATTERN_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_pattern_t>
{ typedef cairo::Pattern type; }; 

} // namespace repository

} // namespace gi

#endif
