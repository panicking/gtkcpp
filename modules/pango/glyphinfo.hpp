// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHINFO_HPP_
#define _GI_PANGO_GLYPHINFO_HPP_


namespace gi {

namespace repository {

namespace Pango {


class GlyphInfo;

namespace base {


#define GI_PANGO_GLYPHINFO_BASE base::GlyphInfoBase
class GlyphInfoBase : public gi::detail::CBoxedWrapper<GlyphInfoBase, ::PangoGlyphInfo>
{
typedef gi::detail::CBoxedWrapper<GlyphInfoBase, ::PangoGlyphInfo> super_type;
public:

GlyphInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj);
// ::PangoGlyph GlyphInfo::glyph (const ::PangoGlyphInfo* obj);
GI_INLINE_DECL Pango::Glyph glyph_ () const noexcept;

//  GlyphInfo::glyph (::PangoGlyphInfo* obj, ::PangoGlyph _value);
// void GlyphInfo::glyph (::PangoGlyphInfo* obj, ::PangoGlyph _value);
GI_INLINE_DECL void glyph_ (::PangoGlyph _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra_def.hpp>)
#include <pango/glyphinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphinfo_extra.hpp>)
#include <pango/glyphinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphInfo : public GI_PANGO_GLYPHINFO_BASE
{ typedef GI_PANGO_GLYPHINFO_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphInfo>
{ typedef Pango::GlyphInfo type; }; 

} // namespace repository

} // namespace gi

#endif
