// AUTO-GENERATED

#ifndef _GI_GTK_TREESTORE_HPP_
#define _GI_GTK_TREESTORE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Buildable;
class TreeDragDest;
class TreeDragSource;
class TreeIter;
class TreeModel;
class TreeSortable;

class TreeStore;

namespace base {


#define GI_GTK_TREESTORE_BASE base::TreeStoreBase
class TreeStoreBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkTreeStore BaseObjectType;

TreeStoreBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_store_get_type(); } 

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

GI_INLINE_DECL Gtk::TreeDragDest interface_ (gi::interface_tag<Gtk::TreeDragDest>);

GI_INLINE_DECL operator Gtk::TreeDragDest ();

GI_INLINE_DECL Gtk::TreeDragSource interface_ (gi::interface_tag<Gtk::TreeDragSource>);

GI_INLINE_DECL operator Gtk::TreeDragSource ();

GI_INLINE_DECL Gtk::TreeModel interface_ (gi::interface_tag<Gtk::TreeModel>);

GI_INLINE_DECL operator Gtk::TreeModel ();

GI_INLINE_DECL Gtk::TreeSortable interface_ (gi::interface_tag<Gtk::TreeSortable>);

GI_INLINE_DECL operator Gtk::TreeSortable ();

// GtkTreeStore* gtk_tree_store_new (gint n_columns);
// ::GtkTreeStore* gtk_tree_store_new (gint n_columns);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GtkTreeStore* gtk_tree_store_newv (gint n_columns, GType* types);
// ::GtkTreeStore* gtk_tree_store_newv (gint n_columns, GType* types);
static GI_INLINE_DECL Gtk::TreeStore new_ (gint n_columns, GType * types) noexcept;

// void gtk_tree_store_append (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent);
// void gtk_tree_store_append (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
GI_INLINE_DECL void append (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL void append (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter append (Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL Gtk::TreeIter append () noexcept;

// void gtk_tree_store_clear (GtkTreeStore* tree_store);
// void gtk_tree_store_clear (::GtkTreeStore* tree_store);
GI_INLINE_DECL void clear () noexcept;

// void gtk_tree_store_insert (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position);
// void gtk_tree_store_insert (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
GI_INLINE_DECL void insert (Gtk::TreeIter & iter, Gtk::TreeIter parent, gint position) noexcept;
GI_INLINE_DECL void insert (Gtk::TreeIter & iter, gint position) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert (Gtk::TreeIter parent, gint position) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert (gint position) noexcept;

// void gtk_tree_store_insert_after (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling);
// void gtk_tree_store_insert_after (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
GI_INLINE_DECL void insert_after (Gtk::TreeIter & iter, Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept;
GI_INLINE_DECL void insert_after (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_after (Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_after () noexcept;

// void gtk_tree_store_insert_before (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, GtkTreeIter* sibling);
// void gtk_tree_store_insert_before (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, ::GtkTreeIter* sibling);
GI_INLINE_DECL void insert_before (Gtk::TreeIter & iter, Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept;
GI_INLINE_DECL void insert_before (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_before (Gtk::TreeIter parent, Gtk::TreeIter sibling) noexcept;
GI_INLINE_DECL Gtk::TreeIter insert_before () noexcept;

// void gtk_tree_store_insert_with_values (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position);
// void gtk_tree_store_insert_with_values (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position);
// IGNORE; not introspectable; shadowed-by insert_with_valuesv, varargs not supported

// void gtk_tree_store_insert_with_valuesv (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent, gint position, gint* columns, GValue* values, gint n_values);
// void gtk_tree_store_insert_with_valuesv (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent, gint position, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// gboolean gtk_tree_store_is_ancestor (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* descendant);
// gboolean gtk_tree_store_is_ancestor (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* descendant);
GI_INLINE_DECL bool is_ancestor (Gtk::TreeIter iter, Gtk::TreeIter descendant) noexcept;

// gint gtk_tree_store_iter_depth (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gint gtk_tree_store_iter_depth (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
GI_INLINE_DECL gint iter_depth (Gtk::TreeIter iter) noexcept;

// gboolean gtk_tree_store_iter_is_valid (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gboolean gtk_tree_store_iter_is_valid (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
GI_INLINE_DECL bool iter_is_valid (Gtk::TreeIter iter) noexcept;

// void gtk_tree_store_move_after (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_tree_store_move_after (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
GI_INLINE_DECL void move_after (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept;
GI_INLINE_DECL void move_after (Gtk::TreeIter iter) noexcept;

// void gtk_tree_store_move_before (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* position);
// void gtk_tree_store_move_before (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* position);
GI_INLINE_DECL void move_before (Gtk::TreeIter iter, Gtk::TreeIter position) noexcept;
GI_INLINE_DECL void move_before (Gtk::TreeIter iter) noexcept;

// void gtk_tree_store_prepend (GtkTreeStore* tree_store, GtkTreeIter* iter, GtkTreeIter* parent);
// void gtk_tree_store_prepend (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, ::GtkTreeIter* parent);
GI_INLINE_DECL void prepend (Gtk::TreeIter & iter, Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL void prepend (Gtk::TreeIter & iter) noexcept;
GI_INLINE_DECL Gtk::TreeIter prepend (Gtk::TreeIter parent) noexcept;
GI_INLINE_DECL Gtk::TreeIter prepend () noexcept;

// gboolean gtk_tree_store_remove (GtkTreeStore* tree_store, GtkTreeIter* iter);
// gboolean gtk_tree_store_remove (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
GI_INLINE_DECL bool remove (Gtk::TreeIter iter) noexcept;

// void gtk_tree_store_reorder (GtkTreeStore* tree_store, GtkTreeIter* parent);
// void gtk_tree_store_reorder (::GtkTreeStore* tree_store, ::GtkTreeIter* parent);
// IGNORE; not introspectable, inconsistent array info

// void gtk_tree_store_set (GtkTreeStore* tree_store, GtkTreeIter* iter);
// void gtk_tree_store_set (::GtkTreeStore* tree_store, ::GtkTreeIter* iter);
// IGNORE; not introspectable; shadowed-by set_valuesv, varargs not supported

// void gtk_tree_store_set_column_types (GtkTreeStore* tree_store, gint n_columns, GType* types);
// void gtk_tree_store_set_column_types (::GtkTreeStore* tree_store, gint n_columns, GType* types);
GI_INLINE_DECL void set_column_types (gint n_columns, GType * types) noexcept;

// void gtk_tree_store_set_valist (GtkTreeStore* tree_store, GtkTreeIter* iter, va_list var_args);
// void gtk_tree_store_set_valist (::GtkTreeStore* tree_store, ::GtkTreeIter* iter,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_tree_store_set_value (GtkTreeStore* tree_store, GtkTreeIter* iter, gint column, GValue* value);
// void gtk_tree_store_set_value (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint column, ::GValue* value);
GI_INLINE_DECL void set_value (Gtk::TreeIter iter, gint column, GObject::Value value) noexcept;

// void gtk_tree_store_set_valuesv (GtkTreeStore* tree_store, GtkTreeIter* iter, gint* columns, GValue* values, gint n_values);
// void gtk_tree_store_set_valuesv (::GtkTreeStore* tree_store, ::GtkTreeIter* iter, gint* columns, ::GValue** values, gint n_values);
// SKIP; inconsistent in values pointer depth (1 vs 2)

// void gtk_tree_store_swap (GtkTreeStore* tree_store, GtkTreeIter* a, GtkTreeIter* b);
// void gtk_tree_store_swap (::GtkTreeStore* tree_store, ::GtkTreeIter* a, ::GtkTreeIter* b);
GI_INLINE_DECL void swap (Gtk::TreeIter a, Gtk::TreeIter b) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra_def.hpp>)
#include <gtk/treestore_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treestore_extra.hpp>)
#include <gtk/treestore_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeStore : public GI_GTK_TREESTORE_BASE
{ typedef GI_GTK_TREESTORE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeStore>
{ typedef Gtk::TreeStore type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"
#include "treedragdest.hpp"
#include "treedragsource.hpp"
#include "treemodel.hpp"
#include "treesortable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeStoreClassDef
{
typedef TreeStoreClassDef self;
public:
typedef Gtk::TreeStore instance_type;
typedef ::GtkTreeStoreClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeStoreClass: public detail::ClassTemplate<Gtk::impl::internal::TreeStoreClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::TreeDragDestIfaceClassImpl, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl>
{
typedef TreeStoreClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeStoreClassDef, GObject::impl::internal::ObjectClass, Gtk::impl::internal::BuildableIfaceClassImpl, Gtk::impl::internal::TreeDragDestIfaceClassImpl, Gtk::impl::internal::TreeDragSourceIfaceClassImpl, Gtk::impl::internal::TreeModelIfaceClassImpl, Gtk::impl::internal::TreeSortableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;
typedef Gtk::impl::internal::TreeDragDestIfaceClassImpl GtkTreeDragDestIface_type;
typedef Gtk::impl::internal::TreeDragSourceIfaceClassImpl GtkTreeDragSourceIface_type;
typedef Gtk::impl::internal::TreeModelIfaceClassImpl GtkTreeModelIface_type;
typedef Gtk::impl::internal::TreeSortableIfaceClassImpl GtkTreeSortableIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using TreeStoreImpl = detail::ObjectImpl<TreeStore, internal::TreeStoreClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
