// AUTO-GENERATED

#ifndef _GI_GST_DEVICEMONITOR_IMPL_HPP_
#define _GI_GST_DEVICEMONITOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstDeviceMonitor* gst_device_monitor_new ();
// ::GstDeviceMonitor* gst_device_monitor_new ();
Gst::DeviceMonitor base::DeviceMonitorBase::new_ () noexcept
{
  typedef ::GstDeviceMonitor* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gst_device_monitor_add_filter (GstDeviceMonitor* monitor, const gchar* classes, GstCaps* caps);
// guint gst_device_monitor_add_filter (::GstDeviceMonitor* monitor, const char* classes, ::GstCaps* caps);
guint base::DeviceMonitorBase::add_filter (const std::string & classes, Gst::Caps caps) noexcept
{
  typedef guint (*call_wrap_t) (::GstDeviceMonitor* monitor, const char* classes, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_add_filter;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto classes_to_c = gi::unwrap (classes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()), (const char*) (classes_to_c), (::GstCaps*) (caps_to_c));
  return _temp_ret;
}
guint base::DeviceMonitorBase::add_filter () noexcept
{
  typedef guint (*call_wrap_t) (::GstDeviceMonitor* monitor, const char* classes, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_add_filter;
  auto caps_to_c = nullptr;
  auto classes_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()), (const char*) (classes_to_c), (::GstCaps*) (caps_to_c));
  return _temp_ret;
}

// GstBus* gst_device_monitor_get_bus (GstDeviceMonitor* monitor);
// ::GstBus* gst_device_monitor_get_bus (::GstDeviceMonitor* monitor);
Gst::Bus base::DeviceMonitorBase::get_bus () noexcept
{
  typedef ::GstBus* (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_get_bus;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_device_monitor_get_devices (GstDeviceMonitor* monitor);
// ::GList* gst_device_monitor_get_devices (::GstDeviceMonitor* monitor);
std::vector<Gst::Device> base::DeviceMonitorBase::get_devices () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_get_devices;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
  return gi::detail::wrap_list<Gst::Device> (_temp_ret, gi::transfer_full);
}

// gchar** gst_device_monitor_get_providers (GstDeviceMonitor* monitor);
// char** gst_device_monitor_get_providers (::GstDeviceMonitor* monitor);
std::vector<std::string> base::DeviceMonitorBase::get_providers () noexcept
{
  typedef char** (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_get_providers;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gst_device_monitor_get_show_all_devices (GstDeviceMonitor* monitor);
// gboolean gst_device_monitor_get_show_all_devices (::GstDeviceMonitor* monitor);
bool base::DeviceMonitorBase::get_show_all_devices () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_get_show_all_devices;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_device_monitor_remove_filter (GstDeviceMonitor* monitor, guint filter_id);
// gboolean gst_device_monitor_remove_filter (::GstDeviceMonitor* monitor, guint filter_id);
bool base::DeviceMonitorBase::remove_filter (guint filter_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceMonitor* monitor, guint filter_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_remove_filter;
  auto filter_id_to_c = filter_id;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()), (guint) (filter_id_to_c));
  return _temp_ret;
}

// void gst_device_monitor_set_show_all_devices (GstDeviceMonitor* monitor, gboolean show_all);
// void gst_device_monitor_set_show_all_devices (::GstDeviceMonitor* monitor, gboolean show_all);
void base::DeviceMonitorBase::set_show_all_devices (gboolean show_all) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceMonitor* monitor, gboolean show_all);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_set_show_all_devices;
  auto show_all_to_c = show_all;
  call_wrap_v ((::GstDeviceMonitor*) (gobj_()), (gboolean) (show_all_to_c));
}

// gboolean gst_device_monitor_start (GstDeviceMonitor* monitor);
// gboolean gst_device_monitor_start (::GstDeviceMonitor* monitor);
bool base::DeviceMonitorBase::start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_start;
  auto _temp_ret = call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
  return _temp_ret;
}

// void gst_device_monitor_stop (GstDeviceMonitor* monitor);
// void gst_device_monitor_stop (::GstDeviceMonitor* monitor);
void base::DeviceMonitorBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceMonitor* monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_monitor_stop;
  call_wrap_v ((::GstDeviceMonitor*) (gobj_()));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/devicemonitor_extra_def_impl.hpp>)
#include <gst/devicemonitor_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/devicemonitor_extra_impl.hpp>)
#include <gst/devicemonitor_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void DeviceMonitorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstDeviceMonitorClass *methods = (::GstDeviceMonitorClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
