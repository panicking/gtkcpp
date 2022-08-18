// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHINFO_IMPL_HPP_
#define _GI_PANGO_GLYPHINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoGlyph _field_glyph_get (const ::PangoGlyphInfo* obj) { return (::PangoGlyph) obj->glyph; }
// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj);
// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj);
Pango::Glyph base::GlyphInfoBase::glyph_ () const noexcept
{
  typedef ::PangoGlyph (*call_wrap_t) (const ::PangoGlyphInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_get;
  auto _temp_ret = call_wrap_v ((const ::PangoGlyphInfo*) (gobj_()));
  return _temp_ret;
}

static void _field_glyph_set (::PangoGlyphInfo* obj, ::PangoGlyph _value) { obj->glyph = (decltype(obj->glyph)) _value; }
//  GlyphInfo::glyph (::PangoGlyphInfo* obj, ::PangoGlyph _value);
// void GlyphInfo::glyph (::PangoGlyphInfo* obj, ::PangoGlyph _value);
void base::GlyphInfoBase::glyph_ (::PangoGlyph _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoGlyphInfo* obj, ::PangoGlyph _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_glyph_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoGlyphInfo*) (gobj_()), (::PangoGlyph) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra_def_impl.hpp>)
#include <pango/glyphinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra_impl.hpp>)
#include <pango/glyphinfo_extra_impl.hpp>
#endif
#endif

#endif
