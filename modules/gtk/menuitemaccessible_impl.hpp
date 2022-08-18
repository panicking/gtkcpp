// AUTO-GENERATED

#ifndef _GI_GTK_MENUITEMACCESSIBLE_IMPL_HPP_
#define _GI_GTK_MENUITEMACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action MenuItemAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MenuItemAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

Atk::Selection MenuItemAccessibleBase::interface_ (gi::interface_tag<Atk::Selection>)
{ return gi::wrap ((Atk::Selection::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MenuItemAccessibleBase::operator Atk::Selection ()
{ return interface_ (gi::interface_tag<Atk::Selection>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menuitemaccessible_extra_def_impl.hpp>)
#include <gtk/menuitemaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menuitemaccessible_extra_impl.hpp>)
#include <gtk/menuitemaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuItemAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuItemAccessibleClass *methods = (::GtkMenuItemAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
