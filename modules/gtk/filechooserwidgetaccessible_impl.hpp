// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERWIDGETACCESSIBLE_IMPL_HPP_
#define _GI_GTK_FILECHOOSERWIDGETACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Action FileChooserWidgetAccessibleBase::interface_ (gi::interface_tag<Atk::Action>)
{ return gi::wrap ((Atk::Action::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileChooserWidgetAccessibleBase::operator Atk::Action ()
{ return interface_ (gi::interface_tag<Atk::Action>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidgetaccessible_extra_def_impl.hpp>)
#include <gtk/filechooserwidgetaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechooserwidgetaccessible_extra_impl.hpp>)
#include <gtk/filechooserwidgetaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileChooserWidgetAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFileChooserWidgetAccessibleClass *methods = (::GtkFileChooserWidgetAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
