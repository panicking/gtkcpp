// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHGEOMETRY_HPP_
#define _GI_PANGO_GLYPHGEOMETRY_HPP_


namespace gi {

namespace repository {

namespace Pango {


class GlyphGeometry;

namespace base {


#define GI_PANGO_GLYPHGEOMETRY_BASE base::GlyphGeometryBase
class GlyphGeometryBase : public gi::detail::CBoxedWrapper<GlyphGeometryBase, ::PangoGlyphGeometry>
{
typedef gi::detail::CBoxedWrapper<GlyphGeometryBase, ::PangoGlyphGeometry> super_type;
public:

GlyphGeometryBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoGlyphUnit GlyphGeometry::width (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::width (const ::PangoGlyphGeometry* obj);
GI_INLINE_DECL Pango::GlyphUnit width_ () const noexcept;

//  GlyphGeometry::width (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::width (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
GI_INLINE_DECL void width_ (::PangoGlyphUnit _value) noexcept;

// ::PangoGlyphUnit GlyphGeometry::x_offset (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::x_offset (const ::PangoGlyphGeometry* obj);
GI_INLINE_DECL Pango::GlyphUnit x_offset_ () const noexcept;

//  GlyphGeometry::x_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::x_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
GI_INLINE_DECL void x_offset_ (::PangoGlyphUnit _value) noexcept;

// ::PangoGlyphUnit GlyphGeometry::y_offset (const ::PangoGlyphGeometry* obj);
// ::PangoGlyphUnit GlyphGeometry::y_offset (const ::PangoGlyphGeometry* obj);
GI_INLINE_DECL Pango::GlyphUnit y_offset_ () const noexcept;

//  GlyphGeometry::y_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
// void GlyphGeometry::y_offset (::PangoGlyphGeometry* obj, ::PangoGlyphUnit _value);
GI_INLINE_DECL void y_offset_ (::PangoGlyphUnit _value) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphgeometry_extra_def.hpp>)
#include <pango/glyphgeometry_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphgeometry_extra.hpp>)
#include <pango/glyphgeometry_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphGeometry : public GI_PANGO_GLYPHGEOMETRY_BASE
{ typedef GI_PANGO_GLYPHGEOMETRY_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphGeometry>
{ typedef Pango::GlyphGeometry type; }; 

} // namespace repository

} // namespace gi

#endif
