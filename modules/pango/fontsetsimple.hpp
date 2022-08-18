// AUTO-GENERATED

#ifndef _GI_PANGO_FONTSETSIMPLE_HPP_
#define _GI_PANGO_FONTSETSIMPLE_HPP_

#include "fontset.hpp"

namespace gi {

namespace repository {

namespace Pango {

class Font;
class Language;

class FontsetSimple;

namespace base {


#define GI_PANGO_FONTSETSIMPLE_BASE base::FontsetSimpleBase
class FontsetSimpleBase : public Pango::Fontset
{
typedef Pango::Fontset super_type;
public:
typedef ::PangoFontsetSimple BaseObjectType;

FontsetSimpleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_fontset_simple_get_type(); } 

// PangoFontsetSimple* pango_fontset_simple_new (PangoLanguage* language);
// ::PangoFontsetSimple* pango_fontset_simple_new (::PangoLanguage* language);
static GI_INLINE_DECL Pango::FontsetSimple new_ (Pango::Language language) noexcept;

// void pango_fontset_simple_append (PangoFontsetSimple* fontset, PangoFont* font);
// void pango_fontset_simple_append (::PangoFontsetSimple* fontset, ::PangoFont* font);
GI_INLINE_DECL void append (Pango::Font font) noexcept;

// int pango_fontset_simple_size (PangoFontsetSimple* fontset);
// gint pango_fontset_simple_size (::PangoFontsetSimple* fontset);
GI_INLINE_DECL gint size () noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontsetsimple_extra_def.hpp>)
#include <pango/fontsetsimple_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontsetsimple_extra.hpp>)
#include <pango/fontsetsimple_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontsetSimple : public GI_PANGO_FONTSETSIMPLE_BASE
{ typedef GI_PANGO_FONTSETSIMPLE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontsetSimple>
{ typedef Pango::FontsetSimple type; }; 

} // namespace repository

} // namespace gi

#endif
