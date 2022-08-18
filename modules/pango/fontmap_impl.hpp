// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMAP_IMPL_HPP_
#define _GI_PANGO_FONTMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_font_map_changed (PangoFontMap* fontmap);
// void pango_font_map_changed (::PangoFontMap* fontmap);
void base::FontMapBase::changed () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_changed;
  call_wrap_v ((::PangoFontMap*) (gobj_()));
}

// PangoContext* pango_font_map_create_context (PangoFontMap* fontmap);
// ::PangoContext* pango_font_map_create_context (::PangoFontMap* fontmap);
Pango::Context base::FontMapBase::create_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_create_context;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontFamily* pango_font_map_get_family (PangoFontMap* fontmap, const char* name);
// ::PangoFontFamily* pango_font_map_get_family (::PangoFontMap* fontmap, const char* name);
Pango::FontFamily base::FontMapBase::get_family (const std::string & name) noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontMap* fontmap, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_get_family;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint pango_font_map_get_serial (PangoFontMap* fontmap);
// guint pango_font_map_get_serial (::PangoFontMap* fontmap);
guint base::FontMapBase::get_serial () noexcept
{
  typedef guint (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_get_serial;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return _temp_ret;
}

// void pango_font_map_list_families (PangoFontMap* fontmap, PangoFontFamily*** families, int* n_families);
// void pango_font_map_list_families (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
void base::FontMapBase::list_families (std::vector<Pango::FontFamily> & families) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_list_families;
  typedef Pango::FontFamily families_cpptype;
  typedef traits::ctype<families_cpptype>::type families_ctype;
  families_ctype *families_o;
  gint n_families;
  call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoFontFamily***) ((::PangoFontFamily***) &families_o), (gint*) (&n_families));
  families.resize(n_families);
  detail::wrap_array (families_o, gi::transfer_container, n_families, families.data());
  g_free (families_o);
}

// PangoFont* pango_font_map_load_font (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* pango_font_map_load_font (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
Pango::Font base::FontMapBase::load_font (Pango::Context context, const Pango::FontDescription & desc) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_load_font;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontset* pango_font_map_load_fontset (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* pango_font_map_load_fontset (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
Pango::Fontset base::FontMapBase::load_fontset (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language) noexcept
{
  typedef ::PangoFontset* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_map_load_fontset;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_def_impl.hpp>)
#include <pango/fontmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_impl.hpp>)
#include <pango/fontmap_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontMapClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoFontMapClass *methods = (::PangoFontMapClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
  methods->get_family = (decltype (methods->get_family)) detail::method_wrapper<self, Pango::FontFamily (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_family_>;
  methods->get_serial = (decltype (methods->get_serial)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::get_serial_>;
  methods->load_font = (decltype (methods->load_font)) detail::method_wrapper<self, Pango::Font (*) (Pango::Context context, const Pango::FontDescription & desc), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::load_font_>;
  methods->load_fontset = (decltype (methods->load_fontset)) detail::method_wrapper<self, Pango::Fontset (*) (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::load_fontset_>;
}

// void FontMap::changed (PangoFontMap* fontmap);
// void FontMap::changed (::PangoFontMap* fontmap);
void FontMapClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::PangoFontMap*) (gobj_()));
}

// PangoFontFamily* FontMap::get_family (PangoFontMap* fontmap, const char* name);
// ::PangoFontFamily* FontMap::get_family (::PangoFontMap* fontmap, const char* name);
Pango::FontFamily FontMapClass::get_family_ (const std::string & name) noexcept
{
  if (!get_struct_()->get_family) return Pango::FontFamily{};
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontMap* fontmap, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_family;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint FontMap::get_serial (PangoFontMap* fontmap);
// guint FontMap::get_serial (::PangoFontMap* fontmap);
guint FontMapClass::get_serial_ () noexcept
{
  if (!get_struct_()->get_serial) return guint{};
  typedef guint (*call_wrap_t) (::PangoFontMap* fontmap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_serial;
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()));
  return _temp_ret;
}

// void FontMap::list_families (PangoFontMap* fontmap, PangoFontFamily*** families, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFont* FontMap::load_font (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* FontMap::load_font (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
Pango::Font FontMapClass::load_font_ (Pango::Context context, const Pango::FontDescription & desc) noexcept
{
  if (!get_struct_()->load_font) return Pango::Font{};
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_font;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontset* FontMap::load_fontset (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* FontMap::load_fontset (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
Pango::Fontset FontMapClass::load_fontset_ (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language) noexcept
{
  if (!get_struct_()->load_fontset) return Pango::Fontset{};
  typedef ::PangoFontset* (*call_wrap_t) (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->load_fontset;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontMap*) (gobj_()), (::PangoContext*) (context_to_c), (const ::PangoFontDescription*) (desc_to_c), (::PangoLanguage*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
