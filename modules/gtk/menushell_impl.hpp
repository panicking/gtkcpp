// AUTO-GENERATED

#ifndef _GI_GTK_MENUSHELL_IMPL_HPP_
#define _GI_GTK_MENUSHELL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_menu_shell_activate_item (GtkMenuShell* menu_shell, GtkWidget* menu_item, gboolean force_deactivate);
// void gtk_menu_shell_activate_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item, gboolean force_deactivate);
void base::MenuShellBase::activate_item (Gtk::Widget menu_item, gboolean force_deactivate) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item, gboolean force_deactivate);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_activate_item;
  auto force_deactivate_to_c = force_deactivate;
  auto menu_item_to_c = gi::unwrap (menu_item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (menu_item_to_c), (gboolean) (force_deactivate_to_c));
}

// void gtk_menu_shell_append (GtkMenuShell* menu_shell, GtkWidget* child);
// void gtk_menu_shell_append (::GtkMenuShell* menu_shell, ::GtkMenuItem* child);
void base::MenuShellBase::append (Gtk::MenuItem child) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkMenuItem* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_append;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkMenuItem*) (child_to_c));
}

// void gtk_menu_shell_bind_model (GtkMenuShell* menu_shell, GMenuModel* model, const gchar* action_namespace, gboolean with_separators);
// void gtk_menu_shell_bind_model (::GtkMenuShell* menu_shell, ::GMenuModel* model, const char* action_namespace, gboolean with_separators);
void base::MenuShellBase::bind_model (Gio::MenuModel model, const std::string & action_namespace, gboolean with_separators) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GMenuModel* model, const char* action_namespace, gboolean with_separators);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_bind_model;
  auto with_separators_to_c = with_separators;
  auto action_namespace_to_c = gi::unwrap (action_namespace, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GMenuModel*) (model_to_c), (const char*) (action_namespace_to_c), (gboolean) (with_separators_to_c));
}
void base::MenuShellBase::bind_model (gboolean with_separators) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GMenuModel* model, const char* action_namespace, gboolean with_separators);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_bind_model;
  auto with_separators_to_c = with_separators;
  auto action_namespace_to_c = nullptr;
  auto model_to_c = nullptr;
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GMenuModel*) (model_to_c), (const char*) (action_namespace_to_c), (gboolean) (with_separators_to_c));
}

// void gtk_menu_shell_cancel (GtkMenuShell* menu_shell);
// void gtk_menu_shell_cancel (::GtkMenuShell* menu_shell);
void base::MenuShellBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_cancel;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

// void gtk_menu_shell_deactivate (GtkMenuShell* menu_shell);
// void gtk_menu_shell_deactivate (::GtkMenuShell* menu_shell);
void base::MenuShellBase::deactivate () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_deactivate;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

// void gtk_menu_shell_deselect (GtkMenuShell* menu_shell);
// void gtk_menu_shell_deselect (::GtkMenuShell* menu_shell);
void base::MenuShellBase::deselect () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_deselect;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

// GtkWidget* gtk_menu_shell_get_parent_shell (GtkMenuShell* menu_shell);
// ::GtkWidget* gtk_menu_shell_get_parent_shell (::GtkMenuShell* menu_shell);
Gtk::Widget base::MenuShellBase::get_parent_shell () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_get_parent_shell;
  auto _temp_ret = call_wrap_v ((::GtkMenuShell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_shell_get_selected_item (GtkMenuShell* menu_shell);
// ::GtkWidget* gtk_menu_shell_get_selected_item (::GtkMenuShell* menu_shell);
Gtk::Widget base::MenuShellBase::get_selected_item () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_get_selected_item;
  auto _temp_ret = call_wrap_v ((::GtkMenuShell*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_menu_shell_get_take_focus (GtkMenuShell* menu_shell);
// gboolean gtk_menu_shell_get_take_focus (::GtkMenuShell* menu_shell);
bool base::MenuShellBase::get_take_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_get_take_focus;
  auto _temp_ret = call_wrap_v ((::GtkMenuShell*) (gobj_()));
  return _temp_ret;
}

// void gtk_menu_shell_insert (GtkMenuShell* menu_shell, GtkWidget* child, gint position);
// void gtk_menu_shell_insert (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
void base::MenuShellBase::insert (Gtk::Widget child, gint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_insert;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void gtk_menu_shell_prepend (GtkMenuShell* menu_shell, GtkWidget* child);
// void gtk_menu_shell_prepend (::GtkMenuShell* menu_shell, ::GtkWidget* child);
void base::MenuShellBase::prepend (Gtk::Widget child) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_prepend;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (child_to_c));
}

// void gtk_menu_shell_select_first (GtkMenuShell* menu_shell, gboolean search_sensitive);
// void gtk_menu_shell_select_first (::GtkMenuShell* menu_shell, gboolean search_sensitive);
void base::MenuShellBase::select_first (gboolean search_sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, gboolean search_sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_select_first;
  auto search_sensitive_to_c = search_sensitive;
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (gboolean) (search_sensitive_to_c));
}

// void gtk_menu_shell_select_item (GtkMenuShell* menu_shell, GtkWidget* menu_item);
// void gtk_menu_shell_select_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
void base::MenuShellBase::select_item (Gtk::Widget menu_item) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_select_item;
  auto menu_item_to_c = gi::unwrap (menu_item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (menu_item_to_c));
}

// void gtk_menu_shell_set_take_focus (GtkMenuShell* menu_shell, gboolean take_focus);
// void gtk_menu_shell_set_take_focus (::GtkMenuShell* menu_shell, gboolean take_focus);
void base::MenuShellBase::set_take_focus (gboolean take_focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, gboolean take_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_shell_set_take_focus;
  auto take_focus_to_c = take_focus;
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (gboolean) (take_focus_to_c));
}










} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menushell_extra_def_impl.hpp>)
#include <gtk/menushell_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menushell_extra_impl.hpp>)
#include <gtk/menushell_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuShellClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuShellClass *methods = (::GtkMenuShellClass *) class_struct;
  (void) methods;

  methods->activate_current = (decltype (methods->activate_current)) detail::method_wrapper<self, void (*) (gboolean force_hide), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::activate_current_>;
  methods->cancel = (decltype (methods->cancel)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cancel_>;
  methods->deactivate = (decltype (methods->deactivate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::deactivate_>;
  methods->get_popup_delay = (decltype (methods->get_popup_delay)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_popup_delay_>;
  methods->insert = (decltype (methods->insert)) detail::method_wrapper<self, void (*) (Gtk::Widget child, gint position), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::insert_>;
  methods->move_current = (decltype (methods->move_current)) detail::method_wrapper<self, void (*) (Gtk::MenuDirectionType direction), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_current_>;
  methods->move_selected = (decltype (methods->move_selected)) detail::method_wrapper<self, bool (*) (gint distance), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::move_selected_>;
  methods->select_item = (decltype (methods->select_item)) detail::method_wrapper<self, void (*) (Gtk::Widget menu_item), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::select_item_>;
  methods->selection_done = (decltype (methods->selection_done)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::selection_done_>;
}

// void MenuShell::activate_current (GtkMenuShell* menu_shell, gboolean force_hide);
// void MenuShell::activate_current (::GtkMenuShell* menu_shell, gboolean force_hide);
void MenuShellClass::activate_current_ (gboolean force_hide) noexcept
{
  if (!get_struct_()->activate_current) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, gboolean force_hide);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_current;
  auto force_hide_to_c = force_hide;
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (gboolean) (force_hide_to_c));
}

// void MenuShell::cancel (GtkMenuShell* menu_shell);
// void MenuShell::cancel (::GtkMenuShell* menu_shell);
void MenuShellClass::cancel_ () noexcept
{
  if (!get_struct_()->cancel) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancel;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

// void MenuShell::deactivate (GtkMenuShell* menu_shell);
// void MenuShell::deactivate (::GtkMenuShell* menu_shell);
void MenuShellClass::deactivate_ () noexcept
{
  if (!get_struct_()->deactivate) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deactivate;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

// gint MenuShell::get_popup_delay (GtkMenuShell* menu_shell);
// gint MenuShell::get_popup_delay (::GtkMenuShell* menu_shell);
gint MenuShellClass::get_popup_delay_ () noexcept
{
  if (!get_struct_()->get_popup_delay) return gint{};
  typedef gint (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_popup_delay;
  auto _temp_ret = call_wrap_v ((::GtkMenuShell*) (gobj_()));
  return _temp_ret;
}

// void MenuShell::insert (GtkMenuShell* menu_shell, GtkWidget* child, gint position);
// void MenuShell::insert (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
void MenuShellClass::insert_ (Gtk::Widget child, gint position) noexcept
{
  if (!get_struct_()->insert) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* child, gint position);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->insert;
  auto position_to_c = position;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (child_to_c), (gint) (position_to_c));
}

// void MenuShell::move_current (GtkMenuShell* menu_shell, GtkMenuDirectionType direction);
// void MenuShell::move_current (::GtkMenuShell* menu_shell, ::GtkMenuDirectionType direction);
void MenuShellClass::move_current_ (Gtk::MenuDirectionType direction) noexcept
{
  if (!get_struct_()->move_current) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkMenuDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_current;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkMenuDirectionType) (direction_to_c));
}

// gboolean MenuShell::move_selected (GtkMenuShell* menu_shell, gint distance);
// gboolean MenuShell::move_selected (::GtkMenuShell* menu_shell, gint distance);
bool MenuShellClass::move_selected_ (gint distance) noexcept
{
  if (!get_struct_()->move_selected) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkMenuShell* menu_shell, gint distance);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_selected;
  auto distance_to_c = distance;
  auto _temp_ret = call_wrap_v ((::GtkMenuShell*) (gobj_()), (gint) (distance_to_c));
  return _temp_ret;
}

// void MenuShell::select_item (GtkMenuShell* menu_shell, GtkWidget* menu_item);
// void MenuShell::select_item (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
void MenuShellClass::select_item_ (Gtk::Widget menu_item) noexcept
{
  if (!get_struct_()->select_item) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell, ::GtkWidget* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select_item;
  auto menu_item_to_c = gi::unwrap (menu_item, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuShell*) (gobj_()), (::GtkWidget*) (menu_item_to_c));
}

// void MenuShell::selection_done (GtkMenuShell* menu_shell);
// void MenuShell::selection_done (::GtkMenuShell* menu_shell);
void MenuShellClass::selection_done_ () noexcept
{
  if (!get_struct_()->selection_done) return ;
  typedef void (*call_wrap_t) (::GtkMenuShell* menu_shell);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_done;
  call_wrap_v ((::GtkMenuShell*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
