// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_RECENTCHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::RecentChooser RecentChooserDialogBase::interface_ (gi::interface_tag<Gtk::RecentChooser>)
{ return gi::wrap ((Gtk::RecentChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentChooserDialogBase::operator Gtk::RecentChooser ()
{ return interface_ (gi::interface_tag<Gtk::RecentChooser>()); }

// GtkWidget* gtk_recent_chooser_dialog_new (const gchar* title, GtkWindow* parent, const gchar* first_button_text);
// ::GtkRecentChooserDialog* gtk_recent_chooser_dialog_new (const char* title, ::GtkWindow* parent, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_recent_chooser_dialog_new_for_manager (const gchar* title, GtkWindow* parent, GtkRecentManager* manager, const gchar* first_button_text);
// ::GtkRecentChooserDialog* gtk_recent_chooser_dialog_new_for_manager (const char* title, ::GtkWindow* parent, ::GtkRecentManager* manager, const char* first_button_text);
// IGNORE; not introspectable, varargs not supported


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchooserdialog_extra_def_impl.hpp>)
#include <gtk/recentchooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchooserdialog_extra_impl.hpp>)
#include <gtk/recentchooserdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentChooserDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRecentChooserDialogClass *methods = (::GtkRecentChooserDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
