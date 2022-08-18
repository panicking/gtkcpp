// AUTO-GENERATED

#ifndef _GI_GIO_CREDENTIALS_IMPL_HPP_
#define _GI_GIO_CREDENTIALS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GCredentials* g_credentials_new ();
// ::GCredentials* g_credentials_new ();
Gio::Credentials base::CredentialsBase::new_ () noexcept
{
  typedef ::GCredentials* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gpointer g_credentials_get_native (GCredentials* credentials, GCredentialsType native_type);
// void* g_credentials_get_native (::GCredentials* credentials, ::GCredentialsType native_type);
gpointer base::CredentialsBase::get_native (Gio::CredentialsType native_type) noexcept
{
  typedef void* (*call_wrap_t) (::GCredentials* credentials, ::GCredentialsType native_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_get_native;
  auto native_type_to_c = gi::unwrap (native_type);
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), (::GCredentialsType) (native_type_to_c));
  return _temp_ret;
}

// pid_t g_credentials_get_unix_pid (GCredentials* credentials, GError ** error);
// gint g_credentials_get_unix_pid (::GCredentials* credentials, GError ** error);
gint base::CredentialsBase::get_unix_pid ()
{
  typedef gint (*call_wrap_t) (::GCredentials* credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_get_unix_pid;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gint base::CredentialsBase::get_unix_pid (GLib::Error * _error) noexcept
{
  typedef gint (*call_wrap_t) (::GCredentials* credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_get_unix_pid;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// uid_t g_credentials_get_unix_user (GCredentials* credentials, GError ** error);
// guint g_credentials_get_unix_user (::GCredentials* credentials, GError ** error);
guint base::CredentialsBase::get_unix_user ()
{
  typedef guint (*call_wrap_t) (::GCredentials* credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_get_unix_user;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
guint base::CredentialsBase::get_unix_user (GLib::Error * _error) noexcept
{
  typedef guint (*call_wrap_t) (::GCredentials* credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_get_unix_user;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_credentials_is_same_user (GCredentials* credentials, GCredentials* other_credentials, GError ** error);
// gboolean g_credentials_is_same_user (::GCredentials* credentials, ::GCredentials* other_credentials, GError ** error);
bool base::CredentialsBase::is_same_user (Gio::Credentials other_credentials)
{
  typedef gboolean (*call_wrap_t) (::GCredentials* credentials, ::GCredentials* other_credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_is_same_user;
  auto other_credentials_to_c = gi::unwrap (other_credentials, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), (::GCredentials*) (other_credentials_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CredentialsBase::is_same_user (Gio::Credentials other_credentials, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GCredentials* credentials, ::GCredentials* other_credentials, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_is_same_user;
  auto other_credentials_to_c = gi::unwrap (other_credentials, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), (::GCredentials*) (other_credentials_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_credentials_set_native (GCredentials* credentials, GCredentialsType native_type, gpointer native);
// void g_credentials_set_native (::GCredentials* credentials, ::GCredentialsType native_type, void* native);
void base::CredentialsBase::set_native (Gio::CredentialsType native_type, void* native) noexcept
{
  typedef void (*call_wrap_t) (::GCredentials* credentials, ::GCredentialsType native_type, void* native);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_set_native;
  auto native_to_c = native;
  auto native_type_to_c = gi::unwrap (native_type);
  call_wrap_v ((::GCredentials*) (gobj_()), (::GCredentialsType) (native_type_to_c), (void*) (native_to_c));
}

// gboolean g_credentials_set_unix_user (GCredentials* credentials, uid_t uid, GError ** error);
// gboolean g_credentials_set_unix_user (::GCredentials* credentials, guint uid, GError ** error);
bool base::CredentialsBase::set_unix_user (guint uid)
{
  typedef gboolean (*call_wrap_t) (::GCredentials* credentials, guint uid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_set_unix_user;
  auto uid_to_c = uid;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), (guint) (uid_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CredentialsBase::set_unix_user (guint uid, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GCredentials* credentials, guint uid, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_set_unix_user;
  auto uid_to_c = uid;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()), (guint) (uid_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gchar* g_credentials_to_string (GCredentials* credentials);
// char* g_credentials_to_string (::GCredentials* credentials);
std::string base::CredentialsBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::GCredentials* credentials);
  call_wrap_t call_wrap_v = (call_wrap_t) g_credentials_to_string;
  auto _temp_ret = call_wrap_v ((::GCredentials*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/credentials_extra_def_impl.hpp>)
#include <gio/credentials_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/credentials_extra_impl.hpp>)
#include <gio/credentials_extra_impl.hpp>
#endif
#endif

#endif
