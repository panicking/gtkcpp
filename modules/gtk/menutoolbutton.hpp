// AUTO-GENERATED

#ifndef _GI_GTK_MENUTOOLBUTTON_HPP_
#define _GI_GTK_MENUTOOLBUTTON_HPP_

#include "toolbutton.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Menu;
class Widget;

class MenuToolButton;

namespace base {


#define GI_GTK_MENUTOOLBUTTON_BASE base::MenuToolButtonBase
class MenuToolButtonBase : public Gtk::ToolButton
{
typedef Gtk::ToolButton super_type;
public:
typedef ::GtkMenuToolButton BaseObjectType;

MenuToolButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_tool_button_get_type(); } 

// GtkToolItem* gtk_menu_tool_button_new (GtkWidget* icon_widget, const gchar* label);
// ::GtkMenuToolButton* gtk_menu_tool_button_new (::GtkWidget* icon_widget, const char* label);
static GI_INLINE_DECL Gtk::MenuToolButton new_ (Gtk::Widget icon_widget, const std::string & label) noexcept;
static GI_INLINE_DECL Gtk::MenuToolButton new_ () noexcept;

// GtkToolItem* gtk_menu_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkMenuToolButton* gtk_menu_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// GtkWidget* gtk_menu_tool_button_get_menu (GtkMenuToolButton* button);
// ::GtkWidget* gtk_menu_tool_button_get_menu (::GtkMenuToolButton* button);
GI_INLINE_DECL Gtk::Widget get_menu () noexcept;

// void gtk_menu_tool_button_set_arrow_tooltip_markup (GtkMenuToolButton* button, const gchar* markup);
// void gtk_menu_tool_button_set_arrow_tooltip_markup (::GtkMenuToolButton* button, const char* markup);
GI_INLINE_DECL void set_arrow_tooltip_markup (const std::string & markup) noexcept;

// void gtk_menu_tool_button_set_arrow_tooltip_text (GtkMenuToolButton* button, const gchar* text);
// void gtk_menu_tool_button_set_arrow_tooltip_text (::GtkMenuToolButton* button, const char* text);
GI_INLINE_DECL void set_arrow_tooltip_text (const std::string & text) noexcept;

// void gtk_menu_tool_button_set_menu (GtkMenuToolButton* button, GtkWidget* menu);
// void gtk_menu_tool_button_set_menu (::GtkMenuToolButton* button, ::GtkWidget* menu);
GI_INLINE_DECL void set_menu (Gtk::Widget menu) noexcept;

gi::property_proxy<Gtk::Menu, base::MenuToolButtonBase> property_menu()
{ return gi::property_proxy<Gtk::Menu, base::MenuToolButtonBase> (*this, "menu"); }
const gi::property_proxy<Gtk::Menu, base::MenuToolButtonBase> property_menu() const
{ return gi::property_proxy<Gtk::Menu, base::MenuToolButtonBase> (*this, "menu"); }

// signal show-menu
gi::signal_proxy<void(Gtk::MenuToolButton)> signal_show_menu()
{ return gi::signal_proxy<void(Gtk::MenuToolButton)> (*this, "show-menu"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menutoolbutton_extra_def.hpp>)
#include <gtk/menutoolbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menutoolbutton_extra.hpp>)
#include <gtk/menutoolbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuToolButton : public GI_GTK_MENUTOOLBUTTON_BASE
{ typedef GI_GTK_MENUTOOLBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuToolButton>
{ typedef Gtk::MenuToolButton type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuToolButtonClassDef
{
typedef MenuToolButtonClassDef self;
public:
typedef Gtk::MenuToolButton instance_type;
typedef ::GtkMenuToolButtonClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MenuToolButton::show_menu (GtkMenuToolButton* button);
// void MenuToolButton::show_menu (::GtkMenuToolButton* button);
virtual void show_menu_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MenuToolButtonClass: public detail::ClassTemplate<Gtk::impl::internal::MenuToolButtonClassDef, Gtk::impl::internal::ToolButtonClass>
{
typedef MenuToolButtonClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuToolButtonClassDef, Gtk::impl::internal::ToolButtonClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void MenuToolButton::show_menu (GtkMenuToolButton* button);
// void MenuToolButton::show_menu (::GtkMenuToolButton* button);
GI_INLINE_DECL void show_menu_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuToolButtonImpl = detail::ObjectImpl<MenuToolButton, internal::MenuToolButtonClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
