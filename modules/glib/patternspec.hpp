// AUTO-GENERATED

#ifndef _GI_GLIB_PATTERNSPEC_HPP_
#define _GI_GLIB_PATTERNSPEC_HPP_


namespace gi {

namespace repository {

namespace GLib {


class PatternSpec;

namespace base {


#define GI_GLIB_PATTERNSPEC_BASE base::PatternSpecBase
class PatternSpecBase : public gi::detail::GBoxedWrapper<PatternSpecBase, ::GPatternSpec>
{
typedef gi::detail::GBoxedWrapper<PatternSpecBase, ::GPatternSpec> super_type;
public:

PatternSpecBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_pattern_spec_get_type(); } 

// GPatternSpec* g_pattern_spec_new (const gchar* pattern);
// ::GPatternSpec* g_pattern_spec_new (const char* pattern);
static GI_INLINE_DECL GLib::PatternSpec new_ (const std::string & pattern) noexcept;

// GPatternSpec* g_pattern_spec_copy (GPatternSpec* pspec);
// ::GPatternSpec* g_pattern_spec_copy (::GPatternSpec* pspec);
GI_INLINE_DECL GLib::PatternSpec copy () noexcept;

// gboolean g_pattern_spec_equal (GPatternSpec* pspec1, GPatternSpec* pspec2);
// gboolean g_pattern_spec_equal (::GPatternSpec* pspec1, ::GPatternSpec* pspec2);
GI_INLINE_DECL bool equal (GLib::PatternSpec pspec2) noexcept;

// void g_pattern_spec_free (GPatternSpec* pspec);
// void g_pattern_spec_free (::GPatternSpec* pspec);
// IGNORE; marked ignore

// gboolean g_pattern_spec_match (GPatternSpec* pspec, gsize string_length, const gchar* string, const gchar* string_reversed);
// gboolean g_pattern_spec_match (::GPatternSpec* pspec, gsize string_length, const char* string, const char* string_reversed);
GI_INLINE_DECL bool match (gsize string_length, const std::string & string, const std::string & string_reversed) noexcept;
GI_INLINE_DECL bool match (gsize string_length, const std::string & string) noexcept;

// gboolean g_pattern_spec_match_string (GPatternSpec* pspec, const gchar* string);
// gboolean g_pattern_spec_match_string (::GPatternSpec* pspec, const char* string);
GI_INLINE_DECL bool match_string (const std::string & string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra_def.hpp>)
#include <glib/patternspec_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/patternspec_extra.hpp>)
#include <glib/patternspec_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class PatternSpec : public GI_GLIB_PATTERNSPEC_BASE
{ typedef GI_GLIB_PATTERNSPEC_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GPatternSpec>
{ typedef GLib::PatternSpec type; }; 

} // namespace repository

} // namespace gi

#endif
