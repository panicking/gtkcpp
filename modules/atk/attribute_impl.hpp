// AUTO-GENERATED

#ifndef _GI_ATK_ATTRIBUTE_IMPL_HPP_
#define _GI_ATK_ATTRIBUTE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

static char* _field_name_get (const ::AtkAttribute* obj) { return (char*) obj->name; }
// char* Attribute::name (const ::AtkAttribute* obj);
// char* Attribute::name (const ::AtkAttribute* obj);
std::string base::AttributeBase::name_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_name_get;
  auto _temp_ret = call_wrap_v ((const ::AtkAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static char* _field_value_get (const ::AtkAttribute* obj) { return (char*) obj->value; }
// char* Attribute::value (const ::AtkAttribute* obj);
// char* Attribute::value (const ::AtkAttribute* obj);
std::string base::AttributeBase::value_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::AtkAttribute* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_value_get;
  auto _temp_ret = call_wrap_v ((const ::AtkAttribute*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void atk_attribute_set_free ();
// void atk_attribute_set_free ();
// IGNORE; marked ignore, inconsistent list element info


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/attribute_extra_def_impl.hpp>)
#include <atk/attribute_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/attribute_extra_impl.hpp>)
#include <atk/attribute_extra_impl.hpp>
#endif
#endif

#endif
