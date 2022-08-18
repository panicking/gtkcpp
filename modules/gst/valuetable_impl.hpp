// AUTO-GENERATED

#ifndef _GI_GST_VALUETABLE_IMPL_HPP_
#define _GI_GST_VALUETABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static GType _field_type_get (const ::GstValueTable* obj) { return (GType) obj->type; }
// GType ValueTable::type (const ::GstValueTable* obj);
// GType ValueTable::type (const ::GstValueTable* obj);
GType base::ValueTableBase::type_ () const noexcept
{
  typedef GType (*call_wrap_t) (const ::GstValueTable* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstValueTable*) (gobj_()));
  return _temp_ret;
}

static void _field_type_set (::GstValueTable* obj, GType _value) { obj->type = (decltype(obj->type)) _value; }
//  ValueTable::type (::GstValueTable* obj, GType _value);
// void ValueTable::type (::GstValueTable* obj, GType _value);
void base::ValueTableBase::type_ (GType _value) noexcept
{
  typedef void (*call_wrap_t) (::GstValueTable* obj, GType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstValueTable*) (gobj_()), (GType) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/valuetable_extra_def_impl.hpp>)
#include <gst/valuetable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/valuetable_extra_impl.hpp>)
#include <gst/valuetable_extra_impl.hpp>
#endif
#endif

#endif
