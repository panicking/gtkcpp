// AUTO-GENERATED

#ifndef _GI_GDK_DEVICETOOL_HPP_
#define _GI_GDK_DEVICETOOL_HPP_


namespace gi {

namespace repository {

namespace Gdk {


class DeviceTool;

namespace base {


#define GI_GDK_DEVICETOOL_BASE base::DeviceToolBase
class DeviceToolBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDeviceTool BaseObjectType;

DeviceToolBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_device_tool_get_type(); } 

// guint64 gdk_device_tool_get_hardware_id (GdkDeviceTool* tool);
// guint64 gdk_device_tool_get_hardware_id (::GdkDeviceTool* tool);
GI_INLINE_DECL guint64 get_hardware_id () noexcept;

// guint64 gdk_device_tool_get_serial (GdkDeviceTool* tool);
// guint64 gdk_device_tool_get_serial (::GdkDeviceTool* tool);
GI_INLINE_DECL guint64 get_serial () noexcept;

// GdkDeviceToolType gdk_device_tool_get_tool_type (GdkDeviceTool* tool);
// ::GdkDeviceToolType gdk_device_tool_get_tool_type (::GdkDeviceTool* tool);
GI_INLINE_DECL Gdk::DeviceToolType get_tool_type () noexcept;

gi::property_proxy<Gdk::AxisFlags, base::DeviceToolBase> property_axes()
{ return gi::property_proxy<Gdk::AxisFlags, base::DeviceToolBase> (*this, "axes"); }
const gi::property_proxy<Gdk::AxisFlags, base::DeviceToolBase> property_axes() const
{ return gi::property_proxy<Gdk::AxisFlags, base::DeviceToolBase> (*this, "axes"); }

gi::property_proxy<guint64, base::DeviceToolBase> property_hardware_id()
{ return gi::property_proxy<guint64, base::DeviceToolBase> (*this, "hardware-id"); }
const gi::property_proxy<guint64, base::DeviceToolBase> property_hardware_id() const
{ return gi::property_proxy<guint64, base::DeviceToolBase> (*this, "hardware-id"); }

gi::property_proxy<guint64, base::DeviceToolBase> property_serial()
{ return gi::property_proxy<guint64, base::DeviceToolBase> (*this, "serial"); }
const gi::property_proxy<guint64, base::DeviceToolBase> property_serial() const
{ return gi::property_proxy<guint64, base::DeviceToolBase> (*this, "serial"); }

gi::property_proxy<Gdk::DeviceToolType, base::DeviceToolBase> property_tool_type()
{ return gi::property_proxy<Gdk::DeviceToolType, base::DeviceToolBase> (*this, "tool-type"); }
const gi::property_proxy<Gdk::DeviceToolType, base::DeviceToolBase> property_tool_type() const
{ return gi::property_proxy<Gdk::DeviceToolType, base::DeviceToolBase> (*this, "tool-type"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/devicetool_extra_def.hpp>)
#include <gdk/devicetool_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/devicetool_extra.hpp>)
#include <gdk/devicetool_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class DeviceTool : public GI_GDK_DEVICETOOL_BASE
{ typedef GI_GDK_DEVICETOOL_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDeviceTool>
{ typedef Gdk::DeviceTool type; }; 

} // namespace repository

} // namespace gi

#endif
