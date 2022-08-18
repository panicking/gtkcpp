// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_FILECHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserDialogBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileChooserDialogBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkWidget* gtk_file_chooser_dialog_new (const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* first_button_text);
// ::GtkFileChooserDialog* gtk_file_chooser_dialog_new (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra_def_impl.hpp>)
#include <gtk/filechooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserdialog_extra_impl.hpp>)
#include <gtk/filechooserdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileChooserDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFileChooserDialogClass *methods = (::GtkFileChooserDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
