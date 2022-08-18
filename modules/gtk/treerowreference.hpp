// AUTO-GENERATED

#ifndef _GI_GTK_TREEROWREFERENCE_HPP_
#define _GI_GTK_TREEROWREFERENCE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeModel;
class TreePath;

class TreeRowReference;

namespace base {


#define GI_GTK_TREEROWREFERENCE_BASE base::TreeRowReferenceBase
class TreeRowReferenceBase : public gi::detail::GBoxedWrapper<TreeRowReferenceBase, ::GtkTreeRowReference>
{
typedef gi::detail::GBoxedWrapper<TreeRowReferenceBase, ::GtkTreeRowReference> super_type;
public:

TreeRowReferenceBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_tree_row_reference_get_type(); } 

// GtkTreeRowReference* gtk_tree_row_reference_new (GtkTreeModel* model, GtkTreePath* path);
// ::GtkTreeRowReference* gtk_tree_row_reference_new (::GtkTreeModel* model, ::GtkTreePath* path);
static GI_INLINE_DECL Gtk::TreeRowReference new_ (Gtk::TreeModel model, Gtk::TreePath path) noexcept;

// GtkTreeRowReference* gtk_tree_row_reference_new_proxy (GObject* proxy, GtkTreeModel* model, GtkTreePath* path);
// ::GtkTreeRowReference* gtk_tree_row_reference_new_proxy (::GObject* proxy, ::GtkTreeModel* model, ::GtkTreePath* path);
static GI_INLINE_DECL Gtk::TreeRowReference new_proxy (GObject::Object proxy, Gtk::TreeModel model, Gtk::TreePath path) noexcept;

// GtkTreeRowReference* gtk_tree_row_reference_copy (GtkTreeRowReference* reference);
// ::GtkTreeRowReference* gtk_tree_row_reference_copy (::GtkTreeRowReference* reference);
GI_INLINE_DECL Gtk::TreeRowReference copy () noexcept;

// void gtk_tree_row_reference_free (GtkTreeRowReference* reference);
// void gtk_tree_row_reference_free (::GtkTreeRowReference* reference);
// IGNORE; marked ignore

// GtkTreeModel* gtk_tree_row_reference_get_model (GtkTreeRowReference* reference);
// ::GtkTreeModel* gtk_tree_row_reference_get_model (::GtkTreeRowReference* reference);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// GtkTreePath* gtk_tree_row_reference_get_path (GtkTreeRowReference* reference);
// ::GtkTreePath* gtk_tree_row_reference_get_path (::GtkTreeRowReference* reference);
GI_INLINE_DECL Gtk::TreePath get_path () noexcept;

// gboolean gtk_tree_row_reference_valid (GtkTreeRowReference* reference);
// gboolean gtk_tree_row_reference_valid (::GtkTreeRowReference* reference);
GI_INLINE_DECL bool valid () noexcept;

// void gtk_tree_row_reference_deleted (GObject* proxy, GtkTreePath* path);
// void gtk_tree_row_reference_deleted (::GObject* proxy, ::GtkTreePath* path);
static GI_INLINE_DECL void deleted (GObject::Object proxy, Gtk::TreePath path) noexcept;

// void gtk_tree_row_reference_inserted (GObject* proxy, GtkTreePath* path);
// void gtk_tree_row_reference_inserted (::GObject* proxy, ::GtkTreePath* path);
static GI_INLINE_DECL void inserted (GObject::Object proxy, Gtk::TreePath path) noexcept;

// void gtk_tree_row_reference_reordered (GObject* proxy, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_row_reference_reordered (::GObject* proxy, ::GtkTreePath* path, ::GtkTreeIter* iter);
// IGNORE; not introspectable, inconsistent array info

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra_def.hpp>)
#include <gtk/treerowreference_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treerowreference_extra.hpp>)
#include <gtk/treerowreference_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeRowReference : public GI_GTK_TREEROWREFERENCE_BASE
{ typedef GI_GTK_TREEROWREFERENCE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeRowReference>
{ typedef Gtk::TreeRowReference type; }; 

} // namespace repository

} // namespace gi

#endif
