// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELSORT_HPP_
#define _GI_GTK_TREEMODELSORT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeDragSource;
class TreeIter;
class TreeModel;
class TreePath;
class TreeSortable;

class TreeModelSort;

namespace base {


#define GI_GTK_TREEMODELSORT_BASE base::TreeModelSortBase
class TreeModelSortBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeModelSort BaseObjectType;

TreeModelSortBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_model_sort_get_type(); } 

GI_INLINE_DECL Gtk::TreeDragSource interface_ (gi::interface_tag<Gtk::TreeDragSource>);

GI_INLINE_DECL operator Gtk::TreeDragSource ();

GI_INLINE_DECL Gtk::TreeModel interface_ (gi::interface_tag<Gtk::TreeModel>);

GI_INLINE_DECL operator Gtk::TreeModel ();

GI_INLINE_DECL Gtk::TreeSortable interface_ (gi::interface_tag<Gtk::TreeSortable>);

GI_INLINE_DECL operator Gtk::TreeSortable ();

// GtkTreeModel* gtk_tree_model_sort_new_with_model (GtkTreeModel* child_model);
// ::GtkTreeModelSort* gtk_tree_model_sort_new_with_model (::GtkTreeModel* child_model);
static GI_INLINE_DECL Gtk::TreeModelSort new_with_model (Gtk::TreeModel child_model) noexcept;

// void gtk_tree_model_sort_clear_cache (GtkTreeModelSort* tree_model_sort);
// void gtk_tree_model_sort_clear_cache (::GtkTreeModelSort* tree_model_sort);
GI_INLINE_DECL void clear_cache () noexcept;

// gboolean gtk_tree_model_sort_convert_child_iter_to_iter (GtkTreeModelSort* tree_model_sort, GtkTreeIter* sort_iter, GtkTreeIter* child_iter);
// gboolean gtk_tree_model_sort_convert_child_iter_to_iter (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* sort_iter, ::GtkTreeIter* child_iter);
GI_INLINE_DECL bool convert_child_iter_to_iter (Gtk::TreeIter & sort_iter, Gtk::TreeIter child_iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> convert_child_iter_to_iter (Gtk::TreeIter child_iter) noexcept;

// GtkTreePath* gtk_tree_model_sort_convert_child_path_to_path (GtkTreeModelSort* tree_model_sort, GtkTreePath* child_path);
// ::GtkTreePath* gtk_tree_model_sort_convert_child_path_to_path (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* child_path);
GI_INLINE_DECL Gtk::TreePath convert_child_path_to_path (Gtk::TreePath child_path) noexcept;

// void gtk_tree_model_sort_convert_iter_to_child_iter (GtkTreeModelSort* tree_model_sort, GtkTreeIter* child_iter, GtkTreeIter* sorted_iter);
// void gtk_tree_model_sort_convert_iter_to_child_iter (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* child_iter, ::GtkTreeIter* sorted_iter);
GI_INLINE_DECL void convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter sorted_iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter convert_iter_to_child_iter (Gtk::TreeIter sorted_iter) noexcept;

// GtkTreePath* gtk_tree_model_sort_convert_path_to_child_path (GtkTreeModelSort* tree_model_sort, GtkTreePath* sorted_path);
// ::GtkTreePath* gtk_tree_model_sort_convert_path_to_child_path (::GtkTreeModelSort* tree_model_sort, ::GtkTreePath* sorted_path);
GI_INLINE_DECL Gtk::TreePath convert_path_to_child_path (Gtk::TreePath sorted_path) noexcept;

// GtkTreeModel* gtk_tree_model_sort_get_model (GtkTreeModelSort* tree_model);
// ::GtkTreeModel* gtk_tree_model_sort_get_model (::GtkTreeModelSort* tree_model);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// gboolean gtk_tree_model_sort_iter_is_valid (GtkTreeModelSort* tree_model_sort, GtkTreeIter* iter);
// gboolean gtk_tree_model_sort_iter_is_valid (::GtkTreeModelSort* tree_model_sort, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_is_valid (Gtk::TreeIter iter) noexcept;

// void gtk_tree_model_sort_reset_default_sort_func (GtkTreeModelSort* tree_model_sort);
// void gtk_tree_model_sort_reset_default_sort_func (::GtkTreeModelSort* tree_model_sort);
GI_INLINE_DECL void reset_default_sort_func () noexcept;

gi::property_proxy<Gtk::TreeModel, base::TreeModelSortBase> property_model()
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelSortBase> (*this, "model"); }
const gi::property_proxy<Gtk::TreeModel, base::TreeModelSortBase> property_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelSortBase> (*this, "model"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelsort_extra_def.hpp>)
#include <gtk/treemodelsort_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelsort_extra.hpp>)
#include <gtk/treemodelsort_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeModelSort : public GI_GTK_TREEMODELSORT_BASE
{ typedef GI_GTK_TREEMODELSORT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeModelSort>
{ typedef Gtk::TreeModelSort type; }; 

} // namespace repository

} // namespace gi

#include "treedragsource.hpp"
#include "treemodel.hpp"
#include "treesortable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeModelSortClassDef
{
typedef TreeModelSortClassDef self;
public:
typedef Gtk::TreeModelSort instance_type;
typedef ::GtkTreeModelSortClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeModelSortClass: public detail::ClassTemplate<Gtk::impl::internal::TreeModelSortClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl>
{
typedef TreeModelSortClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeModelSortClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::TreeDragSourceIfaceClassImpl GtkTreeDragSourceIface_type;
typedef Gtk::impl::internal::TreeModelIfaceClassImpl GtkTreeModelIface_type;
typedef Gtk::impl::internal::TreeSortableIfaceClassImpl GtkTreeSortableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using TreeModelSortImpl = detail::ObjectImpl<TreeModelSort, internal::TreeModelSortClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
