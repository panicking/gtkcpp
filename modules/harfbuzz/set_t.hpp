// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_SET_T_HPP_
#define _GI_HARFBUZZ_SET_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class set_t;

namespace base {


#define GI_HARFBUZZ_SET_T_BASE base::set_tBase
class set_tBase : public gi::detail::GBoxedWrapper<set_tBase, ::hb_set_t>
{
typedef gi::detail::GBoxedWrapper<set_tBase, ::hb_set_t> super_type;
public:

set_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_set_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/set_t_extra_def.hpp>)
#include <harfbuzz/set_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/set_t_extra.hpp>)
#include <harfbuzz/set_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class set_t : public GI_HARFBUZZ_SET_T_BASE
{ typedef GI_HARFBUZZ_SET_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_set_t>
{ typedef HarfBuzz::set_t type; }; 

} // namespace repository

} // namespace gi

#endif
