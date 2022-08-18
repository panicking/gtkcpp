// AUTO-GENERATED

#ifndef _GI_GTK_CONTAINERCELLACCESSIBLE_IMPL_HPP_
#define _GI_GTK_CONTAINERCELLACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkContainerCellAccessible* gtk_container_cell_accessible_new ();
// ::GtkContainerCellAccessible* gtk_container_cell_accessible_new ();
Gtk::ContainerCellAccessible base::ContainerCellAccessibleBase::new_ () noexcept
{
  typedef ::GtkContainerCellAccessible* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_cell_accessible_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_container_cell_accessible_add_child (GtkContainerCellAccessible* container, GtkCellAccessible* child);
// void gtk_container_cell_accessible_add_child (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
void base::ContainerCellAccessibleBase::add_child (Gtk::CellAccessible child) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_cell_accessible_add_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainerCellAccessible*) (gobj_()), (::GtkCellAccessible*) (child_to_c));
}

// GList* gtk_container_cell_accessible_get_children (GtkContainerCellAccessible* container);
// ::GList* gtk_container_cell_accessible_get_children (::GtkContainerCellAccessible* container);
std::vector<Gtk::CellAccessible> base::ContainerCellAccessibleBase::get_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkContainerCellAccessible* container);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_cell_accessible_get_children;
  auto _temp_ret = call_wrap_v ((::GtkContainerCellAccessible*) (gobj_()));
  return gi::detail::wrap_list<Gtk::CellAccessible> (_temp_ret, gi::transfer_none);
}

// void gtk_container_cell_accessible_remove_child (GtkContainerCellAccessible* container, GtkCellAccessible* child);
// void gtk_container_cell_accessible_remove_child (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
void base::ContainerCellAccessibleBase::remove_child (Gtk::CellAccessible child) noexcept
{
  typedef void (*call_wrap_t) (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_container_cell_accessible_remove_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkContainerCellAccessible*) (gobj_()), (::GtkCellAccessible*) (child_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/containercellaccessible_extra_def_impl.hpp>)
#include <gtk/containercellaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/containercellaccessible_extra_impl.hpp>)
#include <gtk/containercellaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ContainerCellAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkContainerCellAccessibleClass *methods = (::GtkContainerCellAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
