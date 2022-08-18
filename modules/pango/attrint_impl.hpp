// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRINT_IMPL_HPP_
#define _GI_PANGO_ATTRINT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static gint _field_value_get (const ::PangoAttrInt* obj) { return (gint) obj->value; }
// gint AttrInt::value (const ::PangoAttrInt* obj);
// gint AttrInt::value (const ::PangoAttrInt* obj);
gint base::AttrIntBase::value_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::PangoAttrInt* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrInt*) (gobj_()));
  return _temp_ret;
}

static void _field_value_set (::PangoAttrInt* obj, gint _value) { obj->value = (decltype(obj->value)) _value; }
//  AttrInt::value (::PangoAttrInt* obj, gint _value);
// void AttrInt::value (::PangoAttrInt* obj, gint _value);
void base::AttrIntBase::value_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrInt* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_set;
  auto _value_to_c = _value;
  call_wrap_v ((::PangoAttrInt*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrint_extra_def_impl.hpp>)
#include <pango/attrint_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrint_extra_impl.hpp>)
#include <pango/attrint_extra_impl.hpp>
#endif
#endif

#endif
