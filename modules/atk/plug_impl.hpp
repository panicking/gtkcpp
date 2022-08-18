// AUTO-GENERATED

#ifndef _GI_ATK_PLUG_IMPL_HPP_
#define _GI_ATK_PLUG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

Atk::Component PlugBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

PlugBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }

// AtkObject* atk_plug_new ();
// ::AtkPlug* atk_plug_new ();
Atk::Plug base::PlugBase::new_ () noexcept
{
  typedef ::AtkPlug* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_plug_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* atk_plug_get_id (AtkPlug* plug);
// char* atk_plug_get_id (::AtkPlug* plug);
std::string base::PlugBase::get_id () noexcept
{
  typedef char* (*call_wrap_t) (::AtkPlug* plug);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_plug_get_id;
  auto _temp_ret = call_wrap_v ((::AtkPlug*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_plug_set_child (AtkPlug* plug, AtkObject* child);
// void atk_plug_set_child (::AtkPlug* plug, ::AtkObject* child);
void base::PlugBase::set_child (Atk::Object child) noexcept
{
  typedef void (*call_wrap_t) (::AtkPlug* plug, ::AtkObject* child);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_plug_set_child;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkPlug*) (gobj_()), (::AtkObject*) (child_to_c));
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/plug_extra_def_impl.hpp>)
#include <atk/plug_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/plug_extra_impl.hpp>)
#include <atk/plug_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void PlugClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkPlugClass *methods = (::AtkPlugClass *) class_struct;
  (void) methods;

  methods->get_object_id = (decltype (methods->get_object_id)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_object_id_>;
}

// gchar* Plug::get_object_id (AtkPlug* obj);
// char* Plug::get_object_id (::AtkPlug* obj);
std::string PlugClass::get_object_id_ () noexcept
{
  if (!get_struct_()->get_object_id) return std::string{};
  typedef char* (*call_wrap_t) (::AtkPlug* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_object_id;
  auto _temp_ret = call_wrap_v ((::AtkPlug*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
