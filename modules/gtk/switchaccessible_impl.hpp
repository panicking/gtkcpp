// AUTO-GENERATED

#ifndef _GI_GTK_SWITCHACCESSIBLE_IMPL_HPP_
#define _GI_GTK_SWITCHACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action SwitchAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SwitchAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switchaccessible_extra_def_impl.hpp>)
#include <gtk/switchaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switchaccessible_extra_impl.hpp>)
#include <gtk/switchaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SwitchAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSwitchAccessibleClass *methods = (::GtkSwitchAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
