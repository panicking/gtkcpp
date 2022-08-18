// AUTO-GENERATED

#ifndef _GI_GST_PLUGINDESC_IMPL_HPP_
#define _GI_GST_PLUGINDESC_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static gint _field_major_version_get (const ::GstPluginDesc* obj) { return (gint) obj->major_version; }
// gint PluginDesc::major_version (const ::GstPluginDesc* obj);
// gint PluginDesc::major_version (const ::GstPluginDesc* obj);
gint base::PluginDescBase::major_version_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_major_version_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return _temp_ret;
}

static void _field_major_version_set (::GstPluginDesc* obj, gint _value) { obj->major_version = (decltype(obj->major_version)) _value; }
//  PluginDesc::major_version (::GstPluginDesc* obj, gint _value);
// void PluginDesc::major_version (::GstPluginDesc* obj, gint _value);
void base::PluginDescBase::major_version_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPluginDesc* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_major_version_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPluginDesc*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_minor_version_get (const ::GstPluginDesc* obj) { return (gint) obj->minor_version; }
// gint PluginDesc::minor_version (const ::GstPluginDesc* obj);
// gint PluginDesc::minor_version (const ::GstPluginDesc* obj);
gint base::PluginDescBase::minor_version_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minor_version_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return _temp_ret;
}

static void _field_minor_version_set (::GstPluginDesc* obj, gint _value) { obj->minor_version = (decltype(obj->minor_version)) _value; }
//  PluginDesc::minor_version (::GstPluginDesc* obj, gint _value);
// void PluginDesc::minor_version (::GstPluginDesc* obj, gint _value);
void base::PluginDescBase::minor_version_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstPluginDesc* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_minor_version_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstPluginDesc*) (gobj_()), (gint) (_value_to_c));
}

static const char* _field_name_get (const ::GstPluginDesc* obj) { return (const char*) obj->name; }
// const char* PluginDesc::name (const ::GstPluginDesc* obj);
// const char* PluginDesc::name (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_description_get (const ::GstPluginDesc* obj) { return (const char*) obj->description; }
// const char* PluginDesc::description (const ::GstPluginDesc* obj);
// const char* PluginDesc::description (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::description_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_version_get (const ::GstPluginDesc* obj) { return (const char*) obj->version; }
// const char* PluginDesc::version (const ::GstPluginDesc* obj);
// const char* PluginDesc::version (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::version_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_version_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_license_get (const ::GstPluginDesc* obj) { return (const char*) obj->license; }
// const char* PluginDesc::license (const ::GstPluginDesc* obj);
// const char* PluginDesc::license (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::license_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_license_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_source_get (const ::GstPluginDesc* obj) { return (const char*) obj->source; }
// const char* PluginDesc::source (const ::GstPluginDesc* obj);
// const char* PluginDesc::source (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::source_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_source_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_package_get (const ::GstPluginDesc* obj) { return (const char*) obj->package; }
// const char* PluginDesc::package (const ::GstPluginDesc* obj);
// const char* PluginDesc::package (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::package_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_package_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_origin_get (const ::GstPluginDesc* obj) { return (const char*) obj->origin; }
// const char* PluginDesc::origin (const ::GstPluginDesc* obj);
// const char* PluginDesc::origin (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::origin_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_origin_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_release_datetime_get (const ::GstPluginDesc* obj) { return (const char*) obj->release_datetime; }
// const char* PluginDesc::release_datetime (const ::GstPluginDesc* obj);
// const char* PluginDesc::release_datetime (const ::GstPluginDesc* obj);
std::string base::PluginDescBase::release_datetime_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstPluginDesc* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_release_datetime_get;
  auto _temp_ret = call_wrap_v ((const ::GstPluginDesc*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/plugindesc_extra_def_impl.hpp>)
#include <gst/plugindesc_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/plugindesc_extra_impl.hpp>)
#include <gst/plugindesc_extra_impl.hpp>
#endif
#endif

#endif
