// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEWACCESSIBLE_IMPL_HPP_
#define _GI_GTK_TREEVIEWACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Selection TreeViewAccessibleBase::interface_ (gi::interface_tag<Atk::Selection>)
{ return gi::wrap ((Atk::Selection::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewAccessibleBase::operator Atk::Selection ()
{ return interface_ (gi::interface_tag<Atk::Selection>()); }

Atk::Table TreeViewAccessibleBase::interface_ (gi::interface_tag<Atk::Table>)
{ return gi::wrap ((Atk::Table::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewAccessibleBase::operator Atk::Table ()
{ return interface_ (gi::interface_tag<Atk::Table>()); }

Gtk::CellAccessibleParent TreeViewAccessibleBase::interface_ (gi::interface_tag<Gtk::CellAccessibleParent>)
{ return gi::wrap ((Gtk::CellAccessibleParent::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeViewAccessibleBase::operator Gtk::CellAccessibleParent ()
{ return interface_ (gi::interface_tag<Gtk::CellAccessibleParent>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeviewaccessible_extra_def_impl.hpp>)
#include <gtk/treeviewaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeviewaccessible_extra_impl.hpp>)
#include <gtk/treeviewaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeViewAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeViewAccessibleClass *methods = (::GtkTreeViewAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
