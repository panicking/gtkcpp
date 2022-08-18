// AUTO-GENERATED

#ifndef _GI_GST_PARENTBUFFERMETA_IMPL_HPP_
#define _GI_GST_PARENTBUFFERMETA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstBuffer* _field_buffer_get (const ::GstParentBufferMeta* obj) { return (::GstBuffer*) obj->buffer; }
// ::GstBuffer* ParentBufferMeta::buffer (const ::GstParentBufferMeta* obj);
// ::GstBuffer* ParentBufferMeta::buffer (const ::GstParentBufferMeta* obj);
Gst::Buffer base::ParentBufferMetaBase::buffer_ () const noexcept
{
  typedef ::GstBuffer* (*call_wrap_t) (const ::GstParentBufferMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_buffer_get;
  auto _temp_ret = call_wrap_v ((const ::GstParentBufferMeta*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstMetaInfo* gst_parent_buffer_meta_get_info ();
// const ::GstMetaInfo* gst_parent_buffer_meta_get_info ();
Gst::MetaInfo base::ParentBufferMetaBase::get_info () noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parent_buffer_meta_get_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/parentbuffermeta_extra_def_impl.hpp>)
#include <gst/parentbuffermeta_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/parentbuffermeta_extra_impl.hpp>)
#include <gst/parentbuffermeta_extra_impl.hpp>
#endif
#endif

#endif
