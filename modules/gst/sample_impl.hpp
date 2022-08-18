// AUTO-GENERATED

#ifndef _GI_GST_SAMPLE_IMPL_HPP_
#define _GI_GST_SAMPLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstSample* gst_sample_new (GstBuffer* buffer, GstCaps* caps, const GstSegment* segment, GstStructure* info);
// ::GstSample* gst_sample_new (::GstBuffer* buffer, ::GstCaps* caps, const ::GstSegment* segment, ::GstStructure* info);
Gst::Sample base::SampleBase::new_ (Gst::Buffer buffer, Gst::Caps caps, const Gst::Segment & segment, Gst::Structure info) noexcept
{
  typedef ::GstSample* (*call_wrap_t) (::GstBuffer* buffer, ::GstCaps* caps, const ::GstSegment* segment, ::GstStructure* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_new;
  auto info_to_c = gi::unwrap (info, gi::transfer_full, gi::direction_in);
  auto segment_to_c = gi::unwrap (segment, gi::transfer_none, gi::direction_in);
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (buffer_to_c), (::GstCaps*) (caps_to_c), (const ::GstSegment*) (segment_to_c), (::GstStructure*) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Sample base::SampleBase::new_ () noexcept
{
  typedef ::GstSample* (*call_wrap_t) (::GstBuffer* buffer, ::GstCaps* caps, const ::GstSegment* segment, ::GstStructure* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_new;
  auto info_to_c = nullptr;
  auto segment_to_c = nullptr;
  auto caps_to_c = nullptr;
  auto buffer_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GstBuffer*) (buffer_to_c), (::GstCaps*) (caps_to_c), (const ::GstSegment*) (segment_to_c), (::GstStructure*) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstBuffer* gst_sample_get_buffer (GstSample* sample);
// ::GstBuffer* gst_sample_get_buffer (::GstSample* sample);
Gst::Buffer base::SampleBase::get_buffer () noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (::GstSample* sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_get_buffer;
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstBufferList* gst_sample_get_buffer_list (GstSample* sample);
// ::GstBufferList* gst_sample_get_buffer_list (::GstSample* sample);
Gst::BufferList base::SampleBase::get_buffer_list () noexcept
{
  typedef ::GstBufferList* (*call_wrap_t) (::GstSample* sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_get_buffer_list;
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstCaps* gst_sample_get_caps (GstSample* sample);
// ::GstCaps* gst_sample_get_caps (::GstSample* sample);
Gst::Caps base::SampleBase::get_caps () noexcept
{
  typedef ::GstCaps* (*call_wrap_t) (::GstSample* sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_get_caps;
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstStructure* gst_sample_get_info (GstSample* sample);
// const ::GstStructure* gst_sample_get_info (::GstSample* sample);
Gst::Structure base::SampleBase::get_info () noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (::GstSample* sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_get_info;
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GstSegment* gst_sample_get_segment (GstSample* sample);
// ::GstSegment* gst_sample_get_segment (::GstSample* sample);
Gst::Segment base::SampleBase::get_segment () noexcept
{
  typedef ::GstSegment* (*call_wrap_t) (::GstSample* sample);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_get_segment;
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gst_sample_set_buffer (GstSample* sample, GstBuffer* buffer);
// void gst_sample_set_buffer (::GstSample* sample, ::GstBuffer* buffer);
void base::SampleBase::set_buffer (Gst::Buffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GstSample* sample, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_set_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstSample*) (gobj_()), (::GstBuffer*) (buffer_to_c));
}

// void gst_sample_set_buffer_list (GstSample* sample, GstBufferList* buffer_list);
// void gst_sample_set_buffer_list (::GstSample* sample, ::GstBufferList* buffer_list);
void base::SampleBase::set_buffer_list (Gst::BufferList buffer_list) noexcept
{
  typedef void (*call_wrap_t) (::GstSample* sample, ::GstBufferList* buffer_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_set_buffer_list;
  auto buffer_list_to_c = gi::unwrap (buffer_list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstSample*) (gobj_()), (::GstBufferList*) (buffer_list_to_c));
}

// void gst_sample_set_caps (GstSample* sample, GstCaps* caps);
// void gst_sample_set_caps (::GstSample* sample, ::GstCaps* caps);
void base::SampleBase::set_caps (Gst::Caps caps) noexcept
{
  typedef void (*call_wrap_t) (::GstSample* sample, ::GstCaps* caps);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_set_caps;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstSample*) (gobj_()), (::GstCaps*) (caps_to_c));
}

// gboolean gst_sample_set_info (GstSample* sample, GstStructure* info);
// gboolean gst_sample_set_info (::GstSample* sample, ::GstStructure* info);
bool base::SampleBase::set_info (Gst::Structure info) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstSample* sample, ::GstStructure* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_set_info;
  auto info_to_c = gi::unwrap (info, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstSample*) (gobj_()), (::GstStructure*) (info_to_c));
  return _temp_ret;
}

// void gst_sample_set_segment (GstSample* sample, const GstSegment* segment);
// void gst_sample_set_segment (::GstSample* sample, const ::GstSegment* segment);
void base::SampleBase::set_segment (const Gst::Segment & segment) noexcept
{
  typedef void (*call_wrap_t) (::GstSample* sample, const ::GstSegment* segment);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_sample_set_segment;
  auto segment_to_c = gi::unwrap (segment, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstSample*) (gobj_()), (const ::GstSegment*) (segment_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/sample_extra_def_impl.hpp>)
#include <gst/sample_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/sample_extra_impl.hpp>)
#include <gst/sample_extra_impl.hpp>
#endif
#endif

#endif
