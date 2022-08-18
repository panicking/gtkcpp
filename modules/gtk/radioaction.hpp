// AUTO-GENERATED

#ifndef _GI_GTK_RADIOACTION_HPP_
#define _GI_GTK_RADIOACTION_HPP_

#include "toggleaction.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class RadioAction;

namespace base {


#define GI_GTK_RADIOACTION_BASE base::RadioActionBase
class RadioActionBase : public Gtk::ToggleAction
{
typedef Gtk::ToggleAction super_type;
public:
typedef ::GtkRadioAction BaseObjectType;

RadioActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_radio_action_get_type(); } 

// GtkRadioAction* gtk_radio_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id, gint value);
// ::GtkRadioAction* gtk_radio_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id, gint value);
// IGNORE; deprecated

// gint gtk_radio_action_get_current_value (GtkRadioAction* action);
// gint gtk_radio_action_get_current_value (::GtkRadioAction* action);
// IGNORE; deprecated

// GSList* gtk_radio_action_get_group (GtkRadioAction* action);
// ::GSList* gtk_radio_action_get_group (::GtkRadioAction* action);
// IGNORE; deprecated

// void gtk_radio_action_join_group (GtkRadioAction* action, GtkRadioAction* group_source);
// void gtk_radio_action_join_group (::GtkRadioAction* action, ::GtkRadioAction* group_source);
// IGNORE; deprecated

// void gtk_radio_action_set_current_value (GtkRadioAction* action, gint current_value);
// void gtk_radio_action_set_current_value (::GtkRadioAction* action, gint current_value);
// IGNORE; deprecated

// void gtk_radio_action_set_group (GtkRadioAction* action, GSList* group);
// void gtk_radio_action_set_group (::GtkRadioAction* action, ::GSList* group);
// IGNORE; deprecated

gi::property_proxy<gint, base::RadioActionBase> property_current_value()
{ return gi::property_proxy<gint, base::RadioActionBase> (*this, "current-value"); }
const gi::property_proxy<gint, base::RadioActionBase> property_current_value() const
{ return gi::property_proxy<gint, base::RadioActionBase> (*this, "current-value"); }

gi::property_proxy_write<Gtk::RadioAction, base::RadioActionBase> property_group()
{ return gi::property_proxy_write<Gtk::RadioAction, base::RadioActionBase> (*this, "group"); }

gi::property_proxy<gint, base::RadioActionBase> property_value()
{ return gi::property_proxy<gint, base::RadioActionBase> (*this, "value"); }
const gi::property_proxy<gint, base::RadioActionBase> property_value() const
{ return gi::property_proxy<gint, base::RadioActionBase> (*this, "value"); }

// signal changed
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/radioaction_extra_def.hpp>)
#include <gtk/radioaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/radioaction_extra.hpp>)
#include <gtk/radioaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RadioAction : public GI_GTK_RADIOACTION_BASE
{ typedef GI_GTK_RADIOACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRadioAction>
{ typedef Gtk::RadioAction type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class RadioActionClassDef
{
typedef RadioActionClassDef self;
public:
typedef Gtk::RadioAction instance_type;
typedef ::GtkRadioActionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void RadioAction::changed (GtkRadioAction* action, GtkRadioAction* current);
// void RadioAction::changed (::GtkRadioAction* action, ::GtkRadioAction* current);
virtual void changed_ (Gtk::RadioAction current) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class RadioActionClass: public detail::ClassTemplate<Gtk::impl::internal::RadioActionClassDef, Gtk::impl::internal::ToggleActionClass>
{
typedef RadioActionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::RadioActionClassDef, Gtk::impl::internal::ToggleActionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void RadioAction::changed (GtkRadioAction* action, GtkRadioAction* current);
// void RadioAction::changed (::GtkRadioAction* action, ::GtkRadioAction* current);
GI_INLINE_DECL void changed_ (Gtk::RadioAction current) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using RadioActionImpl = detail::ObjectImpl<RadioAction, internal::RadioActionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
