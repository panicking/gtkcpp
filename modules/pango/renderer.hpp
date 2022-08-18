// AUTO-GENERATED

#ifndef _GI_PANGO_RENDERER_HPP_
#define _GI_PANGO_RENDERER_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrShape;
class Color;
class Font;
class GlyphItem;
class GlyphString;
class Layout;
class LayoutLine;
class Matrix;

class Renderer;

namespace base {


#define GI_PANGO_RENDERER_BASE base::RendererBase
class RendererBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoRenderer BaseObjectType;

RendererBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_renderer_get_type(); } 

// void pango_renderer_activate (PangoRenderer* renderer);
// void pango_renderer_activate (::PangoRenderer* renderer);
GI_INLINE_DECL void activate () noexcept;

// void pango_renderer_deactivate (PangoRenderer* renderer);
// void pango_renderer_deactivate (::PangoRenderer* renderer);
GI_INLINE_DECL void deactivate () noexcept;

// void pango_renderer_draw_error_underline (PangoRenderer* renderer, int x, int y, int width, int height);
// void pango_renderer_draw_error_underline (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_error_underline (gint x, gint y, gint width, gint height) noexcept;

// void pango_renderer_draw_glyph (PangoRenderer* renderer, PangoFont* font, PangoGlyph glyph, double x, double y);
// void pango_renderer_draw_glyph (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
GI_INLINE_DECL void draw_glyph (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept;

// void pango_renderer_draw_glyph_item (PangoRenderer* renderer, const char* text, PangoGlyphItem* glyph_item, int x, int y);
// void pango_renderer_draw_glyph_item (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
GI_INLINE_DECL void draw_glyph_item (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y) noexcept;
GI_INLINE_DECL void draw_glyph_item (Pango::GlyphItem glyph_item, gint x, gint y) noexcept;

// void pango_renderer_draw_glyphs (PangoRenderer* renderer, PangoFont* font, PangoGlyphString* glyphs, int x, int y);
// void pango_renderer_draw_glyphs (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
GI_INLINE_DECL void draw_glyphs (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y) noexcept;

// void pango_renderer_draw_layout (PangoRenderer* renderer, PangoLayout* layout, int x, int y);
// void pango_renderer_draw_layout (::PangoRenderer* renderer, ::PangoLayout* layout, gint x, gint y);
GI_INLINE_DECL void draw_layout (Pango::Layout layout, gint x, gint y) noexcept;

// void pango_renderer_draw_layout_line (PangoRenderer* renderer, PangoLayoutLine* line, int x, int y);
// void pango_renderer_draw_layout_line (::PangoRenderer* renderer, ::PangoLayoutLine* line, gint x, gint y);
GI_INLINE_DECL void draw_layout_line (Pango::LayoutLine line, gint x, gint y) noexcept;

// void pango_renderer_draw_rectangle (PangoRenderer* renderer, PangoRenderPart part, int x, int y, int width, int height);
// void pango_renderer_draw_rectangle (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_rectangle (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept;

// void pango_renderer_draw_trapezoid (PangoRenderer* renderer, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void pango_renderer_draw_trapezoid (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
GI_INLINE_DECL void draw_trapezoid (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept;

// guint16 pango_renderer_get_alpha (PangoRenderer* renderer, PangoRenderPart part);
// guint16 pango_renderer_get_alpha (::PangoRenderer* renderer, ::PangoRenderPart part);
GI_INLINE_DECL guint16 get_alpha (Pango::RenderPart part) noexcept;

// PangoColor* pango_renderer_get_color (PangoRenderer* renderer, PangoRenderPart part);
// ::PangoColor* pango_renderer_get_color (::PangoRenderer* renderer, ::PangoRenderPart part);
GI_INLINE_DECL Pango::Color get_color (Pango::RenderPart part) noexcept;

// PangoLayout* pango_renderer_get_layout (PangoRenderer* renderer);
// ::PangoLayout* pango_renderer_get_layout (::PangoRenderer* renderer);
GI_INLINE_DECL Pango::Layout get_layout () noexcept;

// PangoLayoutLine* pango_renderer_get_layout_line (PangoRenderer* renderer);
// ::PangoLayoutLine* pango_renderer_get_layout_line (::PangoRenderer* renderer);
GI_INLINE_DECL Pango::LayoutLine get_layout_line () noexcept;

// const PangoMatrix* pango_renderer_get_matrix (PangoRenderer* renderer);
// const ::PangoMatrix* pango_renderer_get_matrix (::PangoRenderer* renderer);
GI_INLINE_DECL Pango::Matrix get_matrix () noexcept;

// void pango_renderer_part_changed (PangoRenderer* renderer, PangoRenderPart part);
// void pango_renderer_part_changed (::PangoRenderer* renderer, ::PangoRenderPart part);
GI_INLINE_DECL void part_changed (Pango::RenderPart part) noexcept;

// void pango_renderer_set_alpha (PangoRenderer* renderer, PangoRenderPart part, guint16 alpha);
// void pango_renderer_set_alpha (::PangoRenderer* renderer, ::PangoRenderPart part, guint16 alpha);
GI_INLINE_DECL void set_alpha (Pango::RenderPart part, guint16 alpha) noexcept;

// void pango_renderer_set_color (PangoRenderer* renderer, PangoRenderPart part, const PangoColor* color);
// void pango_renderer_set_color (::PangoRenderer* renderer, ::PangoRenderPart part, const ::PangoColor* color);
GI_INLINE_DECL void set_color (Pango::RenderPart part, const Pango::Color & color) noexcept;
GI_INLINE_DECL void set_color (Pango::RenderPart part) noexcept;

// void pango_renderer_set_matrix (PangoRenderer* renderer, const PangoMatrix* matrix);
// void pango_renderer_set_matrix (::PangoRenderer* renderer, const ::PangoMatrix* matrix);
GI_INLINE_DECL void set_matrix (const Pango::Matrix & matrix) noexcept;
GI_INLINE_DECL void set_matrix () noexcept;

// ::PangoMatrix* Renderer::matrix (const ::PangoRenderer* obj);
// ::PangoMatrix* Renderer::matrix (const ::PangoRenderer* obj);
GI_INLINE_DECL Pango::Matrix matrix_ () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/renderer_extra_def.hpp>)
#include <pango/renderer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/renderer_extra.hpp>)
#include <pango/renderer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Renderer : public GI_PANGO_RENDERER_BASE
{ typedef GI_PANGO_RENDERER_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoRenderer>
{ typedef Pango::Renderer type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class RendererClassDef
{
typedef RendererClassDef self;
public:
typedef Pango::Renderer instance_type;
typedef ::PangoRendererClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Renderer::begin (PangoRenderer* renderer);
// void Renderer::begin (::PangoRenderer* renderer);
virtual void begin_ () noexcept = 0;

// void Renderer::draw_error_underline (PangoRenderer* renderer, int x, int y, int width, int height);
// void Renderer::draw_error_underline (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
virtual void draw_error_underline_ (gint x, gint y, gint width, gint height) noexcept = 0;

// void Renderer::draw_glyph (PangoRenderer* renderer, PangoFont* font, PangoGlyph glyph, double x, double y);
// void Renderer::draw_glyph (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
virtual void draw_glyph_ (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept = 0;

// void Renderer::draw_glyph_item (PangoRenderer* renderer, const char* text, PangoGlyphItem* glyph_item, int x, int y);
// void Renderer::draw_glyph_item (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
virtual void draw_glyph_item_ (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y) noexcept = 0;

// void Renderer::draw_glyphs (PangoRenderer* renderer, PangoFont* font, PangoGlyphString* glyphs, int x, int y);
// void Renderer::draw_glyphs (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
virtual void draw_glyphs_ (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y) noexcept = 0;

// void Renderer::draw_rectangle (PangoRenderer* renderer, PangoRenderPart part, int x, int y, int width, int height);
// void Renderer::draw_rectangle (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
virtual void draw_rectangle_ (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept = 0;

// void Renderer::draw_shape (PangoRenderer* renderer, PangoAttrShape* attr, int x, int y);
// void Renderer::draw_shape (::PangoRenderer* renderer, ::PangoAttrShape* attr, gint x, gint y);
virtual void draw_shape_ (Pango::AttrShape attr, gint x, gint y) noexcept = 0;

// void Renderer::draw_trapezoid (PangoRenderer* renderer, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void Renderer::draw_trapezoid (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
virtual void draw_trapezoid_ (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept = 0;

// void Renderer::end (PangoRenderer* renderer);
// void Renderer::end (::PangoRenderer* renderer);
virtual void end_ () noexcept = 0;

// void Renderer::part_changed (PangoRenderer* renderer, PangoRenderPart part);
// void Renderer::part_changed (::PangoRenderer* renderer, ::PangoRenderPart part);
virtual void part_changed_ (Pango::RenderPart part) noexcept = 0;

// void Renderer::prepare_run (PangoRenderer* renderer, PangoLayoutRun* run);
// void Renderer::prepare_run (::PangoRenderer* renderer,  run);
// SKIP; run type  not supported


};

GI_CLASS_IMPL_BEGIN


class RendererClass: public detail::ClassTemplate<Pango::impl::internal::RendererClassDef, GObject::impl::internal::ObjectClass>
{
typedef RendererClass self;
typedef detail::ClassTemplate<Pango::impl::internal::RendererClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Renderer::begin (PangoRenderer* renderer);
// void Renderer::begin (::PangoRenderer* renderer);
GI_INLINE_DECL void begin_ () noexcept override;

// void Renderer::draw_error_underline (PangoRenderer* renderer, int x, int y, int width, int height);
// void Renderer::draw_error_underline (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_error_underline_ (gint x, gint y, gint width, gint height) noexcept override;

// void Renderer::draw_glyph (PangoRenderer* renderer, PangoFont* font, PangoGlyph glyph, double x, double y);
// void Renderer::draw_glyph (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
GI_INLINE_DECL void draw_glyph_ (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept override;

// void Renderer::draw_glyph_item (PangoRenderer* renderer, const char* text, PangoGlyphItem* glyph_item, int x, int y);
// void Renderer::draw_glyph_item (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
GI_INLINE_DECL void draw_glyph_item_ (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y) noexcept override;

// void Renderer::draw_glyphs (PangoRenderer* renderer, PangoFont* font, PangoGlyphString* glyphs, int x, int y);
// void Renderer::draw_glyphs (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
GI_INLINE_DECL void draw_glyphs_ (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y) noexcept override;

// void Renderer::draw_rectangle (PangoRenderer* renderer, PangoRenderPart part, int x, int y, int width, int height);
// void Renderer::draw_rectangle (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void draw_rectangle_ (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept override;

// void Renderer::draw_shape (PangoRenderer* renderer, PangoAttrShape* attr, int x, int y);
// void Renderer::draw_shape (::PangoRenderer* renderer, ::PangoAttrShape* attr, gint x, gint y);
GI_INLINE_DECL void draw_shape_ (Pango::AttrShape attr, gint x, gint y) noexcept override;

// void Renderer::draw_trapezoid (PangoRenderer* renderer, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void Renderer::draw_trapezoid (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
GI_INLINE_DECL void draw_trapezoid_ (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept override;

// void Renderer::end (PangoRenderer* renderer);
// void Renderer::end (::PangoRenderer* renderer);
GI_INLINE_DECL void end_ () noexcept override;

// void Renderer::part_changed (PangoRenderer* renderer, PangoRenderPart part);
// void Renderer::part_changed (::PangoRenderer* renderer, ::PangoRenderPart part);
GI_INLINE_DECL void part_changed_ (Pango::RenderPart part) noexcept override;

// void Renderer::prepare_run (PangoRenderer* renderer, PangoLayoutRun* run);
// void Renderer::prepare_run (::PangoRenderer* renderer,  run);
// SKIP; run type  not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using RendererImpl = detail::ObjectImpl<Renderer, internal::RendererClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
