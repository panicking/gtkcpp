// AUTO-GENERATED

#ifndef _GI_GTK_SEPARATORMENUITEM_HPP_
#define _GI_GTK_SEPARATORMENUITEM_HPP_

#include "menuitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class SeparatorMenuItem;

namespace base {


#define GI_GTK_SEPARATORMENUITEM_BASE base::SeparatorMenuItemBase
class SeparatorMenuItemBase : public Gtk::MenuItem
{
typedef Gtk::MenuItem super_type;
public:
typedef ::GtkSeparatorMenuItem BaseObjectType;

SeparatorMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_separator_menu_item_get_type(); } 

// GtkWidget* gtk_separator_menu_item_new ();
// ::GtkSeparatorMenuItem* gtk_separator_menu_item_new ();
static GI_INLINE_DECL Gtk::SeparatorMenuItem new_ () noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/separatormenuitem_extra_def.hpp>)
#include <gtk/separatormenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/separatormenuitem_extra.hpp>)
#include <gtk/separatormenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class SeparatorMenuItem : public GI_GTK_SEPARATORMENUITEM_BASE
{ typedef GI_GTK_SEPARATORMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSeparatorMenuItem>
{ typedef Gtk::SeparatorMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SeparatorMenuItemClassDef
{
typedef SeparatorMenuItemClassDef self;
public:
typedef Gtk::SeparatorMenuItem instance_type;
typedef ::GtkSeparatorMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SeparatorMenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::SeparatorMenuItemClassDef, Gtk::impl::internal::MenuItemClass>
{
typedef SeparatorMenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SeparatorMenuItemClassDef, Gtk::impl::internal::MenuItemClass> super;

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

using SeparatorMenuItemImpl = detail::ObjectImpl<SeparatorMenuItem, internal::SeparatorMenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
