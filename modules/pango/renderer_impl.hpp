// AUTO-GENERATED

#ifndef _GI_PANGO_RENDERER_IMPL_HPP_
#define _GI_PANGO_RENDERER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_renderer_activate (PangoRenderer* renderer);
// void pango_renderer_activate (::PangoRenderer* renderer);
void base::RendererBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_activate;
  call_wrap_v ((::PangoRenderer*) (gobj_()));
}

// void pango_renderer_deactivate (PangoRenderer* renderer);
// void pango_renderer_deactivate (::PangoRenderer* renderer);
void base::RendererBase::deactivate () noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_deactivate;
  call_wrap_v ((::PangoRenderer*) (gobj_()));
}

// void pango_renderer_draw_error_underline (PangoRenderer* renderer, int x, int y, int width, int height);
// void pango_renderer_draw_error_underline (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
void base::RendererBase::draw_error_underline (gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_error_underline;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::PangoRenderer*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void pango_renderer_draw_glyph (PangoRenderer* renderer, PangoFont* font, PangoGlyph glyph, double x, double y);
// void pango_renderer_draw_glyph (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
void base::RendererBase::draw_glyph (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_glyph;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoGlyph) (glyph_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void pango_renderer_draw_glyph_item (PangoRenderer* renderer, const char* text, PangoGlyphItem* glyph_item, int x, int y);
// void pango_renderer_draw_glyph_item (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
void base::RendererBase::draw_glyph_item (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_glyph_item;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none, gi::direction_in);
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (const char*) (text_to_c), (::PangoGlyphItem*) (glyph_item_to_c), (gint) (x_to_c), (gint) (y_to_c));
}
void base::RendererBase::draw_glyph_item (Pango::GlyphItem glyph_item, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_glyph_item;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none, gi::direction_in);
  auto text_to_c = nullptr;
  call_wrap_v ((::PangoRenderer*) (gobj_()), (const char*) (text_to_c), (::PangoGlyphItem*) (glyph_item_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void pango_renderer_draw_glyphs (PangoRenderer* renderer, PangoFont* font, PangoGlyphString* glyphs, int x, int y);
// void pango_renderer_draw_glyphs (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
void base::RendererBase::draw_glyphs (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_glyphs;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoGlyphString*) (glyphs_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void pango_renderer_draw_layout (PangoRenderer* renderer, PangoLayout* layout, int x, int y);
// void pango_renderer_draw_layout (::PangoRenderer* renderer, ::PangoLayout* layout, gint x, gint y);
void base::RendererBase::draw_layout (Pango::Layout layout, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoLayout* layout, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_layout;
  auto y_to_c = y;
  auto x_to_c = x;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoLayout*) (layout_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void pango_renderer_draw_layout_line (PangoRenderer* renderer, PangoLayoutLine* line, int x, int y);
// void pango_renderer_draw_layout_line (::PangoRenderer* renderer, ::PangoLayoutLine* line, gint x, gint y);
void base::RendererBase::draw_layout_line (Pango::LayoutLine line, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoLayoutLine* line, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_layout_line;
  auto y_to_c = y;
  auto x_to_c = x;
  auto line_to_c = gi::unwrap (line, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoLayoutLine*) (line_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void pango_renderer_draw_rectangle (PangoRenderer* renderer, PangoRenderPart part, int x, int y, int width, int height);
// void pango_renderer_draw_rectangle (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
void base::RendererBase::draw_rectangle (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_rectangle;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void pango_renderer_draw_trapezoid (PangoRenderer* renderer, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void pango_renderer_draw_trapezoid (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
void base::RendererBase::draw_trapezoid (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_draw_trapezoid;
  auto x22_to_c = x22;
  auto x12_to_c = x12;
  auto y2_to_c = y2;
  auto x21_to_c = x21;
  auto x11_to_c = x11;
  auto y1__to_c = y1_;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (gdouble) (y1__to_c), (gdouble) (x11_to_c), (gdouble) (x21_to_c), (gdouble) (y2_to_c), (gdouble) (x12_to_c), (gdouble) (x22_to_c));
}

// guint16 pango_renderer_get_alpha (PangoRenderer* renderer, PangoRenderPart part);
// guint16 pango_renderer_get_alpha (::PangoRenderer* renderer, ::PangoRenderPart part);
guint16 base::RendererBase::get_alpha (Pango::RenderPart part) noexcept
{
  typedef guint16 (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_get_alpha;
  auto part_to_c = gi::unwrap (part);
  auto _temp_ret = call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c));
  return _temp_ret;
}

// PangoColor* pango_renderer_get_color (PangoRenderer* renderer, PangoRenderPart part);
// ::PangoColor* pango_renderer_get_color (::PangoRenderer* renderer, ::PangoRenderPart part);
Pango::Color base::RendererBase::get_color (Pango::RenderPart part) noexcept
{
  typedef ::PangoColor* (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_get_color;
  auto part_to_c = gi::unwrap (part);
  auto _temp_ret = call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLayout* pango_renderer_get_layout (PangoRenderer* renderer);
// ::PangoLayout* pango_renderer_get_layout (::PangoRenderer* renderer);
Pango::Layout base::RendererBase::get_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_get_layout;
  auto _temp_ret = call_wrap_v ((::PangoRenderer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLayoutLine* pango_renderer_get_layout_line (PangoRenderer* renderer);
// ::PangoLayoutLine* pango_renderer_get_layout_line (::PangoRenderer* renderer);
Pango::LayoutLine base::RendererBase::get_layout_line () noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_get_layout_line;
  auto _temp_ret = call_wrap_v ((::PangoRenderer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const PangoMatrix* pango_renderer_get_matrix (PangoRenderer* renderer);
// const ::PangoMatrix* pango_renderer_get_matrix (::PangoRenderer* renderer);
Pango::Matrix base::RendererBase::get_matrix () noexcept
{
  typedef const ::PangoMatrix* (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_get_matrix;
  auto _temp_ret = call_wrap_v ((::PangoRenderer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_renderer_part_changed (PangoRenderer* renderer, PangoRenderPart part);
// void pango_renderer_part_changed (::PangoRenderer* renderer, ::PangoRenderPart part);
void base::RendererBase::part_changed (Pango::RenderPart part) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_part_changed;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c));
}

// void pango_renderer_set_alpha (PangoRenderer* renderer, PangoRenderPart part, guint16 alpha);
// void pango_renderer_set_alpha (::PangoRenderer* renderer, ::PangoRenderPart part, guint16 alpha);
void base::RendererBase::set_alpha (Pango::RenderPart part, guint16 alpha) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_set_alpha;
  auto alpha_to_c = alpha;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (guint16) (alpha_to_c));
}

// void pango_renderer_set_color (PangoRenderer* renderer, PangoRenderPart part, const PangoColor* color);
// void pango_renderer_set_color (::PangoRenderer* renderer, ::PangoRenderPart part, const ::PangoColor* color);
void base::RendererBase::set_color (Pango::RenderPart part, const Pango::Color & color) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, const ::PangoColor* color);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_set_color;
  auto color_to_c = gi::unwrap (color, gi::transfer_none, gi::direction_in);
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (const ::PangoColor*) (color_to_c));
}
void base::RendererBase::set_color (Pango::RenderPart part) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, const ::PangoColor* color);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_set_color;
  auto color_to_c = nullptr;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (const ::PangoColor*) (color_to_c));
}

// void pango_renderer_set_matrix (PangoRenderer* renderer, const PangoMatrix* matrix);
// void pango_renderer_set_matrix (::PangoRenderer* renderer, const ::PangoMatrix* matrix);
void base::RendererBase::set_matrix (const Pango::Matrix & matrix) noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_set_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (const ::PangoMatrix*) (matrix_to_c));
}
void base::RendererBase::set_matrix () noexcept
{
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_renderer_set_matrix;
  auto matrix_to_c = nullptr;
  call_wrap_v ((::PangoRenderer*) (gobj_()), (const ::PangoMatrix*) (matrix_to_c));
}

static ::PangoMatrix* _field_matrix_get (const ::PangoRenderer* obj) { return (::PangoMatrix*) obj->matrix; }
// ::PangoMatrix* Renderer::matrix (const ::PangoRenderer* obj);
// ::PangoMatrix* Renderer::matrix (const ::PangoRenderer* obj);
Pango::Matrix base::RendererBase::matrix_ () const noexcept
{
  typedef ::PangoMatrix* (*call_wrap_t) (const ::PangoRenderer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_matrix_get;
  auto _temp_ret = call_wrap_v ((const ::PangoRenderer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/renderer_extra_def_impl.hpp>)
#include <pango/renderer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/renderer_extra_impl.hpp>)
#include <pango/renderer_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void RendererClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoRendererClass *methods = (::PangoRendererClass *) class_struct;
  (void) methods;

  methods->begin = (decltype (methods->begin)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::begin_>;
  methods->draw_error_underline = (decltype (methods->draw_error_underline)) detail::method_wrapper<self, void (*) (gint x, gint y, gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_error_underline_>;
  methods->draw_glyph = (decltype (methods->draw_glyph)) detail::method_wrapper<self, void (*) (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_glyph_>;
  methods->draw_glyph_item = (decltype (methods->draw_glyph_item)) detail::method_wrapper<self, void (*) (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_glyph_item_>;
  methods->draw_glyphs = (decltype (methods->draw_glyphs)) detail::method_wrapper<self, void (*) (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_glyphs_>;
  methods->draw_rectangle = (decltype (methods->draw_rectangle)) detail::method_wrapper<self, void (*) (Pango::RenderPart part, gint x, gint y, gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_rectangle_>;
  methods->draw_shape = (decltype (methods->draw_shape)) detail::method_wrapper<self, void (*) (Pango::AttrShape attr, gint x, gint y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_shape_>;
  methods->draw_trapezoid = (decltype (methods->draw_trapezoid)) detail::method_wrapper<self, void (*) (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_trapezoid_>;
  methods->end = (decltype (methods->end)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::end_>;
  methods->part_changed = (decltype (methods->part_changed)) detail::method_wrapper<self, void (*) (Pango::RenderPart part), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::part_changed_>;
}

// void Renderer::begin (PangoRenderer* renderer);
// void Renderer::begin (::PangoRenderer* renderer);
void RendererClass::begin_ () noexcept
{
  if (!get_struct_()->begin) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->begin;
  call_wrap_v ((::PangoRenderer*) (gobj_()));
}

// void Renderer::draw_error_underline (PangoRenderer* renderer, int x, int y, int width, int height);
// void Renderer::draw_error_underline (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
void RendererClass::draw_error_underline_ (gint x, gint y, gint width, gint height) noexcept
{
  if (!get_struct_()->draw_error_underline) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_error_underline;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::PangoRenderer*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void Renderer::draw_glyph (PangoRenderer* renderer, PangoFont* font, PangoGlyph glyph, double x, double y);
// void Renderer::draw_glyph (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
void RendererClass::draw_glyph_ (Pango::Font font, ::PangoGlyph glyph, gdouble x, gdouble y) noexcept
{
  if (!get_struct_()->draw_glyph) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyph glyph, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_glyph;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyph_to_c = glyph;
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoGlyph) (glyph_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void Renderer::draw_glyph_item (PangoRenderer* renderer, const char* text, PangoGlyphItem* glyph_item, int x, int y);
// void Renderer::draw_glyph_item (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
void RendererClass::draw_glyph_item_ (const std::string & text, Pango::GlyphItem glyph_item, gint x, gint y) noexcept
{
  if (!get_struct_()->draw_glyph_item) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, const char* text, ::PangoGlyphItem* glyph_item, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_glyph_item;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyph_item_to_c = gi::unwrap (glyph_item, gi::transfer_none, gi::direction_in);
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (const char*) (text_to_c), (::PangoGlyphItem*) (glyph_item_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void Renderer::draw_glyphs (PangoRenderer* renderer, PangoFont* font, PangoGlyphString* glyphs, int x, int y);
// void Renderer::draw_glyphs (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
void RendererClass::draw_glyphs_ (Pango::Font font, Pango::GlyphString glyphs, gint x, gint y) noexcept
{
  if (!get_struct_()->draw_glyphs) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoFont* font, ::PangoGlyphString* glyphs, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_glyphs;
  auto y_to_c = y;
  auto x_to_c = x;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto font_to_c = gi::unwrap (font, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoFont*) (font_to_c), (::PangoGlyphString*) (glyphs_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void Renderer::draw_rectangle (PangoRenderer* renderer, PangoRenderPart part, int x, int y, int width, int height);
// void Renderer::draw_rectangle (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
void RendererClass::draw_rectangle_ (Pango::RenderPart part, gint x, gint y, gint width, gint height) noexcept
{
  if (!get_struct_()->draw_rectangle) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_rectangle;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void Renderer::draw_shape (PangoRenderer* renderer, PangoAttrShape* attr, int x, int y);
// void Renderer::draw_shape (::PangoRenderer* renderer, ::PangoAttrShape* attr, gint x, gint y);
void RendererClass::draw_shape_ (Pango::AttrShape attr, gint x, gint y) noexcept
{
  if (!get_struct_()->draw_shape) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoAttrShape* attr, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_shape;
  auto y_to_c = y;
  auto x_to_c = x;
  auto attr_to_c = gi::unwrap (attr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoAttrShape*) (attr_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void Renderer::draw_trapezoid (PangoRenderer* renderer, PangoRenderPart part, double y1_, double x11, double x21, double y2, double x12, double x22);
// void Renderer::draw_trapezoid (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
void RendererClass::draw_trapezoid_ (Pango::RenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22) noexcept
{
  if (!get_struct_()->draw_trapezoid) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part, gdouble y1_, gdouble x11, gdouble x21, gdouble y2, gdouble x12, gdouble x22);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw_trapezoid;
  auto x22_to_c = x22;
  auto x12_to_c = x12;
  auto y2_to_c = y2;
  auto x21_to_c = x21;
  auto x11_to_c = x11;
  auto y1__to_c = y1_;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c), (gdouble) (y1__to_c), (gdouble) (x11_to_c), (gdouble) (x21_to_c), (gdouble) (y2_to_c), (gdouble) (x12_to_c), (gdouble) (x22_to_c));
}

// void Renderer::end (PangoRenderer* renderer);
// void Renderer::end (::PangoRenderer* renderer);
void RendererClass::end_ () noexcept
{
  if (!get_struct_()->end) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->end;
  call_wrap_v ((::PangoRenderer*) (gobj_()));
}

// void Renderer::part_changed (PangoRenderer* renderer, PangoRenderPart part);
// void Renderer::part_changed (::PangoRenderer* renderer, ::PangoRenderPart part);
void RendererClass::part_changed_ (Pango::RenderPart part) noexcept
{
  if (!get_struct_()->part_changed) return ;
  typedef void (*call_wrap_t) (::PangoRenderer* renderer, ::PangoRenderPart part);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->part_changed;
  auto part_to_c = gi::unwrap (part);
  call_wrap_v ((::PangoRenderer*) (gobj_()), (::PangoRenderPart) (part_to_c));
}

// void Renderer::prepare_run (PangoRenderer* renderer, PangoLayoutRun* run);
// void Renderer::prepare_run (::PangoRenderer* renderer,  run);
// SKIP; run type  not supported

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
