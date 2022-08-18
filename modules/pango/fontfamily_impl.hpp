// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFAMILY_IMPL_HPP_
#define _GI_PANGO_FONTFAMILY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontFace* pango_font_family_get_face (PangoFontFamily* family, const char* name);
// ::PangoFontFace* pango_font_family_get_face (::PangoFontFamily* family, const char* name);
Pango::FontFace base::FontFamilyBase::get_face (const std::string & name) noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_get_face;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Pango::FontFace base::FontFamilyBase::get_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_get_face;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* pango_font_family_get_name (PangoFontFamily* family);
// const char* pango_font_family_get_name (::PangoFontFamily* family);
std::string base::FontFamilyBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_get_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean pango_font_family_is_monospace (PangoFontFamily* family);
// gboolean pango_font_family_is_monospace (::PangoFontFamily* family);
bool base::FontFamilyBase::is_monospace () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_is_monospace;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_font_family_is_variable (PangoFontFamily* family);
// gboolean pango_font_family_is_variable (::PangoFontFamily* family);
bool base::FontFamilyBase::is_variable () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_is_variable;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// void pango_font_family_list_faces (PangoFontFamily* family, PangoFontFace*** faces, int* n_faces);
// void pango_font_family_list_faces (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
void base::FontFamilyBase::list_faces (std::vector<Pango::FontFace> & faces) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_family_list_faces;
  typedef Pango::FontFace faces_cpptype;
  typedef traits::ctype<faces_cpptype>::type faces_ctype;
  faces_ctype *faces_o;
  gint n_faces;
  call_wrap_v ((::PangoFontFamily*) (gobj_()), (::PangoFontFace***) ((::PangoFontFace***) &faces_o), (gint*) (&n_faces));
  faces.resize(n_faces);
  detail::wrap_array (faces_o, gi::transfer_container, n_faces, faces.data());
  g_free (faces_o);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_def_impl.hpp>)
#include <pango/fontfamily_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_impl.hpp>)
#include <pango/fontfamily_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontFamilyClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoFontFamilyClass *methods = (::PangoFontFamilyClass *) class_struct;
  (void) methods;

  methods->get_face = (decltype (methods->get_face)) detail::method_wrapper<self, Pango::FontFace (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_face_>;
  methods->is_monospace = (decltype (methods->is_monospace)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_monospace_>;
  methods->is_variable = (decltype (methods->is_variable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_variable_>;
}

// PangoFontFace* FontFamily::get_face (PangoFontFamily* family, const char* name);
// ::PangoFontFace* FontFamily::get_face (::PangoFontFamily* family, const char* name);
Pango::FontFace FontFamilyClass::get_face_ (const std::string & name) noexcept
{
  if (!get_struct_()->get_face) return Pango::FontFace{};
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_face;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* FontFamily::get_name (PangoFontFamily* family);
// const char* FontFamily::get_name (::PangoFontFamily* family);
// SKIP; invalid callback return transfer none

// gboolean FontFamily::is_monospace (PangoFontFamily* family);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family);
bool FontFamilyClass::is_monospace_ () noexcept
{
  if (!get_struct_()->is_monospace) return bool{};
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_monospace;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// gboolean FontFamily::is_variable (PangoFontFamily* family);
// gboolean FontFamily::is_variable (::PangoFontFamily* family);
bool FontFamilyClass::is_variable_ () noexcept
{
  if (!get_struct_()->is_variable) return bool{};
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_variable;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// void FontFamily::list_faces (PangoFontFamily* family, PangoFontFace*** faces, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
