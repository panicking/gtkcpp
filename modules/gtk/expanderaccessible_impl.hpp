// AUTO-GENERATED

#ifndef _GI_GTK_EXPANDERACCESSIBLE_IMPL_HPP_
#define _GI_GTK_EXPANDERACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action ExpanderAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ExpanderAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/expanderaccessible_extra_def_impl.hpp>)
#include <gtk/expanderaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/expanderaccessible_extra_impl.hpp>)
#include <gtk/expanderaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ExpanderAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkExpanderAccessibleClass *methods = (::GtkExpanderAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
