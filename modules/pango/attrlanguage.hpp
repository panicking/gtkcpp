// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLANGUAGE_HPP_
#define _GI_PANGO_ATTRLANGUAGE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class Language;

class AttrLanguage;

namespace base {


#define GI_PANGO_ATTRLANGUAGE_BASE base::AttrLanguageBase
class AttrLanguageBase : public gi::detail::CBoxedWrapper<AttrLanguageBase, ::PangoAttrLanguage>
{
typedef gi::detail::CBoxedWrapper<AttrLanguageBase, ::PangoAttrLanguage> super_type;
public:

AttrLanguageBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoLanguage* AttrLanguage::value (const ::PangoAttrLanguage* obj);
// ::PangoLanguage* AttrLanguage::value (const ::PangoAttrLanguage* obj);
GI_INLINE_DECL Pango::Language value_ () const noexcept;

// PangoAttribute* pango_attr_language_new (PangoLanguage* language);
// ::PangoAttribute* pango_attr_language_new (::PangoLanguage* language);
static GI_INLINE_DECL Pango::Attribute new_ (Pango::Language language) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra_def.hpp>)
#include <pango/attrlanguage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlanguage_extra.hpp>)
#include <pango/attrlanguage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrLanguage : public GI_PANGO_ATTRLANGUAGE_BASE
{ typedef GI_PANGO_ATTRLANGUAGE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrLanguage>
{ typedef Pango::AttrLanguage type; }; 

} // namespace repository

} // namespace gi

#endif
