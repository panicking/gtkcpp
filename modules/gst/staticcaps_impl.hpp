// AUTO-GENERATED

#ifndef _GI_GST_STATICCAPS_IMPL_HPP_
#define _GI_GST_STATICCAPS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstCaps* _field_caps_get (const ::GstStaticCaps* obj) { return (::GstCaps*) obj->caps; }
// ::GstCaps* StaticCaps::caps (const ::GstStaticCaps* obj);
// ::GstCaps* StaticCaps::caps (const ::GstStaticCaps* obj);
Gst::Caps base::StaticCapsBase::caps_ () const noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const ::GstStaticCaps* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_caps_get;
  auto _temp_ret = call_wrap_v ((const ::GstStaticCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static const char* _field_string_get (const ::GstStaticCaps* obj) { return (const char*) obj->string; }
// const char* StaticCaps::string (const ::GstStaticCaps* obj);
// const char* StaticCaps::string (const ::GstStaticCaps* obj);
std::string base::StaticCapsBase::string_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstStaticCaps* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_string_get;
  auto _temp_ret = call_wrap_v ((const ::GstStaticCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_static_caps_cleanup (GstStaticCaps* static_caps);
// void gst_static_caps_cleanup (::GstStaticCaps* static_caps);
void base::StaticCapsBase::cleanup () noexcept
{
  typedef void (*call_wrap_t) (::GstStaticCaps* static_caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_caps_cleanup;
  call_wrap_v ((::GstStaticCaps*) (gobj_()));
}

// GstCaps* gst_static_caps_get (GstStaticCaps* static_caps);
// ::GstCaps* gst_static_caps_get (::GstStaticCaps* static_caps);
Gst::Caps base::StaticCapsBase::get () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstStaticCaps* static_caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_static_caps_get;
  auto _temp_ret = call_wrap_v ((::GstStaticCaps*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/staticcaps_extra_def_impl.hpp>)
#include <gst/staticcaps_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/staticcaps_extra_impl.hpp>)
#include <gst/staticcaps_extra_impl.hpp>
#endif
#endif

#endif
