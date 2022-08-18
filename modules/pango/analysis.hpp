// AUTO-GENERATED

#ifndef _GI_PANGO_ANALYSIS_HPP_
#define _GI_PANGO_ANALYSIS_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Font;
class Language;

class Analysis;

namespace base {


#define GI_PANGO_ANALYSIS_BASE base::AnalysisBase
class AnalysisBase : public gi::detail::CBoxedWrapper<AnalysisBase, ::PangoAnalysis>
{
typedef gi::detail::CBoxedWrapper<AnalysisBase, ::PangoAnalysis> super_type;
public:

AnalysisBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoFont* Analysis::font (const ::PangoAnalysis* obj);
// ::PangoFont* Analysis::font (const ::PangoAnalysis* obj);
GI_INLINE_DECL Pango::Font font_ () const noexcept;

// guint8 Analysis::level (const ::PangoAnalysis* obj);
// guint8 Analysis::level (const ::PangoAnalysis* obj);
GI_INLINE_DECL guint8 level_ () const noexcept;

//  Analysis::level (::PangoAnalysis* obj, guint8 _value);
// void Analysis::level (::PangoAnalysis* obj, guint8 _value);
GI_INLINE_DECL void level_ (guint8 _value) noexcept;

// guint8 Analysis::gravity (const ::PangoAnalysis* obj);
// guint8 Analysis::gravity (const ::PangoAnalysis* obj);
GI_INLINE_DECL guint8 gravity_ () const noexcept;

//  Analysis::gravity (::PangoAnalysis* obj, guint8 _value);
// void Analysis::gravity (::PangoAnalysis* obj, guint8 _value);
GI_INLINE_DECL void gravity_ (guint8 _value) noexcept;

// guint8 Analysis::flags (const ::PangoAnalysis* obj);
// guint8 Analysis::flags (const ::PangoAnalysis* obj);
GI_INLINE_DECL guint8 flags_ () const noexcept;

//  Analysis::flags (::PangoAnalysis* obj, guint8 _value);
// void Analysis::flags (::PangoAnalysis* obj, guint8 _value);
GI_INLINE_DECL void flags_ (guint8 _value) noexcept;

// guint8 Analysis::script (const ::PangoAnalysis* obj);
// guint8 Analysis::script (const ::PangoAnalysis* obj);
GI_INLINE_DECL guint8 script_ () const noexcept;

//  Analysis::script (::PangoAnalysis* obj, guint8 _value);
// void Analysis::script (::PangoAnalysis* obj, guint8 _value);
GI_INLINE_DECL void script_ (guint8 _value) noexcept;

// ::PangoLanguage* Analysis::language (const ::PangoAnalysis* obj);
// ::PangoLanguage* Analysis::language (const ::PangoAnalysis* obj);
GI_INLINE_DECL Pango::Language language_ () const noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/analysis_extra_def.hpp>)
#include <pango/analysis_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/analysis_extra.hpp>)
#include <pango/analysis_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Analysis : public GI_PANGO_ANALYSIS_BASE
{ typedef GI_PANGO_ANALYSIS_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAnalysis>
{ typedef Pango::Analysis type; }; 

} // namespace repository

} // namespace gi

#endif
