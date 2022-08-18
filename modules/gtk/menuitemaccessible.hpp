// AUTO-GENERATED

#ifndef _GI_GTK_MENUITEMACCESSIBLE_HPP_
#define _GI_GTK_MENUITEMACCESSIBLE_HPP_

#include "containeraccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MenuItemAccessible;

namespace base {


#define GI_GTK_MENUITEMACCESSIBLE_BASE base::MenuItemAccessibleBase
class MenuItemAccessibleBase : public Gtk::ContainerAccessible
{
typedef Gtk::ContainerAccessible super_type;
public:
typedef ::GtkMenuItemAccessible BaseObjectType;

MenuItemAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_item_accessible_get_type(); } 

GI_INLINE_DECL Atk::Action interface_ (gi::interface_tag<Atk::Action>);

GI_INLINE_DECL operator Atk::Action ();

GI_INLINE_DECL Atk::Selection interface_ (gi::interface_tag<Atk::Selection>);

GI_INLINE_DECL operator Atk::Selection ();

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menuitemaccessible_extra_def.hpp>)
#include <gtk/menuitemaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menuitemaccessible_extra.hpp>)
#include <gtk/menuitemaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuItemAccessible : public GI_GTK_MENUITEMACCESSIBLE_BASE
{ typedef GI_GTK_MENUITEMACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuItemAccessible>
{ typedef Gtk::MenuItemAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuItemAccessibleClassDef
{
typedef MenuItemAccessibleClassDef self;
public:
typedef Gtk::MenuItemAccessible instance_type;
typedef ::GtkMenuItemAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuItemAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::MenuItemAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl>
{
typedef MenuItemAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuItemAccessibleClassDef, Gtk::impl::internal::ContainerAccessibleClass, Atk::impl::internal::ActionIfaceClassImpl, Atk::impl::internal::SelectionIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Atk::impl::internal::ActionIfaceClassImpl AtkActionIface_type;
typedef Atk::impl::internal::SelectionIfaceClassImpl AtkSelectionIface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using MenuItemAccessibleImpl = detail::ObjectImpl<MenuItemAccessible, internal::MenuItemAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
