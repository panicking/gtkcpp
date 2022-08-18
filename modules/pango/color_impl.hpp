// AUTO-GENERATED

#ifndef _GI_PANGO_COLOR_IMPL_HPP_
#define _GI_PANGO_COLOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static guint16 _field_red_get (const ::PangoColor* obj) { return (guint16) obj->red; }
// guint16 Color::red (const ::PangoColor* obj);
// guint16 Color::red (const ::PangoColor* obj);
guint16 base::ColorBase::red_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::PangoColor* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_get;
  auto _temp_ret = call_wrap_v ((const ::PangoColor*) (gobj_()));
  return _temp_ret;
}

static void _field_red_set (::PangoColor* obj, guint16 _value) { obj->red = (decltype(obj->red)) _value; }
//  Color::red (::PangoColor* obj, guint16 _value);
// void Color::red (::PangoColor* obj, guint16 _value);
void base::ColorBase::red_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoColor* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_red_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoColor*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_green_get (const ::PangoColor* obj) { return (guint16) obj->green; }
// guint16 Color::green (const ::PangoColor* obj);
// guint16 Color::green (const ::PangoColor* obj);
guint16 base::ColorBase::green_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::PangoColor* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_get;
  auto _temp_ret = call_wrap_v ((const ::PangoColor*) (gobj_()));
  return _temp_ret;
}

static void _field_green_set (::PangoColor* obj, guint16 _value) { obj->green = (decltype(obj->green)) _value; }
//  Color::green (::PangoColor* obj, guint16 _value);
// void Color::green (::PangoColor* obj, guint16 _value);
void base::ColorBase::green_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoColor* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_green_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoColor*) (gobj_()), (guint16) (_value_to_c));
}

static guint16 _field_blue_get (const ::PangoColor* obj) { return (guint16) obj->blue; }
// guint16 Color::blue (const ::PangoColor* obj);
// guint16 Color::blue (const ::PangoColor* obj);
guint16 base::ColorBase::blue_ () const noexcept
{
  typedef guint16 (*call_wrap_t) (const ::PangoColor* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_get;
  auto _temp_ret = call_wrap_v ((const ::PangoColor*) (gobj_()));
  return _temp_ret;
}

static void _field_blue_set (::PangoColor* obj, guint16 _value) { obj->blue = (decltype(obj->blue)) _value; }
//  Color::blue (::PangoColor* obj, guint16 _value);
// void Color::blue (::PangoColor* obj, guint16 _value);
void base::ColorBase::blue_ (guint16 _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoColor* obj, guint16 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_blue_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoColor*) (gobj_()), (guint16) (_value_to_c));
}

// PangoColor* pango_color_copy (const PangoColor* src);
// ::PangoColor* pango_color_copy (const ::PangoColor* src);
Pango::Color base::ColorBase::copy () const noexcept
{
  typedef ::PangoColor* (*call_wrap_t) (const ::PangoColor* src);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_color_copy;
  auto _temp_ret = call_wrap_v ((const ::PangoColor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_color_free (PangoColor* color);
// void pango_color_free (::PangoColor* color);
// IGNORE; marked ignore

// gboolean pango_color_parse (PangoColor* color, const char* spec);
// gboolean pango_color_parse (::PangoColor* color, const char* spec);
bool base::ColorBase::parse (const std::string & spec) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoColor* color, const char* spec);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_color_parse;
  auto spec_to_c = gi::unwrap (spec, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoColor*) (gobj_()), (const char*) (spec_to_c));
  return _temp_ret;
}

// gboolean pango_color_parse_with_alpha (PangoColor* color, guint16* alpha, const char* spec);
// gboolean pango_color_parse_with_alpha (::PangoColor* color, guint16* alpha, const char* spec);
bool base::ColorBase::parse_with_alpha (guint16 * alpha, const std::string & spec) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoColor* color, guint16* alpha, const char* spec);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_color_parse_with_alpha;
  auto spec_to_c = gi::unwrap (spec, gi::transfer_none, gi::direction_in);
  guint16 alpha_o {};
  auto _temp_ret = call_wrap_v ((::PangoColor*) (gobj_()), (guint16*) (alpha ? &alpha_o : nullptr), (const char*) (spec_to_c));
  if (alpha) *alpha = alpha_o;
  return _temp_ret;
}
std::tuple<bool, guint16> base::ColorBase::parse_with_alpha (const std::string & spec) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoColor* color, guint16* alpha, const char* spec);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_color_parse_with_alpha;
  auto spec_to_c = gi::unwrap (spec, gi::transfer_none, gi::direction_in);
  guint16 alpha_o {};
  auto _temp_ret = call_wrap_v ((::PangoColor*) (gobj_()), (guint16*) (&alpha_o), (const char*) (spec_to_c));
  return std::make_tuple (_temp_ret, alpha_o);
}

// char* pango_color_to_string (const PangoColor* color);
// char* pango_color_to_string (const ::PangoColor* color);
std::string base::ColorBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoColor* color);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_color_to_string;
  auto _temp_ret = call_wrap_v ((const ::PangoColor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/color_extra_def_impl.hpp>)
#include <pango/color_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/color_extra_impl.hpp>)
#include <pango/color_extra_impl.hpp>
#endif
#endif

#endif
