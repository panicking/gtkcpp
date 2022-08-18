// AUTO-GENERATED

#ifndef _GI_GTK_TREEROWREFERENCE_IMPL_HPP_
#define _GI_GTK_TREEROWREFERENCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreeRowReference* gtk_tree_row_reference_new (GtkTreeModel* model, GtkTreePath* path);
// ::GtkTreeRowReference* gtk_tree_row_reference_new (::GtkTreeModel* model, ::GtkTreePath* path);
Gtk::TreeRowReference base::TreeRowReferenceBase::new_ (Gtk::TreeModel model, Gtk::TreePath path) noexcept
{
  typedef ::GtkTreeRowReference* (*call_wrap_t) (::GtkTreeModel* model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_new;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (model_to_c), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreeRowReference* gtk_tree_row_reference_new_proxy (GObject* proxy, GtkTreeModel* model, GtkTreePath* path);
// ::GtkTreeRowReference* gtk_tree_row_reference_new_proxy (::GObject* proxy, ::GtkTreeModel* model, ::GtkTreePath* path);
Gtk::TreeRowReference base::TreeRowReferenceBase::new_proxy (GObject::Object proxy, Gtk::TreeModel model, Gtk::TreePath path) noexcept
{
  typedef ::GtkTreeRowReference* (*call_wrap_t) (::GObject* proxy, ::GtkTreeModel* model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_new_proxy;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto model_to_c = gi::unwrap (model, gi::transfer_none, gi::direction_in);
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (proxy_to_c), (::GtkTreeModel*) (model_to_c), (::GtkTreePath*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreeRowReference* gtk_tree_row_reference_copy (GtkTreeRowReference* reference);
// ::GtkTreeRowReference* gtk_tree_row_reference_copy (::GtkTreeRowReference* reference);
Gtk::TreeRowReference base::TreeRowReferenceBase::copy () noexcept
{
  typedef ::GtkTreeRowReference* (*call_wrap_t) (::GtkTreeRowReference* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_copy;
  auto _temp_ret = call_wrap_v ((::GtkTreeRowReference*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_row_reference_free (GtkTreeRowReference* reference);
// void gtk_tree_row_reference_free (::GtkTreeRowReference* reference);
// IGNORE; marked ignore

// GtkTreeModel* gtk_tree_row_reference_get_model (GtkTreeRowReference* reference);
// ::GtkTreeModel* gtk_tree_row_reference_get_model (::GtkTreeRowReference* reference);
Gtk::TreeModel base::TreeRowReferenceBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeRowReference* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeRowReference*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkTreePath* gtk_tree_row_reference_get_path (GtkTreeRowReference* reference);
// ::GtkTreePath* gtk_tree_row_reference_get_path (::GtkTreeRowReference* reference);
Gtk::TreePath base::TreeRowReferenceBase::get_path () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeRowReference* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_get_path;
  auto _temp_ret = call_wrap_v ((::GtkTreeRowReference*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_tree_row_reference_valid (GtkTreeRowReference* reference);
// gboolean gtk_tree_row_reference_valid (::GtkTreeRowReference* reference);
bool base::TreeRowReferenceBase::valid () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeRowReference* reference);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_valid;
  auto _temp_ret = call_wrap_v ((::GtkTreeRowReference*) (gobj_()));
  return _temp_ret;
}

// void gtk_tree_row_reference_deleted (GObject* proxy, GtkTreePath* path);
// void gtk_tree_row_reference_deleted (::GObject* proxy, ::GtkTreePath* path);
void base::TreeRowReferenceBase::deleted (GObject::Object proxy, Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GObject* proxy, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_deleted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (proxy_to_c), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_row_reference_inserted (GObject* proxy, GtkTreePath* path);
// void gtk_tree_row_reference_inserted (::GObject* proxy, ::GtkTreePath* path);
void base::TreeRowReferenceBase::inserted (GObject::Object proxy, Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GObject* proxy, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_row_reference_inserted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto proxy_to_c = gi::unwrap (proxy, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (proxy_to_c), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_row_reference_reordered (GObject* proxy, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_row_reference_reordered (::GObject* proxy, ::GtkTreePath* path, ::GtkTreeIter* iter);
// IGNORE; not introspectable, inconsistent array info


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra_def_impl.hpp>)
#include <gtk/treerowreference_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra_impl.hpp>)
#include <gtk/treerowreference_extra_impl.hpp>
#endif
#endif

#endif
