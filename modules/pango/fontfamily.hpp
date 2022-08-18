// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFAMILY_HPP_
#define _GI_PANGO_FONTFAMILY_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontFace;

class FontFamily;

namespace base {


#define GI_PANGO_FONTFAMILY_BASE base::FontFamilyBase
class FontFamilyBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontFamily BaseObjectType;

FontFamilyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_family_get_type(); } 

// PangoFontFace* pango_font_family_get_face (PangoFontFamily* family, const char* name);
// ::PangoFontFace* pango_font_family_get_face (::PangoFontFamily* family, const char* name);
GI_INLINE_DECL Pango::FontFace get_face (const std::string & name) noexcept;
GI_INLINE_DECL Pango::FontFace get_face () noexcept;

// const char* pango_font_family_get_name (PangoFontFamily* family);
// const char* pango_font_family_get_name (::PangoFontFamily* family);
GI_INLINE_DECL std::string get_name () noexcept;

// gboolean pango_font_family_is_monospace (PangoFontFamily* family);
// gboolean pango_font_family_is_monospace (::PangoFontFamily* family);
GI_INLINE_DECL bool is_monospace () noexcept;

// gboolean pango_font_family_is_variable (PangoFontFamily* family);
// gboolean pango_font_family_is_variable (::PangoFontFamily* family);
GI_INLINE_DECL bool is_variable () noexcept;

// void pango_font_family_list_faces (PangoFontFamily* family, PangoFontFace*** faces, int* n_faces);
// void pango_font_family_list_faces (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
GI_INLINE_DECL void list_faces (std::vector<Pango::FontFace> & faces) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_def.hpp>)
#include <pango/fontfamily_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra.hpp>)
#include <pango/fontfamily_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontFamily : public GI_PANGO_FONTFAMILY_BASE
{ typedef GI_PANGO_FONTFAMILY_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontFamily>
{ typedef Pango::FontFamily type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontFamilyClassDef
{
typedef FontFamilyClassDef self;
public:
typedef Pango::FontFamily instance_type;
typedef ::PangoFontFamilyClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// PangoFontFace* FontFamily::get_face (PangoFontFamily* family, const char* name);
// ::PangoFontFace* FontFamily::get_face (::PangoFontFamily* family, const char* name);
virtual Pango::FontFace get_face_ (const std::string & name) noexcept = 0;

// const char* FontFamily::get_name (PangoFontFamily* family);
// const char* FontFamily::get_name (::PangoFontFamily* family);
// SKIP; invalid callback return transfer none

// gboolean FontFamily::is_monospace (PangoFontFamily* family);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family);
virtual bool is_monospace_ () noexcept = 0;

// gboolean FontFamily::is_variable (PangoFontFamily* family);
// gboolean FontFamily::is_variable (::PangoFontFamily* family);
virtual bool is_variable_ () noexcept = 0;

// void FontFamily::list_faces (PangoFontFamily* family, PangoFontFace*** faces, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class FontFamilyClass: public detail::ClassTemplate<Pango::impl::internal::FontFamilyClassDef, GObject::impl::internal::ObjectClass>
{
typedef FontFamilyClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontFamilyClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// PangoFontFace* FontFamily::get_face (PangoFontFamily* family, const char* name);
// ::PangoFontFace* FontFamily::get_face (::PangoFontFamily* family, const char* name);
GI_INLINE_DECL Pango::FontFace get_face_ (const std::string & name) noexcept override;

// const char* FontFamily::get_name (PangoFontFamily* family);
// const char* FontFamily::get_name (::PangoFontFamily* family);
// SKIP; invalid callback return transfer none

// gboolean FontFamily::is_monospace (PangoFontFamily* family);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family);
GI_INLINE_DECL bool is_monospace_ () noexcept override;

// gboolean FontFamily::is_variable (PangoFontFamily* family);
// gboolean FontFamily::is_variable (::PangoFontFamily* family);
GI_INLINE_DECL bool is_variable_ () noexcept override;

// void FontFamily::list_faces (PangoFontFamily* family, PangoFontFace*** faces, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using FontFamilyImpl = detail::ObjectImpl<FontFamily, internal::FontFamilyClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
