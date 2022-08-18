// AUTO-GENERATED

#ifndef _GI_GTK_TOGGLEACTION_HPP_
#define _GI_GTK_TOGGLEACTION_HPP_

#include "action.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class ToggleAction;

namespace base {


#define GI_GTK_TOGGLEACTION_BASE base::ToggleActionBase
class ToggleActionBase : public Gtk::Action
{
typedef Gtk::Action super_type;
public:
typedef ::GtkToggleAction BaseObjectType;

ToggleActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_toggle_action_get_type(); } 

// GtkToggleAction* gtk_toggle_action_new (const gchar* name, const gchar* label, const gchar* tooltip, const gchar* stock_id);
// ::GtkToggleAction* gtk_toggle_action_new (const char* name, const char* label, const char* tooltip, const char* stock_id);
// IGNORE; deprecated

// gboolean gtk_toggle_action_get_active (GtkToggleAction* action);
// gboolean gtk_toggle_action_get_active (::GtkToggleAction* action);
// IGNORE; deprecated

// gboolean gtk_toggle_action_get_draw_as_radio (GtkToggleAction* action);
// gboolean gtk_toggle_action_get_draw_as_radio (::GtkToggleAction* action);
// IGNORE; deprecated

// void gtk_toggle_action_set_active (GtkToggleAction* action, gboolean is_active);
// void gtk_toggle_action_set_active (::GtkToggleAction* action, gboolean is_active);
// IGNORE; deprecated

// void gtk_toggle_action_set_draw_as_radio (GtkToggleAction* action, gboolean draw_as_radio);
// void gtk_toggle_action_set_draw_as_radio (::GtkToggleAction* action, gboolean draw_as_radio);
// IGNORE; deprecated

// void gtk_toggle_action_toggled (GtkToggleAction* action);
// void gtk_toggle_action_toggled (::GtkToggleAction* action);
// IGNORE; deprecated

gi::property_proxy<bool, base::ToggleActionBase> property_active()
{ return gi::property_proxy<bool, base::ToggleActionBase> (*this, "active"); }
const gi::property_proxy<bool, base::ToggleActionBase> property_active() const
{ return gi::property_proxy<bool, base::ToggleActionBase> (*this, "active"); }

gi::property_proxy<bool, base::ToggleActionBase> property_draw_as_radio()
{ return gi::property_proxy<bool, base::ToggleActionBase> (*this, "draw-as-radio"); }
const gi::property_proxy<bool, base::ToggleActionBase> property_draw_as_radio() const
{ return gi::property_proxy<bool, base::ToggleActionBase> (*this, "draw-as-radio"); }

// signal toggled
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toggleaction_extra_def.hpp>)
#include <gtk/toggleaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toggleaction_extra.hpp>)
#include <gtk/toggleaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ToggleAction : public GI_GTK_TOGGLEACTION_BASE
{ typedef GI_GTK_TOGGLEACTION_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkToggleAction>
{ typedef Gtk::ToggleAction type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ToggleActionClassDef
{
typedef ToggleActionClassDef self;
public:
typedef Gtk::ToggleAction instance_type;
typedef ::GtkToggleActionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ToggleAction::toggled (GtkToggleAction* action);
// void ToggleAction::toggled (::GtkToggleAction* action);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class ToggleActionClass: public detail::ClassTemplate<Gtk::impl::internal::ToggleActionClassDef, Gtk::impl::internal::ActionClass>
{
typedef ToggleActionClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::ToggleActionClassDef, Gtk::impl::internal::ActionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ToggleAction::toggled (GtkToggleAction* action);
// void ToggleAction::toggled (::GtkToggleAction* action);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using ToggleActionImpl = detail::ObjectImpl<ToggleAction, internal::ToggleActionClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
