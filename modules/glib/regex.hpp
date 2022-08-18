// AUTO-GENERATED

#ifndef _GI_GLIB_REGEX_HPP_
#define _GI_GLIB_REGEX_HPP_


namespace gi {

namespace repository {

namespace GLib {

class MatchInfo;

class Regex;

namespace base {


#define GI_GLIB_REGEX_BASE base::RegexBase
class RegexBase : public gi::detail::GBoxedWrapper<RegexBase, ::GRegex>
{
typedef gi::detail::GBoxedWrapper<RegexBase, ::GRegex> super_type;
public:

RegexBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_regex_get_type(); } 

// GRegex* g_regex_new (const gchar* pattern, GRegexCompileFlags compile_options, GRegexMatchFlags match_options, GError ** error);
// ::GRegex* g_regex_new (const char* pattern, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options, GError ** error);
static GI_INLINE_DECL GLib::Regex new_ (const std::string & pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options);
static GI_INLINE_DECL GLib::Regex new_ (const std::string & pattern, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options, GLib::Error * _error) noexcept;

// gint g_regex_get_capture_count (const GRegex* regex);
// gint g_regex_get_capture_count (const ::GRegex* regex);
GI_INLINE_DECL gint get_capture_count () const noexcept;

// GRegexCompileFlags g_regex_get_compile_flags (const GRegex* regex);
// ::GRegexCompileFlags g_regex_get_compile_flags (const ::GRegex* regex);
GI_INLINE_DECL GLib::RegexCompileFlags get_compile_flags () const noexcept;

// gboolean g_regex_get_has_cr_or_lf (const GRegex* regex);
// gboolean g_regex_get_has_cr_or_lf (const ::GRegex* regex);
GI_INLINE_DECL bool get_has_cr_or_lf () const noexcept;

// GRegexMatchFlags g_regex_get_match_flags (const GRegex* regex);
// ::GRegexMatchFlags g_regex_get_match_flags (const ::GRegex* regex);
GI_INLINE_DECL GLib::RegexMatchFlags get_match_flags () const noexcept;

// gint g_regex_get_max_backref (const GRegex* regex);
// gint g_regex_get_max_backref (const ::GRegex* regex);
GI_INLINE_DECL gint get_max_backref () const noexcept;

// gint g_regex_get_max_lookbehind (const GRegex* regex);
// gint g_regex_get_max_lookbehind (const ::GRegex* regex);
GI_INLINE_DECL gint get_max_lookbehind () const noexcept;

// const gchar* g_regex_get_pattern (const GRegex* regex);
// const char* g_regex_get_pattern (const ::GRegex* regex);
GI_INLINE_DECL std::string get_pattern () const noexcept;

// gint g_regex_get_string_number (const GRegex* regex, const gchar* name);
// gint g_regex_get_string_number (const ::GRegex* regex, const char* name);
GI_INLINE_DECL gint get_string_number (const std::string & name) const noexcept;

// gboolean g_regex_match (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options, GMatchInfo** match_info);
// gboolean g_regex_match (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
GI_INLINE_DECL bool match (const std::string & string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept;

// gboolean g_regex_match_all (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options, GMatchInfo** match_info);
// gboolean g_regex_match_all (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info);
GI_INLINE_DECL bool match_all (const std::string & string, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept;

// gboolean g_regex_match_all_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info, GError ** error);
// gboolean g_regex_match_all_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
GI_INLINE_DECL bool match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info = nullptr) const;
GI_INLINE_DECL bool match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_all_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gboolean g_regex_match_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GMatchInfo** match_info, GError ** error);
// gboolean g_regex_match_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, ::GMatchInfo** match_info, GError ** error);
GI_INLINE_DECL bool match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info = nullptr) const;
GI_INLINE_DECL bool match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::MatchInfo * match_info, GLib::Error * _error) const noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::tuple<bool, GLib::MatchInfo> match_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// GRegex* g_regex_ref (GRegex* regex);
// ::GRegex* g_regex_ref (::GRegex* regex);
// IGNORE; marked ignore

// gchar* g_regex_replace (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, const gchar* replacement, GRegexMatchFlags match_options, GError ** error);
// char* g_regex_replace (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
GI_INLINE_DECL std::string replace (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::string replace (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gchar* g_regex_replace_eval (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, GRegexEvalCallback eval, gpointer user_data, GError ** error);
// char* g_regex_replace_eval (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, GLib::RegexEvalCallback::cfunction_type eval, void* user_data, GError ** error);
// IGNORE; not introspectable, callback misses scope info

// gchar* g_regex_replace_literal (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, const gchar* replacement, GRegexMatchFlags match_options, GError ** error);
// char* g_regex_replace_literal (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, const char* replacement, ::GRegexMatchFlags match_options, GError ** error);
GI_INLINE_DECL std::string replace_literal (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options) const;
GI_INLINE_DECL std::string replace_literal (std::string * string, gssize string_len, gint start_position, const std::string & replacement, GLib::RegexMatchFlags match_options, GLib::Error * _error) const noexcept;

// gchar** g_regex_split (const GRegex* regex, const gchar* string, GRegexMatchFlags match_options);
// char** g_regex_split (const ::GRegex* regex, const char* string, ::GRegexMatchFlags match_options);
GI_INLINE_DECL std::vector<std::string> split (const std::string & string, GLib::RegexMatchFlags match_options) const noexcept;

// gchar** g_regex_split_full (const GRegex* regex, const gchar* string, gssize string_len, gint start_position, GRegexMatchFlags match_options, gint max_tokens, GError ** error);
// char** g_regex_split_full (const ::GRegex* regex, const char** string, gssize string_len, gint start_position, ::GRegexMatchFlags match_options, gint max_tokens, GError ** error);
GI_INLINE_DECL std::vector<std::string> split_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens) const;
GI_INLINE_DECL std::vector<std::string> split_full (std::string * string, gssize string_len, gint start_position, GLib::RegexMatchFlags match_options, gint max_tokens, GLib::Error * _error) const noexcept;

// void g_regex_unref (GRegex* regex);
// void g_regex_unref (::GRegex* regex);
// IGNORE; marked ignore

// gboolean g_regex_check_replacement (const gchar* replacement, gboolean* has_references, GError ** error);
// gboolean g_regex_check_replacement (const char* replacement, gboolean* has_references, GError ** error);
static GI_INLINE_DECL bool check_replacement (const std::string & replacement, bool * has_references = nullptr);
static GI_INLINE_DECL bool check_replacement (const std::string & replacement, bool * has_references, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, bool> check_replacement (const std::string & replacement);
static GI_INLINE_DECL std::tuple<bool, bool> check_replacement (const std::string & replacement, GLib::Error * _error) noexcept;

// GQuark g_regex_error_quark ();
// ::GQuark g_regex_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// gchar* g_regex_escape_nul (const gchar* string, gint length);
// char* g_regex_escape_nul (const char* string, gint length);
static GI_INLINE_DECL std::string escape_nul (const std::string & string, gint length) noexcept;

// gchar* g_regex_escape_string (const gchar* string, gint length);
// char* g_regex_escape_string (const char** string, gint length);
static GI_INLINE_DECL std::string escape_string (std::string * string, gint length) noexcept;

// gboolean g_regex_match_simple (const gchar* pattern, const gchar* string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// gboolean g_regex_match_simple (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
static GI_INLINE_DECL bool match_simple (const std::string & pattern, const std::string & string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept;

// gchar** g_regex_split_simple (const gchar* pattern, const gchar* string, GRegexCompileFlags compile_options, GRegexMatchFlags match_options);
// char** g_regex_split_simple (const char* pattern, const char* string, ::GRegexCompileFlags compile_options, ::GRegexMatchFlags match_options);
static GI_INLINE_DECL std::vector<std::string> split_simple (const std::string & pattern, const std::string & string, GLib::RegexCompileFlags compile_options, GLib::RegexMatchFlags match_options) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/regex_extra_def.hpp>)
#include <glib/regex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/regex_extra.hpp>)
#include <glib/regex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Regex : public GI_GLIB_REGEX_BASE
{ typedef GI_GLIB_REGEX_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRegex>
{ typedef GLib::Regex type; }; 

} // namespace repository

} // namespace gi

#endif
