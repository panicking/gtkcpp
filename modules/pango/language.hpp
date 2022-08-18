// AUTO-GENERATED

#ifndef _GI_PANGO_LANGUAGE_HPP_
#define _GI_PANGO_LANGUAGE_HPP_


namespace gi {

namespace repository {

namespace Pango {


class Language;

namespace base {


#define GI_PANGO_LANGUAGE_BASE base::LanguageBase
class LanguageBase : public gi::detail::GBoxedWrapper<LanguageBase, ::PangoLanguage>
{
typedef gi::detail::GBoxedWrapper<LanguageBase, ::PangoLanguage> super_type;
public:

LanguageBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return pango_language_get_type(); } 

// const char* pango_language_get_sample_string (PangoLanguage* language);
// const char* pango_language_get_sample_string (::PangoLanguage* language);
GI_INLINE_DECL std::string get_sample_string () noexcept;

// const PangoScript* pango_language_get_scripts (PangoLanguage* language, int* num_scripts);
// const ::PangoScript* pango_language_get_scripts (::PangoLanguage* language, gint* num_scripts);
GI_INLINE_DECL std::vector<Pango::Script> get_scripts () noexcept;

// gboolean pango_language_includes_script (PangoLanguage* language, PangoScript script);
// gboolean pango_language_includes_script (::PangoLanguage* language, ::PangoScript script);
GI_INLINE_DECL bool includes_script (Pango::Script script) noexcept;

// gboolean pango_language_matches (PangoLanguage* language, const char* range_list);
// gboolean pango_language_matches (::PangoLanguage* language, const char* range_list);
GI_INLINE_DECL bool matches (const std::string & range_list) noexcept;

// const char* pango_language_to_string (PangoLanguage* language);
// const char* pango_language_to_string (::PangoLanguage* language);
GI_INLINE_DECL std::string to_string () noexcept;

// PangoLanguage* pango_language_from_string (const char* language);
// ::PangoLanguage* pango_language_from_string (const char* language);
static GI_INLINE_DECL Pango::Language from_string (const std::string & language) noexcept;
static GI_INLINE_DECL Pango::Language from_string () noexcept;

// PangoLanguage* pango_language_get_default ();
// ::PangoLanguage* pango_language_get_default ();
static GI_INLINE_DECL Pango::Language get_default () noexcept;

// PangoLanguage** pango_language_get_preferred ();
// ::PangoLanguage* pango_language_get_preferred ();
// SKIP; inconsistent return  pointer depth (2 vs 1)

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/language_extra_def.hpp>)
#include <pango/language_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/language_extra.hpp>)
#include <pango/language_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Language : public GI_PANGO_LANGUAGE_BASE
{ typedef GI_PANGO_LANGUAGE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLanguage>
{ typedef Pango::Language type; }; 

} // namespace repository

} // namespace gi

#endif
