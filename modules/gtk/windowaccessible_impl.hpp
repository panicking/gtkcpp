// AUTO-GENERATED

#ifndef _GI_GTK_WINDOWACCESSIBLE_IMPL_HPP_
#define _GI_GTK_WINDOWACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Window WindowAccessibleBase::interface_ (gi::interface_tag<Atk::Window>)
{ return gi::wrap ((Atk::Window::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

WindowAccessibleBase::operator Atk::Window ()
{ return interface_ (gi::interface_tag<Atk::Window>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/windowaccessible_extra_def_impl.hpp>)
#include <gtk/windowaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/windowaccessible_extra_impl.hpp>)
#include <gtk/windowaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WindowAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkWindowAccessibleClass *methods = (::GtkWindowAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
