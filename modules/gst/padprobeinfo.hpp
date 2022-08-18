// AUTO-GENERATED

#ifndef _GI_GST_PADPROBEINFO_HPP_
#define _GI_GST_PADPROBEINFO_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class BufferList;
class Event;
class Query;

class PadProbeInfo;

namespace base {


#define GI_GST_PADPROBEINFO_BASE base::PadProbeInfoBase
class PadProbeInfoBase : public gi::detail::CBoxedWrapper<PadProbeInfoBase, ::GstPadProbeInfo>
{
typedef gi::detail::CBoxedWrapper<PadProbeInfoBase, ::GstPadProbeInfo> super_type;
public:

PadProbeInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstPadProbeType PadProbeInfo::type (const ::GstPadProbeInfo* obj);
// ::GstPadProbeType PadProbeInfo::type (const ::GstPadProbeInfo* obj);
GI_INLINE_DECL Gst::PadProbeType type_ () const noexcept;

//  PadProbeInfo::type (::GstPadProbeInfo* obj, ::GstPadProbeType _value);
// void PadProbeInfo::type (::GstPadProbeInfo* obj, ::GstPadProbeType _value);
GI_INLINE_DECL void type_ (Gst::PadProbeType _value) noexcept;

// gulong PadProbeInfo::id (const ::GstPadProbeInfo* obj);
// gulong PadProbeInfo::id (const ::GstPadProbeInfo* obj);
GI_INLINE_DECL gulong id_ () const noexcept;

//  PadProbeInfo::id (::GstPadProbeInfo* obj, gulong _value);
// void PadProbeInfo::id (::GstPadProbeInfo* obj, gulong _value);
GI_INLINE_DECL void id_ (gulong _value) noexcept;

// guint64 PadProbeInfo::offset (const ::GstPadProbeInfo* obj);
// guint64 PadProbeInfo::offset (const ::GstPadProbeInfo* obj);
GI_INLINE_DECL guint64 offset_ () const noexcept;

//  PadProbeInfo::offset (::GstPadProbeInfo* obj, guint64 _value);
// void PadProbeInfo::offset (::GstPadProbeInfo* obj, guint64 _value);
GI_INLINE_DECL void offset_ (guint64 _value) noexcept;

// guint PadProbeInfo::size (const ::GstPadProbeInfo* obj);
// guint PadProbeInfo::size (const ::GstPadProbeInfo* obj);
GI_INLINE_DECL guint size_ () const noexcept;

//  PadProbeInfo::size (::GstPadProbeInfo* obj, guint _value);
// void PadProbeInfo::size (::GstPadProbeInfo* obj, guint _value);
GI_INLINE_DECL void size_ (guint _value) noexcept;

// GstBuffer* gst_pad_probe_info_get_buffer (GstPadProbeInfo* info);
// ::GstBuffer* gst_pad_probe_info_get_buffer (::GstPadProbeInfo* info);
GI_INLINE_DECL Gst::Buffer get_buffer () noexcept;

// GstBufferList* gst_pad_probe_info_get_buffer_list (GstPadProbeInfo* info);
// ::GstBufferList* gst_pad_probe_info_get_buffer_list (::GstPadProbeInfo* info);
GI_INLINE_DECL Gst::BufferList get_buffer_list () noexcept;

// GstEvent* gst_pad_probe_info_get_event (GstPadProbeInfo* info);
// ::GstEvent* gst_pad_probe_info_get_event (::GstPadProbeInfo* info);
GI_INLINE_DECL Gst::Event get_event () noexcept;

// GstQuery* gst_pad_probe_info_get_query (GstPadProbeInfo* info);
// ::GstQuery* gst_pad_probe_info_get_query (::GstPadProbeInfo* info);
GI_INLINE_DECL Gst::Query get_query () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/padprobeinfo_extra_def.hpp>)
#include <gst/padprobeinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/padprobeinfo_extra.hpp>)
#include <gst/padprobeinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class PadProbeInfo : public GI_GST_PADPROBEINFO_BASE
{ typedef GI_GST_PADPROBEINFO_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstPadProbeInfo>
{ typedef Gst::PadProbeInfo type; }; 

} // namespace repository

} // namespace gi

#endif
