// AUTO-GENERATED

#ifndef _GI_GLIB_PATTERNSPEC_IMPL_HPP_
#define _GI_GLIB_PATTERNSPEC_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GPatternSpec* g_pattern_spec_new (const gchar* pattern);
// ::GPatternSpec* g_pattern_spec_new (const char* pattern);
GLib::PatternSpec base::PatternSpecBase::new_ (const std::string & pattern) noexcept
{
  typedef ::GPatternSpec* (*call_wrap_t) (const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_new;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (pattern_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GPatternSpec* g_pattern_spec_copy (GPatternSpec* pspec);
// ::GPatternSpec* g_pattern_spec_copy (::GPatternSpec* pspec);
GLib::PatternSpec base::PatternSpecBase::copy () noexcept
{
  typedef ::GPatternSpec* (*call_wrap_t) (::GPatternSpec* pspec);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_copy;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_pattern_spec_equal (GPatternSpec* pspec1, GPatternSpec* pspec2);
// gboolean g_pattern_spec_equal (::GPatternSpec* pspec1, ::GPatternSpec* pspec2);
bool base::PatternSpecBase::equal (GLib::PatternSpec pspec2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec1, ::GPatternSpec* pspec2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_equal;
  auto pspec2_to_c = gi::unwrap (pspec2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (::GPatternSpec*) (pspec2_to_c));
  return _temp_ret;
}

// void g_pattern_spec_free (GPatternSpec* pspec);
// void g_pattern_spec_free (::GPatternSpec* pspec);
// IGNORE; marked ignore

// gboolean g_pattern_spec_match (GPatternSpec* pspec, gsize string_length, const gchar* string, const gchar* string_reversed);
// gboolean g_pattern_spec_match (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
bool base::PatternSpecBase::match (gsize string_length, const std::string & string, const std::string & string_reversed) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_match;
  auto string_reversed_to_c = gi::unwrap (string_reversed, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto string_length_to_c = string_length;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (gsize) (string_length_to_c), (const char*) (string_to_c), (const char*) (string_reversed_to_c));
  return _temp_ret;
}
bool base::PatternSpecBase::match (gsize string_length, const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_match;
  auto string_reversed_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto string_length_to_c = string_length;
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (gsize) (string_length_to_c), (const char*) (string_to_c), (const char*) (string_reversed_to_c));
  return _temp_ret;
}

// gboolean g_pattern_spec_match_string (GPatternSpec* pspec, const gchar* string);
// gboolean g_pattern_spec_match_string (::GPatternSpec* pspec, const char* string);
bool base::PatternSpecBase::match_string (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GPatternSpec* pspec, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_pattern_spec_match_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GPatternSpec*) (gobj_()), (const char*) (string_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_def_impl.hpp>)
#include <glib/patternspec_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_impl.hpp>)
#include <glib/patternspec_extra_impl.hpp>
#endif
#endif

#endif
