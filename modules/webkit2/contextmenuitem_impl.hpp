// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CONTEXTMENUITEM_IMPL_HPP_
#define _GI_WEBKIT2_CONTEXTMENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitContextMenuItem* webkit_context_menu_item_new (GtkAction* action);
// ::WebKitContextMenuItem* webkit_context_menu_item_new (::GtkAction* action);
// IGNORE; deprecated

// WebKitContextMenuItem* webkit_context_menu_item_new_from_gaction (GAction* action, const gchar* label, GVariant* target);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_gaction (::GAction* action, const char* label, ::GVariant* target);
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_from_gaction (Gio::Action action, const std::string & label, GLib::Variant target) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::GAction* action, const char* label, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_from_gaction;
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAction*) (action_to_c), (const char*) (label_to_c), (::GVariant*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_from_gaction (Gio::Action action, const std::string & label) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::GAction* action, const char* label, ::GVariant* target);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_from_gaction;
  auto target_to_c = nullptr;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAction*) (action_to_c), (const char*) (label_to_c), (::GVariant*) (target_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action (WebKitContextMenuAction action);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action (::WebKitContextMenuAction action);
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_from_stock_action (WebKit2::ContextMenuAction action) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::WebKitContextMenuAction action);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_from_stock_action;
  auto action_to_c = gi::unwrap (action);
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuAction) (action_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action_with_label (WebKitContextMenuAction action, const gchar* label);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_from_stock_action_with_label (::WebKitContextMenuAction action, const char* label);
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_from_stock_action_with_label (WebKit2::ContextMenuAction action, const std::string & label) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::WebKitContextMenuAction action, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_from_stock_action_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action);
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuAction) (action_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuItem* webkit_context_menu_item_new_separator ();
// ::WebKitContextMenuItem* webkit_context_menu_item_new_separator ();
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_separator () noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_separator;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuItem* webkit_context_menu_item_new_with_submenu (const gchar* label, WebKitContextMenu* submenu);
// ::WebKitContextMenuItem* webkit_context_menu_item_new_with_submenu (const char* label, ::WebKitContextMenu* submenu);
WebKit2::ContextMenuItem base::ContextMenuItemBase::new_with_submenu (const std::string & label, WebKit2::ContextMenu submenu) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (const char* label, ::WebKitContextMenu* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_new_with_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c), (::WebKitContextMenu*) (submenu_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAction* webkit_context_menu_item_get_action (WebKitContextMenuItem* item);
// ::GtkAction* webkit_context_menu_item_get_action (::WebKitContextMenuItem* item);
// IGNORE; deprecated

// GAction* webkit_context_menu_item_get_gaction (WebKitContextMenuItem* item);
// ::GAction* webkit_context_menu_item_get_gaction (::WebKitContextMenuItem* item);
Gio::Action base::ContextMenuItemBase::get_gaction () noexcept
{
  typedef ::GAction* (*call_wrap_t) (::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_get_gaction;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuAction webkit_context_menu_item_get_stock_action (WebKitContextMenuItem* item);
// ::WebKitContextMenuAction webkit_context_menu_item_get_stock_action (::WebKitContextMenuItem* item);
WebKit2::ContextMenuAction base::ContextMenuItemBase::get_stock_action () noexcept
{
  typedef ::WebKitContextMenuAction (*call_wrap_t) (::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_get_stock_action;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitContextMenu* webkit_context_menu_item_get_submenu (WebKitContextMenuItem* item);
// ::WebKitContextMenu* webkit_context_menu_item_get_submenu (::WebKitContextMenuItem* item);
WebKit2::ContextMenu base::ContextMenuItemBase::get_submenu () noexcept
{
  typedef ::WebKitContextMenu* (*call_wrap_t) (::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_get_submenu;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_context_menu_item_is_separator (WebKitContextMenuItem* item);
// gboolean webkit_context_menu_item_is_separator (::WebKitContextMenuItem* item);
bool base::ContextMenuItemBase::is_separator () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_is_separator;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenuItem*) (gobj_()));
  return _temp_ret;
}

// void webkit_context_menu_item_set_submenu (WebKitContextMenuItem* item, WebKitContextMenu* submenu);
// void webkit_context_menu_item_set_submenu (::WebKitContextMenuItem* item, ::WebKitContextMenu* submenu);
void base::ContextMenuItemBase::set_submenu (WebKit2::ContextMenu submenu) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenuItem* item, ::WebKitContextMenu* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_set_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenuItem*) (gobj_()), (::WebKitContextMenu*) (submenu_to_c));
}
void base::ContextMenuItemBase::set_submenu () noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenuItem* item, ::WebKitContextMenu* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_item_set_submenu;
  auto submenu_to_c = nullptr;
  call_wrap_v ((::WebKitContextMenuItem*) (gobj_()), (::WebKitContextMenu*) (submenu_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/contextmenuitem_extra_def_impl.hpp>)
#include <webkit2/contextmenuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/contextmenuitem_extra_impl.hpp>)
#include <webkit2/contextmenuitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void ContextMenuItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitContextMenuItemClass *methods = (::WebKitContextMenuItemClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
