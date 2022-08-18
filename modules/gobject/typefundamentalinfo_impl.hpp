// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEFUNDAMENTALINFO_IMPL_HPP_
#define _GI_GOBJECT_TYPEFUNDAMENTALINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

static ::GTypeFundamentalFlags _field_type_flags_get (const ::GTypeFundamentalInfo* obj) { return (::GTypeFundamentalFlags) obj->type_flags; }
// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj);
// ::GTypeFundamentalFlags TypeFundamentalInfo::type_flags (const ::GTypeFundamentalInfo* obj);
GObject::TypeFundamentalFlags base::TypeFundamentalInfoBase::type_flags_ () const noexcept
{
  typedef ::GTypeFundamentalFlags (*call_wrap_t) (const ::GTypeFundamentalInfo* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_flags_get;
  auto _temp_ret = call_wrap_v ((const ::GTypeFundamentalInfo*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_flags_set (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value) { obj->type_flags = (decltype(obj->type_flags)) _value; }
//  TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value);
// void TypeFundamentalInfo::type_flags (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value);
void base::TypeFundamentalInfoBase::type_flags_ (GObject::TypeFundamentalFlags _value) noexcept
{
  typedef void (*call_wrap_t) (::GTypeFundamentalInfo* obj, ::GTypeFundamentalFlags _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_flags_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GTypeFundamentalInfo*) (gobj_()), (::GTypeFundamentalFlags) (_value_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra_def_impl.hpp>)
#include <gobject/typefundamentalinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typefundamentalinfo_extra_impl.hpp>)
#include <gobject/typefundamentalinfo_extra_impl.hpp>
#endif
#endif

#endif
