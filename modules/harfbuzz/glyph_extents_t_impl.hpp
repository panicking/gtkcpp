// AUTO-GENERATED

#ifndef _GI_HARFBUZZ_GLYPH_EXTENTS_T_IMPL_HPP_
#define _GI_HARFBUZZ_GLYPH_EXTENTS_T_IMPL_HPP_

namespace gi {

namespace repository {

namespace HarfBuzz {

namespace base {

static ::hb_position_t _field_x_bearing_get (const ::hb_glyph_extents_t* obj) { return (::hb_position_t) obj->x_bearing; }
// ::hb_position_t glyph_extents_t::x_bearing (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::x_bearing (const ::hb_glyph_extents_t* obj);
HarfBuzz::position_t base::glyph_extents_tBase::x_bearing_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_bearing_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_x_bearing_set (::hb_glyph_extents_t* obj, ::hb_position_t _value) { obj->x_bearing = (decltype(obj->x_bearing)) _value; }
//  glyph_extents_t::x_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::x_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
void base::glyph_extents_tBase::x_bearing_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_x_bearing_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_y_bearing_get (const ::hb_glyph_extents_t* obj) { return (::hb_position_t) obj->y_bearing; }
// ::hb_position_t glyph_extents_t::y_bearing (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::y_bearing (const ::hb_glyph_extents_t* obj);
HarfBuzz::position_t base::glyph_extents_tBase::y_bearing_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_bearing_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_y_bearing_set (::hb_glyph_extents_t* obj, ::hb_position_t _value) { obj->y_bearing = (decltype(obj->y_bearing)) _value; }
//  glyph_extents_t::y_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::y_bearing (::hb_glyph_extents_t* obj, ::hb_position_t _value);
void base::glyph_extents_tBase::y_bearing_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_y_bearing_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_width_get (const ::hb_glyph_extents_t* obj) { return (::hb_position_t) obj->width; }
// ::hb_position_t glyph_extents_t::width (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::width (const ::hb_glyph_extents_t* obj);
HarfBuzz::position_t base::glyph_extents_tBase::width_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_width_set (::hb_glyph_extents_t* obj, ::hb_position_t _value) { obj->width = (decltype(obj->width)) _value; }
//  glyph_extents_t::width (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::width (::hb_glyph_extents_t* obj, ::hb_position_t _value);
void base::glyph_extents_tBase::width_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_width_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}

static ::hb_position_t _field_height_get (const ::hb_glyph_extents_t* obj) { return (::hb_position_t) obj->height; }
// ::hb_position_t glyph_extents_t::height (const ::hb_glyph_extents_t* obj);
// ::hb_position_t glyph_extents_t::height (const ::hb_glyph_extents_t* obj);
HarfBuzz::position_t base::glyph_extents_tBase::height_ () const noexcept
{
  typedef ::hb_position_t (*call_wrap_t) (const ::hb_glyph_extents_t* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_get;
  auto _temp_ret = call_wrap_v ((const ::hb_glyph_extents_t*) (gobj_()));
  return _temp_ret;
}

static void _field_height_set (::hb_glyph_extents_t* obj, ::hb_position_t _value) { obj->height = (decltype(obj->height)) _value; }
//  glyph_extents_t::height (::hb_glyph_extents_t* obj, ::hb_position_t _value);
// void glyph_extents_t::height (::hb_glyph_extents_t* obj, ::hb_position_t _value);
void base::glyph_extents_tBase::height_ (::hb_position_t _value) noexcept
{
  typedef void (*call_wrap_t) (::hb_glyph_extents_t* obj, ::hb_position_t _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_height_set;
  auto _value_to_c = _value;
  call_wrap_v ((::hb_glyph_extents_t*) (gobj_()), (::hb_position_t) (_value_to_c));
}


} // namespace base

} // namespace HarfBuzz

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_extents_t_extra_def_impl.hpp>)
#include <harfbuzz/glyph_extents_t_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<harfbuzz/glyph_extents_t_extra_impl.hpp>)
#include <harfbuzz/glyph_extents_t_extra_impl.hpp>
#endif
#endif

#endif
