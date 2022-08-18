// AUTO-GENERATED

#ifndef _GI_GLIB_TREE_HPP_
#define _GI_GLIB_TREE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Tree;

namespace base {


#define GI_GLIB_TREE_BASE base::TreeBase
class TreeBase : public gi::detail::GBoxedWrapper<TreeBase, ::GTree>
{
typedef gi::detail::GBoxedWrapper<TreeBase, ::GTree> super_type;
public:

TreeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_tree_get_type(); } 

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
GI_INLINE_DECL void destroy () noexcept;

// void g_tree_foreach (GTree* tree, GTraverseFunc func, gpointer user_data);
// void g_tree_foreach (::GTree* tree,  func, void* user_data);
// IGNORE; not introspectable, func type  not supported

// void g_tree_foreach_node (GTree* tree, GTraverseNodeFunc func, gpointer user_data);
// void g_tree_foreach_node (::GTree* tree,  func, void* user_data);
// IGNORE; not introspectable, func type  not supported

// gint g_tree_height (GTree* tree);
// gint g_tree_height (::GTree* tree);
GI_INLINE_DECL gint height () noexcept;

// void g_tree_insert (GTree* tree, gpointer key, gpointer value);
// void g_tree_insert (::GTree* tree, void* key, void* value);
GI_INLINE_DECL void insert (void* key, void* value) noexcept;

// GTreeNode* g_tree_insert_node (GTree* tree, gpointer key, gpointer value);
//  g_tree_insert_node (::GTree* tree, void* key, void* value);
// SKIP;  type  not supported

// gpointer g_tree_lookup (GTree* tree, gconstpointer key);
// void* g_tree_lookup (::GTree* tree, const void* key);
GI_INLINE_DECL gpointer lookup (const void* key) noexcept;

// gboolean g_tree_lookup_extended (GTree* tree, gconstpointer lookup_key, gpointer* orig_key, gpointer* value);
// gboolean g_tree_lookup_extended (::GTree* tree, const void* lookup_key, void** orig_key, void** value);
GI_INLINE_DECL bool lookup_extended (const void* lookup_key, gpointer * orig_key = nullptr, gpointer * value = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gpointer, gpointer> lookup_extended (const void* lookup_key) noexcept;

// GTreeNode* g_tree_lookup_node (GTree* tree, gconstpointer key);
//  g_tree_lookup_node (::GTree* tree, const void* key);
// SKIP;  type  not supported

// GTreeNode* g_tree_lower_bound (GTree* tree, gconstpointer key);
//  g_tree_lower_bound (::GTree* tree, const void* key);
// SKIP;  type  not supported

// gint g_tree_nnodes (GTree* tree);
// gint g_tree_nnodes (::GTree* tree);
GI_INLINE_DECL gint nnodes () noexcept;

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
GI_INLINE_DECL bool remove (const void* key) noexcept;

// void g_tree_remove_all (GTree* tree);
// void g_tree_remove_all (::GTree* tree);
GI_INLINE_DECL void remove_all () noexcept;

// void g_tree_replace (GTree* tree, gpointer key, gpointer value);
// void g_tree_replace (::GTree* tree, void* key, void* value);
GI_INLINE_DECL void replace (void* key, void* value) noexcept;

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
GI_INLINE_DECL bool steal (const void* key) noexcept;

// void g_tree_traverse (GTree* tree, GTraverseFunc traverse_func, GTraverseType traverse_type, gpointer user_data);
// void g_tree_traverse (::GTree* tree,  traverse_func, ::GTraverseType traverse_type, void* user_data);
// IGNORE; deprecated

// void g_tree_unref (GTree* tree);
// void g_tree_unref (::GTree* tree);
// IGNORE; marked ignore

// GTreeNode* g_tree_upper_bound (GTree* tree, gconstpointer key);
//  g_tree_upper_bound (::GTree* tree, const void* key);
// SKIP;  type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/tree_extra_def.hpp>)
#include <glib/tree_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/tree_extra.hpp>)
#include <glib/tree_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Tree : public GI_GLIB_TREE_BASE
{ typedef GI_GLIB_TREE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GTree>
{ typedef GLib::Tree type; }; 

} // namespace repository

} // namespace gi

#endif
