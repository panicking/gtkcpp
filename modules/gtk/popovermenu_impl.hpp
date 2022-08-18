// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENU_IMPL_HPP_
#define _GI_GTK_POPOVERMENU_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_popover_menu_new ();
// ::GtkPopoverMenu* gtk_popover_menu_new ();
Gtk::PopoverMenu base::PopoverMenuBase::new_ () noexcept
{
  typedef ::GtkPopoverMenu* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_popover_menu_open_submenu (GtkPopoverMenu* popover, const gchar* name);
// void gtk_popover_menu_open_submenu (::GtkPopoverMenu* popover, const char* name);
void base::PopoverMenuBase::open_submenu (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkPopoverMenu* popover, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_popover_menu_open_submenu;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkPopoverMenu*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_def_impl.hpp>)
#include <gtk/popovermenu_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_impl.hpp>)
#include <gtk/popovermenu_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PopoverMenuClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPopoverMenuClass *methods = (::GtkPopoverMenuClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
