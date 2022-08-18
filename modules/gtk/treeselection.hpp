// AUTO-GENERATED

#ifndef _GI_GTK_TREESELECTION_HPP_
#define _GI_GTK_TREESELECTION_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeIter;
class TreeModel;
class TreePath;
class TreeView;

class TreeSelection;

namespace base {


#define GI_GTK_TREESELECTION_BASE base::TreeSelectionBase
class TreeSelectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeSelection BaseObjectType;

TreeSelectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_selection_get_type(); } 

// gint gtk_tree_selection_count_selected_rows (GtkTreeSelection* selection);
// gint gtk_tree_selection_count_selected_rows (::GtkTreeSelection* selection);
GI_INLINE_DECL gint count_selected_rows () noexcept;

// GtkSelectionMode gtk_tree_selection_get_mode (GtkTreeSelection* selection);
// ::GtkSelectionMode gtk_tree_selection_get_mode (::GtkTreeSelection* selection);
GI_INLINE_DECL Gtk::SelectionMode get_mode () noexcept;

// FAILURE on gtk_tree_selection_get_select_function; No such node (<xmlattr>.transfer-ownership)
// gboolean gtk_tree_selection_get_selected (GtkTreeSelection* selection, GtkTreeModel** model, GtkTreeIter* iter);
// gboolean gtk_tree_selection_get_selected (::GtkTreeSelection* selection, ::GtkTreeModel** model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool get_selected (Gtk::TreeModel * model = nullptr, Gtk::TreeIter * iter = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeModel, Gtk::TreeIter> get_selected () noexcept;

// GList* gtk_tree_selection_get_selected_rows (GtkTreeSelection* selection, GtkTreeModel** model);
// ::GList* gtk_tree_selection_get_selected_rows (::GtkTreeSelection* selection, ::GtkTreeModel** model);
GI_INLINE_DECL std::vector<Gtk::TreePath> get_selected_rows (Gtk::TreeModel * model = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<Gtk::TreePath>, Gtk::TreeModel> get_selected_rows () noexcept;

// GtkTreeView* gtk_tree_selection_get_tree_view (GtkTreeSelection* selection);
// ::GtkTreeView* gtk_tree_selection_get_tree_view (::GtkTreeSelection* selection);
GI_INLINE_DECL Gtk::TreeView get_tree_view () noexcept;

// gpointer gtk_tree_selection_get_user_data (GtkTreeSelection* selection);
// void* gtk_tree_selection_get_user_data (::GtkTreeSelection* selection);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// gboolean gtk_tree_selection_iter_is_selected (GtkTreeSelection* selection, GtkTreeIter* iter);
// gboolean gtk_tree_selection_iter_is_selected (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_is_selected (Gtk::TreeIter iter) noexcept;

// gboolean gtk_tree_selection_path_is_selected (GtkTreeSelection* selection, GtkTreePath* path);
// gboolean gtk_tree_selection_path_is_selected (::GtkTreeSelection* selection, ::GtkTreePath* path);
GI_INLINE_DECL bool path_is_selected (Gtk::TreePath path) noexcept;

// void gtk_tree_selection_select_all (GtkTreeSelection* selection);
// void gtk_tree_selection_select_all (::GtkTreeSelection* selection);
GI_INLINE_DECL void select_all () noexcept;

// void gtk_tree_selection_select_iter (GtkTreeSelection* selection, GtkTreeIter* iter);
// void gtk_tree_selection_select_iter (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
GI_INLINE_DECL void select_iter (Gtk::TreeIter iter) noexcept;

// void gtk_tree_selection_select_path (GtkTreeSelection* selection, GtkTreePath* path);
// void gtk_tree_selection_select_path (::GtkTreeSelection* selection, ::GtkTreePath* path);
GI_INLINE_DECL void select_path (Gtk::TreePath path) noexcept;

// void gtk_tree_selection_select_range (GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path);
// void gtk_tree_selection_select_range (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
GI_INLINE_DECL void select_range (Gtk::TreePath start_path, Gtk::TreePath end_path) noexcept;

// void gtk_tree_selection_selected_foreach (GtkTreeSelection* selection, GtkTreeSelectionForeachFunc func, gpointer data);
// void gtk_tree_selection_selected_foreach (::GtkTreeSelection* selection, Gtk::TreeSelectionForeachFunc::cfunction_type func, void* data);
GI_INLINE_DECL void selected_foreach (Gtk::TreeSelectionForeachFunc func) noexcept;

// void gtk_tree_selection_set_mode (GtkTreeSelection* selection, GtkSelectionMode type);
// void gtk_tree_selection_set_mode (::GtkTreeSelection* selection, ::GtkSelectionMode type);
GI_INLINE_DECL void set_mode (Gtk::SelectionMode type) noexcept;

// void gtk_tree_selection_set_select_function (GtkTreeSelection* selection, GtkTreeSelectionFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_selection_set_select_function (::GtkTreeSelection* selection, Gtk::TreeSelectionFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_select_function (Gtk::TreeSelectionFunc func) noexcept;

// void gtk_tree_selection_unselect_all (GtkTreeSelection* selection);
// void gtk_tree_selection_unselect_all (::GtkTreeSelection* selection);
GI_INLINE_DECL void unselect_all () noexcept;

// void gtk_tree_selection_unselect_iter (GtkTreeSelection* selection, GtkTreeIter* iter);
// void gtk_tree_selection_unselect_iter (::GtkTreeSelection* selection, ::GtkTreeIter* iter);
GI_INLINE_DECL void unselect_iter (Gtk::TreeIter iter) noexcept;

// void gtk_tree_selection_unselect_path (GtkTreeSelection* selection, GtkTreePath* path);
// void gtk_tree_selection_unselect_path (::GtkTreeSelection* selection, ::GtkTreePath* path);
GI_INLINE_DECL void unselect_path (Gtk::TreePath path) noexcept;

// void gtk_tree_selection_unselect_range (GtkTreeSelection* selection, GtkTreePath* start_path, GtkTreePath* end_path);
// void gtk_tree_selection_unselect_range (::GtkTreeSelection* selection, ::GtkTreePath* start_path, ::GtkTreePath* end_path);
GI_INLINE_DECL void unselect_range (Gtk::TreePath start_path, Gtk::TreePath end_path) noexcept;

gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> property_mode()
{ return gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> (*this, "mode"); }
const gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> property_mode() const
{ return gi::property_proxy<Gtk::SelectionMode, base::TreeSelectionBase> (*this, "mode"); }

// signal changed
gi::signal_proxy<void(Gtk::TreeSelection)> signal_changed()
{ return gi::signal_proxy<void(Gtk::TreeSelection)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra_def.hpp>)
#include <gtk/treeselection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeselection_extra.hpp>)
#include <gtk/treeselection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeSelection : public GI_GTK_TREESELECTION_BASE
{ typedef GI_GTK_TREESELECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeSelection>
{ typedef Gtk::TreeSelection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeSelectionClassDef
{
typedef TreeSelectionClassDef self;
public:
typedef Gtk::TreeSelection instance_type;
typedef ::GtkTreeSelectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TreeSelection::changed (GtkTreeSelection* selection);
// void TreeSelection::changed (::GtkTreeSelection* selection);
virtual void changed_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TreeSelectionClass: public detail::ClassTemplate<Gtk::impl::internal::TreeSelectionClassDef, GObject::impl::internal::ObjectClass>
{
typedef TreeSelectionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeSelectionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void TreeSelection::changed (GtkTreeSelection* selection);
// void TreeSelection::changed (::GtkTreeSelection* selection);
GI_INLINE_DECL void changed_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TreeSelectionImpl = detail::ObjectImpl<TreeSelection, internal::TreeSelectionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
