// AUTO-GENERATED

#ifndef _GI_ATK_SOCKET_IMPL_HPP_
#define _GI_ATK_SOCKET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Atk {

namespace base {

Atk::Component SocketBase::interface_ (gi::interface_tag<Atk::Component>)
{ return gi::wrap ((Atk::Component::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SocketBase::operator Atk::Component ()
{ return interface_ (gi::interface_tag<Atk::Component>()); }

// AtkObject* atk_socket_new ();
// ::AtkSocket* atk_socket_new ();
Atk::Socket base::SocketBase::new_ () noexcept
{
  typedef ::AtkSocket* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) atk_socket_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void atk_socket_embed (AtkSocket* obj, const gchar* plug_id);
// void atk_socket_embed (::AtkSocket* obj, const char* plug_id);
void base::SocketBase::embed (const std::string & plug_id) noexcept
{
  typedef void (*call_wrap_t) (::AtkSocket* obj, const char* plug_id);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_socket_embed;
  auto plug_id_to_c = gi::unwrap (plug_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkSocket*) (gobj_()), (const char*) (plug_id_to_c));
}

// gboolean atk_socket_is_occupied (AtkSocket* obj);
// gboolean atk_socket_is_occupied (::AtkSocket* obj);
bool base::SocketBase::is_occupied () noexcept
{
  typedef gboolean (*call_wrap_t) (::AtkSocket* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) atk_socket_is_occupied;
  auto _temp_ret = call_wrap_v ((::AtkSocket*) (gobj_()));
  return _temp_ret;
}


} // namespace base

} // namespace Atk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<atk/socket_extra_def_impl.hpp>)
#include <atk/socket_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<atk/socket_extra_impl.hpp>)
#include <atk/socket_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Atk {

namespace impl {

namespace internal {

void SocketClassDef::class_init (gpointer class_struct, gpointer )
{
  ::AtkSocketClass *methods = (::AtkSocketClass *) class_struct;
  (void) methods;

  methods->embed = (decltype (methods->embed)) detail::method_wrapper<self, void (*) (const std::string & plug_id), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::embed_>;
}

// void Socket::embed (AtkSocket* obj, const gchar* plug_id);
// void Socket::embed (::AtkSocket* obj, const char* plug_id);
void SocketClass::embed_ (const std::string & plug_id) noexcept
{
  if (!get_struct_()->embed) return ;
  typedef void (*call_wrap_t) (::AtkSocket* obj, const char* plug_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->embed;
  auto plug_id_to_c = gi::unwrap (plug_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::AtkSocket*) (gobj_()), (const char*) (plug_id_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Atk

} // namespace repository

} // namespace gi

#endif
