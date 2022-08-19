// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBSITEDATA_IMPL_HPP_
#define _GI_WEBKIT2_WEBSITEDATA_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// const char* webkit_website_data_get_name (WebKitWebsiteData* website_data);
// const char* webkit_website_data_get_name (::WebKitWebsiteData* website_data);
std::string base::WebsiteDataBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebsiteData* website_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_get_name;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteData*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint64 webkit_website_data_get_size (WebKitWebsiteData* website_data, WebKitWebsiteDataTypes types);
// guint64 webkit_website_data_get_size (::WebKitWebsiteData* website_data, ::WebKitWebsiteDataTypes types);
guint64 base::WebsiteDataBase::get_size (WebKit2::WebsiteDataTypes types) noexcept
{
  typedef guint64 (*call_wrap_t) (::WebKitWebsiteData* website_data, ::WebKitWebsiteDataTypes types);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_get_size;
  auto types_to_c = gi::unwrap (types);
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteData*) (gobj_()), (::WebKitWebsiteDataTypes) (types_to_c));
  return _temp_ret;
}

// WebKitWebsiteDataTypes webkit_website_data_get_types (WebKitWebsiteData* website_data);
// ::WebKitWebsiteDataTypes webkit_website_data_get_types (::WebKitWebsiteData* website_data);
WebKit2::WebsiteDataTypes base::WebsiteDataBase::get_types () noexcept
{
  typedef ::WebKitWebsiteDataTypes (*call_wrap_t) (::WebKitWebsiteData* website_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_website_data_get_types;
  auto _temp_ret = call_wrap_v ((::WebKitWebsiteData*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// WebKitWebsiteData* webkit_website_data_ref (WebKitWebsiteData* website_data);
// ::WebKitWebsiteData* webkit_website_data_ref (::WebKitWebsiteData* website_data);
// IGNORE; marked ignore

// void webkit_website_data_unref (WebKitWebsiteData* website_data);
// void webkit_website_data_unref (::WebKitWebsiteData* website_data);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/websitedata_extra_def_impl.hpp>)
#include <webkit2/websitedata_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/websitedata_extra_impl.hpp>)
#include <webkit2/websitedata_extra_impl.hpp>
#endif
#endif

#endif
