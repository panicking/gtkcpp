// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBINSPECTOR_IMPL_HPP_
#define _GI_WEBKIT2_WEBINSPECTOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_web_inspector_attach (WebKitWebInspector* inspector);
// void webkit_web_inspector_attach (::WebKitWebInspector* inspector);
void base::WebInspectorBase::attach () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_attach;
  call_wrap_v ((::WebKitWebInspector*) (gobj_()));
}

// void webkit_web_inspector_close (WebKitWebInspector* inspector);
// void webkit_web_inspector_close (::WebKitWebInspector* inspector);
void base::WebInspectorBase::close () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_close;
  call_wrap_v ((::WebKitWebInspector*) (gobj_()));
}

// void webkit_web_inspector_detach (WebKitWebInspector* inspector);
// void webkit_web_inspector_detach (::WebKitWebInspector* inspector);
void base::WebInspectorBase::detach () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_detach;
  call_wrap_v ((::WebKitWebInspector*) (gobj_()));
}

// guint webkit_web_inspector_get_attached_height (WebKitWebInspector* inspector);
// guint webkit_web_inspector_get_attached_height (::WebKitWebInspector* inspector);
guint base::WebInspectorBase::get_attached_height () noexcept
{
  typedef guint (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_get_attached_height;
  auto _temp_ret = call_wrap_v ((::WebKitWebInspector*) (gobj_()));
  return _temp_ret;
}

// gboolean webkit_web_inspector_get_can_attach (WebKitWebInspector* inspector);
// gboolean webkit_web_inspector_get_can_attach (::WebKitWebInspector* inspector);
bool base::WebInspectorBase::get_can_attach () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_get_can_attach;
  auto _temp_ret = call_wrap_v ((::WebKitWebInspector*) (gobj_()));
  return _temp_ret;
}

// const char* webkit_web_inspector_get_inspected_uri (WebKitWebInspector* inspector);
// const char* webkit_web_inspector_get_inspected_uri (::WebKitWebInspector* inspector);
std::string base::WebInspectorBase::get_inspected_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_get_inspected_uri;
  auto _temp_ret = call_wrap_v ((::WebKitWebInspector*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebViewBase* webkit_web_inspector_get_web_view (WebKitWebInspector* inspector);
// ::WebKitWebViewBase* webkit_web_inspector_get_web_view (::WebKitWebInspector* inspector);
WebKit2::WebViewBase base::WebInspectorBase::get_web_view () noexcept
{
  typedef ::WebKitWebViewBase* (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_get_web_view;
  auto _temp_ret = call_wrap_v ((::WebKitWebInspector*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_web_inspector_is_attached (WebKitWebInspector* inspector);
// gboolean webkit_web_inspector_is_attached (::WebKitWebInspector* inspector);
bool base::WebInspectorBase::is_attached () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_is_attached;
  auto _temp_ret = call_wrap_v ((::WebKitWebInspector*) (gobj_()));
  return _temp_ret;
}

// void webkit_web_inspector_show (WebKitWebInspector* inspector);
// void webkit_web_inspector_show (::WebKitWebInspector* inspector);
void base::WebInspectorBase::show () noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebInspector* inspector);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_inspector_show;
  call_wrap_v ((::WebKitWebInspector*) (gobj_()));
}







} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webinspector_extra_def_impl.hpp>)
#include <webkit2/webinspector_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webinspector_extra_impl.hpp>)
#include <webkit2/webinspector_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebInspectorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebInspectorClass *methods = (::WebKitWebInspectorClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
