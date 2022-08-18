// AUTO-GENERATED

#ifndef _GI_GTK_TREESELECTION_IMPL_HPP_
#define _GI_GTK_TREESELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// gint gtk_tree_selection_count_selected_rows (GtkTreeSelection* selection);
// gint gtk_tree_selection_count_selected_rows (::GtkTreeSelection* selection);
gint base::TreeSelectionBase::count_selected_rows () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_count_selected_rows;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return _temp_ret;
}

// GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection* selection);
// ::GtkSelectionMode gtk_tree_selection_get_mode (::GtkTreeSelection* selection);
Gtk::SelectionMode base::TreeSelectionBase::get_mode () noexcept
{
  typedef ::GtkSelectionMode (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_mode;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// FAILURE on gtk_tree_selection_get_select_function; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_selection_get_selected (GtkTreeSelection* selection, GtkTreeModel** model, GtkTreeIter* iter);
// gboolean gtk_tree_selection_get_selected (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
bool base::TreeSelectionBase::get_selected (Gtk::TreeModel * model, Gtk::TreeIter * iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_selected;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (model ? &model_o : nullptr), (::GtkTreeIter*) (iter ? (::GtkTreeIter*) &iter_c : nullptr));
  if (iter) *iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  if (model) *model = gi::wrap (model_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeModel, Gtk::TreeIter> base::TreeSelectionBase::get_selected () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_selected;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (&model_o), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  return std::make_tuple (_temp_ret, gi::wrap (model_o, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// GList* gtk_tree_selection_get_selected_rows (GtkTreeSelection* selection, GtkTreeModel** model);
// ::GList* gtk_tree_selection_get_selected_rows (::GtkTreeSelection* selection, ::GtkTreeModel** model);
std::vector<Gtk::TreePath> base::TreeSelectionBase::get_selected_rows (Gtk::TreeModel * model) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_selected_rows;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (model ? &model_o : nullptr));
  if (model) *model = gi::wrap (model_o, gi::transfer_none, gi::direction_out);
  return gi::detail::wrap_list<Gtk::TreePath> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<Gtk::TreePath>, Gtk::TreeModel> base::TreeSelectionBase::get_selected_rows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeModel** model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_selected_rows;
  ::GtkTreeModel* model_o {};
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeModel**) (&model_o));
  return std::make_tuple (gi::detail::wrap_list<Gtk::TreePath> (_temp_ret, gi::transfer_full), gi::wrap (model_o, gi::transfer_none, gi::direction_out));
}

// GtkTreeView* gtk_tree_selection_get_tree_view (GtkTreeSelection* selection);
// ::GtkTreeView* gtk_tree_selection_get_tree_view (::GtkTreeSelection* selection);
Gtk::TreeView base::TreeSelectionBase::get_tree_view () noexcept
{
  typedef ::GtkTreeView* (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_tree_view;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer gtk_tree_selection_get_user_data (GtkTreeSelection* selection);
// void* gtk_tree_selection_get_user_data (::GtkTreeSelection* selection);
gpointer base::TreeSelectionBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_get_user_data;
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_tree_selection_iter_is_selected (GtkTreeSelection* selection, GtkTreeIter* iter);
// gboolean gtk_tree_selection_iter_is_selected (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
bool base::TreeSelectionBase::iter_is_selected (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_iter_is_selected;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_selection_path_is_selected (GtkTreeSelection* selection, GtkTreePath* path);
// gboolean gtk_tree_selection_path_is_selected (::GtkTreeSelection* selection, ::GtkTreePath* path);
bool base::TreeSelectionBase::path_is_selected (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_path_is_selected;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
  return _temp_ret;
}

// void gtk_tree_selection_select_all (GtkTreeSelection* selection);
// void gtk_tree_selection_select_all (::GtkTreeSelection* selection);
void base::TreeSelectionBase::select_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_select_all;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()));
}

// void gtk_tree_selection_select_iter (GtkTreeSelection* selection, GtkTreeIter* iter);
// void gtk_tree_selection_select_iter (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
void base::TreeSelectionBase::select_iter (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_select_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_selection_select_path (GtkTreeSelection* selection, GtkTreePath* path);
// void gtk_tree_selection_select_path (::GtkTreeSelection* selection, ::GtkTreePath* path);
void base::TreeSelectionBase::select_path (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_select_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_selection_select_range (GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path);
// void gtk_tree_selection_select_range (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
void base::TreeSelectionBase::select_range (Gtk::TreePath start_path, Gtk::TreePath end_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_select_range;
  auto end_path_to_c = gi::unwrap (end_path, gi::transfer_none, gi::direction_in);
  auto start_path_to_c = gi::unwrap (start_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (start_path_to_c), (::GtkTreePath*) (end_path_to_c));
}

// void gtk_tree_selection_selected_foreach (GtkTreeSelection* selection, GtkTreeSelectionForeachFunc func, gpointer data);
// void gtk_tree_selection_selected_foreach (::GtkTreeSelection* selection, Gtk::TreeSelectionForeachFunc::cfunction_type func, void* data);
void base::TreeSelectionBase::selected_foreach (Gtk::TreeSelectionForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, Gtk::TreeSelectionForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_selected_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (Gtk::TreeSelectionForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_tree_selection_set_mode (GtkTreeSelection* selection, GtkSelectionMode type);
// void gtk_tree_selection_set_mode (::GtkTreeSelection* selection, ::GtkSelectionMode type);
void base::TreeSelectionBase::set_mode (Gtk::SelectionMode type) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkSelectionMode type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_set_mode;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkSelectionMode) (type_to_c));
}

// void gtk_tree_selection_set_select_function (GtkTreeSelection* selection, GtkTreeSelectionFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_selection_set_select_function (::GtkTreeSelection* selection, Gtk::TreeSelectionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeSelectionBase::set_select_function (Gtk::TreeSelectionFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, Gtk::TreeSelectionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_set_select_function;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (Gtk::TreeSelectionFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_tree_selection_unselect_all (GtkTreeSelection* selection);
// void gtk_tree_selection_unselect_all (::GtkTreeSelection* selection);
void base::TreeSelectionBase::unselect_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_unselect_all;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()));
}

// void gtk_tree_selection_unselect_iter (GtkTreeSelection* selection, GtkTreeIter* iter);
// void gtk_tree_selection_unselect_iter (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
void base::TreeSelectionBase::unselect_iter (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_unselect_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_selection_unselect_path (GtkTreeSelection* selection, GtkTreePath* path);
// void gtk_tree_selection_unselect_path (::GtkTreeSelection* selection, ::GtkTreePath* path);
void base::TreeSelectionBase::unselect_path (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_unselect_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_selection_unselect_range (GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path);
// void gtk_tree_selection_unselect_range (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
void base::TreeSelectionBase::unselect_range (Gtk::TreePath start_path, Gtk::TreePath end_path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_selection_unselect_range;
  auto end_path_to_c = gi::unwrap (end_path, gi::transfer_none, gi::direction_in);
  auto start_path_to_c = gi::unwrap (start_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeSelection*) (gobj_()), (::GtkTreePath*) (start_path_to_c), (::GtkTreePath*) (end_path_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_def_impl.hpp>)
#include <gtk/treeselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_impl.hpp>)
#include <gtk/treeselection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeSelectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeSelectionClass *methods = (::GtkTreeSelectionClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
}

// void TreeSelection::changed (GtkTreeSelection* selection);
// void TreeSelection::changed (::GtkTreeSelection* selection);
void TreeSelectionClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkTreeSelection* selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkTreeSelection*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
