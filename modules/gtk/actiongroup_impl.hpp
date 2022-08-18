// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONGROUP_IMPL_HPP_
#define _GI_GTK_ACTIONGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable ActionGroupBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ActionGroupBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkActionGroup* gtk_action_group_new (const gchar* name);
// ::GtkActionGroup* gtk_action_group_new (const char* name);
// IGNORE; deprecated

// void gtk_action_group_add_action (GtkActionGroup* action_group, GtkAction* action);
// void gtk_action_group_add_action (::GtkActionGroup* action_group, ::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_group_add_action_with_accel (GtkActionGroup* action_group, GtkAction* action, const gchar* accelerator);
// void gtk_action_group_add_action_with_accel (::GtkActionGroup* action_group, ::GtkAction* action, const char* accelerator);
// IGNORE; deprecated

// void gtk_action_group_add_actions (GtkActionGroup* action_group, guint n_entries, gpointer user_data);
// void gtk_action_group_add_actions (::GtkActionGroup* action_group, guint n_entries, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_actions_full (GtkActionGroup* action_group, guint n_entries, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_actions_full (::GtkActionGroup* action_group, guint n_entries, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_radio_actions (GtkActionGroup* action_group, guint n_entries, gint value, GCallback on_change, gpointer user_data);
// void gtk_action_group_add_radio_actions (::GtkActionGroup* action_group, guint n_entries, gint value,  on_change, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_radio_actions_full (GtkActionGroup* action_group, guint n_entries, gint value, GCallback on_change, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_radio_actions_full (::GtkActionGroup* action_group, guint n_entries, gint value,  on_change, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_toggle_actions (GtkActionGroup* action_group, guint n_entries, gpointer user_data);
// void gtk_action_group_add_toggle_actions (::GtkActionGroup* action_group, guint n_entries, void* user_data);
// IGNORE; deprecated, container element not supported

// void gtk_action_group_add_toggle_actions_full (GtkActionGroup* action_group, guint n_entries, gpointer user_data, GDestroyNotify destroy);
// void gtk_action_group_add_toggle_actions_full (::GtkActionGroup* action_group, guint n_entries, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; deprecated, container element not supported

// GtkAccelGroup* gtk_action_group_get_accel_group (GtkActionGroup* action_group);
// ::GtkAccelGroup* gtk_action_group_get_accel_group (::GtkActionGroup* action_group);
// IGNORE; deprecated

// GtkAction* gtk_action_group_get_action (GtkActionGroup* action_group, const gchar* action_name);
// ::GtkAction* gtk_action_group_get_action (::GtkActionGroup* action_group, const char* action_name);
// IGNORE; deprecated

// const gchar* gtk_action_group_get_name (GtkActionGroup* action_group);
// const char* gtk_action_group_get_name (::GtkActionGroup* action_group);
// IGNORE; deprecated

// gboolean gtk_action_group_get_sensitive (GtkActionGroup* action_group);
// gboolean gtk_action_group_get_sensitive (::GtkActionGroup* action_group);
// IGNORE; deprecated

// gboolean gtk_action_group_get_visible (GtkActionGroup* action_group);
// gboolean gtk_action_group_get_visible (::GtkActionGroup* action_group);
// IGNORE; deprecated

// GList* gtk_action_group_list_actions (GtkActionGroup* action_group);
// ::GList* gtk_action_group_list_actions (::GtkActionGroup* action_group);
// IGNORE; deprecated

// void gtk_action_group_remove_action (GtkActionGroup* action_group, GtkAction* action);
// void gtk_action_group_remove_action (::GtkActionGroup* action_group, ::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_group_set_accel_group (GtkActionGroup* action_group, GtkAccelGroup* accel_group);
// void gtk_action_group_set_accel_group (::GtkActionGroup* action_group, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// void gtk_action_group_set_sensitive (GtkActionGroup* action_group, gboolean sensitive);
// void gtk_action_group_set_sensitive (::GtkActionGroup* action_group, gboolean sensitive);
// IGNORE; deprecated

// void gtk_action_group_set_translate_func (GtkActionGroup* action_group, GtkTranslateFunc func, gpointer data, GDestroyNotify notify);
// void gtk_action_group_set_translate_func (::GtkActionGroup* action_group,  func, void* data, GLib::DestroyNotify::cfunction_type notify);
// IGNORE; deprecated

// void gtk_action_group_set_translation_domain (GtkActionGroup* action_group, const gchar* domain);
// void gtk_action_group_set_translation_domain (::GtkActionGroup* action_group, const char* domain);
// IGNORE; deprecated

// void gtk_action_group_set_visible (GtkActionGroup* action_group, gboolean visible);
// void gtk_action_group_set_visible (::GtkActionGroup* action_group, gboolean visible);
// IGNORE; deprecated

// const gchar* gtk_action_group_translate_string (GtkActionGroup* action_group, const gchar* string);
// const char* gtk_action_group_translate_string (::GtkActionGroup* action_group, const char* string);
// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actiongroup_extra_def_impl.hpp>)
#include <gtk/actiongroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actiongroup_extra_impl.hpp>)
#include <gtk/actiongroup_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ActionGroupClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkActionGroupClass *methods = (::GtkActionGroupClass *) class_struct;
  (void) methods;

}

// GtkAction* ActionGroup::get_action (GtkActionGroup* action_group, const gchar* action_name);
// ::GtkAction* ActionGroup::get_action (::GtkActionGroup* action_group, const char* action_name);
// IGNORE; deprecated

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
