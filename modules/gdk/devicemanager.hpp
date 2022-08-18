// AUTO-GENERATED

#ifndef _GI_GDK_DEVICEMANAGER_HPP_
#define _GI_GDK_DEVICEMANAGER_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Device;
class Display;

class DeviceManager;

namespace base {


#define GI_GDK_DEVICEMANAGER_BASE base::DeviceManagerBase
class DeviceManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDeviceManager BaseObjectType;

DeviceManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_device_manager_get_type(); } 

// GdkDevice* gdk_device_manager_get_client_pointer (GdkDeviceManager* device_manager);
// ::GdkDevice* gdk_device_manager_get_client_pointer (::GdkDeviceManager* device_manager);
// IGNORE; deprecated

// GdkDisplay* gdk_device_manager_get_display (GdkDeviceManager* device_manager);
// ::GdkDisplay* gdk_device_manager_get_display (::GdkDeviceManager* device_manager);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GList* gdk_device_manager_list_devices (GdkDeviceManager* device_manager, GdkDeviceType type);
// ::GList* gdk_device_manager_list_devices (::GdkDeviceManager* device_manager, ::GdkDeviceType type);
// IGNORE; deprecated

gi::property_proxy<Gdk::Display, base::DeviceManagerBase> property_display()
{ return gi::property_proxy<Gdk::Display, base::DeviceManagerBase> (*this, "display"); }
const gi::property_proxy<Gdk::Display, base::DeviceManagerBase> property_display() const
{ return gi::property_proxy<Gdk::Display, base::DeviceManagerBase> (*this, "display"); }

// signal device-added
gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> signal_device_added()
{ return gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> (*this, "device-added"); }

// signal device-changed
gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> signal_device_changed()
{ return gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> (*this, "device-changed"); }

// signal device-removed
gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> signal_device_removed()
{ return gi::signal_proxy<void(Gdk::DeviceManager, Gdk::Device device)> (*this, "device-removed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicemanager_extra_def.hpp>)
#include <gdk/devicemanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicemanager_extra.hpp>)
#include <gdk/devicemanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DeviceManager : public GI_GDK_DEVICEMANAGER_BASE
{ typedef GI_GDK_DEVICEMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDeviceManager>
{ typedef Gdk::DeviceManager type; }; 

} // namespace repository

} // namespace gi

#endif
