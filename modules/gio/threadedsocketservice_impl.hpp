// AUTO-GENERATED

#ifndef _GI_GIO_THREADEDSOCKETSERVICE_IMPL_HPP_
#define _GI_GIO_THREADEDSOCKETSERVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSocketService* g_threaded_socket_service_new (int max_threads);
// ::GThreadedSocketService* g_threaded_socket_service_new (gint max_threads);
Gio::ThreadedSocketService base::ThreadedSocketServiceBase::new_ (gint max_threads) noexcept
{
  typedef ::GThreadedSocketService* (*call_wrap_t) (gint max_threads);
  call_wrap_t call_wrap_v = (call_wrap_t) g_threaded_socket_service_new;
  auto max_threads_to_c = max_threads;
  auto _temp_ret = call_wrap_v ((gint) (max_threads_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/threadedsocketservice_extra_def_impl.hpp>)
#include <gio/threadedsocketservice_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/threadedsocketservice_extra_impl.hpp>)
#include <gio/threadedsocketservice_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ThreadedSocketServiceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GThreadedSocketServiceClass *methods = (::GThreadedSocketServiceClass *) class_struct;
  (void) methods;

  methods->run = (decltype (methods->run)) detail::method_wrapper<self, bool (*) (Gio::SocketConnection connection, GObject::Object source_object), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::run_>;
}

// gboolean ThreadedSocketService::run (GThreadedSocketService* service, GSocketConnection* connection, GObject* source_object);
// gboolean ThreadedSocketService::run (::GThreadedSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
bool ThreadedSocketServiceClass::run_ (Gio::SocketConnection connection, GObject::Object source_object) noexcept
{
  if (!get_struct_()->run) return bool{};
  typedef gboolean (*call_wrap_t) (::GThreadedSocketService* service, ::GSocketConnection* connection, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GThreadedSocketService*) (gobj_()), (::GSocketConnection*) (connection_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
