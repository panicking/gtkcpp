// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTMONITOR_HPP_
#define _GI_GIO_UNIXMOUNTMONITOR_HPP_


namespace gi {

namespace repository {

namespace Gio {


class UnixMountMonitor;

namespace base {


#define GI_GIO_UNIXMOUNTMONITOR_BASE base::UnixMountMonitorBase
class UnixMountMonitorBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GUnixMountMonitor BaseObjectType;

UnixMountMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_unix_mount_monitor_get_type(); } 

// GUnixMountMonitor* g_unix_mount_monitor_new ();
// ::GUnixMountMonitor* g_unix_mount_monitor_new ();
// IGNORE; deprecated

// GUnixMountMonitor* g_unix_mount_monitor_get ();
// ::GUnixMountMonitor* g_unix_mount_monitor_get ();
static GI_INLINE_DECL Gio::UnixMountMonitor get () noexcept;

// void g_unix_mount_monitor_set_rate_limit (GUnixMountMonitor* mount_monitor, int limit_msec);
// void g_unix_mount_monitor_set_rate_limit (::GUnixMountMonitor* mount_monitor, gint limit_msec);
// IGNORE; deprecated

// signal mountpoints-changed
gi::signal_proxy<void(Gio::UnixMountMonitor)> signal_mountpoints_changed()
{ return gi::signal_proxy<void(Gio::UnixMountMonitor)> (*this, "mountpoints-changed"); }

// signal mounts-changed
gi::signal_proxy<void(Gio::UnixMountMonitor)> signal_mounts_changed()
{ return gi::signal_proxy<void(Gio::UnixMountMonitor)> (*this, "mounts-changed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountmonitor_extra_def.hpp>)
#include <gio/unixmountmonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountmonitor_extra.hpp>)
#include <gio/unixmountmonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class UnixMountMonitor : public GI_GIO_UNIXMOUNTMONITOR_BASE
{ typedef GI_GIO_UNIXMOUNTMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GUnixMountMonitor>
{ typedef Gio::UnixMountMonitor type; }; 

} // namespace repository

} // namespace gi

#endif
