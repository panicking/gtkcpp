// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_FONT_EXTENTS_T_HPP_
#define _GI_HARFBUZZ_FONT_EXTENTS_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class font_extents_t;

namespace base {


#define GI_HARFBUZZ_FONT_EXTENTS_T_BASE base::font_extents_tBase
class font_extents_tBase : public gi::detail::CBoxedWrapper<font_extents_tBase, ::hb_font_extents_t>
{
typedef gi::detail::CBoxedWrapper<font_extents_tBase, ::hb_font_extents_t> super_type;
public:

font_extents_tBase (std::nullptr_t = nullptr) : super_type() {}

// ::hb_position_t font_extents_t::ascender (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::ascender (const ::hb_font_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t ascender_ () const noexcept;

//  font_extents_t::ascender (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::ascender (::hb_font_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void ascender_ (::hb_position_t _value) noexcept;

// ::hb_position_t font_extents_t::descender (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::descender (const ::hb_font_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t descender_ () const noexcept;

//  font_extents_t::descender (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::descender (::hb_font_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void descender_ (::hb_position_t _value) noexcept;

// ::hb_position_t font_extents_t::line_gap (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::line_gap (const ::hb_font_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t line_gap_ () const noexcept;

//  font_extents_t::line_gap (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::line_gap (::hb_font_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void line_gap_ (::hb_position_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/font_extents_t_extra_def.hpp>)
#include <harfbuzz/font_extents_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/font_extents_t_extra.hpp>)
#include <harfbuzz/font_extents_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class font_extents_t : public GI_HARFBUZZ_FONT_EXTENTS_T_BASE
{ typedef GI_HARFBUZZ_FONT_EXTENTS_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_font_extents_t>
{ typedef HarfBuzz::font_extents_t type; }; 

} // namespace repository

} // namespace gi

#endif
