// AUTO-GENERATED

#ifndef _GI_GTK_FONTSELECTIONDIALOG_HPP_
#define _GI_GTK_FONTSELECTIONDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class FontSelectionDialog;

namespace base {


#define GI_GTK_FONTSELECTIONDIALOG_BASE base::FontSelectionDialogBase
class FontSelectionDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkFontSelectionDialog BaseObjectType;

FontSelectionDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_font_selection_dialog_get_type(); } 

// GtkWidget* gtk_font_selection_dialog_new (const gchar* title);
// ::GtkFontSelectionDialog* gtk_font_selection_dialog_new (const char* title);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_dialog_get_cancel_button (GtkFontSelectionDialog* fsd);
// ::GtkWidget* gtk_font_selection_dialog_get_cancel_button (::GtkFontSelectionDialog* fsd);
// IGNORE; deprecated

// gchar* gtk_font_selection_dialog_get_font_name (GtkFontSelectionDialog* fsd);
// char* gtk_font_selection_dialog_get_font_name (::GtkFontSelectionDialog* fsd);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_dialog_get_font_selection (GtkFontSelectionDialog* fsd);
// ::GtkWidget* gtk_font_selection_dialog_get_font_selection (::GtkFontSelectionDialog* fsd);
// IGNORE; deprecated

// GtkWidget* gtk_font_selection_dialog_get_ok_button (GtkFontSelectionDialog* fsd);
// ::GtkWidget* gtk_font_selection_dialog_get_ok_button (::GtkFontSelectionDialog* fsd);
// IGNORE; deprecated

// const gchar* gtk_font_selection_dialog_get_preview_text (GtkFontSelectionDialog* fsd);
// const char* gtk_font_selection_dialog_get_preview_text (::GtkFontSelectionDialog* fsd);
// IGNORE; deprecated

// gboolean gtk_font_selection_dialog_set_font_name (GtkFontSelectionDialog* fsd, const gchar* fontname);
// gboolean gtk_font_selection_dialog_set_font_name (::GtkFontSelectionDialog* fsd, const char* fontname);
// IGNORE; deprecated

// void gtk_font_selection_dialog_set_preview_text (GtkFontSelectionDialog* fsd, const gchar* text);
// void gtk_font_selection_dialog_set_preview_text (::GtkFontSelectionDialog* fsd, const char* text);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontselectiondialog_extra_def.hpp>)
#include <gtk/fontselectiondialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontselectiondialog_extra.hpp>)
#include <gtk/fontselectiondialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FontSelectionDialog : public GI_GTK_FONTSELECTIONDIALOG_BASE
{ typedef GI_GTK_FONTSELECTIONDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFontSelectionDialog>
{ typedef Gtk::FontSelectionDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FontSelectionDialogClassDef
{
typedef FontSelectionDialogClassDef self;
public:
typedef Gtk::FontSelectionDialog instance_type;
typedef ::GtkFontSelectionDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FontSelectionDialogClass: public detail::ClassTemplate<Gtk::impl::internal::FontSelectionDialogClassDef, Gtk::impl::internal::DialogClass>
{
typedef FontSelectionDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FontSelectionDialogClassDef, Gtk::impl::internal::DialogClass> super;

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

using FontSelectionDialogImpl = detail::ObjectImpl<FontSelectionDialog, internal::FontSelectionDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
