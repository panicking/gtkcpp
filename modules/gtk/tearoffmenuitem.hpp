// AUTO-GENERATED

#ifndef _GI_GTK_TEAROFFMENUITEM_HPP_
#define _GI_GTK_TEAROFFMENUITEM_HPP_

#include "menuitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class TearoffMenuItem;

namespace base {


#define GI_GTK_TEAROFFMENUITEM_BASE base::TearoffMenuItemBase
class TearoffMenuItemBase : public Gtk::MenuItem
{
typedef Gtk::MenuItem super_type;
public:
typedef ::GtkTearoffMenuItem BaseObjectType;

TearoffMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_tearoff_menu_item_get_type(); } 

// GtkWidget* gtk_tearoff_menu_item_new ();
// ::GtkTearoffMenuItem* gtk_tearoff_menu_item_new ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/tearoffmenuitem_extra_def.hpp>)
#include <gtk/tearoffmenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/tearoffmenuitem_extra.hpp>)
#include <gtk/tearoffmenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class TearoffMenuItem : public GI_GTK_TEAROFFMENUITEM_BASE
{ typedef GI_GTK_TEAROFFMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkTearoffMenuItem>
{ typedef Gtk::TearoffMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class TearoffMenuItemClassDef
{
typedef TearoffMenuItemClassDef self;
public:
typedef Gtk::TearoffMenuItem instance_type;
typedef ::GtkTearoffMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class TearoffMenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::TearoffMenuItemClassDef, Gtk::impl::internal::MenuItemClass>
{
typedef TearoffMenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::TearoffMenuItemClassDef, Gtk::impl::internal::MenuItemClass> super;

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

using TearoffMenuItemImpl = detail::ObjectImpl<TearoffMenuItem, internal::TearoffMenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
