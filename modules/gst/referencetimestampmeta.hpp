// AUTO-GENERATED

#ifndef _GI_GST_REFERENCETIMESTAMPMETA_HPP_
#define _GI_GST_REFERENCETIMESTAMPMETA_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Caps;
class MetaInfo;

class ReferenceTimestampMeta;

namespace base {


#define GI_GST_REFERENCETIMESTAMPMETA_BASE base::ReferenceTimestampMetaBase
class ReferenceTimestampMetaBase : public gi::detail::CBoxedWrapper<ReferenceTimestampMetaBase, ::GstReferenceTimestampMeta>
{
typedef gi::detail::CBoxedWrapper<ReferenceTimestampMetaBase, ::GstReferenceTimestampMeta> super_type;
public:

ReferenceTimestampMetaBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstCaps* ReferenceTimestampMeta::reference (const ::GstReferenceTimestampMeta* obj);
// ::GstCaps* ReferenceTimestampMeta::reference (const ::GstReferenceTimestampMeta* obj);
GI_INLINE_DECL Gst::Caps reference_ () const noexcept;

// ::GstClockTime ReferenceTimestampMeta::timestamp (const ::GstReferenceTimestampMeta* obj);
// ::GstClockTime ReferenceTimestampMeta::timestamp (const ::GstReferenceTimestampMeta* obj);
GI_INLINE_DECL Gst::ClockTime timestamp_ () const noexcept;

//  ReferenceTimestampMeta::timestamp (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
// void ReferenceTimestampMeta::timestamp (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
GI_INLINE_DECL void timestamp_ (::GstClockTime _value) noexcept;

// ::GstClockTime ReferenceTimestampMeta::duration (const ::GstReferenceTimestampMeta* obj);
// ::GstClockTime ReferenceTimestampMeta::duration (const ::GstReferenceTimestampMeta* obj);
GI_INLINE_DECL Gst::ClockTime duration_ () const noexcept;

//  ReferenceTimestampMeta::duration (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
// void ReferenceTimestampMeta::duration (::GstReferenceTimestampMeta* obj, ::GstClockTime _value);
GI_INLINE_DECL void duration_ (::GstClockTime _value) noexcept;

// const GstMetaInfo* gst_reference_timestamp_meta_get_info ();
// const ::GstMetaInfo* gst_reference_timestamp_meta_get_info ();
static GI_INLINE_DECL Gst::MetaInfo get_info () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/referencetimestampmeta_extra_def.hpp>)
#include <gst/referencetimestampmeta_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/referencetimestampmeta_extra.hpp>)
#include <gst/referencetimestampmeta_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ReferenceTimestampMeta : public GI_GST_REFERENCETIMESTAMPMETA_BASE
{ typedef GI_GST_REFERENCETIMESTAMPMETA_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstReferenceTimestampMeta>
{ typedef Gst::ReferenceTimestampMeta type; }; 

} // namespace repository

} // namespace gi

#endif
