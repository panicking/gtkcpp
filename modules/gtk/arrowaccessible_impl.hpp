// AUTO-GENERATED

#ifndef _GI_GTK_ARROWACCESSIBLE_IMPL_HPP_
#define _GI_GTK_ARROWACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Image ArrowAccessibleBase::interface_ (gi::interface_tag<Atk::Image>)
{ return gi::wrap ((Atk::Image::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ArrowAccessibleBase::operator Atk::Image ()
{ return interface_ (gi::interface_tag<Atk::Image>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/arrowaccessible_extra_def_impl.hpp>)
#include <gtk/arrowaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/arrowaccessible_extra_impl.hpp>)
#include <gtk/arrowaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ArrowAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkArrowAccessibleClass *methods = (::GtkArrowAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
