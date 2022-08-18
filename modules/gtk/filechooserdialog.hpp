// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERDIALOG_HPP_
#define _GI_GTK_FILECHOOSERDIALOG_HPP_

#include "dialog.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class FileChooser;
class Window;

class FileChooserDialog;

namespace base {


#define GI_GTK_FILECHOOSERDIALOG_BASE base::FileChooserDialogBase
class FileChooserDialogBase : public Gtk::Dialog
{
typedef Gtk::Dialog super_type;
public:
typedef ::GtkFileChooserDialog BaseObjectType;

FileChooserDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_file_chooser_dialog_get_type(); } 

GI_INLINE_DECL Gtk::FileChooser interface_ (gi::interface_tag<Gtk::FileChooser>);

GI_INLINE_DECL operator Gtk::FileChooser ();

// GtkWidget* gtk_file_chooser_dialog_new (const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* first_button_text);
// ::GtkFileChooserDialog* gtk_file_chooser_dialog_new (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra_def.hpp>)
#include <gtk/filechooserdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra.hpp>)
#include <gtk/filechooserdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class FileChooserDialog : public GI_GTK_FILECHOOSERDIALOG_BASE
{ typedef GI_GTK_FILECHOOSERDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkFileChooserDialog>
{ typedef Gtk::FileChooserDialog type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class FileChooserDialogClassDef
{
typedef FileChooserDialogClassDef self;
public:
typedef Gtk::FileChooserDialog instance_type;
typedef ::GtkFileChooserDialogClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class FileChooserDialogClass: public detail::ClassTemplate<Gtk::impl::internal::FileChooserDialogClassDef, Gtk::impl::internal::DialogClass>
{
typedef FileChooserDialogClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::FileChooserDialogClassDef, Gtk::impl::internal::DialogClass> super;

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

using FileChooserDialogImpl = detail::ObjectImpl<FileChooserDialog, internal::FileChooserDialogClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
