// AUTO-GENERATED

#ifndef _GI_GST_DEVICEPROVIDER_IMPL_HPP_
#define _GI_GST_DEVICEPROVIDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// gboolean gst_device_provider_register (GstPlugin* plugin, const gchar* name, guint rank, GType type);
// gboolean gst_device_provider_register (::GstPlugin* plugin, const char* name, guint rank, GType type);
bool base::DeviceProviderBase::register_ (Gst::Plugin plugin, const std::string & name, guint rank, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_register;
  auto type_to_c = type;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = gi::unwrap (plugin, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (GType) (type_to_c));
  return _temp_ret;
}
bool base::DeviceProviderBase::register_ (const std::string & name, guint rank, GType type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstPlugin* plugin, const char* name, guint rank, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_register;
  auto type_to_c = type;
  auto rank_to_c = rank;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto plugin_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstPlugin*) (plugin_to_c), (const char*) (name_to_c), (guint) (rank_to_c), (GType) (type_to_c));
  return _temp_ret;
}

// gboolean gst_device_provider_can_monitor (GstDeviceProvider* provider);
// gboolean gst_device_provider_can_monitor (::GstDeviceProvider* provider);
bool base::DeviceProviderBase::can_monitor () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_can_monitor;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return _temp_ret;
}

// void gst_device_provider_device_add (GstDeviceProvider* provider, GstDevice* device);
// void gst_device_provider_device_add (::GstDeviceProvider* provider, ::GstDevice* device);
void base::DeviceProviderBase::device_add (Gst::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider, ::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_device_add;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDeviceProvider*) (gobj_()), (::GstDevice*) (device_to_c));
}

// void gst_device_provider_device_changed (GstDeviceProvider* provider, GstDevice* device, GstDevice* changed_device);
// void gst_device_provider_device_changed (::GstDeviceProvider* provider, ::GstDevice* device, ::GstDevice* changed_device);
void base::DeviceProviderBase::device_changed (Gst::Device device, Gst::Device changed_device) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider, ::GstDevice* device, ::GstDevice* changed_device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_device_changed;
  auto changed_device_to_c = gi::unwrap (changed_device, gi::transfer_none, gi::direction_in);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDeviceProvider*) (gobj_()), (::GstDevice*) (device_to_c), (::GstDevice*) (changed_device_to_c));
}

// void gst_device_provider_device_remove (GstDeviceProvider* provider, GstDevice* device);
// void gst_device_provider_device_remove (::GstDeviceProvider* provider, ::GstDevice* device);
void base::DeviceProviderBase::device_remove (Gst::Device device) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider, ::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_device_remove;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDeviceProvider*) (gobj_()), (::GstDevice*) (device_to_c));
}

// GstBus* gst_device_provider_get_bus (GstDeviceProvider* provider);
// ::GstBus* gst_device_provider_get_bus (::GstDeviceProvider* provider);
Gst::Bus base::DeviceProviderBase::get_bus () noexcept
{
  typedef ::GstBus* (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_get_bus;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GList* gst_device_provider_get_devices (GstDeviceProvider* provider);
// ::GList* gst_device_provider_get_devices (::GstDeviceProvider* provider);
std::vector<Gst::Device> base::DeviceProviderBase::get_devices () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_get_devices;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return gi::detail::wrap_list<Gst::Device> (_temp_ret, gi::transfer_full);
}

// GstDeviceProviderFactory* gst_device_provider_get_factory (GstDeviceProvider* provider);
// ::GstDeviceProviderFactory* gst_device_provider_get_factory (::GstDeviceProvider* provider);
Gst::DeviceProviderFactory base::DeviceProviderBase::get_factory () noexcept
{
  typedef ::GstDeviceProviderFactory* (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_get_factory;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar** gst_device_provider_get_hidden_providers (GstDeviceProvider* provider);
// char** gst_device_provider_get_hidden_providers (::GstDeviceProvider* provider);
std::vector<std::string> base::DeviceProviderBase::get_hidden_providers () noexcept
{
  typedef char** (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_get_hidden_providers;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// const gchar* gst_device_provider_get_metadata (GstDeviceProvider* provider, const gchar* key);
// const char* gst_device_provider_get_metadata (::GstDeviceProvider* provider, const char* key);
std::string base::DeviceProviderBase::get_metadata (const std::string & key) noexcept
{
  typedef const char* (*call_wrap_t) (::GstDeviceProvider* provider, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_get_metadata;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_device_provider_hide_provider (GstDeviceProvider* provider, const gchar* name);
// void gst_device_provider_hide_provider (::GstDeviceProvider* provider, const char* name);
void base::DeviceProviderBase::hide_provider (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_hide_provider;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDeviceProvider*) (gobj_()), (const char*) (name_to_c));
}

// gboolean gst_device_provider_is_started (GstDeviceProvider* provider);
// gboolean gst_device_provider_is_started (::GstDeviceProvider* provider);
bool base::DeviceProviderBase::is_started () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_is_started;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return _temp_ret;
}

// gboolean gst_device_provider_start (GstDeviceProvider* provider);
// gboolean gst_device_provider_start (::GstDeviceProvider* provider);
bool base::DeviceProviderBase::start () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_start;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return _temp_ret;
}

// void gst_device_provider_stop (GstDeviceProvider* provider);
// void gst_device_provider_stop (::GstDeviceProvider* provider);
void base::DeviceProviderBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_stop;
  call_wrap_v ((::GstDeviceProvider*) (gobj_()));
}

// void gst_device_provider_unhide_provider (GstDeviceProvider* provider, const gchar* name);
// void gst_device_provider_unhide_provider (::GstDeviceProvider* provider, const char* name);
void base::DeviceProviderBase::unhide_provider (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_provider_unhide_provider;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstDeviceProvider*) (gobj_()), (const char*) (name_to_c));
}




} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/deviceprovider_extra_def_impl.hpp>)
#include <gst/deviceprovider_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/deviceprovider_extra_impl.hpp>)
#include <gst/deviceprovider_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void DeviceProviderClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstDeviceProviderClass *methods = (::GstDeviceProviderClass *) class_struct;
  (void) methods;

  methods->start = (decltype (methods->start)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::start_>;
  methods->stop = (decltype (methods->stop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::stop_>;
}

// gboolean DeviceProvider::start (GstDeviceProvider* provider);
// gboolean DeviceProvider::start (::GstDeviceProvider* provider);
bool DeviceProviderClass::start_ () noexcept
{
  if (!get_struct_()->start) return bool{};
  typedef gboolean (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start;
  auto _temp_ret = call_wrap_v ((::GstDeviceProvider*) (gobj_()));
  return _temp_ret;
}

// void DeviceProvider::stop (GstDeviceProvider* provider);
// void DeviceProvider::stop (::GstDeviceProvider* provider);
void DeviceProviderClass::stop_ () noexcept
{
  if (!get_struct_()->stop) return ;
  typedef void (*call_wrap_t) (::GstDeviceProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop;
  call_wrap_v ((::GstDeviceProvider*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
