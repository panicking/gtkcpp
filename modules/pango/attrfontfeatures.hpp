// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTFEATURES_HPP_
#define _GI_PANGO_ATTRFONTFEATURES_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;

class AttrFontFeatures;

namespace base {


#define GI_PANGO_ATTRFONTFEATURES_BASE base::AttrFontFeaturesBase
class AttrFontFeaturesBase : public gi::detail::CBoxedWrapper<AttrFontFeaturesBase, ::PangoAttrFontFeatures>
{
typedef gi::detail::CBoxedWrapper<AttrFontFeaturesBase, ::PangoAttrFontFeatures> super_type;
public:

AttrFontFeaturesBase (std::nullptr_t = nullptr) : super_type() {}

// char* AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj);
// char* AttrFontFeatures::features (const ::PangoAttrFontFeatures* obj);
GI_INLINE_DECL std::string features_ () const noexcept;

// PangoAttribute* pango_attr_font_features_new (const char* features);
// ::PangoAttribute* pango_attr_font_features_new (const char* features);
static GI_INLINE_DECL Pango::Attribute new_ (const std::string & features) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra_def.hpp>)
#include <pango/attrfontfeatures_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontfeatures_extra.hpp>)
#include <pango/attrfontfeatures_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrFontFeatures : public GI_PANGO_ATTRFONTFEATURES_BASE
{ typedef GI_PANGO_ATTRFONTFEATURES_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrFontFeatures>
{ typedef Pango::AttrFontFeatures type; }; 

} // namespace repository

} // namespace gi

#endif
