// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_SHAPE_PLAN_T_HPP_
#define _GI_HARFBUZZ_SHAPE_PLAN_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class shape_plan_t;

namespace base {


#define GI_HARFBUZZ_SHAPE_PLAN_T_BASE base::shape_plan_tBase
class shape_plan_tBase : public gi::detail::GBoxedWrapper<shape_plan_tBase, ::hb_shape_plan_t>
{
typedef gi::detail::GBoxedWrapper<shape_plan_tBase, ::hb_shape_plan_t> super_type;
public:

shape_plan_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_shape_plan_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/shape_plan_t_extra_def.hpp>)
#include <harfbuzz/shape_plan_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/shape_plan_t_extra.hpp>)
#include <harfbuzz/shape_plan_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class shape_plan_t : public GI_HARFBUZZ_SHAPE_PLAN_T_BASE
{ typedef GI_HARFBUZZ_SHAPE_PLAN_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_shape_plan_t>
{ typedef HarfBuzz::shape_plan_t type; }; 

} // namespace repository

} // namespace gi

#endif
