// AUTO-GENERATED

#ifndef _GI_GIO_SOCKETSERVICE_IMPL_HPP_
#define _GI_GIO_SOCKETSERVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketService* g_socket_service_new ();
// ::GSocketService* g_socket_service_new ();
Gio::SocketService base::SocketServiceBase::new_ () noexcept
{
  typedef ::GSocketService* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_service_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_socket_service_is_active (GSocketService* service);
// gboolean g_socket_service_is_active (::GSocketService* service);
bool base::SocketServiceBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSocketService* service);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_service_is_active;
  auto _temp_ret = call_wrap_v ((::GSocketService*) (gobj_()));
  return _temp_ret;
}

// void g_socket_service_start (GSocketService* service);
// void g_socket_service_start (::GSocketService* service);
void base::SocketServiceBase::start () noexcept
{
  typedef void (*call_wrap_t) (::GSocketService* service);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_service_start;
  call_wrap_v ((::GSocketService*) (gobj_()));
}

// void g_socket_service_stop (GSocketService* service);
// void g_socket_service_stop (::GSocketService* service);
void base::SocketServiceBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GSocketService* service);
  call_wrap_t call_wrap_v = (call_wrap_t) g_socket_service_stop;
  call_wrap_v ((::GSocketService*) (gobj_()));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/socketservice_extra_def_impl.hpp>)
#include <gio/socketservice_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/socketservice_extra_impl.hpp>)
#include <gio/socketservice_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SocketServiceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSocketServiceClass *methods = (::GSocketServiceClass *) class_struct;
  (void) methods;

  methods->incoming = (decltype (methods->incoming)) detail::method_wrapper<self, bool (*) (Gio::SocketConnection connection, GObject::Object source_object), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::incoming_>;
}

// gboolean SocketService::incoming (GSocketService* service, GSocketConnection* connection, GObject* source_object);
// gboolean SocketService::incoming (::GSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
bool SocketServiceClass::incoming_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept
{
  if (!get_struct_()->incoming) return bool{};
  typedef gboolean (*call_wrap_t) (::GSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->incoming;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSocketService*) (gobj_()), (::GSocketConnection*) (connection_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
