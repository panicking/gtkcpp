// AUTO-GENERATED

#ifndef _GI_GTK_TREEPATH_IMPL_HPP_
#define _GI_GTK_TREEPATH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkTreePath* gtk_tree_path_new ();
// ::GtkTreePath* gtk_tree_path_new ();
Gtk::TreePath base::TreePathBase::new_ () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreePath* gtk_tree_path_new_first ();
// ::GtkTreePath* gtk_tree_path_new_first ();
Gtk::TreePath base::TreePathBase::new_first () noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_first;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreePath* gtk_tree_path_new_from_indices (gint first_index);
// ::GtkTreePath* gtk_tree_path_new_from_indices (gint first_index);
// IGNORE; not introspectable; shadowed-by new_from_indicesv, varargs not supported

// GtkTreePath* gtk_tree_path_new_from_indicesv (gint* indices, gsize length);
// ::GtkTreePath* gtk_tree_path_new_from_indicesv (gint* indices, gsize length);
Gtk::TreePath base::TreePathBase::new_from_indices (gint * indices, gsize length) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (gint* indices, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_from_indicesv;
  auto indices_i = detail::make_list_unwrap_range (indices, length, false);
  auto indices_w = unwrap (indices_i, gi::transfer_none, direction_in);
  auto indices_to_c = indices_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((gint*) (indices_to_c), (gsize) (indices_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkTreePath* gtk_tree_path_new_from_string (const gchar* path);
// ::GtkTreePath* gtk_tree_path_new_from_string (const char* path);
Gtk::TreePath base::TreePathBase::new_from_string (const std::string & path) noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_new_from_string;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_path_append_index (GtkTreePath* path, gint index_);
// void gtk_tree_path_append_index (::GtkTreePath* path, gint index_);
void base::TreePathBase::append_index (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_append_index;
  auto index__to_c = index_;
  call_wrap_v ((::GtkTreePath*) (gobj_()), (gint) (index__to_c));
}

// gint gtk_tree_path_compare (const GtkTreePath* a, const GtkTreePath* b);
// gint gtk_tree_path_compare (const ::GtkTreePath* a, const ::GtkTreePath* b);
gint base::TreePathBase::compare (const Gtk::TreePath & b) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkTreePath* a, const ::GtkTreePath* b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_compare;
  auto b_to_c = gi::unwrap (b, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GtkTreePath*) (gobj_()), (const ::GtkTreePath*) (b_to_c));
  return _temp_ret;
}

// GtkTreePath* gtk_tree_path_copy (const GtkTreePath* path);
// ::GtkTreePath* gtk_tree_path_copy (const ::GtkTreePath* path);
Gtk::TreePath base::TreePathBase::copy () const noexcept
{
  typedef ::GtkTreePath* (*call_wrap_t) (const ::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_copy;
  auto _temp_ret = call_wrap_v ((const ::GtkTreePath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_tree_path_down (GtkTreePath* path);
// void gtk_tree_path_down (::GtkTreePath* path);
void base::TreePathBase::down () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_down;
  call_wrap_v ((::GtkTreePath*) (gobj_()));
}

// void gtk_tree_path_free (GtkTreePath* path);
// void gtk_tree_path_free (::GtkTreePath* path);
// IGNORE; marked ignore

// gint gtk_tree_path_get_depth (GtkTreePath* path);
// gint gtk_tree_path_get_depth (::GtkTreePath* path);
gint base::TreePathBase::get_depth () noexcept
{
  typedef gint (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_get_depth;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}

// gint* gtk_tree_path_get_indices (GtkTreePath* path);
// gint gtk_tree_path_get_indices (::GtkTreePath* path);
// IGNORE; not introspectable; shadowed-by get_indices_with_depth

// gint* gtk_tree_path_get_indices_with_depth (GtkTreePath* path, gint* depth);
// gint* gtk_tree_path_get_indices_with_depth (::GtkTreePath* path, gint* depth);
std::vector<gint> base::TreePathBase::get_indices () noexcept
{
  typedef gint* (*call_wrap_t) (::GtkTreePath* path, gint* depth);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_get_indices_with_depth;
  gint depth;
  std::vector<gint> _temp_ret;
  auto _ret_o = call_wrap_v ((::GtkTreePath*) (gobj_()), (gint*) (&depth));
  _temp_ret.resize(depth);
  detail::wrap_array (_ret_o, gi::transfer_none, depth, _temp_ret.data());
  return _temp_ret;
}

// gboolean gtk_tree_path_is_ancestor (GtkTreePath* path, GtkTreePath* descendant);
// gboolean gtk_tree_path_is_ancestor (::GtkTreePath* path, ::GtkTreePath* descendant);
bool base::TreePathBase::is_ancestor (Gtk::TreePath descendant) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path, ::GtkTreePath* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_is_ancestor;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()), (::GtkTreePath*) (descendant_to_c));
  return _temp_ret;
}

// gboolean gtk_tree_path_is_descendant (GtkTreePath* path, GtkTreePath* ancestor);
// gboolean gtk_tree_path_is_descendant (::GtkTreePath* path, ::GtkTreePath* ancestor);
bool base::TreePathBase::is_descendant (Gtk::TreePath ancestor) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path, ::GtkTreePath* ancestor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_is_descendant;
  auto ancestor_to_c = gi::unwrap (ancestor, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()), (::GtkTreePath*) (ancestor_to_c));
  return _temp_ret;
}

// void gtk_tree_path_next (GtkTreePath* path);
// void gtk_tree_path_next (::GtkTreePath* path);
void base::TreePathBase::next () noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_next;
  call_wrap_v ((::GtkTreePath*) (gobj_()));
}

// void gtk_tree_path_prepend_index (GtkTreePath* path, gint index_);
// void gtk_tree_path_prepend_index (::GtkTreePath* path, gint index_);
void base::TreePathBase::prepend_index (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::GtkTreePath* path, gint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_prepend_index;
  auto index__to_c = index_;
  call_wrap_v ((::GtkTreePath*) (gobj_()), (gint) (index__to_c));
}

// gboolean gtk_tree_path_prev (GtkTreePath* path);
// gboolean gtk_tree_path_prev (::GtkTreePath* path);
bool base::TreePathBase::prev () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_prev;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_tree_path_to_string (GtkTreePath* path);
// char* gtk_tree_path_to_string (::GtkTreePath* path);
std::string base::TreePathBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_to_string;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_tree_path_up (GtkTreePath* path);
// gboolean gtk_tree_path_up (::GtkTreePath* path);
bool base::TreePathBase::up () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkTreePath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tree_path_up;
  auto _temp_ret = call_wrap_v ((::GtkTreePath*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_def_impl.hpp>)
#include <gtk/treepath_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_impl.hpp>)
#include <gtk/treepath_extra_impl.hpp>
#endif
#endif

#endif
