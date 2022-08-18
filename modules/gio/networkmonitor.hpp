// AUTO-GENERATED

#ifndef _GI_GIO_NETWORKMONITOR_HPP_
#define _GI_GIO_NETWORKMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class SocketConnectable;

class NetworkMonitor;

namespace base {


#define GI_GIO_NETWORKMONITOR_BASE base::NetworkMonitorBase
class NetworkMonitorBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GNetworkMonitor BaseObjectType;

NetworkMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_network_monitor_get_type(); } 

// GNetworkMonitor* g_network_monitor_get_default ();
// ::GNetworkMonitor* g_network_monitor_get_default ();
static GI_INLINE_DECL Gio::NetworkMonitor get_default () noexcept;

// gboolean g_network_monitor_can_reach (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GError ** error);
// gboolean g_network_monitor_can_reach (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool can_reach (Gio::SocketConnectable connectable, Gio::Cancellable cancellable);
GI_INLINE_DECL bool can_reach (Gio::SocketConnectable connectable);
GI_INLINE_DECL bool can_reach (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool can_reach (Gio::SocketConnectable connectable, GLib::Error * _error) noexcept;

// void g_network_monitor_can_reach_async (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_network_monitor_can_reach_async (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void can_reach_async (Gio::SocketConnectable connectable, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void can_reach_async (Gio::SocketConnectable connectable, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_network_monitor_can_reach_finish (GNetworkMonitor* monitor, GAsyncResult* result, GError ** error);
// gboolean g_network_monitor_can_reach_finish (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool can_reach_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool can_reach_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GNetworkConnectivity g_network_monitor_get_connectivity (GNetworkMonitor* monitor);
// ::GNetworkConnectivity g_network_monitor_get_connectivity (::GNetworkMonitor* monitor);
GI_INLINE_DECL Gio::NetworkConnectivity get_connectivity () noexcept;

// gboolean g_network_monitor_get_network_available (GNetworkMonitor* monitor);
// gboolean g_network_monitor_get_network_available (::GNetworkMonitor* monitor);
GI_INLINE_DECL bool get_network_available () noexcept;

// gboolean g_network_monitor_get_network_metered (GNetworkMonitor* monitor);
// gboolean g_network_monitor_get_network_metered (::GNetworkMonitor* monitor);
GI_INLINE_DECL bool get_network_metered () noexcept;

gi::property_proxy<Gio::NetworkConnectivity, base::NetworkMonitorBase> property_connectivity()
{ return gi::property_proxy<Gio::NetworkConnectivity, base::NetworkMonitorBase> (*this, "connectivity"); }
const gi::property_proxy<Gio::NetworkConnectivity, base::NetworkMonitorBase> property_connectivity() const
{ return gi::property_proxy<Gio::NetworkConnectivity, base::NetworkMonitorBase> (*this, "connectivity"); }

gi::property_proxy<bool, base::NetworkMonitorBase> property_network_available()
{ return gi::property_proxy<bool, base::NetworkMonitorBase> (*this, "network-available"); }
const gi::property_proxy<bool, base::NetworkMonitorBase> property_network_available() const
{ return gi::property_proxy<bool, base::NetworkMonitorBase> (*this, "network-available"); }

gi::property_proxy<bool, base::NetworkMonitorBase> property_network_metered()
{ return gi::property_proxy<bool, base::NetworkMonitorBase> (*this, "network-metered"); }
const gi::property_proxy<bool, base::NetworkMonitorBase> property_network_metered() const
{ return gi::property_proxy<bool, base::NetworkMonitorBase> (*this, "network-metered"); }

// signal network-changed
gi::signal_proxy<void(Gio::NetworkMonitor, gboolean network_available)> signal_network_changed()
{ return gi::signal_proxy<void(Gio::NetworkMonitor, gboolean network_available)> (*this, "network-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/networkmonitor_extra_def.hpp>)
#include <gio/networkmonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/networkmonitor_extra.hpp>)
#include <gio/networkmonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class NetworkMonitor : public GI_GIO_NETWORKMONITOR_BASE
{ typedef GI_GIO_NETWORKMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GNetworkMonitor>
{ typedef Gio::NetworkMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class NetworkMonitorInterfaceDef
{
typedef NetworkMonitorInterfaceDef self;
public:
typedef Gio::NetworkMonitor instance_type;
typedef ::GNetworkMonitorInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// gboolean NetworkMonitor::can_reach (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GError ** error);
// gboolean NetworkMonitor::can_reach (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void NetworkMonitor::can_reach_async (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void NetworkMonitor::can_reach_async (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean NetworkMonitor::can_reach_finish (GNetworkMonitor* monitor, GAsyncResult* result, GError ** error);
// gboolean NetworkMonitor::can_reach_finish (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void NetworkMonitor::network_changed (GNetworkMonitor* monitor, gboolean network_available);
// void NetworkMonitor::network_changed (::GNetworkMonitor* monitor, gboolean network_available);
virtual void network_changed_ (gboolean network_available) noexcept = 0;


};

using NetworkMonitorImpl = detail::InterfaceImpl<NetworkMonitorInterfaceDef>;

class NetworkMonitorInterfaceClassImpl: public detail::InterfaceClassImpl<NetworkMonitorImpl>
{
typedef NetworkMonitorInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<NetworkMonitorImpl> super;

protected:
using super::super;

// gboolean NetworkMonitor::can_reach (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GError ** error);
// gboolean NetworkMonitor::can_reach (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void NetworkMonitor::can_reach_async (GNetworkMonitor* monitor, GSocketConnectable* connectable, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void NetworkMonitor::can_reach_async (::GNetworkMonitor* monitor, ::GSocketConnectable* connectable, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean NetworkMonitor::can_reach_finish (GNetworkMonitor* monitor, GAsyncResult* result, GError ** error);
// gboolean NetworkMonitor::can_reach_finish (::GNetworkMonitor* monitor, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void NetworkMonitor::network_changed (GNetworkMonitor* monitor, gboolean network_available);
// void NetworkMonitor::network_changed (::GNetworkMonitor* monitor, gboolean network_available);
GI_INLINE_DECL void network_changed_ (gboolean network_available) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
