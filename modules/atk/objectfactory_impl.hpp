// AUTO-GENERATED

#ifndef _GI_ATK_OBJECTFACTORY_IMPL_HPP_
#define _GI_ATK_OBJECTFACTORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

// AtkObject* atk_object_factory_create_accessible (AtkObjectFactory* factory, GObject* obj);
// ::AtkObject* atk_object_factory_create_accessible (::AtkObjectFactory* factory, ::GObject* obj);
Atk::Object base::ObjectFactoryBase::create_accessible (GObject::Object obj) noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::AtkObjectFactory* factory, ::GObject* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_factory_create_accessible;
  auto obj_to_c = gi::unwrap (obj, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::AtkObjectFactory*) (gobj_()), (::GObject*) (obj_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GType atk_object_factory_get_accessible_type (AtkObjectFactory* factory);
// GType atk_object_factory_get_accessible_type (::AtkObjectFactory* factory);
GType base::ObjectFactoryBase::get_accessible_type () noexcept
{
  typedef GType (*call_wrap_t) (::AtkObjectFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_factory_get_accessible_type;
  auto _temp_ret = call_wrap_v ((::AtkObjectFactory*) (gobj_()));
  return _temp_ret;
}

// void atk_object_factory_invalidate (AtkObjectFactory* factory);
// void atk_object_factory_invalidate (::AtkObjectFactory* factory);
void base::ObjectFactoryBase::invalidate () noexcept
{
  typedef void (*call_wrap_t) (::AtkObjectFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_object_factory_invalidate;
  call_wrap_v ((::AtkObjectFactory*) (gobj_()));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/objectfactory_extra_def_impl.hpp>)
#include <atk/objectfactory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/objectfactory_extra_impl.hpp>)
#include <atk/objectfactory_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void ObjectFactoryClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkObjectFactoryClass *methods = (::AtkObjectFactoryClass *) class_struct;
  (void) methods;

  methods->invalidate = (decltype (methods->invalidate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::invalidate_>;
}

// void ObjectFactory::invalidate (AtkObjectFactory* factory);
// void ObjectFactory::invalidate (::AtkObjectFactory* factory);
void ObjectFactoryClass::invalidate_ () noexcept
{
  if (!get_struct_()->invalidate) return ;
  typedef void (*call_wrap_t) (::AtkObjectFactory* factory);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->invalidate;
  call_wrap_v ((::AtkObjectFactory*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
