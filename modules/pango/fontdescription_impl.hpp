// AUTO-GENERATED

#ifndef _GI_PANGO_FONTDESCRIPTION_IMPL_HPP_
#define _GI_PANGO_FONTDESCRIPTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontDescription* pango_font_description_new ();
// ::PangoFontDescription* pango_font_description_new ();
Pango::FontDescription base::FontDescriptionBase::new_ () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean pango_font_description_better_match (const PangoFontDescription* desc, const PangoFontDescription* old_match, const PangoFontDescription* new_match);
// gboolean pango_font_description_better_match (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
bool base::FontDescriptionBase::better_match (const Pango::FontDescription & old_match, const Pango::FontDescription & new_match) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_better_match;
  auto new_match_to_c = gi::unwrap (new_match, gi::transfer_none, gi::direction_in);
  auto old_match_to_c = gi::unwrap (old_match, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (old_match_to_c), (const ::PangoFontDescription*) (new_match_to_c));
  return _temp_ret;
}
bool base::FontDescriptionBase::better_match (const Pango::FontDescription & new_match) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc, const ::PangoFontDescription* old_match, const ::PangoFontDescription* new_match);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_better_match;
  auto new_match_to_c = gi::unwrap (new_match, gi::transfer_none, gi::direction_in);
  auto old_match_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (old_match_to_c), (const ::PangoFontDescription*) (new_match_to_c));
  return _temp_ret;
}

// PangoFontDescription* pango_font_description_copy (const PangoFontDescription* desc);
// ::PangoFontDescription* pango_font_description_copy (const ::PangoFontDescription* desc);
Pango::FontDescription base::FontDescriptionBase::copy () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_copy;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* pango_font_description_copy_static (const PangoFontDescription* desc);
// ::PangoFontDescription* pango_font_description_copy_static (const ::PangoFontDescription* desc);
Pango::FontDescription base::FontDescriptionBase::copy_static () const noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_copy_static;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean pango_font_description_equal (const PangoFontDescription* desc1, const PangoFontDescription* desc2);
// gboolean pango_font_description_equal (const ::PangoFontDescription* desc1, const ::PangoFontDescription* desc2);
bool base::FontDescriptionBase::equal (const Pango::FontDescription & desc2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc1, const ::PangoFontDescription* desc2);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_equal;
  auto desc2_to_c = gi::unwrap (desc2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc2_to_c));
  return _temp_ret;
}

// void pango_font_description_free (PangoFontDescription* desc);
// void pango_font_description_free (::PangoFontDescription* desc);
// IGNORE; marked ignore

// const char* pango_font_description_get_family (const PangoFontDescription* desc);
// const char* pango_font_description_get_family (const ::PangoFontDescription* desc);
std::string base::FontDescriptionBase::get_family () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_family;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoGravity pango_font_description_get_gravity (const PangoFontDescription* desc);
// ::PangoGravity pango_font_description_get_gravity (const ::PangoFontDescription* desc);
Pango::Gravity base::FontDescriptionBase::get_gravity () const noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_gravity;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoFontMask pango_font_description_get_set_fields (const PangoFontDescription* desc);
// ::PangoFontMask pango_font_description_get_set_fields (const ::PangoFontDescription* desc);
Pango::FontMask base::FontDescriptionBase::get_set_fields () const noexcept
{
  typedef ::PangoFontMask (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_set_fields;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint pango_font_description_get_size (const PangoFontDescription* desc);
// gint pango_font_description_get_size (const ::PangoFontDescription* desc);
gint base::FontDescriptionBase::get_size () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_size;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_font_description_get_size_is_absolute (const PangoFontDescription* desc);
// gboolean pango_font_description_get_size_is_absolute (const ::PangoFontDescription* desc);
bool base::FontDescriptionBase::get_size_is_absolute () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_size_is_absolute;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// PangoStretch pango_font_description_get_stretch (const PangoFontDescription* desc);
// ::PangoStretch pango_font_description_get_stretch (const ::PangoFontDescription* desc);
Pango::Stretch base::FontDescriptionBase::get_stretch () const noexcept
{
  typedef ::PangoStretch (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_stretch;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoStyle pango_font_description_get_style (const PangoFontDescription* desc);
// ::PangoStyle pango_font_description_get_style (const ::PangoFontDescription* desc);
Pango::Style base::FontDescriptionBase::get_style () const noexcept
{
  typedef ::PangoStyle (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_style;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoVariant pango_font_description_get_variant (const PangoFontDescription* desc);
// ::PangoVariant pango_font_description_get_variant (const ::PangoFontDescription* desc);
Pango::Variant base::FontDescriptionBase::get_variant () const noexcept
{
  typedef ::PangoVariant (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_variant;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const char* pango_font_description_get_variations (const PangoFontDescription* desc);
// const char* pango_font_description_get_variations (const ::PangoFontDescription* desc);
std::string base::FontDescriptionBase::get_variations () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_variations;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoWeight pango_font_description_get_weight (const PangoFontDescription* desc);
// ::PangoWeight pango_font_description_get_weight (const ::PangoFontDescription* desc);
Pango::Weight base::FontDescriptionBase::get_weight () const noexcept
{
  typedef ::PangoWeight (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_get_weight;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint pango_font_description_hash (const PangoFontDescription* desc);
// guint pango_font_description_hash (const ::PangoFontDescription* desc);
guint base::FontDescriptionBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_hash;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return _temp_ret;
}

// void pango_font_description_merge (PangoFontDescription* desc, const PangoFontDescription* desc_to_merge, gboolean replace_existing);
// void pango_font_description_merge (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
void base::FontDescriptionBase::merge (const Pango::FontDescription & desc_to_merge, gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_merge;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = gi::unwrap (desc_to_merge, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}
void base::FontDescriptionBase::merge (gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_merge;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = nullptr;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}

// void pango_font_description_merge_static (PangoFontDescription* desc, const PangoFontDescription* desc_to_merge, gboolean replace_existing);
// void pango_font_description_merge_static (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
void base::FontDescriptionBase::merge_static (const Pango::FontDescription & desc_to_merge, gboolean replace_existing) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const ::PangoFontDescription* desc_to_merge, gboolean replace_existing);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_merge_static;
  auto replace_existing_to_c = replace_existing;
  auto desc_to_merge_to_c = gi::unwrap (desc_to_merge, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const ::PangoFontDescription*) (desc_to_merge_to_c), (gboolean) (replace_existing_to_c));
}

// void pango_font_description_set_absolute_size (PangoFontDescription* desc, double size);
// void pango_font_description_set_absolute_size (::PangoFontDescription* desc, gdouble size);
void base::FontDescriptionBase::set_absolute_size (gdouble size) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, gdouble size);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_absolute_size;
  auto size_to_c = size;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (gdouble) (size_to_c));
}

// void pango_font_description_set_family (PangoFontDescription* desc, const char* family);
// void pango_font_description_set_family (::PangoFontDescription* desc, const char* family);
void base::FontDescriptionBase::set_family (const std::string & family) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_family;
  auto family_to_c = gi::unwrap (family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (family_to_c));
}

// void pango_font_description_set_family_static (PangoFontDescription* desc, const char* family);
// void pango_font_description_set_family_static (::PangoFontDescription* desc, const char* family);
void base::FontDescriptionBase::set_family_static (const std::string & family) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_family_static;
  auto family_to_c = gi::unwrap (family, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (family_to_c));
}

// void pango_font_description_set_gravity (PangoFontDescription* desc, PangoGravity gravity);
// void pango_font_description_set_gravity (::PangoFontDescription* desc, ::PangoGravity gravity);
void base::FontDescriptionBase::set_gravity (Pango::Gravity gravity) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_gravity;
  auto gravity_to_c = gi::unwrap (gravity);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoGravity) (gravity_to_c));
}

// void pango_font_description_set_size (PangoFontDescription* desc, gint size);
// void pango_font_description_set_size (::PangoFontDescription* desc, gint size);
void base::FontDescriptionBase::set_size (gint size) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_size;
  auto size_to_c = size;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (gint) (size_to_c));
}

// void pango_font_description_set_stretch (PangoFontDescription* desc, PangoStretch stretch);
// void pango_font_description_set_stretch (::PangoFontDescription* desc, ::PangoStretch stretch);
void base::FontDescriptionBase::set_stretch (Pango::Stretch stretch) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoStretch stretch);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_stretch;
  auto stretch_to_c = gi::unwrap (stretch);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoStretch) (stretch_to_c));
}

// void pango_font_description_set_style (PangoFontDescription* desc, PangoStyle style);
// void pango_font_description_set_style (::PangoFontDescription* desc, ::PangoStyle style);
void base::FontDescriptionBase::set_style (Pango::Style style) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_style;
  auto style_to_c = gi::unwrap (style);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoStyle) (style_to_c));
}

// void pango_font_description_set_variant (PangoFontDescription* desc, PangoVariant variant);
// void pango_font_description_set_variant (::PangoFontDescription* desc, ::PangoVariant variant);
void base::FontDescriptionBase::set_variant (Pango::Variant variant) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoVariant variant);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_variant;
  auto variant_to_c = gi::unwrap (variant);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoVariant) (variant_to_c));
}

// void pango_font_description_set_variations (PangoFontDescription* desc, const char* variations);
// void pango_font_description_set_variations (::PangoFontDescription* desc, const char* variations);
void base::FontDescriptionBase::set_variations (const std::string & variations) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_variations;
  auto variations_to_c = gi::unwrap (variations, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}
void base::FontDescriptionBase::set_variations () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_variations;
  auto variations_to_c = nullptr;
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}

// void pango_font_description_set_variations_static (PangoFontDescription* desc, const char* variations);
// void pango_font_description_set_variations_static (::PangoFontDescription* desc, const char* variations);
void base::FontDescriptionBase::set_variations_static (const std::string & variations) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, const char* variations);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_variations_static;
  auto variations_to_c = gi::unwrap (variations, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (const char*) (variations_to_c));
}

// void pango_font_description_set_weight (PangoFontDescription* desc, PangoWeight weight);
// void pango_font_description_set_weight (::PangoFontDescription* desc, ::PangoWeight weight);
void base::FontDescriptionBase::set_weight (Pango::Weight weight) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoWeight weight);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_set_weight;
  auto weight_to_c = gi::unwrap (weight);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoWeight) (weight_to_c));
}

// char* pango_font_description_to_filename (const PangoFontDescription* desc);
// char* pango_font_description_to_filename (const ::PangoFontDescription* desc);
std::string base::FontDescriptionBase::to_filename () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_to_filename;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* pango_font_description_to_string (const PangoFontDescription* desc);
// char* pango_font_description_to_string (const ::PangoFontDescription* desc);
std::string base::FontDescriptionBase::to_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_to_string;
  auto _temp_ret = call_wrap_v ((const ::PangoFontDescription*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_font_description_unset_fields (PangoFontDescription* desc, PangoFontMask to_unset);
// void pango_font_description_unset_fields (::PangoFontDescription* desc, ::PangoFontMask to_unset);
void base::FontDescriptionBase::unset_fields (Pango::FontMask to_unset) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontDescription* desc, ::PangoFontMask to_unset);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_unset_fields;
  auto to_unset_to_c = gi::unwrap (to_unset);
  call_wrap_v ((::PangoFontDescription*) (gobj_()), (::PangoFontMask) (to_unset_to_c));
}

// PangoFontDescription* pango_font_description_from_string (const char* str);
// ::PangoFontDescription* pango_font_description_from_string (const char* str);
Pango::FontDescription base::FontDescriptionBase::from_string (const std::string & str) noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_description_from_string;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_def_impl.hpp>)
#include <pango/fontdescription_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontdescription_extra_impl.hpp>)
#include <pango/fontdescription_extra_impl.hpp>
#endif
#endif

#endif
