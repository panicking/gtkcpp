// AUTO-GENERATED

#ifndef _GI_PANGO_SCRIPTITER_IMPL_HPP_
#define _GI_PANGO_SCRIPTITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoScriptIter* pango_script_iter_new (const char* text, int length);
// ::PangoScriptIter* pango_script_iter_new (const char* text, gint length);
Pango::ScriptIter base::ScriptIterBase::new_ (const std::string & text, gint length) noexcept
{
  typedef ::PangoScriptIter* (*call_wrap_t) (const char* text, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_iter_new;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void pango_script_iter_free (PangoScriptIter* iter);
// void pango_script_iter_free (::PangoScriptIter* iter);
// IGNORE; marked ignore

// void pango_script_iter_get_range (PangoScriptIter* iter, const char** start, const char** end, PangoScript* script);
// void pango_script_iter_get_range (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
void base::ScriptIterBase::get_range (std::string * start, std::string * end, Pango::Script * script) noexcept
{
  typedef void (*call_wrap_t) (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_iter_get_range;
  ::PangoScript script_o {};
  const char* end_o {};
  const char* start_o {};
  call_wrap_v ((::PangoScriptIter*) (gobj_()), (const char**) (start ? &start_o : nullptr), (const char**) (end ? &end_o : nullptr), (::PangoScript*) (script ? &script_o : nullptr));
  if (script) *script = gi::wrap (script_o);
  if (end) *end = gi::wrap (end_o, gi::transfer_full, gi::direction_out);
  if (start) *start = gi::wrap (start_o, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, std::string, Pango::Script> base::ScriptIterBase::get_range () noexcept
{
  typedef void (*call_wrap_t) (::PangoScriptIter* iter, const char** start, const char** end, ::PangoScript* script);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_iter_get_range;
  ::PangoScript script_o {};
  const char* end_o {};
  const char* start_o {};
  call_wrap_v ((::PangoScriptIter*) (gobj_()), (const char**) (&start_o), (const char**) (&end_o), (::PangoScript*) (&script_o));
  return std::make_tuple (gi::wrap (start_o, gi::transfer_full, gi::direction_out), gi::wrap (end_o, gi::transfer_full, gi::direction_out), gi::wrap (script_o));
}

// gboolean pango_script_iter_next (PangoScriptIter* iter);
// gboolean pango_script_iter_next (::PangoScriptIter* iter);
bool base::ScriptIterBase::next () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoScriptIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_script_iter_next;
  auto _temp_ret = call_wrap_v ((::PangoScriptIter*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_def_impl.hpp>)
#include <pango/scriptiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/scriptiter_extra_impl.hpp>)
#include <pango/scriptiter_extra_impl.hpp>
#endif
#endif

#endif
