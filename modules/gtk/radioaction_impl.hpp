// AUTO-GENERATED

#ifndef _GI_GTK_RADIOACTION_IMPL_HPP_
#define _GI_GTK_RADIOACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkRadioAction* gtk_radio_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id, gint value);
// ::GtkRadioAction* gtk_radio_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id, gint value);
// IGNORE; deprecated

// gint gtk_radio_action_get_current_value (GtkRadioAction* action);
// gint gtk_radio_action_get_current_value (::GtkRadioAction* action);
// IGNORE; deprecated

// GSList* gtk_radio_action_get_group (GtkRadioAction* action);
// ::GSList* gtk_radio_action_get_group (::GtkRadioAction* action);
// IGNORE; deprecated

// void gtk_radio_action_join_group (GtkRadioAction* action, GtkRadioAction* group_source);
// void gtk_radio_action_join_group (::GtkRadioAction* action, ::GtkRadioAction* group_source);
// IGNORE; deprecated

// void gtk_radio_action_set_current_value (GtkRadioAction* action, gint current_value);
// void gtk_radio_action_set_current_value (::GtkRadioAction* action, gint current_value);
// IGNORE; deprecated

// void gtk_radio_action_set_group (GtkRadioAction* action, GSList* group);
// void gtk_radio_action_set_group (::GtkRadioAction* action, ::GSList* group);
// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radioaction_extra_def_impl.hpp>)
#include <gtk/radioaction_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radioaction_extra_impl.hpp>)
#include <gtk/radioaction_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RadioActionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRadioActionClass *methods = (::GtkRadioActionClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (Gtk::RadioAction current), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::changed_>;
}

// void RadioAction::changed (GtkRadioAction* action, GtkRadioAction* current);
// void RadioAction::changed (::GtkRadioAction* action, ::GtkRadioAction* current);
void RadioActionClass::changed_ (Gtk::RadioAction current) noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkRadioAction* action, ::GtkRadioAction* current);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto current_to_c = gi::unwrap (current, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRadioAction*) (gobj_()), (::GtkRadioAction*) (current_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
