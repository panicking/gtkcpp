// AUTO-GENERATED

#ifndef _GI_WEBKIT2_CONTEXTMENU_IMPL_HPP_
#define _GI_WEBKIT2_CONTEXTMENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitContextMenu* webkit_context_menu_new ();
// ::WebKitContextMenu* webkit_context_menu_new ();
WebKit2::ContextMenu base::ContextMenuBase::new_ () noexcept
{
  typedef ::WebKitContextMenu* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitContextMenu* webkit_context_menu_new_with_items (GList* items);
// ::WebKitContextMenu* webkit_context_menu_new_with_items (::GList* items);
WebKit2::ContextMenu base::ContextMenuBase::new_with_items (const std::vector<WebKit2::ContextMenuItem> & items) noexcept
{
  typedef ::WebKitContextMenu* (*call_wrap_t) (::GList* items);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_new_with_items;
  auto items_i = detail::make_list_unwrap_range<::GList> (items);
  auto items_w = unwrap (items_i, gi::transfer_none, direction_in);
  auto items_to_c = items_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GList*) (items_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_context_menu_append (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_append (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
void base::ContextMenuBase::append (WebKit2::ContextMenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_append;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::WebKitContextMenuItem*) (item_to_c));
}

// WebKitContextMenuItem* webkit_context_menu_first (WebKitContextMenu* menu);
// ::WebKitContextMenuItem* webkit_context_menu_first (::WebKitContextMenu* menu);
WebKit2::ContextMenuItem base::ContextMenuBase::first () noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_first;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitContextMenuItem* webkit_context_menu_get_item_at_position (WebKitContextMenu* menu, guint position);
// ::WebKitContextMenuItem* webkit_context_menu_get_item_at_position (::WebKitContextMenu* menu, guint position);
WebKit2::ContextMenuItem base::ContextMenuBase::get_item_at_position (guint position) noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::WebKitContextMenu* menu, guint position);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_get_item_at_position;
  auto position_to_c = position;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()), (guint) (position_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* webkit_context_menu_get_items (WebKitContextMenu* menu);
// ::GList* webkit_context_menu_get_items (::WebKitContextMenu* menu);
std::vector<WebKit2::ContextMenuItem> base::ContextMenuBase::get_items () noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_get_items;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()));
  return gi::detail::wrap_list<WebKit2::ContextMenuItem> (_temp_ret, gi::transfer_none);
}

// guint webkit_context_menu_get_n_items (WebKitContextMenu* menu);
// guint webkit_context_menu_get_n_items (::WebKitContextMenu* menu);
guint base::ContextMenuBase::get_n_items () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_get_n_items;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()));
  return _temp_ret;
}

// GVariant* webkit_context_menu_get_user_data (WebKitContextMenu* menu);
// ::GVariant* webkit_context_menu_get_user_data (::WebKitContextMenu* menu);
GLib::Variant base::ContextMenuBase::get_user_data () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_get_user_data;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_context_menu_insert (WebKitContextMenu* menu, WebKitContextMenuItem* item, gint position);
// void webkit_context_menu_insert (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
void base::ContextMenuBase::insert (WebKit2::ContextMenuItem item, gint position) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_insert;
  auto position_to_c = position;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::WebKitContextMenuItem*) (item_to_c), (gint) (position_to_c));
}

// WebKitContextMenuItem* webkit_context_menu_last (WebKitContextMenu* menu);
// ::WebKitContextMenuItem* webkit_context_menu_last (::WebKitContextMenu* menu);
WebKit2::ContextMenuItem base::ContextMenuBase::last () noexcept
{
  typedef ::WebKitContextMenuItem* (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_last;
  auto _temp_ret = call_wrap_v ((::WebKitContextMenu*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_context_menu_move_item (WebKitContextMenu* menu, WebKitContextMenuItem* item, gint position);
// void webkit_context_menu_move_item (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
void base::ContextMenuBase::move_item (WebKit2::ContextMenuItem item, gint position) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_move_item;
  auto position_to_c = position;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::WebKitContextMenuItem*) (item_to_c), (gint) (position_to_c));
}

// void webkit_context_menu_prepend (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_prepend (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
void base::ContextMenuBase::prepend (WebKit2::ContextMenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_prepend;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::WebKitContextMenuItem*) (item_to_c));
}

// void webkit_context_menu_remove (WebKitContextMenu* menu, WebKitContextMenuItem* item);
// void webkit_context_menu_remove (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
void base::ContextMenuBase::remove (WebKit2::ContextMenuItem item) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::WebKitContextMenuItem* item);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_remove;
  auto item_to_c = gi::unwrap (item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::WebKitContextMenuItem*) (item_to_c));
}

// void webkit_context_menu_remove_all (WebKitContextMenu* menu);
// void webkit_context_menu_remove_all (::WebKitContextMenu* menu);
void base::ContextMenuBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_remove_all;
  call_wrap_v ((::WebKitContextMenu*) (gobj_()));
}

// void webkit_context_menu_set_user_data (WebKitContextMenu* menu, GVariant* user_data);
// void webkit_context_menu_set_user_data (::WebKitContextMenu* menu, ::GVariant* user_data);
void base::ContextMenuBase::set_user_data (GLib::Variant user_data) noexcept
{
  typedef void (*call_wrap_t) (::WebKitContextMenu* menu, ::GVariant* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_context_menu_set_user_data;
  auto user_data_to_c = gi::unwrap (user_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitContextMenu*) (gobj_()), (::GVariant*) (user_data_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/contextmenu_extra_def_impl.hpp>)
#include <webkit2/contextmenu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/contextmenu_extra_impl.hpp>)
#include <webkit2/contextmenu_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void ContextMenuClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitContextMenuClass *methods = (::WebKitContextMenuClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
