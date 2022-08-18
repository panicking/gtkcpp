// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERSPINNER_IMPL_HPP_
#define _GI_GTK_CELLRENDERERSPINNER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* gtk_cell_renderer_spinner_new ();
// ::GtkCellRendererSpinner* gtk_cell_renderer_spinner_new ();
Gtk::CellRendererSpinner base::CellRendererSpinnerBase::new_ () noexcept
{
  typedef ::GtkCellRendererSpinner* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_spinner_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspinner_extra_def_impl.hpp>)
#include <gtk/cellrendererspinner_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspinner_extra_impl.hpp>)
#include <gtk/cellrendererspinner_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererSpinnerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererSpinnerClass *methods = (::GtkCellRendererSpinnerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
