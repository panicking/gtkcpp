// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOKACCESSIBLE_IMPL_HPP_
#define _GI_GTK_NOTEBOOKACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Selection NotebookAccessibleBase::interface_ (gi::interface_tag<Atk::Selection>)
{ return gi::wrap ((Atk::Selection::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NotebookAccessibleBase::operator Atk::Selection ()
{ return interface_ (gi::interface_tag<Atk::Selection>()); }


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebookaccessible_extra_def_impl.hpp>)
#include <gtk/notebookaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebookaccessible_extra_impl.hpp>)
#include <gtk/notebookaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NotebookAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkNotebookAccessibleClass *methods = (::GtkNotebookAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
