// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHSTRING_HPP_
#define _GI_PANGO_GLYPHSTRING_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Analysis;
class Font;
class LogAttr;
class Rectangle;

class GlyphString;

namespace base {


#define GI_PANGO_GLYPHSTRING_BASE base::GlyphStringBase
class GlyphStringBase : public gi::detail::GBoxedWrapper<GlyphStringBase, ::PangoGlyphString>
{
typedef gi::detail::GBoxedWrapper<GlyphStringBase, ::PangoGlyphString> super_type;
public:

GlyphStringBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_glyph_string_get_type(); } 

// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj);
// gint GlyphString::num_glyphs (const ::PangoGlyphString* obj);
GI_INLINE_DECL gint num_glyphs_ () const noexcept;

//  GlyphString::num_glyphs (::PangoGlyphString* obj, gint _value);
// void GlyphString::num_glyphs (::PangoGlyphString* obj, gint _value);
GI_INLINE_DECL void num_glyphs_ (gint _value) noexcept;

// PangoGlyphString* pango_glyph_string_new ();
// ::PangoGlyphString* pango_glyph_string_new ();
static GI_INLINE_DECL Pango::GlyphString new_ () noexcept;

// PangoGlyphString* pango_glyph_string_copy (PangoGlyphString* string);
// ::PangoGlyphString* pango_glyph_string_copy (::PangoGlyphString* string);
GI_INLINE_DECL Pango::GlyphString copy () noexcept;

// void pango_glyph_string_extents (PangoGlyphString* glyphs, PangoFont* font, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_glyph_string_extents (::PangoGlyphString* glyphs, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void extents (Pango::Font font, Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> extents (Pango::Font font) noexcept;

// void pango_glyph_string_extents_range (PangoGlyphString* glyphs, int start, int end, PangoFont* font, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_glyph_string_extents_range (::PangoGlyphString* glyphs, gint start, gint end, ::PangoFont* font, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void extents_range (gint start, gint end, Pango::Font font, Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> extents_range (gint start, gint end, Pango::Font font) noexcept;

// void pango_glyph_string_free (PangoGlyphString* string);
// void pango_glyph_string_free (::PangoGlyphString* string);
// IGNORE; marked ignore

// void pango_glyph_string_get_logical_widths (PangoGlyphString* glyphs, const char* text, int length, int embedding_level);
// void pango_glyph_string_get_logical_widths (::PangoGlyphString* glyphs, const char* text, gint length, gint embedding_level);
// SKIP; inconsistent array info

// int pango_glyph_string_get_width (PangoGlyphString* glyphs);
// gint pango_glyph_string_get_width (::PangoGlyphString* glyphs);
GI_INLINE_DECL gint get_width () noexcept;

// void pango_glyph_string_index_to_x (PangoGlyphString* glyphs, const char* text, int length, PangoAnalysis* analysis, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint index_, gboolean trailing, gint* x_pos);
GI_INLINE_DECL void index_to_x (const std::string & text, gint length, Pango::Analysis analysis, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL gint index_to_x (const std::string & text, gint length, Pango::Analysis analysis, gint index_, gboolean trailing) noexcept;

// void pango_glyph_string_index_to_x_full (PangoGlyphString* glyphs, const char* text, int length, PangoAnalysis* analysis, PangoLogAttr* attrs, int index_, gboolean trailing, int* x_pos);
// void pango_glyph_string_index_to_x_full (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint index_, gboolean trailing, gint* x_pos);
GI_INLINE_DECL void index_to_x_full (const std::string & text, gint length, Pango::Analysis analysis, Pango::LogAttr attrs, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL void index_to_x_full (const std::string & text, gint length, Pango::Analysis analysis, gint index_, gboolean trailing, gint & x_pos) noexcept;
GI_INLINE_DECL gint index_to_x_full (const std::string & text, gint length, Pango::Analysis analysis, Pango::LogAttr attrs, gint index_, gboolean trailing) noexcept;
GI_INLINE_DECL gint index_to_x_full (const std::string & text, gint length, Pango::Analysis analysis, gint index_, gboolean trailing) noexcept;

// void pango_glyph_string_set_size (PangoGlyphString* string, int new_len);
// void pango_glyph_string_set_size (::PangoGlyphString* string, gint new_len);
GI_INLINE_DECL void set_size (gint new_len) noexcept;

// void pango_glyph_string_x_to_index (PangoGlyphString* glyphs, const char* text, int length, PangoAnalysis* analysis, int x_pos, int* index_, int* trailing);
// void pango_glyph_string_x_to_index (::PangoGlyphString* glyphs, const char* text, gint length, ::PangoAnalysis* analysis, gint x_pos, gint* index_, gint* trailing);
GI_INLINE_DECL void x_to_index (const std::string & text, gint length, Pango::Analysis analysis, gint x_pos, gint & index_, gint & trailing) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> x_to_index (const std::string & text, gint length, Pango::Analysis analysis, gint x_pos) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra_def.hpp>)
#include <pango/glyphstring_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphstring_extra.hpp>)
#include <pango/glyphstring_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphString : public GI_PANGO_GLYPHSTRING_BASE
{ typedef GI_PANGO_GLYPHSTRING_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphString>
{ typedef Pango::GlyphString type; }; 

} // namespace repository

} // namespace gi

#endif
