// AUTO-GENERATED

#ifndef _GI_GST_CUSTOMMETA_IMPL_HPP_
#define _GI_GST_CUSTOMMETA_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstStructure* gst_custom_meta_get_structure (GstCustomMeta* meta);
// ::GstStructure* gst_custom_meta_get_structure (::GstCustomMeta* meta);
Gst::Structure base::CustomMetaBase::get_structure () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstCustomMeta* meta);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_custom_meta_get_structure;
  auto _temp_ret = call_wrap_v ((::GstCustomMeta*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_custom_meta_has_name (GstCustomMeta* meta, const gchar* name);
// gboolean gst_custom_meta_has_name (::GstCustomMeta* meta, const char* name);
bool base::CustomMetaBase::has_name (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstCustomMeta* meta, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_custom_meta_has_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstCustomMeta*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/custommeta_extra_def_impl.hpp>)
#include <gst/custommeta_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/custommeta_extra_impl.hpp>)
#include <gst/custommeta_extra_impl.hpp>
#endif
#endif

#endif
