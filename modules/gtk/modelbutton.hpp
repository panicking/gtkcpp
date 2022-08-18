// AUTO-GENERATED

#ifndef _GI_GTK_MODELBUTTON_HPP_
#define _GI_GTK_MODELBUTTON_HPP_

#include "button.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ModelButton;

namespace base {


#define GI_GTK_MODELBUTTON_BASE base::ModelButtonBase
class ModelButtonBase : public Gtk::Button
{
typedef Gtk::Button super_type;
public:
typedef ::GtkModelButton BaseObjectType;

ModelButtonBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_model_button_get_type(); } 

// GtkWidget* gtk_model_button_new ();
// ::GtkModelButton* gtk_model_button_new ();
static GI_INLINE_DECL Gtk::ModelButton new_ () noexcept;

gi::property_proxy<bool, base::ModelButtonBase> property_active()
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "active"); }
const gi::property_proxy<bool, base::ModelButtonBase> property_active() const
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "active"); }

gi::property_proxy<bool, base::ModelButtonBase> property_centered()
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "centered"); }
const gi::property_proxy<bool, base::ModelButtonBase> property_centered() const
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "centered"); }

gi::property_proxy<Gio::Icon, base::ModelButtonBase> property_icon()
{ return gi::property_proxy<Gio::Icon, base::ModelButtonBase> (*this, "icon"); }
const gi::property_proxy<Gio::Icon, base::ModelButtonBase> property_icon() const
{ return gi::property_proxy<Gio::Icon, base::ModelButtonBase> (*this, "icon"); }

gi::property_proxy<bool, base::ModelButtonBase> property_iconic()
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "iconic"); }
const gi::property_proxy<bool, base::ModelButtonBase> property_iconic() const
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "iconic"); }

gi::property_proxy<bool, base::ModelButtonBase> property_inverted()
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "inverted"); }
const gi::property_proxy<bool, base::ModelButtonBase> property_inverted() const
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "inverted"); }

gi::property_proxy<std::string, base::ModelButtonBase> property_menu_name()
{ return gi::property_proxy<std::string, base::ModelButtonBase> (*this, "menu-name"); }
const gi::property_proxy<std::string, base::ModelButtonBase> property_menu_name() const
{ return gi::property_proxy<std::string, base::ModelButtonBase> (*this, "menu-name"); }

gi::property_proxy<Gtk::ButtonRole, base::ModelButtonBase> property_role()
{ return gi::property_proxy<Gtk::ButtonRole, base::ModelButtonBase> (*this, "role"); }
const gi::property_proxy<Gtk::ButtonRole, base::ModelButtonBase> property_role() const
{ return gi::property_proxy<Gtk::ButtonRole, base::ModelButtonBase> (*this, "role"); }

gi::property_proxy<std::string, base::ModelButtonBase> property_text()
{ return gi::property_proxy<std::string, base::ModelButtonBase> (*this, "text"); }
const gi::property_proxy<std::string, base::ModelButtonBase> property_text() const
{ return gi::property_proxy<std::string, base::ModelButtonBase> (*this, "text"); }

gi::property_proxy<bool, base::ModelButtonBase> property_use_markup()
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "use-markup"); }
const gi::property_proxy<bool, base::ModelButtonBase> property_use_markup() const
{ return gi::property_proxy<bool, base::ModelButtonBase> (*this, "use-markup"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/modelbutton_extra_def.hpp>)
#include <gtk/modelbutton_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/modelbutton_extra.hpp>)
#include <gtk/modelbutton_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ModelButton : public GI_GTK_MODELBUTTON_BASE
{ typedef GI_GTK_MODELBUTTON_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkModelButton>
{ typedef Gtk::ModelButton type; }; 

} // namespace repository

} // namespace gi

#endif
