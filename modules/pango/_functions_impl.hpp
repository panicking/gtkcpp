// AUTO-GENERATED

#ifndef _GI_PANGO__FUNCTIONS_IMPL_HPP_
#define _GI_PANGO__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace AttrTypeNS_ {

// const char* pango_attr_type_get_name (PangoAttrType type);
// const char* pango_attr_type_get_name (::PangoAttrType type);
std::string get_name (Pango::AttrType type) noexcept
{
  typedef const char* (*call_wrap_t) (::PangoAttrType type);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_type_get_name;
  auto type_to_c = gi::unwrap (type);
  auto _temp_ret = call_wrap_v ((::PangoAttrType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoAttrType pango_attr_type_register (const char* name);
// ::PangoAttrType pango_attr_type_register (const char* name);
Pango::AttrType register_ (const std::string & name) noexcept
{
  typedef ::PangoAttrType (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_type_register;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret);
}

} // namespace AttrTypeNS_

namespace GravityNS_ {

// PangoGravity pango_gravity_get_for_matrix (const PangoMatrix* matrix);
// ::PangoGravity pango_gravity_get_for_matrix (const ::PangoMatrix* matrix);
Pango::Gravity get_for_matrix (const Pango::Matrix & matrix) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_gravity_get_for_matrix;
  auto matrix_to_c = gi::unwrap (matrix, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::PangoMatrix*) (matrix_to_c));
  return gi::wrap (_temp_ret);
}
Pango::Gravity get_for_matrix () noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (const ::PangoMatrix* matrix);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_gravity_get_for_matrix;
  auto matrix_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::PangoMatrix*) (matrix_to_c));
  return gi::wrap (_temp_ret);
}

// PangoGravity pango_gravity_get_for_script (PangoScript script, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script (::PangoScript script, ::PangoGravity base_gravity, ::PangoGravityHint hint);
Pango::Gravity get_for_script (Pango::Script script, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoScript script, ::PangoGravity base_gravity, ::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_gravity_get_for_script;
  auto hint_to_c = gi::unwrap (hint);
  auto base_gravity_to_c = gi::unwrap (base_gravity);
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c), (::PangoGravity) (base_gravity_to_c), (::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret);
}

// PangoGravity pango_gravity_get_for_script_and_width (PangoScript script, gboolean wide, PangoGravity base_gravity, PangoGravityHint hint);
// ::PangoGravity pango_gravity_get_for_script_and_width (::PangoScript script, gboolean wide, ::PangoGravity base_gravity, ::PangoGravityHint hint);
Pango::Gravity get_for_script_and_width (Pango::Script script, gboolean wide, Pango::Gravity base_gravity, Pango::GravityHint hint) noexcept
{
  typedef ::PangoGravity (*call_wrap_t) (::PangoScript script, gboolean wide, ::PangoGravity base_gravity, ::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_gravity_get_for_script_and_width;
  auto hint_to_c = gi::unwrap (hint);
  auto base_gravity_to_c = gi::unwrap (base_gravity);
  auto wide_to_c = wide;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c), (gboolean) (wide_to_c), (::PangoGravity) (base_gravity_to_c), (::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret);
}

// double pango_gravity_to_rotation (PangoGravity gravity);
// gdouble pango_gravity_to_rotation (::PangoGravity gravity);
gdouble to_rotation (Pango::Gravity gravity) noexcept
{
  typedef gdouble (*call_wrap_t) (::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_gravity_to_rotation;
  auto gravity_to_c = gi::unwrap (gravity);
  auto _temp_ret = call_wrap_v ((::PangoGravity) (gravity_to_c));
  return _temp_ret;
}

} // namespace GravityNS_

namespace LayoutDeserializeErrorNS_ {

// GQuark pango_layout_deserialize_error_quark ();
// ::GQuark pango_layout_deserialize_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_deserialize_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace LayoutDeserializeErrorNS_

namespace ScriptNS_ {

// PangoScript pango_script_for_unichar (gunichar ch);
// ::PangoScript pango_script_for_unichar (gunichar ch);
// IGNORE; deprecated

// PangoLanguage* pango_script_get_sample_language (PangoScript script);
// ::PangoLanguage* pango_script_get_sample_language (::PangoScript script);
Pango::Language get_sample_language (Pango::Script script) noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (::PangoScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_get_sample_language;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoScript) (script_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace ScriptNS_

// PangoAttribute* pango_attr_allow_breaks_new (gboolean allow_breaks);
// ::PangoAttribute* pango_attr_allow_breaks_new (gboolean allow_breaks);
Pango::Attribute attr_allow_breaks_new (gboolean allow_breaks) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean allow_breaks);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_allow_breaks_new;
  auto allow_breaks_to_c = allow_breaks;
  auto _temp_ret = call_wrap_v ((gboolean) (allow_breaks_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_background_alpha_new (guint16 alpha);
// ::PangoAttribute* pango_attr_background_alpha_new (guint16 alpha);
Pango::Attribute attr_background_alpha_new (guint16 alpha) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_background_alpha_new;
  auto alpha_to_c = alpha;
  auto _temp_ret = call_wrap_v ((guint16) (alpha_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* pango_attr_background_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_background_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_background_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_baseline_shift_new (int shift);
// ::PangoAttribute* pango_attr_baseline_shift_new (gint shift);
Pango::Attribute attr_baseline_shift_new (gint shift) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint shift);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_baseline_shift_new;
  auto shift_to_c = shift;
  auto _temp_ret = call_wrap_v ((gint) (shift_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_attr_break (const char* text, int length, PangoAttrList* attr_list, int offset, PangoLogAttr* attrs, int attrs_len);
// void pango_attr_break (const char* text, gint length, ::PangoAttrList* attr_list, gint offset, ::PangoLogAttr** attrs, gint attrs_len);
// SKIP; inconsistent in attrs pointer depth (1 vs 2)

// PangoAttribute* pango_attr_fallback_new (gboolean enable_fallback);
// ::PangoAttribute* pango_attr_fallback_new (gboolean enable_fallback);
Pango::Attribute attr_fallback_new (gboolean enable_fallback) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean enable_fallback);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_fallback_new;
  auto enable_fallback_to_c = enable_fallback;
  auto _temp_ret = call_wrap_v ((gboolean) (enable_fallback_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_family_new (const char* family);
// ::PangoAttribute* pango_attr_family_new (const char* family);
Pango::Attribute attr_family_new (const std::string & family) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (const char* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_family_new;
  auto family_to_c = gi::unwrap (family, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (family_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_font_scale_new (PangoFontScale scale);
// ::PangoAttribute* pango_attr_font_scale_new (::PangoFontScale scale);
Pango::Attribute attr_font_scale_new (Pango::FontScale scale) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoFontScale scale);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_font_scale_new;
  auto scale_to_c = gi::unwrap (scale);
  auto _temp_ret = call_wrap_v ((::PangoFontScale) (scale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_foreground_alpha_new (guint16 alpha);
// ::PangoAttribute* pango_attr_foreground_alpha_new (guint16 alpha);
Pango::Attribute attr_foreground_alpha_new (guint16 alpha) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_foreground_alpha_new;
  auto alpha_to_c = alpha;
  auto _temp_ret = call_wrap_v ((guint16) (alpha_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* pango_attr_foreground_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_foreground_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_foreground_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_gravity_hint_new (PangoGravityHint hint);
// ::PangoAttribute* pango_attr_gravity_hint_new (::PangoGravityHint hint);
Pango::Attribute attr_gravity_hint_new (Pango::GravityHint hint) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoGravityHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_gravity_hint_new;
  auto hint_to_c = gi::unwrap (hint);
  auto _temp_ret = call_wrap_v ((::PangoGravityHint) (hint_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_gravity_new (PangoGravity gravity);
// ::PangoAttribute* pango_attr_gravity_new (::PangoGravity gravity);
Pango::Attribute attr_gravity_new (Pango::Gravity gravity) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoGravity gravity);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_gravity_new;
  auto gravity_to_c = gi::unwrap (gravity);
  auto _temp_ret = call_wrap_v ((::PangoGravity) (gravity_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_insert_hyphens_new (gboolean insert_hyphens);
// ::PangoAttribute* pango_attr_insert_hyphens_new (gboolean insert_hyphens);
Pango::Attribute attr_insert_hyphens_new (gboolean insert_hyphens) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean insert_hyphens);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_insert_hyphens_new;
  auto insert_hyphens_to_c = insert_hyphens;
  auto _temp_ret = call_wrap_v ((gboolean) (insert_hyphens_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_letter_spacing_new (int letter_spacing);
// ::PangoAttribute* pango_attr_letter_spacing_new (gint letter_spacing);
Pango::Attribute attr_letter_spacing_new (gint letter_spacing) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint letter_spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_letter_spacing_new;
  auto letter_spacing_to_c = letter_spacing;
  auto _temp_ret = call_wrap_v ((gint) (letter_spacing_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_line_height_new (double factor);
// ::PangoAttribute* pango_attr_line_height_new (gdouble factor);
Pango::Attribute attr_line_height_new (gdouble factor) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gdouble factor);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_line_height_new;
  auto factor_to_c = factor;
  auto _temp_ret = call_wrap_v ((gdouble) (factor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_line_height_new_absolute (int height);
// ::PangoAttribute* pango_attr_line_height_new_absolute (gint height);
Pango::Attribute attr_line_height_new_absolute (gint height) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_line_height_new_absolute;
  auto height_to_c = height;
  auto _temp_ret = call_wrap_v ((gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* pango_attr_overline_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_overline_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_overline_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_overline_new (PangoOverline overline);
// ::PangoAttribute* pango_attr_overline_new (::PangoOverline overline);
Pango::Attribute attr_overline_new (Pango::Overline overline) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoOverline overline);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_overline_new;
  auto overline_to_c = gi::unwrap (overline);
  auto _temp_ret = call_wrap_v ((::PangoOverline) (overline_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_rise_new (int rise);
// ::PangoAttribute* pango_attr_rise_new (gint rise);
Pango::Attribute attr_rise_new (gint rise) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gint rise);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_rise_new;
  auto rise_to_c = rise;
  auto _temp_ret = call_wrap_v ((gint) (rise_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_scale_new (double scale_factor);
// ::PangoAttribute* pango_attr_scale_new (gdouble scale_factor);
Pango::Attribute attr_scale_new (gdouble scale_factor) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gdouble scale_factor);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_scale_new;
  auto scale_factor_to_c = scale_factor;
  auto _temp_ret = call_wrap_v ((gdouble) (scale_factor_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_sentence_new ();
// ::PangoAttribute* pango_attr_sentence_new ();
Pango::Attribute attr_sentence_new () noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_sentence_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_show_new (PangoShowFlags flags);
// ::PangoAttribute* pango_attr_show_new (::PangoShowFlags flags);
Pango::Attribute attr_show_new (Pango::ShowFlags flags) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoShowFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_show_new;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::PangoShowFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_stretch_new (PangoStretch stretch);
// ::PangoAttribute* pango_attr_stretch_new (::PangoStretch stretch);
Pango::Attribute attr_stretch_new (Pango::Stretch stretch) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoStretch stretch);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_stretch_new;
  auto stretch_to_c = gi::unwrap (stretch);
  auto _temp_ret = call_wrap_v ((::PangoStretch) (stretch_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* pango_attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_strikethrough_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_strikethrough_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_strikethrough_new (gboolean strikethrough);
// ::PangoAttribute* pango_attr_strikethrough_new (gboolean strikethrough);
Pango::Attribute attr_strikethrough_new (gboolean strikethrough) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (gboolean strikethrough);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_strikethrough_new;
  auto strikethrough_to_c = strikethrough;
  auto _temp_ret = call_wrap_v ((gboolean) (strikethrough_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_style_new (PangoStyle style);
// ::PangoAttribute* pango_attr_style_new (::PangoStyle style);
Pango::Attribute attr_style_new (Pango::Style style) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoStyle style);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_style_new;
  auto style_to_c = gi::unwrap (style);
  auto _temp_ret = call_wrap_v ((::PangoStyle) (style_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_text_transform_new (PangoTextTransform transform);
// ::PangoAttribute* pango_attr_text_transform_new (::PangoTextTransform transform);
Pango::Attribute attr_text_transform_new (Pango::TextTransform transform) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoTextTransform transform);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_text_transform_new;
  auto transform_to_c = gi::unwrap (transform);
  auto _temp_ret = call_wrap_v ((::PangoTextTransform) (transform_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
// ::PangoAttribute* pango_attr_underline_color_new (guint16 red, guint16 green, guint16 blue);
Pango::Attribute attr_underline_color_new (guint16 red, guint16 green, guint16 blue) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (guint16 red, guint16 green, guint16 blue);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_underline_color_new;
  auto blue_to_c = blue;
  auto green_to_c = green;
  auto red_to_c = red;
  auto _temp_ret = call_wrap_v ((guint16) (red_to_c), (guint16) (green_to_c), (guint16) (blue_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_underline_new (PangoUnderline underline);
// ::PangoAttribute* pango_attr_underline_new (::PangoUnderline underline);
Pango::Attribute attr_underline_new (Pango::Underline underline) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoUnderline underline);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_underline_new;
  auto underline_to_c = gi::unwrap (underline);
  auto _temp_ret = call_wrap_v ((::PangoUnderline) (underline_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_variant_new (PangoVariant variant);
// ::PangoAttribute* pango_attr_variant_new (::PangoVariant variant);
Pango::Attribute attr_variant_new (Pango::Variant variant) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoVariant variant);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_variant_new;
  auto variant_to_c = gi::unwrap (variant);
  auto _temp_ret = call_wrap_v ((::PangoVariant) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_weight_new (PangoWeight weight);
// ::PangoAttribute* pango_attr_weight_new (::PangoWeight weight);
Pango::Attribute attr_weight_new (Pango::Weight weight) noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) (::PangoWeight weight);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_weight_new;
  auto weight_to_c = gi::unwrap (weight);
  auto _temp_ret = call_wrap_v ((::PangoWeight) (weight_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoAttribute* pango_attr_word_new ();
// ::PangoAttribute* pango_attr_word_new ();
Pango::Attribute attr_word_new () noexcept
{
  typedef ::PangoAttribute* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_word_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_default_break (const char* text, int length, PangoAnalysis* analysis, PangoLogAttr* attrs, int attrs_len);
// void pango_default_break (const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint attrs_len);
void default_break (const std::string & text, gint length, Pango::Analysis analysis, Pango::LogAttr attrs, gint attrs_len) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint attrs_len);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_default_break;
  auto attrs_len_to_c = attrs_len;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (attrs_len_to_c));
}
void default_break (const std::string & text, gint length, Pango::LogAttr attrs, gint attrs_len) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, ::PangoAnalysis* analysis, ::PangoLogAttr* attrs, gint attrs_len);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_default_break;
  auto attrs_len_to_c = attrs_len;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = nullptr;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (::PangoAnalysis*) (analysis_to_c), (::PangoLogAttr*) (attrs_to_c), (gint) (attrs_len_to_c));
}

// void pango_extents_to_pixels (PangoRectangle* inclusive, PangoRectangle* nearest);
// void pango_extents_to_pixels (::PangoRectangle* inclusive, ::PangoRectangle* nearest);
void extents_to_pixels (Pango::Rectangle inclusive, Pango::Rectangle nearest) noexcept
{
  typedef void (*call_wrap_t) (::PangoRectangle* inclusive, ::PangoRectangle* nearest);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_extents_to_pixels;
  auto nearest_to_c = gi::unwrap (nearest, gi::transfer_none, gi::direction_in);
  auto inclusive_to_c = gi::unwrap (inclusive, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoRectangle*) (inclusive_to_c), (::PangoRectangle*) (nearest_to_c));
}
void extents_to_pixels () noexcept
{
  typedef void (*call_wrap_t) (::PangoRectangle* inclusive, ::PangoRectangle* nearest);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_extents_to_pixels;
  auto nearest_to_c = nullptr;
  auto inclusive_to_c = nullptr;
  call_wrap_v ((::PangoRectangle*) (inclusive_to_c), (::PangoRectangle*) (nearest_to_c));
}

// PangoDirection pango_find_base_dir (const gchar* text, gint length);
// ::PangoDirection pango_find_base_dir (const char* text, gint length);
Pango::Direction find_base_dir (const std::string & text, gint length) noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (const char* text, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_find_base_dir;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret);
}

// void pango_find_paragraph_boundary (const char* text, int length, int* paragraph_delimiter_index, int* next_paragraph_start);
// void pango_find_paragraph_boundary (const char* text, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
void find_paragraph_boundary (const std::string & text, gint length, gint & paragraph_delimiter_index, gint & next_paragraph_start) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_find_paragraph_boundary;
  gint next_paragraph_start_o {};
  gint paragraph_delimiter_index_o {};
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (gint*) (&paragraph_delimiter_index_o), (gint*) (&next_paragraph_start_o));
  next_paragraph_start = next_paragraph_start_o;
  paragraph_delimiter_index = paragraph_delimiter_index_o;
}
std::tuple<gint, gint> find_paragraph_boundary (const std::string & text, gint length) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, gint* paragraph_delimiter_index, gint* next_paragraph_start);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_find_paragraph_boundary;
  gint next_paragraph_start_o {};
  gint paragraph_delimiter_index_o {};
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (gint*) (&paragraph_delimiter_index_o), (gint*) (&next_paragraph_start_o));
  return std::make_tuple (paragraph_delimiter_index_o, next_paragraph_start_o);
}

// gboolean pango_is_zero_width (gunichar ch);
// gboolean pango_is_zero_width (gunichar ch);
bool is_zero_width (gunichar ch) noexcept
{
  typedef gboolean (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_is_zero_width;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return _temp_ret;
}

// GList* pango_itemize (PangoContext* context, const char* text, int start_index, int length, PangoAttrList* attrs, PangoAttrIterator* cached_iter);
// ::GList* pango_itemize (::PangoContext* context, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
std::vector<Pango::Item> itemize (Pango::Context context, const std::string & text, gint start_index, gint length, Pango::AttrList attrs, Pango::AttrIterator cached_iter) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_itemize;
  auto cached_iter_to_c = gi::unwrap (cached_iter, gi::transfer_none, gi::direction_in);
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::detail::wrap_list<Pango::Item> (_temp_ret, gi::transfer_full);
}
std::vector<Pango::Item> itemize (Pango::Context context, const std::string & text, gint start_index, gint length, Pango::AttrList attrs) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_itemize;
  auto cached_iter_to_c = nullptr;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::detail::wrap_list<Pango::Item> (_temp_ret, gi::transfer_full);
}

// GList* pango_itemize_with_base_dir (PangoContext* context, PangoDirection base_dir, const char* text, int start_index, int length, PangoAttrList* attrs, PangoAttrIterator* cached_iter);
// ::GList* pango_itemize_with_base_dir (::PangoContext* context, ::PangoDirection base_dir, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
std::vector<Pango::Item> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const std::string & text, gint start_index, gint length, Pango::AttrList attrs, Pango::AttrIterator cached_iter) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, ::PangoDirection base_dir, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_itemize_with_base_dir;
  auto cached_iter_to_c = gi::unwrap (cached_iter, gi::transfer_none, gi::direction_in);
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto base_dir_to_c = gi::unwrap (base_dir);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::PangoDirection) (base_dir_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::detail::wrap_list<Pango::Item> (_temp_ret, gi::transfer_full);
}
std::vector<Pango::Item> itemize_with_base_dir (Pango::Context context, Pango::Direction base_dir, const std::string & text, gint start_index, gint length, Pango::AttrList attrs) noexcept
{
  typedef ::GList* (*call_wrap_t) (::PangoContext* context, ::PangoDirection base_dir, const char* text, gint start_index, gint length, ::PangoAttrList* attrs, ::PangoAttrIterator* cached_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_itemize_with_base_dir;
  auto cached_iter_to_c = nullptr;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto start_index_to_c = start_index;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto base_dir_to_c = gi::unwrap (base_dir);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::PangoDirection) (base_dir_to_c), (const char*) (text_to_c), (gint) (start_index_to_c), (gint) (length_to_c), (::PangoAttrList*) (attrs_to_c), (::PangoAttrIterator*) (cached_iter_to_c));
  return gi::detail::wrap_list<Pango::Item> (_temp_ret, gi::transfer_full);
}

// guint8* pango_log2vis_get_embedding_levels (const gchar* text, int length, PangoDirection* pbase_dir);
// guint8 pango_log2vis_get_embedding_levels (const char* text, gint length, ::PangoDirection pbase_dir);
// SKIP; inconsistent in pbase_dir pointer depth (1 vs 0), inconsistent return  pointer depth (1 vs 0)

// gboolean pango_markup_parser_finish (GMarkupParseContext* context, PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
// gboolean pango_markup_parser_finish (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
bool markup_parser_finish (GLib::MarkupParseContext context, Pango::AttrList * attr_list, std::string * text, gunichar * accel_char)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), &error);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool markup_parser_finish (GLib::MarkupParseContext context, Pango::AttrList * attr_list, std::string * text, gunichar * accel_char, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), _error ? &_error_o : nullptr);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Pango::AttrList, std::string, gunichar> markup_parser_finish (GLib::MarkupParseContext context)
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out), gi::wrap (text_o, gi::transfer_full, gi::direction_out), accel_char_o);
}
std::tuple<bool, Pango::AttrList, std::string, gunichar> markup_parser_finish (GLib::MarkupParseContext context, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMarkupParseContext* context, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_markup_parser_finish;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMarkupParseContext*) (context_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out), gi::wrap (text_o, gi::transfer_full, gi::direction_out), accel_char_o);
}

// GMarkupParseContext* pango_markup_parser_new (gunichar accel_marker);
// ::GMarkupParseContext* pango_markup_parser_new (gunichar accel_marker);
GLib::MarkupParseContext markup_parser_new (gunichar accel_marker) noexcept
{
  typedef ::GMarkupParseContext* (*call_wrap_t) (gunichar accel_marker);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_markup_parser_new;
  auto accel_marker_to_c = accel_marker;
  auto _temp_ret = call_wrap_v ((gunichar) (accel_marker_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean pango_parse_markup (const char* markup_text, int length, gunichar accel_marker, PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
// gboolean pango_parse_markup (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
bool parse_markup (const std::string & markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, std::string * text, gunichar * accel_char)
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), &error);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool parse_markup (const std::string & markup_text, gint length, gunichar accel_marker, Pango::AttrList * attr_list, std::string * text, gunichar * accel_char, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (attr_list ? &attr_list_o : nullptr), (char**) (text ? &text_o : nullptr), (gunichar*) (accel_char ? &accel_char_o : nullptr), _error ? &_error_o : nullptr);
  if (accel_char) *accel_char = accel_char_o;
  if (text) *text = gi::wrap (text_o, gi::transfer_full, gi::direction_out);
  if (attr_list) *attr_list = gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Pango::AttrList, std::string, gunichar> parse_markup (const std::string & markup_text, gint length, gunichar accel_marker)
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out), gi::wrap (text_o, gi::transfer_full, gi::direction_out), accel_char_o);
}
std::tuple<bool, Pango::AttrList, std::string, gunichar> parse_markup (const std::string & markup_text, gint length, gunichar accel_marker, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* markup_text, gint length, gunichar accel_marker, ::PangoAttrList** attr_list, char** text, gunichar* accel_char, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_markup;
  gunichar accel_char_o {};
  char* text_o {};
  ::PangoAttrList* attr_list_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_text_to_c = gi::unwrap (markup_text, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (markup_text_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (::PangoAttrList**) (&attr_list_o), (char**) (&text_o), (gunichar*) (&accel_char_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (attr_list_o, gi::transfer_full, gi::direction_out), gi::wrap (text_o, gi::transfer_full, gi::direction_out), accel_char_o);
}

// gboolean pango_parse_stretch (const char* str, PangoStretch* stretch, gboolean warn);
// gboolean pango_parse_stretch (const char* str, ::PangoStretch* stretch, gboolean warn);
bool parse_stretch (const std::string & str, Pango::Stretch & stretch, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStretch* stretch, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_stretch;
  auto warn_to_c = warn;
  ::PangoStretch stretch_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStretch*) (&stretch_o), (gboolean) (warn_to_c));
  stretch = gi::wrap (stretch_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Stretch> parse_stretch (const std::string & str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStretch* stretch, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_stretch;
  auto warn_to_c = warn;
  ::PangoStretch stretch_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStretch*) (&stretch_o), (gboolean) (warn_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (stretch_o));
}

// gboolean pango_parse_style (const char* str, PangoStyle* style, gboolean warn);
// gboolean pango_parse_style (const char* str, ::PangoStyle* style, gboolean warn);
bool parse_style (const std::string & str, Pango::Style & style, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStyle* style, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_style;
  auto warn_to_c = warn;
  ::PangoStyle style_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStyle*) (&style_o), (gboolean) (warn_to_c));
  style = gi::wrap (style_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Style> parse_style (const std::string & str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoStyle* style, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_style;
  auto warn_to_c = warn;
  ::PangoStyle style_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoStyle*) (&style_o), (gboolean) (warn_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (style_o));
}

// gboolean pango_parse_variant (const char* str, PangoVariant* variant, gboolean warn);
// gboolean pango_parse_variant (const char* str, ::PangoVariant* variant, gboolean warn);
bool parse_variant (const std::string & str, Pango::Variant & variant, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoVariant* variant, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_variant;
  auto warn_to_c = warn;
  ::PangoVariant variant_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoVariant*) (&variant_o), (gboolean) (warn_to_c));
  variant = gi::wrap (variant_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Variant> parse_variant (const std::string & str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoVariant* variant, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_variant;
  auto warn_to_c = warn;
  ::PangoVariant variant_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoVariant*) (&variant_o), (gboolean) (warn_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (variant_o));
}

// gboolean pango_parse_weight (const char* str, PangoWeight* weight, gboolean warn);
// gboolean pango_parse_weight (const char* str, ::PangoWeight* weight, gboolean warn);
bool parse_weight (const std::string & str, Pango::Weight & weight, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoWeight* weight, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_weight;
  auto warn_to_c = warn;
  ::PangoWeight weight_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoWeight*) (&weight_o), (gboolean) (warn_to_c));
  weight = gi::wrap (weight_o);
  return _temp_ret;
}
std::tuple<bool, Pango::Weight> parse_weight (const std::string & str, gboolean warn) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* str, ::PangoWeight* weight, gboolean warn);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_parse_weight;
  auto warn_to_c = warn;
  ::PangoWeight weight_o {};
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c), (::PangoWeight*) (&weight_o), (gboolean) (warn_to_c));
  return std::make_tuple (_temp_ret, gi::wrap (weight_o));
}

// void pango_quantize_line_geometry (int* thickness, int* position);
// void pango_quantize_line_geometry (gint* thickness, gint* position);
void quantize_line_geometry (gint & thickness, gint & position) noexcept
{
  typedef void (*call_wrap_t) (gint* thickness, gint* position);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_quantize_line_geometry;
  auto position_to_c = position;
  gint position_o = position_to_c;
  auto thickness_to_c = thickness;
  gint thickness_o = thickness_to_c;
  call_wrap_v ((gint*) (&thickness_o), (gint*) (&position_o));
  position = position_o;
  thickness = thickness_o;
}

// GList* pango_reorder_items (GList* items);
// ::GList* pango_reorder_items (::GList* items);
std::vector<Pango::Item> reorder_items (const std::vector<Pango::Item> & items) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GList* items);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_reorder_items;
  auto items_i = detail::make_list_unwrap_range<::GList> (items);
  auto items_w = unwrap (items_i, gi::transfer_none, direction_in);
  auto items_to_c = items_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (items_to_c));
  return gi::detail::wrap_list<Pango::Item> (_temp_ret, gi::transfer_full);
}

// void pango_shape (const char* text, int length, const PangoAnalysis* analysis, PangoGlyphString* glyphs);
// void pango_shape (const char* text, gint length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
void shape (const std::string & text, gint length, const Pango::Analysis & analysis, Pango::GlyphString glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* text, gint length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_shape_full (const char* item_text, int item_length, const char* paragraph_text, int paragraph_length, const PangoAnalysis* analysis, PangoGlyphString* glyphs);
// void pango_shape_full (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
void shape_full (const std::string & item_text, gint item_length, const std::string & paragraph_text, gint paragraph_length, const Pango::Analysis & analysis, Pango::GlyphString glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_full;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none, gi::direction_in);
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}
void shape_full (const std::string & item_text, gint item_length, gint paragraph_length, const Pango::Analysis & analysis, Pango::GlyphString glyphs) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_full;
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c));
}

// void pango_shape_item (PangoItem* item, const char* paragraph_text, int paragraph_length, PangoLogAttr* log_attrs, PangoGlyphString* glyphs, PangoShapeFlags flags);
// void pango_shape_item (::PangoItem* item, const char* paragraph_text, gint paragraph_length, ::PangoLogAttr* log_attrs, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
void shape_item (Pango::Item item, const std::string & paragraph_text, gint paragraph_length, Pango::LogAttr log_attrs, Pango::GlyphString glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* item, const char* paragraph_text, gint paragraph_length, ::PangoLogAttr* log_attrs, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_item;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto log_attrs_to_c = gi::unwrap (log_attrs, gi::transfer_none, gi::direction_in);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none, gi::direction_in);
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoItem*) (item_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (::PangoLogAttr*) (log_attrs_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}
void shape_item (Pango::Item item, gint paragraph_length, Pango::GlyphString glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::PangoItem* item, const char* paragraph_text, gint paragraph_length, ::PangoLogAttr* log_attrs, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_item;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto log_attrs_to_c = nullptr;
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::PangoItem*) (item_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (::PangoLogAttr*) (log_attrs_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}

// void pango_shape_with_flags (const char* item_text, int item_length, const char* paragraph_text, int paragraph_length, const PangoAnalysis* analysis, PangoGlyphString* glyphs, PangoShapeFlags flags);
// void pango_shape_with_flags (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
void shape_with_flags (const std::string & item_text, gint item_length, const std::string & paragraph_text, gint paragraph_length, const Pango::Analysis & analysis, Pango::GlyphString glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = gi::unwrap (paragraph_text, gi::transfer_none, gi::direction_in);
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}
void shape_with_flags (const std::string & item_text, gint item_length, gint paragraph_length, const Pango::Analysis & analysis, Pango::GlyphString glyphs, Pango::ShapeFlags flags) noexcept
{
  typedef void (*call_wrap_t) (const char* item_text, gint item_length, const char* paragraph_text, gint paragraph_length, const ::PangoAnalysis* analysis, ::PangoGlyphString* glyphs, ::PangoShapeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_shape_with_flags;
  auto flags_to_c = gi::unwrap (flags);
  auto glyphs_to_c = gi::unwrap (glyphs, gi::transfer_none, gi::direction_in);
  auto analysis_to_c = gi::unwrap (analysis, gi::transfer_none, gi::direction_in);
  auto paragraph_length_to_c = paragraph_length;
  auto paragraph_text_to_c = nullptr;
  auto item_length_to_c = item_length;
  auto item_text_to_c = gi::unwrap (item_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (item_text_to_c), (gint) (item_length_to_c), (const char*) (paragraph_text_to_c), (gint) (paragraph_length_to_c), (const ::PangoAnalysis*) (analysis_to_c), (::PangoGlyphString*) (glyphs_to_c), (::PangoShapeFlags) (flags_to_c));
}

// void pango_tailor_break (const char* text, int length, PangoAnalysis* analysis, int offset, PangoLogAttr* attrs, int attrs_len);
// void pango_tailor_break (const char* text, gint length, ::PangoAnalysis* analysis, gint offset, ::PangoLogAttr** attrs, gint attrs_len);
// SKIP; inconsistent in attrs pointer depth (1 vs 2)

// PangoDirection pango_unichar_direction (gunichar ch);
// ::PangoDirection pango_unichar_direction (gunichar ch);
Pango::Direction unichar_direction (gunichar ch) noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (gunichar ch);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_unichar_direction;
  auto ch_to_c = ch;
  auto _temp_ret = call_wrap_v ((gunichar) (ch_to_c));
  return gi::wrap (_temp_ret);
}

// int pango_units_from_double (double d);
// gint pango_units_from_double (gdouble d);
gint units_from_double (gdouble d) noexcept
{
  typedef gint (*call_wrap_t) (gdouble d);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_units_from_double;
  auto d_to_c = d;
  auto _temp_ret = call_wrap_v ((gdouble) (d_to_c));
  return _temp_ret;
}

// double pango_units_to_double (int i);
// gdouble pango_units_to_double (gint i);
gdouble units_to_double (gint i) noexcept
{
  typedef gdouble (*call_wrap_t) (gint i);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_units_to_double;
  auto i_to_c = i;
  auto _temp_ret = call_wrap_v ((gint) (i_to_c));
  return _temp_ret;
}

// int pango_version ();
// gint pango_version ();
gint version () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_version;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// const char* pango_version_check (int required_major, int required_minor, int required_micro);
// const char* pango_version_check (gint required_major, gint required_minor, gint required_micro);
std::string version_check (gint required_major, gint required_minor, gint required_micro) noexcept
{
  typedef const char* (*call_wrap_t) (gint required_major, gint required_minor, gint required_micro);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_version_check;
  auto required_micro_to_c = required_micro;
  auto required_minor_to_c = required_minor;
  auto required_major_to_c = required_major;
  auto _temp_ret = call_wrap_v ((gint) (required_major_to_c), (gint) (required_minor_to_c), (gint) (required_micro_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* pango_version_string ();
// const char* pango_version_string ();
std::string version_string () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_version_string;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
