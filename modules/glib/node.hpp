// AUTO-GENERATED

#ifndef _GI_GLIB_NODE_HPP_
#define _GI_GLIB_NODE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Node;

namespace base {


#define GI_GLIB_NODE_BASE base::NodeBase
class NodeBase : public gi::detail::CBoxedWrapper<NodeBase, ::GNode>
{
typedef gi::detail::CBoxedWrapper<NodeBase, ::GNode> super_type;
public:

NodeBase (std::nullptr_t = nullptr) : super_type() {}

// ::GNode* Node::next (const ::GNode* obj);
// ::GNode* Node::next (const ::GNode* obj);
GI_INLINE_DECL GLib::Node next_ () const noexcept;

// ::GNode* Node::prev (const ::GNode* obj);
// ::GNode* Node::prev (const ::GNode* obj);
GI_INLINE_DECL GLib::Node prev_ () const noexcept;

// ::GNode* Node::parent (const ::GNode* obj);
// ::GNode* Node::parent (const ::GNode* obj);
GI_INLINE_DECL GLib::Node parent_ () const noexcept;

// ::GNode* Node::children (const ::GNode* obj);
// ::GNode* Node::children (const ::GNode* obj);
GI_INLINE_DECL GLib::Node children_ () const noexcept;

// gint g_node_child_index (GNode* node, gpointer data);
// gint g_node_child_index (::GNode* node, void* data);
GI_INLINE_DECL gint child_index (void* data) noexcept;

// gint g_node_child_position (GNode* node, GNode* child);
// gint g_node_child_position (::GNode* node, ::GNode* child);
GI_INLINE_DECL gint child_position (GLib::Node child) noexcept;

// void g_node_children_foreach (GNode* node, GTraverseFlags flags, GNodeForeachFunc func, gpointer data);
// void g_node_children_foreach (::GNode* node, ::GTraverseFlags flags,  func, void* data);
// IGNORE; not introspectable, func type  not supported

// FAILURE on g_node_copy; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_copy_deep; No such node (<xmlattr>.transfer-ownership)
// guint g_node_depth (GNode* node);
// guint g_node_depth (::GNode* node);
GI_INLINE_DECL guint depth () noexcept;

// void g_node_destroy (GNode* root);
// void g_node_destroy (::GNode* root);
GI_INLINE_DECL void destroy () noexcept;

// FAILURE on g_node_find; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_find_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_first_sibling; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_get_root; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_after; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_insert_before; No such node (<xmlattr>.transfer-ownership)
// gboolean g_node_is_ancestor (GNode* node, GNode* descendant);
// gboolean g_node_is_ancestor (::GNode* node, ::GNode* descendant);
GI_INLINE_DECL bool is_ancestor (GLib::Node descendant) noexcept;

// FAILURE on g_node_last_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_last_sibling; No such node (<xmlattr>.transfer-ownership)
// guint g_node_max_height (GNode* root);
// guint g_node_max_height (::GNode* root);
GI_INLINE_DECL guint max_height () noexcept;

// guint g_node_n_children (GNode* node);
// guint g_node_n_children (::GNode* node);
GI_INLINE_DECL guint n_children () noexcept;

// guint g_node_n_nodes (GNode* root, GTraverseFlags flags);
// guint g_node_n_nodes (::GNode* root, ::GTraverseFlags flags);
GI_INLINE_DECL guint n_nodes (GLib::TraverseFlags flags) noexcept;

// FAILURE on g_node_nth_child; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_node_prepend; No such node (<xmlattr>.transfer-ownership)
// void g_node_reverse_children (GNode* node);
// void g_node_reverse_children (::GNode* node);
GI_INLINE_DECL void reverse_children () noexcept;

// void g_node_traverse (GNode* root, GTraverseType order, GTraverseFlags flags, gint max_depth, GNodeTraverseFunc func, gpointer data);
// void g_node_traverse (::GNode* root, ::GTraverseType order, ::GTraverseFlags flags, gint max_depth,  func, void* data);
// IGNORE; not introspectable, func type  not supported

// void g_node_unlink (GNode* node);
// void g_node_unlink (::GNode* node);
GI_INLINE_DECL void unlink () noexcept;

// FAILURE on g_node_new; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/node_extra_def.hpp>)
#include <glib/node_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/node_extra.hpp>)
#include <glib/node_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Node : public GI_GLIB_NODE_BASE
{ typedef GI_GLIB_NODE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GNode>
{ typedef GLib::Node type; }; 

} // namespace repository

} // namespace gi

#endif
