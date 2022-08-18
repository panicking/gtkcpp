// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATORMENUITEM_IMPL_HPP_
#define _GI_GTK_SEPARATORMENUITEM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_separator_menu_item_new ();
// ::GtkSeparatorMenuItem* gtk_separator_menu_item_new ();
Gtk::SeparatorMenuItem base::SeparatorMenuItemBase::new_ () noexcept
{
  typedef ::GtkSeparatorMenuItem* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_separator_menu_item_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separatormenuitem_extra_def_impl.hpp>)
#include <gtk/separatormenuitem_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separatormenuitem_extra_impl.hpp>)
#include <gtk/separatormenuitem_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SeparatorMenuItemClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSeparatorMenuItemClass *methods = (::GtkSeparatorMenuItemClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
