// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHVISATTR_IMPL_HPP_
#define _GI_PANGO_GLYPHVISATTR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static guint _field_is_cluster_start_get (const ::PangoGlyphVisAttr* obj) { return (guint) obj->is_cluster_start; }
// guint GlyphVisAttr::is_cluster_start (const ::PangoGlyphVisAttr* obj);
// guint GlyphVisAttr::is_cluster_start (const ::PangoGlyphVisAttr* obj);
guint base::GlyphVisAttrBase::is_cluster_start_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoGlyphVisAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_cluster_start_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphVisAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_is_cluster_start_set (::PangoGlyphVisAttr* obj, guint _value) { obj->is_cluster_start = (decltype(obj->is_cluster_start)) _value; }
//  GlyphVisAttr::is_cluster_start (::PangoGlyphVisAttr* obj, guint _value);
// void GlyphVisAttr::is_cluster_start (::PangoGlyphVisAttr* obj, guint _value);
void base::GlyphVisAttrBase::is_cluster_start_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphVisAttr* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_cluster_start_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphVisAttr*) (gobj_()), (guint) (_value_to_c));
}

static guint _field_is_color_get (const ::PangoGlyphVisAttr* obj) { return (guint) obj->is_color; }
// guint GlyphVisAttr::is_color (const ::PangoGlyphVisAttr* obj);
// guint GlyphVisAttr::is_color (const ::PangoGlyphVisAttr* obj);
guint base::GlyphVisAttrBase::is_color_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoGlyphVisAttr* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_color_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphVisAttr*) (gobj_()));
  return _temp_ret;
}

static void _field_is_color_set (::PangoGlyphVisAttr* obj, guint _value) { obj->is_color = (decltype(obj->is_color)) _value; }
//  GlyphVisAttr::is_color (::PangoGlyphVisAttr* obj, guint _value);
// void GlyphVisAttr::is_color (::PangoGlyphVisAttr* obj, guint _value);
void base::GlyphVisAttrBase::is_color_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphVisAttr* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_is_color_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphVisAttr*) (gobj_()), (guint) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphvisattr_extra_def_impl.hpp>)
#include <pango/glyphvisattr_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphvisattr_extra_impl.hpp>)
#include <pango/glyphvisattr_extra_impl.hpp>
#endif
#endif

#endif
