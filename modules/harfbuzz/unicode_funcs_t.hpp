// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_UNICODE_FUNCS_T_HPP_
#define _GI_HARFBUZZ_UNICODE_FUNCS_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class unicode_funcs_t;

namespace base {


#define GI_HARFBUZZ_UNICODE_FUNCS_T_BASE base::unicode_funcs_tBase
class unicode_funcs_tBase : public gi::detail::GBoxedWrapper<unicode_funcs_tBase, ::hb_unicode_funcs_t>
{
typedef gi::detail::GBoxedWrapper<unicode_funcs_tBase, ::hb_unicode_funcs_t> super_type;
public:

unicode_funcs_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_unicode_funcs_get_type(); } 

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/unicode_funcs_t_extra_def.hpp>)
#include <harfbuzz/unicode_funcs_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/unicode_funcs_t_extra.hpp>)
#include <harfbuzz/unicode_funcs_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class unicode_funcs_t : public GI_HARFBUZZ_UNICODE_FUNCS_T_BASE
{ typedef GI_HARFBUZZ_UNICODE_FUNCS_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_unicode_funcs_t>
{ typedef HarfBuzz::unicode_funcs_t type; }; 

} // namespace repository

} // namespace gi

#endif
