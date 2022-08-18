// AUTO-GENERATED

#ifndef _GI_GTK_UIMANAGER_IMPL_HPP_
#define _GI_GTK_UIMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable UIManagerBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

UIManagerBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkUIManager* gtk_ui_manager_new ();
// ::GtkUIManager* gtk_ui_manager_new ();
// IGNORE; deprecated

// void gtk_ui_manager_add_ui (GtkUIManager* manager, guint merge_id, const gchar* path, const gchar* name, const gchar* action, GtkUIManagerItemType type, gboolean top);
// void gtk_ui_manager_add_ui (::GtkUIManager* manager, guint merge_id, const char* path, const char* name, const char* action,  type, gboolean top);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_file (GtkUIManager* manager, const gchar* filename, GError ** error);
// guint gtk_ui_manager_add_ui_from_file (::GtkUIManager* manager, const char* filename, GError ** error);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_resource (GtkUIManager* manager, const gchar* resource_path, GError ** error);
// guint gtk_ui_manager_add_ui_from_resource (::GtkUIManager* manager, const char* resource_path, GError ** error);
// IGNORE; deprecated

// guint gtk_ui_manager_add_ui_from_string (GtkUIManager* manager, const gchar* buffer, gssize length, GError ** error);
// guint gtk_ui_manager_add_ui_from_string (::GtkUIManager* manager, const char* buffer, gssize length, GError ** error);
// IGNORE; deprecated

// void gtk_ui_manager_ensure_update (GtkUIManager* manager);
// void gtk_ui_manager_ensure_update (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkAccelGroup* gtk_ui_manager_get_accel_group (GtkUIManager* manager);
// ::GtkAccelGroup* gtk_ui_manager_get_accel_group (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkAction* gtk_ui_manager_get_action (GtkUIManager* manager, const gchar* path);
// ::GtkAction* gtk_ui_manager_get_action (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// GList* gtk_ui_manager_get_action_groups (GtkUIManager* manager);
// ::GList* gtk_ui_manager_get_action_groups (::GtkUIManager* manager);
// IGNORE; deprecated

// gboolean gtk_ui_manager_get_add_tearoffs (GtkUIManager* manager);
// gboolean gtk_ui_manager_get_add_tearoffs (::GtkUIManager* manager);
// IGNORE; deprecated

// GSList* gtk_ui_manager_get_toplevels (GtkUIManager* manager, GtkUIManagerItemType types);
// ::GSList* gtk_ui_manager_get_toplevels (::GtkUIManager* manager,  types);
// IGNORE; deprecated

// gchar* gtk_ui_manager_get_ui (GtkUIManager* manager);
// char* gtk_ui_manager_get_ui (::GtkUIManager* manager);
// IGNORE; deprecated

// GtkWidget* gtk_ui_manager_get_widget (GtkUIManager* manager, const gchar* path);
// ::GtkWidget* gtk_ui_manager_get_widget (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// void gtk_ui_manager_insert_action_group (GtkUIManager* manager, GtkActionGroup* action_group, gint pos);
// void gtk_ui_manager_insert_action_group (::GtkUIManager* manager, ::GtkActionGroup* action_group, gint pos);
// IGNORE; deprecated

// guint gtk_ui_manager_new_merge_id (GtkUIManager* manager);
// guint gtk_ui_manager_new_merge_id (::GtkUIManager* manager);
// IGNORE; deprecated

// void gtk_ui_manager_remove_action_group (GtkUIManager* manager, GtkActionGroup* action_group);
// void gtk_ui_manager_remove_action_group (::GtkUIManager* manager, ::GtkActionGroup* action_group);
// IGNORE; deprecated

// void gtk_ui_manager_remove_ui (GtkUIManager* manager, guint merge_id);
// void gtk_ui_manager_remove_ui (::GtkUIManager* manager, guint merge_id);
// IGNORE; deprecated

// void gtk_ui_manager_set_add_tearoffs (GtkUIManager* manager, gboolean add_tearoffs);
// void gtk_ui_manager_set_add_tearoffs (::GtkUIManager* manager, gboolean add_tearoffs);
// IGNORE; deprecated

// IGNORE; deprecated

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
#if __has_include(<gtk/uimanager_extra_def_impl.hpp>)
#include <gtk/uimanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/uimanager_extra_impl.hpp>)
#include <gtk/uimanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void UIManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkUIManagerClass *methods = (::GtkUIManagerClass *) class_struct;
  (void) methods;

  methods->actions_changed = (decltype (methods->actions_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::actions_changed_>;
  methods->add_widget = (decltype (methods->add_widget)) detail::method_wrapper<self, void (*) (Gtk::Widget widget), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_widget_>;
  methods->connect_proxy = (decltype (methods->connect_proxy)) detail::method_wrapper<self, void (*) (Gtk::Action action, Gtk::Widget proxy), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::connect_proxy_>;
  methods->disconnect_proxy = (decltype (methods->disconnect_proxy)) detail::method_wrapper<self, void (*) (Gtk::Action action, Gtk::Widget proxy), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::disconnect_proxy_>;
  methods->post_activate = (decltype (methods->post_activate)) detail::method_wrapper<self, void (*) (Gtk::Action action), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::post_activate_>;
  methods->pre_activate = (decltype (methods->pre_activate)) detail::method_wrapper<self, void (*) (Gtk::Action action), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::pre_activate_>;
}

// void UIManager::actions_changed (GtkUIManager* manager);
// void UIManager::actions_changed (::GtkUIManager* manager);
void UIManagerClass::actions_changed_ () noexcept
{
  if (!get_struct_()->actions_changed) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->actions_changed;
  call_wrap_v ((::GtkUIManager*) (gobj_()));
}

// void UIManager::add_widget (GtkUIManager* manager, GtkWidget* widget);
// void UIManager::add_widget (::GtkUIManager* manager, ::GtkWidget* widget);
void UIManagerClass::add_widget_ (Gtk::Widget widget) noexcept
{
  if (!get_struct_()->add_widget) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager, ::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_widget;
  auto widget_to_c = gi::unwrap (widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkUIManager*) (gobj_()), (::GtkWidget*) (widget_to_c));
}

// void UIManager::connect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::connect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
void UIManagerClass::connect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept
{
  if (!get_struct_()->connect_proxy) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->connect_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkUIManager*) (gobj_()), (::GtkAction*) (action_to_c), (::GtkWidget*) (proxy_to_c));
}

// void UIManager::disconnect_proxy (GtkUIManager* manager, GtkAction* action, GtkWidget* proxy);
// void UIManager::disconnect_proxy (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
void UIManagerClass::disconnect_proxy_ (Gtk::Action action, Gtk::Widget proxy) noexcept
{
  if (!get_struct_()->disconnect_proxy) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager, ::GtkAction* action, ::GtkWidget* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->disconnect_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkUIManager*) (gobj_()), (::GtkAction*) (action_to_c), (::GtkWidget*) (proxy_to_c));
}

// GtkAction* UIManager::get_action (GtkUIManager* manager, const gchar* path);
// ::GtkAction* UIManager::get_action (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// GtkWidget* UIManager::get_widget (GtkUIManager* manager, const gchar* path);
// ::GtkWidget* UIManager::get_widget (::GtkUIManager* manager, const char* path);
// IGNORE; deprecated

// void UIManager::post_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::post_activate (::GtkUIManager* manager, ::GtkAction* action);
void UIManagerClass::post_activate_ (Gtk::Action action) noexcept
{
  if (!get_struct_()->post_activate) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager, ::GtkAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->post_activate;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkUIManager*) (gobj_()), (::GtkAction*) (action_to_c));
}

// void UIManager::pre_activate (GtkUIManager* manager, GtkAction* action);
// void UIManager::pre_activate (::GtkUIManager* manager, ::GtkAction* action);
void UIManagerClass::pre_activate_ (Gtk::Action action) noexcept
{
  if (!get_struct_()->pre_activate) return ;
  typedef void (*call_wrap_t) (::GtkUIManager* manager, ::GtkAction* action);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pre_activate;
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkUIManager*) (gobj_()), (::GtkAction*) (action_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
