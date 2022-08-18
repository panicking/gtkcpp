// AUTO-GENERATED

#ifndef _GI_GTK_CHECKMENUITEM_HPP_
#define _GI_GTK_CHECKMENUITEM_HPP_

#include "menuitem.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class CheckMenuItem;

namespace base {


#define GI_GTK_CHECKMENUITEM_BASE base::CheckMenuItemBase
class CheckMenuItemBase : public Gtk::MenuItem
{
typedef Gtk::MenuItem super_type;
public:
typedef ::GtkCheckMenuItem BaseObjectType;

CheckMenuItemBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_check_menu_item_get_type(); } 

// GtkWidget* gtk_check_menu_item_new ();
// ::GtkCheckMenuItem* gtk_check_menu_item_new ();
static GI_INLINE_DECL Gtk::CheckMenuItem new_ () noexcept;

// GtkWidget* gtk_check_menu_item_new_with_label (const gchar* label);
// ::GtkCheckMenuItem* gtk_check_menu_item_new_with_label (const char* label);
static GI_INLINE_DECL Gtk::CheckMenuItem new_with_label (const std::string & label) noexcept;

// GtkWidget* gtk_check_menu_item_new_with_mnemonic (const gchar* label);
// ::GtkCheckMenuItem* gtk_check_menu_item_new_with_mnemonic (const char* label);
static GI_INLINE_DECL Gtk::CheckMenuItem new_with_mnemonic (const std::string & label) noexcept;

// gboolean gtk_check_menu_item_get_active (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_active (::GtkCheckMenuItem* check_menu_item);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_check_menu_item_get_draw_as_radio (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_draw_as_radio (::GtkCheckMenuItem* check_menu_item);
GI_INLINE_DECL bool get_draw_as_radio () noexcept;

// gboolean gtk_check_menu_item_get_inconsistent (GtkCheckMenuItem* check_menu_item);
// gboolean gtk_check_menu_item_get_inconsistent (::GtkCheckMenuItem* check_menu_item);
GI_INLINE_DECL bool get_inconsistent () noexcept;

// void gtk_check_menu_item_set_active (GtkCheckMenuItem* check_menu_item, gboolean is_active);
// void gtk_check_menu_item_set_active (::GtkCheckMenuItem* check_menu_item, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

// void gtk_check_menu_item_set_draw_as_radio (GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio);
// void gtk_check_menu_item_set_draw_as_radio (::GtkCheckMenuItem* check_menu_item, gboolean draw_as_radio);
GI_INLINE_DECL void set_draw_as_radio (gboolean draw_as_radio) noexcept;

// void gtk_check_menu_item_set_inconsistent (GtkCheckMenuItem* check_menu_item, gboolean setting);
// void gtk_check_menu_item_set_inconsistent (::GtkCheckMenuItem* check_menu_item, gboolean setting);
GI_INLINE_DECL void set_inconsistent (gboolean setting) noexcept;

// void gtk_check_menu_item_toggled (GtkCheckMenuItem* check_menu_item);
// void gtk_check_menu_item_toggled (::GtkCheckMenuItem* check_menu_item);
GI_INLINE_DECL void toggled () noexcept;

gi::property_proxy<bool, base::CheckMenuItemBase> property_active()
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "active"); }
const gi::property_proxy<bool, base::CheckMenuItemBase> property_active() const
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "active"); }

gi::property_proxy<bool, base::CheckMenuItemBase> property_draw_as_radio()
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "draw-as-radio"); }
const gi::property_proxy<bool, base::CheckMenuItemBase> property_draw_as_radio() const
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "draw-as-radio"); }

gi::property_proxy<bool, base::CheckMenuItemBase> property_inconsistent()
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "inconsistent"); }
const gi::property_proxy<bool, base::CheckMenuItemBase> property_inconsistent() const
{ return gi::property_proxy<bool, base::CheckMenuItemBase> (*this, "inconsistent"); }

// signal toggled
gi::signal_proxy<void(Gtk::CheckMenuItem)> signal_toggled()
{ return gi::signal_proxy<void(Gtk::CheckMenuItem)> (*this, "toggled"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitem_extra_def.hpp>)
#include <gtk/checkmenuitem_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/checkmenuitem_extra.hpp>)
#include <gtk/checkmenuitem_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class CheckMenuItem : public GI_GTK_CHECKMENUITEM_BASE
{ typedef GI_GTK_CHECKMENUITEM_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkCheckMenuItem>
{ typedef Gtk::CheckMenuItem type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class CheckMenuItemClassDef
{
typedef CheckMenuItemClassDef self;
public:
typedef Gtk::CheckMenuItem instance_type;
typedef ::GtkCheckMenuItemClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CheckMenuItem::draw_indicator (GtkCheckMenuItem* check_menu_item, cairo_t* cr);
// void CheckMenuItem::draw_indicator (::GtkCheckMenuItem* check_menu_item, ::cairo_t* cr);
virtual void draw_indicator_ (cairo::Context cr) noexcept = 0;

// void CheckMenuItem::toggled (GtkCheckMenuItem* check_menu_item);
// void CheckMenuItem::toggled (::GtkCheckMenuItem* check_menu_item);
virtual void toggled_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class CheckMenuItemClass: public detail::ClassTemplate<Gtk::impl::internal::CheckMenuItemClassDef, Gtk::impl::internal::MenuItemClass>
{
typedef CheckMenuItemClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::CheckMenuItemClassDef, Gtk::impl::internal::MenuItemClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void CheckMenuItem::draw_indicator (GtkCheckMenuItem* check_menu_item, cairo_t* cr);
// void CheckMenuItem::draw_indicator (::GtkCheckMenuItem* check_menu_item, ::cairo_t* cr);
GI_INLINE_DECL void draw_indicator_ (cairo::Context cr) noexcept override;

// void CheckMenuItem::toggled (GtkCheckMenuItem* check_menu_item);
// void CheckMenuItem::toggled (::GtkCheckMenuItem* check_menu_item);
GI_INLINE_DECL void toggled_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using CheckMenuItemImpl = detail::ObjectImpl<CheckMenuItem, internal::CheckMenuItemClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
