// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRFLOAT_IMPL_HPP_
#define _GI_PANGO_ATTRFLOAT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static gdouble _field_value_get (const ::PangoAttrFloat* obj) { return (gdouble) obj->value; }
// gdouble AttrFloat::value (const ::PangoAttrFloat* obj);
// gdouble AttrFloat::value (const ::PangoAttrFloat* obj);
gdouble base::AttrFloatBase::value_ () const noexcept
{
  typedef gdouble (*call_wrap_t) (const ::PangoAttrFloat* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrFloat*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::PangoAttrFloat* obj, gdouble _value) { obj->value = (decltype(obj->value)) _value; }
//  AttrFloat::value (::PangoAttrFloat* obj, gdouble _value);
// void AttrFloat::value (::PangoAttrFloat* obj, gdouble _value);
void base::AttrFloatBase::value_ (gdouble _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrFloat* obj, gdouble _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttrFloat*) (gobj_()), (gdouble) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrfloat_extra_def_impl.hpp>)
#include <pango/attrfloat_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrfloat_extra_impl.hpp>)
#include <pango/attrfloat_extra_impl.hpp>
#endif
#endif

#endif
