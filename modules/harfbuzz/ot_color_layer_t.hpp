// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_COLOR_LAYER_T_HPP_
#define _GI_HARFBUZZ_OT_COLOR_LAYER_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class ot_color_layer_t;

namespace base {


#define GI_HARFBUZZ_OT_COLOR_LAYER_T_BASE base::ot_color_layer_tBase
class ot_color_layer_tBase : public gi::detail::CBoxedWrapper<ot_color_layer_tBase, ::hb_ot_color_layer_t>
{
typedef gi::detail::CBoxedWrapper<ot_color_layer_tBase, ::hb_ot_color_layer_t> super_type;
public:

ot_color_layer_tBase (std::nullptr_t = nullptr) : super_type() {}

// ::hb_codepoint_t ot_color_layer_t::glyph (const ::hb_ot_color_layer_t* obj);
// ::hb_codepoint_t ot_color_layer_t::glyph (const ::hb_ot_color_layer_t* obj);
GI_INLINE_DECL HarfBuzz::codepoint_t glyph_ () const noexcept;

//  ot_color_layer_t::glyph (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value);
// void ot_color_layer_t::glyph (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value);
GI_INLINE_DECL void glyph_ (::hb_codepoint_t _value) noexcept;

// guint ot_color_layer_t::color_index (const ::hb_ot_color_layer_t* obj);
// guint ot_color_layer_t::color_index (const ::hb_ot_color_layer_t* obj);
GI_INLINE_DECL guint color_index_ () const noexcept;

//  ot_color_layer_t::color_index (::hb_ot_color_layer_t* obj, guint _value);
// void ot_color_layer_t::color_index (::hb_ot_color_layer_t* obj, guint _value);
GI_INLINE_DECL void color_index_ (guint _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_color_layer_t_extra_def.hpp>)
#include <harfbuzz/ot_color_layer_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_color_layer_t_extra.hpp>)
#include <harfbuzz/ot_color_layer_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class ot_color_layer_t : public GI_HARFBUZZ_OT_COLOR_LAYER_T_BASE
{ typedef GI_HARFBUZZ_OT_COLOR_LAYER_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_ot_color_layer_t>
{ typedef HarfBuzz::ot_color_layer_t type; }; 

} // namespace repository

} // namespace gi

#endif
