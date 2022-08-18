// AUTO-GENERATED

#ifndef _GI_GST_PROTECTIONMETA_HPP_
#define _GI_GST_PROTECTIONMETA_HPP_


namespace gi {

namespace repository {

namespace Gst {

class MetaInfo;
class Structure;

class ProtectionMeta;

namespace base {


#define GI_GST_PROTECTIONMETA_BASE base::ProtectionMetaBase
class ProtectionMetaBase : public gi::detail::CBoxedWrapper<ProtectionMetaBase, ::GstProtectionMeta>
{
typedef gi::detail::CBoxedWrapper<ProtectionMetaBase, ::GstProtectionMeta> super_type;
public:

ProtectionMetaBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstStructure* ProtectionMeta::info (const ::GstProtectionMeta* obj);
// ::GstStructure* ProtectionMeta::info (const ::GstProtectionMeta* obj);
GI_INLINE_DECL Gst::Structure info_ () const noexcept;

// const GstMetaInfo* gst_protection_meta_get_info ();
// const ::GstMetaInfo* gst_protection_meta_get_info ();
static GI_INLINE_DECL Gst::MetaInfo get_info () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/protectionmeta_extra_def.hpp>)
#include <gst/protectionmeta_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/protectionmeta_extra.hpp>)
#include <gst/protectionmeta_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ProtectionMeta : public GI_GST_PROTECTIONMETA_BASE
{ typedef GI_GST_PROTECTIONMETA_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstProtectionMeta>
{ typedef Gst::ProtectionMeta type; }; 

} // namespace repository

} // namespace gi

#endif
