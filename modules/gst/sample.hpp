// AUTO-GENERATED

#ifndef _GI_GST_SAMPLE_HPP_
#define _GI_GST_SAMPLE_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class BufferList;
class Caps;
class Segment;
class Structure;

class Sample;

namespace base {


#define GI_GST_SAMPLE_BASE base::SampleBase
class SampleBase : public gi::detail::GBoxedWrapper<SampleBase, ::GstSample>
{
typedef gi::detail::GBoxedWrapper<SampleBase, ::GstSample> super_type;
public:

SampleBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_sample_get_type(); } 

// GstSample* gst_sample_new (GstBuffer* buffer, GstCaps* caps, const GstSegment* segment, GstStructure* info);
// ::GstSample* gst_sample_new (::GstBuffer* buffer, ::GstCaps* caps, const ::GstSegment* segment, ::GstStructure* info);
static GI_INLINE_DECL Gst::Sample new_ (Gst::Buffer buffer, Gst::Caps caps, const Gst::Segment & segment, Gst::Structure info) noexcept;
static GI_INLINE_DECL Gst::Sample new_ () noexcept;

// GstBuffer* gst_sample_get_buffer (GstSample* sample);
// ::GstBuffer* gst_sample_get_buffer (::GstSample* sample);
GI_INLINE_DECL Gst::Buffer get_buffer () noexcept;

// GstBufferList* gst_sample_get_buffer_list (GstSample* sample);
// ::GstBufferList* gst_sample_get_buffer_list (::GstSample* sample);
GI_INLINE_DECL Gst::BufferList get_buffer_list () noexcept;

// GstCaps* gst_sample_get_caps (GstSample* sample);
// ::GstCaps* gst_sample_get_caps (::GstSample* sample);
GI_INLINE_DECL Gst::Caps get_caps () noexcept;

// const GstStructure* gst_sample_get_info (GstSample* sample);
// const ::GstStructure* gst_sample_get_info (::GstSample* sample);
GI_INLINE_DECL Gst::Structure get_info () noexcept;

// GstSegment* gst_sample_get_segment (GstSample* sample);
// ::GstSegment* gst_sample_get_segment (::GstSample* sample);
GI_INLINE_DECL Gst::Segment get_segment () noexcept;

// void gst_sample_set_buffer (GstSample* sample, GstBuffer* buffer);
// void gst_sample_set_buffer (::GstSample* sample, ::GstBuffer* buffer);
GI_INLINE_DECL void set_buffer (Gst::Buffer buffer) noexcept;

// void gst_sample_set_buffer_list (GstSample* sample, GstBufferList* buffer_list);
// void gst_sample_set_buffer_list (::GstSample* sample, ::GstBufferList* buffer_list);
GI_INLINE_DECL void set_buffer_list (Gst::BufferList buffer_list) noexcept;

// void gst_sample_set_caps (GstSample* sample, GstCaps* caps);
// void gst_sample_set_caps (::GstSample* sample, ::GstCaps* caps);
GI_INLINE_DECL void set_caps (Gst::Caps caps) noexcept;

// gboolean gst_sample_set_info (GstSample* sample, GstStructure* info);
// gboolean gst_sample_set_info (::GstSample* sample, ::GstStructure* info);
GI_INLINE_DECL bool set_info (Gst::Structure info) noexcept;

// void gst_sample_set_segment (GstSample* sample, const GstSegment* segment);
// void gst_sample_set_segment (::GstSample* sample, const ::GstSegment* segment);
GI_INLINE_DECL void set_segment (const Gst::Segment & segment) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/sample_extra_def.hpp>)
#include <gst/sample_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/sample_extra.hpp>)
#include <gst/sample_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Sample : public GI_GST_SAMPLE_BASE
{ typedef GI_GST_SAMPLE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstSample>
{ typedef Gst::Sample type; }; 

} // namespace repository

} // namespace gi

#endif
