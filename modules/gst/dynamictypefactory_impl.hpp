// AUTO-GENERATED

#ifndef _GI_GST_DYNAMICTYPEFACTORY_IMPL_HPP_
#define _GI_GST_DYNAMICTYPEFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GType gst_dynamic_type_factory_load (const gchar* factoryname);
// GType gst_dynamic_type_factory_load (const char* factoryname);
GType base::DynamicTypeFactoryBase::load (const std::string & factoryname) noexcept
{
  typedef GType (*call_wrap_t) (const char* factoryname);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_dynamic_type_factory_load;
  auto factoryname_to_c = gi::unwrap (factoryname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (factoryname_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/dynamictypefactory_extra_def_impl.hpp>)
#include <gst/dynamictypefactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/dynamictypefactory_extra_impl.hpp>)
#include <gst/dynamictypefactory_extra_impl.hpp>
#endif
#endif

#endif
