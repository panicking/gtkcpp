// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTFILTER_IMPL_HPP_
#define _GI_WEBKIT2_USERCONTENTFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const char* webkit_user_content_filter_get_identifier (WebKitUserContentFilter* user_content_filter);
// const char* webkit_user_content_filter_get_identifier (::WebKitUserContentFilter* user_content_filter);
std::string base::UserContentFilterBase::get_identifier () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitUserContentFilter* user_content_filter);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_get_identifier;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitUserContentFilter* webkit_user_content_filter_ref (WebKitUserContentFilter* user_content_filter);
// ::WebKitUserContentFilter* webkit_user_content_filter_ref (::WebKitUserContentFilter* user_content_filter);
// IGNORE; marked ignore

// void webkit_user_content_filter_unref (WebKitUserContentFilter* user_content_filter);
// void webkit_user_content_filter_unref (::WebKitUserContentFilter* user_content_filter);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilter_extra_def_impl.hpp>)
#include <webkit2/usercontentfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilter_extra_impl.hpp>)
#include <webkit2/usercontentfilter_extra_impl.hpp>
#endif
#endif

#endif
