// AUTO-GENERATED

#ifndef _GI_PANGO_FONT_IMPL_HPP_
#define _GI_PANGO_FONT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_font_descriptions_free (PangoFontDescription** descs, int n_descs);
// void pango_font_descriptions_free (::PangoFontDescription** descs, gint n_descs);
// IGNORE; marked ignore

// PangoFont* pango_font_deserialize (PangoContext* context, GBytes* bytes, GError ** error);
// ::PangoFont* pango_font_deserialize (::PangoContext* context, ::GBytes* bytes, GError ** error);
Pango::Font base::FontBase::deserialize (Pango::Context context, GLib::Bytes bytes)
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_deserialize;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Pango::Font base::FontBase::deserialize (Pango::Context context, GLib::Bytes bytes, GLib::Error * _error) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_deserialize;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* pango_font_describe (PangoFont* font);
// ::PangoFontDescription* pango_font_describe (::PangoFont* font);
Pango::FontDescription base::FontBase::describe () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_describe;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* pango_font_describe_with_absolute_size (PangoFont* font);
// ::PangoFontDescription* pango_font_describe_with_absolute_size (::PangoFont* font);
Pango::FontDescription base::FontBase::describe_with_absolute_size () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_describe_with_absolute_size;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoCoverage* pango_font_get_coverage (PangoFont* font, PangoLanguage* language);
// ::PangoCoverage* pango_font_get_coverage (::PangoFont* font, ::PangoLanguage* language);
Pango::Coverage base::FontBase::get_coverage (Pango::Language language) noexcept
{
  typedef ::PangoCoverage* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_coverage;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontFace* pango_font_get_face (PangoFont* font);
// ::PangoFontFace* pango_font_get_face (::PangoFont* font);
Pango::FontFace base::FontBase::get_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_face;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_font_get_features (PangoFont* font, hb_feature_t* features, guint len, guint* num_features);
// void pango_font_get_features (::PangoFont* font, ::hb_feature_t** features, guint len, guint* num_features);
// SKIP; inconsistent out features pointer depth (1 vs 2)

// PangoFontMap* pango_font_get_font_map (PangoFont* font);
// ::PangoFontMap* pango_font_get_font_map (::PangoFont* font);
Pango::FontMap base::FontBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_font_map;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void pango_font_get_glyph_extents (PangoFont* font, PangoGlyph glyph, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void pango_font_get_glyph_extents (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
void base::FontBase::get_glyph_extents (::PangoGlyph glyph, Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_glyph_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  auto glyph_to_c = glyph;
  call_wrap_v ((::PangoFont*) (gobj_()), (::PangoGlyph) (glyph_to_c), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) &ink_rect_c : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) &logical_rect_c : nullptr));
  if (logical_rect) *logical_rect = gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out);
  if (ink_rect) *ink_rect = gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::FontBase::get_glyph_extents (::PangoGlyph glyph) noexcept
{
  typedef void (*call_wrap_t) (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_glyph_extents;
  traits::unset_wrapper<::PangoRectangle>::type logical_rect_c;
  traits::unset_wrapper<::PangoRectangle>::type ink_rect_c;
  auto glyph_to_c = glyph;
  call_wrap_v ((::PangoFont*) (gobj_()), (::PangoGlyph) (glyph_to_c), (::PangoRectangle*) ((::PangoRectangle*) &ink_rect_c), (::PangoRectangle*) ((::PangoRectangle*) &logical_rect_c));
  return std::make_tuple (gi::wrap ((::PangoRectangle*) &ink_rect_c, gi::transfer_none, gi::direction_out), gi::wrap ((::PangoRectangle*) &logical_rect_c, gi::transfer_none, gi::direction_out));
}

// hb_font_t* pango_font_get_hb_font (PangoFont* font);
// ::hb_font_t* pango_font_get_hb_font (::PangoFont* font);
HarfBuzz::font_t base::FontBase::get_hb_font () noexcept
{
  typedef ::hb_font_t* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_hb_font;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLanguage** pango_font_get_languages (PangoFont* font);
// ::PangoLanguage** pango_font_get_languages (::PangoFont* font);
std::vector<Pango::Language> base::FontBase::get_languages () noexcept
{
  typedef ::PangoLanguage** (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_languages;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::detail::wrap_list<Pango::Language> (_temp_ret, gi::transfer_none);
}

// PangoFontMetrics* pango_font_get_metrics (PangoFont* font, PangoLanguage* language);
// ::PangoFontMetrics* pango_font_get_metrics (::PangoFont* font, ::PangoLanguage* language);
Pango::FontMetrics base::FontBase::get_metrics (Pango::Language language) noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_metrics;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Pango::FontMetrics base::FontBase::get_metrics () noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_get_metrics;
  auto language_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean pango_font_has_char (PangoFont* font, gunichar wc);
// gboolean pango_font_has_char (::PangoFont* font, gunichar wc);
bool base::FontBase::has_char (gunichar wc) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFont* font, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_has_char;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (gunichar) (wc_to_c));
  return _temp_ret;
}

// GBytes* pango_font_serialize (PangoFont* font);
// ::GBytes* pango_font_serialize (::PangoFont* font);
GLib::Bytes base::FontBase::serialize () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_serialize;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/font_extra_def_impl.hpp>)
#include <pango/font_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/font_extra_impl.hpp>)
#include <pango/font_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoFontClass *methods = (::PangoFontClass *) class_struct;
  (void) methods;

  methods->create_hb_font = (decltype (methods->create_hb_font)) detail::method_wrapper<self, HarfBuzz::font_t (*) (), gi::transfer_full_t>::wrapper<&self::create_hb_font_>;
  methods->describe = (decltype (methods->describe)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t>::wrapper<&self::describe_>;
  methods->describe_absolute = (decltype (methods->describe_absolute)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t>::wrapper<&self::describe_absolute_>;
  methods->get_coverage = (decltype (methods->get_coverage)) detail::method_wrapper<self, Pango::Coverage (*) (Pango::Language language), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_coverage_>;
  methods->get_font_map = (decltype (methods->get_font_map)) detail::method_wrapper<self, Pango::FontMap (*) (), gi::transfer_none_t>::wrapper<&self::get_font_map_>;
  methods->get_metrics = (decltype (methods->get_metrics)) detail::method_wrapper<self, Pango::FontMetrics (*) (Pango::Language language), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_metrics_>;
}

// hb_font_t* Font::create_hb_font (PangoFont* font);
// ::hb_font_t* Font::create_hb_font (::PangoFont* font);
HarfBuzz::font_t FontClass::create_hb_font_ () noexcept
{
  if (!get_struct_()->create_hb_font) return HarfBuzz::font_t{};
  typedef ::hb_font_t* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_hb_font;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* Font::describe (PangoFont* font);
// ::PangoFontDescription* Font::describe (::PangoFont* font);
Pango::FontDescription FontClass::describe_ () noexcept
{
  if (!get_struct_()->describe) return Pango::FontDescription{};
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontDescription* Font::describe_absolute (PangoFont* font);
// ::PangoFontDescription* Font::describe_absolute (::PangoFont* font);
Pango::FontDescription FontClass::describe_absolute_ () noexcept
{
  if (!get_struct_()->describe_absolute) return Pango::FontDescription{};
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe_absolute;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoCoverage* Font::get_coverage (PangoFont* font, PangoLanguage* language);
// ::PangoCoverage* Font::get_coverage (::PangoFont* font, ::PangoLanguage* language);
Pango::Coverage FontClass::get_coverage_ (Pango::Language language) noexcept
{
  if (!get_struct_()->get_coverage) return Pango::Coverage{};
  typedef ::PangoCoverage* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_coverage;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Font::get_features (PangoFont* font, hb_feature_t* features, guint len, guint* num_features);
// void Font::get_features (::PangoFont* font, ::hb_feature_t** features, guint* len, guint* num_features);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMap* Font::get_font_map (PangoFont* font);
// ::PangoFontMap* Font::get_font_map (::PangoFont* font);
Pango::FontMap FontClass::get_font_map_ () noexcept
{
  if (!get_struct_()->get_font_map) return Pango::FontMap{};
  typedef ::PangoFontMap* (*call_wrap_t) (::PangoFont* font);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font_map;
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void Font::get_glyph_extents (PangoFont* font, PangoGlyph glyph, PangoRectangle* ink_rect, PangoRectangle* logical_rect);
// void Font::get_glyph_extents (::PangoFont* font, ::PangoGlyph glyph, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFontMetrics* Font::get_metrics (PangoFont* font, PangoLanguage* language);
// ::PangoFontMetrics* Font::get_metrics (::PangoFont* font, ::PangoLanguage* language);
Pango::FontMetrics FontClass::get_metrics_ (Pango::Language language) noexcept
{
  if (!get_struct_()->get_metrics) return Pango::FontMetrics{};
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFont* font, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_metrics;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFont*) (gobj_()), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
