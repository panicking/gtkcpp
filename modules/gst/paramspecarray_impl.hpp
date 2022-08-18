// AUTO-GENERATED

#ifndef _GI_GST_PARAMSPECARRAY_IMPL_HPP_
#define _GI_GST_PARAMSPECARRAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GParamSpec* _field_element_spec_get (const ::GstParamSpecArray* obj) { return (::GParamSpec*) obj->element_spec; }
// ::GParamSpec* ParamSpecArray::element_spec (const ::GstParamSpecArray* obj);
// ::GParamSpec* ParamSpecArray::element_spec (const ::GstParamSpecArray* obj);
GObject::ParamSpec base::ParamSpecArrayBase::element_spec_ () const noexcept
{
  typedef ::GParamSpec* (*call_wrap_t) (const ::GstParamSpecArray* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_element_spec_get;
  auto _temp_ret = call_wrap_v ((const ::GstParamSpecArray*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/paramspecarray_extra_def_impl.hpp>)
#include <gst/paramspecarray_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/paramspecarray_extra_impl.hpp>)
#include <gst/paramspecarray_extra_impl.hpp>
#endif
#endif

#endif
