// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERTEXT_HPP_
#define _GI_GTK_CELLRENDERERTEXT_HPP_

#include "cellrenderer.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CellRendererText;

namespace base {


#define GI_GTK_CELLRENDERERTEXT_BASE base::CellRendererTextBase
class CellRendererTextBase : public Gtk::CellRenderer
{
typedef Gtk::CellRenderer super_type;
public:
typedef ::GtkCellRendererText BaseObjectType;

CellRendererTextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_cell_renderer_text_get_type(); } 

// GtkCellRenderer* gtk_cell_renderer_text_new ();
// ::GtkCellRendererText* gtk_cell_renderer_text_new ();
static GI_INLINE_DECL Gtk::CellRendererText new_ () noexcept;

// void gtk_cell_renderer_text_set_fixed_height_from_font (GtkCellRendererText* renderer, gint number_of_rows);
// void gtk_cell_renderer_text_set_fixed_height_from_font (::GtkCellRendererText* renderer, gint number_of_rows);
GI_INLINE_DECL void set_fixed_height_from_font (gint number_of_rows) noexcept;

gi::property_proxy<bool, base::CellRendererTextBase> property_align_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "align-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_align_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "align-set"); }

gi::property_proxy<Pango::Alignment, base::CellRendererTextBase> property_alignment()
{ return gi::property_proxy<Pango::Alignment, base::CellRendererTextBase> (*this, "alignment"); }
const gi::property_proxy<Pango::Alignment, base::CellRendererTextBase> property_alignment() const
{ return gi::property_proxy<Pango::Alignment, base::CellRendererTextBase> (*this, "alignment"); }

gi::property_proxy<Pango::AttrList, base::CellRendererTextBase> property_attributes()
{ return gi::property_proxy<Pango::AttrList, base::CellRendererTextBase> (*this, "attributes"); }
const gi::property_proxy<Pango::AttrList, base::CellRendererTextBase> property_attributes() const
{ return gi::property_proxy<Pango::AttrList, base::CellRendererTextBase> (*this, "attributes"); }

gi::property_proxy_write<std::string, base::CellRendererTextBase> property_background()
{ return gi::property_proxy_write<std::string, base::CellRendererTextBase> (*this, "background"); }

gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> property_background_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> (*this, "background-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> property_background_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> (*this, "background-rgba"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_background_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "background-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_background_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "background-set"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_editable()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "editable"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_editable() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "editable"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_editable_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "editable-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_editable_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "editable-set"); }

gi::property_proxy<Pango::EllipsizeMode, base::CellRendererTextBase> property_ellipsize()
{ return gi::property_proxy<Pango::EllipsizeMode, base::CellRendererTextBase> (*this, "ellipsize"); }
const gi::property_proxy<Pango::EllipsizeMode, base::CellRendererTextBase> property_ellipsize() const
{ return gi::property_proxy<Pango::EllipsizeMode, base::CellRendererTextBase> (*this, "ellipsize"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_ellipsize_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "ellipsize-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_ellipsize_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "ellipsize-set"); }

gi::property_proxy<std::string, base::CellRendererTextBase> property_family()
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "family"); }
const gi::property_proxy<std::string, base::CellRendererTextBase> property_family() const
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "family"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_family_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "family-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_family_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "family-set"); }

gi::property_proxy<std::string, base::CellRendererTextBase> property_font()
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "font"); }
const gi::property_proxy<std::string, base::CellRendererTextBase> property_font() const
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "font"); }

gi::property_proxy<Pango::FontDescription, base::CellRendererTextBase> property_font_desc()
{ return gi::property_proxy<Pango::FontDescription, base::CellRendererTextBase> (*this, "font-desc"); }
const gi::property_proxy<Pango::FontDescription, base::CellRendererTextBase> property_font_desc() const
{ return gi::property_proxy<Pango::FontDescription, base::CellRendererTextBase> (*this, "font-desc"); }

gi::property_proxy_write<std::string, base::CellRendererTextBase> property_foreground()
{ return gi::property_proxy_write<std::string, base::CellRendererTextBase> (*this, "foreground"); }

gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> property_foreground_rgba()
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> (*this, "foreground-rgba"); }
const gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> property_foreground_rgba() const
{ return gi::property_proxy<Gdk::RGBA, base::CellRendererTextBase> (*this, "foreground-rgba"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_foreground_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "foreground-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_foreground_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "foreground-set"); }

gi::property_proxy<std::string, base::CellRendererTextBase> property_language()
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "language"); }
const gi::property_proxy<std::string, base::CellRendererTextBase> property_language() const
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "language"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_language_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "language-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_language_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "language-set"); }

gi::property_proxy_write<std::string, base::CellRendererTextBase> property_markup()
{ return gi::property_proxy_write<std::string, base::CellRendererTextBase> (*this, "markup"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_max_width_chars()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "max-width-chars"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_max_width_chars() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "max-width-chars"); }

gi::property_proxy<std::string, base::CellRendererTextBase> property_placeholder_text()
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "placeholder-text"); }
const gi::property_proxy<std::string, base::CellRendererTextBase> property_placeholder_text() const
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "placeholder-text"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_rise()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "rise"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_rise() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "rise"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_rise_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "rise-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_rise_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "rise-set"); }

gi::property_proxy<gdouble, base::CellRendererTextBase> property_scale()
{ return gi::property_proxy<gdouble, base::CellRendererTextBase> (*this, "scale"); }
const gi::property_proxy<gdouble, base::CellRendererTextBase> property_scale() const
{ return gi::property_proxy<gdouble, base::CellRendererTextBase> (*this, "scale"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_scale_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "scale-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_scale_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "scale-set"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_single_paragraph_mode()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "single-paragraph-mode"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_single_paragraph_mode() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "single-paragraph-mode"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_size()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "size"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_size() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "size"); }

gi::property_proxy<gdouble, base::CellRendererTextBase> property_size_points()
{ return gi::property_proxy<gdouble, base::CellRendererTextBase> (*this, "size-points"); }
const gi::property_proxy<gdouble, base::CellRendererTextBase> property_size_points() const
{ return gi::property_proxy<gdouble, base::CellRendererTextBase> (*this, "size-points"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_size_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "size-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_size_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "size-set"); }

gi::property_proxy<Pango::Stretch, base::CellRendererTextBase> property_stretch()
{ return gi::property_proxy<Pango::Stretch, base::CellRendererTextBase> (*this, "stretch"); }
const gi::property_proxy<Pango::Stretch, base::CellRendererTextBase> property_stretch() const
{ return gi::property_proxy<Pango::Stretch, base::CellRendererTextBase> (*this, "stretch"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_stretch_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "stretch-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_stretch_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "stretch-set"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_strikethrough()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "strikethrough"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_strikethrough() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "strikethrough"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_strikethrough_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "strikethrough-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_strikethrough_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "strikethrough-set"); }

gi::property_proxy<Pango::Style, base::CellRendererTextBase> property_style()
{ return gi::property_proxy<Pango::Style, base::CellRendererTextBase> (*this, "style"); }
const gi::property_proxy<Pango::Style, base::CellRendererTextBase> property_style() const
{ return gi::property_proxy<Pango::Style, base::CellRendererTextBase> (*this, "style"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_style_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "style-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_style_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "style-set"); }

gi::property_proxy<std::string, base::CellRendererTextBase> property_text()
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "text"); }
const gi::property_proxy<std::string, base::CellRendererTextBase> property_text() const
{ return gi::property_proxy<std::string, base::CellRendererTextBase> (*this, "text"); }

gi::property_proxy<Pango::Underline, base::CellRendererTextBase> property_underline()
{ return gi::property_proxy<Pango::Underline, base::CellRendererTextBase> (*this, "underline"); }
const gi::property_proxy<Pango::Underline, base::CellRendererTextBase> property_underline() const
{ return gi::property_proxy<Pango::Underline, base::CellRendererTextBase> (*this, "underline"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_underline_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "underline-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_underline_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "underline-set"); }

gi::property_proxy<Pango::Variant, base::CellRendererTextBase> property_variant()
{ return gi::property_proxy<Pango::Variant, base::CellRendererTextBase> (*this, "variant"); }
const gi::property_proxy<Pango::Variant, base::CellRendererTextBase> property_variant() const
{ return gi::property_proxy<Pango::Variant, base::CellRendererTextBase> (*this, "variant"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_variant_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "variant-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_variant_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "variant-set"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_weight()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "weight"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_weight() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "weight"); }

gi::property_proxy<bool, base::CellRendererTextBase> property_weight_set()
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "weight-set"); }
const gi::property_proxy<bool, base::CellRendererTextBase> property_weight_set() const
{ return gi::property_proxy<bool, base::CellRendererTextBase> (*this, "weight-set"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_width_chars()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "width-chars"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_width_chars() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "width-chars"); }

gi::property_proxy<Pango::WrapMode, base::CellRendererTextBase> property_wrap_mode()
{ return gi::property_proxy<Pango::WrapMode, base::CellRendererTextBase> (*this, "wrap-mode"); }
const gi::property_proxy<Pango::WrapMode, base::CellRendererTextBase> property_wrap_mode() const
{ return gi::property_proxy<Pango::WrapMode, base::CellRendererTextBase> (*this, "wrap-mode"); }

gi::property_proxy<gint, base::CellRendererTextBase> property_wrap_width()
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "wrap-width"); }
const gi::property_proxy<gint, base::CellRendererTextBase> property_wrap_width() const
{ return gi::property_proxy<gint, base::CellRendererTextBase> (*this, "wrap-width"); }

// signal edited
gi::signal_proxy<void(Gtk::CellRendererText, const std::string & path, const std::string & new_text)> signal_edited()
{ return gi::signal_proxy<void(Gtk::CellRendererText, const std::string & path, const std::string & new_text)> (*this, "edited"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra_def.hpp>)
#include <gtk/cellrenderertext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrenderertext_extra.hpp>)
#include <gtk/cellrenderertext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CellRendererText : public GI_GTK_CELLRENDERERTEXT_BASE
{ typedef GI_GTK_CELLRENDERERTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCellRendererText>
{ typedef Gtk::CellRendererText type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CellRendererTextClassDef
{
typedef CellRendererTextClassDef self;
public:
typedef Gtk::CellRendererText instance_type;
typedef ::GtkCellRendererTextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CellRendererText::edited (GtkCellRendererText* cell_renderer_text, const gchar* path, const gchar* new_text);
// void CellRendererText::edited (::GtkCellRendererText* cell_renderer_text, const char* path, const char* new_text);
virtual void edited_ (const std::string & path, const std::string & new_text) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CellRendererTextClass: public detail::ClassTemplate<Gtk::impl::internal::CellRendererTextClassDef, Gtk::impl::internal::CellRendererClass>
{
typedef CellRendererTextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CellRendererTextClassDef, Gtk::impl::internal::CellRendererClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void CellRendererText::edited (GtkCellRendererText* cell_renderer_text, const gchar* path, const gchar* new_text);
// void CellRendererText::edited (::GtkCellRendererText* cell_renderer_text, const char* path, const char* new_text);
GI_INLINE_DECL void edited_ (const std::string & path, const std::string & new_text) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CellRendererTextImpl = detail::ObjectImpl<CellRendererText, internal::CellRendererTextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
