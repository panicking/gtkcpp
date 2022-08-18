// AUTO-GENERATED

#ifndef _GI_GST_DEVICEPROVIDERFACTORY_IMPL_HPP_
#define _GI_GST_DEVICEPROVIDERFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstDeviceProviderFactory* gst_device_provider_factory_find (const gchar* name);
// ::GstDeviceProviderFactory* gst_device_provider_factory_find (const char* name);
Gst::DeviceProviderFactory base::DeviceProviderFactoryBase::find (const std::string & name) noexcept
{
  typedef ::GstDeviceProviderFactory* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_find;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstDeviceProvider* gst_device_provider_factory_get_by_name (const gchar* factoryname);
// ::GstDeviceProvider* gst_device_provider_factory_get_by_name (const char* factoryname);
Gst::DeviceProvider base::DeviceProviderFactoryBase::get_by_name (const std::string & factoryname) noexcept
{
  typedef ::GstDeviceProvider* (*call_wrap_t) (const char* factoryname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_get_by_name;
  auto factoryname_to_c = gi::unwrap (factoryname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (factoryname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_device_provider_factory_list_get_device_providers (GstRank minrank);
// ::GList* gst_device_provider_factory_list_get_device_providers (::GstRank minrank);
std::vector<Gst::DeviceProviderFactory> base::DeviceProviderFactoryBase::list_get_device_providers (Gst::Rank minrank) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstRank minrank);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_list_get_device_providers;
  auto minrank_to_c = gi::unwrap (minrank);
  auto _temp_ret = call_wrap_v ((::GstRank) (minrank_to_c));
  return gi::detail::wrap_list<Gst::DeviceProviderFactory> (_temp_ret, gi::transfer_full);
}

// GstDeviceProvider* gst_device_provider_factory_get (GstDeviceProviderFactory* factory);
// ::GstDeviceProvider* gst_device_provider_factory_get (::GstDeviceProviderFactory* factory);
Gst::DeviceProvider base::DeviceProviderFactoryBase::get () noexcept
{
  typedef ::GstDeviceProvider* (*call_wrap_t) (::GstDeviceProviderFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_get;
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType gst_device_provider_factory_get_device_provider_type (GstDeviceProviderFactory* factory);
// GType gst_device_provider_factory_get_device_provider_type (::GstDeviceProviderFactory* factory);
GType base::DeviceProviderFactoryBase::get_device_provider_type () noexcept
{
  typedef GType (*call_wrap_t) (::GstDeviceProviderFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_get_device_provider_type;
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()));
  return _temp_ret;
}

// const gchar* gst_device_provider_factory_get_metadata (GstDeviceProviderFactory* factory, const gchar* key);
// const char* gst_device_provider_factory_get_metadata (::GstDeviceProviderFactory* factory, const char* key);
std::string base::DeviceProviderFactoryBase::get_metadata (const std::string & key) noexcept
{
  typedef const char* (*call_wrap_t) (::GstDeviceProviderFactory* factory, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_get_metadata;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar** gst_device_provider_factory_get_metadata_keys (GstDeviceProviderFactory* factory);
// char** gst_device_provider_factory_get_metadata_keys (::GstDeviceProviderFactory* factory);
std::vector<std::string> base::DeviceProviderFactoryBase::get_metadata_keys () noexcept
{
  typedef char** (*call_wrap_t) (::GstDeviceProviderFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_get_metadata_keys;
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean gst_device_provider_factory_has_classes (GstDeviceProviderFactory* factory, const gchar* classes);
// gboolean gst_device_provider_factory_has_classes (::GstDeviceProviderFactory* factory, const char* classes);
bool base::DeviceProviderFactoryBase::has_classes (const std::string & classes) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProviderFactory* factory, const char* classes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_has_classes;
  auto classes_to_c = gi::unwrap (classes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()), (const char*) (classes_to_c));
  return _temp_ret;
}
bool base::DeviceProviderFactoryBase::has_classes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProviderFactory* factory, const char* classes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_has_classes;
  auto classes_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()), (const char*) (classes_to_c));
  return _temp_ret;
}

// gboolean gst_device_provider_factory_has_classesv (GstDeviceProviderFactory* factory, gchar** classes);
// gboolean gst_device_provider_factory_has_classesv (::GstDeviceProviderFactory* factory, char** classes);
bool base::DeviceProviderFactoryBase::has_classesv (const std::vector<std::string> & classes) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProviderFactory* factory, char** classes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_factory_has_classesv;
  auto classes_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (classes);
  auto classes_w = unwrap (classes_i, gi::transfer_none, direction_in);
  auto classes_to_c = classes_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GstDeviceProviderFactory*) (gobj_()), (char**) (classes_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/deviceproviderfactory_extra_def_impl.hpp>)
#include <gst/deviceproviderfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/deviceproviderfactory_extra_impl.hpp>)
#include <gst/deviceproviderfactory_extra_impl.hpp>
#endif
#endif

#endif
