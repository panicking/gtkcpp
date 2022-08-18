// AUTO-GENERATED

#ifndef _GI_GDK_DEVICETOOL_IMPL_HPP_
#define _GI_GDK_DEVICETOOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// guint64 gdk_device_tool_get_hardware_id (GdkDeviceTool* tool);
// guint64 gdk_device_tool_get_hardware_id (::GdkDeviceTool* tool);
guint64 base::DeviceToolBase::get_hardware_id () noexcept
{
  typedef guint64 (*call_wrap_t) (::GdkDeviceTool* tool);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_tool_get_hardware_id;
  auto _temp_ret = call_wrap_v ((::GdkDeviceTool*) (gobj_()));
  return _temp_ret;
}

// guint64 gdk_device_tool_get_serial (GdkDeviceTool* tool);
// guint64 gdk_device_tool_get_serial (::GdkDeviceTool* tool);
guint64 base::DeviceToolBase::get_serial () noexcept
{
  typedef guint64 (*call_wrap_t) (::GdkDeviceTool* tool);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_tool_get_serial;
  auto _temp_ret = call_wrap_v ((::GdkDeviceTool*) (gobj_()));
  return _temp_ret;
}

// GdkDeviceToolType gdk_device_tool_get_tool_type (GdkDeviceTool* tool);
// ::GdkDeviceToolType gdk_device_tool_get_tool_type (::GdkDeviceTool* tool);
Gdk::DeviceToolType base::DeviceToolBase::get_tool_type () noexcept
{
  typedef ::GdkDeviceToolType (*call_wrap_t) (::GdkDeviceTool* tool);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_tool_get_tool_type;
  auto _temp_ret = call_wrap_v ((::GdkDeviceTool*) (gobj_()));
  return gi::wrap (_temp_ret);
}


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicetool_extra_def_impl.hpp>)
#include <gdk/devicetool_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicetool_extra_impl.hpp>)
#include <gdk/devicetool_extra_impl.hpp>
#endif
#endif

#endif
