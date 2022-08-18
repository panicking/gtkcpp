// AUTO-GENERATED

#ifndef _GI_GST_METAINFO_HPP_
#define _GI_GST_METAINFO_HPP_


namespace gi {

namespace repository {

namespace Gst {


class MetaInfo;

namespace base {


#define GI_GST_METAINFO_BASE base::MetaInfoBase
class MetaInfoBase : public gi::detail::CBoxedWrapper<MetaInfoBase, ::GstMetaInfo>
{
typedef gi::detail::CBoxedWrapper<MetaInfoBase, ::GstMetaInfo> super_type;
public:

MetaInfoBase (std::nullptr_t = nullptr) : super_type() {}

// GType MetaInfo::api (const ::GstMetaInfo* obj);
// GType MetaInfo::api (const ::GstMetaInfo* obj);
GI_INLINE_DECL GType api_ () const noexcept;

//  MetaInfo::api (::GstMetaInfo* obj, GType _value);
// void MetaInfo::api (::GstMetaInfo* obj, GType _value);
GI_INLINE_DECL void api_ (GType _value) noexcept;

// GType MetaInfo::type (const ::GstMetaInfo* obj);
// GType MetaInfo::type (const ::GstMetaInfo* obj);
GI_INLINE_DECL GType type_ () const noexcept;

//  MetaInfo::type (::GstMetaInfo* obj, GType _value);
// void MetaInfo::type (::GstMetaInfo* obj, GType _value);
GI_INLINE_DECL void type_ (GType _value) noexcept;

// gsize MetaInfo::size (const ::GstMetaInfo* obj);
// gsize MetaInfo::size (const ::GstMetaInfo* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  MetaInfo::size (::GstMetaInfo* obj, gsize _value);
// void MetaInfo::size (::GstMetaInfo* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

// gboolean gst_meta_info_is_custom (const GstMetaInfo* info);
// gboolean gst_meta_info_is_custom (const ::GstMetaInfo* info);
GI_INLINE_DECL bool is_custom () const noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/metainfo_extra_def.hpp>)
#include <gst/metainfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/metainfo_extra.hpp>)
#include <gst/metainfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class MetaInfo : public GI_GST_METAINFO_BASE
{ typedef GI_GST_METAINFO_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMetaInfo>
{ typedef Gst::MetaInfo type; }; 

} // namespace repository

} // namespace gi

#endif
