// AUTO-GENERATED

#ifndef _GI_GIO_REMOTEACTIONGROUP_HPP_
#define _GI_GIO_REMOTEACTIONGROUP_HPP_


namespace gi {

namespace repository {

namespace Gio {


class RemoteActionGroup;

namespace base {


#define GI_GIO_REMOTEACTIONGROUP_BASE base::RemoteActionGroupBase
class RemoteActionGroupBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GRemoteActionGroup BaseObjectType;

RemoteActionGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_remote_action_group_get_type(); } 

// void g_remote_action_group_activate_action_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* parameter, GVariant* platform_data);
// void g_remote_action_group_activate_action_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
GI_INLINE_DECL void activate_action_full (const std::string & action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept;
GI_INLINE_DECL void activate_action_full (const std::string & action_name, GLib::Variant platform_data) noexcept;

// void g_remote_action_group_change_action_state_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* value, GVariant* platform_data);
// void g_remote_action_group_change_action_state_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* value, ::GVariant* platform_data);
GI_INLINE_DECL void change_action_state_full (const std::string & action_name, GLib::Variant value, GLib::Variant platform_data) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra_def.hpp>)
#include <gio/remoteactiongroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/remoteactiongroup_extra.hpp>)
#include <gio/remoteactiongroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class RemoteActionGroup : public GI_GIO_REMOTEACTIONGROUP_BASE
{ typedef GI_GIO_REMOTEACTIONGROUP_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GRemoteActionGroup>
{ typedef Gio::RemoteActionGroup type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class RemoteActionGroupInterfaceDef
{
typedef RemoteActionGroupInterfaceDef self;
public:
typedef Gio::RemoteActionGroup instance_type;
typedef ::GRemoteActionGroupInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void RemoteActionGroup::activate_action_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* parameter, GVariant* platform_data);
// void RemoteActionGroup::activate_action_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
virtual void activate_action_full_ (const std::string & action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept = 0;

// void RemoteActionGroup::change_action_state_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* value, GVariant* platform_data);
// void RemoteActionGroup::change_action_state_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* value, ::GVariant* platform_data);
virtual void change_action_state_full_ (const std::string & action_name, GLib::Variant value, GLib::Variant platform_data) noexcept = 0;


};

using RemoteActionGroupImpl = detail::InterfaceImpl<RemoteActionGroupInterfaceDef>;

class RemoteActionGroupInterfaceClassImpl: public detail::InterfaceClassImpl<RemoteActionGroupImpl>
{
typedef RemoteActionGroupInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<RemoteActionGroupImpl> super;

protected:
using super::super;

// void RemoteActionGroup::activate_action_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* parameter, GVariant* platform_data);
// void RemoteActionGroup::activate_action_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* parameter, ::GVariant* platform_data);
GI_INLINE_DECL void activate_action_full_ (const std::string & action_name, GLib::Variant parameter, GLib::Variant platform_data) noexcept override;

// void RemoteActionGroup::change_action_state_full (GRemoteActionGroup* remote, const gchar* action_name, GVariant* value, GVariant* platform_data);
// void RemoteActionGroup::change_action_state_full (::GRemoteActionGroup* remote, const char* action_name, ::GVariant* value, ::GVariant* platform_data);
GI_INLINE_DECL void change_action_state_full_ (const std::string & action_name, GLib::Variant value, GLib::Variant platform_data) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
