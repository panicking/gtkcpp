// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSGROUP_HPP_
#define _GI_GTK_SHORTCUTSGROUP_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class SizeGroup;

class ShortcutsGroup;

namespace base {


#define GI_GTK_SHORTCUTSGROUP_BASE base::ShortcutsGroupBase
class ShortcutsGroupBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkShortcutsGroup BaseObjectType;

ShortcutsGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcuts_group_get_type(); } 

gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsGroupBase> property_accel_size_group()
{ return gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsGroupBase> (*this, "accel-size-group"); }

gi::property_proxy<guint, base::ShortcutsGroupBase> property_height()
{ return gi::property_proxy<guint, base::ShortcutsGroupBase> (*this, "height"); }
const gi::property_proxy<guint, base::ShortcutsGroupBase> property_height() const
{ return gi::property_proxy<guint, base::ShortcutsGroupBase> (*this, "height"); }

gi::property_proxy<std::string, base::ShortcutsGroupBase> property_title()
{ return gi::property_proxy<std::string, base::ShortcutsGroupBase> (*this, "title"); }
const gi::property_proxy<std::string, base::ShortcutsGroupBase> property_title() const
{ return gi::property_proxy<std::string, base::ShortcutsGroupBase> (*this, "title"); }

gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsGroupBase> property_title_size_group()
{ return gi::property_proxy_write<Gtk::SizeGroup, base::ShortcutsGroupBase> (*this, "title-size-group"); }

gi::property_proxy<std::string, base::ShortcutsGroupBase> property_view()
{ return gi::property_proxy<std::string, base::ShortcutsGroupBase> (*this, "view"); }
const gi::property_proxy<std::string, base::ShortcutsGroupBase> property_view() const
{ return gi::property_proxy<std::string, base::ShortcutsGroupBase> (*this, "view"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutsgroup_extra_def.hpp>)
#include <gtk/shortcutsgroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutsgroup_extra.hpp>)
#include <gtk/shortcutsgroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutsGroup : public GI_GTK_SHORTCUTSGROUP_BASE
{ typedef GI_GTK_SHORTCUTSGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutsGroup>
{ typedef Gtk::ShortcutsGroup type; }; 

} // namespace repository

} // namespace gi

#endif
