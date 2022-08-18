// AUTO-GENERATED

#ifndef _GI_GIO_DBUSSERVER_HPP_
#define _GI_GIO_DBUSSERVER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Cancellable;
class DBusAuthObserver;
class DBusConnection;
class Initable;

class DBusServer;

namespace base {


#define GI_GIO_DBUSSERVER_BASE base::DBusServerBase
class DBusServerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusServer BaseObjectType;

DBusServerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_server_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusServer* g_dbus_server_new_sync (const gchar* address, GDBusServerFlags flags, const gchar* guid, GDBusAuthObserver* observer, GCancellable* cancellable, GError ** error);
// ::GDBusServer* g_dbus_server_new_sync (const char* address, ::GDBusServerFlags flags, const char* guid, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusServer new_sync (const std::string & address, Gio::DBusServerFlags flags, const std::string & guid, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusServer new_sync (const std::string & address, Gio::DBusServerFlags flags, const std::string & guid);
static GI_INLINE_DECL Gio::DBusServer new_sync (const std::string & address, Gio::DBusServerFlags flags, const std::string & guid, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusServer new_sync (const std::string & address, Gio::DBusServerFlags flags, const std::string & guid, GLib::Error * _error) noexcept;

// const gchar* g_dbus_server_get_client_address (GDBusServer* server);
// const char* g_dbus_server_get_client_address (::GDBusServer* server);
GI_INLINE_DECL std::string get_client_address () noexcept;

// GDBusServerFlags g_dbus_server_get_flags (GDBusServer* server);
// ::GDBusServerFlags g_dbus_server_get_flags (::GDBusServer* server);
GI_INLINE_DECL Gio::DBusServerFlags get_flags () noexcept;

// const gchar* g_dbus_server_get_guid (GDBusServer* server);
// const char* g_dbus_server_get_guid (::GDBusServer* server);
GI_INLINE_DECL std::string get_guid () noexcept;

// gboolean g_dbus_server_is_active (GDBusServer* server);
// gboolean g_dbus_server_is_active (::GDBusServer* server);
GI_INLINE_DECL bool is_active () noexcept;

// void g_dbus_server_start (GDBusServer* server);
// void g_dbus_server_start (::GDBusServer* server);
GI_INLINE_DECL void start () noexcept;

// void g_dbus_server_stop (GDBusServer* server);
// void g_dbus_server_stop (::GDBusServer* server);
GI_INLINE_DECL void stop () noexcept;

gi::property_proxy<bool, base::DBusServerBase> property_active()
{ return gi::property_proxy<bool, base::DBusServerBase> (*this, "active"); }
const gi::property_proxy<bool, base::DBusServerBase> property_active() const
{ return gi::property_proxy<bool, base::DBusServerBase> (*this, "active"); }

gi::property_proxy<std::string, base::DBusServerBase> property_address()
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "address"); }
const gi::property_proxy<std::string, base::DBusServerBase> property_address() const
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "address"); }

gi::property_proxy<Gio::DBusAuthObserver, base::DBusServerBase> property_authentication_observer()
{ return gi::property_proxy<Gio::DBusAuthObserver, base::DBusServerBase> (*this, "authentication-observer"); }
const gi::property_proxy<Gio::DBusAuthObserver, base::DBusServerBase> property_authentication_observer() const
{ return gi::property_proxy<Gio::DBusAuthObserver, base::DBusServerBase> (*this, "authentication-observer"); }

gi::property_proxy<std::string, base::DBusServerBase> property_client_address()
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "client-address"); }
const gi::property_proxy<std::string, base::DBusServerBase> property_client_address() const
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "client-address"); }

gi::property_proxy<Gio::DBusServerFlags, base::DBusServerBase> property_flags()
{ return gi::property_proxy<Gio::DBusServerFlags, base::DBusServerBase> (*this, "flags"); }
const gi::property_proxy<Gio::DBusServerFlags, base::DBusServerBase> property_flags() const
{ return gi::property_proxy<Gio::DBusServerFlags, base::DBusServerBase> (*this, "flags"); }

gi::property_proxy<std::string, base::DBusServerBase> property_guid()
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "guid"); }
const gi::property_proxy<std::string, base::DBusServerBase> property_guid() const
{ return gi::property_proxy<std::string, base::DBusServerBase> (*this, "guid"); }

// signal new-connection
gi::signal_proxy<bool(Gio::DBusServer, Gio::DBusConnection connection)> signal_new_connection()
{ return gi::signal_proxy<bool(Gio::DBusServer, Gio::DBusConnection connection)> (*this, "new-connection"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusserver_extra_def.hpp>)
#include <gio/dbusserver_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusserver_extra.hpp>)
#include <gio/dbusserver_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusServer : public GI_GIO_DBUSSERVER_BASE
{ typedef GI_GIO_DBUSSERVER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusServer>
{ typedef Gio::DBusServer type; }; 

} // namespace repository

} // namespace gi

#endif
