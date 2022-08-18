// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGDEST_IMPL_HPP_
#define _GI_GTK_TREEDRAGDEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_tree_drag_dest_drag_data_received (GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_dest_drag_data_received (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
bool base::TreeDragDestBase::drag_data_received (Gtk::TreePath dest, Gtk::SelectionData selection_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_drag_dest_drag_data_received;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_drag_dest_row_drop_possible (GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_dest_row_drop_possible (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
bool base::TreeDragDestBase::row_drop_possible (Gtk::TreePath dest_path, Gtk::SelectionData selection_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_drag_dest_row_drop_possible;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto dest_path_to_c = gi::unwrap (dest_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_path_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_def_impl.hpp>)
#include <gtk/treedragdest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragdest_extra_impl.hpp>)
#include <gtk/treedragdest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeDragDestIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkTreeDragDestIface *methods = (::GtkTreeDragDestIface *) interface_struct;
  (void) methods;

  methods->drag_data_received = (decltype (methods->drag_data_received)) detail::method_wrapper<self, bool (*) (Gtk::TreePath dest, Gtk::SelectionData selection_data), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_data_received_>;
  methods->row_drop_possible = (decltype (methods->row_drop_possible)) detail::method_wrapper<self, bool (*) (Gtk::TreePath dest_path, Gtk::SelectionData selection_data), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_drop_possible_>;
}

// gboolean TreeDragDest::drag_data_received (GtkTreeDragDest* drag_dest, GtkTreePath* dest, GtkSelectionData* selection_data);
// gboolean TreeDragDest::drag_data_received (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
bool TreeDragDestIfaceClassImpl::drag_data_received_ (Gtk::TreePath dest, Gtk::SelectionData selection_data) noexcept
{
  if (!get_struct_()->drag_data_received) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_received;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}

// gboolean TreeDragDest::row_drop_possible (GtkTreeDragDest* drag_dest, GtkTreePath* dest_path, GtkSelectionData* selection_data);
// gboolean TreeDragDest::row_drop_possible (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
bool TreeDragDestIfaceClassImpl::row_drop_possible_ (Gtk::TreePath dest_path, Gtk::SelectionData selection_data) noexcept
{
  if (!get_struct_()->row_drop_possible) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeDragDest* drag_dest, ::GtkTreePath* dest_path, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_drop_possible;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto dest_path_to_c = gi::unwrap (dest_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragDest*) (gobj_()), (::GtkTreePath*) (dest_path_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
