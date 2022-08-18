// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELSORT_IMPL_HPP_
#define _GI_GTK_TREEMODELSORT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::TreeDragSource TreeModelSortBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeModelSortBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel TreeModelSortBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeModelSortBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

Gtk::TreeSortable TreeModelSortBase::interface_ (gi::interface_tag<Gtk::TreeSortable>)
{ return gi::wrap ((Gtk::TreeSortable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeModelSortBase::operator Gtk::TreeSortable ()
{ return interface_ (gi::interface_tag<Gtk::TreeSortable>()); }

// GtkTreeModel* gtk_tree_model_sort_new_with_model (GtkTreeModel* child_model);
// ::GtkTreeModelSort* gtk_tree_model_sort_new_with_model (::GtkTreeModel* child_model);
Gtk::TreeModelSort base::TreeModelSortBase::new_with_model (Gtk::TreeModel child_model) noexcept
{
  typedef ::GtkTreeModelSort* (*call_wrap_t) (::GtkTreeModel* child_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_new_with_model;
  auto child_model_to_c = gi::unwrap (child_model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (child_model_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_model_sort_clear_cache (GtkTreeModelSort* tree_model_sort);
// void gtk_tree_model_sort_clear_cache (::GtkTreeModelSort* tree_model_sort);
void base::TreeModelSortBase::clear_cache () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_clear_cache;
  call_wrap_v ((::GtkTreeModelSort*) (gobj_()));
}

// gboolean gtk_tree_model_sort_convert_child_iter_to_iter (GtkTreeModelSort* tree_model_sort, GtkTreeIter* sort_iter, GtkTreeIter* child_iter);
// gboolean gtk_tree_model_sort_convert_child_iter_to_iter (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* sort_iter, ::GtkTreeIter* child_iter);
bool base::TreeModelSortBase::convert_child_iter_to_iter (Gtk::TreeIter & sort_iter, Gtk::TreeIter child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* sort_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type sort_iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &sort_iter_c), (::GtkTreeIter*) (child_iter_to_c));
  sort_iter = gi::wrap ((::GtkTreeIter*) &sort_iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelSortBase::convert_child_iter_to_iter (Gtk::TreeIter child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* sort_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type sort_iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &sort_iter_c), (::GtkTreeIter*) (child_iter_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &sort_iter_c, gi::transfer_none, gi::direction_out));
}

// GtkTreePath* gtk_tree_model_sort_convert_child_path_to_path (GtkTreeModelSort* tree_model_sort, GtkTreePath* child_path);
// ::GtkTreePath* gtk_tree_model_sort_convert_child_path_to_path (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* child_path);
Gtk::TreePath base::TreeModelSortBase::convert_child_path_to_path (Gtk::TreePath child_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* child_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_child_path_to_path;
  auto child_path_to_c = gi::unwrap (child_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreePath*) (child_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_model_sort_convert_iter_to_child_iter (GtkTreeModelSort* tree_model_sort, GtkTreeIter* child_iter, GtkTreeIter* sorted_iter);
// void gtk_tree_model_sort_convert_iter_to_child_iter (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* child_iter, ::GtkTreeIter* sorted_iter);
void base::TreeModelSortBase::convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter sorted_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* child_iter, ::GtkTreeIter* sorted_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_iter_to_child_iter;
  auto sorted_iter_to_c = gi::unwrap (sorted_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type child_iter_c;
  call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &child_iter_c), (::GtkTreeIter*) (sorted_iter_to_c));
  child_iter = gi::wrap ((::GtkTreeIter*) &child_iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeModelSortBase::convert_iter_to_child_iter (Gtk::TreeIter sorted_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* child_iter, ::GtkTreeIter* sorted_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_iter_to_child_iter;
  auto sorted_iter_to_c = gi::unwrap (sorted_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type child_iter_c;
  call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &child_iter_c), (::GtkTreeIter*) (sorted_iter_to_c));
  return gi::wrap ((::GtkTreeIter*) &child_iter_c, gi::transfer_none, gi::direction_out);
}

// GtkTreePath* gtk_tree_model_sort_convert_path_to_child_path (GtkTreeModelSort* tree_model_sort, GtkTreePath* sorted_path);
// ::GtkTreePath* gtk_tree_model_sort_convert_path_to_child_path (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* sorted_path);
Gtk::TreePath base::TreeModelSortBase::convert_path_to_child_path (Gtk::TreePath sorted_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* sorted_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_convert_path_to_child_path;
  auto sorted_path_to_c = gi::unwrap (sorted_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreePath*) (sorted_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreeModel* gtk_tree_model_sort_get_model (GtkTreeModelSort* tree_model);
// ::GtkTreeModel* gtk_tree_model_sort_get_model (::GtkTreeModelSort* tree_model);
Gtk::TreeModel base::TreeModelSortBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModelSort* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_model_sort_iter_is_valid (GtkTreeModelSort* tree_model_sort, GtkTreeIter* iter);
// gboolean gtk_tree_model_sort_iter_is_valid (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* iter);
bool base::TreeModelSortBase::iter_is_valid (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_iter_is_valid;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelSort*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_model_sort_reset_default_sort_func (GtkTreeModelSort* tree_model_sort);
// void gtk_tree_model_sort_reset_default_sort_func (::GtkTreeModelSort* tree_model_sort);
void base::TreeModelSortBase::reset_default_sort_func () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelSort* tree_model_sort);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_sort_reset_default_sort_func;
  call_wrap_v ((::GtkTreeModelSort*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelsort_extra_def_impl.hpp>)
#include <gtk/treemodelsort_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelsort_extra_impl.hpp>)
#include <gtk/treemodelsort_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeModelSortClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeModelSortClass *methods = (::GtkTreeModelSortClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
