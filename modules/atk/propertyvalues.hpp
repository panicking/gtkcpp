// AUTO-GENERATED

#ifndef _GI_ATK_PROPERTYVALUES_HPP_
#define _GI_ATK_PROPERTYVALUES_HPP_


namespace gi {

namespace repository {

namespace Atk {


class PropertyValues;

namespace base {


#define GI_ATK_PROPERTYVALUES_BASE base::PropertyValuesBase
class PropertyValuesBase : public gi::detail::CBoxedWrapper<PropertyValuesBase, ::AtkPropertyValues>
{
typedef gi::detail::CBoxedWrapper<PropertyValuesBase, ::AtkPropertyValues> super_type;
public:

PropertyValuesBase (std::nullptr_t = nullptr) : super_type() {}

// const char* PropertyValues::property_name (const ::AtkPropertyValues* obj);
// const char* PropertyValues::property_name (const ::AtkPropertyValues* obj);
GI_INLINE_DECL std::string property_name_ () const noexcept;

}; // class

} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/propertyvalues_extra_def.hpp>)
#include <atk/propertyvalues_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/propertyvalues_extra.hpp>)
#include <atk/propertyvalues_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

class PropertyValues : public GI_ATK_PROPERTYVALUES_BASE
{ typedef GI_ATK_PROPERTYVALUES_BASE super_type; using super_type::super_type; };

} // namespace Atk

template<> struct declare_cpptype_of<::AtkPropertyValues>
{ typedef Atk::PropertyValues type; }; 

} // namespace repository

} // namespace gi

#endif
