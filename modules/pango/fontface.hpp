// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFACE_HPP_
#define _GI_PANGO_FONTFACE_HPP_


namespace gi {

namespace repository {

namespace Pango {

class FontDescription;
class FontFamily;

class FontFace;

namespace base {


#define GI_PANGO_FONTFACE_BASE base::FontFaceBase
class FontFaceBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoFontFace BaseObjectType;

FontFaceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_font_face_get_type(); } 

// PangoFontDescription* pango_font_face_describe (PangoFontFace* face);
// ::PangoFontDescription* pango_font_face_describe (::PangoFontFace* face);
GI_INLINE_DECL Pango::FontDescription describe () noexcept;

// const char* pango_font_face_get_face_name (PangoFontFace* face);
// const char* pango_font_face_get_face_name (::PangoFontFace* face);
GI_INLINE_DECL std::string get_face_name () noexcept;

// PangoFontFamily* pango_font_face_get_family (PangoFontFace* face);
// ::PangoFontFamily* pango_font_face_get_family (::PangoFontFace* face);
GI_INLINE_DECL Pango::FontFamily get_family () noexcept;

// gboolean pango_font_face_is_synthesized (PangoFontFace* face);
// gboolean pango_font_face_is_synthesized (::PangoFontFace* face);
GI_INLINE_DECL bool is_synthesized () noexcept;

// void pango_font_face_list_sizes (PangoFontFace* face, int** sizes, int* n_sizes);
// void pango_font_face_list_sizes (::PangoFontFace* face, gint** sizes, gint* n_sizes);
GI_INLINE_DECL void list_sizes (std::vector<gint> & sizes) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_def.hpp>)
#include <pango/fontface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontface_extra.hpp>)
#include <pango/fontface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class FontFace : public GI_PANGO_FONTFACE_BASE
{ typedef GI_PANGO_FONTFACE_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoFontFace>
{ typedef Pango::FontFace type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {


class FontFaceClassDef
{
typedef FontFaceClassDef self;
public:
typedef Pango::FontFace instance_type;
typedef ::PangoFontFaceClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// PangoFontDescription* FontFace::describe (PangoFontFace* face);
// ::PangoFontDescription* FontFace::describe (::PangoFontFace* face);
virtual Pango::FontDescription describe_ () noexcept = 0;

// const char* FontFace::get_face_name (PangoFontFace* face);
// const char* FontFace::get_face_name (::PangoFontFace* face);
// SKIP; invalid callback return transfer none

// PangoFontFamily* FontFace::get_family (PangoFontFace* face);
// ::PangoFontFamily* FontFace::get_family (::PangoFontFace* face);
virtual Pango::FontFamily get_family_ () noexcept = 0;

// gboolean FontFace::is_synthesized (PangoFontFace* face);
// gboolean FontFace::is_synthesized (::PangoFontFace* face);
virtual bool is_synthesized_ () noexcept = 0;

// void FontFace::list_sizes (PangoFontFace* face, int** sizes, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face, gint** sizes, gint* n_sizes);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class FontFaceClass: public detail::ClassTemplate<Pango::impl::internal::FontFaceClassDef, GObject::impl::internal::ObjectClass>
{
typedef FontFaceClass self;
typedef detail::ClassTemplate<Pango::impl::internal::FontFaceClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// PangoFontDescription* FontFace::describe (PangoFontFace* face);
// ::PangoFontDescription* FontFace::describe (::PangoFontFace* face);
GI_INLINE_DECL Pango::FontDescription describe_ () noexcept override;

// const char* FontFace::get_face_name (PangoFontFace* face);
// const char* FontFace::get_face_name (::PangoFontFace* face);
// SKIP; invalid callback return transfer none

// PangoFontFamily* FontFace::get_family (PangoFontFace* face);
// ::PangoFontFamily* FontFace::get_family (::PangoFontFace* face);
GI_INLINE_DECL Pango::FontFamily get_family_ () noexcept override;

// gboolean FontFace::is_synthesized (PangoFontFace* face);
// gboolean FontFace::is_synthesized (::PangoFontFace* face);
GI_INLINE_DECL bool is_synthesized_ () noexcept override;

// void FontFace::list_sizes (PangoFontFace* face, int** sizes, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face, gint** sizes, gint* n_sizes);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using FontFaceImpl = detail::ObjectImpl<FontFace, internal::FontFaceClass>;

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
