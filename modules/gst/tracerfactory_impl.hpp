// AUTO-GENERATED

#ifndef _GI_GST_TRACERFACTORY_IMPL_HPP_
#define _GI_GST_TRACERFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GList* gst_tracer_factory_get_list ();
// ::GList* gst_tracer_factory_get_list ();
std::vector<Gst::TracerFactory> base::TracerFactoryBase::get_list () noexcept
{
  typedef ::GList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tracer_factory_get_list;
  auto _temp_ret = call_wrap_v ();
  return gi::detail::wrap_list<Gst::TracerFactory> (_temp_ret, gi::transfer_full);
}

// GType gst_tracer_factory_get_tracer_type (GstTracerFactory* factory);
// GType gst_tracer_factory_get_tracer_type (::GstTracerFactory* factory);
GType base::TracerFactoryBase::get_tracer_type () noexcept
{
  typedef GType (*call_wrap_t) (::GstTracerFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_tracer_factory_get_tracer_type;
  auto _temp_ret = call_wrap_v ((::GstTracerFactory*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/tracerfactory_extra_def_impl.hpp>)
#include <gst/tracerfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/tracerfactory_extra_impl.hpp>)
#include <gst/tracerfactory_extra_impl.hpp>
#endif
#endif

#endif
