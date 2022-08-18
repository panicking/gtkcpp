// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSSHORTCUT_HPP_
#define _GI_GTK_SHORTCUTSSHORTCUT_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class SizeGroup;

class ShortcutsShortcut;

namespace base {


#define GI_GTK_SHORTCUTSSHORTCUT_BASE base::ShortcutsShortcutBase
class ShortcutsShortcutBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkShortcutsShortcut BaseObjectType;

ShortcutsShortcutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcuts_shortcut_get_type(); } 

gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsShortcutBase> property_accel_size_group()
{ return gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsShortcutBase> (*this, "accel-size-group"); }

gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_accelerator()
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "accelerator"); }
const gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_accelerator() const
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "accelerator"); }

gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_action_name()
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "action-name"); }
const gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_action_name() const
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "action-name"); }

gi::property_proxy<Gtk::TextDirection, base::ShortcutsShortcutBase> property_direction()
{ return gi::property_proxy<Gtk::TextDirection, base::ShortcutsShortcutBase> (*this, "direction"); }
const gi::property_proxy<Gtk::TextDirection, base::ShortcutsShortcutBase> property_direction() const
{ return gi::property_proxy<Gtk::TextDirection, base::ShortcutsShortcutBase> (*this, "direction"); }

gi::property_proxy<Gio::Icon, base::ShortcutsShortcutBase> property_icon()
{ return gi::property_proxy<Gio::Icon, base::ShortcutsShortcutBase> (*this, "icon"); }
const gi::property_proxy<Gio::Icon, base::ShortcutsShortcutBase> property_icon() const
{ return gi::property_proxy<Gio::Icon, base::ShortcutsShortcutBase> (*this, "icon"); }

gi::property_proxy<bool, base::ShortcutsShortcutBase> property_icon_set()
{ return gi::property_proxy<bool, base::ShortcutsShortcutBase> (*this, "icon-set"); }
const gi::property_proxy<bool, base::ShortcutsShortcutBase> property_icon_set() const
{ return gi::property_proxy<bool, base::ShortcutsShortcutBase> (*this, "icon-set"); }

gi::property_proxy<Gtk::ShortcutType, base::ShortcutsShortcutBase> property_shortcut_type()
{ return gi::property_proxy<Gtk::ShortcutType, base::ShortcutsShortcutBase> (*this, "shortcut-type"); }
const gi::property_proxy<Gtk::ShortcutType, base::ShortcutsShortcutBase> property_shortcut_type() const
{ return gi::property_proxy<Gtk::ShortcutType, base::ShortcutsShortcutBase> (*this, "shortcut-type"); }

gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_subtitle()
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "subtitle"); }
const gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_subtitle() const
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "subtitle"); }

gi::property_proxy<bool, base::ShortcutsShortcutBase> property_subtitle_set()
{ return gi::property_proxy<bool, base::ShortcutsShortcutBase> (*this, "subtitle-set"); }
const gi::property_proxy<bool, base::ShortcutsShortcutBase> property_subtitle_set() const
{ return gi::property_proxy<bool, base::ShortcutsShortcutBase> (*this, "subtitle-set"); }

gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_title()
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "title"); }
const gi::property_proxy<std::string, base::ShortcutsShortcutBase> property_title() const
{ return gi::property_proxy<std::string, base::ShortcutsShortcutBase> (*this, "title"); }

gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsShortcutBase> property_title_size_group()
{ return gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsShortcutBase> (*this, "title-size-group"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutsshortcut_extra_def.hpp>)
#include <gtk/shortcutsshortcut_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutsshortcut_extra.hpp>)
#include <gtk/shortcutsshortcut_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutsShortcut : public GI_GTK_SHORTCUTSSHORTCUT_BASE
{ typedef GI_GTK_SHORTCUTSSHORTCUT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutsShortcut>
{ typedef Gtk::ShortcutsShortcut type; }; 

} // namespace repository

} // namespace gi

#endif
