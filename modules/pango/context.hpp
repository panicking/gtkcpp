// AUTO-GENERATED

#ifndef _GI_PANGO_CONTEXT_HPP_
#define _GI_PANGO_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Font;
class FontDescription;
class FontFamily;
class FontMap;
class FontMetrics;
class Fontset;
class Language;
class Matrix;

class Context;

namespace base {


#define GI_PANGO_CONTEXT_BASE base::ContextBase
class ContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoContext BaseObjectType;

ContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_context_get_type(); } 

// PangoContext* pango_context_new ();
// ::PangoContext* pango_context_new ();
static GI_INLINE_DECL Pango::Context new_ () noexcept;

// void pango_context_changed (PangoContext* context);
// void pango_context_changed (::PangoContext* context);
GI_INLINE_DECL void changed () noexcept;

// PangoDirection pango_context_get_base_dir (PangoContext* context);
// ::PangoDirection pango_context_get_base_dir (::PangoContext* context);
GI_INLINE_DECL Pango::Direction get_base_dir () noexcept;

// PangoGravity pango_context_get_base_gravity (PangoContext* context);
// ::PangoGravity pango_context_get_base_gravity (::PangoContext* context);
GI_INLINE_DECL Pango::Gravity get_base_gravity () noexcept;

// PangoFontDescription* pango_context_get_font_description (PangoContext* context);
// ::PangoFontDescription* pango_context_get_font_description (::PangoContext* context);
GI_INLINE_DECL Pango::FontDescription get_font_description () noexcept;

// PangoFontMap* pango_context_get_font_map (PangoContext* context);
// ::PangoFontMap* pango_context_get_font_map (::PangoContext* context);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// PangoGravity pango_context_get_gravity (PangoContext* context);
// ::PangoGravity pango_context_get_gravity (::PangoContext* context);
GI_INLINE_DECL Pango::Gravity get_gravity () noexcept;

// PangoGravityHint pango_context_get_gravity_hint (PangoContext* context);
// ::PangoGravityHint pango_context_get_gravity_hint (::PangoContext* context);
GI_INLINE_DECL Pango::GravityHint get_gravity_hint () noexcept;

// PangoLanguage* pango_context_get_language (PangoContext* context);
// ::PangoLanguage* pango_context_get_language (::PangoContext* context);
GI_INLINE_DECL Pango::Language get_language () noexcept;

// const PangoMatrix* pango_context_get_matrix (PangoContext* context);
// const ::PangoMatrix* pango_context_get_matrix (::PangoContext* context);
GI_INLINE_DECL Pango::Matrix get_matrix () noexcept;

// PangoFontMetrics* pango_context_get_metrics (PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontMetrics* pango_context_get_metrics (::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
GI_INLINE_DECL Pango::FontMetrics get_metrics (const Pango::FontDescription & desc, Pango::Language language) noexcept;
GI_INLINE_DECL Pango::FontMetrics get_metrics () noexcept;

// gboolean pango_context_get_round_glyph_positions (PangoContext* context);
// gboolean pango_context_get_round_glyph_positions (::PangoContext* context);
GI_INLINE_DECL bool get_round_glyph_positions () noexcept;

// guint pango_context_get_serial (PangoContext* context);
// guint pango_context_get_serial (::PangoContext* context);
GI_INLINE_DECL guint get_serial () noexcept;

// void pango_context_list_families (PangoContext* context, PangoFontFamily*** families, int* n_families);
// void pango_context_list_families (::PangoContext* context, ::PangoFontFamily*** families, gint* n_families);
GI_INLINE_DECL void list_families (std::vector<Pango::FontFamily> & families) noexcept;

// PangoFont* pango_context_load_font (PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* pango_context_load_font (::PangoContext* context, const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Font load_font (const Pango::FontDescription & desc) noexcept;

// PangoFontset* pango_context_load_fontset (PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* pango_context_load_fontset (::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
GI_INLINE_DECL Pango::Fontset load_fontset (const Pango::FontDescription & desc, Pango::Language language) noexcept;

// void pango_context_set_base_dir (PangoContext* context, PangoDirection direction);
// void pango_context_set_base_dir (::PangoContext* context, ::PangoDirection direction);
GI_INLINE_DECL void set_base_dir (Pango::Direction direction) noexcept;

// void pango_context_set_base_gravity (PangoContext* context, PangoGravity gravity);
// void pango_context_set_base_gravity (::PangoContext* context, ::PangoGravity gravity);
GI_INLINE_DECL void set_base_gravity (Pango::Gravity gravity) noexcept;

// void pango_context_set_font_description (PangoContext* context, const PangoFontDescription* desc);
// void pango_context_set_font_description (::PangoContext* context, const ::PangoFontDescription* desc);
GI_INLINE_DECL void set_font_description (const Pango::FontDescription & desc) noexcept;

// void pango_context_set_font_map (PangoContext* context, PangoFontMap* font_map);
// void pango_context_set_font_map (::PangoContext* context, ::PangoFontMap* font_map);
GI_INLINE_DECL void set_font_map (Pango::FontMap font_map) noexcept;

// void pango_context_set_gravity_hint (PangoContext* context, PangoGravityHint hint);
// void pango_context_set_gravity_hint (::PangoContext* context, ::PangoGravityHint hint);
GI_INLINE_DECL void set_gravity_hint (Pango::GravityHint hint) noexcept;

// void pango_context_set_language (PangoContext* context, PangoLanguage* language);
// void pango_context_set_language (::PangoContext* context, ::PangoLanguage* language);
GI_INLINE_DECL void set_language (Pango::Language language) noexcept;

// void pango_context_set_matrix (PangoContext* context, const PangoMatrix* matrix);
// void pango_context_set_matrix (::PangoContext* context, const ::PangoMatrix* matrix);
GI_INLINE_DECL void set_matrix (const Pango::Matrix & matrix) noexcept;
GI_INLINE_DECL void set_matrix () noexcept;

// void pango_context_set_round_glyph_positions (PangoContext* context, gboolean round_positions);
// void pango_context_set_round_glyph_positions (::PangoContext* context, gboolean round_positions);
GI_INLINE_DECL void set_round_glyph_positions (gboolean round_positions) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/context_extra_def.hpp>)
#include <pango/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/context_extra.hpp>)
#include <pango/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Context : public GI_PANGO_CONTEXT_BASE
{ typedef GI_PANGO_CONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoContext>
{ typedef Pango::Context type; }; 

} // namespace repository

} // namespace gi

#endif
