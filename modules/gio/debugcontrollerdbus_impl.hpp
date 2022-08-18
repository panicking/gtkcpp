// AUTO-GENERATED

#ifndef _GI_GIO_DEBUGCONTROLLERDBUS_IMPL_HPP_
#define _GI_GIO_DEBUGCONTROLLERDBUS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::DebugController DebugControllerDBusBase::interface_ (gi::interface_tag<Gio::DebugController>)
{ return gi::wrap ((Gio::DebugController::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DebugControllerDBusBase::operator Gio::DebugController ()
{ return interface_ (gi::interface_tag<Gio::DebugController>()); }

Gio::Initable DebugControllerDBusBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

DebugControllerDBusBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GDebugControllerDBus* g_debug_controller_dbus_new (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// ::GDebugControllerDBus* g_debug_controller_dbus_new (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
Gio::DebugControllerDBus base::DebugControllerDBusBase::new_ (Gio::DBusConnection connection, Gio::Cancellable cancellable)
{
  typedef ::GDebugControllerDBus* (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_dbus_new;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DebugControllerDBus base::DebugControllerDBusBase::new_ (Gio::DBusConnection connection)
{
  typedef ::GDebugControllerDBus* (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_dbus_new;
  auto cancellable_to_c = nullptr;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DebugControllerDBus base::DebugControllerDBusBase::new_ (Gio::DBusConnection connection, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GDebugControllerDBus* (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_dbus_new;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DebugControllerDBus base::DebugControllerDBusBase::new_ (Gio::DBusConnection connection, GLib::Error * _error) noexcept
{
  typedef ::GDebugControllerDBus* (*call_wrap_t) (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_dbus_new;
  auto cancellable_to_c = nullptr;
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusConnection*) (connection_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_debug_controller_dbus_stop (GDebugControllerDBus* self);
// void g_debug_controller_dbus_stop (::GDebugControllerDBus* self);
void base::DebugControllerDBusBase::stop () noexcept
{
  typedef void (*call_wrap_t) (::GDebugControllerDBus* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_debug_controller_dbus_stop;
  call_wrap_v ((::GDebugControllerDBus*) (gobj_()));
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/debugcontrollerdbus_extra_def_impl.hpp>)
#include <gio/debugcontrollerdbus_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/debugcontrollerdbus_extra_impl.hpp>)
#include <gio/debugcontrollerdbus_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void DebugControllerDBusClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GDebugControllerDBusClass *methods = (::GDebugControllerDBusClass *) class_struct;
  (void) methods;

  methods->authorize = (decltype (methods->authorize)) detail::method_wrapper<self, bool (*) (Gio::DBusMethodInvocation invocation), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::authorize_>;
}

// gboolean DebugControllerDBus::authorize (GDebugControllerDBus* controller, GDBusMethodInvocation* invocation);
// gboolean DebugControllerDBus::authorize (::GDebugControllerDBus* controller, ::GDBusMethodInvocation* invocation);
bool DebugControllerDBusClass::authorize_ (Gio::DBusMethodInvocation invocation) noexcept
{
  if (!get_struct_()->authorize) return bool{};
  typedef gboolean (*call_wrap_t) (::GDebugControllerDBus* controller, ::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authorize;
  auto invocation_to_c = gi::unwrap (invocation, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDebugControllerDBus*) (gobj_()), (::GDBusMethodInvocation*) (invocation_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
