// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODEL_HPP_
#define _GI_GTK_TREEMODEL_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreePath;

class TreeModel;

namespace base {


#define GI_GTK_TREEMODEL_BASE base::TreeModelBase
class TreeModelBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeModel BaseObjectType;

TreeModelBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_model_get_type(); } 

// GtkTreeModel* gtk_tree_model_filter_new (GtkTreeModel* child_model, GtkTreePath* root);
// ::GtkTreeModel* gtk_tree_model_filter_new (::GtkTreeModel* child_model, ::GtkTreePath* root);
GI_INLINE_DECL Gtk::TreeModel filter_new (Gtk::TreePath root) noexcept;
GI_INLINE_DECL Gtk::TreeModel filter_new () noexcept;

// void gtk_tree_model_foreach (GtkTreeModel* model, GtkTreeModelForeachFunc func, gpointer user_data);
// void gtk_tree_model_foreach (::GtkTreeModel* model, Gtk::TreeModelForeachFunc::cfunction_type func, void* user_data);
GI_INLINE_DECL void foreach (Gtk::TreeModelForeachFunc func) noexcept;

// void gtk_tree_model_get (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_get (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
// IGNORE; not introspectable, varargs not supported

// GType gtk_tree_model_get_column_type (GtkTreeModel* tree_model, gint index_);
// GType gtk_tree_model_get_column_type (::GtkTreeModel* tree_model, gint index_);
GI_INLINE_DECL GType get_column_type (gint index_) noexcept;

// GtkTreeModelFlags gtk_tree_model_get_flags (GtkTreeModel* tree_model);
// ::GtkTreeModelFlags gtk_tree_model_get_flags (::GtkTreeModel* tree_model);
GI_INLINE_DECL Gtk::TreeModelFlags get_flags () noexcept;

// gboolean gtk_tree_model_get_iter (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path);
// gboolean gtk_tree_model_get_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
GI_INLINE_DECL bool get_iter (Gtk::TreeIter & iter, Gtk::TreePath path) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter (Gtk::TreePath path) noexcept;

// gboolean gtk_tree_model_get_iter_first (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_get_iter_first (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool get_iter_first (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter_first () noexcept;

// gboolean gtk_tree_model_get_iter_from_string (GtkTreeModel* tree_model, GtkTreeIter* iter, const gchar* path_string);
// gboolean gtk_tree_model_get_iter_from_string (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, const char* path_string);
GI_INLINE_DECL bool get_iter_from_string (Gtk::TreeIter & iter, const std::string & path_string) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> get_iter_from_string (const std::string & path_string) noexcept;

// gint gtk_tree_model_get_n_columns (GtkTreeModel* tree_model);
// gint gtk_tree_model_get_n_columns (::GtkTreeModel* tree_model);
GI_INLINE_DECL gint get_n_columns () noexcept;

// GtkTreePath* gtk_tree_model_get_path (GtkTreeModel* tree_model, GtkTreeIter* iter);
// ::GtkTreePath* gtk_tree_model_get_path (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL Gtk::TreePath get_path (Gtk::TreeIter iter) noexcept;

// gchar* gtk_tree_model_get_string_from_iter (GtkTreeModel* tree_model, GtkTreeIter* iter);
// char* gtk_tree_model_get_string_from_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL std::string get_string_from_iter (Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_get_valist (GtkTreeModel* tree_model, GtkTreeIter* iter, va_list var_args);
// void gtk_tree_model_get_valist (::GtkTreeModel* tree_model, ::GtkTreeIter* iter,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_model_get_value (GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value);
// void gtk_tree_model_get_value (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
GI_INLINE_DECL void get_value (Gtk::TreeIter iter, gint column, GObject::Value & value) noexcept;
GI_INLINE_DECL GObject::Value get_value (Gtk::TreeIter iter, gint column) noexcept;

// gboolean gtk_tree_model_iter_children (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent);
// gboolean gtk_tree_model_iter_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
GI_INLINE_DECL bool iter_children (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL bool iter_children (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_children (Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_children () noexcept;

// gboolean gtk_tree_model_iter_has_child (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_has_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_has_child (Gtk::TreeIter iter) noexcept;

// gint gtk_tree_model_iter_n_children (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gint gtk_tree_model_iter_n_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL gint iter_n_children (Gtk::TreeIter iter) noexcept;
GI_INLINE_DECL gint iter_n_children () noexcept;

// gboolean gtk_tree_model_iter_next (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_next (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_next (Gtk::TreeIter iter) noexcept;

// gboolean gtk_tree_model_iter_nth_child (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n);
// gboolean gtk_tree_model_iter_nth_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
GI_INLINE_DECL bool iter_nth_child (Gtk::TreeIter & iter, Gtk::TreeIter parent, gint n) noexcept;
GI_INLINE_DECL bool iter_nth_child (Gtk::TreeIter & iter, gint n) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_nth_child (Gtk::TreeIter parent, gint n) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_nth_child (gint n) noexcept;

// gboolean gtk_tree_model_iter_parent (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child);
// gboolean gtk_tree_model_iter_parent (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
GI_INLINE_DECL bool iter_parent (Gtk::TreeIter & iter, Gtk::TreeIter child) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> iter_parent (Gtk::TreeIter child) noexcept;

// gboolean gtk_tree_model_iter_previous (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean gtk_tree_model_iter_previous (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_previous (Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_ref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_ref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL void ref_node (Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_row_changed (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_changed (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_changed (Gtk::TreePath path, Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_row_deleted (GtkTreeModel* tree_model, GtkTreePath* path);
// void gtk_tree_model_row_deleted (::GtkTreeModel* tree_model, ::GtkTreePath* path);
GI_INLINE_DECL void row_deleted (Gtk::TreePath path) noexcept;

// void gtk_tree_model_row_has_child_toggled (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_has_child_toggled (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_has_child_toggled (Gtk::TreePath path, Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_row_inserted (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void gtk_tree_model_row_inserted (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_inserted (Gtk::TreePath path, Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_rows_reordered (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order);
// void gtk_tree_model_rows_reordered (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint new_order);
// IGNORE; not introspectable; shadowed-by rows_reordered_with_length

// void gtk_tree_model_rows_reordered_with_length (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter, gint* new_order, gint length);
// void gtk_tree_model_rows_reordered_with_length (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter, gint* new_order, gint length);
GI_INLINE_DECL void rows_reordered (Gtk::TreePath path, Gtk::TreeIter iter, gint * new_order, gint length) noexcept;
GI_INLINE_DECL void rows_reordered (Gtk::TreePath path, gint * new_order, gint length) noexcept;

// void gtk_tree_model_unref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void gtk_tree_model_unref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL void unref_node (Gtk::TreeIter iter) noexcept;

// signal row-changed
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> signal_row_changed()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> (*this, "row-changed"); }

// signal row-deleted
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path)> signal_row_deleted()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path)> (*this, "row-deleted"); }

// signal row-has-child-toggled
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> signal_row_has_child_toggled()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> (*this, "row-has-child-toggled"); }

// signal row-inserted
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> signal_row_inserted()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter)> (*this, "row-inserted"); }

// signal rows-reordered
gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter, void* new_order)> signal_rows_reordered()
{ return gi::signal_proxy<void(Gtk::TreeModel, Gtk::TreePath path, Gtk::TreeIter iter, void* new_order)> (*this, "rows-reordered"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra_def.hpp>)
#include <gtk/treemodel_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodel_extra.hpp>)
#include <gtk/treemodel_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeModel : public GI_GTK_TREEMODEL_BASE
{ typedef GI_GTK_TREEMODEL_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeModel>
{ typedef Gtk::TreeModel type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeModelIfaceDef
{
typedef TreeModelIfaceDef self;
public:
typedef Gtk::TreeModel instance_type;
typedef ::GtkTreeModelIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GType TreeModel::get_column_type (GtkTreeModel* tree_model, gint index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model, gint index_);
virtual GType get_column_type_ (gint index_) noexcept = 0;

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model);
virtual Gtk::TreeModelFlags get_flags_ () noexcept = 0;

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
// SKIP; virtual-method out parameter not supported

// gint TreeModel::get_n_columns (GtkTreeModel* tree_model);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model);
virtual gint get_n_columns_ () noexcept = 0;

// GtkTreePath* TreeModel::get_path (GtkTreeModel* tree_model, GtkTreeIter* iter);
// ::GtkTreePath* TreeModel::get_path (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual Gtk::TreePath get_path_ (Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::get_value (GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value);
// void TreeModel::get_value (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual bool iter_has_child_ (Gtk::TreeIter iter) noexcept = 0;

// gint TreeModel::iter_n_children (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual gint iter_n_children_ (Gtk::TreeIter iter) noexcept = 0;

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual bool iter_next_ (Gtk::TreeIter iter) noexcept = 0;

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual bool iter_previous_ (Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::ref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::ref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual void ref_node_ (Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::row_changed (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_changed (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
virtual void row_changed_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::row_deleted (GtkTreeModel* tree_model, GtkTreePath* path);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model, ::GtkTreePath* path);
virtual void row_deleted_ (Gtk::TreePath path) noexcept = 0;

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
virtual void row_has_child_toggled_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::row_inserted (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
virtual void row_inserted_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept = 0;

// void TreeModel::unref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::unref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
virtual void unref_node_ (Gtk::TreeIter iter) noexcept = 0;


};

using TreeModelImpl = detail::InterfaceImpl<TreeModelIfaceDef>;

class TreeModelIfaceClassImpl: public detail::InterfaceClassImpl<TreeModelImpl>
{
typedef TreeModelIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeModelImpl> super;

protected:
using super::super;

// GType TreeModel::get_column_type (GtkTreeModel* tree_model, gint index_);
// GType TreeModel::get_column_type (::GtkTreeModel* tree_model, gint index_);
GI_INLINE_DECL GType get_column_type_ (gint index_) noexcept override;

// GtkTreeModelFlags TreeModel::get_flags (GtkTreeModel* tree_model);
// ::GtkTreeModelFlags TreeModel::get_flags (::GtkTreeModel* tree_model);
GI_INLINE_DECL Gtk::TreeModelFlags get_flags_ () noexcept override;

// gboolean TreeModel::get_iter (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreePath* path);
// gboolean TreeModel::get_iter (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreePath* path);
// SKIP; virtual-method out parameter not supported

// gint TreeModel::get_n_columns (GtkTreeModel* tree_model);
// gint TreeModel::get_n_columns (::GtkTreeModel* tree_model);
GI_INLINE_DECL gint get_n_columns_ () noexcept override;

// GtkTreePath* TreeModel::get_path (GtkTreeModel* tree_model, GtkTreeIter* iter);
// ::GtkTreePath* TreeModel::get_path (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL Gtk::TreePath get_path_ (Gtk::TreeIter iter) noexcept override;

// void TreeModel::get_value (GtkTreeModel* tree_model, GtkTreeIter* iter, gint column, GValue* value);
// void TreeModel::get_value (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, gint column, ::GValue* value);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_children (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent);
// gboolean TreeModel::iter_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_has_child (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_has_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_has_child_ (Gtk::TreeIter iter) noexcept override;

// gint TreeModel::iter_n_children (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gint TreeModel::iter_n_children (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL gint iter_n_children_ (Gtk::TreeIter iter) noexcept override;

// gboolean TreeModel::iter_next (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_next (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_next_ (Gtk::TreeIter iter) noexcept override;

// gboolean TreeModel::iter_nth_child (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* parent, gint n);
// gboolean TreeModel::iter_nth_child (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint n);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_parent (GtkTreeModel* tree_model, GtkTreeIter* iter, GtkTreeIter* child);
// gboolean TreeModel::iter_parent (::GtkTreeModel* tree_model, ::GtkTreeIter* iter, ::GtkTreeIter* child);
// SKIP; virtual-method out parameter not supported

// gboolean TreeModel::iter_previous (GtkTreeModel* tree_model, GtkTreeIter* iter);
// gboolean TreeModel::iter_previous (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_previous_ (Gtk::TreeIter iter) noexcept override;

// void TreeModel::ref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::ref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL void ref_node_ (Gtk::TreeIter iter) noexcept override;

// void TreeModel::row_changed (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_changed (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_changed_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept override;

// void TreeModel::row_deleted (GtkTreeModel* tree_model, GtkTreePath* path);
// void TreeModel::row_deleted (::GtkTreeModel* tree_model, ::GtkTreePath* path);
GI_INLINE_DECL void row_deleted_ (Gtk::TreePath path) noexcept override;

// void TreeModel::row_has_child_toggled (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_has_child_toggled (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_has_child_toggled_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept override;

// void TreeModel::row_inserted (GtkTreeModel* tree_model, GtkTreePath* path, GtkTreeIter* iter);
// void TreeModel::row_inserted (::GtkTreeModel* tree_model, ::GtkTreePath* path, ::GtkTreeIter* iter);
GI_INLINE_DECL void row_inserted_ (Gtk::TreePath path, Gtk::TreeIter iter) noexcept override;

// void TreeModel::unref_node (GtkTreeModel* tree_model, GtkTreeIter* iter);
// void TreeModel::unref_node (::GtkTreeModel* tree_model, ::GtkTreeIter* iter);
GI_INLINE_DECL void unref_node_ (Gtk::TreeIter iter) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
