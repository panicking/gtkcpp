// AUTO-GENERATED

#ifndef _GI_GTK_MENUITEM_HPP_
#define _GI_GTK_MENUITEM_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Activatable;
class Menu;
class Widget;

class MenuItem;

namespace base {


#define GI_GTK_MENUITEM_BASE base::MenuItemBase
class MenuItemBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkMenuItem BaseObjectType;

MenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_menu_item_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

GI_INLINE_DECL Gtk::Activatable interface_ (gi::interface_tag<Gtk::Activatable>);

GI_INLINE_DECL operator Gtk::Activatable ();

// GtkWidget* gtk_menu_item_new ();
// ::GtkMenuItem* gtk_menu_item_new ();
static GI_INLINE_DECL Gtk::MenuItem new_ () noexcept;

// GtkWidget* gtk_menu_item_new_with_label (const gchar* label);
// ::GtkMenuItem* gtk_menu_item_new_with_label (const char* label);
static GI_INLINE_DECL Gtk::MenuItem new_with_label (const std::string & label) noexcept;

// GtkWidget* gtk_menu_item_new_with_mnemonic (const gchar* label);
// ::GtkMenuItem* gtk_menu_item_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::MenuItem new_with_mnemonic (const std::string & label) noexcept;

// void gtk_menu_item_activate (GtkMenuItem* menu_item);
// void gtk_menu_item_activate (::GtkMenuItem* menu_item);
GI_INLINE_DECL void activate () noexcept;

// void gtk_menu_item_deselect (GtkMenuItem* menu_item);
// void gtk_menu_item_deselect (::GtkMenuItem* menu_item);
GI_INLINE_DECL void deselect () noexcept;

// const gchar* gtk_menu_item_get_accel_path (GtkMenuItem* menu_item);
// const char* gtk_menu_item_get_accel_path (::GtkMenuItem* menu_item);
GI_INLINE_DECL std::string get_accel_path () noexcept;

// const gchar* gtk_menu_item_get_label (GtkMenuItem* menu_item);
// const char* gtk_menu_item_get_label (::GtkMenuItem* menu_item);
GI_INLINE_DECL std::string get_label () noexcept;

// gboolean gtk_menu_item_get_reserve_indicator (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_reserve_indicator (::GtkMenuItem* menu_item);
GI_INLINE_DECL bool get_reserve_indicator () noexcept;

// gboolean gtk_menu_item_get_right_justified (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_right_justified (::GtkMenuItem* menu_item);
// IGNORE; deprecated

// GtkWidget* gtk_menu_item_get_submenu (GtkMenuItem* menu_item);
// ::GtkWidget* gtk_menu_item_get_submenu (::GtkMenuItem* menu_item);
GI_INLINE_DECL Gtk::Widget get_submenu () noexcept;

// gboolean gtk_menu_item_get_use_underline (GtkMenuItem* menu_item);
// gboolean gtk_menu_item_get_use_underline (::GtkMenuItem* menu_item);
GI_INLINE_DECL bool get_use_underline () noexcept;

// void gtk_menu_item_select (GtkMenuItem* menu_item);
// void gtk_menu_item_select (::GtkMenuItem* menu_item);
GI_INLINE_DECL void select () noexcept;

// void gtk_menu_item_set_accel_path (GtkMenuItem* menu_item, const gchar* accel_path);
// void gtk_menu_item_set_accel_path (::GtkMenuItem* menu_item, const char* accel_path);
GI_INLINE_DECL void set_accel_path (const std::string & accel_path) noexcept;
GI_INLINE_DECL void set_accel_path () noexcept;

// void gtk_menu_item_set_label (GtkMenuItem* menu_item, const gchar* label);
// void gtk_menu_item_set_label (::GtkMenuItem* menu_item, const char* label);
GI_INLINE_DECL void set_label (const std::string & label) noexcept;

// void gtk_menu_item_set_reserve_indicator (GtkMenuItem* menu_item, gboolean reserve);
// void gtk_menu_item_set_reserve_indicator (::GtkMenuItem* menu_item, gboolean reserve);
GI_INLINE_DECL void set_reserve_indicator (gboolean reserve) noexcept;

// void gtk_menu_item_set_right_justified (GtkMenuItem* menu_item, gboolean right_justified);
// void gtk_menu_item_set_right_justified (::GtkMenuItem* menu_item, gboolean right_justified);
// IGNORE; deprecated

// void gtk_menu_item_set_submenu (GtkMenuItem* menu_item, GtkWidget* submenu);
// void gtk_menu_item_set_submenu (::GtkMenuItem* menu_item, ::GtkMenu* submenu);
GI_INLINE_DECL void set_submenu (Gtk::Menu submenu) noexcept;
GI_INLINE_DECL void set_submenu () noexcept;

// void gtk_menu_item_set_use_underline (GtkMenuItem* menu_item, gboolean setting);
// void gtk_menu_item_set_use_underline (::GtkMenuItem* menu_item, gboolean setting);
GI_INLINE_DECL void set_use_underline (gboolean setting) noexcept;

// void gtk_menu_item_toggle_size_allocate (GtkMenuItem* menu_item, gint allocation);
// void gtk_menu_item_toggle_size_allocate (::GtkMenuItem* menu_item, gint allocation);
GI_INLINE_DECL void toggle_size_allocate (gint allocation) noexcept;

// void gtk_menu_item_toggle_size_request (GtkMenuItem* menu_item, gint* requisition);
// void gtk_menu_item_toggle_size_request (::GtkMenuItem* menu_item, gint* requisition);
GI_INLINE_DECL void toggle_size_request (gint & requisition) noexcept;

gi::property_proxy<std::string, base::MenuItemBase> property_accel_path()
{ return gi::property_proxy<std::string, base::MenuItemBase> (*this, "accel-path"); }
const gi::property_proxy<std::string, base::MenuItemBase> property_accel_path() const
{ return gi::property_proxy<std::string, base::MenuItemBase> (*this, "accel-path"); }

gi::property_proxy<std::string, base::MenuItemBase> property_label()
{ return gi::property_proxy<std::string, base::MenuItemBase> (*this, "label"); }
const gi::property_proxy<std::string, base::MenuItemBase> property_label() const
{ return gi::property_proxy<std::string, base::MenuItemBase> (*this, "label"); }

gi::property_proxy<bool, base::MenuItemBase> property_right_justified()
{ return gi::property_proxy<bool, base::MenuItemBase> (*this, "right-justified"); }
const gi::property_proxy<bool, base::MenuItemBase> property_right_justified() const
{ return gi::property_proxy<bool, base::MenuItemBase> (*this, "right-justified"); }

gi::property_proxy<Gtk::Menu, base::MenuItemBase> property_submenu()
{ return gi::property_proxy<Gtk::Menu, base::MenuItemBase> (*this, "submenu"); }
const gi::property_proxy<Gtk::Menu, base::MenuItemBase> property_submenu() const
{ return gi::property_proxy<Gtk::Menu, base::MenuItemBase> (*this, "submenu"); }

gi::property_proxy<bool, base::MenuItemBase> property_use_underline()
{ return gi::property_proxy<bool, base::MenuItemBase> (*this, "use-underline"); }
const gi::property_proxy<bool, base::MenuItemBase> property_use_underline() const
{ return gi::property_proxy<bool, base::MenuItemBase> (*this, "use-underline"); }

// signal activate
gi::signal_proxy<void(Gtk::MenuItem)> signal_activate()
{ return gi::signal_proxy<void(Gtk::MenuItem)> (*this, "activate"); }

// signal activate-item
gi::signal_proxy<void(Gtk::MenuItem)> signal_activate_item()
{ return gi::signal_proxy<void(Gtk::MenuItem)> (*this, "activate-item"); }

// signal deselect
gi::signal_proxy<void(Gtk::MenuItem)> signal_deselect()
{ return gi::signal_proxy<void(Gtk::MenuItem)> (*this, "deselect"); }

// signal select
gi::signal_proxy<void(Gtk::MenuItem)> signal_select()
{ return gi::signal_proxy<void(Gtk::MenuItem)> (*this, "select"); }

// signal toggle-size-allocate
gi::signal_proxy<void(Gtk::MenuItem, gint object)> signal_toggle_size_allocate()
{ return gi::signal_proxy<void(Gtk::MenuItem, gint object)> (*this, "toggle-size-allocate"); }

// signal toggle-size-request
gi::signal_proxy<void(Gtk::MenuItem, void* object)> signal_toggle_size_request()
{ return gi::signal_proxy<void(Gtk::MenuItem, void* object)> (*this, "toggle-size-request"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menuitem_extra_def.hpp>)
#include <gtk/menuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menuitem_extra.hpp>)
#include <gtk/menuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class MenuItem : public GI_GTK_MENUITEM_BASE
{ typedef GI_GTK_MENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkMenuItem>
{ typedef Gtk::MenuItem type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class MenuItemClassDef
{
typedef MenuItemClassDef self;
public:
typedef Gtk::MenuItem instance_type;
typedef ::GtkMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void MenuItem::activate (GtkMenuItem* menu_item);
// void MenuItem::activate (::GtkMenuItem* menu_item);
virtual void activate_ () noexcept = 0;

// void MenuItem::activate_item (GtkMenuItem* menu_item);
// void MenuItem::activate_item (::GtkMenuItem* menu_item);
virtual void activate_item_ () noexcept = 0;

// void MenuItem::deselect (GtkMenuItem* menu_item);
// void MenuItem::deselect (::GtkMenuItem* menu_item);
virtual void deselect_ () noexcept = 0;

// const gchar* MenuItem::get_label (GtkMenuItem* menu_item);
// const char* MenuItem::get_label (::GtkMenuItem* menu_item);
// SKIP; invalid callback return transfer none

// void MenuItem::select (GtkMenuItem* menu_item);
// void MenuItem::select (::GtkMenuItem* menu_item);
virtual void select_ () noexcept = 0;

// void MenuItem::set_label (GtkMenuItem* menu_item, const gchar* label);
// void MenuItem::set_label (::GtkMenuItem* menu_item, const char* label);
virtual void set_label_ (const std::string & label) noexcept = 0;

// void MenuItem::toggle_size_allocate (GtkMenuItem* menu_item, gint allocation);
// void MenuItem::toggle_size_allocate (::GtkMenuItem* menu_item, gint allocation);
virtual void toggle_size_allocate_ (gint allocation) noexcept = 0;

// void MenuItem::toggle_size_request (GtkMenuItem* menu_item, gint* requisition);
// void MenuItem::toggle_size_request (::GtkMenuItem* menu_item, gint* requisition);
// SKIP; virtual-method out parameter not supported


};

GI_CLASS_IMPL_BEGIN


class MenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::MenuItemClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
typedef MenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::MenuItemClassDef, Gtk::impl::internal::BinClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void MenuItem::activate (GtkMenuItem* menu_item);
// void MenuItem::activate (::GtkMenuItem* menu_item);
GI_INLINE_DECL void activate_ () noexcept override;

// void MenuItem::activate_item (GtkMenuItem* menu_item);
// void MenuItem::activate_item (::GtkMenuItem* menu_item);
GI_INLINE_DECL void activate_item_ () noexcept override;

// void MenuItem::deselect (GtkMenuItem* menu_item);
// void MenuItem::deselect (::GtkMenuItem* menu_item);
GI_INLINE_DECL void deselect_ () noexcept override;

// const gchar* MenuItem::get_label (GtkMenuItem* menu_item);
// const char* MenuItem::get_label (::GtkMenuItem* menu_item);
// SKIP; invalid callback return transfer none

// void MenuItem::select (GtkMenuItem* menu_item);
// void MenuItem::select (::GtkMenuItem* menu_item);
GI_INLINE_DECL void select_ () noexcept override;

// void MenuItem::set_label (GtkMenuItem* menu_item, const gchar* label);
// void MenuItem::set_label (::GtkMenuItem* menu_item, const char* label);
GI_INLINE_DECL void set_label_ (const std::string & label) noexcept override;

// void MenuItem::toggle_size_allocate (GtkMenuItem* menu_item, gint allocation);
// void MenuItem::toggle_size_allocate (::GtkMenuItem* menu_item, gint allocation);
GI_INLINE_DECL void toggle_size_allocate_ (gint allocation) noexcept override;

// void MenuItem::toggle_size_request (GtkMenuItem* menu_item, gint* requisition);
// void MenuItem::toggle_size_request (::GtkMenuItem* menu_item, gint* requisition);
// SKIP; virtual-method out parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using MenuItemImpl = detail::ObjectImpl<MenuItem, internal::MenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
