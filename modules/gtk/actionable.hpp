// AUTO-GENERATED

#ifndef _GI_GTK_ACTIONABLE_HPP_
#define _GI_GTK_ACTIONABLE_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class Actionable;

namespace base {


#define GI_GTK_ACTIONABLE_BASE base::ActionableBase
class ActionableBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GtkActionable BaseObjectType;

ActionableBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_actionable_get_type(); } 

// const gchar* gtk_actionable_get_action_name (GtkActionable* actionable);
// const char* gtk_actionable_get_action_name (::GtkActionable* actionable);
GI_INLINE_DECL std::string get_action_name () noexcept;

// GVariant* gtk_actionable_get_action_target_value (GtkActionable* actionable);
// ::GVariant* gtk_actionable_get_action_target_value (::GtkActionable* actionable);
GI_INLINE_DECL GLib::Variant get_action_target_value () noexcept;

// void gtk_actionable_set_action_name (GtkActionable* actionable, const gchar* action_name);
// void gtk_actionable_set_action_name (::GtkActionable* actionable, const char* action_name);
GI_INLINE_DECL void set_action_name (const std::string & action_name) noexcept;
GI_INLINE_DECL void set_action_name () noexcept;

// void gtk_actionable_set_action_target (GtkActionable* actionable, const gchar* format_string);
// void gtk_actionable_set_action_target (::GtkActionable* actionable, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void gtk_actionable_set_action_target_value (GtkActionable* actionable, GVariant* target_value);
// void gtk_actionable_set_action_target_value (::GtkActionable* actionable, ::GVariant* target_value);
GI_INLINE_DECL void set_action_target_value (GLib::Variant target_value) noexcept;
GI_INLINE_DECL void set_action_target_value () noexcept;

// void gtk_actionable_set_detailed_action_name (GtkActionable* actionable, const gchar* detailed_action_name);
// void gtk_actionable_set_detailed_action_name (::GtkActionable* actionable, const char* detailed_action_name);
GI_INLINE_DECL void set_detailed_action_name (const std::string & detailed_action_name) noexcept;

gi::property_proxy<std::string, base::ActionableBase> property_action_name()
{ return gi::property_proxy<std::string, base::ActionableBase> (*this, "action-name"); }
const gi::property_proxy<std::string, base::ActionableBase> property_action_name() const
{ return gi::property_proxy<std::string, base::ActionableBase> (*this, "action-name"); }

gi::property_proxy<GLib::Variant, base::ActionableBase> property_action_target()
{ return gi::property_proxy<GLib::Variant, base::ActionableBase> (*this, "action-target"); }
const gi::property_proxy<GLib::Variant, base::ActionableBase> property_action_target() const
{ return gi::property_proxy<GLib::Variant, base::ActionableBase> (*this, "action-target"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra_def.hpp>)
#include <gtk/actionable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/actionable_extra.hpp>)
#include <gtk/actionable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Actionable : public GI_GTK_ACTIONABLE_BASE
{ typedef GI_GTK_ACTIONABLE_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkActionable>
{ typedef Gtk::Actionable type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class ActionableInterfaceDef
{
typedef ActionableInterfaceDef self;
public:
typedef Gtk::Actionable instance_type;
typedef ::GtkActionableInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// const gchar* Actionable::get_action_name (GtkActionable* actionable);
// const char* Actionable::get_action_name (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// GVariant* Actionable::get_action_target_value (GtkActionable* actionable);
// ::GVariant* Actionable::get_action_target_value (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// void Actionable::set_action_name (GtkActionable* actionable, const gchar* action_name);
// void Actionable::set_action_name (::GtkActionable* actionable, const char* action_name);
virtual void set_action_name_ (const std::string & action_name) noexcept = 0;

// void Actionable::set_action_target_value (GtkActionable* actionable, GVariant* target_value);
// void Actionable::set_action_target_value (::GtkActionable* actionable, ::GVariant* target_value);
virtual void set_action_target_value_ (GLib::Variant target_value) noexcept = 0;


};

using ActionableImpl = detail::InterfaceImpl<ActionableInterfaceDef>;

class ActionableInterfaceClassImpl: public detail::InterfaceClassImpl<ActionableImpl>
{
typedef ActionableInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionableImpl> super;

protected:
using super::super;

// const gchar* Actionable::get_action_name (GtkActionable* actionable);
// const char* Actionable::get_action_name (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// GVariant* Actionable::get_action_target_value (GtkActionable* actionable);
// ::GVariant* Actionable::get_action_target_value (::GtkActionable* actionable);
// SKIP; invalid callback return transfer none

// void Actionable::set_action_name (GtkActionable* actionable, const gchar* action_name);
// void Actionable::set_action_name (::GtkActionable* actionable, const char* action_name);
GI_INLINE_DECL void set_action_name_ (const std::string & action_name) noexcept override;

// void Actionable::set_action_target_value (GtkActionable* actionable, GVariant* target_value);
// void Actionable::set_action_target_value (::GtkActionable* actionable, ::GVariant* target_value);
GI_INLINE_DECL void set_action_target_value_ (GLib::Variant target_value) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
