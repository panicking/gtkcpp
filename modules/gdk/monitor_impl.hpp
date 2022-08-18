// AUTO-GENERATED

#ifndef _GI_GDK_MONITOR_IMPL_HPP_
#define _GI_GDK_MONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDisplay* gdk_monitor_get_display (GdkMonitor* monitor);
// ::GdkDisplay* gdk_monitor_get_display (::GdkMonitor* monitor);
Gdk::Display base::MonitorBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_display;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_monitor_get_geometry (GdkMonitor* monitor, GdkRectangle* geometry);
// void gdk_monitor_get_geometry (::GdkMonitor* monitor, ::GdkRectangle* geometry);
void base::MonitorBase::get_geometry (Gdk::Rectangle & geometry) noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_geometry;
  traits::unset_wrapper<::GdkRectangle>::type geometry_c;
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &geometry_c));
  geometry = gi::wrap ((::GdkRectangle*) &geometry_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::MonitorBase::get_geometry () noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* geometry);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_geometry;
  traits::unset_wrapper<::GdkRectangle>::type geometry_c;
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &geometry_c));
  return gi::wrap ((::GdkRectangle*) &geometry_c, gi::transfer_none, gi::direction_out);
}

// int gdk_monitor_get_height_mm (GdkMonitor* monitor);
// gint gdk_monitor_get_height_mm (::GdkMonitor* monitor);
gint base::MonitorBase::get_height_mm () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_height_mm;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// const char* gdk_monitor_get_manufacturer (GdkMonitor* monitor);
// const char* gdk_monitor_get_manufacturer (::GdkMonitor* monitor);
std::string base::MonitorBase::get_manufacturer () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_manufacturer;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* gdk_monitor_get_model (GdkMonitor* monitor);
// const char* gdk_monitor_get_model (::GdkMonitor* monitor);
std::string base::MonitorBase::get_model () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_model;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gdk_monitor_get_refresh_rate (GdkMonitor* monitor);
// gint gdk_monitor_get_refresh_rate (::GdkMonitor* monitor);
gint base::MonitorBase::get_refresh_rate () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_refresh_rate;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// int gdk_monitor_get_scale_factor (GdkMonitor* monitor);
// gint gdk_monitor_get_scale_factor (::GdkMonitor* monitor);
gint base::MonitorBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// GdkSubpixelLayout gdk_monitor_get_subpixel_layout (GdkMonitor* monitor);
// ::GdkSubpixelLayout gdk_monitor_get_subpixel_layout (::GdkMonitor* monitor);
Gdk::SubpixelLayout base::MonitorBase::get_subpixel_layout () noexcept
{
  typedef ::GdkSubpixelLayout (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_subpixel_layout;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// int gdk_monitor_get_width_mm (GdkMonitor* monitor);
// gint gdk_monitor_get_width_mm (::GdkMonitor* monitor);
gint base::MonitorBase::get_width_mm () noexcept
{
  typedef gint (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_width_mm;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}

// void gdk_monitor_get_workarea (GdkMonitor* monitor, GdkRectangle* workarea);
// void gdk_monitor_get_workarea (::GdkMonitor* monitor, ::GdkRectangle* workarea);
void base::MonitorBase::get_workarea (Gdk::Rectangle & workarea) noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* workarea);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_workarea;
  traits::unset_wrapper<::GdkRectangle>::type workarea_c;
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &workarea_c));
  workarea = gi::wrap ((::GdkRectangle*) &workarea_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::MonitorBase::get_workarea () noexcept
{
  typedef void (*call_wrap_t) (::GdkMonitor* monitor, ::GdkRectangle* workarea);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_get_workarea;
  traits::unset_wrapper<::GdkRectangle>::type workarea_c;
  call_wrap_v ((::GdkMonitor*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &workarea_c));
  return gi::wrap ((::GdkRectangle*) &workarea_c, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_monitor_is_primary (GdkMonitor* monitor);
// gboolean gdk_monitor_is_primary (::GdkMonitor* monitor);
bool base::MonitorBase::is_primary () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_monitor_is_primary;
  auto _temp_ret = call_wrap_v ((::GdkMonitor*) (gobj_()));
  return _temp_ret;
}



} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra_def_impl.hpp>)
#include <gdk/monitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/monitor_extra_impl.hpp>)
#include <gdk/monitor_extra_impl.hpp>
#endif
#endif

#endif
