// AUTO-GENERATED

#ifndef _GI_GIO_DBUSOBJECTMANAGERCLIENT_HPP_
#define _GI_GIO_DBUSOBJECTMANAGERCLIENT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncInitable;
class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusObjectManager;
class DBusObjectProxy;
class DBusProxy;
class Initable;

class DBusObjectManagerClient;

namespace base {


#define GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE base::DBusObjectManagerClientBase
class DBusObjectManagerClientBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusObjectManagerClient BaseObjectType;

DBusObjectManagerClientBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_object_manager_client_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::DBusObjectManager interface_ (gi::interface_tag<Gio::DBusObjectManager>);

GI_INLINE_DECL operator Gio::DBusObjectManager ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusObjectManager* g_dbus_object_manager_client_new_finish (GAsyncResult* res, GError ** error);
// ::GDBusObjectManagerClient* g_dbus_object_manager_client_new_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* g_dbus_object_manager_client_new_for_bus_finish (GAsyncResult* res, GError ** error);
// ::GDBusObjectManagerClient* g_dbus_object_manager_client_new_for_bus_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusObjectManager* g_dbus_object_manager_client_new_for_bus_sync (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name, const gchar* object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable* cancellable, GError ** error);
// ::GDBusObjectManagerClient* g_dbus_object_manager_client_new_for_bus_sync (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_for_bus_sync (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept;

// GDBusObjectManager* g_dbus_object_manager_client_new_sync (GDBusConnection* connection, GDBusObjectManagerClientFlags flags, const gchar* name, const gchar* object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable* cancellable, GError ** error);
// ::GDBusObjectManagerClient* g_dbus_object_manager_client_new_sync (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func);
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusObjectManagerClient new_sync (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, GLib::Error * _error) noexcept;

// void g_dbus_object_manager_client_new (GDBusConnection* connection, GDBusObjectManagerClientFlags flags, const gchar* name, const gchar* object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_object_manager_client_new (::GDBusConnection* connection, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::DBusConnection connection, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_object_manager_client_new_for_bus (GBusType bus_type, GDBusObjectManagerClientFlags flags, const gchar* name, const gchar* object_path, GDBusProxyTypeFunc get_proxy_type_func, gpointer get_proxy_type_user_data, GDestroyNotify get_proxy_type_destroy_notify, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_object_manager_client_new_for_bus (::GBusType bus_type, ::GDBusObjectManagerClientFlags flags, const char* name, const char* object_path, Gio::DBusProxyTypeFunc::cfunction_type get_proxy_type_func, void* get_proxy_type_user_data, GLib::DestroyNotify::cfunction_type get_proxy_type_destroy_notify, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_bus (Gio::BusType bus_type, Gio::DBusObjectManagerClientFlags flags, const std::string & name, const std::string & object_path, Gio::DBusProxyTypeFunc get_proxy_type_func, Gio::AsyncReadyCallback callback) noexcept;

// GDBusConnection* g_dbus_object_manager_client_get_connection (GDBusObjectManagerClient* manager);
// ::GDBusConnection* g_dbus_object_manager_client_get_connection (::GDBusObjectManagerClient* manager);
GI_INLINE_DECL Gio::DBusConnection get_connection () noexcept;

// GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (GDBusObjectManagerClient* manager);
// ::GDBusObjectManagerClientFlags g_dbus_object_manager_client_get_flags (::GDBusObjectManagerClient* manager);
GI_INLINE_DECL Gio::DBusObjectManagerClientFlags get_flags () noexcept;

// const gchar* g_dbus_object_manager_client_get_name (GDBusObjectManagerClient* manager);
// const char* g_dbus_object_manager_client_get_name (::GDBusObjectManagerClient* manager);
GI_INLINE_DECL std::string get_name () noexcept;

// gchar* g_dbus_object_manager_client_get_name_owner (GDBusObjectManagerClient* manager);
// char* g_dbus_object_manager_client_get_name_owner (::GDBusObjectManagerClient* manager);
GI_INLINE_DECL std::string get_name_owner () noexcept;

gi::property_proxy_write<Gio::BusType, base::DBusObjectManagerClientBase> property_bus_type()
{ return gi::property_proxy_write<Gio::BusType, base::DBusObjectManagerClientBase> (*this, "bus-type"); }

gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> property_connection()
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> (*this, "connection"); }
const gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> property_connection() const
{ return gi::property_proxy<Gio::DBusConnection, base::DBusObjectManagerClientBase> (*this, "connection"); }

gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> property_flags()
{ return gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> (*this, "flags"); }
const gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> property_flags() const
{ return gi::property_proxy<Gio::DBusObjectManagerClientFlags, base::DBusObjectManagerClientBase> (*this, "flags"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_destroy_notify()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-destroy-notify"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_destroy_notify() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-destroy-notify"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_func()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-func"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_func() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-func"); }

gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_user_data()
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-user-data"); }
const gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> property_get_proxy_type_user_data() const
{ return gi::property_proxy<gpointer, base::DBusObjectManagerClientBase> (*this, "get-proxy-type-user-data"); }

gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_name()
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "name"); }
const gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_name() const
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "name"); }

gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_name_owner()
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "name-owner"); }
const gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_name_owner() const
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "name-owner"); }

gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_object_path()
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "object-path"); }
const gi::property_proxy<std::string, base::DBusObjectManagerClientBase> property_object_path() const
{ return gi::property_proxy<std::string, base::DBusObjectManagerClientBase> (*this, "object-path"); }

// signal interface-proxy-properties-changed
// SKIP; glib:signal container parameter not supported

// signal interface-proxy-signal
gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters)> signal_interface_proxy_signal()
{ return gi::signal_proxy<void(Gio::DBusObjectManagerClient, Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters)> (*this, "interface-proxy-signal"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra_def.hpp>)
#include <gio/dbusobjectmanagerclient_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusobjectmanagerclient_extra.hpp>)
#include <gio/dbusobjectmanagerclient_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusObjectManagerClient : public GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE
{ typedef GI_GIO_DBUSOBJECTMANAGERCLIENT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusObjectManagerClient>
{ typedef Gio::DBusObjectManagerClient type; }; 

} // namespace repository

} // namespace gi

#include "asyncinitable.hpp"
#include "dbusobjectmanager.hpp"
#include "initable.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class DBusObjectManagerClientClassDef
{
typedef DBusObjectManagerClientClassDef self;
public:
typedef Gio::DBusObjectManagerClient instance_type;
typedef ::GDBusObjectManagerClientClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void DBusObjectManagerClient::interface_proxy_properties_changed (GDBusObjectManagerClient* manager, GDBusObjectProxy* object_proxy, GDBusProxy* interface_proxy, GVariant* changed_properties, const gchar* const* invalidated_properties);
// void DBusObjectManagerClient::interface_proxy_properties_changed (::GDBusObjectManagerClient* manager, ::GDBusObjectProxy* object_proxy, ::GDBusProxy* interface_proxy, ::GVariant* changed_properties, const char* invalidated_properties);
// SKIP; inconsistent in invalidated_properties pointer depth (2 vs 1)

// void DBusObjectManagerClient::interface_proxy_signal (GDBusObjectManagerClient* manager, GDBusObjectProxy* object_proxy, GDBusProxy* interface_proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
// void DBusObjectManagerClient::interface_proxy_signal (::GDBusObjectManagerClient* manager, ::GDBusObjectProxy* object_proxy, ::GDBusProxy* interface_proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
virtual void interface_proxy_signal_ (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class DBusObjectManagerClientClass: public detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerClientClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusObjectManagerIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl>
{
typedef DBusObjectManagerClientClass self;
typedef detail::ClassTemplate<Gio::impl::internal::DBusObjectManagerClientClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::AsyncInitableIfaceClassImpl, Gio::impl::internal::DBusObjectManagerIfaceClassImpl, Gio::impl::internal::InitableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::AsyncInitableIfaceClassImpl GAsyncInitableIface_type;
typedef Gio::impl::internal::DBusObjectManagerIfaceClassImpl GDBusObjectManagerIface_type;
typedef Gio::impl::internal::InitableIfaceClassImpl GInitableIface_type;


// void DBusObjectManagerClient::interface_proxy_properties_changed (GDBusObjectManagerClient* manager, GDBusObjectProxy* object_proxy, GDBusProxy* interface_proxy, GVariant* changed_properties, const gchar* const* invalidated_properties);
// void DBusObjectManagerClient::interface_proxy_properties_changed (::GDBusObjectManagerClient* manager, ::GDBusObjectProxy* object_proxy, ::GDBusProxy* interface_proxy, ::GVariant* changed_properties, const char* invalidated_properties);
// SKIP; inconsistent in invalidated_properties pointer depth (2 vs 1)

// void DBusObjectManagerClient::interface_proxy_signal (GDBusObjectManagerClient* manager, GDBusObjectProxy* object_proxy, GDBusProxy* interface_proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
// void DBusObjectManagerClient::interface_proxy_signal (::GDBusObjectManagerClient* manager, ::GDBusObjectProxy* object_proxy, ::GDBusProxy* interface_proxy, const char* sender_name, const char* signal_name, ::GVariant* parameters);
GI_INLINE_DECL void interface_proxy_signal_ (Gio::DBusObjectProxy object_proxy, Gio::DBusProxy interface_proxy, const std::string & sender_name, const std::string & signal_name, GLib::Variant parameters) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using DBusObjectManagerClientImpl = detail::ObjectImpl<DBusObjectManagerClient, internal::DBusObjectManagerClientClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
