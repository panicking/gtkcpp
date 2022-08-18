// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEACTION_HPP_
#define _GI_GIO_SIMPLEACTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;

class SimpleAction;

namespace base {


#define GI_GIO_SIMPLEACTION_BASE base::SimpleActionBase
class SimpleActionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleAction BaseObjectType;

SimpleActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_action_get_type(); } 

GI_INLINE_DECL Gio::Action interface_ (gi::interface_tag<Gio::Action>);

GI_INLINE_DECL operator Gio::Action ();

// GSimpleAction* g_simple_action_new (const gchar* name, const GVariantType* parameter_type);
// ::GSimpleAction* g_simple_action_new (const char* name, const ::GVariantType* parameter_type);
static GI_INLINE_DECL Gio::SimpleAction new_ (const std::string & name, const GLib::VariantType & parameter_type) noexcept;
static GI_INLINE_DECL Gio::SimpleAction new_ (const std::string & name) noexcept;

// GSimpleAction* g_simple_action_new_stateful (const gchar* name, const GVariantType* parameter_type, GVariant* state);
// ::GSimpleAction* g_simple_action_new_stateful (const char* name, const ::GVariantType* parameter_type, ::GVariant* state);
static GI_INLINE_DECL Gio::SimpleAction new_stateful (const std::string & name, const GLib::VariantType & parameter_type, GLib::Variant state) noexcept;
static GI_INLINE_DECL Gio::SimpleAction new_stateful (const std::string & name, GLib::Variant state) noexcept;

// void g_simple_action_set_enabled (GSimpleAction* simple, gboolean enabled);
// void g_simple_action_set_enabled (::GSimpleAction* simple, gboolean enabled);
GI_INLINE_DECL void set_enabled (gboolean enabled) noexcept;

// void g_simple_action_set_state (GSimpleAction* simple, GVariant* value);
// void g_simple_action_set_state (::GSimpleAction* simple, ::GVariant* value);
GI_INLINE_DECL void set_state (GLib::Variant value) noexcept;

// void g_simple_action_set_state_hint (GSimpleAction* simple, GVariant* state_hint);
// void g_simple_action_set_state_hint (::GSimpleAction* simple, ::GVariant* state_hint);
GI_INLINE_DECL void set_state_hint (GLib::Variant state_hint) noexcept;
GI_INLINE_DECL void set_state_hint () noexcept;

gi::property_proxy<bool, base::SimpleActionBase> property_enabled()
{ return gi::property_proxy<bool, base::SimpleActionBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::SimpleActionBase> property_enabled() const
{ return gi::property_proxy<bool, base::SimpleActionBase> (*this, "enabled"); }

gi::property_proxy<std::string, base::SimpleActionBase> property_name()
{ return gi::property_proxy<std::string, base::SimpleActionBase> (*this, "name"); }
const gi::property_proxy<std::string, base::SimpleActionBase> property_name() const
{ return gi::property_proxy<std::string, base::SimpleActionBase> (*this, "name"); }

gi::property_proxy<GLib::VariantType, base::SimpleActionBase> property_parameter_type()
{ return gi::property_proxy<GLib::VariantType, base::SimpleActionBase> (*this, "parameter-type"); }
const gi::property_proxy<GLib::VariantType, base::SimpleActionBase> property_parameter_type() const
{ return gi::property_proxy<GLib::VariantType, base::SimpleActionBase> (*this, "parameter-type"); }

gi::property_proxy<GLib::Variant, base::SimpleActionBase> property_state()
{ return gi::property_proxy<GLib::Variant, base::SimpleActionBase> (*this, "state"); }
const gi::property_proxy<GLib::Variant, base::SimpleActionBase> property_state() const
{ return gi::property_proxy<GLib::Variant, base::SimpleActionBase> (*this, "state"); }

gi::property_proxy<GLib::VariantType, base::SimpleActionBase> property_state_type()
{ return gi::property_proxy<GLib::VariantType, base::SimpleActionBase> (*this, "state-type"); }
const gi::property_proxy<GLib::VariantType, base::SimpleActionBase> property_state_type() const
{ return gi::property_proxy<GLib::VariantType, base::SimpleActionBase> (*this, "state-type"); }

// signal activate
gi::signal_proxy<void(Gio::SimpleAction, GLib::Variant parameter)> signal_activate()
{ return gi::signal_proxy<void(Gio::SimpleAction, GLib::Variant parameter)> (*this, "activate"); }

// signal change-state
gi::signal_proxy<void(Gio::SimpleAction, GLib::Variant value)> signal_change_state()
{ return gi::signal_proxy<void(Gio::SimpleAction, GLib::Variant value)> (*this, "change-state"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleaction_extra_def.hpp>)
#include <gio/simpleaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleaction_extra.hpp>)
#include <gio/simpleaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleAction : public GI_GIO_SIMPLEACTION_BASE
{ typedef GI_GIO_SIMPLEACTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleAction>
{ typedef Gio::SimpleAction type; }; 

} // namespace repository

} // namespace gi

#endif
