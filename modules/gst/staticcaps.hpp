// AUTO-GENERATED

#ifndef _GI_GST_STATICCAPS_HPP_
#define _GI_GST_STATICCAPS_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Caps;

class StaticCaps;

namespace base {


#define GI_GST_STATICCAPS_BASE base::StaticCapsBase
class StaticCapsBase : public gi::detail::CBoxedWrapper<StaticCapsBase, ::GstStaticCaps>
{
typedef gi::detail::CBoxedWrapper<StaticCapsBase, ::GstStaticCaps> super_type;
public:

StaticCapsBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstCaps* StaticCaps::caps (const ::GstStaticCaps* obj);
// ::GstCaps* StaticCaps::caps (const ::GstStaticCaps* obj);
GI_INLINE_DECL Gst::Caps caps_ () const noexcept;

// const char* StaticCaps::string (const ::GstStaticCaps* obj);
// const char* StaticCaps::string (const ::GstStaticCaps* obj);
GI_INLINE_DECL std::string string_ () const noexcept;

// void gst_static_caps_cleanup (GstStaticCaps* static_caps);
// void gst_static_caps_cleanup (::GstStaticCaps* static_caps);
GI_INLINE_DECL void cleanup () noexcept;

// GstCaps* gst_static_caps_get (GstStaticCaps* static_caps);
// ::GstCaps* gst_static_caps_get (::GstStaticCaps* static_caps);
GI_INLINE_DECL Gst::Caps get () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/staticcaps_extra_def.hpp>)
#include <gst/staticcaps_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/staticcaps_extra.hpp>)
#include <gst/staticcaps_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class StaticCaps : public GI_GST_STATICCAPS_BASE
{ typedef GI_GST_STATICCAPS_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstStaticCaps>
{ typedef Gst::StaticCaps type; }; 

} // namespace repository

} // namespace gi

#endif
