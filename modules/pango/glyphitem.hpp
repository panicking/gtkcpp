// AUTO-GENERATED

#ifndef _GI_PANGO_GLYPHITEM_HPP_
#define _GI_PANGO_GLYPHITEM_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrList;
class GlyphString;
class Item;

class GlyphItem;

namespace base {


#define GI_PANGO_GLYPHITEM_BASE base::GlyphItemBase
class GlyphItemBase : public gi::detail::GBoxedWrapper<GlyphItemBase, ::PangoGlyphItem>
{
typedef gi::detail::GBoxedWrapper<GlyphItemBase, ::PangoGlyphItem> super_type;
public:

GlyphItemBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_glyph_item_get_type(); } 

// ::PangoItem* GlyphItem::item (const ::PangoGlyphItem* obj);
// ::PangoItem* GlyphItem::item (const ::PangoGlyphItem* obj);
GI_INLINE_DECL Pango::Item item_ () const noexcept;

// ::PangoGlyphString* GlyphItem::glyphs (const ::PangoGlyphItem* obj);
// ::PangoGlyphString* GlyphItem::glyphs (const ::PangoGlyphItem* obj);
GI_INLINE_DECL Pango::GlyphString glyphs_ () const noexcept;

// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj);
// gint GlyphItem::y_offset (const ::PangoGlyphItem* obj);
GI_INLINE_DECL gint y_offset_ () const noexcept;

//  GlyphItem::y_offset (::PangoGlyphItem* obj, gint _value);
// void GlyphItem::y_offset (::PangoGlyphItem* obj, gint _value);
GI_INLINE_DECL void y_offset_ (gint _value) noexcept;

// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj);
// gint GlyphItem::start_x_offset (const ::PangoGlyphItem* obj);
GI_INLINE_DECL gint start_x_offset_ () const noexcept;

//  GlyphItem::start_x_offset (::PangoGlyphItem* obj, gint _value);
// void GlyphItem::start_x_offset (::PangoGlyphItem* obj, gint _value);
GI_INLINE_DECL void start_x_offset_ (gint _value) noexcept;

// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj);
// gint GlyphItem::end_x_offset (const ::PangoGlyphItem* obj);
GI_INLINE_DECL gint end_x_offset_ () const noexcept;

//  GlyphItem::end_x_offset (::PangoGlyphItem* obj, gint _value);
// void GlyphItem::end_x_offset (::PangoGlyphItem* obj, gint _value);
GI_INLINE_DECL void end_x_offset_ (gint _value) noexcept;

// GSList* pango_glyph_item_apply_attrs (PangoGlyphItem* glyph_item, const char* text, PangoAttrList* list);
// ::GSList* pango_glyph_item_apply_attrs (::PangoGlyphItem* glyph_item, const char* text, ::PangoAttrList* list);
GI_INLINE_DECL std::vector<Pango::GlyphItem> apply_attrs (const std::string & text, Pango::AttrList list) noexcept;

// PangoGlyphItem* pango_glyph_item_copy (PangoGlyphItem* orig);
// ::PangoGlyphItem* pango_glyph_item_copy (::PangoGlyphItem* orig);
GI_INLINE_DECL Pango::GlyphItem copy () noexcept;

// void pango_glyph_item_free (PangoGlyphItem* glyph_item);
// void pango_glyph_item_free (::PangoGlyphItem* glyph_item);
// IGNORE; marked ignore

// void pango_glyph_item_get_logical_widths (PangoGlyphItem* glyph_item, const char* text);
// void pango_glyph_item_get_logical_widths (::PangoGlyphItem* glyph_item, const char* text);
// SKIP; inconsistent array info

// void pango_glyph_item_letter_space (PangoGlyphItem* glyph_item, const char* text, int letter_spacing);
// void pango_glyph_item_letter_space (::PangoGlyphItem* glyph_item, const char* text, gint letter_spacing);
// SKIP; inconsistent array info

// PangoGlyphItem* pango_glyph_item_split (PangoGlyphItem* orig, const char* text, int split_index);
// ::PangoGlyphItem* pango_glyph_item_split (::PangoGlyphItem* orig, const char* text, gint split_index);
GI_INLINE_DECL Pango::GlyphItem split (const std::string & text, gint split_index) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra_def.hpp>)
#include <pango/glyphitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/glyphitem_extra.hpp>)
#include <pango/glyphitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class GlyphItem : public GI_PANGO_GLYPHITEM_BASE
{ typedef GI_PANGO_GLYPHITEM_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoGlyphItem>
{ typedef Pango::GlyphItem type; }; 

} // namespace repository

} // namespace gi

#endif
