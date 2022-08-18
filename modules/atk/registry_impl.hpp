// AUTO-GENERATED

#ifndef _GI_ATK_REGISTRY_IMPL_HPP_
#define _GI_ATK_REGISTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkObjectFactory* atk_registry_get_factory (AtkRegistry* registry, GType type);
// ::AtkObjectFactory* atk_registry_get_factory (::AtkRegistry* registry, GType type);
Atk::ObjectFactory base::RegistryBase::get_factory (GType type) noexcept
{
  typedef ::AtkObjectFactory* (*call_wrap_t) (::AtkRegistry* registry, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_registry_get_factory;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::AtkRegistry*) (gobj_()), (GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GType atk_registry_get_factory_type (AtkRegistry* registry, GType type);
// GType atk_registry_get_factory_type (::AtkRegistry* registry, GType type);
GType base::RegistryBase::get_factory_type (GType type) noexcept
{
  typedef GType (*call_wrap_t) (::AtkRegistry* registry, GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_registry_get_factory_type;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((::AtkRegistry*) (gobj_()), (GType) (type_to_c));
  return _temp_ret;
}

// void atk_registry_set_factory_type (AtkRegistry* registry, GType type, GType factory_type);
// void atk_registry_set_factory_type (::AtkRegistry* registry, GType type, GType factory_type);
void base::RegistryBase::set_factory_type (GType type, GType factory_type) noexcept
{
  typedef void (*call_wrap_t) (::AtkRegistry* registry, GType type, GType factory_type);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_registry_set_factory_type;
  auto factory_type_to_c = factory_type;
  auto type_to_c = type;
  call_wrap_v ((::AtkRegistry*) (gobj_()), (GType) (type_to_c), (GType) (factory_type_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/registry_extra_def_impl.hpp>)
#include <atk/registry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/registry_extra_impl.hpp>)
#include <atk/registry_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void RegistryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkRegistryClass *methods = (::AtkRegistryClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
