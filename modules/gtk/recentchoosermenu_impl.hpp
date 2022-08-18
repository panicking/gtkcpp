// AUTO-GENERATED

#ifndef _GI_GTK_RECENTCHOOSERMENU_IMPL_HPP_
#define _GI_GTK_RECENTCHOOSERMENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Activatable RecentChooserMenuBase::interface_ (gi::interface_tag<Gtk::Activatable>)
{ return gi::wrap ((Gtk::Activatable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentChooserMenuBase::operator Gtk::Activatable ()
{ return interface_ (gi::interface_tag<Gtk::Activatable>()); }

Gtk::RecentChooser RecentChooserMenuBase::interface_ (gi::interface_tag<Gtk::RecentChooser>)
{ return gi::wrap ((Gtk::RecentChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentChooserMenuBase::operator Gtk::RecentChooser ()
{ return interface_ (gi::interface_tag<Gtk::RecentChooser>()); }

// GtkWidget* gtk_recent_chooser_menu_new ();
// ::GtkRecentChooserMenu* gtk_recent_chooser_menu_new ();
Gtk::RecentChooserMenu base::RecentChooserMenuBase::new_ () noexcept
{
  typedef ::GtkRecentChooserMenu* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_menu_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_recent_chooser_menu_new_for_manager (GtkRecentManager* manager);
// ::GtkRecentChooserMenu* gtk_recent_chooser_menu_new_for_manager (::GtkRecentManager* manager);
Gtk::RecentChooserMenu base::RecentChooserMenuBase::new_for_manager (Gtk::RecentManager manager) noexcept
{
  typedef ::GtkRecentChooserMenu* (*call_wrap_t) (::GtkRecentManager* manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_menu_new_for_manager;
  auto manager_to_c = gi::unwrap (manager, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentManager*) (manager_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_recent_chooser_menu_get_show_numbers (GtkRecentChooserMenu* menu);
// gboolean gtk_recent_chooser_menu_get_show_numbers (::GtkRecentChooserMenu* menu);
bool base::RecentChooserMenuBase::get_show_numbers () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentChooserMenu* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_menu_get_show_numbers;
  auto _temp_ret = call_wrap_v ((::GtkRecentChooserMenu*) (gobj_()));
  return _temp_ret;
}

// void gtk_recent_chooser_menu_set_show_numbers (GtkRecentChooserMenu* menu, gboolean show_numbers);
// void gtk_recent_chooser_menu_set_show_numbers (::GtkRecentChooserMenu* menu, gboolean show_numbers);
void base::RecentChooserMenuBase::set_show_numbers (gboolean show_numbers) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentChooserMenu* menu, gboolean show_numbers);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_chooser_menu_set_show_numbers;
  auto show_numbers_to_c = show_numbers;
  call_wrap_v ((::GtkRecentChooserMenu*) (gobj_()), (gboolean) (show_numbers_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentchoosermenu_extra_def_impl.hpp>)
#include <gtk/recentchoosermenu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentchoosermenu_extra_impl.hpp>)
#include <gtk/recentchoosermenu_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RecentChooserMenuClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRecentChooserMenuClass *methods = (::GtkRecentChooserMenuClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
