// AUTO-GENERATED

#ifndef _GI_GTK_MENUACCESSIBLE_HPP_
#define _GI_GTK_MENUACCESSIBLE_HPP_

#include "menushellaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class MenuAccessible;

namespace base {


#define GI_GTK_MENUACCESSIBLE_BASE base::MenuAccessibleBase
class MenuAccessibleBase : public Gtk::MenuShellAccessible
{
typedef Gtk::MenuShellAccessible super_type;
public:
typedef ::GtkMenuAccessible BaseObjectType;

MenuAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menuaccessible_extra_def.hpp>)
#include <gtk/menuaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menuaccessible_extra.hpp>)
#include <gtk/menuaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuAccessible : public GI_GTK_MENUACCESSIBLE_BASE
{ typedef GI_GTK_MENUACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuAccessible>
{ typedef Gtk::MenuAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuAccessibleClassDef
{
typedef MenuAccessibleClassDef self;
public:
typedef Gtk::MenuAccessible instance_type;
typedef ::GtkMenuAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::MenuAccessibleClassDef, Gtk::impl::internal::MenuShellAccessibleClass>
{
typedef MenuAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuAccessibleClassDef, Gtk::impl::internal::MenuShellAccessibleClass> super;

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

using MenuAccessibleImpl = detail::ObjectImpl<MenuAccessible, internal::MenuAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
