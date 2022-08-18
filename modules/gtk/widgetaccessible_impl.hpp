// AUTO-GENERATED

#ifndef _GI_GTK_WIDGETACCESSIBLE_IMPL_HPP_
#define _GI_GTK_WIDGETACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Component WidgetAccessibleBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

WidgetAccessibleBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widgetaccessible_extra_def_impl.hpp>)
#include <gtk/widgetaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widgetaccessible_extra_impl.hpp>)
#include <gtk/widgetaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WidgetAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkWidgetAccessibleClass *methods = (::GtkWidgetAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
