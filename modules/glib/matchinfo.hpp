// AUTO-GENERATED

#ifndef _GI_GLIB_MATCHINFO_HPP_
#define _GI_GLIB_MATCHINFO_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Regex;

class MatchInfo;

namespace base {


#define GI_GLIB_MATCHINFO_BASE base::MatchInfoBase
class MatchInfoBase : public gi::detail::GBoxedWrapper<MatchInfoBase, ::GMatchInfo>
{
typedef gi::detail::GBoxedWrapper<MatchInfoBase, ::GMatchInfo> super_type;
public:

MatchInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_match_info_get_type(); } 

// gchar* g_match_info_expand_references (const GMatchInfo* match_info, const gchar* string_to_expand, GError ** error);
// char* g_match_info_expand_references (const ::GMatchInfo* match_info, const char* string_to_expand, GError ** error);
GI_INLINE_DECL std::string expand_references (const std::string & string_to_expand) const;
GI_INLINE_DECL std::string expand_references (const std::string & string_to_expand, GLib::Error * _error) const noexcept;

// gchar* g_match_info_fetch (const GMatchInfo* match_info, gint match_num);
// char* g_match_info_fetch (const ::GMatchInfo* match_info, gint match_num);
GI_INLINE_DECL std::string fetch (gint match_num) const noexcept;

// gchar** g_match_info_fetch_all (const GMatchInfo* match_info);
// char** g_match_info_fetch_all (const ::GMatchInfo* match_info);
GI_INLINE_DECL std::vector<std::string> fetch_all () const noexcept;

// gchar* g_match_info_fetch_named (const GMatchInfo* match_info, const gchar* name);
// char* g_match_info_fetch_named (const ::GMatchInfo* match_info, const char* name);
GI_INLINE_DECL std::string fetch_named (const std::string & name) const noexcept;

// gboolean g_match_info_fetch_named_pos (const GMatchInfo* match_info, const gchar* name, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_named_pos (const ::GMatchInfo* match_info, const char* name, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool fetch_named_pos (const std::string & name, gint * start_pos = nullptr, gint * end_pos = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> fetch_named_pos (const std::string & name) const noexcept;

// gboolean g_match_info_fetch_pos (const GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
// gboolean g_match_info_fetch_pos (const ::GMatchInfo* match_info, gint match_num, gint* start_pos, gint* end_pos);
GI_INLINE_DECL bool fetch_pos (gint match_num, gint * start_pos = nullptr, gint * end_pos = nullptr) const noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> fetch_pos (gint match_num) const noexcept;

// void g_match_info_free (GMatchInfo* match_info);
// void g_match_info_free (::GMatchInfo* match_info);
// IGNORE; marked ignore

// gint g_match_info_get_match_count (const GMatchInfo* match_info);
// gint g_match_info_get_match_count (const ::GMatchInfo* match_info);
GI_INLINE_DECL gint get_match_count () const noexcept;

// GRegex* g_match_info_get_regex (const GMatchInfo* match_info);
// ::GRegex* g_match_info_get_regex (const ::GMatchInfo* match_info);
GI_INLINE_DECL GLib::Regex get_regex () const noexcept;

// const gchar* g_match_info_get_string (const GMatchInfo* match_info);
// const char* g_match_info_get_string (const ::GMatchInfo* match_info);
GI_INLINE_DECL std::string get_string () const noexcept;

// gboolean g_match_info_is_partial_match (const GMatchInfo* match_info);
// gboolean g_match_info_is_partial_match (const ::GMatchInfo* match_info);
GI_INLINE_DECL bool is_partial_match () const noexcept;

// gboolean g_match_info_matches (const GMatchInfo* match_info);
// gboolean g_match_info_matches (const ::GMatchInfo* match_info);
GI_INLINE_DECL bool matches () const noexcept;

// gboolean g_match_info_next (GMatchInfo* match_info, GError ** error);
// gboolean g_match_info_next (::GMatchInfo* match_info, GError ** error);
GI_INLINE_DECL bool next ();
GI_INLINE_DECL bool next (GLib::Error * _error) noexcept;

// GMatchInfo* g_match_info_ref (GMatchInfo* match_info);
// ::GMatchInfo* g_match_info_ref (::GMatchInfo* match_info);
// IGNORE; marked ignore

// void g_match_info_unref (GMatchInfo* match_info);
// void g_match_info_unref (::GMatchInfo* match_info);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra_def.hpp>)
#include <glib/matchinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/matchinfo_extra.hpp>)
#include <glib/matchinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class MatchInfo : public GI_GLIB_MATCHINFO_BASE
{ typedef GI_GLIB_MATCHINFO_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GMatchInfo>
{ typedef GLib::MatchInfo type; }; 

} // namespace repository

} // namespace gi

#endif
