// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERSTYLESHEET_IMPL_HPP_
#define _GI_WEBKIT2_USERSTYLESHEET_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitUserStyleSheet* webkit_user_style_sheet_new (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserStyleLevel level, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_new (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char** allow_list, const char** block_list);
WebKit2::UserStyleSheet base::UserStyleSheetBase::new_ (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserStyleLevel level, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept
{
  typedef ::WebKitUserStyleSheet* (*call_wrap_t) (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char** allow_list, const char** block_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_style_sheet_new;
  auto block_list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (block_list);
  auto block_list_w = unwrap (block_list_i, gi::transfer_none, direction_in);
  auto block_list_to_c = block_list_w.gobj_(false);
  auto allow_list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (allow_list);
  auto allow_list_w = unwrap (allow_list_i, gi::transfer_none, direction_in);
  auto allow_list_to_c = allow_list_w.gobj_(false);
  auto level_to_c = gi::unwrap (level);
  auto injected_frames_to_c = gi::unwrap (injected_frames);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (::WebKitUserContentInjectedFrames) (injected_frames_to_c), (::WebKitUserStyleLevel) (level_to_c), (const char**) (allow_list_to_c), (const char**) (block_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitUserStyleSheet* webkit_user_style_sheet_new_for_world (const gchar* source, WebKitUserContentInjectedFrames injected_frames, WebKitUserStyleLevel level, const gchar* world_name, const gchar* const* allow_list, const gchar* const* block_list);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_new_for_world (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char* world_name, const char** allow_list, const char** block_list);
WebKit2::UserStyleSheet base::UserStyleSheetBase::new_for_world (const std::string & source, WebKit2::UserContentInjectedFrames injected_frames, WebKit2::UserStyleLevel level, const std::string & world_name, const std::vector<std::string> & allow_list, const std::vector<std::string> & block_list) noexcept
{
  typedef ::WebKitUserStyleSheet* (*call_wrap_t) (const char* source, ::WebKitUserContentInjectedFrames injected_frames, ::WebKitUserStyleLevel level, const char* world_name, const char** allow_list, const char** block_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_style_sheet_new_for_world;
  auto block_list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (block_list);
  auto block_list_w = unwrap (block_list_i, gi::transfer_none, direction_in);
  auto block_list_to_c = block_list_w.gobj_(false);
  auto allow_list_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (allow_list);
  auto allow_list_w = unwrap (allow_list_i, gi::transfer_none, direction_in);
  auto allow_list_to_c = allow_list_w.gobj_(false);
  auto world_name_to_c = gi::unwrap (world_name, gi::transfer_none, gi::direction_in);
  auto level_to_c = gi::unwrap (level);
  auto injected_frames_to_c = gi::unwrap (injected_frames);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (source_to_c), (::WebKitUserContentInjectedFrames) (injected_frames_to_c), (::WebKitUserStyleLevel) (level_to_c), (const char*) (world_name_to_c), (const char**) (allow_list_to_c), (const char**) (block_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// WebKitUserStyleSheet* webkit_user_style_sheet_ref (WebKitUserStyleSheet* user_style_sheet);
// ::WebKitUserStyleSheet* webkit_user_style_sheet_ref (::WebKitUserStyleSheet* user_style_sheet);
// IGNORE; marked ignore

// void webkit_user_style_sheet_unref (WebKitUserStyleSheet* user_style_sheet);
// void webkit_user_style_sheet_unref (::WebKitUserStyleSheet* user_style_sheet);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/userstylesheet_extra_def_impl.hpp>)
#include <webkit2/userstylesheet_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/userstylesheet_extra_impl.hpp>)
#include <webkit2/userstylesheet_extra_impl.hpp>
#endif
#endif

#endif
