// AUTO-GENERATED

#ifndef _GI_GTK_MENUBUTTON_HPP_
#define _GI_GTK_MENUBUTTON_HPP_

#include "togglebutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Container;
class Menu;
class Popover;
class Widget;

class MenuButton;

namespace base {


#define GI_GTK_MENUBUTTON_BASE base::MenuButtonBase
class MenuButtonBase : public Gtk::ToggleButton
{
typedef Gtk::ToggleButton super_type;
public:
typedef ::GtkMenuButton BaseObjectType;

MenuButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_button_get_type(); } 

// GtkWidget* gtk_menu_button_new ();
// ::GtkMenuButton* gtk_menu_button_new ();
static GI_INLINE_DECL Gtk::MenuButton new_ () noexcept;

// GtkWidget* gtk_menu_button_get_align_widget (GtkMenuButton* menu_button);
// ::GtkWidget* gtk_menu_button_get_align_widget (::GtkMenuButton* menu_button);
GI_INLINE_DECL Gtk::Widget get_align_widget () noexcept;

// GtkArrowType gtk_menu_button_get_direction (GtkMenuButton* menu_button);
// ::GtkArrowType gtk_menu_button_get_direction (::GtkMenuButton* menu_button);
GI_INLINE_DECL Gtk::ArrowType get_direction () noexcept;

// GMenuModel* gtk_menu_button_get_menu_model (GtkMenuButton* menu_button);
// ::GMenuModel* gtk_menu_button_get_menu_model (::GtkMenuButton* menu_button);
GI_INLINE_DECL Gio::MenuModel get_menu_model () noexcept;

// GtkPopover* gtk_menu_button_get_popover (GtkMenuButton* menu_button);
// ::GtkPopover* gtk_menu_button_get_popover (::GtkMenuButton* menu_button);
GI_INLINE_DECL Gtk::Popover get_popover () noexcept;

// GtkMenu* gtk_menu_button_get_popup (GtkMenuButton* menu_button);
// ::GtkMenu* gtk_menu_button_get_popup (::GtkMenuButton* menu_button);
GI_INLINE_DECL Gtk::Menu get_popup () noexcept;

// gboolean gtk_menu_button_get_use_popover (GtkMenuButton* menu_button);
// gboolean gtk_menu_button_get_use_popover (::GtkMenuButton* menu_button);
GI_INLINE_DECL bool get_use_popover () noexcept;

// void gtk_menu_button_set_align_widget (GtkMenuButton* menu_button, GtkWidget* align_widget);
// void gtk_menu_button_set_align_widget (::GtkMenuButton* menu_button, ::GtkWidget* align_widget);
GI_INLINE_DECL void set_align_widget (Gtk::Widget align_widget) noexcept;
GI_INLINE_DECL void set_align_widget () noexcept;

// void gtk_menu_button_set_direction (GtkMenuButton* menu_button, GtkArrowType direction);
// void gtk_menu_button_set_direction (::GtkMenuButton* menu_button, ::GtkArrowType direction);
GI_INLINE_DECL void set_direction (Gtk::ArrowType direction) noexcept;

// void gtk_menu_button_set_menu_model (GtkMenuButton* menu_button, GMenuModel* menu_model);
// void gtk_menu_button_set_menu_model (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
GI_INLINE_DECL void set_menu_model (Gio::MenuModel menu_model) noexcept;
GI_INLINE_DECL void set_menu_model () noexcept;

// void gtk_menu_button_set_popover (GtkMenuButton* menu_button, GtkWidget* popover);
// void gtk_menu_button_set_popover (::GtkMenuButton* menu_button, ::GtkWidget* popover);
GI_INLINE_DECL void set_popover (Gtk::Widget popover) noexcept;
GI_INLINE_DECL void set_popover () noexcept;

// void gtk_menu_button_set_popup (GtkMenuButton* menu_button, GtkWidget* menu);
// void gtk_menu_button_set_popup (::GtkMenuButton* menu_button, ::GtkWidget* menu);
GI_INLINE_DECL void set_popup (Gtk::Widget menu) noexcept;
GI_INLINE_DECL void set_popup () noexcept;

// void gtk_menu_button_set_use_popover (GtkMenuButton* menu_button, gboolean use_popover);
// void gtk_menu_button_set_use_popover (::GtkMenuButton* menu_button, gboolean use_popover);
GI_INLINE_DECL void set_use_popover (gboolean use_popover) noexcept;

gi::property_proxy<Gtk::Container, base::MenuButtonBase> property_align_widget()
{ return gi::property_proxy<Gtk::Container, base::MenuButtonBase> (*this, "align-widget"); }
const gi::property_proxy<Gtk::Container, base::MenuButtonBase> property_align_widget() const
{ return gi::property_proxy<Gtk::Container, base::MenuButtonBase> (*this, "align-widget"); }

gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> property_direction()
{ return gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> (*this, "direction"); }
const gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> property_direction() const
{ return gi::property_proxy<Gtk::ArrowType, base::MenuButtonBase> (*this, "direction"); }

gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> property_menu_model()
{ return gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> (*this, "menu-model"); }
const gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> property_menu_model() const
{ return gi::property_proxy<Gio::MenuModel, base::MenuButtonBase> (*this, "menu-model"); }

gi::property_proxy<Gtk::Popover, base::MenuButtonBase> property_popover()
{ return gi::property_proxy<Gtk::Popover, base::MenuButtonBase> (*this, "popover"); }
const gi::property_proxy<Gtk::Popover, base::MenuButtonBase> property_popover() const
{ return gi::property_proxy<Gtk::Popover, base::MenuButtonBase> (*this, "popover"); }

gi::property_proxy<Gtk::Menu, base::MenuButtonBase> property_popup()
{ return gi::property_proxy<Gtk::Menu, base::MenuButtonBase> (*this, "popup"); }
const gi::property_proxy<Gtk::Menu, base::MenuButtonBase> property_popup() const
{ return gi::property_proxy<Gtk::Menu, base::MenuButtonBase> (*this, "popup"); }

gi::property_proxy<bool, base::MenuButtonBase> property_use_popover()
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "use-popover"); }
const gi::property_proxy<bool, base::MenuButtonBase> property_use_popover() const
{ return gi::property_proxy<bool, base::MenuButtonBase> (*this, "use-popover"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_def.hpp>)
#include <gtk/menubutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra.hpp>)
#include <gtk/menubutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuButton : public GI_GTK_MENUBUTTON_BASE
{ typedef GI_GTK_MENUBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuButton>
{ typedef Gtk::MenuButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuButtonClassDef
{
typedef MenuButtonClassDef self;
public:
typedef Gtk::MenuButton instance_type;
typedef ::GtkMenuButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class MenuButtonClass: public detail::ClassTemplate<Gtk::impl::internal::MenuButtonClassDef, Gtk::impl::internal::ToggleButtonClass>
{
typedef MenuButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuButtonClassDef, Gtk::impl::internal::ToggleButtonClass> super;

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

using MenuButtonImpl = detail::ObjectImpl<MenuButton, internal::MenuButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
