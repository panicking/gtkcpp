// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFACE_IMPL_HPP_
#define _GI_PANGO_FONTFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontDescription* pango_font_face_describe (PangoFontFace* face);
// ::PangoFontDescription* pango_font_face_describe (::PangoFontFace* face);
Pango::FontDescription base::FontFaceBase::describe () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_face_describe;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* pango_font_face_get_face_name (PangoFontFace* face);
// const char* pango_font_face_get_face_name (::PangoFontFace* face);
std::string base::FontFaceBase::get_face_name () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_face_get_face_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoFontFamily* pango_font_face_get_family (PangoFontFace* face);
// ::PangoFontFamily* pango_font_face_get_family (::PangoFontFace* face);
Pango::FontFamily base::FontFaceBase::get_family () noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_face_get_family;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean pango_font_face_is_synthesized (PangoFontFace* face);
// gboolean pango_font_face_is_synthesized (::PangoFontFace* face);
bool base::FontFaceBase::is_synthesized () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_face_is_synthesized;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return _temp_ret;
}

// void pango_font_face_list_sizes (PangoFontFace* face, int** sizes, int* n_sizes);
// void pango_font_face_list_sizes (::PangoFontFace* face, gint** sizes, gint* n_sizes);
void base::FontFaceBase::list_sizes (std::vector<gint> & sizes) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFace* face, gint** sizes, gint* n_sizes);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_font_face_list_sizes;
  typedef gint sizes_cpptype;
  typedef traits::ctype<sizes_cpptype>::type sizes_ctype;
  sizes_ctype *sizes_o;
  gint n_sizes;
  call_wrap_v ((::PangoFontFace*) (gobj_()), (gint**) ((gint**) &sizes_o), (gint*) (&n_sizes));
  sizes.resize(n_sizes);
  detail::wrap_array (sizes_o, gi::transfer_full, n_sizes, sizes.data());
  g_free (sizes_o);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_def_impl.hpp>)
#include <pango/fontface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_impl.hpp>)
#include <pango/fontface_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontFaceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoFontFaceClass *methods = (::PangoFontFaceClass *) class_struct;
  (void) methods;

  methods->describe = (decltype (methods->describe)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t>::wrapper<&self::describe_>;
  methods->get_family = (decltype (methods->get_family)) detail::method_wrapper<self, Pango::FontFamily (*) (), gi::transfer_none_t>::wrapper<&self::get_family_>;
  methods->is_synthesized = (decltype (methods->is_synthesized)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_synthesized_>;
}

// PangoFontDescription* FontFace::describe (PangoFontFace* face);
// ::PangoFontDescription* FontFace::describe (::PangoFontFace* face);
Pango::FontDescription FontFaceClass::describe_ () noexcept
{
  if (!get_struct_()->describe) return Pango::FontDescription{};
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* FontFace::get_face_name (PangoFontFace* face);
// const char* FontFace::get_face_name (::PangoFontFace* face);
// SKIP; invalid callback return transfer none

// PangoFontFamily* FontFace::get_family (PangoFontFace* face);
// ::PangoFontFamily* FontFace::get_family (::PangoFontFace* face);
Pango::FontFamily FontFaceClass::get_family_ () noexcept
{
  if (!get_struct_()->get_family) return Pango::FontFamily{};
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_family;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean FontFace::is_synthesized (PangoFontFace* face);
// gboolean FontFace::is_synthesized (::PangoFontFace* face);
bool FontFaceClass::is_synthesized_ () noexcept
{
  if (!get_struct_()->is_synthesized) return bool{};
  typedef gboolean (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_synthesized;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return _temp_ret;
}

// void FontFace::list_sizes (PangoFontFace* face, int** sizes, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face, gint** sizes, gint* n_sizes);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
