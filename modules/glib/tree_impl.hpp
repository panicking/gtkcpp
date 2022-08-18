// AUTO-GENERATED

#ifndef _GI_GLIB_TREE_IMPL_HPP_
#define _GI_GLIB_TREE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GTree* g_tree_new (GCompareFunc key_compare_func);
// ::GTree* g_tree_new ( key_compare_func);
// IGNORE; not introspectable, key_compare_func type  not supported

// GTree* g_tree_new_full (GCompareDataFunc key_compare_func, gpointer key_compare_data, GDestroyNotify key_destroy_func, GDestroyNotify value_destroy_func);
// ::GTree* g_tree_new_full (GLib::CompareDataFunc::cfunction_type key_compare_func, void* key_compare_data, GLib::DestroyNotify::cfunction_type key_destroy_func, GLib::DestroyNotify::cfunction_type value_destroy_func);
// SKIP; callback misses closure info

// GTree* g_tree_new_with_data (GCompareDataFunc key_compare_func, gpointer key_compare_data);
// ::GTree* g_tree_new_with_data (GLib::CompareDataFunc::cfunction_type key_compare_func, void* key_compare_data);
// IGNORE; not introspectable, callback misses scope info

// void g_tree_destroy (GTree* tree);
// void g_tree_destroy (::GTree* tree);
void base::TreeBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_destroy;
  call_wrap_v ((::GTree*) (gobj_()));
}

// void g_tree_foreach (GTree* tree, GTraverseFunc func, gpointer user_data);
// void g_tree_foreach (::GTree* tree,  func, void* user_data);
// IGNORE; not introspectable, func type  not supported

// void g_tree_foreach_node (GTree* tree, GTraverseNodeFunc func, gpointer user_data);
// void g_tree_foreach_node (::GTree* tree,  func, void* user_data);
// IGNORE; not introspectable, func type  not supported

// gint g_tree_height (GTree* tree);
// gint g_tree_height (::GTree* tree);
gint base::TreeBase::height () noexcept
{
  typedef gint (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_height;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()));
  return _temp_ret;
}

// void g_tree_insert (GTree* tree, gpointer key, gpointer value);
// void g_tree_insert (::GTree* tree, void* key, void* value);
void base::TreeBase::insert (void* key, void* value) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, void* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_insert;
  auto value_to_c = value;
  auto key_to_c = key;
  call_wrap_v ((::GTree*) (gobj_()), (void*) (key_to_c), (void*) (value_to_c));
}

// GTreeNode* g_tree_insert_node (GTree* tree, gpointer key, gpointer value);
//  g_tree_insert_node (::GTree* tree, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_lookup (GTree* tree, gconstpointer key);
// void* g_tree_lookup (::GTree* tree, const void* key);
gpointer base::TreeBase::lookup (const void* key) noexcept
{
  typedef void* (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_lookup;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// gboolean g_tree_lookup_extended (GTree* tree, gconstpointer lookup_key, gpointer* orig_key, gpointer* value);
// gboolean g_tree_lookup_extended (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
bool base::TreeBase::lookup_extended (const void* lookup_key, gpointer * orig_key, gpointer * value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_lookup_extended;
  void* value_o {};
  void* orig_key_o {};
  auto lookup_key_to_c = lookup_key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (lookup_key_to_c), (void**) (orig_key ? &orig_key_o : nullptr), (void**) (value ? &value_o : nullptr));
  if (value) *value = value_o;
  if (orig_key) *orig_key = orig_key_o;
  return _temp_ret;
}
std::tuple<bool, gpointer, gpointer> base::TreeBase::lookup_extended (const void* lookup_key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_lookup_extended;
  void* value_o {};
  void* orig_key_o {};
  auto lookup_key_to_c = lookup_key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (lookup_key_to_c), (void**) (&orig_key_o), (void**) (&value_o));
  return std::make_tuple (_temp_ret, orig_key_o, value_o);
}

// GTreeNode* g_tree_lookup_node (GTree* tree, gconstpointer key);
//  g_tree_lookup_node (::GTree* tree, const void* key);
// SKIP;  type  not supported

// GTreeNode* g_tree_lower_bound (GTree* tree, gconstpointer key);
//  g_tree_lower_bound (::GTree* tree, const void* key);
// SKIP;  type  not supported

// gint g_tree_nnodes (GTree* tree);
// gint g_tree_nnodes (::GTree* tree);
gint base::TreeBase::nnodes () noexcept
{
  typedef gint (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_nnodes;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()));
  return _temp_ret;
}

// GTreeNode* g_tree_node_first (GTree* tree);
//  g_tree_node_first (::GTree* tree);
// SKIP;  type  not supported

// GTreeNode* g_tree_node_last (GTree* tree);
//  g_tree_node_last (::GTree* tree);
// SKIP;  type  not supported

// GTree* g_tree_ref (GTree* tree);
// ::GTree* g_tree_ref (::GTree* tree);
// IGNORE; marked ignore

// gboolean g_tree_remove (GTree* tree, gconstpointer key);
// gboolean g_tree_remove (::GTree* tree, const void* key);
bool base::TreeBase::remove (const void* key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_remove;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// void g_tree_remove_all (GTree* tree);
// void g_tree_remove_all (::GTree* tree);
void base::TreeBase::remove_all () noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_remove_all;
  call_wrap_v ((::GTree*) (gobj_()));
}

// void g_tree_replace (GTree* tree, gpointer key, gpointer value);
// void g_tree_replace (::GTree* tree, void* key, void* value);
void base::TreeBase::replace (void* key, void* value) noexcept
{
  typedef void (*call_wrap_t) (::GTree* tree, void* key, void* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_replace;
  auto value_to_c = value;
  auto key_to_c = key;
  call_wrap_v ((::GTree*) (gobj_()), (void*) (key_to_c), (void*) (value_to_c));
}

// GTreeNode* g_tree_replace_node (GTree* tree, gpointer key, gpointer value);
//  g_tree_replace_node (::GTree* tree, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_search (GTree* tree, GCompareFunc search_func, gconstpointer user_data);
// void* g_tree_search (::GTree* tree,  search_func, const void* user_data);
// IGNORE; not introspectable, search_func type  not supported

// GTreeNode* g_tree_search_node (GTree* tree, GCompareFunc search_func, gconstpointer user_data);
//  g_tree_search_node (::GTree* tree,  search_func, const void* user_data);
// IGNORE; not introspectable, search_func type  not supported,  type  not supported

// gboolean g_tree_steal (GTree* tree, gconstpointer key);
// gboolean g_tree_steal (::GTree* tree, const void* key);
bool base::TreeBase::steal (const void* key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTree* tree, const void* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_tree_steal;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GTree*) (gobj_()), (const void*) (key_to_c));
  return _temp_ret;
}

// void g_tree_traverse (GTree* tree, GTraverseFunc traverse_func, GTraverseType traverse_type, gpointer user_data);
// void g_tree_traverse (::GTree* tree,  traverse_func, ::GTraverseType traverse_type, void* user_data);
// IGNORE; deprecated

// void g_tree_unref (GTree* tree);
// void g_tree_unref (::GTree* tree);
// IGNORE; marked ignore

// GTreeNode* g_tree_upper_bound (GTree* tree, gconstpointer key);
//  g_tree_upper_bound (::GTree* tree, const void* key);
// SKIP;  type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/tree_extra_def_impl.hpp>)
#include <glib/tree_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/tree_extra_impl.hpp>)
#include <glib/tree_extra_impl.hpp>
#endif
#endif

#endif
