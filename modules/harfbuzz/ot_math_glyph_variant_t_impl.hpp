// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_MATH_GLYPH_VARIANT_T_IMPL_HPP_
#define _GI_HARFBUZZ_OT_MATH_GLYPH_VARIANT_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_codepoint_t _field_glyph_get (const ::hb_ot_math_glyph_variant_t* obj) { return (::hb_codepoint_t) obj->glyph; }
// ::hb_codepoint_t ot_math_glyph_variant_t::glyph (const ::hb_ot_math_glyph_variant_t* obj);
// ::hb_codepoint_t ot_math_glyph_variant_t::glyph (const ::hb_ot_math_glyph_variant_t* obj);
HarfBuzz::codepoint_t base::ot_math_glyph_variant_tBase::glyph_ () const noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_ot_math_glyph_variant_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_variant_t*) (gobj_()));
  return _temp_ret;
}

static void _field_glyph_set (::hb_ot_math_glyph_variant_t* obj, ::hb_codepoint_t _value) { obj->glyph = (decltype(obj->glyph)) _value; }
//  ot_math_glyph_variant_t::glyph (::hb_ot_math_glyph_variant_t* obj, ::hb_codepoint_t _value);
// void ot_math_glyph_variant_t::glyph (::hb_ot_math_glyph_variant_t* obj, ::hb_codepoint_t _value);
void base::ot_math_glyph_variant_tBase::glyph_ (::hb_codepoint_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_variant_t* obj, ::hb_codepoint_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_variant_t*) (gobj_()), (::hb_codepoint_t) (_value_to_c));
}

static ::hb_position_t _field_advance_get (const ::hb_ot_math_glyph_variant_t* obj) { return (::hb_position_t) obj->advance; }
// ::hb_position_t ot_math_glyph_variant_t::advance (const ::hb_ot_math_glyph_variant_t* obj);
// ::hb_position_t ot_math_glyph_variant_t::advance (const ::hb_ot_math_glyph_variant_t* obj);
HarfBuzz::position_t base::ot_math_glyph_variant_tBase::advance_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_ot_math_glyph_variant_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_advance_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_variant_t*) (gobj_()));
  return _temp_ret;
}

static void _field_advance_set (::hb_ot_math_glyph_variant_t* obj, ::hb_position_t _value) { obj->advance = (decltype(obj->advance)) _value; }
//  ot_math_glyph_variant_t::advance (::hb_ot_math_glyph_variant_t* obj, ::hb_position_t _value);
// void ot_math_glyph_variant_t::advance (::hb_ot_math_glyph_variant_t* obj, ::hb_position_t _value);
void base::ot_math_glyph_variant_tBase::advance_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_variant_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_advance_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_variant_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_variant_t_extra_def_impl.hpp>)
#include <harfbuzz/ot_math_glyph_variant_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_variant_t_extra_impl.hpp>)
#include <harfbuzz/ot_math_glyph_variant_t_extra_impl.hpp>
#endif
#endif

#endif
