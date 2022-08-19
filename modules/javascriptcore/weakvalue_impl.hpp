// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_WEAKVALUE_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_WEAKVALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

// JSCWeakValue* jsc_weak_value_new (JSCValue* value);
// ::JSCWeakValue* jsc_weak_value_new (::JSCValue* value);
JavaScriptCore::WeakValue base::WeakValueBase::new_ (JavaScriptCore::Value value) noexcept
{
  typedef ::JSCWeakValue* (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_weak_value_new;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_weak_value_get_value (JSCWeakValue* weak_value);
// ::JSCValue* jsc_weak_value_get_value (::JSCWeakValue* weak_value);
JavaScriptCore::Value base::WeakValueBase::get_value () noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCWeakValue* weak_value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_weak_value_get_value;
  auto _temp_ret = call_wrap_v ((::JSCWeakValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/weakvalue_extra_def_impl.hpp>)
#include <javascriptcore/weakvalue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/weakvalue_extra_impl.hpp>)
#include <javascriptcore/weakvalue_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {

void WeakValueClassDef::class_init (gpointer class_struct, gpointer )
{
  ::JSCWeakValueClass *methods = (::JSCWeakValueClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
