// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRCLASS_IMPL_HPP_
#define _GI_PANGO_ATTRCLASS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static ::PangoAttrType _field_type_get (const ::PangoAttrClass* obj) { return (::PangoAttrType) obj->type; }
// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj);
// ::PangoAttrType AttrClass::type (const ::PangoAttrClass* obj);
Pango::AttrType base::AttrClassBase::type_ () const noexcept
{
  typedef ::PangoAttrType (*call_wrap_t) (const ::PangoAttrClass* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrClass*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::PangoAttrClass* obj, ::PangoAttrType _value) { obj->type = (decltype(obj->type)) _value; }
//  AttrClass::type (::PangoAttrClass* obj, ::PangoAttrType _value);
// void AttrClass::type (::PangoAttrClass* obj, ::PangoAttrType _value);
void base::AttrClassBase::type_ (Pango::AttrType _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrClass* obj, ::PangoAttrType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::PangoAttrClass*) (gobj_()), (::PangoAttrType) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra_def_impl.hpp>)
#include <pango/attrclass_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrclass_extra_impl.hpp>)
#include <pango/attrclass_extra_impl.hpp>
#endif
#endif

#endif
