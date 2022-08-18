// AUTO-GENERATED

#ifndef _GI_GTK_CELLEDITABLE_IMPL_HPP_
#define _GI_GTK_CELLEDITABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_cell_editable_editing_done (GtkCellEditable* cell_editable);
// void gtk_cell_editable_editing_done (::GtkCellEditable* cell_editable);
void base::CellEditableBase::editing_done () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_editable_editing_done;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void gtk_cell_editable_remove_widget (GtkCellEditable* cell_editable);
// void gtk_cell_editable_remove_widget (::GtkCellEditable* cell_editable);
void base::CellEditableBase::remove_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_cell_editable_remove_widget;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void gtk_cell_editable_start_editing (GtkCellEditable* cell_editable, GdkEvent* event);
// void gtk_cell_editable_start_editing (::GtkCellEditable* cell_editable,  event);
// SKIP; event type  not supported




} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra_def_impl.hpp>)
#include <gtk/celleditable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/celleditable_extra_impl.hpp>)
#include <gtk/celleditable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void CellEditableIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkCellEditableIface *methods = (::GtkCellEditableIface *) interface_struct;
  (void) methods;

  methods->editing_done = (decltype (methods->editing_done)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::editing_done_>;
  methods->remove_widget = (decltype (methods->remove_widget)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::remove_widget_>;
}

// void CellEditable::editing_done (GtkCellEditable* cell_editable);
// void CellEditable::editing_done (::GtkCellEditable* cell_editable);
void CellEditableIfaceClassImpl::editing_done_ () noexcept
{
  if (!get_struct_()->editing_done) return ;
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->editing_done;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void CellEditable::remove_widget (GtkCellEditable* cell_editable);
// void CellEditable::remove_widget (::GtkCellEditable* cell_editable);
void CellEditableIfaceClassImpl::remove_widget_ () noexcept
{
  if (!get_struct_()->remove_widget) return ;
  typedef void (*call_wrap_t) (::GtkCellEditable* cell_editable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->remove_widget;
  call_wrap_v ((::GtkCellEditable*) (gobj_()));
}

// void CellEditable::start_editing (GtkCellEditable* cell_editable, GdkEvent* event);
// void CellEditable::start_editing (::GtkCellEditable* cell_editable,  event);
// SKIP; event type  not supported

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
