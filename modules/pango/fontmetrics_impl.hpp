// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMETRICS_IMPL_HPP_
#define _GI_PANGO_FONTMETRICS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// int pango_font_metrics_get_approximate_char_width (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_approximate_char_width (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_approximate_char_width () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_approximate_char_width;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_approximate_digit_width (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_approximate_digit_width (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_approximate_digit_width () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_approximate_digit_width;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_ascent (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_ascent (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_ascent () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_ascent;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_descent (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_descent (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_descent () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_descent;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_height (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_height (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_height;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_strikethrough_position (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_strikethrough_position (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_strikethrough_position () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_strikethrough_position;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_strikethrough_thickness (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_strikethrough_thickness (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_strikethrough_thickness () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_strikethrough_thickness;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_underline_position (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_underline_position (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_underline_position () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_underline_position;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// int pango_font_metrics_get_underline_thickness (PangoFontMetrics* metrics);
// gint pango_font_metrics_get_underline_thickness (::PangoFontMetrics* metrics);
gint base::FontMetricsBase::get_underline_thickness () noexcept
{
  typedef gint (*call_wrap_t) (::PangoFontMetrics* metrics);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_metrics_get_underline_thickness;
  auto _temp_ret = call_wrap_v ((::PangoFontMetrics*) (gobj_()));
  return _temp_ret;
}

// PangoFontMetrics* pango_font_metrics_ref (PangoFontMetrics* metrics);
// ::PangoFontMetrics* pango_font_metrics_ref (::PangoFontMetrics* metrics);
// IGNORE; marked ignore

// void pango_font_metrics_unref (PangoFontMetrics* metrics);
// void pango_font_metrics_unref (::PangoFontMetrics* metrics);
// IGNORE; marked ignore


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmetrics_extra_def_impl.hpp>)
#include <pango/fontmetrics_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmetrics_extra_impl.hpp>)
#include <pango/fontmetrics_extra_impl.hpp>
#endif
#endif

#endif
