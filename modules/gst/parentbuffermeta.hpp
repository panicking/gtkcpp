// AUTO-GENERATED

#ifndef _GI_GST_PARENTBUFFERMETA_HPP_
#define _GI_GST_PARENTBUFFERMETA_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Buffer;
class MetaInfo;

class ParentBufferMeta;

namespace base {


#define GI_GST_PARENTBUFFERMETA_BASE base::ParentBufferMetaBase
class ParentBufferMetaBase : public gi::detail::CBoxedWrapper<ParentBufferMetaBase, ::GstParentBufferMeta>
{
typedef gi::detail::CBoxedWrapper<ParentBufferMetaBase, ::GstParentBufferMeta> super_type;
public:

ParentBufferMetaBase (std::nullptr_t = nullptr) : super_type() {}

// ::GstBuffer* ParentBufferMeta::buffer (const ::GstParentBufferMeta* obj);
// ::GstBuffer* ParentBufferMeta::buffer (const ::GstParentBufferMeta* obj);
GI_INLINE_DECL Gst::Buffer buffer_ () const noexcept;

// const GstMetaInfo* gst_parent_buffer_meta_get_info ();
// const ::GstMetaInfo* gst_parent_buffer_meta_get_info ();
static GI_INLINE_DECL Gst::MetaInfo get_info () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/parentbuffermeta_extra_def.hpp>)
#include <gst/parentbuffermeta_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/parentbuffermeta_extra.hpp>)
#include <gst/parentbuffermeta_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class ParentBufferMeta : public GI_GST_PARENTBUFFERMETA_BASE
{ typedef GI_GST_PARENTBUFFERMETA_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstParentBufferMeta>
{ typedef Gst::ParentBufferMeta type; }; 

} // namespace repository

} // namespace gi

#endif
