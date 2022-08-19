// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_CLASSVTABLE_HPP_
#define _GI_JAVASCRIPTCORE_CLASSVTABLE_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {


class ClassVTable;

namespace base {


#define GI_JAVASCRIPTCORE_CLASSVTABLE_BASE base::ClassVTableBase
class ClassVTableBase : public gi::detail::CBoxedWrapper<ClassVTableBase, ::JSCClassVTable>
{
typedef gi::detail::CBoxedWrapper<ClassVTableBase, ::JSCClassVTable> super_type;
public:

ClassVTableBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/classvtable_extra_def.hpp>)
#include <javascriptcore/classvtable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/classvtable_extra.hpp>)
#include <javascriptcore/classvtable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class ClassVTable : public GI_JAVASCRIPTCORE_CLASSVTABLE_BASE
{ typedef GI_JAVASCRIPTCORE_CLASSVTABLE_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCClassVTable>
{ typedef JavaScriptCore::ClassVTable type; }; 

} // namespace repository

} // namespace gi

#endif
