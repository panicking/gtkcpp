// AUTO-GENERATED

#ifndef _GI_GST_CONTEXT_IMPL_HPP_
#define _GI_GST_CONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstContext* gst_context_new (const gchar* context_type, gboolean persistent);
// ::GstContext* gst_context_new (const char* context_type, gboolean persistent);
Gst::Context base::ContextBase::new_ (const std::string & context_type, gboolean persistent) noexcept
{
  typedef ::GstContext* (*call_wrap_t) (const char* context_type, gboolean persistent);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_new;
  auto persistent_to_c = persistent;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (context_type_to_c), (gboolean) (persistent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gst_context_get_context_type (const GstContext* context);
// const char* gst_context_get_context_type (const ::GstContext* context);
std::string base::ContextBase::get_context_type () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_get_context_type;
  auto _temp_ret = call_wrap_v ((const ::GstContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GstStructure* gst_context_get_structure (const GstContext* context);
// const ::GstStructure* gst_context_get_structure (const ::GstContext* context);
Gst::Structure base::ContextBase::get_structure () const noexcept
{
  typedef const ::GstStructure* (*call_wrap_t) (const ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_get_structure;
  auto _temp_ret = call_wrap_v ((const ::GstContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_context_has_context_type (const GstContext* context, const gchar* context_type);
// gboolean gst_context_has_context_type (const ::GstContext* context, const char* context_type);
bool base::ContextBase::has_context_type (const std::string & context_type) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstContext* context, const char* context_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_has_context_type;
  auto context_type_to_c = gi::unwrap (context_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GstContext*) (gobj_()), (const char*) (context_type_to_c));
  return _temp_ret;
}

// gboolean gst_context_is_persistent (const GstContext* context);
// gboolean gst_context_is_persistent (const ::GstContext* context);
bool base::ContextBase::is_persistent () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_is_persistent;
  auto _temp_ret = call_wrap_v ((const ::GstContext*) (gobj_()));
  return _temp_ret;
}

// GstStructure* gst_context_writable_structure (GstContext* context);
// ::GstStructure* gst_context_writable_structure (::GstContext* context);
Gst::Structure base::ContextBase::writable_structure () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_context_writable_structure;
  auto _temp_ret = call_wrap_v ((::GstContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/context_extra_def_impl.hpp>)
#include <gst/context_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/context_extra_impl.hpp>)
#include <gst/context_extra_impl.hpp>
#endif
#endif

#endif
