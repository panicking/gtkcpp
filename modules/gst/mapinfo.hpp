// AUTO-GENERATED

#ifndef _GI_GST_MAPINFO_HPP_
#define _GI_GST_MAPINFO_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Memory;

class MapInfo;

namespace base {


#define GI_GST_MAPINFO_BASE base::MapInfoBase
class MapInfoBase : public gi::detail::CBoxedWrapper<MapInfoBase, ::GstMapInfo>
{
typedef gi::detail::CBoxedWrapper<MapInfoBase, ::GstMapInfo> super_type;
public:

MapInfoBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstMemory* MapInfo::memory (const ::GstMapInfo* obj);
// ::GstMemory* MapInfo::memory (const ::GstMapInfo* obj);
GI_INLINE_DECL Gst::Memory memory_ () const noexcept;

// ::GstMapFlags MapInfo::flags (const ::GstMapInfo* obj);
// ::GstMapFlags MapInfo::flags (const ::GstMapInfo* obj);
GI_INLINE_DECL Gst::MapFlags flags_ () const noexcept;

//  MapInfo::flags (::GstMapInfo* obj, ::GstMapFlags _value);
// void MapInfo::flags (::GstMapInfo* obj, ::GstMapFlags _value);
GI_INLINE_DECL void flags_ (Gst::MapFlags _value) noexcept;

// gsize MapInfo::size (const ::GstMapInfo* obj);
// gsize MapInfo::size (const ::GstMapInfo* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  MapInfo::size (::GstMapInfo* obj, gsize _value);
// void MapInfo::size (::GstMapInfo* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

// gsize MapInfo::maxsize (const ::GstMapInfo* obj);
// gsize MapInfo::maxsize (const ::GstMapInfo* obj);
GI_INLINE_DECL gsize maxsize_ () const noexcept;

//  MapInfo::maxsize (::GstMapInfo* obj, gsize _value);
// void MapInfo::maxsize (::GstMapInfo* obj, gsize _value);
GI_INLINE_DECL void maxsize_ (gsize _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/mapinfo_extra_def.hpp>)
#include <gst/mapinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/mapinfo_extra.hpp>)
#include <gst/mapinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class MapInfo : public GI_GST_MAPINFO_BASE
{ typedef GI_GST_MAPINFO_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMapInfo>
{ typedef Gst::MapInfo type; }; 

} // namespace repository

} // namespace gi

#endif
