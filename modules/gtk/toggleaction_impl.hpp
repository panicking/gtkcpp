// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEACTION_IMPL_HPP_
#define _GI_GTK_TOGGLEACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkToggleAction* gtk_toggle_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkToggleAction* gtk_toggle_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// gboolean gtk_toggle_action_get_active (GtkToggleAction* action);
// gboolean gtk_toggle_action_get_active (::GtkToggleAction* action);
// IGNORE; deprecated

// gboolean gtk_toggle_action_get_draw_as_radio (GtkToggleAction* action);
// gboolean gtk_toggle_action_get_draw_as_radio (::GtkToggleAction* action);
// IGNORE; deprecated

// void gtk_toggle_action_set_active (GtkToggleAction* action, gboolean is_active);
// void gtk_toggle_action_set_active (::GtkToggleAction* action, gboolean is_active);
// IGNORE; deprecated

// void gtk_toggle_action_set_draw_as_radio (GtkToggleAction* action, gboolean draw_as_radio);
// void gtk_toggle_action_set_draw_as_radio (::GtkToggleAction* action, gboolean draw_as_radio);
// IGNORE; deprecated

// void gtk_toggle_action_toggled (GtkToggleAction* action);
// void gtk_toggle_action_toggled (::GtkToggleAction* action);
// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toggleaction_extra_def_impl.hpp>)
#include <gtk/toggleaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toggleaction_extra_impl.hpp>)
#include <gtk/toggleaction_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToggleActionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToggleActionClass *methods = (::GtkToggleActionClass *) class_struct;
  (void) methods;

}

// void ToggleAction::toggled (GtkToggleAction* action);
// void ToggleAction::toggled (::GtkToggleAction* action);
// IGNORE; deprecated

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
