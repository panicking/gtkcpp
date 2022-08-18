// AUTO-GENERATED

#ifndef _GI_GTK_TREEVIEWACCESSIBLE_HPP_
#define _GI_GTK_TREEVIEWACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellAccessibleParent;

class TreeViewAccessible;

namespace base {


#define GI_GTK_TREEVIEWACCESSIBLE_BASE base::TreeViewAccessibleBase
class TreeViewAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkTreeViewAccessible BaseObjectType;

TreeViewAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tree_view_accessible_get_type(); } 

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

GI_INLINE_DECL Atk::Table interface_ (gi::interface_tag<Atk::Table>);

GI_INLINE_DECL operator Atk::Table ();

GI_INLINE_DECL Gtk::CellAccessibleParent interface_ (gi::interface_tag<Gtk::CellAccessibleParent>);

GI_INLINE_DECL operator Gtk::CellAccessibleParent ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/treeviewaccessible_extra_def.hpp>)
#include <gtk/treeviewaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/treeviewaccessible_extra.hpp>)
#include <gtk/treeviewaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TreeViewAccessible : public GI_GTK_TREEVIEWACCESSIBLE_BASE
{ typedef GI_GTK_TREEVIEWACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTreeViewAccessible>
{ typedef Gtk::TreeViewAccessible type; }; 

} // namespace repository

} // namespace gi

#include "cellaccessibleparent.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TreeViewAccessibleClassDef
{
typedef TreeViewAccessibleClassDef self;
public:
typedef Gtk::TreeViewAccessible instance_type;
typedef ::GtkTreeViewAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TreeViewAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::TreeViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl, Atk::impl::internal::TableIfaceClassImpl, Gtk::impl::internal::CellAccessibleParentIfaceClassImpl>
{
typedef TreeViewAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TreeViewAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::SelectionIfaceClassImpl, Atk::impl::internal::TableIfaceClassImpl, Gtk::impl::internal::CellAccessibleParentIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;
typedef Atk::impl::internal::TableIfaceClassImpl AtkTableIface_type;
typedef Gtk::impl::internal::CellAccessibleParentIfaceClassImpl GtkCellAccessibleParentIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using TreeViewAccessibleImpl = detail::ObjectImpl<TreeViewAccessible, internal::TreeViewAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
