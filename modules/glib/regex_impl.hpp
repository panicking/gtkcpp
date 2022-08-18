// AUTO-GENERATED

#ifndef _GI_GLIB_REGEX_IMPL_HPP_
#define _GI_GLIB_REGEX_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GRegex* g_regex_new (const gchar* pattern, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError ** error);
// ::GRegex* g_regex_new (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
GLib::Regex base::RegexBase::new_ (const std::string & pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options)
{
  typedef ::GRegex* (*call_wrap_t) (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_new;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Regex base::RegexBase::new_ (const std::string & pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options, GLib::Error * _error) noexcept
{
  typedef ::GRegex* (*call_wrap_t) (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_new;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint g_regex_get_capture_count (const GRegex* regex);
// gint g_regex_get_capture_count (const ::GRegex* regex);
gint base::RegexBase::get_capture_count () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_capture_count;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// GRegexCompileFlags g_regex_get_compile_flags (const GRegex* regex);
// ::GRegexCompileFlags g_regex_get_compile_flags (const ::GRegex* regex);
GLib::RegexCompileFlags base::RegexBase::get_compile_flags () const noexcept
{
  typedef ::GRegexCompileFlags (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_compile_flags;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean g_regex_get_has_cr_or_lf (const GRegex* regex);
// gboolean g_regex_get_has_cr_or_lf (const ::GRegex* regex);
bool base::RegexBase::get_has_cr_or_lf () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_has_cr_or_lf;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// GRegexMatchFlags g_regex_get_match_flags (const GRegex* regex);
// ::GRegexMatchFlags g_regex_get_match_flags (const ::GRegex* regex);
GLib::RegexMatchFlags base::RegexBase::get_match_flags () const noexcept
{
  typedef ::GRegexMatchFlags (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_match_flags;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint g_regex_get_max_backref (const GRegex* regex);
// gint g_regex_get_max_backref (const ::GRegex* regex);
gint base::RegexBase::get_max_backref () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_max_backref;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// gint g_regex_get_max_lookbehind (const GRegex* regex);
// gint g_regex_get_max_lookbehind (const ::GRegex* regex);
gint base::RegexBase::get_max_lookbehind () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_max_lookbehind;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_regex_get_pattern (const GRegex* regex);
// const char* g_regex_get_pattern (const ::GRegex* regex);
std::string base::RegexBase::get_pattern () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GRegex* regex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_pattern;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint g_regex_get_string_number (const GRegex* regex, const gchar* name);
// gint g_regex_get_string_number (const ::GRegex* regex, const char* name);
gint base::RegexBase::get_string_number (const std::string & name) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GRegex* regex, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_get_string_number;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gboolean g_regex_match (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options, GMatchInfo** match_info);
// gboolean g_regex_match (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
bool base::RegexBase::match (const std::string & string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr));
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o));
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_regex_match_all (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options, GMatchInfo** match_info);
// gboolean g_regex_match_all (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
bool base::RegexBase::match_all (const std::string & string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr));
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o));
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_regex_match_all_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info, GError ** error);
// gboolean g_regex_match_all_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
bool base::RegexBase::match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), &error);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), _error ? &_error_o : nullptr);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_all_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_regex_match_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info, GError ** error);
// gboolean g_regex_match_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
bool base::RegexBase::match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), &error);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (match_info ? &match_info_o : nullptr), _error ? &_error_o : nullptr);
  if (match_info) *match_info = gi::wrap (match_info_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::MatchInfo> base::RegexBase::match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_full;
  ::GMatchInfo* match_info_o {};
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (::GMatchInfo**) (&match_info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (match_info_o, gi::transfer_full, gi::direction_out));
}

// GRegex* g_regex_ref (GRegex* regex);
// ::GRegex* g_regex_ref (::GRegex* regex);
// IGNORE; marked ignore

// gchar* g_regex_replace (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, const gchar* replacement, GRegexMatchFlags match_options, GError ** error);
// char* g_regex_replace (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
std::string base::RegexBase::replace (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options) const
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_replace;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::RegexBase::replace (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_replace;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_regex_replace_eval (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data, GError ** error);
// char* g_regex_replace_eval (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval, void* user_data, GError ** error);
// IGNORE; not introspectable, callback misses scope info

// gchar* g_regex_replace_literal (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, const gchar* replacement, GRegexMatchFlags match_options, GError ** error);
// char* g_regex_replace_literal (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
std::string base::RegexBase::replace_literal (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options) const
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_replace_literal;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::RegexBase::replace_literal (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_replace_literal;
  auto match_options_to_c = gi::unwrap (match_options);
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (const char*) (replacement_to_c), (::GRegexMatchFlags) (match_options_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_regex_split (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options);
// char** g_regex_split (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options);
std::vector<std::string> base::RegexBase::split (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_split;
  auto match_options_to_c = gi::unwrap (match_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char*) (string_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** g_regex_split_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError ** error);
// char** g_regex_split_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
std::vector<std::string> base::RegexBase::split_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens) const
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_split_full;
  auto max_tokens_to_c = max_tokens;
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (gint) (max_tokens_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::RegexBase::split_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens, GLib::Error * _error) const noexcept
{
  typedef char** (*call_wrap_t) (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_split_full;
  auto max_tokens_to_c = max_tokens;
  auto match_options_to_c = gi::unwrap (match_options);
  auto start_position_to_c = start_position;
  auto string_i = detail::make_list_unwrap_range (string, string_len, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GRegex*) (gobj_()), (const char**) (string_to_c), (gssize) (string_w.size()), (gint) (start_position_to_c), (::GRegexMatchFlags) (match_options_to_c), (gint) (max_tokens_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// void g_regex_unref (GRegex* regex);
// void g_regex_unref (::GRegex* regex);
// IGNORE; marked ignore

// gboolean g_regex_check_replacement (const gchar* replacement, gboolean* has_references, GError ** error);
// gboolean g_regex_check_replacement (const char* replacement, gboolean* has_references, GError ** error);
bool base::RegexBase::check_replacement (const std::string & replacement, bool * has_references)
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (has_references ? &has_references_o : nullptr), &error);
  if (has_references) *has_references = has_references_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::RegexBase::check_replacement (const std::string & replacement, bool * has_references, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (has_references ? &has_references_o : nullptr), _error ? &_error_o : nullptr);
  if (has_references) *has_references = has_references_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, bool> base::RegexBase::check_replacement (const std::string & replacement)
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (&has_references_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, has_references_o);
}
std::tuple<bool, bool> base::RegexBase::check_replacement (const std::string & replacement, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* replacement, gboolean* has_references, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_check_replacement;
  gboolean has_references_o {};
  auto replacement_to_c = gi::unwrap (replacement, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (replacement_to_c), (gboolean*) (&has_references_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, has_references_o);
}

// GQuark g_regex_error_quark ();
// ::GQuark g_regex_error_quark ();
GLib::Quark base::RegexBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gchar* g_regex_escape_nul (const gchar* string, gint length);
// char* g_regex_escape_nul (const char* string, gint length);
std::string base::RegexBase::escape_nul (const std::string & string, gint length) noexcept
{
  typedef char* (*call_wrap_t) (const char* string, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_escape_nul;
  auto length_to_c = length;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (gint) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_regex_escape_string (const gchar* string, gint length);
// char* g_regex_escape_string (const char** string, gint length);
std::string base::RegexBase::escape_string (std::string * string, gint length) noexcept
{
  typedef char* (*call_wrap_t) (const char** string, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_escape_string;
  auto string_i = detail::make_list_unwrap_range (string, length, false);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (string_to_c), (gint) (string_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_regex_match_simple (const gchar* pattern, const gchar* string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// gboolean g_regex_match_simple (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
bool base::RegexBase::match_simple (const std::string & pattern, const std::string & string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_match_simple;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return _temp_ret;
}

// gchar** g_regex_split_simple (const gchar* pattern, const gchar* string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// char** g_regex_split_simple (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
std::vector<std::string> base::RegexBase::split_simple (const std::string & pattern, const std::string & string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept
{
  typedef char** (*call_wrap_t) (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
  call_wrap_t call_wrap_v = (call_wrap_t) g_regex_split_simple;
  auto match_options_to_c = gi::unwrap (match_options);
  auto compile_options_to_c = gi::unwrap (compile_options);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c), (const char*) (string_to_c), (::GRegexCompileFlags) (compile_options_to_c), (::GRegexMatchFlags) (match_options_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/regex_extra_def_impl.hpp>)
#include <glib/regex_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/regex_extra_impl.hpp>)
#include <glib/regex_extra_impl.hpp>
#endif
#endif

#endif
