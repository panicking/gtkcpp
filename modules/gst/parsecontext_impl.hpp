// AUTO-GENERATED

#ifndef _GI_GST_PARSECONTEXT_IMPL_HPP_
#define _GI_GST_PARSECONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstParseContext* gst_parse_context_new ();
// ::GstParseContext* gst_parse_context_new ();
Gst::ParseContext base::ParseContextBase::new_ () noexcept
{
  typedef ::GstParseContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstParseContext* gst_parse_context_copy (const GstParseContext* context);
// ::GstParseContext* gst_parse_context_copy (const ::GstParseContext* context);
Gst::ParseContext base::ParseContextBase::copy () const noexcept
{
  typedef ::GstParseContext* (*call_wrap_t) (const ::GstParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_context_copy;
  auto _temp_ret = call_wrap_v ((const ::GstParseContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_parse_context_free (GstParseContext* context);
// void gst_parse_context_free (::GstParseContext* context);
// IGNORE; marked ignore

// gchar** gst_parse_context_get_missing_elements (GstParseContext* context);
// char** gst_parse_context_get_missing_elements (::GstParseContext* context);
std::vector<std::string> base::ParseContextBase::get_missing_elements () noexcept
{
  typedef char** (*call_wrap_t) (::GstParseContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_parse_context_get_missing_elements;
  auto _temp_ret = call_wrap_v ((::GstParseContext*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/parsecontext_extra_def_impl.hpp>)
#include <gst/parsecontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/parsecontext_extra_impl.hpp>)
#include <gst/parsecontext_extra_impl.hpp>
#endif
#endif

#endif
