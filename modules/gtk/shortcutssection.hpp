// AUTO-GENERATED

#ifndef _GI_GTK_SHORTCUTSSECTION_HPP_
#define _GI_GTK_SHORTCUTSSECTION_HPP_

#include "box.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ShortcutsSection;

namespace base {


#define GI_GTK_SHORTCUTSSECTION_BASE base::ShortcutsSectionBase
class ShortcutsSectionBase : public Gtk::Box
{
typedef Gtk::Box super_type;
public:
typedef ::GtkShortcutsSection BaseObjectType;

ShortcutsSectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_shortcuts_section_get_type(); } 

gi::property_proxy<guint, base::ShortcutsSectionBase> property_max_height()
{ return gi::property_proxy<guint, base::ShortcutsSectionBase> (*this, "max-height"); }
const gi::property_proxy<guint, base::ShortcutsSectionBase> property_max_height() const
{ return gi::property_proxy<guint, base::ShortcutsSectionBase> (*this, "max-height"); }

gi::property_proxy<std::string, base::ShortcutsSectionBase> property_section_name()
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "section-name"); }
const gi::property_proxy<std::string, base::ShortcutsSectionBase> property_section_name() const
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "section-name"); }

gi::property_proxy<std::string, base::ShortcutsSectionBase> property_title()
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "title"); }
const gi::property_proxy<std::string, base::ShortcutsSectionBase> property_title() const
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "title"); }

gi::property_proxy<std::string, base::ShortcutsSectionBase> property_view_name()
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "view-name"); }
const gi::property_proxy<std::string, base::ShortcutsSectionBase> property_view_name() const
{ return gi::property_proxy<std::string, base::ShortcutsSectionBase> (*this, "view-name"); }

// signal change-current-page
gi::signal_proxy<bool(Gtk::ShortcutsSection, gint object)> signal_change_current_page()
{ return gi::signal_proxy<bool(Gtk::ShortcutsSection, gint object)> (*this, "change-current-page"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/shortcutssection_extra_def.hpp>)
#include <gtk/shortcutssection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/shortcutssection_extra.hpp>)
#include <gtk/shortcutssection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ShortcutsSection : public GI_GTK_SHORTCUTSSECTION_BASE
{ typedef GI_GTK_SHORTCUTSSECTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkShortcutsSection>
{ typedef Gtk::ShortcutsSection type; }; 

} // namespace repository

} // namespace gi

#endif
