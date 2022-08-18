// AUTO-GENERATED

#ifndef _GI_PANGO_FONTDESCRIPTION_HPP_
#define _GI_PANGO_FONTDESCRIPTION_HPP_


namespace gi {

namespace repository {

namespace Pango {


class FontDescription;

namespace base {


#define GI_PANGO_FONTDESCRIPTION_BASE base::FontDescriptionBase
class FontDescriptionBase : public gi::detail::GBoxedWrapper<FontDescriptionBase, ::PangoFontDescription>
{
typedef gi::detail::GBoxedWrapper<FontDescriptionBase, ::PangoFontDescription> super_type;
public:

FontDescriptionBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_font_description_get_type(); } 

// PangoFontDescription* pango_font_description_new ();
// ::PangoFontDescription* pango_font_description_new ();
static GI_INLINE_DECL Pango::FontDescription new_ () noexcept;

// gboolean pango_font_description_better_match (const PangoFontDescription* desc, const PangoFontDescription* old_match, const PangoFontDescription* new_match);
// gboolean pango_font_description_better_match (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
GI_INLINE_DECL bool better_match (const Pango::FontDescription & old_match, const Pango::FontDescription & new_match) const noexcept;
GI_INLINE_DECL bool better_match (const Pango::FontDescription & new_match) const noexcept;

// PangoFontDescription* pango_font_description_copy (const PangoFontDescription* desc);
// ::PangoFontDescription* pango_font_description_copy (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::FontDescription copy () const noexcept;

// PangoFontDescription* pango_font_description_copy_static (const PangoFontDescription* desc);
// ::PangoFontDescription* pango_font_description_copy_static (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::FontDescription copy_static () const noexcept;

// gboolean pango_font_description_equal (const PangoFontDescription* desc1, const PangoFontDescription* desc2);
// gboolean pango_font_description_equal (const ::PangoFontDescription* desc1, const ::PangoFontDescription* desc2);
GI_INLINE_DECL bool equal (const Pango::FontDescription & desc2) const noexcept;

// void pango_font_description_free (PangoFontDescription* desc);
// void pango_font_description_free (::PangoFontDescription* desc);
// IGNORE; marked ignore

// const char* pango_font_description_get_family (const PangoFontDescription* desc);
// const char* pango_font_description_get_family (const ::PangoFontDescription* desc);
GI_INLINE_DECL std::string get_family () const noexcept;

// PangoGravity pango_font_description_get_gravity (const PangoFontDescription* desc);
// ::PangoGravity pango_font_description_get_gravity (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Gravity get_gravity () const noexcept;

// PangoFontMask pango_font_description_get_set_fields (const PangoFontDescription* desc);
// ::PangoFontMask pango_font_description_get_set_fields (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::FontMask get_set_fields () const noexcept;

// gint pango_font_description_get_size (const PangoFontDescription* desc);
// gint pango_font_description_get_size (const ::PangoFontDescription* desc);
GI_INLINE_DECL gint get_size () const noexcept;

// gboolean pango_font_description_get_size_is_absolute (const PangoFontDescription* desc);
// gboolean pango_font_description_get_size_is_absolute (const ::PangoFontDescription* desc);
GI_INLINE_DECL bool get_size_is_absolute () const noexcept;

// PangoStretch pango_font_description_get_stretch (const PangoFontDescription* desc);
// ::PangoStretch pango_font_description_get_stretch (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Stretch get_stretch () const noexcept;

// PangoStyle pango_font_description_get_style (const PangoFontDescription* desc);
// ::PangoStyle pango_font_description_get_style (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Style get_style () const noexcept;

// PangoVariant pango_font_description_get_variant (const PangoFontDescription* desc);
// ::PangoVariant pango_font_description_get_variant (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Variant get_variant () const noexcept;

// const char* pango_font_description_get_variations (const PangoFontDescription* desc);
// const char* pango_font_description_get_variations (const ::PangoFontDescription* desc);
GI_INLINE_DECL std::string get_variations () const noexcept;

// PangoWeight pango_font_description_get_weight (const PangoFontDescription* desc);
// ::PangoWeight pango_font_description_get_weight (const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Weight get_weight () const noexcept;

// guint pango_font_description_hash (const PangoFontDescription* desc);
// guint pango_font_description_hash (const ::PangoFontDescription* desc);
GI_INLINE_DECL guint hash () const noexcept;

// void pango_font_description_merge (PangoFontDescription* desc, const PangoFontDescription* desc_to_merge, gboolean replace_existing);
// void pango_font_description_merge (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
GI_INLINE_DECL void merge (const Pango::FontDescription & desc_to_merge, gboolean replace_existing) noexcept;
GI_INLINE_DECL void merge (gboolean replace_existing) noexcept;

// void pango_font_description_merge_static (PangoFontDescription* desc, const PangoFontDescription* desc_to_merge, gboolean replace_existing);
// void pango_font_description_merge_static (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
GI_INLINE_DECL void merge_static (const Pango::FontDescription & desc_to_merge, gboolean replace_existing) noexcept;

// void pango_font_description_set_absolute_size (PangoFontDescription* desc, double size);
// void pango_font_description_set_absolute_size (::PangoFontDescription* desc, gdouble size);
GI_INLINE_DECL void set_absolute_size (gdouble size) noexcept;

// void pango_font_description_set_family (PangoFontDescription* desc, const char* family);
// void pango_font_description_set_family (::PangoFontDescription* desc, const char* family);
GI_INLINE_DECL void set_family (const std::string & family) noexcept;

// void pango_font_description_set_family_static (PangoFontDescription* desc, const char* family);
// void pango_font_description_set_family_static (::PangoFontDescription* desc, const char* family);
GI_INLINE_DECL void set_family_static (const std::string & family) noexcept;

// void pango_font_description_set_gravity (PangoFontDescription* desc, PangoGravity gravity);
// void pango_font_description_set_gravity (::PangoFontDescription* desc, ::PangoGravity gravity);
GI_INLINE_DECL void set_gravity (Pango::Gravity gravity) noexcept;

// void pango_font_description_set_size (PangoFontDescription* desc, gint size);
// void pango_font_description_set_size (::PangoFontDescription* desc, gint size);
GI_INLINE_DECL void set_size (gint size) noexcept;

// void pango_font_description_set_stretch (PangoFontDescription* desc, PangoStretch stretch);
// void pango_font_description_set_stretch (::PangoFontDescription* desc, ::PangoStretch stretch);
GI_INLINE_DECL void set_stretch (Pango::Stretch stretch) noexcept;

// void pango_font_description_set_style (PangoFontDescription* desc, PangoStyle style);
// void pango_font_description_set_style (::PangoFontDescription* desc, ::PangoStyle style);
GI_INLINE_DECL void set_style (Pango::Style style) noexcept;

// void pango_font_description_set_variant (PangoFontDescription* desc, PangoVariant variant);
// void pango_font_description_set_variant (::PangoFontDescription* desc, ::PangoVariant variant);
GI_INLINE_DECL void set_variant (Pango::Variant variant) noexcept;

// void pango_font_description_set_variations (PangoFontDescription* desc, const char* variations);
// void pango_font_description_set_variations (::PangoFontDescription* desc, const char* variations);
GI_INLINE_DECL void set_variations (const std::string & variations) noexcept;
GI_INLINE_DECL void set_variations () noexcept;

// void pango_font_description_set_variations_static (PangoFontDescription* desc, const char* variations);
// void pango_font_description_set_variations_static (::PangoFontDescription* desc, const char* variations);
GI_INLINE_DECL void set_variations_static (const std::string & variations) noexcept;

// void pango_font_description_set_weight (PangoFontDescription* desc, PangoWeight weight);
// void pango_font_description_set_weight (::PangoFontDescription* desc, ::PangoWeight weight);
GI_INLINE_DECL void set_weight (Pango::Weight weight) noexcept;

// char* pango_font_description_to_filename (const PangoFontDescription* desc);
// char* pango_font_description_to_filename (const ::PangoFontDescription* desc);
GI_INLINE_DECL std::string to_filename () const noexcept;

// char* pango_font_description_to_string (const PangoFontDescription* desc);
// char* pango_font_description_to_string (const ::PangoFontDescription* desc);
GI_INLINE_DECL std::string to_string () const noexcept;

// void pango_font_description_unset_fields (PangoFontDescription* desc, PangoFontMask to_unset);
// void pango_font_description_unset_fields (::PangoFontDescription* desc, ::PangoFontMask to_unset);
GI_INLINE_DECL void unset_fields (Pango::FontMask to_unset) noexcept;

// PangoFontDescription* pango_font_description_from_string (const char* str);
// ::PangoFontDescription* pango_font_description_from_string (const char* str);
static GI_INLINE_DECL Pango::FontDescription from_string (const std::string & str) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_def.hpp>)
#include <pango/fontdescription_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra.hpp>)
#include <pango/fontdescription_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontDescription : public GI_PANGO_FONTDESCRIPTION_BASE
{ typedef GI_PANGO_FONTDESCRIPTION_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontDescription>
{ typedef Pango::FontDescription type; }; 

} // namespace repository

} // namespace gi

#endif
