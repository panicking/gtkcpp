// AUTO-GENERATED

#ifndef _GI_GTK_MENUITEM_IMPL_HPP_
#define _GI_GTK_MENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable MenuItemBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MenuItemBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

Gtk::Activatable MenuItemBase::interface_ (gi::interface_tag<Gtk::Activatable>)
{ return gi::wrap ((Gtk::Activatable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MenuItemBase::operator Gtk::Activatable ()
{ return interface_ (gi::interface_tag<Gtk::Activatable>()); }

// GtkWidget* gtk_menu_item_new ();
// ::GtkMenuItem* gtk_menu_item_new ();
Gtk::MenuItem base::MenuItemBase::new_ () noexcept
{
  typedef ::GtkMenuItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_item_new_with_label (const gchar* label);
// ::GtkMenuItem* gtk_menu_item_new_with_label (const char* label);
Gtk::MenuItem base::MenuItemBase::new_with_label (const std::string & label) noexcept
{
  typedef ::GtkMenuItem* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_item_new_with_mnemonic (const gchar* label);
// ::GtkMenuItem* gtk_menu_item_new_with_mnemonic (const char* label);
Gtk::MenuItem base::MenuItemBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkMenuItem* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_menu_item_activate (GtkMenuItem* menu_item);
// void gtk_menu_item_activate (::GtkMenuItem* menu_item);
void base::MenuItemBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_activate;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// void gtk_menu_item_deselect (GtkMenuItem* menu_item);
// void gtk_menu_item_deselect (::GtkMenuItem* menu_item);
void base::MenuItemBase::deselect () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_deselect;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// const gchar* gtk_menu_item_get_accel_path (GtkMenuItem* menu_item);
// const char* gtk_menu_item_get_accel_path (::GtkMenuItem* menu_item);
std::string base::MenuItemBase::get_accel_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_get_accel_path;
  auto _temp_ret = call_wrap_v ((::GtkMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_menu_item_get_label (GtkMenuItem* menu_item);
// const char* gtk_menu_item_get_label (::GtkMenuItem* menu_item);
std::string base::MenuItemBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_get_label;
  auto _temp_ret = call_wrap_v ((::GtkMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_menu_item_get_reserve_indicator (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_reserve_indicator (::GtkMenuItem* menu_item);
bool base::MenuItemBase::get_reserve_indicator () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_get_reserve_indicator;
  auto _temp_ret = call_wrap_v ((::GtkMenuItem*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_menu_item_get_right_justified (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_right_justified (::GtkMenuItem* menu_item);
// IGNORE; deprecated

// GtkWidget* gtk_menu_item_get_submenu (GtkMenuItem* menu_item);
// ::GtkWidget* gtk_menu_item_get_submenu (::GtkMenuItem* menu_item);
Gtk::Widget base::MenuItemBase::get_submenu () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_get_submenu;
  auto _temp_ret = call_wrap_v ((::GtkMenuItem*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_menu_item_get_use_underline (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_use_underline (::GtkMenuItem* menu_item);
bool base::MenuItemBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkMenuItem*) (gobj_()));
  return _temp_ret;
}

// void gtk_menu_item_select (GtkMenuItem* menu_item);
// void gtk_menu_item_select (::GtkMenuItem* menu_item);
void base::MenuItemBase::select () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_select;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// void gtk_menu_item_set_accel_path (GtkMenuItem* menu_item, const gchar* accel_path);
// void gtk_menu_item_set_accel_path (::GtkMenuItem* menu_item, const char* accel_path);
void base::MenuItemBase::set_accel_path (const std::string & accel_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_accel_path;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (const char*) (accel_path_to_c));
}
void base::MenuItemBase::set_accel_path () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_accel_path;
  auto accel_path_to_c = nullptr;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (const char*) (accel_path_to_c));
}

// void gtk_menu_item_set_label (GtkMenuItem* menu_item, const gchar* label);
// void gtk_menu_item_set_label (::GtkMenuItem* menu_item, const char* label);
void base::MenuItemBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_menu_item_set_reserve_indicator (GtkMenuItem* menu_item, gboolean reserve);
// void gtk_menu_item_set_reserve_indicator (::GtkMenuItem* menu_item, gboolean reserve);
void base::MenuItemBase::set_reserve_indicator (gboolean reserve) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, gboolean reserve);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_reserve_indicator;
  auto reserve_to_c = reserve;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (gboolean) (reserve_to_c));
}

// void gtk_menu_item_set_right_justified (GtkMenuItem* menu_item, gboolean right_justified);
// void gtk_menu_item_set_right_justified (::GtkMenuItem* menu_item, gboolean right_justified);
// IGNORE; deprecated

// void gtk_menu_item_set_submenu (GtkMenuItem* menu_item, GtkWidget* submenu);
// void gtk_menu_item_set_submenu (::GtkMenuItem* menu_item, ::GtkMenu* submenu);
void base::MenuItemBase::set_submenu (Gtk::Menu submenu) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, ::GtkMenu* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_submenu;
  auto submenu_to_c = gi::unwrap (submenu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (::GtkMenu*) (submenu_to_c));
}
void base::MenuItemBase::set_submenu () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, ::GtkMenu* submenu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_submenu;
  auto submenu_to_c = nullptr;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (::GtkMenu*) (submenu_to_c));
}

// void gtk_menu_item_set_use_underline (GtkMenuItem* menu_item, gboolean setting);
// void gtk_menu_item_set_use_underline (::GtkMenuItem* menu_item, gboolean setting);
void base::MenuItemBase::set_use_underline (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_set_use_underline;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_menu_item_toggle_size_allocate (GtkMenuItem* menu_item, gint allocation);
// void gtk_menu_item_toggle_size_allocate (::GtkMenuItem* menu_item, gint allocation);
void base::MenuItemBase::toggle_size_allocate (gint allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, gint allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_toggle_size_allocate;
  auto allocation_to_c = allocation;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (gint) (allocation_to_c));
}

// void gtk_menu_item_toggle_size_request (GtkMenuItem* menu_item, gint* requisition);
// void gtk_menu_item_toggle_size_request (::GtkMenuItem* menu_item, gint* requisition);
void base::MenuItemBase::toggle_size_request (gint & requisition) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, gint* requisition);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_item_toggle_size_request;
  auto requisition_to_c = requisition;
  gint requisition_o = requisition_to_c;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (gint*) (&requisition_o));
  requisition = requisition_o;
}








} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menuitem_extra_def_impl.hpp>)
#include <gtk/menuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menuitem_extra_impl.hpp>)
#include <gtk/menuitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuItemClass *methods = (::GtkMenuItemClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
  methods->activate_item = (decltype (methods->activate_item)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_item_>;
  methods->deselect = (decltype (methods->deselect)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::deselect_>;
  methods->select = (decltype (methods->select)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::select_>;
  methods->set_label = (decltype (methods->set_label)) detail::method_wrapper<self, void (*) (const std::string & label), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_label_>;
  methods->toggle_size_allocate = (decltype (methods->toggle_size_allocate)) detail::method_wrapper<self, void (*) (gint allocation), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::toggle_size_allocate_>;
}

// void MenuItem::activate (GtkMenuItem* menu_item);
// void MenuItem::activate (::GtkMenuItem* menu_item);
void MenuItemClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// void MenuItem::activate_item (GtkMenuItem* menu_item);
// void MenuItem::activate_item (::GtkMenuItem* menu_item);
void MenuItemClass::activate_item_ () noexcept
{
  if (!get_struct_()->activate_item) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate_item;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// void MenuItem::deselect (GtkMenuItem* menu_item);
// void MenuItem::deselect (::GtkMenuItem* menu_item);
void MenuItemClass::deselect_ () noexcept
{
  if (!get_struct_()->deselect) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->deselect;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// const gchar* MenuItem::get_label (GtkMenuItem* menu_item);
// const char* MenuItem::get_label (::GtkMenuItem* menu_item);
// SKIP; invalid callback return transfer none

// void MenuItem::select (GtkMenuItem* menu_item);
// void MenuItem::select (::GtkMenuItem* menu_item);
void MenuItemClass::select_ () noexcept
{
  if (!get_struct_()->select) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->select;
  call_wrap_v ((::GtkMenuItem*) (gobj_()));
}

// void MenuItem::set_label (GtkMenuItem* menu_item, const gchar* label);
// void MenuItem::set_label (::GtkMenuItem* menu_item, const char* label);
void MenuItemClass::set_label_ (const std::string & label) noexcept
{
  if (!get_struct_()->set_label) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (const char*) (label_to_c));
}

// void MenuItem::toggle_size_allocate (GtkMenuItem* menu_item, gint allocation);
// void MenuItem::toggle_size_allocate (::GtkMenuItem* menu_item, gint allocation);
void MenuItemClass::toggle_size_allocate_ (gint allocation) noexcept
{
  if (!get_struct_()->toggle_size_allocate) return ;
  typedef void (*call_wrap_t) (::GtkMenuItem* menu_item, gint allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->toggle_size_allocate;
  auto allocation_to_c = allocation;
  call_wrap_v ((::GtkMenuItem*) (gobj_()), (gint) (allocation_to_c));
}

// void MenuItem::toggle_size_request (GtkMenuItem* menu_item, gint* requisition);
// void MenuItem::toggle_size_request (::GtkMenuItem* menu_item, gint* requisition);
// SKIP; virtual-method out parameter not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
