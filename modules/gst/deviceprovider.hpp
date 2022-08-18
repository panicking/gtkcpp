// AUTO-GENERATED

#ifndef _GI_GST_DEVICEPROVIDER_HPP_
#define _GI_GST_DEVICEPROVIDER_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Bus;
class Device;
class DeviceProviderFactory;
class Plugin;

class DeviceProvider;

namespace base {


#define GI_GST_DEVICEPROVIDER_BASE base::DeviceProviderBase
class DeviceProviderBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstDeviceProvider BaseObjectType;

DeviceProviderBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_device_provider_get_type(); } 

// gboolean gst_device_provider_register (GstPlugin* plugin, const gchar* name, guint rank, GType type);
// gboolean gst_device_provider_register (::GstPlugin* plugin, const char* name, guint rank, GType type);
static GI_INLINE_DECL bool register_ (Gst::Plugin plugin, const std::string & name, guint rank, GType type) noexcept;
static GI_INLINE_DECL bool register_ (const std::string & name, guint rank, GType type) noexcept;

// gboolean gst_device_provider_can_monitor (GstDeviceProvider* provider);
// gboolean gst_device_provider_can_monitor (::GstDeviceProvider* provider);
GI_INLINE_DECL bool can_monitor () noexcept;

// void gst_device_provider_device_add (GstDeviceProvider* provider, GstDevice* device);
// void gst_device_provider_device_add (::GstDeviceProvider* provider, ::GstDevice* device);
GI_INLINE_DECL void device_add (Gst::Device device) noexcept;

// void gst_device_provider_device_changed (GstDeviceProvider* provider, GstDevice* device, GstDevice* changed_device);
// void gst_device_provider_device_changed (::GstDeviceProvider* provider, ::GstDevice* device, ::GstDevice* changed_device);
GI_INLINE_DECL void device_changed (Gst::Device device, Gst::Device changed_device) noexcept;

// void gst_device_provider_device_remove (GstDeviceProvider* provider, GstDevice* device);
// void gst_device_provider_device_remove (::GstDeviceProvider* provider, ::GstDevice* device);
GI_INLINE_DECL void device_remove (Gst::Device device) noexcept;

// GstBus* gst_device_provider_get_bus (GstDeviceProvider* provider);
// ::GstBus* gst_device_provider_get_bus (::GstDeviceProvider* provider);
GI_INLINE_DECL Gst::Bus get_bus () noexcept;

// GList* gst_device_provider_get_devices (GstDeviceProvider* provider);
// ::GList* gst_device_provider_get_devices (::GstDeviceProvider* provider);
GI_INLINE_DECL std::vector<Gst::Device> get_devices () noexcept;

// GstDeviceProviderFactory* gst_device_provider_get_factory (GstDeviceProvider* provider);
// ::GstDeviceProviderFactory* gst_device_provider_get_factory (::GstDeviceProvider* provider);
GI_INLINE_DECL Gst::DeviceProviderFactory get_factory () noexcept;

// gchar** gst_device_provider_get_hidden_providers (GstDeviceProvider* provider);
// char** gst_device_provider_get_hidden_providers (::GstDeviceProvider* provider);
GI_INLINE_DECL std::vector<std::string> get_hidden_providers () noexcept;

// const gchar* gst_device_provider_get_metadata (GstDeviceProvider* provider, const gchar* key);
// const char* gst_device_provider_get_metadata (::GstDeviceProvider* provider, const char* key);
GI_INLINE_DECL std::string get_metadata (const std::string & key) noexcept;

// void gst_device_provider_hide_provider (GstDeviceProvider* provider, const gchar* name);
// void gst_device_provider_hide_provider (::GstDeviceProvider* provider, const char* name);
GI_INLINE_DECL void hide_provider (const std::string & name) noexcept;

// gboolean gst_device_provider_is_started (GstDeviceProvider* provider);
// gboolean gst_device_provider_is_started (::GstDeviceProvider* provider);
GI_INLINE_DECL bool is_started () noexcept;

// gboolean gst_device_provider_start (GstDeviceProvider* provider);
// gboolean gst_device_provider_start (::GstDeviceProvider* provider);
GI_INLINE_DECL bool start () noexcept;

// void gst_device_provider_stop (GstDeviceProvider* provider);
// void gst_device_provider_stop (::GstDeviceProvider* provider);
GI_INLINE_DECL void stop () noexcept;

// void gst_device_provider_unhide_provider (GstDeviceProvider* provider, const gchar* name);
// void gst_device_provider_unhide_provider (::GstDeviceProvider* provider, const char* name);
GI_INLINE_DECL void unhide_provider (const std::string & name) noexcept;

// signal provider-hidden
gi::signal_proxy<void(Gst::DeviceProvider, const std::string & object)> signal_provider_hidden()
{ return gi::signal_proxy<void(Gst::DeviceProvider, const std::string & object)> (*this, "provider-hidden"); }

// signal provider-unhidden
gi::signal_proxy<void(Gst::DeviceProvider, const std::string & object)> signal_provider_unhidden()
{ return gi::signal_proxy<void(Gst::DeviceProvider, const std::string & object)> (*this, "provider-unhidden"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/deviceprovider_extra_def.hpp>)
#include <gst/deviceprovider_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/deviceprovider_extra.hpp>)
#include <gst/deviceprovider_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DeviceProvider : public GI_GST_DEVICEPROVIDER_BASE
{ typedef GI_GST_DEVICEPROVIDER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDeviceProvider>
{ typedef Gst::DeviceProvider type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class DeviceProviderClassDef
{
typedef DeviceProviderClassDef self;
public:
typedef Gst::DeviceProvider instance_type;
typedef ::GstDeviceProviderClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean DeviceProvider::start (GstDeviceProvider* provider);
// gboolean DeviceProvider::start (::GstDeviceProvider* provider);
virtual bool start_ () noexcept = 0;

// void DeviceProvider::stop (GstDeviceProvider* provider);
// void DeviceProvider::stop (::GstDeviceProvider* provider);
virtual void stop_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DeviceProviderClass: public detail::ClassTemplate<Gst::impl::internal::DeviceProviderClassDef, Gst::impl::internal::ObjectClass>
{
typedef DeviceProviderClass self;
typedef detail::ClassTemplate<Gst::impl::internal::DeviceProviderClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean DeviceProvider::start (GstDeviceProvider* provider);
// gboolean DeviceProvider::start (::GstDeviceProvider* provider);
GI_INLINE_DECL bool start_ () noexcept override;

// void DeviceProvider::stop (GstDeviceProvider* provider);
// void DeviceProvider::stop (::GstDeviceProvider* provider);
GI_INLINE_DECL void stop_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DeviceProviderImpl = detail::ObjectImpl<DeviceProvider, internal::DeviceProviderClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
