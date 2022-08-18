// AUTO-GENERATED

#ifndef _GI_GST_STATICPADTEMPLATE_IMPL_HPP_
#define _GI_GST_STATICPADTEMPLATE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static const char* _field_name_template_get (const ::GstStaticPadTemplate* obj) { return (const char*) obj->name_template; }
// const char* StaticPadTemplate::name_template (const ::GstStaticPadTemplate* obj);
// const char* StaticPadTemplate::name_template (const ::GstStaticPadTemplate* obj);
std::string base::StaticPadTemplateBase::name_template_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStaticPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_template_get;
  auto _temp_ret = call_wrap_v ((const ::GstStaticPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstPadDirection _field_direction_get (const ::GstStaticPadTemplate* obj) { return (::GstPadDirection) obj->direction; }
// ::GstPadDirection StaticPadTemplate::direction (const ::GstStaticPadTemplate* obj);
// ::GstPadDirection StaticPadTemplate::direction (const ::GstStaticPadTemplate* obj);
Gst::PadDirection base::StaticPadTemplateBase::direction_ () const noexcept
{
  typedef ::GstPadDirection (*call_wrap_t) (const ::GstStaticPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_get;
  auto _temp_ret = call_wrap_v ((const ::GstStaticPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_direction_set (::GstStaticPadTemplate* obj, ::GstPadDirection _value) { obj->direction = (decltype(obj->direction)) _value; }
//  StaticPadTemplate::direction (::GstStaticPadTemplate* obj, ::GstPadDirection _value);
// void StaticPadTemplate::direction (::GstStaticPadTemplate* obj, ::GstPadDirection _value);
void base::StaticPadTemplateBase::direction_ (Gst::PadDirection _value) noexcept
{
  typedef void (*call_wrap_t) (::GstStaticPadTemplate* obj, ::GstPadDirection _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_direction_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstStaticPadTemplate*) (gobj_()), (::GstPadDirection) (_value_to_c));
}

static ::GstPadPresence _field_presence_get (const ::GstStaticPadTemplate* obj) { return (::GstPadPresence) obj->presence; }
// ::GstPadPresence StaticPadTemplate::presence (const ::GstStaticPadTemplate* obj);
// ::GstPadPresence StaticPadTemplate::presence (const ::GstStaticPadTemplate* obj);
Gst::PadPresence base::StaticPadTemplateBase::presence_ () const noexcept
{
  typedef ::GstPadPresence (*call_wrap_t) (const ::GstStaticPadTemplate* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_presence_get;
  auto _temp_ret = call_wrap_v ((const ::GstStaticPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_presence_set (::GstStaticPadTemplate* obj, ::GstPadPresence _value) { obj->presence = (decltype(obj->presence)) _value; }
//  StaticPadTemplate::presence (::GstStaticPadTemplate* obj, ::GstPadPresence _value);
// void StaticPadTemplate::presence (::GstStaticPadTemplate* obj, ::GstPadPresence _value);
void base::StaticPadTemplateBase::presence_ (Gst::PadPresence _value) noexcept
{
  typedef void (*call_wrap_t) (::GstStaticPadTemplate* obj, ::GstPadPresence _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_presence_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GstStaticPadTemplate*) (gobj_()), (::GstPadPresence) (_value_to_c));
}

// GstPadTemplate* gst_static_pad_template_get (GstStaticPadTemplate* pad_template);
// ::GstPadTemplate* gst_static_pad_template_get (::GstStaticPadTemplate* pad_template);
Gst::PadTemplate base::StaticPadTemplateBase::get () noexcept
{
  typedef ::GstPadTemplate* (*call_wrap_t) (::GstStaticPadTemplate* pad_template);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_pad_template_get;
  auto _temp_ret = call_wrap_v ((::GstStaticPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstCaps* gst_static_pad_template_get_caps (GstStaticPadTemplate* templ);
// ::GstCaps* gst_static_pad_template_get_caps (::GstStaticPadTemplate* templ);
Gst::Caps base::StaticPadTemplateBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstStaticPadTemplate* templ);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_pad_template_get_caps;
  auto _temp_ret = call_wrap_v ((::GstStaticPadTemplate*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/staticpadtemplate_extra_def_impl.hpp>)
#include <gst/staticpadtemplate_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/staticpadtemplate_extra_impl.hpp>)
#include <gst/staticpadtemplate_extra_impl.hpp>
#endif
#endif

#endif
