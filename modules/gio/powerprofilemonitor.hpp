// AUTO-GENERATED

#ifndef _GI_GIO_POWERPROFILEMONITOR_HPP_
#define _GI_GIO_POWERPROFILEMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class PowerProfileMonitor;

namespace base {


#define GI_GIO_POWERPROFILEMONITOR_BASE base::PowerProfileMonitorBase
class PowerProfileMonitorBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GPowerProfileMonitor BaseObjectType;

PowerProfileMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_power_profile_monitor_get_type(); } 

// GPowerProfileMonitor* g_power_profile_monitor_dup_default ();
// ::GPowerProfileMonitor* g_power_profile_monitor_dup_default ();
static GI_INLINE_DECL Gio::PowerProfileMonitor dup_default () noexcept;

// gboolean g_power_profile_monitor_get_power_saver_enabled (GPowerProfileMonitor* monitor);
// gboolean g_power_profile_monitor_get_power_saver_enabled (::GPowerProfileMonitor* monitor);
GI_INLINE_DECL bool get_power_saver_enabled () noexcept;

gi::property_proxy<bool, base::PowerProfileMonitorBase> property_power_saver_enabled()
{ return gi::property_proxy<bool, base::PowerProfileMonitorBase> (*this, "power-saver-enabled"); }
const gi::property_proxy<bool, base::PowerProfileMonitorBase> property_power_saver_enabled() const
{ return gi::property_proxy<bool, base::PowerProfileMonitorBase> (*this, "power-saver-enabled"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/powerprofilemonitor_extra_def.hpp>)
#include <gio/powerprofilemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/powerprofilemonitor_extra.hpp>)
#include <gio/powerprofilemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PowerProfileMonitor : public GI_GIO_POWERPROFILEMONITOR_BASE
{ typedef GI_GIO_POWERPROFILEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPowerProfileMonitor>
{ typedef Gio::PowerProfileMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class PowerProfileMonitorInterfaceDef
{
typedef PowerProfileMonitorInterfaceDef self;
public:
typedef Gio::PowerProfileMonitor instance_type;
typedef ::GPowerProfileMonitorInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );


};

using PowerProfileMonitorImpl = detail::InterfaceImpl<PowerProfileMonitorInterfaceDef>;

class PowerProfileMonitorInterfaceClassImpl: public detail::InterfaceClassImpl<PowerProfileMonitorImpl>
{
typedef PowerProfileMonitorInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PowerProfileMonitorImpl> super;

protected:
using super::super;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
