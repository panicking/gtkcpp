// AUTO-GENERATED

#ifndef _GI_GTK_CELLRENDERERSPIN_IMPL_HPP_
#define _GI_GTK_CELLRENDERERSPIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkCellRenderer* gtk_cell_renderer_spin_new ();
// ::GtkCellRendererSpin* gtk_cell_renderer_spin_new ();
Gtk::CellRendererSpin base::CellRendererSpinBase::new_ () noexcept
{
  typedef ::GtkCellRendererSpin* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_renderer_spin_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspin_extra_def_impl.hpp>)
#include <gtk/cellrendererspin_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/cellrendererspin_extra_impl.hpp>)
#include <gtk/cellrendererspin_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellRendererSpinClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkCellRendererSpinClass *methods = (::GtkCellRendererSpinClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
