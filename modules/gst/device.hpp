// AUTO-GENERATED

#ifndef _GI_GST_DEVICE_HPP_
#define _GI_GST_DEVICE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class Caps;
class Element;
class Structure;

class Device;

namespace base {


#define GI_GST_DEVICE_BASE base::DeviceBase
class DeviceBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstDevice BaseObjectType;

DeviceBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_device_get_type(); } 

// GstElement* gst_device_create_element (GstDevice* device, const gchar* name);
// ::GstElement* gst_device_create_element (::GstDevice* device, const char* name);
GI_INLINE_DECL Gst::Element create_element (const std::string & name) noexcept;
GI_INLINE_DECL Gst::Element create_element () noexcept;

// GstCaps* gst_device_get_caps (GstDevice* device);
// ::GstCaps* gst_device_get_caps (::GstDevice* device);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

// gchar* gst_device_get_device_class (GstDevice* device);
// char* gst_device_get_device_class (::GstDevice* device);
GI_INLINE_DECL std::string get_device_class () noexcept;

// gchar* gst_device_get_display_name (GstDevice* device);
// char* gst_device_get_display_name (::GstDevice* device);
GI_INLINE_DECL std::string get_display_name () noexcept;

// GstStructure* gst_device_get_properties (GstDevice* device);
// ::GstStructure* gst_device_get_properties (::GstDevice* device);
GI_INLINE_DECL Gst::Structure get_properties () noexcept;

// gboolean gst_device_has_classes (GstDevice* device, const gchar* classes);
// gboolean gst_device_has_classes (::GstDevice* device, const char* classes);
GI_INLINE_DECL bool has_classes (const std::string & classes) noexcept;

// gboolean gst_device_has_classesv (GstDevice* device, gchar** classes);
// gboolean gst_device_has_classesv (::GstDevice* device, char** classes);
GI_INLINE_DECL bool has_classesv (const std::vector<std::string> & classes) noexcept;

// gboolean gst_device_reconfigure_element (GstDevice* device, GstElement* element);
// gboolean gst_device_reconfigure_element (::GstDevice* device, ::GstElement* element);
GI_INLINE_DECL bool reconfigure_element (Gst::Element element) noexcept;

gi::property_proxy<Gst::Caps, base::DeviceBase> property_caps()
{ return gi::property_proxy<Gst::Caps, base::DeviceBase> (*this, "caps"); }
const gi::property_proxy<Gst::Caps, base::DeviceBase> property_caps() const
{ return gi::property_proxy<Gst::Caps, base::DeviceBase> (*this, "caps"); }

gi::property_proxy<std::string, base::DeviceBase> property_device_class()
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "device-class"); }
const gi::property_proxy<std::string, base::DeviceBase> property_device_class() const
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "device-class"); }

gi::property_proxy<std::string, base::DeviceBase> property_display_name()
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "display-name"); }
const gi::property_proxy<std::string, base::DeviceBase> property_display_name() const
{ return gi::property_proxy<std::string, base::DeviceBase> (*this, "display-name"); }

gi::property_proxy<Gst::Structure, base::DeviceBase> property_properties()
{ return gi::property_proxy<Gst::Structure, base::DeviceBase> (*this, "properties"); }
const gi::property_proxy<Gst::Structure, base::DeviceBase> property_properties() const
{ return gi::property_proxy<Gst::Structure, base::DeviceBase> (*this, "properties"); }

// signal removed
gi::signal_proxy<void(Gst::Device)> signal_removed()
{ return gi::signal_proxy<void(Gst::Device)> (*this, "removed"); }

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/device_extra_def.hpp>)
#include <gst/device_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/device_extra.hpp>)
#include <gst/device_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Device : public GI_GST_DEVICE_BASE
{ typedef GI_GST_DEVICE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDevice>
{ typedef Gst::Device type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class DeviceClassDef
{
typedef DeviceClassDef self;
public:
typedef Gst::Device instance_type;
typedef ::GstDeviceClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GstElement* Device::create_element (GstDevice* device, const gchar* name);
// ::GstElement* Device::create_element (::GstDevice* device, const char* name);
virtual Gst::Element create_element_ (const std::string & name) noexcept = 0;

// gboolean Device::reconfigure_element (GstDevice* device, GstElement* element);
// gboolean Device::reconfigure_element (::GstDevice* device, ::GstElement* element);
virtual bool reconfigure_element_ (Gst::Element element) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DeviceClass: public detail::ClassTemplate<Gst::impl::internal::DeviceClassDef, Gst::impl::internal::ObjectClass>
{
typedef DeviceClass self;
typedef detail::ClassTemplate<Gst::impl::internal::DeviceClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GstElement* Device::create_element (GstDevice* device, const gchar* name);
// ::GstElement* Device::create_element (::GstDevice* device, const char* name);
GI_INLINE_DECL Gst::Element create_element_ (const std::string & name) noexcept override;

// gboolean Device::reconfigure_element (GstDevice* device, GstElement* element);
// gboolean Device::reconfigure_element (::GstDevice* device, ::GstElement* element);
GI_INLINE_DECL bool reconfigure_element_ (Gst::Element element) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DeviceImpl = detail::ObjectImpl<Device, internal::DeviceClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
