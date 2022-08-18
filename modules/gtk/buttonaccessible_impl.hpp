// AUTO-GENERATED

#ifndef _GI_GTK_BUTTONACCESSIBLE_IMPL_HPP_
#define _GI_GTK_BUTTONACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action ButtonAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ButtonAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }

Atk::Image ButtonAccessibleBase::interface_ (gi::interface_tag<Atk::Image>)
{ return gi::wrap ((Atk::Image::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ButtonAccessibleBase::operator Atk::Image ()
{ return interface_ (gi::interface_tag<Atk::Image>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buttonaccessible_extra_def_impl.hpp>)
#include <gtk/buttonaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buttonaccessible_extra_impl.hpp>)
#include <gtk/buttonaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ButtonAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkButtonAccessibleClass *methods = (::GtkButtonAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
