// AUTO-GENERATED

#ifndef _GI_WEBKIT2_JAVASCRIPTRESULT_HPP_
#define _GI_WEBKIT2_JAVASCRIPTRESULT_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class JavascriptResult;

namespace base {


#define GI_WEBKIT2_JAVASCRIPTRESULT_BASE base::JavascriptResultBase
class JavascriptResultBase : public gi::detail::GBoxedWrapper<JavascriptResultBase, ::WebKitJavascriptResult>
{
typedef gi::detail::GBoxedWrapper<JavascriptResultBase, ::WebKitJavascriptResult> super_type;
public:

JavascriptResultBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return webkit_javascript_result_get_type(); } 

// FAILURE on webkit_javascript_result_get_global_context; No such node (<xmlattr>.name)
// JSCValue* webkit_javascript_result_get_js_value (WebKitJavascriptResult* js_result);
// ::JSCValue* webkit_javascript_result_get_js_value (::WebKitJavascriptResult* js_result);
GI_INLINE_DECL JavaScriptCore::Value get_js_value () noexcept;

// FAILURE on webkit_javascript_result_get_value; No such node (<xmlattr>.name)
// WebKitJavascriptResult* webkit_javascript_result_ref (WebKitJavascriptResult* js_result);
// ::WebKitJavascriptResult* webkit_javascript_result_ref (::WebKitJavascriptResult* js_result);
// IGNORE; marked ignore

// void webkit_javascript_result_unref (WebKitJavascriptResult* js_result);
// void webkit_javascript_result_unref (::WebKitJavascriptResult* js_result);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/javascriptresult_extra_def.hpp>)
#include <webkit2/javascriptresult_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/javascriptresult_extra.hpp>)
#include <webkit2/javascriptresult_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class JavascriptResult : public GI_WEBKIT2_JAVASCRIPTRESULT_BASE
{ typedef GI_WEBKIT2_JAVASCRIPTRESULT_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitJavascriptResult>
{ typedef WebKit2::JavascriptResult type; }; 

} // namespace repository

} // namespace gi

#endif
