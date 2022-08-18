// AUTO-GENERATED

#ifndef _GI_GTK_MENUBUTTONACCESSIBLE_HPP_
#define _GI_GTK_MENUBUTTONACCESSIBLE_HPP_

#include "togglebuttonaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MenuButtonAccessible;

namespace base {


#define GI_GTK_MENUBUTTONACCESSIBLE_BASE base::MenuButtonAccessibleBase
class MenuButtonAccessibleBase : public Gtk::ToggleButtonAccessible
{
typedef Gtk::ToggleButtonAccessible super_type;
public:
typedef ::GtkMenuButtonAccessible BaseObjectType;

MenuButtonAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_button_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubuttonaccessible_extra_def.hpp>)
#include <gtk/menubuttonaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubuttonaccessible_extra.hpp>)
#include <gtk/menubuttonaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuButtonAccessible : public GI_GTK_MENUBUTTONACCESSIBLE_BASE
{ typedef GI_GTK_MENUBUTTONACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuButtonAccessible>
{ typedef Gtk::MenuButtonAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuButtonAccessibleClassDef
{
typedef MenuButtonAccessibleClassDef self;
public:
typedef Gtk::MenuButtonAccessible instance_type;
typedef ::GtkMenuButtonAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuButtonAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::MenuButtonAccessibleClassDef, Gtk::impl::internal::ToggleButtonAccessibleClass>
{
typedef MenuButtonAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuButtonAccessibleClassDef, Gtk::impl::internal::ToggleButtonAccessibleClass> super;

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

using MenuButtonAccessibleImpl = detail::ObjectImpl<MenuButtonAccessible, internal::MenuButtonAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
