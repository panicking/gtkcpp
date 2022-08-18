// AUTO-GENERATED

#ifndef _GI_GTK_SPINNERACCESSIBLE_IMPL_HPP_
#define _GI_GTK_SPINNERACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Image SpinnerAccessibleBase::interface_ (gi::interface_tag<Atk::Image>)
{ return gi::wrap ((Atk::Image::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SpinnerAccessibleBase::operator Atk::Image ()
{ return interface_ (gi::interface_tag<Atk::Image>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/spinneraccessible_extra_def_impl.hpp>)
#include <gtk/spinneraccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/spinneraccessible_extra_impl.hpp>)
#include <gtk/spinneraccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SpinnerAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSpinnerAccessibleClass *methods = (::GtkSpinnerAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
