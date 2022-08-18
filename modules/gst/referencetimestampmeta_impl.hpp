// AUTO-GENERATED

#ifndef _GI_GST_REFERENCETIMESTAMPMETA_IMPL_HPP_
#define _GI_GST_REFERENCETIMESTAMPMETA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstCaps* _field_reference_get (const ::GstReferenceTimestampMeta* obj) { return (::GstCaps*) obj->reference; }
// ::GstCaps* ReferenceTimestampMeta::reference (const ::GstReferenceTimestampMeta* obj);
// ::GstCaps* ReferenceTimestampMeta::reference (const ::GstReferenceTimestampMeta* obj);
Gst::Caps base::ReferenceTimestampMetaBase::reference_ () const noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (const ::GstReferenceTimestampMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_reference_get;
  auto _temp_ret = call_wrap_v ((const ::GstReferenceTimestampMeta*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstClockTime _field_timestamp_get (const ::GstReferenceTimestampMeta* obj) { return (::GstClockTime) obj->timestamp; }
// ::GstClockTime ReferenceTimestampMeta::timestamp (const ::GstReferenceTimestampMeta* obj);
// ::GstClockTime ReferenceTimestampMeta::timestamp (const ::GstReferenceTimestampMeta* obj);
Gst::ClockTime base::ReferenceTimestampMetaBase::timestamp_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstReferenceTimestampMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_get;
  auto _temp_ret = call_wrap_v ((const ::GstReferenceTimestampMeta*) (gobj_()));
  return _temp_ret;
}

static void _field_timestamp_set (::GstReferenceTimestampMeta* obj, ::GstClockTime _value) { obj->timestamp = (decltype(obj->timestamp)) _value; }
//  ReferenceTimestampMeta::timestamp (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
// void ReferenceTimestampMeta::timestamp (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
void base::ReferenceTimestampMetaBase::timestamp_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_timestamp_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstReferenceTimestampMeta*) (gobj_()), (::GstClockTime) (_value_to_c));
}

static ::GstClockTime _field_duration_get (const ::GstReferenceTimestampMeta* obj) { return (::GstClockTime) obj->duration; }
// ::GstClockTime ReferenceTimestampMeta::duration (const ::GstReferenceTimestampMeta* obj);
// ::GstClockTime ReferenceTimestampMeta::duration (const ::GstReferenceTimestampMeta* obj);
Gst::ClockTime base::ReferenceTimestampMetaBase::duration_ () const noexcept
{
  typedef ::GstClockTime (*call_wrap_t) (const ::GstReferenceTimestampMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_get;
  auto _temp_ret = call_wrap_v ((const ::GstReferenceTimestampMeta*) (gobj_()));
  return _temp_ret;
}

static void _field_duration_set (::GstReferenceTimestampMeta* obj, ::GstClockTime _value) { obj->duration = (decltype(obj->duration)) _value; }
//  ReferenceTimestampMeta::duration (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
// void ReferenceTimestampMeta::duration (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
void base::ReferenceTimestampMetaBase::duration_ (::GstClockTime _value) noexcept
{
  typedef void (*call_wrap_t) (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_duration_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstReferenceTimestampMeta*) (gobj_()), (::GstClockTime) (_value_to_c));
}

// const GstMetaInfo* gst_reference_timestamp_meta_get_info ();
// const ::GstMetaInfo* gst_reference_timestamp_meta_get_info ();
Gst::MetaInfo base::ReferenceTimestampMetaBase::get_info () noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_reference_timestamp_meta_get_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/referencetimestampmeta_extra_def_impl.hpp>)
#include <gst/referencetimestampmeta_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/referencetimestampmeta_extra_impl.hpp>)
#include <gst/referencetimestampmeta_extra_impl.hpp>
#endif
#endif

#endif
