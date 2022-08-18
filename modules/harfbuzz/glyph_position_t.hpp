// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_POSITION_T_HPP_
#define _GI_HARFBUZZ_GLYPH_POSITION_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class glyph_position_t;

namespace base {


#define GI_HARFBUZZ_GLYPH_POSITION_T_BASE base::glyph_position_tBase
class glyph_position_tBase : public gi::detail::GBoxedWrapper<glyph_position_tBase, ::hb_glyph_position_t>
{
typedef gi::detail::GBoxedWrapper<glyph_position_tBase, ::hb_glyph_position_t> super_type;
public:

glyph_position_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_glyph_position_get_type(); } 

// ::hb_position_t glyph_position_t::x_advance (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::x_advance (const ::hb_glyph_position_t* obj);
GI_INLINE_DECL HarfBuzz::position_t x_advance_ () const noexcept;

//  glyph_position_t::x_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::x_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void x_advance_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_position_t::y_advance (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::y_advance (const ::hb_glyph_position_t* obj);
GI_INLINE_DECL HarfBuzz::position_t y_advance_ () const noexcept;

//  glyph_position_t::y_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::y_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void y_advance_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_position_t::x_offset (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::x_offset (const ::hb_glyph_position_t* obj);
GI_INLINE_DECL HarfBuzz::position_t x_offset_ () const noexcept;

//  glyph_position_t::x_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::x_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void x_offset_ (::hb_position_t _value) noexcept;

// ::hb_position_t glyph_position_t::y_offset (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::y_offset (const ::hb_glyph_position_t* obj);
GI_INLINE_DECL HarfBuzz::position_t y_offset_ () const noexcept;

//  glyph_position_t::y_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::y_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void y_offset_ (::hb_position_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_position_t_extra_def.hpp>)
#include <harfbuzz/glyph_position_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_position_t_extra.hpp>)
#include <harfbuzz/glyph_position_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class glyph_position_t : public GI_HARFBUZZ_GLYPH_POSITION_T_BASE
{ typedef GI_HARFBUZZ_GLYPH_POSITION_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_glyph_position_t>
{ typedef HarfBuzz::glyph_position_t type; }; 

} // namespace repository

} // namespace gi

#endif
