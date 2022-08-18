// AUTO-GENERATED

#ifndef _GI_GTK_RENDERERCELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_RENDERERCELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// AtkObject* gtk_renderer_cell_accessible_new (GtkCellRenderer* renderer);
// ::GtkRendererCellAccessible* gtk_renderer_cell_accessible_new (::GtkCellRenderer* renderer);
Gtk::RendererCellAccessible base::RendererCellAccessibleBase::new_ (Gtk::CellRenderer renderer) noexcept
{
  typedef ::GtkRendererCellAccessible* (*call_wrap_t) (::GtkCellRenderer* renderer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_renderer_cell_accessible_new;
  auto renderer_to_c = gi::unwrap (renderer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkCellRenderer*) (renderer_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/renderercellaccessible_extra_def_impl.hpp>)
#include <gtk/renderercellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/renderercellaccessible_extra_impl.hpp>)
#include <gtk/renderercellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void RendererCellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkRendererCellAccessibleClass *methods = (::GtkRendererCellAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
