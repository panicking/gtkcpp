// AUTO-GENERATED

#ifndef _GI_WEBKIT2_HITTESTRESULT_IMPL_HPP_
#define _GI_WEBKIT2_HITTESTRESULT_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// gboolean webkit_hit_test_result_context_is_editable (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_editable (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_editable () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_editable;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_hit_test_result_context_is_image (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_image (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_image () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_image;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_hit_test_result_context_is_link (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_link (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_link () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_link;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_hit_test_result_context_is_media (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_media (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_media () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_media;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_hit_test_result_context_is_scrollbar (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_scrollbar (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_scrollbar () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_scrollbar;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_hit_test_result_context_is_selection (WebKitHitTestResult* hit_test_result);
// gboolean webkit_hit_test_result_context_is_selection (::WebKitHitTestResult* hit_test_result);
bool base::HitTestResultBase::context_is_selection () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_context_is_selection;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// guint webkit_hit_test_result_get_context (WebKitHitTestResult* hit_test_result);
// guint webkit_hit_test_result_get_context (::WebKitHitTestResult* hit_test_result);
guint base::HitTestResultBase::get_context () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_context;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_hit_test_result_get_image_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_image_uri (::WebKitHitTestResult* hit_test_result);
std::string base::HitTestResultBase::get_image_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_image_uri;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_hit_test_result_get_link_label (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_label (::WebKitHitTestResult* hit_test_result);
std::string base::HitTestResultBase::get_link_label () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_link_label;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_hit_test_result_get_link_title (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_title (::WebKitHitTestResult* hit_test_result);
std::string base::HitTestResultBase::get_link_title () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_link_title;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_hit_test_result_get_link_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_link_uri (::WebKitHitTestResult* hit_test_result);
std::string base::HitTestResultBase::get_link_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_link_uri;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_hit_test_result_get_media_uri (WebKitHitTestResult* hit_test_result);
// const char* webkit_hit_test_result_get_media_uri (::WebKitHitTestResult* hit_test_result);
std::string base::HitTestResultBase::get_media_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitHitTestResult* hit_test_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_hit_test_result_get_media_uri;
  auto _temp_ret = call_wrap_v ((::WebKitHitTestResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/hittestresult_extra_def_impl.hpp>)
#include <webkit2/hittestresult_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/hittestresult_extra_impl.hpp>)
#include <webkit2/hittestresult_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void HitTestResultClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitHitTestResultClass *methods = (::WebKitHitTestResultClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
