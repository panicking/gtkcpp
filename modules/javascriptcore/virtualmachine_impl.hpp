// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_VIRTUALMACHINE_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_VIRTUALMACHINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

// JSCVirtualMachine* jsc_virtual_machine_new ();
// ::JSCVirtualMachine* jsc_virtual_machine_new ();
JavaScriptCore::VirtualMachine base::VirtualMachineBase::new_ () noexcept
{
  typedef ::JSCVirtualMachine* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_virtual_machine_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/virtualmachine_extra_def_impl.hpp>)
#include <javascriptcore/virtualmachine_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/virtualmachine_extra_impl.hpp>)
#include <javascriptcore/virtualmachine_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {

void VirtualMachineClassDef::class_init (gpointer class_struct, gpointer )
{
  ::JSCVirtualMachineClass *methods = (::JSCVirtualMachineClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
