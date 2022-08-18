// AUTO-GENERATED

#ifndef _GI_GTK_CONTAINERCELLACCESSIBLE_HPP_
#define _GI_GTK_CONTAINERCELLACCESSIBLE_HPP_

#include "cellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class CellAccessible;

class ContainerCellAccessible;

namespace base {


#define GI_GTK_CONTAINERCELLACCESSIBLE_BASE base::ContainerCellAccessibleBase
class ContainerCellAccessibleBase : public Gtk::CellAccessible
{
typedef Gtk::CellAccessible super_type;
public:
typedef ::GtkContainerCellAccessible BaseObjectType;

ContainerCellAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_container_cell_accessible_get_type(); } 

// GtkContainerCellAccessible* gtk_container_cell_accessible_new ();
// ::GtkContainerCellAccessible* gtk_container_cell_accessible_new ();
static GI_INLINE_DECL Gtk::ContainerCellAccessible new_ () noexcept;

// void gtk_container_cell_accessible_add_child (GtkContainerCellAccessible* container, GtkCellAccessible* child);
// void gtk_container_cell_accessible_add_child (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
GI_INLINE_DECL void add_child (Gtk::CellAccessible child) noexcept;

// GList* gtk_container_cell_accessible_get_children (GtkContainerCellAccessible* container);
// ::GList* gtk_container_cell_accessible_get_children (::GtkContainerCellAccessible* container);
GI_INLINE_DECL std::vector<Gtk::CellAccessible> get_children () noexcept;

// void gtk_container_cell_accessible_remove_child (GtkContainerCellAccessible* container, GtkCellAccessible* child);
// void gtk_container_cell_accessible_remove_child (::GtkContainerCellAccessible* container, ::GtkCellAccessible* child);
GI_INLINE_DECL void remove_child (Gtk::CellAccessible child) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/containercellaccessible_extra_def.hpp>)
#include <gtk/containercellaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/containercellaccessible_extra.hpp>)
#include <gtk/containercellaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ContainerCellAccessible : public GI_GTK_CONTAINERCELLACCESSIBLE_BASE
{ typedef GI_GTK_CONTAINERCELLACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkContainerCellAccessible>
{ typedef Gtk::ContainerCellAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ContainerCellAccessibleClassDef
{
typedef ContainerCellAccessibleClassDef self;
public:
typedef Gtk::ContainerCellAccessible instance_type;
typedef ::GtkContainerCellAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ContainerCellAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::ContainerCellAccessibleClassDef, Gtk::impl::internal::CellAccessibleClass>
{
typedef ContainerCellAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ContainerCellAccessibleClassDef, Gtk::impl::internal::CellAccessibleClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using ContainerCellAccessibleImpl = detail::ObjectImpl<ContainerCellAccessible, internal::ContainerCellAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
