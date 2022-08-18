// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRSTRING_IMPL_HPP_
#define _GI_PANGO_ATTRSTRING_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

static char* _field_value_get (const ::PangoAttrString* obj) { return (char*) obj->value; }
// char* AttrString::value (const ::PangoAttrString* obj);
// char* AttrString::value (const ::PangoAttrString* obj);
std::string base::AttrStringBase::value_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::PangoAttrString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::PangoAttrString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrstring_extra_def_impl.hpp>)
#include <pango/attrstring_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrstring_extra_impl.hpp>)
#include <pango/attrstring_extra_impl.hpp>
#endif
#endif

#endif
