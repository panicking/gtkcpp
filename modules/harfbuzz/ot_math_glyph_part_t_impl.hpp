// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_IMPL_HPP_
#define _GI_HARFBUZZ_OT_MATH_GLYPH_PART_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_codepoint_t _field_glyph_get (const ::hb_ot_math_glyph_part_t* obj) { return (::hb_codepoint_t) obj->glyph; }
// ::hb_codepoint_t ot_math_glyph_part_t::glyph (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_codepoint_t ot_math_glyph_part_t::glyph (const ::hb_ot_math_glyph_part_t* obj);
HarfBuzz::codepoint_t base::ot_math_glyph_part_tBase::glyph_ () const noexcept
{
  typedef ::hb_codepoint_t (*call_wrap_t) (const ::hb_ot_math_glyph_part_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_part_t*) (gobj_()));
  return _temp_ret;
}

static void _field_glyph_set (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value) { obj->glyph = (decltype(obj->glyph)) _value; }
//  ot_math_glyph_part_t::glyph (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value);
// void ot_math_glyph_part_t::glyph (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value);
void base::ot_math_glyph_part_tBase::glyph_ (::hb_codepoint_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_part_t* obj, ::hb_codepoint_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_part_t*) (gobj_()), (::hb_codepoint_t) (_value_to_c));
}

static ::hb_position_t _field_start_connector_length_get (const ::hb_ot_math_glyph_part_t* obj) { return (::hb_position_t) obj->start_connector_length; }
// ::hb_position_t ot_math_glyph_part_t::start_connector_length (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::start_connector_length (const ::hb_ot_math_glyph_part_t* obj);
HarfBuzz::position_t base::ot_math_glyph_part_tBase::start_connector_length_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_ot_math_glyph_part_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_connector_length_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_part_t*) (gobj_()));
  return _temp_ret;
}

static void _field_start_connector_length_set (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value) { obj->start_connector_length = (decltype(obj->start_connector_length)) _value; }
//  ot_math_glyph_part_t::start_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::start_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
void base::ot_math_glyph_part_tBase::start_connector_length_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_start_connector_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_part_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_end_connector_length_get (const ::hb_ot_math_glyph_part_t* obj) { return (::hb_position_t) obj->end_connector_length; }
// ::hb_position_t ot_math_glyph_part_t::end_connector_length (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::end_connector_length (const ::hb_ot_math_glyph_part_t* obj);
HarfBuzz::position_t base::ot_math_glyph_part_tBase::end_connector_length_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_ot_math_glyph_part_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_connector_length_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_part_t*) (gobj_()));
  return _temp_ret;
}

static void _field_end_connector_length_set (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value) { obj->end_connector_length = (decltype(obj->end_connector_length)) _value; }
//  ot_math_glyph_part_t::end_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::end_connector_length (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
void base::ot_math_glyph_part_tBase::end_connector_length_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_end_connector_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_part_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_full_advance_get (const ::hb_ot_math_glyph_part_t* obj) { return (::hb_position_t) obj->full_advance; }
// ::hb_position_t ot_math_glyph_part_t::full_advance (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_position_t ot_math_glyph_part_t::full_advance (const ::hb_ot_math_glyph_part_t* obj);
HarfBuzz::position_t base::ot_math_glyph_part_tBase::full_advance_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_ot_math_glyph_part_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_full_advance_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_part_t*) (gobj_()));
  return _temp_ret;
}

static void _field_full_advance_set (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value) { obj->full_advance = (decltype(obj->full_advance)) _value; }
//  ot_math_glyph_part_t::full_advance (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
// void ot_math_glyph_part_t::full_advance (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
void base::ot_math_glyph_part_tBase::full_advance_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_part_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_full_advance_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_ot_math_glyph_part_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_ot_math_glyph_part_flags_t _field_flags_get (const ::hb_ot_math_glyph_part_t* obj) { return (::hb_ot_math_glyph_part_flags_t) obj->flags; }
// ::hb_ot_math_glyph_part_flags_t ot_math_glyph_part_t::flags (const ::hb_ot_math_glyph_part_t* obj);
// ::hb_ot_math_glyph_part_flags_t ot_math_glyph_part_t::flags (const ::hb_ot_math_glyph_part_t* obj);
HarfBuzz::ot_math_glyph_part_flags_t base::ot_math_glyph_part_tBase::flags_ () const noexcept
{
  typedef ::hb_ot_math_glyph_part_flags_t (*call_wrap_t) (const ::hb_ot_math_glyph_part_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_get;
  auto _temp_ret = call_wrap_v ((const ::hb_ot_math_glyph_part_t*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_flags_set (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value) { obj->flags = (decltype(obj->flags)) _value; }
//  ot_math_glyph_part_t::flags (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value);
// void ot_math_glyph_part_t::flags (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value);
void base::ot_math_glyph_part_tBase::flags_ (HarfBuzz::ot_math_glyph_part_flags_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_ot_math_glyph_part_t* obj, ::hb_ot_math_glyph_part_flags_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::hb_ot_math_glyph_part_t*) (gobj_()), (::hb_ot_math_glyph_part_flags_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_part_t_extra_def_impl.hpp>)
#include <harfbuzz/ot_math_glyph_part_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/ot_math_glyph_part_t_extra_impl.hpp>)
#include <harfbuzz/ot_math_glyph_part_t_extra_impl.hpp>
#endif
#endif

#endif
