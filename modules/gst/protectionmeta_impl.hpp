// AUTO-GENERATED

#ifndef _GI_GST_PROTECTIONMETA_IMPL_HPP_
#define _GI_GST_PROTECTIONMETA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstStructure* _field_info_get (const ::GstProtectionMeta* obj) { return (::GstStructure*) obj->info; }
// ::GstStructure* ProtectionMeta::info (const ::GstProtectionMeta* obj);
// ::GstStructure* ProtectionMeta::info (const ::GstProtectionMeta* obj);
Gst::Structure base::ProtectionMetaBase::info_ () const noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (const ::GstProtectionMeta* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_info_get;
  auto _temp_ret = call_wrap_v ((const ::GstProtectionMeta*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstMetaInfo* gst_protection_meta_get_info ();
// const ::GstMetaInfo* gst_protection_meta_get_info ();
Gst::MetaInfo base::ProtectionMetaBase::get_info () noexcept
{
  typedef const ::GstMetaInfo* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_protection_meta_get_info;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/protectionmeta_extra_def_impl.hpp>)
#include <gst/protectionmeta_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/protectionmeta_extra_impl.hpp>)
#include <gst/protectionmeta_extra_impl.hpp>
#endif
#endif

#endif
