// AUTO-GENERATED

#ifndef _GI_GTK_POPOVERMENU_HPP_
#define _GI_GTK_POPOVERMENU_HPP_

#include "popover.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class PopoverMenu;

namespace base {


#define GI_GTK_POPOVERMENU_BASE base::PopoverMenuBase
class PopoverMenuBase : public Gtk::Popover
{
typedef Gtk::Popover super_type;
public:
typedef ::GtkPopoverMenu BaseObjectType;

PopoverMenuBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_popover_menu_get_type(); } 

// GtkWidget* gtk_popover_menu_new ();
// ::GtkPopoverMenu* gtk_popover_menu_new ();
static GI_INLINE_DECL Gtk::PopoverMenu new_ () noexcept;

// void gtk_popover_menu_open_submenu (GtkPopoverMenu* popover, const gchar* name);
// void gtk_popover_menu_open_submenu (::GtkPopoverMenu* popover, const char* name);
GI_INLINE_DECL void open_submenu (const std::string & name) noexcept;

gi::property_proxy<std::string, base::PopoverMenuBase> property_visible_submenu()
{ return gi::property_proxy<std::string, base::PopoverMenuBase> (*this, "visible-submenu"); }
const gi::property_proxy<std::string, base::PopoverMenuBase> property_visible_submenu() const
{ return gi::property_proxy<std::string, base::PopoverMenuBase> (*this, "visible-submenu"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra_def.hpp>)
#include <gtk/popovermenu_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/popovermenu_extra.hpp>)
#include <gtk/popovermenu_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PopoverMenu : public GI_GTK_POPOVERMENU_BASE
{ typedef GI_GTK_POPOVERMENU_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPopoverMenu>
{ typedef Gtk::PopoverMenu type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class PopoverMenuClassDef
{
typedef PopoverMenuClassDef self;
public:
typedef Gtk::PopoverMenu instance_type;
typedef ::GtkPopoverMenuClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class PopoverMenuClass: public detail::ClassTemplate<Gtk::impl::internal::PopoverMenuClassDef, Gtk::impl::internal::PopoverClass>
{
typedef PopoverMenuClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::PopoverMenuClassDef, Gtk::impl::internal::PopoverClass> super;

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

using PopoverMenuImpl = detail::ObjectImpl<PopoverMenu, internal::PopoverMenuClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
