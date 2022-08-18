// AUTO-GENERATED

#ifndef _GI_GTK_MENUSHELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_MENUSHELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Selection MenuShellAccessibleBase::interface_ (gi::interface_tag<Atk::Selection>)
{ return gi::wrap ((Atk::Selection::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

MenuShellAccessibleBase::operator Atk::Selection ()
{ return interface_ (gi::interface_tag<Atk::Selection>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menushellaccessible_extra_def_impl.hpp>)
#include <gtk/menushellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menushellaccessible_extra_impl.hpp>)
#include <gtk/menushellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuShellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuShellAccessibleClass *methods = (::GtkMenuShellAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
