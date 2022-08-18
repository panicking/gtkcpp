// AUTO-GENERATED

#ifndef _GI_GTK_ACTION_IMPL_HPP_
#define _GI_GTK_ACTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable ActionBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ActionBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkAction* gtk_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkAction* gtk_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// void gtk_action_activate (GtkAction* action);
// void gtk_action_activate (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_block_activate (GtkAction* action);
// void gtk_action_block_activate (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_connect_accelerator (GtkAction* action);
// void gtk_action_connect_accelerator (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_icon (GtkAction* action, GtkIconSize icon_size);
// ::GtkWidget* gtk_action_create_icon (::GtkAction* action, gint icon_size);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_menu (GtkAction* action);
// ::GtkWidget* gtk_action_create_menu (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_menu_item (GtkAction* action);
// ::GtkWidget* gtk_action_create_menu_item (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* gtk_action_create_tool_item (GtkAction* action);
// ::GtkWidget* gtk_action_create_tool_item (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_disconnect_accelerator (GtkAction* action);
// void gtk_action_disconnect_accelerator (::GtkAction* action);
// IGNORE; deprecated

// GClosure* gtk_action_get_accel_closure (GtkAction* action);
// ::GClosure* gtk_action_get_accel_closure (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_accel_path (GtkAction* action);
// const char* gtk_action_get_accel_path (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_always_show_image (GtkAction* action);
// gboolean gtk_action_get_always_show_image (::GtkAction* action);
// IGNORE; deprecated

// GIcon* gtk_action_get_gicon (GtkAction* action);
// ::GIcon* gtk_action_get_gicon (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_icon_name (GtkAction* action);
// const char* gtk_action_get_icon_name (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_is_important (GtkAction* action);
// gboolean gtk_action_get_is_important (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_label (GtkAction* action);
// const char* gtk_action_get_label (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_name (GtkAction* action);
// const char* gtk_action_get_name (::GtkAction* action);
// IGNORE; deprecated

// GSList* gtk_action_get_proxies (GtkAction* action);
// ::GSList* gtk_action_get_proxies (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_sensitive (GtkAction* action);
// gboolean gtk_action_get_sensitive (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_short_label (GtkAction* action);
// const char* gtk_action_get_short_label (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_stock_id (GtkAction* action);
// const char* gtk_action_get_stock_id (::GtkAction* action);
// IGNORE; deprecated

// const gchar* gtk_action_get_tooltip (GtkAction* action);
// const char* gtk_action_get_tooltip (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible (GtkAction* action);
// gboolean gtk_action_get_visible (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible_horizontal (GtkAction* action);
// gboolean gtk_action_get_visible_horizontal (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_get_visible_vertical (GtkAction* action);
// gboolean gtk_action_get_visible_vertical (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_is_sensitive (GtkAction* action);
// gboolean gtk_action_is_sensitive (::GtkAction* action);
// IGNORE; deprecated

// gboolean gtk_action_is_visible (GtkAction* action);
// gboolean gtk_action_is_visible (::GtkAction* action);
// IGNORE; deprecated

// void gtk_action_set_accel_group (GtkAction* action, GtkAccelGroup* accel_group);
// void gtk_action_set_accel_group (::GtkAction* action, ::GtkAccelGroup* accel_group);
// IGNORE; deprecated

// void gtk_action_set_accel_path (GtkAction* action, const gchar* accel_path);
// void gtk_action_set_accel_path (::GtkAction* action, const char* accel_path);
// IGNORE; deprecated

// void gtk_action_set_always_show_image (GtkAction* action, gboolean always_show);
// void gtk_action_set_always_show_image (::GtkAction* action, gboolean always_show);
// IGNORE; deprecated

// void gtk_action_set_gicon (GtkAction* action, GIcon* icon);
// void gtk_action_set_gicon (::GtkAction* action, ::GIcon* icon);
// IGNORE; deprecated

// void gtk_action_set_icon_name (GtkAction* action, const gchar* icon_name);
// void gtk_action_set_icon_name (::GtkAction* action, const char* icon_name);
// IGNORE; deprecated

// void gtk_action_set_is_important (GtkAction* action, gboolean is_important);
// void gtk_action_set_is_important (::GtkAction* action, gboolean is_important);
// IGNORE; deprecated

// void gtk_action_set_label (GtkAction* action, const gchar* label);
// void gtk_action_set_label (::GtkAction* action, const char* label);
// IGNORE; deprecated

// void gtk_action_set_sensitive (GtkAction* action, gboolean sensitive);
// void gtk_action_set_sensitive (::GtkAction* action, gboolean sensitive);
// IGNORE; deprecated

// void gtk_action_set_short_label (GtkAction* action, const gchar* short_label);
// void gtk_action_set_short_label (::GtkAction* action, const char* short_label);
// IGNORE; deprecated

// void gtk_action_set_stock_id (GtkAction* action, const gchar* stock_id);
// void gtk_action_set_stock_id (::GtkAction* action, const char* stock_id);
// IGNORE; deprecated

// void gtk_action_set_tooltip (GtkAction* action, const gchar* tooltip);
// void gtk_action_set_tooltip (::GtkAction* action, const char* tooltip);
// IGNORE; deprecated

// void gtk_action_set_visible (GtkAction* action, gboolean visible);
// void gtk_action_set_visible (::GtkAction* action, gboolean visible);
// IGNORE; deprecated

// void gtk_action_set_visible_horizontal (GtkAction* action, gboolean visible_horizontal);
// void gtk_action_set_visible_horizontal (::GtkAction* action, gboolean visible_horizontal);
// IGNORE; deprecated

// void gtk_action_set_visible_vertical (GtkAction* action, gboolean visible_vertical);
// void gtk_action_set_visible_vertical (::GtkAction* action, gboolean visible_vertical);
// IGNORE; deprecated

// void gtk_action_unblock_activate (GtkAction* action);
// void gtk_action_unblock_activate (::GtkAction* action);
// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/action_extra_def_impl.hpp>)
#include <gtk/action_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/action_extra_impl.hpp>)
#include <gtk/action_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ActionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkActionClass *methods = (::GtkActionClass *) class_struct;
  (void) methods;

  methods->connect_proxy = (decltype (methods->connect_proxy)) detail::method_wrapper<self, void (*) (Gtk::Widget proxy), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::connect_proxy_>;
  methods->disconnect_proxy = (decltype (methods->disconnect_proxy)) detail::method_wrapper<self, void (*) (Gtk::Widget proxy), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::disconnect_proxy_>;
}

// void Action::activate (GtkAction* action);
// void Action::activate (::GtkAction* action);
// IGNORE; deprecated

// void Action::connect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::connect_proxy (::GtkAction* action, ::GtkWidget* proxy);
void ActionClass::connect_proxy_ (Gtk::Widget proxy) noexcept
{
  if (!get_struct_()->connect_proxy) return ;
  typedef void (*call_wrap_t) (::GtkAction* action, ::GtkWidget* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->connect_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAction*) (gobj_()), (::GtkWidget*) (proxy_to_c));
}

// GtkWidget* Action::create_menu (GtkAction* action);
// ::GtkWidget* Action::create_menu (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_menu_item (GtkAction* action);
// ::GtkWidget* Action::create_menu_item (::GtkAction* action);
// IGNORE; deprecated

// GtkWidget* Action::create_tool_item (GtkAction* action);
// ::GtkWidget* Action::create_tool_item (::GtkAction* action);
// IGNORE; deprecated

// void Action::disconnect_proxy (GtkAction* action, GtkWidget* proxy);
// void Action::disconnect_proxy (::GtkAction* action, ::GtkWidget* proxy);
void ActionClass::disconnect_proxy_ (Gtk::Widget proxy) noexcept
{
  if (!get_struct_()->disconnect_proxy) return ;
  typedef void (*call_wrap_t) (::GtkAction* action, ::GtkWidget* proxy);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->disconnect_proxy;
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAction*) (gobj_()), (::GtkWidget*) (proxy_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
