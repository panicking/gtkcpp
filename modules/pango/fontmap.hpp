// AUTO-GENERATED

#ifndef _GI_PANGO_FONTMAP_HPP_
#define _GI_PANGO_FONTMAP_HPP_


namespace gi {

namespace repository {

namespace Pango {

class Context;
class Font;
class FontDescription;
class FontFamily;
class Fontset;
class Language;

class FontMap;

namespace base {


#define GI_PANGO_FONTMAP_BASE base::FontMapBase
class FontMapBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontMap BaseObjectType;

FontMapBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_map_get_type(); } 

// void pango_font_map_changed (PangoFontMap* fontmap);
// void pango_font_map_changed (::PangoFontMap* fontmap);
GI_INLINE_DECL void changed () noexcept;

// PangoContext* pango_font_map_create_context (PangoFontMap* fontmap);
// ::PangoContext* pango_font_map_create_context (::PangoFontMap* fontmap);
GI_INLINE_DECL Pango::Context create_context () noexcept;

// PangoFontFamily* pango_font_map_get_family (PangoFontMap* fontmap, const char* name);
// ::PangoFontFamily* pango_font_map_get_family (::PangoFontMap* fontmap, const char* name);
GI_INLINE_DECL Pango::FontFamily get_family (const std::string & name) noexcept;

// guint pango_font_map_get_serial (PangoFontMap* fontmap);
// guint pango_font_map_get_serial (::PangoFontMap* fontmap);
GI_INLINE_DECL guint get_serial () noexcept;

// void pango_font_map_list_families (PangoFontMap* fontmap, PangoFontFamily*** families, int* n_families);
// void pango_font_map_list_families (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
GI_INLINE_DECL void list_families (std::vector<Pango::FontFamily> & families) noexcept;

// PangoFont* pango_font_map_load_font (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* pango_font_map_load_font (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Font load_font (Pango::Context context, const Pango::FontDescription & desc) noexcept;

// PangoFontset* pango_font_map_load_fontset (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* pango_font_map_load_fontset (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
GI_INLINE_DECL Pango::Fontset load_fontset (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra_def.hpp>)
#include <pango/fontmap_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontmap_extra.hpp>)
#include <pango/fontmap_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontMap : public GI_PANGO_FONTMAP_BASE
{ typedef GI_PANGO_FONTMAP_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontMap>
{ typedef Pango::FontMap type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontMapClassDef
{
typedef FontMapClassDef self;
public:
typedef Pango::FontMap instance_type;
typedef ::PangoFontMapClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FontMap::changed (PangoFontMap* fontmap);
// void FontMap::changed (::PangoFontMap* fontmap);
virtual void changed_ () noexcept = 0;

// PangoFontFamily* FontMap::get_family (PangoFontMap* fontmap, const char* name);
// ::PangoFontFamily* FontMap::get_family (::PangoFontMap* fontmap, const char* name);
virtual Pango::FontFamily get_family_ (const std::string & name) noexcept = 0;

// guint FontMap::get_serial (PangoFontMap* fontmap);
// guint FontMap::get_serial (::PangoFontMap* fontmap);
virtual guint get_serial_ () noexcept = 0;

// void FontMap::list_families (PangoFontMap* fontmap, PangoFontFamily*** families, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFont* FontMap::load_font (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* FontMap::load_font (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
virtual Pango::Font load_font_ (Pango::Context context, const Pango::FontDescription & desc) noexcept = 0;

// PangoFontset* FontMap::load_fontset (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* FontMap::load_fontset (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
virtual Pango::Fontset load_fontset_ (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FontMapClass: public detail::ClassTemplate<Pango::impl::internal::FontMapClassDef, GObject::impl::internal::ObjectClass>
{
typedef FontMapClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontMapClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FontMap::changed (PangoFontMap* fontmap);
// void FontMap::changed (::PangoFontMap* fontmap);
GI_INLINE_DECL void changed_ () noexcept override;

// PangoFontFamily* FontMap::get_family (PangoFontMap* fontmap, const char* name);
// ::PangoFontFamily* FontMap::get_family (::PangoFontMap* fontmap, const char* name);
GI_INLINE_DECL Pango::FontFamily get_family_ (const std::string & name) noexcept override;

// guint FontMap::get_serial (PangoFontMap* fontmap);
// guint FontMap::get_serial (::PangoFontMap* fontmap);
GI_INLINE_DECL guint get_serial_ () noexcept override;

// void FontMap::list_families (PangoFontMap* fontmap, PangoFontFamily*** families, int* n_families);
// void FontMap::list_families (::PangoFontMap* fontmap, ::PangoFontFamily*** families, gint* n_families);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// PangoFont* FontMap::load_font (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc);
// ::PangoFont* FontMap::load_font (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc);
GI_INLINE_DECL Pango::Font load_font_ (Pango::Context context, const Pango::FontDescription & desc) noexcept override;

// PangoFontset* FontMap::load_fontset (PangoFontMap* fontmap, PangoContext* context, const PangoFontDescription* desc, PangoLanguage* language);
// ::PangoFontset* FontMap::load_fontset (::PangoFontMap* fontmap, ::PangoContext* context, const ::PangoFontDescription* desc, ::PangoLanguage* language);
GI_INLINE_DECL Pango::Fontset load_fontset_ (Pango::Context context, const Pango::FontDescription & desc, Pango::Language language) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using FontMapImpl = detail::ObjectImpl<FontMap, internal::FontMapClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
