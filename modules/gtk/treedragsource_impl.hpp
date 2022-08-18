// AUTO-GENERATED

#ifndef _GI_GTK_TREEDRAGSOURCE_IMPL_HPP_
#define _GI_GTK_TREEDRAGSOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gboolean gtk_tree_drag_source_drag_data_delete (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean gtk_tree_drag_source_drag_data_delete (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
bool base::TreeDragSourceBase::drag_data_delete (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_drag_source_drag_data_delete;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_drag_source_drag_data_get (GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data);
// gboolean gtk_tree_drag_source_drag_data_get (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
bool base::TreeDragSourceBase::drag_data_get (Gtk::TreePath path, Gtk::SelectionData selection_data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_drag_source_drag_data_get;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_drag_source_row_draggable (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean gtk_tree_drag_source_row_draggable (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
bool base::TreeDragSourceBase::row_draggable (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_drag_source_row_draggable;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_def_impl.hpp>)
#include <gtk/treedragsource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treedragsource_extra_impl.hpp>)
#include <gtk/treedragsource_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeDragSourceIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkTreeDragSourceIface *methods = (::GtkTreeDragSourceIface *) interface_struct;
  (void) methods;

  methods->drag_data_delete = (decltype (methods->drag_data_delete)) detail::method_wrapper<self, bool (*) (Gtk::TreePath path), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_data_delete_>;
  methods->drag_data_get = (decltype (methods->drag_data_get)) detail::method_wrapper<self, bool (*) (Gtk::TreePath path, Gtk::SelectionData selection_data), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_data_get_>;
  methods->row_draggable = (decltype (methods->row_draggable)) detail::method_wrapper<self, bool (*) (Gtk::TreePath path), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_draggable_>;
}

// gboolean TreeDragSource::drag_data_delete (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::drag_data_delete (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
bool TreeDragSourceIfaceClassImpl::drag_data_delete_ (Gtk::TreePath path) noexcept
{
  if (!get_struct_()->drag_data_delete) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_delete;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// gboolean TreeDragSource::drag_data_get (GtkTreeDragSource* drag_source, GtkTreePath* path, GtkSelectionData* selection_data);
// gboolean TreeDragSource::drag_data_get (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
bool TreeDragSourceIfaceClassImpl::drag_data_get_ (Gtk::TreePath path, Gtk::SelectionData selection_data) noexcept
{
  if (!get_struct_()->drag_data_get) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path, ::GtkSelectionData* selection_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_get;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkSelectionData*) (selection_data_to_c));
  return _temp_ret;
}

// gboolean TreeDragSource::row_draggable (GtkTreeDragSource* drag_source, GtkTreePath* path);
// gboolean TreeDragSource::row_draggable (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
bool TreeDragSourceIfaceClassImpl::row_draggable_ (Gtk::TreePath path) noexcept
{
  if (!get_struct_()->row_draggable) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeDragSource* drag_source, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_draggable;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeDragSource*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
