// AUTO-GENERATED

#ifndef _GI_PANGO_LANGUAGE_IMPL_HPP_
#define _GI_PANGO_LANGUAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// const char* pango_language_get_sample_string (PangoLanguage* language);
// const char* pango_language_get_sample_string (::PangoLanguage* language);
std::string base::LanguageBase::get_sample_string () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_get_sample_string;
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const PangoScript* pango_language_get_scripts (PangoLanguage* language, int* num_scripts);
// const ::PangoScript* pango_language_get_scripts (::PangoLanguage* language, gint* num_scripts);
std::vector<Pango::Script> base::LanguageBase::get_scripts () noexcept
{
  typedef const ::PangoScript* (*call_wrap_t) (::PangoLanguage* language, gint* num_scripts);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_get_scripts;
  gint num_scripts;
  std::vector<Pango::Script> _temp_ret;
  auto _ret_o = call_wrap_v ((::PangoLanguage*) (gobj_()), (gint*) (&num_scripts));
  _temp_ret.resize(num_scripts);
  detail::wrap_array (_ret_o, gi::transfer_none, num_scripts, _temp_ret.data());
  return _temp_ret;
}

// gboolean pango_language_includes_script (PangoLanguage* language, PangoScript script);
// gboolean pango_language_includes_script (::PangoLanguage* language, ::PangoScript script);
bool base::LanguageBase::includes_script (Pango::Script script) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLanguage* language, ::PangoScript script);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_includes_script;
  auto script_to_c = gi::unwrap (script);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()), (::PangoScript) (script_to_c));
  return _temp_ret;
}

// gboolean pango_language_matches (PangoLanguage* language, const char* range_list);
// gboolean pango_language_matches (::PangoLanguage* language, const char* range_list);
bool base::LanguageBase::matches (const std::string & range_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLanguage* language, const char* range_list);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_matches;
  auto range_list_to_c = gi::unwrap (range_list, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()), (const char*) (range_list_to_c));
  return _temp_ret;
}

// const char* pango_language_to_string (PangoLanguage* language);
// const char* pango_language_to_string (::PangoLanguage* language);
std::string base::LanguageBase::to_string () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoLanguage* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_to_string;
  auto _temp_ret = call_wrap_v ((::PangoLanguage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLanguage* pango_language_from_string (const char* language);
// ::PangoLanguage* pango_language_from_string (const char* language);
Pango::Language base::LanguageBase::from_string (const std::string & language) noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_from_string;
  auto language_to_c = gi::unwrap (language, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Pango::Language base::LanguageBase::from_string () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) (const char* language);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_from_string;
  auto language_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (language_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLanguage* pango_language_get_default ();
// ::PangoLanguage* pango_language_get_default ();
Pango::Language base::LanguageBase::get_default () noexcept
{
  typedef ::PangoLanguage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_language_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// PangoLanguage** pango_language_get_preferred ();
// ::PangoLanguage* pango_language_get_preferred ();
// SKIP; inconsistent return  pointer depth (2 vs 1)


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/language_extra_def_impl.hpp>)
#include <pango/language_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/language_extra_impl.hpp>)
#include <pango/language_extra_impl.hpp>
#endif
#endif

#endif
