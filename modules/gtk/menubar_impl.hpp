// AUTO-GENERATED

#ifndef _GI_GTK_MENUBAR_IMPL_HPP_
#define _GI_GTK_MENUBAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_menu_bar_new ();
// ::GtkMenuBar* gtk_menu_bar_new ();
Gtk::MenuBar base::MenuBarBase::new_ () noexcept
{
  typedef ::GtkMenuBar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_bar_new_from_model (GMenuModel* model);
// ::GtkMenuBar* gtk_menu_bar_new_from_model (::GMenuModel* model);
Gtk::MenuBar base::MenuBarBase::new_from_model (Gio::MenuModel model) noexcept
{
  typedef ::GtkMenuBar* (*call_wrap_t) (::GMenuModel* model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_new_from_model;
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GMenuModel*) (model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPackDirection gtk_menu_bar_get_child_pack_direction (GtkMenuBar* menubar);
// ::GtkPackDirection gtk_menu_bar_get_child_pack_direction (::GtkMenuBar* menubar);
Gtk::PackDirection base::MenuBarBase::get_child_pack_direction () noexcept
{
  typedef ::GtkPackDirection (*call_wrap_t) (::GtkMenuBar* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_get_child_pack_direction;
  auto _temp_ret = call_wrap_v ((::GtkMenuBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkPackDirection gtk_menu_bar_get_pack_direction (GtkMenuBar* menubar);
// ::GtkPackDirection gtk_menu_bar_get_pack_direction (::GtkMenuBar* menubar);
Gtk::PackDirection base::MenuBarBase::get_pack_direction () noexcept
{
  typedef ::GtkPackDirection (*call_wrap_t) (::GtkMenuBar* menubar);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_get_pack_direction;
  auto _temp_ret = call_wrap_v ((::GtkMenuBar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_menu_bar_set_child_pack_direction (GtkMenuBar* menubar, GtkPackDirection child_pack_dir);
// void gtk_menu_bar_set_child_pack_direction (::GtkMenuBar* menubar, ::GtkPackDirection child_pack_dir);
void base::MenuBarBase::set_child_pack_direction (Gtk::PackDirection child_pack_dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuBar* menubar, ::GtkPackDirection child_pack_dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_set_child_pack_direction;
  auto child_pack_dir_to_c = gi::unwrap (child_pack_dir);
  call_wrap_v ((::GtkMenuBar*) (gobj_()), (::GtkPackDirection) (child_pack_dir_to_c));
}

// void gtk_menu_bar_set_pack_direction (GtkMenuBar* menubar, GtkPackDirection pack_dir);
// void gtk_menu_bar_set_pack_direction (::GtkMenuBar* menubar, ::GtkPackDirection pack_dir);
void base::MenuBarBase::set_pack_direction (Gtk::PackDirection pack_dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuBar* menubar, ::GtkPackDirection pack_dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_bar_set_pack_direction;
  auto pack_dir_to_c = gi::unwrap (pack_dir);
  call_wrap_v ((::GtkMenuBar*) (gobj_()), (::GtkPackDirection) (pack_dir_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubar_extra_def_impl.hpp>)
#include <gtk/menubar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubar_extra_impl.hpp>)
#include <gtk/menubar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuBarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuBarClass *methods = (::GtkMenuBarClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
