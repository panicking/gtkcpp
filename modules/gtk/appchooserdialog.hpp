// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERDIALOG_HPP_
#define _GI_GTK_APPCHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AppChooser;
class Widget;
class Window;

class AppChooserDialog;

namespace base {


#define GI_GTK_APPCHOOSERDIALOG_BASE base::AppChooserDialogBase
class AppChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkAppChooserDialog BaseObjectType;

AppChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_app_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::AppChooser interface_ (gi::interface_tag<Gtk::AppChooser>);

GI_INLINE_DECL operator Gtk::AppChooser ();

// GtkWidget* gtk_app_chooser_dialog_new (GtkWindow* parent, GtkDialogFlags flags, GFile* file);
// ::GtkAppChooserDialog* gtk_app_chooser_dialog_new (::GtkWindow* parent, ::GtkDialogFlags flags, ::GFile* file);
static GI_INLINE_DECL Gtk::AppChooserDialog new_ (Gtk::Window parent, Gtk::DialogFlags flags, Gio::File file) noexcept;
static GI_INLINE_DECL Gtk::AppChooserDialog new_ (Gtk::DialogFlags flags, Gio::File file) noexcept;

// GtkWidget* gtk_app_chooser_dialog_new_for_content_type (GtkWindow* parent, GtkDialogFlags flags, const gchar* content_type);
// ::GtkAppChooserDialog* gtk_app_chooser_dialog_new_for_content_type (::GtkWindow* parent, ::GtkDialogFlags flags, const char* content_type);
static GI_INLINE_DECL Gtk::AppChooserDialog new_for_content_type (Gtk::Window parent, Gtk::DialogFlags flags, const std::string & content_type) noexcept;
static GI_INLINE_DECL Gtk::AppChooserDialog new_for_content_type (Gtk::DialogFlags flags, const std::string & content_type) noexcept;

// const gchar* gtk_app_chooser_dialog_get_heading (GtkAppChooserDialog* self);
// const char* gtk_app_chooser_dialog_get_heading (::GtkAppChooserDialog* self);
GI_INLINE_DECL std::string get_heading () noexcept;

// GtkWidget* gtk_app_chooser_dialog_get_widget (GtkAppChooserDialog* self);
// ::GtkWidget* gtk_app_chooser_dialog_get_widget (::GtkAppChooserDialog* self);
GI_INLINE_DECL Gtk::Widget get_widget () noexcept;

// void gtk_app_chooser_dialog_set_heading (GtkAppChooserDialog* self, const gchar* heading);
// void gtk_app_chooser_dialog_set_heading (::GtkAppChooserDialog* self, const char* heading);
GI_INLINE_DECL void set_heading (const std::string & heading) noexcept;

gi::property_proxy<Gio::File, base::AppChooserDialogBase> property_gfile()
{ return gi::property_proxy<Gio::File, base::AppChooserDialogBase> (*this, "gfile"); }
const gi::property_proxy<Gio::File, base::AppChooserDialogBase> property_gfile() const
{ return gi::property_proxy<Gio::File, base::AppChooserDialogBase> (*this, "gfile"); }

gi::property_proxy<std::string, base::AppChooserDialogBase> property_heading()
{ return gi::property_proxy<std::string, base::AppChooserDialogBase> (*this, "heading"); }
const gi::property_proxy<std::string, base::AppChooserDialogBase> property_heading() const
{ return gi::property_proxy<std::string, base::AppChooserDialogBase> (*this, "heading"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra_def.hpp>)
#include <gtk/appchooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra.hpp>)
#include <gtk/appchooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AppChooserDialog : public GI_GTK_APPCHOOSERDIALOG_BASE
{ typedef GI_GTK_APPCHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAppChooserDialog>
{ typedef Gtk::AppChooserDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class AppChooserDialogClassDef
{
typedef AppChooserDialogClassDef self;
public:
typedef Gtk::AppChooserDialog instance_type;
typedef ::GtkAppChooserDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class AppChooserDialogClass: public detail::ClassTemplate<Gtk::impl::internal::AppChooserDialogClassDef, Gtk::impl::internal::DialogClass>
{
typedef AppChooserDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::AppChooserDialogClassDef, Gtk::impl::internal::DialogClass> super;

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

using AppChooserDialogImpl = detail::ObjectImpl<AppChooserDialog, internal::AppChooserDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
