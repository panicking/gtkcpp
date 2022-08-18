// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELFILTER_IMPL_HPP_
#define _GI_GTK_TREEMODELFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::TreeDragSource TreeModelFilterBase::interface_ (gi::interface_tag<Gtk::TreeDragSource>)
{ return gi::wrap ((Gtk::TreeDragSource::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeModelFilterBase::operator Gtk::TreeDragSource ()
{ return interface_ (gi::interface_tag<Gtk::TreeDragSource>()); }

Gtk::TreeModel TreeModelFilterBase::interface_ (gi::interface_tag<Gtk::TreeModel>)
{ return gi::wrap ((Gtk::TreeModel::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TreeModelFilterBase::operator Gtk::TreeModel ()
{ return interface_ (gi::interface_tag<Gtk::TreeModel>()); }

// void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter* filter);
// void gtk_tree_model_filter_clear_cache (::GtkTreeModelFilter* filter);
void base::TreeModelFilterBase::clear_cache () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_clear_cache;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
}

// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter* filter, GtkTreeIter* filter_iter, GtkTreeIter* child_iter);
// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
bool base::TreeModelFilterBase::convert_child_iter_to_iter (Gtk::TreeIter & filter_iter, Gtk::TreeIter child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type filter_iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &filter_iter_c), (::GtkTreeIter*) (child_iter_to_c));
  filter_iter = gi::wrap ((::GtkTreeIter*) &filter_iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelFilterBase::convert_child_iter_to_iter (Gtk::TreeIter child_iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_child_iter_to_iter;
  auto child_iter_to_c = gi::unwrap (child_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type filter_iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &filter_iter_c), (::GtkTreeIter*) (child_iter_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &filter_iter_c, gi::transfer_none, gi::direction_out));
}

// GtkTreePath* gtk_tree_model_filter_convert_child_path_to_path (GtkTreeModelFilter* filter, GtkTreePath* child_path);
// ::GtkTreePath* gtk_tree_model_filter_convert_child_path_to_path (::GtkTreeModelFilter* filter, ::GtkTreePath* child_path);
Gtk::TreePath base::TreeModelFilterBase::convert_child_path_to_path (Gtk::TreePath child_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreePath* child_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_child_path_to_path;
  auto child_path_to_c = gi::unwrap (child_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreePath*) (child_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_model_filter_convert_iter_to_child_iter (GtkTreeModelFilter* filter, GtkTreeIter* child_iter, GtkTreeIter* filter_iter);
// void gtk_tree_model_filter_convert_iter_to_child_iter (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
void base::TreeModelFilterBase::convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter filter_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_iter_to_child_iter;
  auto filter_iter_to_c = gi::unwrap (filter_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type child_iter_c;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &child_iter_c), (::GtkTreeIter*) (filter_iter_to_c));
  child_iter = gi::wrap ((::GtkTreeIter*) &child_iter_c, gi::transfer_none, gi::direction_out);
}
Gtk::TreeIter base::TreeModelFilterBase::convert_iter_to_child_iter (Gtk::TreeIter filter_iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_iter_to_child_iter;
  auto filter_iter_to_c = gi::unwrap (filter_iter, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type child_iter_c;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &child_iter_c), (::GtkTreeIter*) (filter_iter_to_c));
  return gi::wrap ((::GtkTreeIter*) &child_iter_c, gi::transfer_none, gi::direction_out);
}

// GtkTreePath* gtk_tree_model_filter_convert_path_to_child_path (GtkTreeModelFilter* filter, GtkTreePath* filter_path);
// ::GtkTreePath* gtk_tree_model_filter_convert_path_to_child_path (::GtkTreeModelFilter* filter, ::GtkTreePath* filter_path);
Gtk::TreePath base::TreeModelFilterBase::convert_path_to_child_path (Gtk::TreePath filter_path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModelFilter* filter, ::GtkTreePath* filter_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_convert_path_to_child_path;
  auto filter_path_to_c = gi::unwrap (filter_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreePath*) (filter_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreeModel* gtk_tree_model_filter_get_model (GtkTreeModelFilter* filter);
// ::GtkTreeModel* gtk_tree_model_filter_get_model (::GtkTreeModelFilter* filter);
Gtk::TreeModel base::TreeModelFilterBase::get_model () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_get_model;
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_tree_model_filter_refilter (GtkTreeModelFilter* filter);
// void gtk_tree_model_filter_refilter (::GtkTreeModelFilter* filter);
void base::TreeModelFilterBase::refilter () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_refilter;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()));
}

// void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter* filter, gint n_columns, GType* types, GtkTreeModelFilterModifyFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_model_filter_set_modify_func (::GtkTreeModelFilter* filter, gint n_columns, GType* types,  func, void* data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; func type  not supported

// void gtk_tree_model_filter_set_visible_column (GtkTreeModelFilter* filter, gint column);
// void gtk_tree_model_filter_set_visible_column (::GtkTreeModelFilter* filter, gint column);
void base::TreeModelFilterBase::set_visible_column (gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_set_visible_column;
  auto column_to_c = column;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (gint) (column_to_c));
}

// void gtk_tree_model_filter_set_visible_func (GtkTreeModelFilter* filter, GtkTreeModelFilterVisibleFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_model_filter_set_visible_func (::GtkTreeModelFilter* filter, Gtk::TreeModelFilterVisibleFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
void base::TreeModelFilterBase::set_visible_func (Gtk::TreeModelFilterVisibleFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* filter, Gtk::TreeModelFilterVisibleFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_set_visible_func;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (Gtk::TreeModelFilterVisibleFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_def_impl.hpp>)
#include <gtk/treemodelfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_impl.hpp>)
#include <gtk/treemodelfilter_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeModelFilterClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkTreeModelFilterClass *methods = (::GtkTreeModelFilterClass *) class_struct;
  (void) methods;

  methods->modify = (decltype (methods->modify)) detail::method_wrapper<self, void (*) (Gtk::TreeModel child_model, Gtk::TreeIter iter, GObject::Value value, gint column), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::modify_>;
  methods->visible = (decltype (methods->visible)) detail::method_wrapper<self, bool (*) (Gtk::TreeModel child_model, Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::visible_>;
}

// void TreeModelFilter::modify (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter, GValue* value, gint column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter, ::GValue* value, gint column);
void TreeModelFilterClass::modify_ (Gtk::TreeModel child_model, Gtk::TreeIter iter, GObject::Value value, gint column) noexcept
{
  if (!get_struct_()->modify) return ;
  typedef void (*call_wrap_t) (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter, ::GValue* value, gint column);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->modify;
  auto column_to_c = column;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto child_model_to_c = gi::unwrap (child_model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeModel*) (child_model_to_c), (::GtkTreeIter*) (iter_to_c), (::GValue*) (value_to_c), (gint) (column_to_c));
}

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter);
bool TreeModelFilterClass::visible_ (Gtk::TreeModel child_model, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->visible) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->visible;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto child_model_to_c = gi::unwrap (child_model, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModelFilter*) (gobj_()), (::GtkTreeModel*) (child_model_to_c), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
