// AUTO-GENERATED

#ifndef _GI_ATK_NOOPOBJECTFACTORY_IMPL_HPP_
#define _GI_ATK_NOOPOBJECTFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkObjectFactory* atk_no_op_object_factory_new ();
// ::AtkNoOpObjectFactory* atk_no_op_object_factory_new ();
Atk::NoOpObjectFactory base::NoOpObjectFactoryBase::new_ () noexcept
{
  typedef ::AtkNoOpObjectFactory* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_no_op_object_factory_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/noopobjectfactory_extra_def_impl.hpp>)
#include <atk/noopobjectfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/noopobjectfactory_extra_impl.hpp>)
#include <atk/noopobjectfactory_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void NoOpObjectFactoryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkNoOpObjectFactoryClass *methods = (::AtkNoOpObjectFactoryClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
