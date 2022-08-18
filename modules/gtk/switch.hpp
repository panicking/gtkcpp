// AUTO-GENERATED

#ifndef _GI_GTK_SWITCH_HPP_
#define _GI_GTK_SWITCH_HPP_

#include "widget.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class Actionable;
class Activatable;

class Switch;

namespace base {


#define GI_GTK_SWITCH_BASE base::SwitchBase
class SwitchBase : public Gtk::Widget
{
typedef Gtk::Widget super_type;
public:
typedef ::GtkSwitch BaseObjectType;

SwitchBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_switch_get_type(); } 

GI_INLINE_DECL Gtk::Actionable interface_ (gi::interface_tag<Gtk::Actionable>);

GI_INLINE_DECL operator Gtk::Actionable ();

GI_INLINE_DECL Gtk::Activatable interface_ (gi::interface_tag<Gtk::Activatable>);

GI_INLINE_DECL operator Gtk::Activatable ();

// GtkWidget* gtk_switch_new ();
// ::GtkSwitch* gtk_switch_new ();
static GI_INLINE_DECL Gtk::Switch new_ () noexcept;

// gboolean gtk_switch_get_active (GtkSwitch* sw);
// gboolean gtk_switch_get_active (::GtkSwitch* sw);
GI_INLINE_DECL bool get_active () noexcept;

// gboolean gtk_switch_get_state (GtkSwitch* sw);
// gboolean gtk_switch_get_state (::GtkSwitch* sw);
GI_INLINE_DECL bool get_state () noexcept;

// void gtk_switch_set_active (GtkSwitch* sw, gboolean is_active);
// void gtk_switch_set_active (::GtkSwitch* sw, gboolean is_active);
GI_INLINE_DECL void set_active (gboolean is_active) noexcept;

// void gtk_switch_set_state (GtkSwitch* sw, gboolean state);
// void gtk_switch_set_state (::GtkSwitch* sw, gboolean state);
GI_INLINE_DECL void set_state (gboolean state) noexcept;

gi::property_proxy<bool, base::SwitchBase> property_active()
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "active"); }
const gi::property_proxy<bool, base::SwitchBase> property_active() const
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "active"); }

gi::property_proxy<bool, base::SwitchBase> property_state()
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "state"); }
const gi::property_proxy<bool, base::SwitchBase> property_state() const
{ return gi::property_proxy<bool, base::SwitchBase> (*this, "state"); }

// signal activate
gi::signal_proxy<void(Gtk::Switch)> signal_activate()
{ return gi::signal_proxy<void(Gtk::Switch)> (*this, "activate"); }

// signal state-set
gi::signal_proxy<bool(Gtk::Switch, gboolean state)> signal_state_set()
{ return gi::signal_proxy<bool(Gtk::Switch, gboolean state)> (*this, "state-set"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/switch_extra_def.hpp>)
#include <gtk/switch_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/switch_extra.hpp>)
#include <gtk/switch_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Switch : public GI_GTK_SWITCH_BASE
{ typedef GI_GTK_SWITCH_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSwitch>
{ typedef Gtk::Switch type; }; 

} // namespace repository

} // namespace gi

#include "actionable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class SwitchClassDef
{
typedef SwitchClassDef self;
public:
typedef Gtk::Switch instance_type;
typedef ::GtkSwitchClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Switch::activate (GtkSwitch* sw);
// void Switch::activate (::GtkSwitch* sw);
virtual void activate_ () noexcept = 0;

// gboolean Switch::state_set (GtkSwitch* sw, gboolean state);
// gboolean Switch::state_set (::GtkSwitch* sw, gboolean state);
virtual bool state_set_ (gboolean state) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class SwitchClass: public detail::ClassTemplate<Gtk::impl::internal::SwitchClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl>
{
typedef SwitchClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::SwitchClassDef, Gtk::impl::internal::WidgetClass, Gtk::impl::internal::ActionableInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::ActionableInterfaceClassImpl GtkActionableInterface_type;


// void Switch::activate (GtkSwitch* sw);
// void Switch::activate (::GtkSwitch* sw);
GI_INLINE_DECL void activate_ () noexcept override;

// gboolean Switch::state_set (GtkSwitch* sw, gboolean state);
// gboolean Switch::state_set (::GtkSwitch* sw, gboolean state);
GI_INLINE_DECL bool state_set_ (gboolean state) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using SwitchImpl = detail::ObjectImpl<Switch, internal::SwitchClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
