// AUTO-GENERATED

#ifndef _GI_GTK_ACTIVATABLE_HPP_
#define _GI_GTK_ACTIVATABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Action;

class Activatable;

namespace base {


#define GI_GTK_ACTIVATABLE_BASE base::ActivatableBase
class ActivatableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkActivatable BaseObjectType;

ActivatableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_activatable_get_type(); } 

// void gtk_activatable_do_set_related_action (GtkActivatable* activatable, GtkAction* action);
// void gtk_activatable_do_set_related_action (::GtkActivatable* activatable, ::GtkAction* action);
// IGNORE; deprecated

// GtkAction* gtk_activatable_get_related_action (GtkActivatable* activatable);
// ::GtkAction* gtk_activatable_get_related_action (::GtkActivatable* activatable);
// IGNORE; deprecated

// gboolean gtk_activatable_get_use_action_appearance (GtkActivatable* activatable);
// gboolean gtk_activatable_get_use_action_appearance (::GtkActivatable* activatable);
// IGNORE; deprecated

// void gtk_activatable_set_related_action (GtkActivatable* activatable, GtkAction* action);
// void gtk_activatable_set_related_action (::GtkActivatable* activatable, ::GtkAction* action);
// IGNORE; deprecated

// void gtk_activatable_set_use_action_appearance (GtkActivatable* activatable, gboolean use_appearance);
// void gtk_activatable_set_use_action_appearance (::GtkActivatable* activatable, gboolean use_appearance);
// IGNORE; deprecated

// void gtk_activatable_sync_action_properties (GtkActivatable* activatable, GtkAction* action);
// void gtk_activatable_sync_action_properties (::GtkActivatable* activatable, ::GtkAction* action);
// IGNORE; deprecated

gi::property_proxy<Gtk::Action, base::ActivatableBase> property_related_action()
{ return gi::property_proxy<Gtk::Action, base::ActivatableBase> (*this, "related-action"); }
const gi::property_proxy<Gtk::Action, base::ActivatableBase> property_related_action() const
{ return gi::property_proxy<Gtk::Action, base::ActivatableBase> (*this, "related-action"); }

gi::property_proxy<bool, base::ActivatableBase> property_use_action_appearance()
{ return gi::property_proxy<bool, base::ActivatableBase> (*this, "use-action-appearance"); }
const gi::property_proxy<bool, base::ActivatableBase> property_use_action_appearance() const
{ return gi::property_proxy<bool, base::ActivatableBase> (*this, "use-action-appearance"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/activatable_extra_def.hpp>)
#include <gtk/activatable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/activatable_extra.hpp>)
#include <gtk/activatable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Activatable : public GI_GTK_ACTIVATABLE_BASE
{ typedef GI_GTK_ACTIVATABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActivatable>
{ typedef Gtk::Activatable type; }; 

} // namespace repository

} // namespace gi

#endif
