// AUTO-GENERATED

#ifndef _GI_GIO_APPINFOMONITOR_IMPL_HPP_
#define _GI_GIO_APPINFOMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GAppInfoMonitor* g_app_info_monitor_get ();
// ::GAppInfoMonitor* g_app_info_monitor_get ();
Gio::AppInfoMonitor base::AppInfoMonitorBase::get () noexcept
{
  typedef ::GAppInfoMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_app_info_monitor_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/appinfomonitor_extra_def_impl.hpp>)
#include <gio/appinfomonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/appinfomonitor_extra_impl.hpp>)
#include <gio/appinfomonitor_extra_impl.hpp>
#endif
#endif

#endif
