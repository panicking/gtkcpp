// AUTO-GENERATED

#ifndef _GI_GLIB_MATCHINFO_IMPL_HPP_
#define _GI_GLIB_MATCHINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// gchar* g_match_info_expand_references (const GMatchInfo* match_info, const gchar* string_to_expand, GError ** error);
// char* g_match_info_expand_references (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
std::string base::MatchInfoBase::expand_references (const std::string & string_to_expand) const
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_expand_references;
  auto string_to_expand_to_c = gi::unwrap (string_to_expand, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (string_to_expand_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::MatchInfoBase::expand_references (const std::string & string_to_expand, GLib::Error * _error) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_expand_references;
  auto string_to_expand_to_c = gi::unwrap (string_to_expand, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (string_to_expand_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_match_info_fetch (const GMatchInfo* match_info, gint match_num);
// char* g_match_info_fetch (const ::GMatchInfo* match_info, gint match_num);
std::string base::MatchInfoBase::fetch (gint match_num) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch;
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_match_info_fetch_all (const GMatchInfo* match_info);
// char** g_match_info_fetch_all (const ::GMatchInfo* match_info);
std::vector<std::string> base::MatchInfoBase::fetch_all () const noexcept
{
  typedef char** (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_all;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar* g_match_info_fetch_named (const GMatchInfo* match_info, const gchar* name);
// char* g_match_info_fetch_named (const ::GMatchInfo* match_info, const char* name);
std::string base::MatchInfoBase::fetch_named (const std::string & name) const noexcept
{
  typedef char* (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_named;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_match_info_fetch_named_pos (const GMatchInfo* match_info, const gchar* name, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_named_pos (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
bool base::MatchInfoBase::fetch_named_pos (const std::string & name, gint * start_pos, gint * end_pos) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_named_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::MatchInfoBase::fetch_named_pos (const std::string & name) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_named_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (const char*) (name_to_c), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  return std::make_tuple (_temp_ret, start_pos_o, end_pos_o);
}

// gboolean g_match_info_fetch_pos (const GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_pos (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
bool base::MatchInfoBase::fetch_pos (gint match_num, gint * start_pos, gint * end_pos) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c), (gint*) (start_pos ? &start_pos_o : nullptr), (gint*) (end_pos ? &end_pos_o : nullptr));
  if (end_pos) *end_pos = end_pos_o;
  if (start_pos) *start_pos = start_pos_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::MatchInfoBase::fetch_pos (gint match_num) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_fetch_pos;
  gint end_pos_o {};
  gint start_pos_o {};
  auto match_num_to_c = match_num;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()), (gint) (match_num_to_c), (gint*) (&start_pos_o), (gint*) (&end_pos_o));
  return std::make_tuple (_temp_ret, start_pos_o, end_pos_o);
}

// void g_match_info_free (GMatchInfo* match_info);
// void g_match_info_free (::GMatchInfo* match_info);
// IGNORE; marked ignore

// gint g_match_info_get_match_count (const GMatchInfo* match_info);
// gint g_match_info_get_match_count (const ::GMatchInfo* match_info);
gint base::MatchInfoBase::get_match_count () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_get_match_count;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// GRegex* g_match_info_get_regex (const GMatchInfo* match_info);
// ::GRegex* g_match_info_get_regex (const ::GMatchInfo* match_info);
GLib::Regex base::MatchInfoBase::get_regex () const noexcept
{
  typedef ::GRegex* (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_get_regex;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_match_info_get_string (const GMatchInfo* match_info);
// const char* g_match_info_get_string (const ::GMatchInfo* match_info);
std::string base::MatchInfoBase::get_string () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_get_string;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_match_info_is_partial_match (const GMatchInfo* match_info);
// gboolean g_match_info_is_partial_match (const ::GMatchInfo* match_info);
bool base::MatchInfoBase::is_partial_match () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_is_partial_match;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_match_info_matches (const GMatchInfo* match_info);
// gboolean g_match_info_matches (const ::GMatchInfo* match_info);
bool base::MatchInfoBase::matches () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GMatchInfo* match_info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_matches;
  auto _temp_ret = call_wrap_v ((const ::GMatchInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean g_match_info_next (GMatchInfo* match_info, GError ** error);
// gboolean g_match_info_next (::GMatchInfo* match_info, GError ** error);
bool base::MatchInfoBase::next ()
{
  typedef gboolean (*call_wrap_t) (::GMatchInfo* match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_next;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GMatchInfo*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::MatchInfoBase::next (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GMatchInfo* match_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_match_info_next;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GMatchInfo*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GMatchInfo* g_match_info_ref (GMatchInfo* match_info);
// ::GMatchInfo* g_match_info_ref (::GMatchInfo* match_info);
// IGNORE; marked ignore

// void g_match_info_unref (GMatchInfo* match_info);
// void g_match_info_unref (::GMatchInfo* match_info);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_def_impl.hpp>)
#include <glib/matchinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_impl.hpp>)
#include <glib/matchinfo_extra_impl.hpp>
#endif
#endif

#endif
