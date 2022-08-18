// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINSTANCE_IMPL_HPP_
#define _GI_GOBJECT_TYPEINSTANCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// gpointer g_type_instance_get_private (GTypeInstance* instance, GType private_type);
// void* g_type_instance_get_private (::GTypeInstance* instance, GType private_type);
gpointer base::TypeInstanceBase::get_private (GType private_type) noexcept
{
  typedef void* (*call_wrap_t) (::GTypeInstance* instance, GType private_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_instance_get_private;
  auto private_type_to_c = private_type;
  auto _temp_ret = call_wrap_v ((::GTypeInstance*) (gobj_()), (GType) (private_type_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra_def_impl.hpp>)
#include <gobject/typeinstance_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinstance_extra_impl.hpp>)
#include <gobject/typeinstance_extra_impl.hpp>
#endif
#endif

#endif
