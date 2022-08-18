// AUTO-GENERATED

#ifndef _GI_CAIRO_CONTEXT_HPP_
#define _GI_CAIRO_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace cairo {


class Context;

namespace base {


#define GI_CAIRO_CONTEXT_BASE base::ContextBase
class ContextBase : public gi::detail::GBoxedWrapper<ContextBase, ::cairo_t>
{
typedef gi::detail::GBoxedWrapper<ContextBase, ::cairo_t> super_type;
public:

ContextBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return cairo_gobject_context_get_type(); } 

}; // class

} // namespace base

} // namespace cairo

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<cairo/context_extra_def.hpp>)
#include <cairo/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<cairo/context_extra.hpp>)
#include <cairo/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace cairo {

class Context : public GI_CAIRO_CONTEXT_BASE
{ typedef GI_CAIRO_CONTEXT_BASE super_type; using super_type::super_type; };

} // namespace cairo

template<> struct declare_cpptype_of<::cairo_t>
{ typedef cairo::Context type; }; 

} // namespace repository

} // namespace gi

#endif
