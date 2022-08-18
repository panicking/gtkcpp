// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMETHODINVOCATION_HPP_
#define _GI_GIO_DBUSMETHODINVOCATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class DBusConnection;
class DBusMessage;
class DBusMethodInfo;
class DBusPropertyInfo;
class UnixFDList;

class DBusMethodInvocation;

namespace base {


#define GI_GIO_DBUSMETHODINVOCATION_BASE base::DBusMethodInvocationBase
class DBusMethodInvocationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusMethodInvocation BaseObjectType;

DBusMethodInvocationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_method_invocation_get_type(); } 

// GDBusConnection* g_dbus_method_invocation_get_connection (GDBusMethodInvocation* invocation);
// ::GDBusConnection* g_dbus_method_invocation_get_connection (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// const gchar* g_dbus_method_invocation_get_interface_name (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_interface_name (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL std::string get_interface_name () noexcept;

// GDBusMessage* g_dbus_method_invocation_get_message (GDBusMethodInvocation* invocation);
// ::GDBusMessage* g_dbus_method_invocation_get_message (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL Gio::DBusMessage get_message () noexcept;

// const GDBusMethodInfo* g_dbus_method_invocation_get_method_info (GDBusMethodInvocation* invocation);
// const ::GDBusMethodInfo* g_dbus_method_invocation_get_method_info (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL Gio::DBusMethodInfo get_method_info () noexcept;

// const gchar* g_dbus_method_invocation_get_method_name (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_method_name (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL std::string get_method_name () noexcept;

// const gchar* g_dbus_method_invocation_get_object_path (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_object_path (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL std::string get_object_path () noexcept;

// GVariant* g_dbus_method_invocation_get_parameters (GDBusMethodInvocation* invocation);
// ::GVariant* g_dbus_method_invocation_get_parameters (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL GLib::Variant get_parameters () noexcept;

// const GDBusPropertyInfo* g_dbus_method_invocation_get_property_info (GDBusMethodInvocation* invocation);
// const ::GDBusPropertyInfo* g_dbus_method_invocation_get_property_info (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL Gio::DBusPropertyInfo get_property_info () noexcept;

// const gchar* g_dbus_method_invocation_get_sender (GDBusMethodInvocation* invocation);
// const char* g_dbus_method_invocation_get_sender (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL std::string get_sender () noexcept;

// gpointer g_dbus_method_invocation_get_user_data (GDBusMethodInvocation* invocation);
// void* g_dbus_method_invocation_get_user_data (::GDBusMethodInvocation* invocation);
GI_INLINE_DECL gpointer get_user_data () noexcept;

// void g_dbus_method_invocation_return_dbus_error (GDBusMethodInvocation* invocation, const gchar* error_name, const gchar* error_message);
// void g_dbus_method_invocation_return_dbus_error (::GDBusMethodInvocation* invocation, const char* error_name, const char* error_message);
GI_INLINE_DECL void return_dbus_error (const std::string & error_name, const std::string & error_message) noexcept;

// void g_dbus_method_invocation_return_error (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* format);
// void g_dbus_method_invocation_return_error (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_method_invocation_return_error_literal (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* message);
// void g_dbus_method_invocation_return_error_literal (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* message);
GI_INLINE_DECL void return_error_literal (::GQuark domain, gint code, const std::string & message) noexcept;

// void g_dbus_method_invocation_return_error_valist (GDBusMethodInvocation* invocation, GQuark domain, gint code, const gchar* format, va_list var_args);
// void g_dbus_method_invocation_return_error_valist (::GDBusMethodInvocation* invocation, ::GQuark domain, gint code, const char* format,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void g_dbus_method_invocation_return_gerror (GDBusMethodInvocation* invocation, const GError* error);
// void g_dbus_method_invocation_return_gerror (::GDBusMethodInvocation* invocation, const ::GError* error);
GI_INLINE_DECL void return_gerror (const GLib::Error & error) noexcept;

// void g_dbus_method_invocation_return_value (GDBusMethodInvocation* invocation, GVariant* parameters);
// void g_dbus_method_invocation_return_value (::GDBusMethodInvocation* invocation, ::GVariant* parameters);
GI_INLINE_DECL void return_value (GLib::Variant parameters) noexcept;
GI_INLINE_DECL void return_value () noexcept;

// void g_dbus_method_invocation_return_value_with_unix_fd_list (GDBusMethodInvocation* invocation, GVariant* parameters, GUnixFDList* fd_list);
// void g_dbus_method_invocation_return_value_with_unix_fd_list (::GDBusMethodInvocation* invocation, ::GVariant* parameters, ::GUnixFDList* fd_list);
GI_INLINE_DECL void return_value_with_unix_fd_list (GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept;
GI_INLINE_DECL void return_value_with_unix_fd_list () noexcept;

// void g_dbus_method_invocation_take_error (GDBusMethodInvocation* invocation, GError* error);
// void g_dbus_method_invocation_take_error (::GDBusMethodInvocation* invocation, ::GError* error);
GI_INLINE_DECL void take_error (GLib::Error error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra_def.hpp>)
#include <gio/dbusmethodinvocation_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmethodinvocation_extra.hpp>)
#include <gio/dbusmethodinvocation_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMethodInvocation : public GI_GIO_DBUSMETHODINVOCATION_BASE
{ typedef GI_GIO_DBUSMETHODINVOCATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMethodInvocation>
{ typedef Gio::DBusMethodInvocation type; }; 

} // namespace repository

} // namespace gi

#endif
