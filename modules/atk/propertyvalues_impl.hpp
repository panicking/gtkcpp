// AUTO-GENERATED

#ifndef _GI_ATK_PROPERTYVALUES_IMPL_HPP_
#define _GI_ATK_PROPERTYVALUES_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static const char* _field_property_name_get (const ::AtkPropertyValues* obj) { return (const char*) obj->property_name; }
// const char* PropertyValues::property_name (const ::AtkPropertyValues* obj);
// const char* PropertyValues::property_name (const ::AtkPropertyValues* obj);
std::string base::PropertyValuesBase::property_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::AtkPropertyValues* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_property_name_get;
  auto _temp_ret = call_wrap_v ((const ::AtkPropertyValues*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/propertyvalues_extra_def_impl.hpp>)
#include <atk/propertyvalues_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/propertyvalues_extra_impl.hpp>)
#include <atk/propertyvalues_extra_impl.hpp>
#endif
#endif

#endif
