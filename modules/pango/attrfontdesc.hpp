// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFONTDESC_HPP_
#define _GI_PANGO_ATTRFONTDESC_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Attribute;
class FontDescription;

class AttrFontDesc;

namespace base {


#define GI_PANGO_ATTRFONTDESC_BASE base::AttrFontDescBase
class AttrFontDescBase : public gi::detail::CBoxedWrapper<AttrFontDescBase, ::PangoAttrFontDesc>
{
typedef gi::detail::CBoxedWrapper<AttrFontDescBase, ::PangoAttrFontDesc> super_type;
public:

AttrFontDescBase (std::nullptr_t = nullptr) : super_type() {}

// ::PangoFontDescription* AttrFontDesc::desc (const ::PangoAttrFontDesc* obj);
// ::PangoFontDescription* AttrFontDesc::desc (const ::PangoAttrFontDesc* obj);
GI_INLINE_DECL Pango::FontDescription desc_ () const noexcept;

// PangoAttribute* pango_attr_font_desc_new (const PangoFontDescription* desc);
// ::PangoAttribute* pango_attr_font_desc_new (const ::PangoFontDescription* desc);
static GI_INLINE_DECL Pango::Attribute new_ (const Pango::FontDescription & desc) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra_def.hpp>)
#include <pango/attrfontdesc_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfontdesc_extra.hpp>)
#include <pango/attrfontdesc_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class AttrFontDesc : public GI_PANGO_ATTRFONTDESC_BASE
{ typedef GI_PANGO_ATTRFONTDESC_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoAttrFontDesc>
{ typedef Pango::AttrFontDesc type; }; 

} // namespace repository

} // namespace gi

#endif
