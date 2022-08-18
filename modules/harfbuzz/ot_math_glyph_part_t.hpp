// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_HPP_
#define _GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_HPP_


namespace gi {

namespace repository {

namespace HarfBuzz {


class ot_math_glyph_part_t;

namespace base {


#define GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_BASE base::ot_math_glyph_part_tBase
class ot_math_glyph_part_tBase : public gi::detail::GBoxedWrapper<ot_math_glyph_part_tBase, ::hb_ot_math_glyph_part_t>
{
typedef gi::detail::GBoxedWrapper<ot_math_glyph_part_tBase, ::hb_ot_math_glyph_part_t> super_type;
public:

ot_math_glyph_part_tBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return hb_gobject_ot_math_glyph_part_get_type(); } 

// ::hb_codepoint_t ot_math_glyph_part_t::glyph (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_codepoint_t ot_math_glyph_part_t::glyph (const ::hb_ot_math_glyph_part_t* obj);
GI_INLINE_DECL HarfBuzz::codepoint_t glyph_ () const noexcept;

//  ot_math_glyph_part_t::glyph (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value);
// void ot_math_glyph_part_t::glyph (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value);
GI_INLINE_DECL void glyph_ (::hb_codepoint_t _value) noexcept;

// ::hb_position_t ot_math_glyph_part_t::start_connector_length (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::start_connector_length (const ::hb_ot_math_glyph_part_t* obj);
GI_INLINE_DECL HarfBuzz::position_t start_connector_length_ () const noexcept;

//  ot_math_glyph_part_t::start_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::start_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void start_connector_length_ (::hb_position_t _value) noexcept;

// ::hb_position_t ot_math_glyph_part_t::end_connector_length (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::end_connector_length (const ::hb_ot_math_glyph_part_t* obj);
GI_INLINE_DECL HarfBuzz::position_t end_connector_length_ () const noexcept;

//  ot_math_glyph_part_t::end_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::end_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void end_connector_length_ (::hb_position_t _value) noexcept;

// ::hb_position_t ot_math_glyph_part_t::full_advance (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::full_advance (const ::hb_ot_math_glyph_part_t* obj);
GI_INLINE_DECL HarfBuzz::position_t full_advance_ () const noexcept;

//  ot_math_glyph_part_t::full_advance (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::full_advance (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
GI_INLINE_DECL void full_advance_ (::hb_position_t _value) noexcept;

// ::hb_ot_math_glyph_part_flags_t ot_math_glyph_part_t::flags (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_ot_math_glyph_part_flags_t ot_math_glyph_part_t::flags (const ::hb_ot_math_glyph_part_t* obj);
GI_INLINE_DECL HarfBuzz::ot_math_glyph_part_flags_t flags_ () const noexcept;

//  ot_math_glyph_part_t::flags (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value);
// void ot_math_glyph_part_t::flags (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value);
GI_INLINE_DECL void flags_ (HarfBuzz::ot_math_glyph_part_flags_t _value) noexcept;

}; // class

} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_part_t_extra_def.hpp>)
#include <harfbuzz/ot_math_glyph_part_t_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_part_t_extra.hpp>)
#include <harfbuzz/ot_math_glyph_part_t_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace HarfBuzz {

class ot_math_glyph_part_t : public GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_BASE
{ typedef GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_BASE super_type; using super_type::super_type; };

} // namespace HarfBuzz

template<> struct declare_cpptype_of<::hb_ot_math_glyph_part_t>
{ typedef HarfBuzz::ot_math_glyph_part_t type; }; 

} // namespace repository

} // namespace gi

#endif
