// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_EXTENTS_T_HPP_
#define _GI_HARFBUZZ_GLYPH_EXTENTS_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class glyph_extents_t;

namespace base {


#define GI_HARFBUZZ_GLYPH_EXTENTS_T_BASE base::glyph_extents_tBase
class glyph_extents_tBase : public gi::detail::CBoxedWrapper<glyph_extents_tBase, ::hb_glyph_extents_t>
{
typedef gi::detail::CBoxedWrapper<glyph_extents_tBase, ::hb_glyph_extents_t> super_type;
public:

glyph_extents_tBase (std::nullptr_t = nullptr) : super_type() {}

// ::hb_position_t glyph_extents_t::x_bearing (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::x_bearing (const ::hb_glyph_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t x_bearing_ () const noexcept;

//  glyph_extents_t::x_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::x_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void x_bearing_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_extents_t::y_bearing (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::y_bearing (const ::hb_glyph_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t y_bearing_ () const noexcept;

//  glyph_extents_t::y_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::y_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void y_bearing_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_extents_t::width (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::width (const ::hb_glyph_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t width_ () const noexcept;

//  glyph_extents_t::width (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::width (::hb_glyph_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void width_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_extents_t::height (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::height (const ::hb_glyph_extents_t* obj);
GI_INLINE_DECL HarfBuzz::position_t height_ () const noexcept;

//  glyph_extents_t::height (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::height (::hb_glyph_extents_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void height_ (::hb_position_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_extents_t_extra_def.hpp>)
#include <harfbuzz/glyph_extents_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_extents_t_extra.hpp>)
#include <harfbuzz/glyph_extents_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class glyph_extents_t : public GI_HARFBUZZ_GLYPH_EXTENTS_T_BASE
{ typedef GI_HARFBUZZ_GLYPH_EXTENTS_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_glyph_extents_t>
{ typedef HarfBuzz::glyph_extents_t type; }; 

} // namespace repository

} // namespace gi

#endif
