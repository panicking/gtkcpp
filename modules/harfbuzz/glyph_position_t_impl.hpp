// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_POSITION_T_IMPL_HPP_
#define _GI_HARFBUZZ_GLYPH_POSITION_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_position_t _field_x_advance_get (const ::hb_glyph_position_t* obj) { return (::hb_position_t) obj->x_advance; }
// ::hb_position_t glyph_position_t::x_advance (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::x_advance (const ::hb_glyph_position_t* obj);
HarfBuzz::position_t base::glyph_position_tBase::x_advance_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_position_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_advance_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_position_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_advance_set (::hb_glyph_position_t* obj, ::hb_position_t _value) { obj->x_advance = (decltype(obj->x_advance)) _value; }
//  glyph_position_t::x_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::x_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
void base::glyph_position_tBase::x_advance_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_position_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_advance_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_position_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_y_advance_get (const ::hb_glyph_position_t* obj) { return (::hb_position_t) obj->y_advance; }
// ::hb_position_t glyph_position_t::y_advance (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::y_advance (const ::hb_glyph_position_t* obj);
HarfBuzz::position_t base::glyph_position_tBase::y_advance_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_position_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_advance_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_position_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_advance_set (::hb_glyph_position_t* obj, ::hb_position_t _value) { obj->y_advance = (decltype(obj->y_advance)) _value; }
//  glyph_position_t::y_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::y_advance (::hb_glyph_position_t* obj, ::hb_position_t _value);
void base::glyph_position_tBase::y_advance_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_position_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_advance_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_position_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_x_offset_get (const ::hb_glyph_position_t* obj) { return (::hb_position_t) obj->x_offset; }
// ::hb_position_t glyph_position_t::x_offset (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::x_offset (const ::hb_glyph_position_t* obj);
HarfBuzz::position_t base::glyph_position_tBase::x_offset_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_position_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_offset_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_position_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_offset_set (::hb_glyph_position_t* obj, ::hb_position_t _value) { obj->x_offset = (decltype(obj->x_offset)) _value; }
//  glyph_position_t::x_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::x_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
void base::glyph_position_tBase::x_offset_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_position_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_position_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_y_offset_get (const ::hb_glyph_position_t* obj) { return (::hb_position_t) obj->y_offset; }
// ::hb_position_t glyph_position_t::y_offset (const ::hb_glyph_position_t* obj);
// ::hb_position_t glyph_position_t::y_offset (const ::hb_glyph_position_t* obj);
HarfBuzz::position_t base::glyph_position_tBase::y_offset_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_position_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_position_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_offset_set (::hb_glyph_position_t* obj, ::hb_position_t _value) { obj->y_offset = (decltype(obj->y_offset)) _value; }
//  glyph_position_t::y_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
// void glyph_position_t::y_offset (::hb_glyph_position_t* obj, ::hb_position_t _value);
void base::glyph_position_tBase::y_offset_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_position_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_position_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_position_t_extra_def_impl.hpp>)
#include <harfbuzz/glyph_position_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_position_t_extra_impl.hpp>)
#include <harfbuzz/glyph_position_t_extra_impl.hpp>
#endif
#endif

#endif
