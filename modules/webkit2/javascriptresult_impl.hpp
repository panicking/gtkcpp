// AUTO-GENERATED

#ifndef _GI_WEBKIT2_JAVASCRIPTRESULT_IMPL_HPP_
#define _GI_WEBKIT2_JAVASCRIPTRESULT_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// FAILURE on webkit_javascript_result_get_global_context; No such node (<xmlattr>.name)
// JSCValue* webkit_javascript_result_get_js_value (WebKitJavascriptResult* js_result);
// ::JSCValue* webkit_javascript_result_get_js_value (::WebKitJavascriptResult* js_result);
JavaScriptCore::Value base::JavascriptResultBase::get_js_value () noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::WebKitJavascriptResult* js_result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_javascript_result_get_js_value;
  auto _temp_ret = call_wrap_v ((::WebKitJavascriptResult*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// FAILURE on webkit_javascript_result_get_value; No such node (<xmlattr>.name)
// WebKitJavascriptResult* webkit_javascript_result_ref (WebKitJavascriptResult* js_result);
// ::WebKitJavascriptResult* webkit_javascript_result_ref (::WebKitJavascriptResult* js_result);
// IGNORE; marked ignore

// void webkit_javascript_result_unref (WebKitJavascriptResult* js_result);
// void webkit_javascript_result_unref (::WebKitJavascriptResult* js_result);
// IGNORE; marked ignore


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/javascriptresult_extra_def_impl.hpp>)
#include <webkit2/javascriptresult_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/javascriptresult_extra_impl.hpp>)
#include <webkit2/javascriptresult_extra_impl.hpp>
#endif
#endif

#endif
