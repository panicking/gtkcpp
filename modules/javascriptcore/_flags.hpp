// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE__FLAGS_HPP_
#define _GI_JAVASCRIPTCORE__FLAGS_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

enum class ValuePropertyFlags {
  CONFIGURABLE_ = JSC_VALUE_PROPERTY_CONFIGURABLE,
  ENUMERABLE_ = JSC_VALUE_PROPERTY_ENUMERABLE,
  WRITABLE_ = JSC_VALUE_PROPERTY_WRITABLE,
};

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<JavaScriptCore::ValuePropertyFlags>
{ typedef JSCValuePropertyFlags type; }; 
template<> struct declare_cpptype_of<JSCValuePropertyFlags>
{ typedef JavaScriptCore::ValuePropertyFlags type; }; 


} // namespace repository

} // namespace gi


#endif
