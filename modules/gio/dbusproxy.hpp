// AUTO-GENERATED

#ifndef _GI_GIO_DBUSPROXY_HPP_
#define _GI_GIO_DBUSPROXY_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncInitable;
class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusInterface;
class DBusInterfaceInfo;
class Initable;
class UnixFDList;

class DBusProxy;

namespace base {


#define GI_GIO_DBUSPROXY_BASE base::DBusProxyBase
class DBusProxyBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusProxy BaseObjectType;

DBusProxyBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_proxy_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::DBusInterface interface_ (gi::interface_tag<Gio::DBusInterface>);

GI_INLINE_DECL operator Gio::DBusInterface ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusProxy* g_dbus_proxy_new_finish (GAsyncResult* res, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusProxy new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusProxy* g_dbus_proxy_new_for_bus_finish (GAsyncResult* res, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_for_bus_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusProxy* g_dbus_proxy_new_for_bus_sync (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_for_bus_sync (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name);
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusProxy new_for_bus_sync (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name, GLib::Error * _error) noexcept;

// GDBusProxy* g_dbus_proxy_new_sync (GDBusConnection* connection, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GError ** error);
// ::GDBusProxy* g_dbus_proxy_new_sync (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name);
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusProxy new_sync (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name, GLib::Error * _error) noexcept;

// void g_dbus_proxy_new (GDBusConnection* connection, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_new (::GDBusConnection* connection, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusProxyFlags flags, const std::string & object_path, const std::string & interface_name, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_proxy_new_for_bus (GBusType bus_type, GDBusProxyFlags flags, GDBusInterfaceInfo* info, const gchar* name, const gchar* object_path, const gchar* interface_name, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_new_for_bus (::GBusType bus_type, ::GDBusProxyFlags flags, ::GDBusInterfaceInfo* info, const char* name, const char* object_path, const char* interface_name, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, Gio::DBusInterfaceInfo info, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusProxyFlags flags, const std::string & name, const std::string & object_path, const std::string & interface_name, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_proxy_call (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_call (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void call (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* g_dbus_proxy_call_finish (GDBusProxy* proxy, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_proxy_call_finish (::GDBusProxy* proxy, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* g_dbus_proxy_call_sync (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_proxy_call_sync (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_proxy_call_with_unix_fd_list (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_proxy_call_with_unix_fd_list (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void call_with_unix_fd_list (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_with_unix_fd_list (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* g_dbus_proxy_call_with_unix_fd_list_finish (GDBusProxy* proxy, GUnixFDList** out_fd_list, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_proxy_call_with_unix_fd_list_finish (::GDBusProxy* proxy, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* g_dbus_proxy_call_with_unix_fd_list_sync (GDBusProxy* proxy, const gchar* method_name, GVariant* parameters, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GUnixFDList** out_fd_list, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_proxy_call_with_unix_fd_list_sync (::GDBusProxy* proxy, const char* method_name, ::GVariant* parameters, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list = nullptr);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & method_name, GLib::Variant parameters, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// GVariant* g_dbus_proxy_get_cached_property (GDBusProxy* proxy, const gchar* property_name);
// ::GVariant* g_dbus_proxy_get_cached_property (::GDBusProxy* proxy, const char* property_name);
GI_INLINE_DECL GLib::Variant get_cached_property (const std::string & property_name) noexcept;

// gchar** g_dbus_proxy_get_cached_property_names (GDBusProxy* proxy);
// char** g_dbus_proxy_get_cached_property_names (::GDBusProxy* proxy);
GI_INLINE_DECL std::vector<std::string> get_cached_property_names () noexcept;

// GDBusConnection* g_dbus_proxy_get_connection (GDBusProxy* proxy);
// ::GDBusConnection* g_dbus_proxy_get_connection (::GDBusProxy* proxy);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// gint g_dbus_proxy_get_default_timeout (GDBusProxy* proxy);
// gint g_dbus_proxy_get_default_timeout (::GDBusProxy* proxy);
GI_INLINE_DECL gint get_default_timeout () noexcept;

// GDBusProxyFlags g_dbus_proxy_get_flags (GDBusProxy* proxy);
// ::GDBusProxyFlags g_dbus_proxy_get_flags (::GDBusProxy* proxy);
GI_INLINE_DECL Gio::DBusProxyFlags get_flags () noexcept;

// GDBusInterfaceInfo* g_dbus_proxy_get_interface_info (GDBusProxy* proxy);
// ::GDBusInterfaceInfo* g_dbus_proxy_get_interface_info (::GDBusProxy* proxy);
GI_INLINE_DECL Gio::DBusInterfaceInfo get_interface_info () noexcept;

// const gchar* g_dbus_proxy_get_interface_name (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_interface_name (::GDBusProxy* proxy);
GI_INLINE_DECL std::string get_interface_name () noexcept;

// const gchar* g_dbus_proxy_get_name (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_name (::GDBusProxy* proxy);
GI_INLINE_DECL std::string get_name () noexcept;

// gchar* g_dbus_proxy_get_name_owner (GDBusProxy* proxy);
// char* g_dbus_proxy_get_name_owner (::GDBusProxy* proxy);
GI_INLINE_DECL std::string get_name_owner () noexcept;

// const gchar* g_dbus_proxy_get_object_path (GDBusProxy* proxy);
// const char* g_dbus_proxy_get_object_path (::GDBusProxy* proxy);
GI_INLINE_DECL std::string get_object_path () noexcept;

// void g_dbus_proxy_set_cached_property (GDBusProxy* proxy, const gchar* property_name, GVariant* value);
// void g_dbus_proxy_set_cached_property (::GDBusProxy* proxy, const char* property_name, ::GVariant* value);
GI_INLINE_DECL void set_cached_property (const std::string & property_name, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_cached_property (const std::string & property_name) noexcept;

// void g_dbus_proxy_set_default_timeout (GDBusProxy* proxy, gint timeout_msec);
// void g_dbus_proxy_set_default_timeout (::GDBusProxy* proxy, gint timeout_msec);
GI_INLINE_DECL void set_default_timeout (gint timeout_msec) noexcept;

// void g_dbus_proxy_set_interface_info (GDBusProxy* proxy, GDBusInterfaceInfo* info);
// void g_dbus_proxy_set_interface_info (::GDBusProxy* proxy, ::GDBusInterfaceInfo* info);
GI_INLINE_DECL void set_interface_info (Gio::DBusInterfaceInfo info) noexcept;
GI_INLINE_DECL void set_interface_info () noexcept;

gi::property_proxy_write<Gio::BusType, base::DBusProxyBase> property_g_bus_type()
{ return gi::property_proxy_write<Gio::BusType, base::DBusProxyBase> (*this, "g-bus-type"); }

gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> property_g_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> (*this, "g-connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> property_g_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusProxyBase> (*this, "g-connection"); }

gi::property_proxy<gint, base::DBusProxyBase> property_g_default_timeout()
{ return gi::property_proxy<gint, base::DBusProxyBase> (*this, "g-default-timeout"); }
const gi::property_proxy<gint, base::DBusProxyBase> property_g_default_timeout() const
{ return gi::property_proxy<gint, base::DBusProxyBase> (*this, "g-default-timeout"); }

gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> property_g_flags()
{ return gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> (*this, "g-flags"); }
const gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> property_g_flags() const
{ return gi::property_proxy<Gio::DBusProxyFlags, base::DBusProxyBase> (*this, "g-flags"); }

gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> property_g_interface_info()
{ return gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> (*this, "g-interface-info"); }
const gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> property_g_interface_info() const
{ return gi::property_proxy<Gio::DBusInterfaceInfo, base::DBusProxyBase> (*this, "g-interface-info"); }

gi::property_proxy<std::string, base::DBusProxyBase> property_g_interface_name()
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-interface-name"); }
const gi::property_proxy<std::string, base::DBusProxyBase> property_g_interface_name() const
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-interface-name"); }

gi::property_proxy<std::string, base::DBusProxyBase> property_g_name()
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-name"); }
const gi::property_proxy<std::string, base::DBusProxyBase> property_g_name() const
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-name"); }

gi::property_proxy<std::string, base::DBusProxyBase> property_g_name_owner()
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-name-owner"); }
const gi::property_proxy<std::string, base::DBusProxyBase> property_g_name_owner() const
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-name-owner"); }

gi::property_proxy<std::string, base::DBusProxyBase> property_g_object_path()
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-object-path"); }
const gi::property_proxy<std::string, base::DBusProxyBase> property_g_object_path() const
{ return gi::property_proxy<std::string, base::DBusProxyBase> (*this, "g-object-path"); }

// signal g-properties-changed
// SKIP; glib:signal container parameter not supported

// signal g-signal
gi::signal_proxy<void(Gio::DBusProxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters)> signal_g_signal()
{ return gi::signal_proxy<void(Gio::DBusProxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters)> (*this, "g-signal"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra_def.hpp>)
#include <gio/dbusproxy_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusproxy_extra.hpp>)
#include <gio/dbusproxy_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusProxy : public GI_GIO_DBUSPROXY_BASE
{ typedef GI_GIO_DBUSPROXY_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusProxy>
{ typedef Gio::DBusProxy type; }; 

} // namespace repository

} // namespace gi

#include "asyncinitable.hpp"
#include "dbusinterface.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusProxyClassDef
{
typedef DBusProxyClassDef self;
public:
typedef Gio::DBusProxy instance_type;
typedef ::GDBusProxyClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusProxy::g_properties_changed (GDBusProxy* proxy, GVariant* changed_properties, const gchar* const* invalidated_properties);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy, ::GVariant* changed_properties, const char* invalidated_properties);
// SKIP; inconsistent in invalidated_properties pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
// void DBusProxy::g_signal (::GDBusProxy* proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
virtual void g_signal_ (const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusProxyClass: public detail::ClassTemplate<Gio::impl::internal::DBusProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusInterfaceIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef DBusProxyClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusProxyClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusInterfaceIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AsyncInitableIfaceClassImpl GAsyncInitableIface_type;
typedef Gio::impl::internal::DBusInterfaceIfaceClassImpl GDBusInterfaceIface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// void DBusProxy::g_properties_changed (GDBusProxy* proxy, GVariant* changed_properties, const gchar* const* invalidated_properties);
// void DBusProxy::g_properties_changed (::GDBusProxy* proxy, ::GVariant* changed_properties, const char* invalidated_properties);
// SKIP; inconsistent in invalidated_properties pointer depth (2 vs 1)

// void DBusProxy::g_signal (GDBusProxy* proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
// void DBusProxy::g_signal (::GDBusProxy* proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
GI_INLINE_DECL void g_signal_ (const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DBusProxyImpl = detail::ObjectImpl<DBusProxy, internal::DBusProxyClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
