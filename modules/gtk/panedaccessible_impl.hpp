// AUTO-GENERATED

#ifndef _GI_GTK_PANEDACCESSIBLE_IMPL_HPP_
#define _GI_GTK_PANEDACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Value PanedAccessibleBase::interface_ (gi::interface_tag<Atk::Value>)
{ return gi::wrap ((Atk::Value::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

PanedAccessibleBase::operator Atk::Value ()
{ return interface_ (gi::interface_tag<Atk::Value>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/panedaccessible_extra_def_impl.hpp>)
#include <gtk/panedaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/panedaccessible_extra_impl.hpp>)
#include <gtk/panedaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void PanedAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkPanedAccessibleClass *methods = (::GtkPanedAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
