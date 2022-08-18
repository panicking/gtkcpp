// AUTO-GENERATED

#ifndef _GI_GST_DEVICE_IMPL_HPP_
#define _GI_GST_DEVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstElement* gst_device_create_element (GstDevice* device, const gchar* name);
// ::GstElement* gst_device_create_element (::GstDevice* device, const char* name);
Gst::Element base::DeviceBase::create_element (const std::string & name) noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstDevice* device, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_create_element;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gst::Element base::DeviceBase::create_element () noexcept
{
  typedef ::GstElement* (*call_wrap_t) (::GstDevice* device, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_create_element;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstCaps* gst_device_get_caps (GstDevice* device);
// ::GstCaps* gst_device_get_caps (::GstDevice* device);
Gst::Caps base::DeviceBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_get_caps;
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_device_get_device_class (GstDevice* device);
// char* gst_device_get_device_class (::GstDevice* device);
std::string base::DeviceBase::get_device_class () noexcept
{
  typedef char* (*call_wrap_t) (::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_get_device_class;
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gst_device_get_display_name (GstDevice* device);
// char* gst_device_get_display_name (::GstDevice* device);
std::string base::DeviceBase::get_display_name () noexcept
{
  typedef char* (*call_wrap_t) (::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_get_display_name;
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstStructure* gst_device_get_properties (GstDevice* device);
// ::GstStructure* gst_device_get_properties (::GstDevice* device);
Gst::Structure base::DeviceBase::get_properties () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_get_properties;
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gst_device_has_classes (GstDevice* device, const gchar* classes);
// gboolean gst_device_has_classes (::GstDevice* device, const char* classes);
bool base::DeviceBase::has_classes (const std::string & classes) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDevice* device, const char* classes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_has_classes;
  auto classes_to_c = gi::unwrap (classes, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (const char*) (classes_to_c));
  return _temp_ret;
}

// gboolean gst_device_has_classesv (GstDevice* device, gchar** classes);
// gboolean gst_device_has_classesv (::GstDevice* device, char** classes);
bool base::DeviceBase::has_classesv (const std::vector<std::string> & classes) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDevice* device, char** classes);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_has_classesv;
  auto classes_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (classes);
  auto classes_w = unwrap (classes_i, gi::transfer_none, direction_in);
  auto classes_to_c = classes_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (char**) (classes_to_c));
  return _temp_ret;
}

// gboolean gst_device_reconfigure_element (GstDevice* device, GstElement* element);
// gboolean gst_device_reconfigure_element (::GstDevice* device, ::GstElement* element);
bool base::DeviceBase::reconfigure_element (Gst::Element element) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstDevice* device, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_device_reconfigure_element;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}



} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/device_extra_def_impl.hpp>)
#include <gst/device_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/device_extra_impl.hpp>)
#include <gst/device_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void DeviceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstDeviceClass *methods = (::GstDeviceClass *) class_struct;
  (void) methods;

  methods->create_element = (decltype (methods->create_element)) detail::method_wrapper<self, Gst::Element (*) (const std::string & name), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::create_element_>;
  methods->reconfigure_element = (decltype (methods->reconfigure_element)) detail::method_wrapper<self, bool (*) (Gst::Element element), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::reconfigure_element_>;
}

// GstElement* Device::create_element (GstDevice* device, const gchar* name);
// ::GstElement* Device::create_element (::GstDevice* device, const char* name);
Gst::Element DeviceClass::create_element_ (const std::string & name) noexcept
{
  if (!get_struct_()->create_element) return Gst::Element{};
  typedef ::GstElement* (*call_wrap_t) (::GstDevice* device, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_element;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean Device::reconfigure_element (GstDevice* device, GstElement* element);
// gboolean Device::reconfigure_element (::GstDevice* device, ::GstElement* element);
bool DeviceClass::reconfigure_element_ (Gst::Element element) noexcept
{
  if (!get_struct_()->reconfigure_element) return bool{};
  typedef gboolean (*call_wrap_t) (::GstDevice* device, ::GstElement* element);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reconfigure_element;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstDevice*) (gobj_()), (::GstElement*) (element_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
