// AUTO-GENERATED

#ifndef _GI_GIO_ACTION_HPP_
#define _GI_GIO_ACTION_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Action;

namespace base {


#define GI_GIO_ACTION_BASE base::ActionBase
class ActionBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GAction BaseObjectType;

ActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_action_get_type(); } 

// gboolean g_action_name_is_valid (const gchar* action_name);
// gboolean g_action_name_is_valid (const char* action_name);
static GI_INLINE_DECL bool name_is_valid (const std::string & action_name) noexcept;

// gboolean g_action_parse_detailed_name (const gchar* detailed_name, gchar** action_name, GVariant** target_value, GError ** error);
// gboolean g_action_parse_detailed_name (const char* detailed_name, char** action_name, ::GVariant** target_value, GError ** error);
static GI_INLINE_DECL bool parse_detailed_name (const std::string & detailed_name, std::string & action_name, GLib::Variant & target_value);
static GI_INLINE_DECL bool parse_detailed_name (const std::string & detailed_name, std::string & action_name, GLib::Variant & target_value, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string, GLib::Variant> parse_detailed_name (const std::string & detailed_name);
static GI_INLINE_DECL std::tuple<bool, std::string, GLib::Variant> parse_detailed_name (const std::string & detailed_name, GLib::Error * _error) noexcept;

// gchar* g_action_print_detailed_name (const gchar* action_name, GVariant* target_value);
// char* g_action_print_detailed_name (const char* action_name, ::GVariant* target_value);
static GI_INLINE_DECL std::string print_detailed_name (const std::string & action_name, GLib::Variant target_value) noexcept;
static GI_INLINE_DECL std::string print_detailed_name (const std::string & action_name) noexcept;

// void g_action_activate (GAction* action, GVariant* parameter);
// void g_action_activate (::GAction* action, ::GVariant* parameter);
GI_INLINE_DECL void activate (GLib::Variant parameter) noexcept;
GI_INLINE_DECL void activate () noexcept;

// void g_action_change_state (GAction* action, GVariant* value);
// void g_action_change_state (::GAction* action, ::GVariant* value);
GI_INLINE_DECL void change_state (GLib::Variant value) noexcept;

// gboolean g_action_get_enabled (GAction* action);
// gboolean g_action_get_enabled (::GAction* action);
GI_INLINE_DECL bool get_enabled () noexcept;

// const gchar* g_action_get_name (GAction* action);
// const char* g_action_get_name (::GAction* action);
GI_INLINE_DECL std::string get_name () noexcept;

// const GVariantType* g_action_get_parameter_type (GAction* action);
// const ::GVariantType* g_action_get_parameter_type (::GAction* action);
GI_INLINE_DECL GLib::VariantType get_parameter_type () noexcept;

// GVariant* g_action_get_state (GAction* action);
// ::GVariant* g_action_get_state (::GAction* action);
GI_INLINE_DECL GLib::Variant get_state () noexcept;

// GVariant* g_action_get_state_hint (GAction* action);
// ::GVariant* g_action_get_state_hint (::GAction* action);
GI_INLINE_DECL GLib::Variant get_state_hint () noexcept;

// const GVariantType* g_action_get_state_type (GAction* action);
// const ::GVariantType* g_action_get_state_type (::GAction* action);
GI_INLINE_DECL GLib::VariantType get_state_type () noexcept;

gi::property_proxy<bool, base::ActionBase> property_enabled()
{ return gi::property_proxy<bool, base::ActionBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::ActionBase> property_enabled() const
{ return gi::property_proxy<bool, base::ActionBase> (*this, "enabled"); }

gi::property_proxy<std::string, base::ActionBase> property_name()
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ActionBase> property_name() const
{ return gi::property_proxy<std::string, base::ActionBase> (*this, "name"); }

gi::property_proxy<GLib::VariantType, base::ActionBase> property_parameter_type()
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "parameter-type"); }
const gi::property_proxy<GLib::VariantType, base::ActionBase> property_parameter_type() const
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "parameter-type"); }

gi::property_proxy<GLib::Variant, base::ActionBase> property_state()
{ return gi::property_proxy<GLib::Variant, base::ActionBase> (*this, "state"); }
const gi::property_proxy<GLib::Variant, base::ActionBase> property_state() const
{ return gi::property_proxy<GLib::Variant, base::ActionBase> (*this, "state"); }

gi::property_proxy<GLib::VariantType, base::ActionBase> property_state_type()
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "state-type"); }
const gi::property_proxy<GLib::VariantType, base::ActionBase> property_state_type() const
{ return gi::property_proxy<GLib::VariantType, base::ActionBase> (*this, "state-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/action_extra_def.hpp>)
#include <gio/action_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/action_extra.hpp>)
#include <gio/action_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Action : public GI_GIO_ACTION_BASE
{ typedef GI_GIO_ACTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GAction>
{ typedef Gio::Action type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ActionInterfaceDef
{
typedef ActionInterfaceDef self;
public:
typedef Gio::Action instance_type;
typedef ::GActionInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void Action::activate (GAction* action, GVariant* parameter);
// void Action::activate (::GAction* action, ::GVariant* parameter);
virtual void activate_ (GLib::Variant parameter) noexcept = 0;

// void Action::change_state (GAction* action, GVariant* value);
// void Action::change_state (::GAction* action, ::GVariant* value);
virtual void change_state_ (GLib::Variant value) noexcept = 0;

// gboolean Action::get_enabled (GAction* action);
// gboolean Action::get_enabled (::GAction* action);
virtual bool get_enabled_ () noexcept = 0;

// const gchar* Action::get_name (GAction* action);
// const char* Action::get_name (::GAction* action);
// SKIP; invalid callback return transfer none

// const GVariantType* Action::get_parameter_type (GAction* action);
// const ::GVariantType* Action::get_parameter_type (::GAction* action);
// SKIP; invalid callback return transfer none

// GVariant* Action::get_state (GAction* action);
// ::GVariant* Action::get_state (::GAction* action);
virtual GLib::Variant get_state_ () noexcept = 0;

// GVariant* Action::get_state_hint (GAction* action);
// ::GVariant* Action::get_state_hint (::GAction* action);
virtual GLib::Variant get_state_hint_ () noexcept = 0;

// const GVariantType* Action::get_state_type (GAction* action);
// const ::GVariantType* Action::get_state_type (::GAction* action);
// SKIP; invalid callback return transfer none


};

using ActionImpl = detail::InterfaceImpl<ActionInterfaceDef>;

class ActionInterfaceClassImpl: public detail::InterfaceClassImpl<ActionImpl>
{
typedef ActionInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionImpl> super;

protected:
using super::super;

// void Action::activate (GAction* action, GVariant* parameter);
// void Action::activate (::GAction* action, ::GVariant* parameter);
GI_INLINE_DECL void activate_ (GLib::Variant parameter) noexcept override;

// void Action::change_state (GAction* action, GVariant* value);
// void Action::change_state (::GAction* action, ::GVariant* value);
GI_INLINE_DECL void change_state_ (GLib::Variant value) noexcept override;

// gboolean Action::get_enabled (GAction* action);
// gboolean Action::get_enabled (::GAction* action);
GI_INLINE_DECL bool get_enabled_ () noexcept override;

// const gchar* Action::get_name (GAction* action);
// const char* Action::get_name (::GAction* action);
// SKIP; invalid callback return transfer none

// const GVariantType* Action::get_parameter_type (GAction* action);
// const ::GVariantType* Action::get_parameter_type (::GAction* action);
// SKIP; invalid callback return transfer none

// GVariant* Action::get_state (GAction* action);
// ::GVariant* Action::get_state (::GAction* action);
GI_INLINE_DECL GLib::Variant get_state_ () noexcept override;

// GVariant* Action::get_state_hint (GAction* action);
// ::GVariant* Action::get_state_hint (::GAction* action);
GI_INLINE_DECL GLib::Variant get_state_hint_ () noexcept override;

// const GVariantType* Action::get_state_type (GAction* action);
// const ::GVariantType* Action::get_state_type (::GAction* action);
// SKIP; invalid callback return transfer none


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
