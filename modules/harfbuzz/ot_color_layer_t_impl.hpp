// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_COLOR_LAYER_T_IMPL_HPP_
#define _GI_HARFBUZZ_OT_COLOR_LAYER_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_codepoint_t _field_glyph_get (const ::hb_ot_color_layer_t* obj) { return (::hb_codepoint_t) obj->glyph; }
// ::hb_codepoint_t ot_color_layer_t::glyph (const ::hb_ot_color_layer_t* obj);
// ::hb_codepoint_t ot_color_layer_t::glyph (const ::hb_ot_color_layer_t* obj);
HarfBuzz::codepoint_t base::ot_color_layer_tBase::glyph_ () const noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_ot_color_layer_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_color_layer_t*) (gobj_()));
  return _temp_ret;
}

static void _field_glyph_set (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value) { obj->glyph = (decltype(obj->glyph)) _value; }
//  ot_color_layer_t::glyph (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value);
// void ot_color_layer_t::glyph (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value);
void base::ot_color_layer_tBase::glyph_ (::hb_codepoint_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_color_layer_t* obj, ::hb_codepoint_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_color_layer_t*) (gobj_()), (::hb_codepoint_t) (_value_to_c));
}

static guint _field_color_index_get (const ::hb_ot_color_layer_t* obj) { return (guint) obj->color_index; }
// guint ot_color_layer_t::color_index (const ::hb_ot_color_layer_t* obj);
// guint ot_color_layer_t::color_index (const ::hb_ot_color_layer_t* obj);
guint base::ot_color_layer_tBase::color_index_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::hb_ot_color_layer_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_color_index_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_color_layer_t*) (gobj_()));
  return _temp_ret;
}

static void _field_color_index_set (::hb_ot_color_layer_t* obj, guint _value) { obj->color_index = (decltype(obj->color_index)) _value; }
//  ot_color_layer_t::color_index (::hb_ot_color_layer_t* obj, guint _value);
// void ot_color_layer_t::color_index (::hb_ot_color_layer_t* obj, guint _value);
void base::ot_color_layer_tBase::color_index_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_color_layer_t* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_color_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_color_layer_t*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_color_layer_t_extra_def_impl.hpp>)
#include <harfbuzz/ot_color_layer_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_color_layer_t_extra_impl.hpp>)
#include <harfbuzz/ot_color_layer_t_extra_impl.hpp>
#endif
#endif

#endif
