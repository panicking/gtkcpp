// AUTO-GENERATED

#ifndef _GI_GIO_POWERPROFILEMONITOR_IMPL_HPP_
#define _GI_GIO_POWERPROFILEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GPowerProfileMonitor* g_power_profile_monitor_dup_default ();
// ::GPowerProfileMonitor* g_power_profile_monitor_dup_default ();
Gio::PowerProfileMonitor base::PowerProfileMonitorBase::dup_default () noexcept
{
  typedef ::GPowerProfileMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_power_profile_monitor_dup_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_power_profile_monitor_get_power_saver_enabled (GPowerProfileMonitor* monitor);
// gboolean g_power_profile_monitor_get_power_saver_enabled (::GPowerProfileMonitor* monitor);
bool base::PowerProfileMonitorBase::get_power_saver_enabled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GPowerProfileMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) g_power_profile_monitor_get_power_saver_enabled;
  auto _temp_ret = call_wrap_v ((::GPowerProfileMonitor*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/powerprofilemonitor_extra_def_impl.hpp>)
#include <gio/powerprofilemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/powerprofilemonitor_extra_impl.hpp>)
#include <gio/powerprofilemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void PowerProfileMonitorInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GPowerProfileMonitorInterface *methods = (::GPowerProfileMonitorInterface *) interface_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
