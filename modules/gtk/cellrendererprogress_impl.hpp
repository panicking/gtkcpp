// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERPROGRESS_IMPL_HPP_
#define _GI_GTK_CELLRENDERERPROGRESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Orientable CellRendererProgressBase::interface_ (gi::interface_tag<Gtk::Orientable>)
{ return gi::wrap ((Gtk::Orientable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CellRendererProgressBase::operator Gtk::Orientable ()
{ return interface_ (gi::interface_tag<Gtk::Orientable>()); }

// GtkCellRenderer* gtk_cell_renderer_progress_new ();
// ::GtkCellRendererProgress* gtk_cell_renderer_progress_new ();
Gtk::CellRendererProgress base::CellRendererProgressBase::new_ () noexcept
{
  typedef ::GtkCellRendererProgress* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_progress_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererprogress_extra_def_impl.hpp>)
#include <gtk/cellrendererprogress_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererprogress_extra_impl.hpp>)
#include <gtk/cellrendererprogress_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererProgressClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererProgressClass *methods = (::GtkCellRendererProgressClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
