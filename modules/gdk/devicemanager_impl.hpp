// AUTO-GENERATED

#ifndef _GI_GDK_DEVICEMANAGER_IMPL_HPP_
#define _GI_GDK_DEVICEMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDevice* gdk_device_manager_get_client_pointer (GdkDeviceManager* device_manager);
// ::GdkDevice* gdk_device_manager_get_client_pointer (::GdkDeviceManager* device_manager);
// IGNORE; deprecated

// GdkDisplay* gdk_device_manager_get_display (GdkDeviceManager* device_manager);
// ::GdkDisplay* gdk_device_manager_get_display (::GdkDeviceManager* device_manager);
Gdk::Display base::DeviceManagerBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDeviceManager* device_manager);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_manager_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDeviceManager*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gdk_device_manager_list_devices (GdkDeviceManager* device_manager, GdkDeviceType type);
// ::GList* gdk_device_manager_list_devices (::GdkDeviceManager* device_manager, ::GdkDeviceType type);
// IGNORE; deprecated





} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicemanager_extra_def_impl.hpp>)
#include <gdk/devicemanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicemanager_extra_impl.hpp>)
#include <gdk/devicemanager_extra_impl.hpp>
#endif
#endif

#endif
