// AUTO-GENERATED

#ifndef _GI_GTK_CHECKMENUITEMACCESSIBLE_HPP_
#define _GI_GTK_CHECKMENUITEMACCESSIBLE_HPP_

#include "menuitemaccessible.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CheckMenuItemAccessible;

namespace base {


#define GI_GTK_CHECKMENUITEMACCESSIBLE_BASE base::CheckMenuItemAccessibleBase
class CheckMenuItemAccessibleBase : public Gtk::MenuItemAccessible
{
typedef Gtk::MenuItemAccessible super_type;
public:
typedef ::GtkCheckMenuItemAccessible BaseObjectType;

CheckMenuItemAccessibleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_check_menu_item_accessible_get_type(); } 

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitemaccessible_extra_def.hpp>)
#include <gtk/checkmenuitemaccessible_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitemaccessible_extra.hpp>)
#include <gtk/checkmenuitemaccessible_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CheckMenuItemAccessible : public GI_GTK_CHECKMENUITEMACCESSIBLE_BASE
{ typedef GI_GTK_CHECKMENUITEMACCESSIBLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCheckMenuItemAccessible>
{ typedef Gtk::CheckMenuItemAccessible type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CheckMenuItemAccessibleClassDef
{
typedef CheckMenuItemAccessibleClassDef self;
public:
typedef Gtk::CheckMenuItemAccessible instance_type;
typedef ::GtkCheckMenuItemAccessibleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CheckMenuItemAccessibleClass: public detail::ClassTemplate<Gtk::impl::internal::CheckMenuItemAccessibleClassDef, Gtk::impl::internal::MenuItemAccessibleClass>
{
typedef CheckMenuItemAccessibleClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CheckMenuItemAccessibleClassDef, Gtk::impl::internal::MenuItemAccessibleClass> super;

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

using CheckMenuItemAccessibleImpl = detail::ObjectImpl<CheckMenuItemAccessible, internal::CheckMenuItemAccessibleClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
