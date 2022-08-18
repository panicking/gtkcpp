// AUTO-GENERATED

#ifndef _GI_GST_FORMATDEFINITION_IMPL_HPP_
#define _GI_GST_FORMATDEFINITION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstFormat _field_value_get (const ::GstFormatDefinition* obj) { return (::GstFormat) obj->value; }
// ::GstFormat FormatDefinition::value (const ::GstFormatDefinition* obj);
// ::GstFormat FormatDefinition::value (const ::GstFormatDefinition* obj);
Gst::Format base::FormatDefinitionBase::value_ () const noexcept
{
  typedef ::GstFormat (*call_wrap_t) (const ::GstFormatDefinition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::GstFormatDefinition*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_value_set (::GstFormatDefinition* obj, ::GstFormat _value) { obj->value = (decltype(obj->value)) _value; }
//  FormatDefinition::value (::GstFormatDefinition* obj, ::GstFormat _value);
// void FormatDefinition::value (::GstFormatDefinition* obj, ::GstFormat _value);
void base::FormatDefinitionBase::value_ (Gst::Format _value) noexcept
{
  typedef void (*call_wrap_t) (::GstFormatDefinition* obj, ::GstFormat _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstFormatDefinition*) (gobj_()), (::GstFormat) (_value_to_c));
}

static const char* _field_nick_get (const ::GstFormatDefinition* obj) { return (const char*) obj->nick; }
// const char* FormatDefinition::nick (const ::GstFormatDefinition* obj);
// const char* FormatDefinition::nick (const ::GstFormatDefinition* obj);
std::string base::FormatDefinitionBase::nick_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstFormatDefinition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_nick_get;
  auto _temp_ret = call_wrap_v ((const ::GstFormatDefinition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_description_get (const ::GstFormatDefinition* obj) { return (const char*) obj->description; }
// const char* FormatDefinition::description (const ::GstFormatDefinition* obj);
// const char* FormatDefinition::description (const ::GstFormatDefinition* obj);
std::string base::FormatDefinitionBase::description_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstFormatDefinition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_description_get;
  auto _temp_ret = call_wrap_v ((const ::GstFormatDefinition*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GQuark _field_quark_get (const ::GstFormatDefinition* obj) { return (::GQuark) obj->quark; }
// ::GQuark FormatDefinition::quark (const ::GstFormatDefinition* obj);
// ::GQuark FormatDefinition::quark (const ::GstFormatDefinition* obj);
GLib::Quark base::FormatDefinitionBase::quark_ () const noexcept
{
  typedef ::GQuark (*call_wrap_t) (const ::GstFormatDefinition* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_quark_get;
  auto _temp_ret = call_wrap_v ((const ::GstFormatDefinition*) (gobj_()));
  return _temp_ret;
}

static void _field_quark_set (::GstFormatDefinition* obj, ::GQuark _value) { obj->quark = (decltype(obj->quark)) _value; }
//  FormatDefinition::quark (::GstFormatDefinition* obj, ::GQuark _value);
// void FormatDefinition::quark (::GstFormatDefinition* obj, ::GQuark _value);
void base::FormatDefinitionBase::quark_ (::GQuark _value) noexcept
{
  typedef void (*call_wrap_t) (::GstFormatDefinition* obj, ::GQuark _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_quark_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstFormatDefinition*) (gobj_()), (::GQuark) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/formatdefinition_extra_def_impl.hpp>)
#include <gst/formatdefinition_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/formatdefinition_extra_impl.hpp>)
#include <gst/formatdefinition_extra_impl.hpp>
#endif
#endif

#endif
