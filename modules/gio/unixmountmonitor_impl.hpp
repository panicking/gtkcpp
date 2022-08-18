// AUTO-GENERATED

#ifndef _GI_GIO_UNIXMOUNTMONITOR_IMPL_HPP_
#define _GI_GIO_UNIXMOUNTMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GUnixMountMonitor* g_unix_mount_monitor_new ();
// ::GUnixMountMonitor* g_unix_mount_monitor_new ();
// IGNORE; deprecated

// GUnixMountMonitor* g_unix_mount_monitor_get ();
// ::GUnixMountMonitor* g_unix_mount_monitor_get ();
Gio::UnixMountMonitor base::UnixMountMonitorBase::get () noexcept
{
  typedef ::GUnixMountMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_unix_mount_monitor_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_unix_mount_monitor_set_rate_limit (GUnixMountMonitor* mount_monitor, int limit_msec);
// void g_unix_mount_monitor_set_rate_limit (::GUnixMountMonitor* mount_monitor, gint limit_msec);
// IGNORE; deprecated




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/unixmountmonitor_extra_def_impl.hpp>)
#include <gio/unixmountmonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/unixmountmonitor_extra_impl.hpp>)
#include <gio/unixmountmonitor_extra_impl.hpp>
#endif
#endif

#endif
