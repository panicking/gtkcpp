// AUTO-GENERATED

#ifndef _GI_GIO_ACTIONGROUP_HPP_
#define _GI_GIO_ACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {


class ActionGroup;

namespace base {


#define GI_GIO_ACTIONGROUP_BASE base::ActionGroupBase
class ActionGroupBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GActionGroup BaseObjectType;

ActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_action_group_get_type(); } 

// void g_action_group_action_added (GActionGroup* action_group, const gchar* action_name);
// void g_action_group_action_added (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL void action_added (const std::string & action_name) noexcept;

// void g_action_group_action_enabled_changed (GActionGroup* action_group, const gchar* action_name, gboolean enabled);
// void g_action_group_action_enabled_changed (::GActionGroup* action_group, const char* action_name, gboolean enabled);
GI_INLINE_DECL void action_enabled_changed (const std::string & action_name, gboolean enabled) noexcept;

// void g_action_group_action_removed (GActionGroup* action_group, const gchar* action_name);
// void g_action_group_action_removed (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL void action_removed (const std::string & action_name) noexcept;

// void g_action_group_action_state_changed (GActionGroup* action_group, const gchar* action_name, GVariant* state);
// void g_action_group_action_state_changed (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
GI_INLINE_DECL void action_state_changed (const std::string & action_name, GLib::Variant state) noexcept;

// void g_action_group_activate_action (GActionGroup* action_group, const gchar* action_name, GVariant* parameter);
// void g_action_group_activate_action (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
GI_INLINE_DECL void activate_action (const std::string & action_name, GLib::Variant parameter) noexcept;
GI_INLINE_DECL void activate_action (const std::string & action_name) noexcept;

// void g_action_group_change_action_state (GActionGroup* action_group, const gchar* action_name, GVariant* value);
// void g_action_group_change_action_state (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
GI_INLINE_DECL void change_action_state (const std::string & action_name, GLib::Variant value) noexcept;

// gboolean g_action_group_get_action_enabled (GActionGroup* action_group, const gchar* action_name);
// gboolean g_action_group_get_action_enabled (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL bool get_action_enabled (const std::string & action_name) noexcept;

// const GVariantType* g_action_group_get_action_parameter_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* g_action_group_get_action_parameter_type (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::VariantType get_action_parameter_type (const std::string & action_name) noexcept;

// GVariant* g_action_group_get_action_state (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* g_action_group_get_action_state (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::Variant get_action_state (const std::string & action_name) noexcept;

// GVariant* g_action_group_get_action_state_hint (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* g_action_group_get_action_state_hint (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::Variant get_action_state_hint (const std::string & action_name) noexcept;

// const GVariantType* g_action_group_get_action_state_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* g_action_group_get_action_state_type (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::VariantType get_action_state_type (const std::string & action_name) noexcept;

// gboolean g_action_group_has_action (GActionGroup* action_group, const gchar* action_name);
// gboolean g_action_group_has_action (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL bool has_action (const std::string & action_name) noexcept;

// gchar** g_action_group_list_actions (GActionGroup* action_group);
// char** g_action_group_list_actions (::GActionGroup* action_group);
GI_INLINE_DECL std::vector<std::string> list_actions () noexcept;

// gboolean g_action_group_query_action (GActionGroup* action_group, const gchar* action_name, gboolean* enabled, const GVariantType** parameter_type, const GVariantType** state_type, GVariant** state_hint, GVariant** state);
// gboolean g_action_group_query_action (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
GI_INLINE_DECL bool query_action (const std::string & action_name, bool & enabled, GLib::VariantType * parameter_type = nullptr, GLib::VariantType * state_type = nullptr, GLib::Variant * state_hint = nullptr, GLib::Variant * state = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, bool, GLib::VariantType, GLib::VariantType, GLib::Variant, GLib::Variant> query_action (const std::string & action_name) noexcept;

// signal action-added
gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name)> signal_action_added()
{ return gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name)> (*this, "action-added"); }

// signal action-enabled-changed
gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name, gboolean enabled)> signal_action_enabled_changed()
{ return gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name, gboolean enabled)> (*this, "action-enabled-changed"); }

// signal action-removed
gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name)> signal_action_removed()
{ return gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name)> (*this, "action-removed"); }

// signal action-state-changed
gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name, GLib::Variant value)> signal_action_state_changed()
{ return gi::signal_proxy<void(Gio::ActionGroup, const std::string & action_name, GLib::Variant value)> (*this, "action-state-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra_def.hpp>)
#include <gio/actiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/actiongroup_extra.hpp>)
#include <gio/actiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ActionGroup : public GI_GIO_ACTIONGROUP_BASE
{ typedef GI_GIO_ACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GActionGroup>
{ typedef Gio::ActionGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ActionGroupInterfaceDef
{
typedef ActionGroupInterfaceDef self;
public:
typedef Gio::ActionGroup instance_type;
typedef ::GActionGroupInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void ActionGroup::action_added (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_added (::GActionGroup* action_group, const char* action_name);
virtual void action_added_ (const std::string & action_name) noexcept = 0;

// void ActionGroup::action_enabled_changed (GActionGroup* action_group, const gchar* action_name, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group, const char* action_name, gboolean enabled);
virtual void action_enabled_changed_ (const std::string & action_name, gboolean enabled) noexcept = 0;

// void ActionGroup::action_removed (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_removed (::GActionGroup* action_group, const char* action_name);
virtual void action_removed_ (const std::string & action_name) noexcept = 0;

// void ActionGroup::action_state_changed (GActionGroup* action_group, const gchar* action_name, GVariant* state);
// void ActionGroup::action_state_changed (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
virtual void action_state_changed_ (const std::string & action_name, GLib::Variant state) noexcept = 0;

// void ActionGroup::activate_action (GActionGroup* action_group, const gchar* action_name, GVariant* parameter);
// void ActionGroup::activate_action (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
virtual void activate_action_ (const std::string & action_name, GLib::Variant parameter) noexcept = 0;

// void ActionGroup::change_action_state (GActionGroup* action_group, const gchar* action_name, GVariant* value);
// void ActionGroup::change_action_state (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
virtual void change_action_state_ (const std::string & action_name, GLib::Variant value) noexcept = 0;

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group, const char* action_name);
virtual bool get_action_enabled_ (const std::string & action_name) noexcept = 0;

// const GVariantType* ActionGroup::get_action_parameter_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_parameter_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// GVariant* ActionGroup::get_action_state (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state (::GActionGroup* action_group, const char* action_name);
virtual GLib::Variant get_action_state_ (const std::string & action_name) noexcept = 0;

// GVariant* ActionGroup::get_action_state_hint (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state_hint (::GActionGroup* action_group, const char* action_name);
virtual GLib::Variant get_action_state_hint_ (const std::string & action_name) noexcept = 0;

// const GVariantType* ActionGroup::get_action_state_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_state_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// gboolean ActionGroup::has_action (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::has_action (::GActionGroup* action_group, const char* action_name);
virtual bool has_action_ (const std::string & action_name) noexcept = 0;

// gchar** ActionGroup::list_actions (GActionGroup* action_group);
// char** ActionGroup::list_actions (::GActionGroup* action_group);
// SKIP; container return not supported

// gboolean ActionGroup::query_action (GActionGroup* action_group, const gchar* action_name, gboolean* enabled, const GVariantType** parameter_type, const GVariantType** state_type, GVariant** state_hint, GVariant** state);
// gboolean ActionGroup::query_action (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported


};

using ActionGroupImpl = detail::InterfaceImpl<ActionGroupInterfaceDef>;

class ActionGroupInterfaceClassImpl: public detail::InterfaceClassImpl<ActionGroupImpl>
{
typedef ActionGroupInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<ActionGroupImpl> super;

protected:
using super::super;

// void ActionGroup::action_added (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_added (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL void action_added_ (const std::string & action_name) noexcept override;

// void ActionGroup::action_enabled_changed (GActionGroup* action_group, const gchar* action_name, gboolean enabled);
// void ActionGroup::action_enabled_changed (::GActionGroup* action_group, const char* action_name, gboolean enabled);
GI_INLINE_DECL void action_enabled_changed_ (const std::string & action_name, gboolean enabled) noexcept override;

// void ActionGroup::action_removed (GActionGroup* action_group, const gchar* action_name);
// void ActionGroup::action_removed (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL void action_removed_ (const std::string & action_name) noexcept override;

// void ActionGroup::action_state_changed (GActionGroup* action_group, const gchar* action_name, GVariant* state);
// void ActionGroup::action_state_changed (::GActionGroup* action_group, const char* action_name, ::GVariant* state);
GI_INLINE_DECL void action_state_changed_ (const std::string & action_name, GLib::Variant state) noexcept override;

// void ActionGroup::activate_action (GActionGroup* action_group, const gchar* action_name, GVariant* parameter);
// void ActionGroup::activate_action (::GActionGroup* action_group, const char* action_name, ::GVariant* parameter);
GI_INLINE_DECL void activate_action_ (const std::string & action_name, GLib::Variant parameter) noexcept override;

// void ActionGroup::change_action_state (GActionGroup* action_group, const gchar* action_name, GVariant* value);
// void ActionGroup::change_action_state (::GActionGroup* action_group, const char* action_name, ::GVariant* value);
GI_INLINE_DECL void change_action_state_ (const std::string & action_name, GLib::Variant value) noexcept override;

// gboolean ActionGroup::get_action_enabled (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::get_action_enabled (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL bool get_action_enabled_ (const std::string & action_name) noexcept override;

// const GVariantType* ActionGroup::get_action_parameter_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_parameter_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// GVariant* ActionGroup::get_action_state (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::Variant get_action_state_ (const std::string & action_name) noexcept override;

// GVariant* ActionGroup::get_action_state_hint (GActionGroup* action_group, const gchar* action_name);
// ::GVariant* ActionGroup::get_action_state_hint (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL GLib::Variant get_action_state_hint_ (const std::string & action_name) noexcept override;

// const GVariantType* ActionGroup::get_action_state_type (GActionGroup* action_group, const gchar* action_name);
// const ::GVariantType* ActionGroup::get_action_state_type (::GActionGroup* action_group, const char* action_name);
// SKIP; invalid callback return transfer none

// gboolean ActionGroup::has_action (GActionGroup* action_group, const gchar* action_name);
// gboolean ActionGroup::has_action (::GActionGroup* action_group, const char* action_name);
GI_INLINE_DECL bool has_action_ (const std::string & action_name) noexcept override;

// gchar** ActionGroup::list_actions (GActionGroup* action_group);
// char** ActionGroup::list_actions (::GActionGroup* action_group);
// SKIP; container return not supported

// gboolean ActionGroup::query_action (GActionGroup* action_group, const gchar* action_name, gboolean* enabled, const GVariantType** parameter_type, const GVariantType** state_type, GVariant** state_hint, GVariant** state);
// gboolean ActionGroup::query_action (::GActionGroup* action_group, const char* action_name, gboolean* enabled, const ::GVariantType** parameter_type, const ::GVariantType** state_type, ::GVariant** state_hint, ::GVariant** state);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
