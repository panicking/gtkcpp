// AUTO-GENERATED

#ifndef _GI_PANGO_FONT_HPP_
#define _GI_PANGO_FONT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Context;
class Coverage;
class FontDescription;
class FontFace;
class FontMap;
class FontMetrics;
class Language;
class Rectangle;

class Font;

namespace base {


#define GI_PANGO_FONT_BASE base::FontBase
class FontBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFont BaseObjectType;

FontBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_get_type(); } 

// void pango_font_descriptions_free (PangoFontDescription** descs, int n_descs);
// void pango_font_descriptions_free (::PangoFontDescription** descs, gint n_descs);
// IGNORE; marked ignore

// PangoFont* pango_font_deserialize (PangoContext* context, GBytes* bytes, GError ** error);
// ::PangoFont* pango_font_deserialize (::PangoContext* context, ::GBytes* bytes, GError ** error);
static GI_INLINE_DECL Pango::Font deserialize (Pango::Context context, GLib::Bytes bytes);
static GI_INLINE_DECL Pango::Font deserialize (Pango::Context context, GLib::Bytes bytes, GLib::Error * _error) noexcept;

// PangoFontDescription* pango_font_describe (PangoFont* font);
// ::PangoFontDescription* pango_font_describe (::PangoFont* font);
GI_INLINE_DECL Pango::FontDescription describe () noexcept;

// PangoFontDescription* pango_font_describe_with_absolute_size (PangoFont* font);
// ::PangoFontDescription* pango_font_describe_with_absolute_size (::PangoFont* font);
GI_INLINE_DECL Pango::FontDescription describe_with_absolute_size () noexcept;

// PangoCoverage* pango_font_get_coverage (PangoFont* font, PangoLanguage* language);
// ::PangoCoverage* pango_font_get_coverage (::PangoFont* font, ::PangoLanguage* language);
GI_INLINE_DECL Pango::Coverage get_coverage (Pango::Language language) noexcept;

// PangoFontFace* pango_font_get_face (PangoFont* font);
// ::PangoFontFace* pango_font_get_face (::PangoFont* font);
GI_INLINE_DECL Pango::FontFace get_face () noexcept;

// void pango_font_get_features (PangoFont* font, hb_feature_t* features, guint len, guint* num_features);
// void pango_font_get_features (::PangoFont* font, ::hb_feature_t** features, guint len, guint* num_features);
// SKIP; inconsistent out features pointer depth (1 vs 2)

// PangoFontMap* pango_font_get_font_map (PangoFont* font);
// ::PangoFontMap* pango_font_get_font_map (::PangoFont* font);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// void pango_font_get_glyph_extents (PangoFont* font, PangoGlyph glyph, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_font_get_glyph_extents (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
GI_INLINE_DECL void get_glyph_extents (::PangoGlyph glyph, Pango::Rectangle * ink_rect = nullptr, Pango::Rectangle * logical_rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_glyph_extents (::PangoGlyph glyph) noexcept;

// hb_font_t* pango_font_get_hb_font (PangoFont* font);
// ::hb_font_t* pango_font_get_hb_font (::PangoFont* font);
GI_INLINE_DECL HarfBuzz::font_t get_hb_font () noexcept;

// PangoLanguage** pango_font_get_languages (PangoFont* font);
// ::PangoLanguage** pango_font_get_languages (::PangoFont* font);
GI_INLINE_DECL std::vector<Pango::Language> get_languages () noexcept;

// PangoFontMetrics* pango_font_get_metrics (PangoFont* font, PangoLanguage* language);
// ::PangoFontMetrics* pango_font_get_metrics (::PangoFont* font, ::PangoLanguage* language);
GI_INLINE_DECL Pango::FontMetrics get_metrics (Pango::Language language) noexcept;
GI_INLINE_DECL Pango::FontMetrics get_metrics () noexcept;

// gboolean pango_font_has_char (PangoFont* font, gunichar wc);
// gboolean pango_font_has_char (::PangoFont* font, gunichar wc);
GI_INLINE_DECL bool has_char (gunichar wc) noexcept;

// GBytes* pango_font_serialize (PangoFont* font);
// ::GBytes* pango_font_serialize (::PangoFont* font);
GI_INLINE_DECL GLib::Bytes serialize () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/font_extra_def.hpp>)
#include <pango/font_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/font_extra.hpp>)
#include <pango/font_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Font : public GI_PANGO_FONT_BASE
{ typedef GI_PANGO_FONT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFont>
{ typedef Pango::Font type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontClassDef
{
typedef FontClassDef self;
public:
typedef Pango::Font instance_type;
typedef ::PangoFontClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// hb_font_t* Font::create_hb_font (PangoFont* font);
// ::hb_font_t* Font::create_hb_font (::PangoFont* font);
virtual HarfBuzz::font_t create_hb_font_ () noexcept = 0;

// PangoFontDescription* Font::describe (PangoFont* font);
// ::PangoFontDescription* Font::describe (::PangoFont* font);
virtual Pango::FontDescription describe_ () noexcept = 0;

// PangoFontDescription* Font::describe_absolute (PangoFont* font);
// ::PangoFontDescription* Font::describe_absolute (::PangoFont* font);
virtual Pango::FontDescription describe_absolute_ () noexcept = 0;

// PangoCoverage* Font::get_coverage (PangoFont* font, PangoLanguage* language);
// ::PangoCoverage* Font::get_coverage (::PangoFont* font, ::PangoLanguage* language);
virtual Pango::Coverage get_coverage_ (Pango::Language language) noexcept = 0;

// void Font::get_features (PangoFont* font, hb_feature_t* features, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font, ::hb_feature_t** features, guint* len, guint* num_features);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMap* Font::get_font_map (PangoFont* font);
// ::PangoFontMap* Font::get_font_map (::PangoFont* font);
virtual Pango::FontMap get_font_map_ () noexcept = 0;

// void Font::get_glyph_extents (PangoFont* font, PangoGlyph glyph, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void Font::get_glyph_extents (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMetrics* Font::get_metrics (PangoFont* font, PangoLanguage* language);
// ::PangoFontMetrics* Font::get_metrics (::PangoFont* font, ::PangoLanguage* language);
virtual Pango::FontMetrics get_metrics_ (Pango::Language language) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontClass: public detail::ClassTemplate<Pango::impl::internal::FontClassDef, GObject::impl::internal::ObjectClass>
{
typedef FontClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// hb_font_t* Font::create_hb_font (PangoFont* font);
// ::hb_font_t* Font::create_hb_font (::PangoFont* font);
GI_INLINE_DECL HarfBuzz::font_t create_hb_font_ () noexcept override;

// PangoFontDescription* Font::describe (PangoFont* font);
// ::PangoFontDescription* Font::describe (::PangoFont* font);
GI_INLINE_DECL Pango::FontDescription describe_ () noexcept override;

// PangoFontDescription* Font::describe_absolute (PangoFont* font);
// ::PangoFontDescription* Font::describe_absolute (::PangoFont* font);
GI_INLINE_DECL Pango::FontDescription describe_absolute_ () noexcept override;

// PangoCoverage* Font::get_coverage (PangoFont* font, PangoLanguage* language);
// ::PangoCoverage* Font::get_coverage (::PangoFont* font, ::PangoLanguage* language);
GI_INLINE_DECL Pango::Coverage get_coverage_ (Pango::Language language) noexcept override;

// void Font::get_features (PangoFont* font, hb_feature_t* features, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font, ::hb_feature_t** features, guint* len, guint* num_features);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMap* Font::get_font_map (PangoFont* font);
// ::PangoFontMap* Font::get_font_map (::PangoFont* font);
GI_INLINE_DECL Pango::FontMap get_font_map_ () noexcept override;

// void Font::get_glyph_extents (PangoFont* font, PangoGlyph glyph, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void Font::get_glyph_extents (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMetrics* Font::get_metrics (PangoFont* font, PangoLanguage* language);
// ::PangoFontMetrics* Font::get_metrics (::PangoFont* font, ::PangoLanguage* language);
GI_INLINE_DECL Pango::FontMetrics get_metrics_ (Pango::Language language) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FontImpl = detail::ObjectImpl<Font, internal::FontClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
