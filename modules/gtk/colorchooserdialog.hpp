// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSERDIALOG_HPP_
#define _GI_GTK_COLORCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooser;
class Window;

class ColorChooserDialog;

namespace base {


#define GI_GTK_COLORCHOOSERDIALOG_BASE base::ColorChooserDialogBase
class ColorChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkColorChooserDialog BaseObjectType;

ColorChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_color_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::ColorChooser interface_ (gi::interface_tag<Gtk::ColorChooser>);

GI_INLINE_DECL operator Gtk::ColorChooser ();

// GtkWidget* gtk_color_chooser_dialog_new (const gchar* title, GtkWindow* parent);
// ::GtkColorChooserDialog* gtk_color_chooser_dialog_new (const char* title, ::GtkWindow* parent);
static GI_INLINE_DECL Gtk::ColorChooserDialog new_ (const std::string & title, Gtk::Window parent) noexcept;
static GI_INLINE_DECL Gtk::ColorChooserDialog new_ () noexcept;

gi::property_proxy<bool, base::ColorChooserDialogBase> property_show_editor()
{ return gi::property_proxy<bool, base::ColorChooserDialogBase> (*this, "show-editor"); }
const gi::property_proxy<bool, base::ColorChooserDialogBase> property_show_editor() const
{ return gi::property_proxy<bool, base::ColorChooserDialogBase> (*this, "show-editor"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra_def.hpp>)
#include <gtk/colorchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooserdialog_extra.hpp>)
#include <gtk/colorchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ColorChooserDialog : public GI_GTK_COLORCHOOSERDIALOG_BASE
{ typedef GI_GTK_COLORCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkColorChooserDialog>
{ typedef Gtk::ColorChooserDialog type; }; 

} // namespace repository

} // namespace gi

#include "colorchooser.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ColorChooserDialogClassDef
{
typedef ColorChooserDialogClassDef self;
public:
typedef Gtk::ColorChooserDialog instance_type;
typedef ::GtkColorChooserDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ColorChooserDialogClass: public detail::ClassTemplate<Gtk::impl::internal::ColorChooserDialogClassDef, Gtk::impl::internal::DialogClass, Gtk::impl::internal::ColorChooserInterfaceClassImpl>
{
typedef ColorChooserDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ColorChooserDialogClassDef, Gtk::impl::internal::DialogClass, Gtk::impl::internal::ColorChooserInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ColorChooserInterfaceClassImpl GtkColorChooserInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using ColorChooserDialogImpl = detail::ObjectImpl<ColorChooserDialog, internal::ColorChooserDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
