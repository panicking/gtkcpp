// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE__ENUMS_HPP_
#define _GI_JAVASCRIPTCORE__ENUMS_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

enum class CheckSyntaxMode {
  SCRIPT_ = JSC_CHECK_SYNTAX_MODE_SCRIPT,
  MODULE_ = JSC_CHECK_SYNTAX_MODE_MODULE,
};

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<JavaScriptCore::CheckSyntaxMode>
{ typedef JSCCheckSyntaxMode type; }; 
template<> struct declare_cpptype_of<JSCCheckSyntaxMode>
{ typedef JavaScriptCore::CheckSyntaxMode type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

enum class CheckSyntaxResult {
  SUCCESS_ = JSC_CHECK_SYNTAX_RESULT_SUCCESS,
  RECOVERABLE_ERROR_ = JSC_CHECK_SYNTAX_RESULT_RECOVERABLE_ERROR,
  IRRECOVERABLE_ERROR_ = JSC_CHECK_SYNTAX_RESULT_IRRECOVERABLE_ERROR,
  UNTERMINATED_LITERAL_ERROR_ = JSC_CHECK_SYNTAX_RESULT_UNTERMINATED_LITERAL_ERROR,
  OUT_OF_MEMORY_ERROR_ = JSC_CHECK_SYNTAX_RESULT_OUT_OF_MEMORY_ERROR,
  STACK_OVERFLOW_ERROR_ = JSC_CHECK_SYNTAX_RESULT_STACK_OVERFLOW_ERROR,
};

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<JavaScriptCore::CheckSyntaxResult>
{ typedef JSCCheckSyntaxResult type; }; 
template<> struct declare_cpptype_of<JSCCheckSyntaxResult>
{ typedef JavaScriptCore::CheckSyntaxResult type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

enum class OptionType {
  BOOLEAN_ = JSC_OPTION_BOOLEAN,
  INT_ = JSC_OPTION_INT,
  UINT_ = JSC_OPTION_UINT,
  SIZE_ = JSC_OPTION_SIZE,
  DOUBLE_ = JSC_OPTION_DOUBLE,
  STRING_ = JSC_OPTION_STRING,
  RANGE_STRING_ = JSC_OPTION_RANGE_STRING,
};

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<JavaScriptCore::OptionType>
{ typedef JSCOptionType type; }; 
template<> struct declare_cpptype_of<JSCOptionType>
{ typedef JavaScriptCore::OptionType type; }; 


} // namespace repository

} // namespace gi


#endif
