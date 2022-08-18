// AUTO-GENERATED

#ifndef _GI_GIO_DBUSAUTHOBSERVER_IMPL_HPP_
#define _GI_GIO_DBUSAUTHOBSERVER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusAuthObserver* g_dbus_auth_observer_new ();
// ::GDBusAuthObserver* g_dbus_auth_observer_new ();
Gio::DBusAuthObserver base::DBusAuthObserverBase::new_ () noexcept
{
  typedef ::GDBusAuthObserver* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_auth_observer_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_dbus_auth_observer_allow_mechanism (GDBusAuthObserver* observer, const gchar* mechanism);
// gboolean g_dbus_auth_observer_allow_mechanism (::GDBusAuthObserver* observer, const char* mechanism);
bool base::DBusAuthObserverBase::allow_mechanism (const std::string & mechanism) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusAuthObserver* observer, const char* mechanism);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_auth_observer_allow_mechanism;
  auto mechanism_to_c = gi::unwrap (mechanism, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusAuthObserver*) (gobj_()), (const char*) (mechanism_to_c));
  return _temp_ret;
}

// gboolean g_dbus_auth_observer_authorize_authenticated_peer (GDBusAuthObserver* observer, GIOStream* stream, GCredentials* credentials);
// gboolean g_dbus_auth_observer_authorize_authenticated_peer (::GDBusAuthObserver* observer, ::GIOStream* stream, ::GCredentials* credentials);
bool base::DBusAuthObserverBase::authorize_authenticated_peer (Gio::IOStream stream, Gio::Credentials credentials) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusAuthObserver* observer, ::GIOStream* stream, ::GCredentials* credentials);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_auth_observer_authorize_authenticated_peer;
  auto credentials_to_c = gi::unwrap (credentials, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusAuthObserver*) (gobj_()), (::GIOStream*) (stream_to_c), (::GCredentials*) (credentials_to_c));
  return _temp_ret;
}
bool base::DBusAuthObserverBase::authorize_authenticated_peer (Gio::IOStream stream) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusAuthObserver* observer, ::GIOStream* stream, ::GCredentials* credentials);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_auth_observer_authorize_authenticated_peer;
  auto credentials_to_c = nullptr;
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusAuthObserver*) (gobj_()), (::GIOStream*) (stream_to_c), (::GCredentials*) (credentials_to_c));
  return _temp_ret;
}




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusauthobserver_extra_def_impl.hpp>)
#include <gio/dbusauthobserver_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusauthobserver_extra_impl.hpp>)
#include <gio/dbusauthobserver_extra_impl.hpp>
#endif
#endif

#endif
