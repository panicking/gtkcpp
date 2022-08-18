// AUTO-GENERATED

#ifndef _GI_GTK_TREEMODELFILTER_HPP_
#define _GI_GTK_TREEMODELFILTER_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class TreeDragSource;
class TreeIter;
class TreeModel;
class TreePath;

class TreeModelFilter;

namespace base {


#define GI_GTK_TREEMODELFILTER_BASE base::TreeModelFilterBase
class TreeModelFilterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeModelFilter BaseObjectType;

TreeModelFilterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_model_filter_get_type(); } 

GI_INLINE_DECL Gtk::TreeDragSource interface_ (gi::interface_tag<Gtk::TreeDragSource>);

GI_INLINE_DECL operator Gtk::TreeDragSource ();

GI_INLINE_DECL Gtk::TreeModel interface_ (gi::interface_tag<Gtk::TreeModel>);

GI_INLINE_DECL operator Gtk::TreeModel ();

// void gtk_tree_model_filter_clear_cache (GtkTreeModelFilter* filter);
// void gtk_tree_model_filter_clear_cache (::GtkTreeModelFilter* filter);
GI_INLINE_DECL void clear_cache () noexcept;

// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (GtkTreeModelFilter* filter, GtkTreeIter* filter_iter, GtkTreeIter* child_iter);
// gboolean gtk_tree_model_filter_convert_child_iter_to_iter (::GtkTreeModelFilter* filter, ::GtkTreeIter* filter_iter, ::GtkTreeIter* child_iter);
GI_INLINE_DECL bool convert_child_iter_to_iter (Gtk::TreeIter & filter_iter, Gtk::TreeIter child_iter) noexcept;
GI_INLINE_DECL std::tuple<bool, Gtk::TreeIter> convert_child_iter_to_iter (Gtk::TreeIter child_iter) noexcept;

// GtkTreePath* gtk_tree_model_filter_convert_child_path_to_path (GtkTreeModelFilter* filter, GtkTreePath* child_path);
// ::GtkTreePath* gtk_tree_model_filter_convert_child_path_to_path (::GtkTreeModelFilter* filter, ::GtkTreePath* child_path);
GI_INLINE_DECL Gtk::TreePath convert_child_path_to_path (Gtk::TreePath child_path) noexcept;

// void gtk_tree_model_filter_convert_iter_to_child_iter (GtkTreeModelFilter* filter, GtkTreeIter* child_iter, GtkTreeIter* filter_iter);
// void gtk_tree_model_filter_convert_iter_to_child_iter (::GtkTreeModelFilter* filter, ::GtkTreeIter* child_iter, ::GtkTreeIter* filter_iter);
GI_INLINE_DECL void convert_iter_to_child_iter (Gtk::TreeIter & child_iter, Gtk::TreeIter filter_iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter convert_iter_to_child_iter (Gtk::TreeIter filter_iter) noexcept;

// GtkTreePath* gtk_tree_model_filter_convert_path_to_child_path (GtkTreeModelFilter* filter, GtkTreePath* filter_path);
// ::GtkTreePath* gtk_tree_model_filter_convert_path_to_child_path (::GtkTreeModelFilter* filter, ::GtkTreePath* filter_path);
GI_INLINE_DECL Gtk::TreePath convert_path_to_child_path (Gtk::TreePath filter_path) noexcept;

// GtkTreeModel* gtk_tree_model_filter_get_model (GtkTreeModelFilter* filter);
// ::GtkTreeModel* gtk_tree_model_filter_get_model (::GtkTreeModelFilter* filter);
GI_INLINE_DECL Gtk::TreeModel get_model () noexcept;

// void gtk_tree_model_filter_refilter (GtkTreeModelFilter* filter);
// void gtk_tree_model_filter_refilter (::GtkTreeModelFilter* filter);
GI_INLINE_DECL void refilter () noexcept;

// void gtk_tree_model_filter_set_modify_func (GtkTreeModelFilter* filter, gint n_columns, GType* types, GtkTreeModelFilterModifyFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_model_filter_set_modify_func (::GtkTreeModelFilter* filter, gint n_columns, GType* types,  func, void* data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; func type  not supported

// void gtk_tree_model_filter_set_visible_column (GtkTreeModelFilter* filter, gint column);
// void gtk_tree_model_filter_set_visible_column (::GtkTreeModelFilter* filter, gint column);
GI_INLINE_DECL void set_visible_column (gint column) noexcept;

// void gtk_tree_model_filter_set_visible_func (GtkTreeModelFilter* filter, GtkTreeModelFilterVisibleFunc func, gpointer data, GDestroyNotify destroy);
// void gtk_tree_model_filter_set_visible_func (::GtkTreeModelFilter* filter, Gtk::TreeModelFilterVisibleFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_visible_func (Gtk::TreeModelFilterVisibleFunc func) noexcept;

gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> property_child_model()
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> (*this, "child-model"); }
const gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> property_child_model() const
{ return gi::property_proxy<Gtk::TreeModel, base::TreeModelFilterBase> (*this, "child-model"); }

gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> property_virtual_root()
{ return gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> (*this, "virtual-root"); }
const gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> property_virtual_root() const
{ return gi::property_proxy<Gtk::TreePath, base::TreeModelFilterBase> (*this, "virtual-root"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra_def.hpp>)
#include <gtk/treemodelfilter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treemodelfilter_extra.hpp>)
#include <gtk/treemodelfilter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeModelFilter : public GI_GTK_TREEMODELFILTER_BASE
{ typedef GI_GTK_TREEMODELFILTER_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeModelFilter>
{ typedef Gtk::TreeModelFilter type; }; 

} // namespace repository

} // namespace gi

#include "treedragsource.hpp"
#include "treemodel.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeModelFilterClassDef
{
typedef TreeModelFilterClassDef self;
public:
typedef Gtk::TreeModelFilter instance_type;
typedef ::GtkTreeModelFilterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void TreeModelFilter::modify (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter, GValue* value, gint column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter, ::GValue* value, gint column);
virtual void modify_ (Gtk::TreeModel child_model, Gtk::TreeIter iter, GObject::Value value, gint column) noexcept = 0;

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter);
virtual bool visible_ (Gtk::TreeModel child_model, Gtk::TreeIter iter) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TreeModelFilterClass: public detail::ClassTemplate<Gtk::impl::internal::TreeModelFilterClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl>
{
typedef TreeModelFilterClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeModelFilterClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl> super;

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


// void TreeModelFilter::modify (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter, GValue* value, gint column);
// void TreeModelFilter::modify (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter, ::GValue* value, gint column);
GI_INLINE_DECL void modify_ (Gtk::TreeModel child_model, Gtk::TreeIter iter, GObject::Value value, gint column) noexcept override;

// gboolean TreeModelFilter::visible (GtkTreeModelFilter* self, GtkTreeModel* child_model, GtkTreeIter* iter);
// gboolean TreeModelFilter::visible (::GtkTreeModelFilter* self, ::GtkTreeModel* child_model, ::GtkTreeIter* iter);
GI_INLINE_DECL bool visible_ (Gtk::TreeModel child_model, Gtk::TreeIter iter) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TreeModelFilterImpl = detail::ObjectImpl<TreeModelFilter, internal::TreeModelFilterClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
