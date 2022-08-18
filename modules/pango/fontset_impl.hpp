// AUTO-GENERATED

#ifndef _GI_PANGO_FONTSET_IMPL_HPP_
#define _GI_PANGO_FONTSET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_fontset_foreach (PangoFontset* fontset, PangoFontsetForeachFunc func, gpointer data);
// void pango_fontset_foreach (::PangoFontset* fontset, Pango::FontsetForeachFunc::cfunction_type func, void* data);
void base::FontsetBase::foreach (Pango::FontsetForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontset* fontset, Pango::FontsetForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_fontset_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::PangoFontset*) (gobj_()), (Pango::FontsetForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// PangoFont* pango_fontset_get_font (PangoFontset* fontset, guint wc);
// ::PangoFont* pango_fontset_get_font (::PangoFontset* fontset, guint wc);
Pango::Font base::FontsetBase::get_font (guint wc) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontset* fontset, guint wc);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_fontset_get_font;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()), (guint) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontMetrics* pango_fontset_get_metrics (PangoFontset* fontset);
// ::PangoFontMetrics* pango_fontset_get_metrics (::PangoFontset* fontset);
Pango::FontMetrics base::FontsetBase::get_metrics () noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_fontset_get_metrics;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontset_extra_def_impl.hpp>)
#include <pango/fontset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontset_extra_impl.hpp>)
#include <pango/fontset_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontsetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::PangoFontsetClass *methods = (::PangoFontsetClass *) class_struct;
  (void) methods;

  methods->get_font = (decltype (methods->get_font)) detail::method_wrapper<self, Pango::Font (*) (guint wc), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_font_>;
  methods->get_language = (decltype (methods->get_language)) detail::method_wrapper<self, Pango::Language (*) (), gi::transfer_full_t>::wrapper<&self::get_language_>;
  methods->get_metrics = (decltype (methods->get_metrics)) detail::method_wrapper<self, Pango::FontMetrics (*) (), gi::transfer_full_t>::wrapper<&self::get_metrics_>;
}

// void Fontset::foreach (PangoFontset* fontset, PangoFontsetForeachFunc func, gpointer data);
// void Fontset::foreach (::PangoFontset* fontset, Pango::FontsetForeachFunc::cfunction_type func, void* data);
// SKIP; virtual-method callback parameter not supported

// PangoFont* Fontset::get_font (PangoFontset* fontset, guint wc);
// ::PangoFont* Fontset::get_font (::PangoFontset* fontset, guint wc);
Pango::Font FontsetClass::get_font_ (guint wc) noexcept
{
  if (!get_struct_()->get_font) return Pango::Font{};
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontset* fontset, guint wc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()), (guint) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoLanguage* Fontset::get_language (PangoFontset* fontset);
// ::PangoLanguage* Fontset::get_language (::PangoFontset* fontset);
Pango::Language FontsetClass::get_language_ () noexcept
{
  if (!get_struct_()->get_language) return Pango::Language{};
  typedef ::PangoLanguage* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_language;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoFontMetrics* Fontset::get_metrics (PangoFontset* fontset);
// ::PangoFontMetrics* Fontset::get_metrics (::PangoFontset* fontset);
Pango::FontMetrics FontsetClass::get_metrics_ () noexcept
{
  if (!get_struct_()->get_metrics) return Pango::FontMetrics{};
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_metrics;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
