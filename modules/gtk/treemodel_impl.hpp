// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODEL_IMPL_HPP_
#define _GI_GTK_TREEMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreeModel* gtk_tree_model_filter_new (GtkTreeModel* child_model, GtkTreePath* root);
// ::GtkTreeModel* gtk_tree_model_filter_new (::GtkTreeModel* child_model, ::GtkTreePath* root);
Gtk::TreeModel base::TreeModelBase::filter_new (Gtk::TreePath root) noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModel* child_model, ::GtkTreePath* root);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_new;
  auto root_to_c = gi::unwrap (root, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (root_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::TreeModel base::TreeModelBase::filter_new () noexcept
{
  typedef ::GtkTreeModel* (*call_wrap_t) (::GtkTreeModel* child_model, ::GtkTreePath* root);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_filter_new;
  auto root_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (root_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_model_foreach (GtkTreeModel* model, GtkTreeModelForeachFunc func, gpointer user_data);
// void gtk_tree_model_foreach (::GtkTreeModel* model, Gtk::TreeModelForeachFunc::cfunction_type func, void* user_data);
void base::TreeModelBase::foreach (Gtk::TreeModelForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* model, Gtk::TreeModelForeachFunc::cfunction_type func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (Gtk::TreeModelForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// void gtk_tree_model_get (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_get (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
// IGNORE; not introspectable, varargs not supported

// GType gtk_tree_model_get_column_type (GtkTreeModel* tree_model, gint index_);
// GType gtk_tree_model_get_column_type (::GtkTreeModel* tree_model, gint index_);
GType base::TreeModelBase::get_column_type (gint index_) noexcept
{
  typedef GType (*call_wrap_t) (::GtkTreeModel* tree_model, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_column_type;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (gint) (index__to_c));
  return _temp_ret;
}

// GtkTreeModelFlags gtk_tree_model_get_flags (GtkTreeModel* tree_model);
// ::GtkTreeModelFlags gtk_tree_model_get_flags (::GtkTreeModel* tree_model);
Gtk::TreeModelFlags base::TreeModelBase::get_flags () noexcept
{
  typedef ::GtkTreeModelFlags (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_flags;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_tree_model_get_iter (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path);
// gboolean gtk_tree_model_get_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
bool base::TreeModelBase::get_iter (Gtk::TreeIter & iter, Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreePath*) (path_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter (Gtk::TreePath path) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreePath*) (path_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_model_get_iter_first (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_get_iter_first (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool base::TreeModelBase::get_iter_first (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter_first;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter_first () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter_first;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel* tree_model, GtkTreeIter* iter, const gchar* path_string);
// gboolean gtk_tree_model_get_iter_from_string (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
bool base::TreeModelBase::get_iter_from_string (Gtk::TreeIter & iter, const std::string & path_string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter_from_string;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (const char*) (path_string_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::get_iter_from_string (const std::string & path_string) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_iter_from_string;
  auto path_string_to_c = gi::unwrap (path_string, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (const char*) (path_string_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gint gtk_tree_model_get_n_columns (GtkTreeModel* tree_model);
// gint gtk_tree_model_get_n_columns (::GtkTreeModel* tree_model);
gint base::TreeModelBase::get_n_columns () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_n_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreePath* gtk_tree_model_get_path (GtkTreeModel* tree_model, GtkTreeIter* iter);
// ::GtkTreePath* gtk_tree_model_get_path (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
Gtk::TreePath base::TreeModelBase::get_path (Gtk::TreeIter iter) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_path;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_tree_model_get_string_from_iter (GtkTreeModel* tree_model, GtkTreeIter* iter);
// char* gtk_tree_model_get_string_from_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
std::string base::TreeModelBase::get_string_from_iter (Gtk::TreeIter iter) noexcept
{
  typedef char* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_string_from_iter;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_model_get_valist (GtkTreeModel* tree_model, GtkTreeIter* iter, va_list var_args);
// void gtk_tree_model_get_valist (::GtkTreeModel* tree_model, ::GtkTreeIter* iter,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_model_get_value (GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value);
// void gtk_tree_model_get_value (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
void base::TreeModelBase::get_value (Gtk::TreeIter iter, gint column, GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_value;
  traits::unset_wrapper<GValue>::type value_c;
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) ((GValue*) &value_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}
GObject::Value base::TreeModelBase::get_value (Gtk::TreeIter iter, gint column) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_get_value;
  traits::unset_wrapper<GValue>::type value_c;
  auto column_to_c = column;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c), (gint) (column_to_c), (::GValue*) ((GValue*) &value_c));
  return gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_tree_model_iter_children (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent);
// gboolean gtk_tree_model_iter_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
bool base::TreeModelBase::iter_children (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_children;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::TreeModelBase::iter_children (Gtk::TreeIter & iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_children;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_children (Gtk::TreeIter parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_children;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_children () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_children;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_model_iter_has_child (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_has_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool base::TreeModelBase::iter_has_child (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_has_child;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gint gtk_tree_model_iter_n_children (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gint gtk_tree_model_iter_n_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
gint base::TreeModelBase::iter_n_children (Gtk::TreeIter iter) noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_n_children;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}
gint base::TreeModelBase::iter_n_children () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_n_children;
  auto iter_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_model_iter_next (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_next (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool base::TreeModelBase::iter_next (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_next;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_model_iter_nth_child (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n);
// gboolean gtk_tree_model_iter_nth_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
bool base::TreeModelBase::iter_nth_child (Gtk::TreeIter & iter, Gtk::TreeIter parent, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
bool base::TreeModelBase::iter_nth_child (Gtk::TreeIter & iter, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_nth_child (Gtk::TreeIter parent, gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_nth_child (gint n) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_nth_child;
  auto n_to_c = n;
  auto parent_to_c = nullptr;
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (parent_to_c), (gint) (n_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_model_iter_parent (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child);
// gboolean gtk_tree_model_iter_parent (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
bool base::TreeModelBase::iter_parent (Gtk::TreeIter & iter, Gtk::TreeIter child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_parent;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (child_to_c));
  iter = gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::TreeIter> base::TreeModelBase::iter_parent (Gtk::TreeIter child) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_parent;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  traits::unset_wrapper<::GtkTreeIter>::type iter_c;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) ((::GtkTreeIter*) &iter_c), (::GtkTreeIter*) (child_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkTreeIter*) &iter_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_tree_model_iter_previous (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_previous (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool base::TreeModelBase::iter_previous (Gtk::TreeIter iter) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_iter_previous;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void gtk_tree_model_ref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_ref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
void base::TreeModelBase::ref_node (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_ref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_changed (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_changed (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void base::TreeModelBase::row_changed (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_row_changed;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_deleted (GtkTreeModel* tree_model, GtkTreePath* path);
// void gtk_tree_model_row_deleted (::GtkTreeModel* tree_model, ::GtkTreePath* path);
void base::TreeModelBase::row_deleted (Gtk::TreePath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_row_deleted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void gtk_tree_model_row_has_child_toggled (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_has_child_toggled (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void base::TreeModelBase::row_has_child_toggled (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_row_has_child_toggled;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_row_inserted (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_inserted (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void base::TreeModelBase::row_inserted (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_row_inserted;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void gtk_tree_model_rows_reordered (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order);
// void gtk_tree_model_rows_reordered (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint new_order);
// IGNORE; not introspectable; shadowed-by rows_reordered_with_length

// void gtk_tree_model_rows_reordered_with_length (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order, gint length);
// void gtk_tree_model_rows_reordered_with_length (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
void base::TreeModelBase::rows_reordered (Gtk::TreePath path, Gtk::TreeIter iter, gint * new_order, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_rows_reordered_with_length;
  auto new_order_i = detail::make_list_unwrap_range (new_order, length, false);
  auto new_order_w = unwrap (new_order_i, gi::transfer_none, direction_in);
  auto new_order_to_c = new_order_w.gobj_(false);
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (gint*) (new_order_to_c), (gint) (new_order_w.size()));
}
void base::TreeModelBase::rows_reordered (Gtk::TreePath path, gint * new_order, gint length) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_rows_reordered_with_length;
  auto new_order_i = detail::make_list_unwrap_range (new_order, length, false);
  auto new_order_w = unwrap (new_order_i, gi::transfer_none, direction_in);
  auto new_order_to_c = new_order_w.gobj_(false);
  auto iter_to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c), (gint*) (new_order_to_c), (gint) (new_order_w.size()));
}

// void gtk_tree_model_unref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_unref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
void base::TreeModelBase::unref_node (Gtk::TreeIter iter) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_model_unref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}







} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_def_impl.hpp>)
#include <gtk/treemodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_impl.hpp>)
#include <gtk/treemodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void TreeModelIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkTreeModelIface *methods = (::GtkTreeModelIface *) interface_struct;
  (void) methods;

  methods->get_column_type = (decltype (methods->get_column_type)) detail::method_wrapper<self, GType (*) (gint index_), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_column_type_>;
  methods->get_flags = (decltype (methods->get_flags)) detail::method_wrapper<self, Gtk::TreeModelFlags (*) (), gi::transfer_none_t>::wrapper<&self::get_flags_>;
  methods->get_n_columns = (decltype (methods->get_n_columns)) detail::method_wrapper<self, gint (*) (), gi::transfer_none_t>::wrapper<&self::get_n_columns_>;
  methods->get_path = (decltype (methods->get_path)) detail::method_wrapper<self, Gtk::TreePath (*) (Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_path_>;
  methods->iter_has_child = (decltype (methods->iter_has_child)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::iter_has_child_>;
  methods->iter_n_children = (decltype (methods->iter_n_children)) detail::method_wrapper<self, gint (*) (Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::iter_n_children_>;
  methods->iter_next = (decltype (methods->iter_next)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::iter_next_>;
  methods->iter_previous = (decltype (methods->iter_previous)) detail::method_wrapper<self, bool (*) (Gtk::TreeIter iter), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::iter_previous_>;
  methods->ref_node = (decltype (methods->ref_node)) detail::method_wrapper<self, void (*) (Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::ref_node_>;
  methods->row_changed = (decltype (methods->row_changed)) detail::method_wrapper<self, void (*) (Gtk::TreePath path, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_changed_>;
  methods->row_deleted = (decltype (methods->row_deleted)) detail::method_wrapper<self, void (*) (Gtk::TreePath path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::row_deleted_>;
  methods->row_has_child_toggled = (decltype (methods->row_has_child_toggled)) detail::method_wrapper<self, void (*) (Gtk::TreePath path, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_has_child_toggled_>;
  methods->row_inserted = (decltype (methods->row_inserted)) detail::method_wrapper<self, void (*) (Gtk::TreePath path, Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::row_inserted_>;
  methods->unref_node = (decltype (methods->unref_node)) detail::method_wrapper<self, void (*) (Gtk::TreeIter iter), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::unref_node_>;
}

// GType TreeModel::get_column_type (GtkTreeModel* tree_model, gint index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model, gint index_);
GType TreeModelIfaceClassImpl::get_column_type_ (gint index_) noexcept
{
  if (!get_struct_()->get_column_type) return GType{};
  typedef GType (*call_wrap_t) (::GtkTreeModel* tree_model, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_column_type;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (gint) (index__to_c));
  return _temp_ret;
}

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model);
Gtk::TreeModelFlags TreeModelIfaceClassImpl::get_flags_ () noexcept
{
  if (!get_struct_()->get_flags) return Gtk::TreeModelFlags{};
  typedef ::GtkTreeModelFlags (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_flags;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
// SKIP; virtual-method out parameter not supported

// gint TreeModel::get_n_columns (GtkTreeModel* tree_model);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model);
gint TreeModelIfaceClassImpl::get_n_columns_ () noexcept
{
  if (!get_struct_()->get_n_columns) return gint{};
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_n_columns;
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()));
  return _temp_ret;
}

// GtkTreePath* TreeModel::get_path (GtkTreeModel* tree_model, GtkTreeIter* iter);
// ::GtkTreePath* TreeModel::get_path (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
Gtk::TreePath TreeModelIfaceClassImpl::get_path_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->get_path) return Gtk::TreePath{};
  typedef ::GtkTreePath* (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_path;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void TreeModel::get_value (GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value);
// void TreeModel::get_value (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool TreeModelIfaceClassImpl::iter_has_child_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->iter_has_child) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_has_child;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gint TreeModel::iter_n_children (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
gint TreeModelIfaceClassImpl::iter_n_children_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->iter_n_children) return gint{};
  typedef gint (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_n_children;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool TreeModelIfaceClassImpl::iter_next_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->iter_next) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_next;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
bool TreeModelIfaceClassImpl::iter_previous_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->iter_previous) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->iter_previous;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
  return _temp_ret;
}

// void TreeModel::ref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::ref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
void TreeModelIfaceClassImpl::ref_node_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->ref_node) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->ref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_changed (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_changed (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void TreeModelIfaceClassImpl::row_changed_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->row_changed) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_changed;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_deleted (GtkTreeModel* tree_model, GtkTreePath* path);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model, ::GtkTreePath* path);
void TreeModelIfaceClassImpl::row_deleted_ (Gtk::TreePath path) noexcept
{
  if (!get_struct_()->row_deleted) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_deleted;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c));
}

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void TreeModelIfaceClassImpl::row_has_child_toggled_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->row_has_child_toggled) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_has_child_toggled;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::row_inserted (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
void TreeModelIfaceClassImpl::row_inserted_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->row_inserted) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->row_inserted;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreePath*) (path_to_c), (::GtkTreeIter*) (iter_to_c));
}

// void TreeModel::unref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::unref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
void TreeModelIfaceClassImpl::unref_node_ (Gtk::TreeIter iter) noexcept
{
  if (!get_struct_()->unref_node) return ;
  typedef void (*call_wrap_t) (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unref_node;
  auto iter_to_c = gi::unwrap (iter, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkTreeModel*) (gobj_()), (::GtkTreeIter*) (iter_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
