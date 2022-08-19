// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FINDCONTROLLER_IMPL_HPP_
#define _GI_WEBKIT2_FINDCONTROLLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_find_controller_count_matches (WebKitFindController* find_controller, const gchar* search_text, guint32 find_options, guint max_match_count);
// void webkit_find_controller_count_matches (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
void base::FindControllerBase::count_matches (const std::string & search_text, guint32 find_options, guint max_match_count) noexcept
{
  typedef void (*call_wrap_t) (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_count_matches;
  auto max_match_count_to_c = max_match_count;
  auto find_options_to_c = find_options;
  auto search_text_to_c = gi::unwrap (search_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitFindController*) (gobj_()), (const char*) (search_text_to_c), (guint32) (find_options_to_c), (guint) (max_match_count_to_c));
}

// guint webkit_find_controller_get_max_match_count (WebKitFindController* find_controller);
// guint webkit_find_controller_get_max_match_count (::WebKitFindController* find_controller);
guint base::FindControllerBase::get_max_match_count () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_get_max_match_count;
  auto _temp_ret = call_wrap_v ((::WebKitFindController*) (gobj_()));
  return _temp_ret;
}

// guint32 webkit_find_controller_get_options (WebKitFindController* find_controller);
// guint32 webkit_find_controller_get_options (::WebKitFindController* find_controller);
guint32 base::FindControllerBase::get_options () noexcept
{
  typedef guint32 (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_get_options;
  auto _temp_ret = call_wrap_v ((::WebKitFindController*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_find_controller_get_search_text (WebKitFindController* find_controller);
// const char* webkit_find_controller_get_search_text (::WebKitFindController* find_controller);
std::string base::FindControllerBase::get_search_text () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_get_search_text;
  auto _temp_ret = call_wrap_v ((::WebKitFindController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebView* webkit_find_controller_get_web_view (WebKitFindController* find_controller);
// ::WebKitWebView* webkit_find_controller_get_web_view (::WebKitFindController* find_controller);
WebKit2::WebView base::FindControllerBase::get_web_view () noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_get_web_view;
  auto _temp_ret = call_wrap_v ((::WebKitFindController*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_find_controller_search (WebKitFindController* find_controller, const gchar* search_text, guint32 find_options, guint max_match_count);
// void webkit_find_controller_search (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
void base::FindControllerBase::search (const std::string & search_text, guint32 find_options, guint max_match_count) noexcept
{
  typedef void (*call_wrap_t) (::WebKitFindController* find_controller, const char* search_text, guint32 find_options, guint max_match_count);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_search;
  auto max_match_count_to_c = max_match_count;
  auto find_options_to_c = find_options;
  auto search_text_to_c = gi::unwrap (search_text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitFindController*) (gobj_()), (const char*) (search_text_to_c), (guint32) (find_options_to_c), (guint) (max_match_count_to_c));
}

// void webkit_find_controller_search_finish (WebKitFindController* find_controller);
// void webkit_find_controller_search_finish (::WebKitFindController* find_controller);
void base::FindControllerBase::search_finish () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_search_finish;
  call_wrap_v ((::WebKitFindController*) (gobj_()));
}

// void webkit_find_controller_search_next (WebKitFindController* find_controller);
// void webkit_find_controller_search_next (::WebKitFindController* find_controller);
void base::FindControllerBase::search_next () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_search_next;
  call_wrap_v ((::WebKitFindController*) (gobj_()));
}

// void webkit_find_controller_search_previous (WebKitFindController* find_controller);
// void webkit_find_controller_search_previous (::WebKitFindController* find_controller);
void base::FindControllerBase::search_previous () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFindController* find_controller);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_find_controller_search_previous;
  call_wrap_v ((::WebKitFindController*) (gobj_()));
}





} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/findcontroller_extra_def_impl.hpp>)
#include <webkit2/findcontroller_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/findcontroller_extra_impl.hpp>)
#include <webkit2/findcontroller_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void FindControllerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitFindControllerClass *methods = (::WebKitFindControllerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
