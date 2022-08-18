// AUTO-GENERATED

#ifndef _GI_ATK_GOBJECTACCESSIBLE_IMPL_HPP_
#define _GI_ATK_GOBJECTACCESSIBLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkObject* atk_gobject_accessible_for_object (GObject* obj);
// ::AtkObject* atk_gobject_accessible_for_object (::GObject* obj);
Atk::Object base::GObjectAccessibleBase::for_object (GObject::Object obj) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::GObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_gobject_accessible_for_object;
  auto obj_to_c = gi::unwrap (obj, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (obj_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GObject* atk_gobject_accessible_get_object (AtkGObjectAccessible* obj);
// ::GObject* atk_gobject_accessible_get_object (::AtkGObjectAccessible* obj);
GObject::Object base::GObjectAccessibleBase::get_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::AtkGObjectAccessible* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_gobject_accessible_get_object;
  auto _temp_ret = call_wrap_v ((::AtkGObjectAccessible*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/gobjectaccessible_extra_def_impl.hpp>)
#include <atk/gobjectaccessible_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/gobjectaccessible_extra_impl.hpp>)
#include <atk/gobjectaccessible_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void GObjectAccessibleClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkGObjectAccessibleClass *methods = (::AtkGObjectAccessibleClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
