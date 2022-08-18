// AUTO-GENERATED

#ifndef _GI_GLIB_URIPARAMSITER_IMPL_HPP_
#define _GI_GLIB_URIPARAMSITER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_uri_params_iter_init (GUriParamsIter* iter, const gchar* params, gssize length, const gchar* separators, GUriParamsFlags flags);
// void g_uri_params_iter_init (::GUriParamsIter* iter, const char* params, gssize length, const char* separators, ::GUriParamsFlags flags);
void base::UriParamsIterBase::init (const std::string & params, gssize length, const std::string & separators, GLib::UriParamsFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GUriParamsIter* iter, const char* params, gssize length, const char* separators, ::GUriParamsFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_params_iter_init;
  auto flags_to_c = gi::unwrap (flags);
  auto separators_to_c = gi::unwrap (separators, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GUriParamsIter*) (gobj_()), (const char*) (params_to_c), (gssize) (length_to_c), (const char*) (separators_to_c), (::GUriParamsFlags) (flags_to_c));
}

// gboolean g_uri_params_iter_next (GUriParamsIter* iter, gchar** attribute, gchar** value, GError ** error);
// gboolean g_uri_params_iter_next (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
bool base::UriParamsIterBase::next (std::string * attribute, std::string * value)
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (attribute ? &attribute_o : nullptr), (char**) (value ? &value_o : nullptr), &error);
  if (value) *value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  if (attribute) *attribute = gi::wrap (attribute_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UriParamsIterBase::next (std::string * attribute, std::string * value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (attribute ? &attribute_o : nullptr), (char**) (value ? &value_o : nullptr), _error ? &_error_o : nullptr);
  if (value) *value = gi::wrap (value_o, gi::transfer_full, gi::direction_out);
  if (attribute) *attribute = gi::wrap (attribute_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string> base::UriParamsIterBase::next ()
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (&attribute_o), (char**) (&value_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (attribute_o, gi::transfer_full, gi::direction_out), gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string> base::UriParamsIterBase::next (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GUriParamsIter* iter, char** attribute, char** value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_uri_params_iter_next;
  char* value_o {};
  char* attribute_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GUriParamsIter*) (gobj_()), (char**) (&attribute_o), (char**) (&value_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (attribute_o, gi::transfer_full, gi::direction_out), gi::wrap (value_o, gi::transfer_full, gi::direction_out));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_def_impl.hpp>)
#include <glib/uriparamsiter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/uriparamsiter_extra_impl.hpp>)
#include <glib/uriparamsiter_extra_impl.hpp>
#endif
#endif

#endif
