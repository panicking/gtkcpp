// AUTO-GENERATED

#ifndef _GI_GTK_TREEPATH_HPP_
#define _GI_GTK_TREEPATH_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TreePath;

namespace base {


#define GI_GTK_TREEPATH_BASE base::TreePathBase
class TreePathBase : public gi::detail::GBoxedWrapper<TreePathBase, ::GtkTreePath>
{
typedef gi::detail::GBoxedWrapper<TreePathBase, ::GtkTreePath> super_type;
public:

TreePathBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_tree_path_get_type(); } 

// GtkTreePath* gtk_tree_path_new ();
// ::GtkTreePath* gtk_tree_path_new ();
static GI_INLINE_DECL Gtk::TreePath new_ () noexcept;

// GtkTreePath* gtk_tree_path_new_first ();
// ::GtkTreePath* gtk_tree_path_new_first ();
static GI_INLINE_DECL Gtk::TreePath new_first () noexcept;

// GtkTreePath* gtk_tree_path_new_from_indices (gint first_index);
// ::GtkTreePath* gtk_tree_path_new_from_indices (gint first_index);
// IGNORE; not introspectable; shadowed-by new_from_indicesv, varargs not supported

// GtkTreePath* gtk_tree_path_new_from_indicesv (gint* indices, gsize length);
// ::GtkTreePath* gtk_tree_path_new_from_indicesv (gint* indices, gsize length);
static GI_INLINE_DECL Gtk::TreePath new_from_indices (gint * indices, gsize length) noexcept;

// GtkTreePath* gtk_tree_path_new_from_string (const gchar* path);
// ::GtkTreePath* gtk_tree_path_new_from_string (const char* path);
static GI_INLINE_DECL Gtk::TreePath new_from_string (const std::string & path) noexcept;

// void gtk_tree_path_append_index (GtkTreePath* path, gint index_);
// void gtk_tree_path_append_index (::GtkTreePath* path, gint index_);
GI_INLINE_DECL void append_index (gint index_) noexcept;

// gint gtk_tree_path_compare (const GtkTreePath* a, const GtkTreePath* b);
// gint gtk_tree_path_compare (const ::GtkTreePath* a, const ::GtkTreePath* b);
GI_INLINE_DECL gint compare (const Gtk::TreePath & b) const noexcept;

// GtkTreePath* gtk_tree_path_copy (const GtkTreePath* path);
// ::GtkTreePath* gtk_tree_path_copy (const ::GtkTreePath* path);
GI_INLINE_DECL Gtk::TreePath copy () const noexcept;

// void gtk_tree_path_down (GtkTreePath* path);
// void gtk_tree_path_down (::GtkTreePath* path);
GI_INLINE_DECL void down () noexcept;

// void gtk_tree_path_free (GtkTreePath* path);
// void gtk_tree_path_free (::GtkTreePath* path);
// IGNORE; marked ignore

// gint gtk_tree_path_get_depth (GtkTreePath* path);
// gint gtk_tree_path_get_depth (::GtkTreePath* path);
GI_INLINE_DECL gint get_depth () noexcept;

// gint* gtk_tree_path_get_indices (GtkTreePath* path);
// gint gtk_tree_path_get_indices (::GtkTreePath* path);
// IGNORE; not introspectable; shadowed-by get_indices_with_depth

// gint* gtk_tree_path_get_indices_with_depth (GtkTreePath* path, gint* depth);
// gint* gtk_tree_path_get_indices_with_depth (::GtkTreePath* path, gint* depth);
GI_INLINE_DECL std::vector<gint> get_indices () noexcept;

// gboolean gtk_tree_path_is_ancestor (GtkTreePath* path, GtkTreePath* descendant);
// gboolean gtk_tree_path_is_ancestor (::GtkTreePath* path, ::GtkTreePath* descendant);
GI_INLINE_DECL bool is_ancestor (Gtk::TreePath descendant) noexcept;

// gboolean gtk_tree_path_is_descendant (GtkTreePath* path, GtkTreePath* ancestor);
// gboolean gtk_tree_path_is_descendant (::GtkTreePath* path, ::GtkTreePath* ancestor);
GI_INLINE_DECL bool is_descendant (Gtk::TreePath ancestor) noexcept;

// void gtk_tree_path_next (GtkTreePath* path);
// void gtk_tree_path_next (::GtkTreePath* path);
GI_INLINE_DECL void next () noexcept;

// void gtk_tree_path_prepend_index (GtkTreePath* path, gint index_);
// void gtk_tree_path_prepend_index (::GtkTreePath* path, gint index_);
GI_INLINE_DECL void prepend_index (gint index_) noexcept;

// gboolean gtk_tree_path_prev (GtkTreePath* path);
// gboolean gtk_tree_path_prev (::GtkTreePath* path);
GI_INLINE_DECL bool prev () noexcept;

// gchar* gtk_tree_path_to_string (GtkTreePath* path);
// char* gtk_tree_path_to_string (::GtkTreePath* path);
GI_INLINE_DECL std::string to_string () noexcept;

// gboolean gtk_tree_path_up (GtkTreePath* path);
// gboolean gtk_tree_path_up (::GtkTreePath* path);
GI_INLINE_DECL bool up () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra_def.hpp>)
#include <gtk/treepath_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treepath_extra.hpp>)
#include <gtk/treepath_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreePath : public GI_GTK_TREEPATH_BASE
{ typedef GI_GTK_TREEPATH_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreePath>
{ typedef Gtk::TreePath type; }; 

} // namespace repository

} // namespace gi

#endif
