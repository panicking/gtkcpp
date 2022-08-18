// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINVOCATION_IMPL_HPP_
#define _GI_GIO_DBUSMETHODINVOCATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusConnection* g_dbus_method_invocation_get_connection (GDBusMethodInvocation* invocation);
// ::GDBusConnection* g_dbus_method_invocation_get_connection (::GDBusMethodInvocation* invocation);
Gio::DBusConnection base::DBusMethodInvocationBase::get_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_connection;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_method_invocation_get_interface_name (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_interface_name (::GDBusMethodInvocation* invocation);
std::string base::DBusMethodInvocationBase::get_interface_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_interface_name;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusMessage* g_dbus_method_invocation_get_message (GDBusMethodInvocation* invocation);
// ::GDBusMessage* g_dbus_method_invocation_get_message (::GDBusMethodInvocation* invocation);
Gio::DBusMessage base::DBusMethodInvocationBase::get_message () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_message;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GDBusMethodInfo* g_dbus_method_invocation_get_method_info (GDBusMethodInvocation* invocation);
// const ::GDBusMethodInfo* g_dbus_method_invocation_get_method_info (::GDBusMethodInvocation* invocation);
Gio::DBusMethodInfo base::DBusMethodInvocationBase::get_method_info () noexcept
{
  typedef const ::GDBusMethodInfo* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_method_info;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_method_invocation_get_method_name (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_method_name (::GDBusMethodInvocation* invocation);
std::string base::DBusMethodInvocationBase::get_method_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_method_name;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_method_invocation_get_object_path (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_object_path (::GDBusMethodInvocation* invocation);
std::string base::DBusMethodInvocationBase::get_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_object_path;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_dbus_method_invocation_get_parameters (GDBusMethodInvocation* invocation);
// ::GVariant* g_dbus_method_invocation_get_parameters (::GDBusMethodInvocation* invocation);
GLib::Variant base::DBusMethodInvocationBase::get_parameters () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_parameters;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GDBusPropertyInfo* g_dbus_method_invocation_get_property_info (GDBusMethodInvocation* invocation);
// const ::GDBusPropertyInfo* g_dbus_method_invocation_get_property_info (::GDBusMethodInvocation* invocation);
Gio::DBusPropertyInfo base::DBusMethodInvocationBase::get_property_info () noexcept
{
  typedef const ::GDBusPropertyInfo* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_property_info;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_method_invocation_get_sender (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_sender (::GDBusMethodInvocation* invocation);
std::string base::DBusMethodInvocationBase::get_sender () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_sender;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer g_dbus_method_invocation_get_user_data (GDBusMethodInvocation* invocation);
// void* g_dbus_method_invocation_get_user_data (::GDBusMethodInvocation* invocation);
gpointer base::DBusMethodInvocationBase::get_user_data () noexcept
{
  typedef void* (*call_wrap_t) (::GDBusMethodInvocation* invocation);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_get_user_data;
  auto _temp_ret = call_wrap_v ((::GDBusMethodInvocation*) (gobj_()));
  return _temp_ret;
}

// void g_dbus_method_invocation_return_dbus_error (GDBusMethodInvocation* invocation, const gchar* error_name, const gchar* error_message);
// void g_dbus_method_invocation_return_dbus_error (::GDBusMethodInvocation* invocation, const char* error_name, const char* error_message);
void base::DBusMethodInvocationBase::return_dbus_error (const std::string & error_name, const std::string & error_message) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, const char* error_name, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_dbus_error;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none, gi::direction_in);
  auto error_name_to_c = gi::unwrap (error_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (const char*) (error_name_to_c), (const char*) (error_message_to_c));
}

// void g_dbus_method_invocation_return_error (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* format);
// void g_dbus_method_invocation_return_error (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_method_invocation_return_error_literal (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* message);
// void g_dbus_method_invocation_return_error_literal (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* message);
void base::DBusMethodInvocationBase::return_error_literal (::GQuark domain, gint code, const std::string & message) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_error_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto code_to_c = code;
  auto domain_to_c = domain;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GQuark) (domain_to_c), (gint) (code_to_c), (const char*) (message_to_c));
}

// void g_dbus_method_invocation_return_error_valist (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* format, va_list var_args);
// void g_dbus_method_invocation_return_error_valist (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* format,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void g_dbus_method_invocation_return_gerror (GDBusMethodInvocation* invocation, const GError* error);
// void g_dbus_method_invocation_return_gerror (::GDBusMethodInvocation* invocation, const ::GError* error);
void base::DBusMethodInvocationBase::return_gerror (const GLib::Error & error) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, const ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_gerror;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (const ::GError*) (error_to_c));
}

// void g_dbus_method_invocation_return_value (GDBusMethodInvocation* invocation, GVariant* parameters);
// void g_dbus_method_invocation_return_value (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
void base::DBusMethodInvocationBase::return_value (GLib::Variant parameters) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_value;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c));
}
void base::DBusMethodInvocationBase::return_value () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_value;
  auto parameters_to_c = nullptr;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c));
}

// void g_dbus_method_invocation_return_value_with_unix_fd_list (GDBusMethodInvocation* invocation, GVariant* parameters, GUnixFDList* fd_list);
// void g_dbus_method_invocation_return_value_with_unix_fd_list (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
void base::DBusMethodInvocationBase::return_value_with_unix_fd_list (GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_value_with_unix_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
}
void base::DBusMethodInvocationBase::return_value_with_unix_fd_list () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_return_value_with_unix_fd_list;
  auto fd_list_to_c = nullptr;
  auto parameters_to_c = nullptr;
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
}

// void g_dbus_method_invocation_take_error (GDBusMethodInvocation* invocation, GError* error);
// void g_dbus_method_invocation_take_error (::GDBusMethodInvocation* invocation, ::GError* error);
void base::DBusMethodInvocationBase::take_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMethodInvocation* invocation, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_method_invocation_take_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GDBusMethodInvocation*) (gobj_()), (::GError*) (error_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_def_impl.hpp>)
#include <gio/dbusmethodinvocation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_impl.hpp>)
#include <gio/dbusmethodinvocation_extra_impl.hpp>
#endif
#endif

#endif
