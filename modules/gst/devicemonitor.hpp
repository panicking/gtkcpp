// AUTO-GENERATED

#ifndef _GI_GST_DEVICEMONITOR_HPP_
#define _GI_GST_DEVICEMONITOR_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Bus;
class Caps;
class Device;

class DeviceMonitor;

namespace base {


#define GI_GST_DEVICEMONITOR_BASE base::DeviceMonitorBase
class DeviceMonitorBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstDeviceMonitor BaseObjectType;

DeviceMonitorBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_device_monitor_get_type(); } 

// GstDeviceMonitor* gst_device_monitor_new ();
// ::GstDeviceMonitor* gst_device_monitor_new ();
static GI_INLINE_DECL Gst::DeviceMonitor new_ () noexcept;

// guint gst_device_monitor_add_filter (GstDeviceMonitor* monitor, const gchar* classes, GstCaps* caps);
// guint gst_device_monitor_add_filter (::GstDeviceMonitor* monitor, const char* classes, ::GstCaps* caps);
GI_INLINE_DECL guint add_filter (const std::string & classes, Gst::Caps caps) noexcept;
GI_INLINE_DECL guint add_filter () noexcept;

// GstBus* gst_device_monitor_get_bus (GstDeviceMonitor* monitor);
// ::GstBus* gst_device_monitor_get_bus (::GstDeviceMonitor* monitor);
GI_INLINE_DECL Gst::Bus get_bus () noexcept;

// GList* gst_device_monitor_get_devices (GstDeviceMonitor* monitor);
// ::GList* gst_device_monitor_get_devices (::GstDeviceMonitor* monitor);
GI_INLINE_DECL std::vector<Gst::Device> get_devices () noexcept;

// gchar** gst_device_monitor_get_providers (GstDeviceMonitor* monitor);
// char** gst_device_monitor_get_providers (::GstDeviceMonitor* monitor);
GI_INLINE_DECL std::vector<std::string> get_providers () noexcept;

// gboolean gst_device_monitor_get_show_all_devices (GstDeviceMonitor* monitor);
// gboolean gst_device_monitor_get_show_all_devices (::GstDeviceMonitor* monitor);
GI_INLINE_DECL bool get_show_all_devices () noexcept;

// gboolean gst_device_monitor_remove_filter (GstDeviceMonitor* monitor, guint filter_id);
// gboolean gst_device_monitor_remove_filter (::GstDeviceMonitor* monitor, guint filter_id);
GI_INLINE_DECL bool remove_filter (guint filter_id) noexcept;

// void gst_device_monitor_set_show_all_devices (GstDeviceMonitor* monitor, gboolean show_all);
// void gst_device_monitor_set_show_all_devices (::GstDeviceMonitor* monitor, gboolean show_all);
GI_INLINE_DECL void set_show_all_devices (gboolean show_all) noexcept;

// gboolean gst_device_monitor_start (GstDeviceMonitor* monitor);
// gboolean gst_device_monitor_start (::GstDeviceMonitor* monitor);
GI_INLINE_DECL bool start () noexcept;

// void gst_device_monitor_stop (GstDeviceMonitor* monitor);
// void gst_device_monitor_stop (::GstDeviceMonitor* monitor);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<bool, base::DeviceMonitorBase> property_show_all()
{ return gi::property_proxy<bool, base::DeviceMonitorBase> (*this, "show-all"); }
const gi::property_proxy<bool, base::DeviceMonitorBase> property_show_all() const
{ return gi::property_proxy<bool, base::DeviceMonitorBase> (*this, "show-all"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/devicemonitor_extra_def.hpp>)
#include <gst/devicemonitor_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/devicemonitor_extra.hpp>)
#include <gst/devicemonitor_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DeviceMonitor : public GI_GST_DEVICEMONITOR_BASE
{ typedef GI_GST_DEVICEMONITOR_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDeviceMonitor>
{ typedef Gst::DeviceMonitor type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class DeviceMonitorClassDef
{
typedef DeviceMonitorClassDef self;
public:
typedef Gst::DeviceMonitor instance_type;
typedef ::GstDeviceMonitorClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class DeviceMonitorClass: public detail::ClassTemplate<Gst::impl::internal::DeviceMonitorClassDef, Gst::impl::internal::ObjectClass>
{
typedef DeviceMonitorClass self;
typedef detail::ClassTemplate<Gst::impl::internal::DeviceMonitorClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using DeviceMonitorImpl = detail::ObjectImpl<DeviceMonitor, internal::DeviceMonitorClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
