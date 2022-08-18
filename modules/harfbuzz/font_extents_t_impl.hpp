// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_FONT_EXTENTS_T_IMPL_HPP_
#define _GI_HARFBUZZ_FONT_EXTENTS_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_position_t _field_ascender_get (const ::hb_font_extents_t* obj) { return (::hb_position_t) obj->ascender; }
// ::hb_position_t font_extents_t::ascender (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::ascender (const ::hb_font_extents_t* obj);
HarfBuzz::position_t base::font_extents_tBase::ascender_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_font_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ascender_get;
  auto _temp_ret = call_wrap_v ((const ::hb_font_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_ascender_set (::hb_font_extents_t* obj, ::hb_position_t _value) { obj->ascender = (decltype(obj->ascender)) _value; }
//  font_extents_t::ascender (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::ascender (::hb_font_extents_t* obj, ::hb_position_t _value);
void base::font_extents_tBase::ascender_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_ascender_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_font_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_descender_get (const ::hb_font_extents_t* obj) { return (::hb_position_t) obj->descender; }
// ::hb_position_t font_extents_t::descender (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::descender (const ::hb_font_extents_t* obj);
HarfBuzz::position_t base::font_extents_tBase::descender_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_font_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_descender_get;
  auto _temp_ret = call_wrap_v ((const ::hb_font_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_descender_set (::hb_font_extents_t* obj, ::hb_position_t _value) { obj->descender = (decltype(obj->descender)) _value; }
//  font_extents_t::descender (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::descender (::hb_font_extents_t* obj, ::hb_position_t _value);
void base::font_extents_tBase::descender_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_descender_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_font_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_line_gap_get (const ::hb_font_extents_t* obj) { return (::hb_position_t) obj->line_gap; }
// ::hb_position_t font_extents_t::line_gap (const ::hb_font_extents_t* obj);
// ::hb_position_t font_extents_t::line_gap (const ::hb_font_extents_t* obj);
HarfBuzz::position_t base::font_extents_tBase::line_gap_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_font_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_gap_get;
  auto _temp_ret = call_wrap_v ((const ::hb_font_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_line_gap_set (::hb_font_extents_t* obj, ::hb_position_t _value) { obj->line_gap = (decltype(obj->line_gap)) _value; }
//  font_extents_t::line_gap (::hb_font_extents_t* obj, ::hb_position_t _value);
// void font_extents_t::line_gap (::hb_font_extents_t* obj, ::hb_position_t _value);
void base::font_extents_tBase::line_gap_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_font_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_line_gap_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_font_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/font_extents_t_extra_def_impl.hpp>)
#include <harfbuzz/font_extents_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/font_extents_t_extra_impl.hpp>)
#include <harfbuzz/font_extents_t_extra_impl.hpp>
#endif
#endif

#endif
