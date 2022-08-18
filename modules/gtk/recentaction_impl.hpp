// AUTO-GENERATED

#ifndef _GI_GTK_RECENTACTION_IMPL_HPP_
#define _GI_GTK_RECENTACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::RecentChooser RecentActionBase::interface_ (gi::interface_tag<Gtk::RecentChooser>)
{ return gi::wrap ((Gtk::RecentChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentActionBase::operator Gtk::RecentChooser ()
{ return interface_ (gi::interface_tag<Gtk::RecentChooser>()); }

// GtkAction* gtk_recent_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkRecentAction* gtk_recent_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// GtkAction* gtk_recent_action_new_for_manager (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id, GtkRecentManager* manager);
// ::GtkRecentAction* gtk_recent_action_new_for_manager (const char* name, const char* label, const char* tooltip, const char* stock_id, ::GtkRecentManager* manager);
// IGNORE; deprecated

// gboolean gtk_recent_action_get_show_numbers (GtkRecentAction* action);
// gboolean gtk_recent_action_get_show_numbers (::GtkRecentAction* action);
// IGNORE; deprecated

// void gtk_recent_action_set_show_numbers (GtkRecentAction* action, gboolean show_numbers);
// void gtk_recent_action_set_show_numbers (::GtkRecentAction* action, gboolean show_numbers);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentaction_extra_def_impl.hpp>)
#include <gtk/recentaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentaction_extra_impl.hpp>)
#include <gtk/recentaction_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentActionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRecentActionClass *methods = (::GtkRecentActionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
