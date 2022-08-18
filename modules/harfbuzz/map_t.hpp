// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_MAP_T_HPP_
#define _GI_HARFBUZZ_MAP_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class map_t;

namespace base {


#define GI_HARFBUZZ_MAP_T_BASE base::map_tBase
class map_tBase : public gi::detail::GBoxedWrapper<map_tBase, ::hb_map_t>
{
typedef gi::detail::GBoxedWrapper<map_tBase, ::hb_map_t> super_type;
public:

map_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_map_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/map_t_extra_def.hpp>)
#include <harfbuzz/map_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/map_t_extra.hpp>)
#include <harfbuzz/map_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class map_t : public GI_HARFBUZZ_MAP_T_BASE
{ typedef GI_HARFBUZZ_MAP_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_map_t>
{ typedef HarfBuzz::map_t type; }; 

} // namespace repository

} // namespace gi

#endif
