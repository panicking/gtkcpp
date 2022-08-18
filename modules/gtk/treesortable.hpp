// AUTO-GENERATED

#ifndef _GI_GTK_TREESORTABLE_HPP_
#define _GI_GTK_TREESORTABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class TreeSortable;

namespace base {


#define GI_GTK_TREESORTABLE_BASE base::TreeSortableBase
class TreeSortableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkTreeSortable BaseObjectType;

TreeSortableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_sortable_get_type(); } 

// gboolean gtk_tree_sortable_get_sort_column_id (GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order);
// gboolean gtk_tree_sortable_get_sort_column_id (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
GI_INLINE_DECL bool get_sort_column_id (gint & sort_column_id, Gtk::SortType & order) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, Gtk::SortType> get_sort_column_id () noexcept;

// gboolean gtk_tree_sortable_has_default_sort_func (GtkTreeSortable* sortable);
// gboolean gtk_tree_sortable_has_default_sort_func (::GtkTreeSortable* sortable);
GI_INLINE_DECL bool has_default_sort_func () noexcept;

// void gtk_tree_sortable_set_default_sort_func (GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_sortable_set_default_sort_func (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_default_sort_func (Gtk::TreeIterCompareFunc sort_func) noexcept;

// void gtk_tree_sortable_set_sort_column_id (GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order);
// void gtk_tree_sortable_set_sort_column_id (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
GI_INLINE_DECL void set_sort_column_id (gint sort_column_id, Gtk::SortType order) noexcept;

// void gtk_tree_sortable_set_sort_func (GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void gtk_tree_sortable_set_sort_func (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
GI_INLINE_DECL void set_sort_func (gint sort_column_id, Gtk::TreeIterCompareFunc sort_func) noexcept;

// void gtk_tree_sortable_sort_column_changed (GtkTreeSortable* sortable);
// void gtk_tree_sortable_sort_column_changed (::GtkTreeSortable* sortable);
GI_INLINE_DECL void sort_column_changed () noexcept;

// signal sort-column-changed
gi::signal_proxy<void(Gtk::TreeSortable)> signal_sort_column_changed()
{ return gi::signal_proxy<void(Gtk::TreeSortable)> (*this, "sort-column-changed"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra_def.hpp>)
#include <gtk/treesortable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treesortable_extra.hpp>)
#include <gtk/treesortable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeSortable : public GI_GTK_TREESORTABLE_BASE
{ typedef GI_GTK_TREESORTABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeSortable>
{ typedef Gtk::TreeSortable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeSortableIfaceDef
{
typedef TreeSortableIfaceDef self;
public:
typedef Gtk::TreeSortable instance_type;
typedef ::GtkTreeSortableIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean TreeSortable::get_sort_column_id (GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order);
// gboolean TreeSortable::get_sort_column_id (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean TreeSortable::has_default_sort_func (GtkTreeSortable* sortable);
// gboolean TreeSortable::has_default_sort_func (::GtkTreeSortable* sortable);
virtual bool has_default_sort_func_ () noexcept = 0;

// void TreeSortable::set_default_sort_func (GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_default_sort_func (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::set_sort_column_id (GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order);
// void TreeSortable::set_sort_column_id (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
virtual void set_sort_column_id_ (gint sort_column_id, Gtk::SortType order) noexcept = 0;

// void TreeSortable::set_sort_func (GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_sort_func (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::sort_column_changed (GtkTreeSortable* sortable);
// void TreeSortable::sort_column_changed (::GtkTreeSortable* sortable);
virtual void sort_column_changed_ () noexcept = 0;


};

using TreeSortableImpl = detail::InterfaceImpl<TreeSortableIfaceDef>;

class TreeSortableIfaceClassImpl: public detail::InterfaceClassImpl<TreeSortableImpl>
{
typedef TreeSortableIfaceClassImpl self;
typedef detail::InterfaceClassImpl<TreeSortableImpl> super;

protected:
using super::super;

// gboolean TreeSortable::get_sort_column_id (GtkTreeSortable* sortable, gint* sort_column_id, GtkSortType* order);
// gboolean TreeSortable::get_sort_column_id (::GtkTreeSortable* sortable, gint* sort_column_id, ::GtkSortType* order);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean TreeSortable::has_default_sort_func (GtkTreeSortable* sortable);
// gboolean TreeSortable::has_default_sort_func (::GtkTreeSortable* sortable);
GI_INLINE_DECL bool has_default_sort_func_ () noexcept override;

// void TreeSortable::set_default_sort_func (GtkTreeSortable* sortable, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_default_sort_func (::GtkTreeSortable* sortable, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::set_sort_column_id (GtkTreeSortable* sortable, gint sort_column_id, GtkSortType order);
// void TreeSortable::set_sort_column_id (::GtkTreeSortable* sortable, gint sort_column_id, ::GtkSortType order);
GI_INLINE_DECL void set_sort_column_id_ (gint sort_column_id, Gtk::SortType order) noexcept override;

// void TreeSortable::set_sort_func (GtkTreeSortable* sortable, gint sort_column_id, GtkTreeIterCompareFunc sort_func, gpointer user_data, GDestroyNotify destroy);
// void TreeSortable::set_sort_func (::GtkTreeSortable* sortable, gint sort_column_id, Gtk::TreeIterCompareFunc::cfunction_type sort_func, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// void TreeSortable::sort_column_changed (GtkTreeSortable* sortable);
// void TreeSortable::sort_column_changed (::GtkTreeSortable* sortable);
GI_INLINE_DECL void sort_column_changed_ () noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
