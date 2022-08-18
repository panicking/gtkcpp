// AUTO-GENERATED

#ifndef _GI_GST_DEVICEPROVIDERFACTORY_HPP_
#define _GI_GST_DEVICEPROVIDERFACTORY_HPP_

#include "pluginfeature.hpp"

namespace gi {

namespace repository {

namespace Gst {

class DeviceProvider;

class DeviceProviderFactory;

namespace base {


#define GI_GST_DEVICEPROVIDERFACTORY_BASE base::DeviceProviderFactoryBase
class DeviceProviderFactoryBase : public Gst::PluginFeature
{
typedef Gst::PluginFeature super_type;
public:
typedef ::GstDeviceProviderFactory BaseObjectType;

DeviceProviderFactoryBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_device_provider_factory_get_type(); } 

// GstDeviceProviderFactory* gst_device_provider_factory_find (const gchar* name);
// ::GstDeviceProviderFactory* gst_device_provider_factory_find (const char* name);
static GI_INLINE_DECL Gst::DeviceProviderFactory find (const std::string & name) noexcept;

// GstDeviceProvider* gst_device_provider_factory_get_by_name (const gchar* factoryname);
// ::GstDeviceProvider* gst_device_provider_factory_get_by_name (const char* factoryname);
static GI_INLINE_DECL Gst::DeviceProvider get_by_name (const std::string & factoryname) noexcept;

// GList* gst_device_provider_factory_list_get_device_providers (GstRank minrank);
// ::GList* gst_device_provider_factory_list_get_device_providers (::GstRank minrank);
static GI_INLINE_DECL std::vector<Gst::DeviceProviderFactory> list_get_device_providers (Gst::Rank minrank) noexcept;

// GstDeviceProvider* gst_device_provider_factory_get (GstDeviceProviderFactory* factory);
// ::GstDeviceProvider* gst_device_provider_factory_get (::GstDeviceProviderFactory* factory);
GI_INLINE_DECL Gst::DeviceProvider get () noexcept;

// GType gst_device_provider_factory_get_device_provider_type (GstDeviceProviderFactory* factory);
// GType gst_device_provider_factory_get_device_provider_type (::GstDeviceProviderFactory* factory);
GI_INLINE_DECL GType get_device_provider_type () noexcept;

// const gchar* gst_device_provider_factory_get_metadata (GstDeviceProviderFactory* factory, const gchar* key);
// const char* gst_device_provider_factory_get_metadata (::GstDeviceProviderFactory* factory, const char* key);
GI_INLINE_DECL std::string get_metadata (const std::string & key) noexcept;

// gchar** gst_device_provider_factory_get_metadata_keys (GstDeviceProviderFactory* factory);
// char** gst_device_provider_factory_get_metadata_keys (::GstDeviceProviderFactory* factory);
GI_INLINE_DECL std::vector<std::string> get_metadata_keys () noexcept;

// gboolean gst_device_provider_factory_has_classes (GstDeviceProviderFactory* factory, const gchar* classes);
// gboolean gst_device_provider_factory_has_classes (::GstDeviceProviderFactory* factory, const char* classes);
GI_INLINE_DECL bool has_classes (const std::string & classes) noexcept;
GI_INLINE_DECL bool has_classes () noexcept;

// gboolean gst_device_provider_factory_has_classesv (GstDeviceProviderFactory* factory, gchar** classes);
// gboolean gst_device_provider_factory_has_classesv (::GstDeviceProviderFactory* factory, char** classes);
GI_INLINE_DECL bool has_classesv (const std::vector<std::string> & classes) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/deviceproviderfactory_extra_def.hpp>)
#include <gst/deviceproviderfactory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/deviceproviderfactory_extra.hpp>)
#include <gst/deviceproviderfactory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class DeviceProviderFactory : public GI_GST_DEVICEPROVIDERFACTORY_BASE
{ typedef GI_GST_DEVICEPROVIDERFACTORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstDeviceProviderFactory>
{ typedef Gst::DeviceProviderFactory type; }; 

} // namespace repository

} // namespace gi

#endif
