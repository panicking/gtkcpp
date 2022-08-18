// AUTO-GENERATED

#ifndef _GI_GTK_FONTSELECTION_HPP_
#define _GI_GTK_FONTSELECTION_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class FontSelection;

namespace base {


#define GI_GTK_FONTSELECTION_BASE base::FontSelectionBase
class FontSelectionBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkFontSelection BaseObjectType;

FontSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_selection_get_type(); } 

// GtkWidget* gtk_font_selection_new ();
// ::GtkFontSelection* gtk_font_selection_new ();
// IGNORE; deprecated

// PangoFontFace* gtk_font_selection_get_face (GtkFontSelection* fontsel);
// ::PangoFontFace* gtk_font_selection_get_face (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_get_face_list (GtkFontSelection* fontsel);
// ::GtkWidget* gtk_font_selection_get_face_list (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// PangoFontFamily* gtk_font_selection_get_family (GtkFontSelection* fontsel);
// ::PangoFontFamily* gtk_font_selection_get_family (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_get_family_list (GtkFontSelection* fontsel);
// ::GtkWidget* gtk_font_selection_get_family_list (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// gchar* gtk_font_selection_get_font_name (GtkFontSelection* fontsel);
// char* gtk_font_selection_get_font_name (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_get_preview_entry (GtkFontSelection* fontsel);
// ::GtkWidget* gtk_font_selection_get_preview_entry (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// const gchar* gtk_font_selection_get_preview_text (GtkFontSelection* fontsel);
// const char* gtk_font_selection_get_preview_text (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// gint gtk_font_selection_get_size (GtkFontSelection* fontsel);
// gint gtk_font_selection_get_size (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_get_size_entry (GtkFontSelection* fontsel);
// ::GtkWidget* gtk_font_selection_get_size_entry (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_get_size_list (GtkFontSelection* fontsel);
// ::GtkWidget* gtk_font_selection_get_size_list (::GtkFontSelection* fontsel);
// IGNORE; deprecated

// gboolean gtk_font_selection_set_font_name (GtkFontSelection* fontsel, const gchar* fontname);
// gboolean gtk_font_selection_set_font_name (::GtkFontSelection* fontsel, const char* fontname);
// IGNORE; deprecated

// void gtk_font_selection_set_preview_text (GtkFontSelection* fontsel, const gchar* text);
// void gtk_font_selection_set_preview_text (::GtkFontSelection* fontsel, const char* text);
// IGNORE; deprecated

gi::property_proxy<std::string, base::FontSelectionBase> property_font_name()
{ return gi::property_proxy<std::string, base::FontSelectionBase> (*this, "font-name"); }
const gi::property_proxy<std::string, base::FontSelectionBase> property_font_name() const
{ return gi::property_proxy<std::string, base::FontSelectionBase> (*this, "font-name"); }

gi::property_proxy<std::string, base::FontSelectionBase> property_preview_text()
{ return gi::property_proxy<std::string, base::FontSelectionBase> (*this, "preview-text"); }
const gi::property_proxy<std::string, base::FontSelectionBase> property_preview_text() const
{ return gi::property_proxy<std::string, base::FontSelectionBase> (*this, "preview-text"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontselection_extra_def.hpp>)
#include <gtk/fontselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontselection_extra.hpp>)
#include <gtk/fontselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontSelection : public GI_GTK_FONTSELECTION_BASE
{ typedef GI_GTK_FONTSELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontSelection>
{ typedef Gtk::FontSelection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontSelectionClassDef
{
typedef FontSelectionClassDef self;
public:
typedef Gtk::FontSelection instance_type;
typedef ::GtkFontSelectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FontSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::FontSelectionClassDef, Gtk::impl::internal::BoxClass>
{
typedef FontSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontSelectionClassDef, Gtk::impl::internal::BoxClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using FontSelectionImpl = detail::ObjectImpl<FontSelection, internal::FontSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
