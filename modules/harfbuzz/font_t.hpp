// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_FONT_T_HPP_
#define _GI_HARFBUZZ_FONT_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class font_t;

namespace base {


#define GI_HARFBUZZ_FONT_T_BASE base::font_tBase
class font_tBase : public gi::detail::GBoxedWrapper<font_tBase, ::hb_font_t>
{
typedef gi::detail::GBoxedWrapper<font_tBase, ::hb_font_t> super_type;
public:

font_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_font_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/font_t_extra_def.hpp>)
#include <harfbuzz/font_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/font_t_extra.hpp>)
#include <harfbuzz/font_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class font_t : public GI_HARFBUZZ_FONT_T_BASE
{ typedef GI_HARFBUZZ_FONT_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_font_t>
{ typedef HarfBuzz::font_t type; }; 

} // namespace repository

} // namespace gi

#endif
