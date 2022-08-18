// AUTO-GENERATED

#ifndef _GI_GTK_NOTEBOOKPAGEACCESSIBLE_IMPL_HPP_
#define _GI_GTK_NOTEBOOKPAGEACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::Component NotebookPageAccessibleBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

NotebookPageAccessibleBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }

// AtkObject* gtk_notebook_page_accessible_new (GtkNotebookAccessible* notebook, GtkWidget* child);
// ::GtkNotebookPageAccessible* gtk_notebook_page_accessible_new (::GtkNotebookAccessible* notebook, ::GtkWidget* child);
Gtk::NotebookPageAccessible base::NotebookPageAccessibleBase::new_ (Gtk::NotebookAccessible notebook, Gtk::Widget child) noexcept
{
  typedef ::GtkNotebookPageAccessible* (*call_wrap_t) (::GtkNotebookAccessible* notebook, ::GtkWidget* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_page_accessible_new;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto notebook_to_c = gi::unwrap (notebook, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkNotebookAccessible*) (notebook_to_c), (::GtkWidget*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_notebook_page_accessible_invalidate (GtkNotebookPageAccessible* page);
// void gtk_notebook_page_accessible_invalidate (::GtkNotebookPageAccessible* page);
void base::NotebookPageAccessibleBase::invalidate () noexcept
{
  typedef void (*call_wrap_t) (::GtkNotebookPageAccessible* page);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_notebook_page_accessible_invalidate;
  call_wrap_v ((::GtkNotebookPageAccessible*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/notebookpageaccessible_extra_def_impl.hpp>)
#include <gtk/notebookpageaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/notebookpageaccessible_extra_impl.hpp>)
#include <gtk/notebookpageaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NotebookPageAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkNotebookPageAccessibleClass *methods = (::GtkNotebookPageAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
