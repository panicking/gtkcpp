// AUTO-GENERATED

#ifndef _GI_GTK_COLORSELECTIONDIALOG_HPP_
#define _GI_GTK_COLORSELECTIONDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class ColorSelectionDialog;

namespace base {


#define GI_GTK_COLORSELECTIONDIALOG_BASE base::ColorSelectionDialogBase
class ColorSelectionDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkColorSelectionDialog BaseObjectType;

ColorSelectionDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_selection_dialog_get_type(); } 

// GtkWidget* gtk_color_selection_dialog_new (const gchar* title);
// ::GtkColorSelectionDialog* gtk_color_selection_dialog_new (const char* title);
static GI_INLINE_DECL Gtk::ColorSelectionDialog new_ (const std::string & title) noexcept;

// GtkWidget* gtk_color_selection_dialog_get_color_selection (GtkColorSelectionDialog* colorsel);
// ::GtkWidget* gtk_color_selection_dialog_get_color_selection (::GtkColorSelectionDialog* colorsel);
GI_INLINE_DECL Gtk::Widget get_color_selection () noexcept;

gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_cancel_button()
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "cancel-button"); }
const gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_cancel_button() const
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "cancel-button"); }

gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_color_selection()
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "color-selection"); }
const gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_color_selection() const
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "color-selection"); }

gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_help_button()
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "help-button"); }
const gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_help_button() const
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "help-button"); }

gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_ok_button()
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "ok-button"); }
const gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> property_ok_button() const
{ return gi::property_proxy<Gtk::Widget, base::ColorSelectionDialogBase> (*this, "ok-button"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorselectiondialog_extra_def.hpp>)
#include <gtk/colorselectiondialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorselectiondialog_extra.hpp>)
#include <gtk/colorselectiondialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorSelectionDialog : public GI_GTK_COLORSELECTIONDIALOG_BASE
{ typedef GI_GTK_COLORSELECTIONDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorSelectionDialog>
{ typedef Gtk::ColorSelectionDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorSelectionDialogClassDef
{
typedef ColorSelectionDialogClassDef self;
public:
typedef Gtk::ColorSelectionDialog instance_type;
typedef ::GtkColorSelectionDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColorSelectionDialogClass: public detail::ClassTemplate<Gtk::impl::internal::ColorSelectionDialogClassDef, Gtk::impl::internal::DialogClass>
{
typedef ColorSelectionDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorSelectionDialogClassDef, Gtk::impl::internal::DialogClass> super;

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

using ColorSelectionDialogImpl = detail::ObjectImpl<ColorSelectionDialog, internal::ColorSelectionDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
