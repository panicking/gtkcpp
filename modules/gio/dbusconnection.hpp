// AUTO-GENERATED

#ifndef _GI_GIO_DBUSCONNECTION_HPP_
#define _GI_GIO_DBUSCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionGroup;
class AsyncInitable;
class AsyncResult;
class Cancellable;
class Credentials;
class DBusAuthObserver;
class DBusInterfaceInfo;
class DBusInterfaceVTable;
class DBusMessage;
class DBusSubtreeVTable;
class IOStream;
class Initable;
class MenuModel;
class UnixFDList;

class DBusConnection;

namespace base {


#define GI_GIO_DBUSCONNECTION_BASE base::DBusConnectionBase
class DBusConnectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusConnection BaseObjectType;

DBusConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_connection_get_type(); } 

GI_INLINE_DECL Gio::AsyncInitable interface_ (gi::interface_tag<Gio::AsyncInitable>);

GI_INLINE_DECL operator Gio::AsyncInitable ();

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GDBusConnection* g_dbus_connection_new_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusConnection new_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* g_dbus_connection_new_for_address_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_for_address_finish (::GAsyncResult* res, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_finish (Gio::AsyncResult res);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* g_dbus_connection_new_for_address_sync (const gchar* address, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_for_address_sync (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags);
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusConnection new_for_address_sync (const std::string & address, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept;

// GDBusConnection* g_dbus_connection_new_sync (GIOStream* stream, const gchar* guid, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_dbus_connection_new_sync (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, GError ** error);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags);
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::DBusConnection new_sync (Gio::IOStream stream, Gio::DBusConnectionFlags flags, GLib::Error * _error) noexcept;

// void g_dbus_connection_new (GIOStream* stream, const gchar* guid, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_new (::GIOStream* stream, const char* guid, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_ (Gio::IOStream stream, const std::string & guid, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_ (Gio::IOStream stream, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// void g_dbus_connection_new_for_address (const gchar* address, GDBusConnectionFlags flags, GDBusAuthObserver* observer, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_new_for_address (const char* address, ::GDBusConnectionFlags flags, ::GDBusAuthObserver* observer, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
static GI_INLINE_DECL void new_for_address (const std::string & address, Gio::DBusConnectionFlags flags, Gio::DBusAuthObserver observer, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL void new_for_address (const std::string & address, Gio::DBusConnectionFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// guint g_dbus_connection_add_filter (GDBusConnection* connection, GDBusMessageFilterFunction filter_function, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_dbus_connection_add_filter (::GDBusConnection* connection, Gio::DBusMessageFilterFunction::cfunction_type filter_function, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
GI_INLINE_DECL guint add_filter (Gio::DBusMessageFilterFunction filter_function) noexcept;

// void g_dbus_connection_call (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_call (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void call (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* g_dbus_connection_call_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_connection_call_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* g_dbus_connection_call_sync (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_connection_call_sync (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL GLib::Variant call_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_call_with_unix_fd_list (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_call_with_unix_fd_list (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void call_with_unix_fd_list (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void call_with_unix_fd_list (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GVariant* g_dbus_connection_call_with_unix_fd_list_finish (GDBusConnection* connection, GUnixFDList** out_fd_list, GAsyncResult* res, GError ** error);
// ::GVariant* g_dbus_connection_call_with_unix_fd_list_finish (::GDBusConnection* connection, ::GUnixFDList** out_fd_list, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_finish (Gio::UnixFDList * out_fd_list, Gio::AsyncResult res, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GVariant* g_dbus_connection_call_with_unix_fd_list_sync (GDBusConnection* connection, const gchar* bus_name, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, const GVariantType* reply_type, GDBusCallFlags flags, gint timeout_msec, GUnixFDList* fd_list, GUnixFDList** out_fd_list, GCancellable* cancellable, GError ** error);
// ::GVariant* g_dbus_connection_call_with_unix_fd_list_sync (::GDBusConnection* connection, const char* bus_name, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, const ::GVariantType* reply_type, ::GDBusCallFlags flags, gint timeout_msec, ::GUnixFDList* fd_list, ::GUnixFDList** out_fd_list, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list = nullptr);
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::UnixFDList * out_fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Variant call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList * out_fd_list, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & bus_name, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, const GLib::VariantType & reply_type, Gio::DBusCallFlags flags, gint timeout_msec, Gio::UnixFDList fd_list, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Variant, Gio::UnixFDList> call_with_unix_fd_list_sync (const std::string & object_path, const std::string & interface_name, const std::string & method_name, Gio::DBusCallFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_close (GDBusConnection* connection, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_close (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void close (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void close (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dbus_connection_close_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// gboolean g_dbus_connection_close_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool close_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_close_sync (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// gboolean g_dbus_connection_close_sync (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool close_sync (Gio::Cancellable cancellable);
GI_INLINE_DECL bool close_sync ();
GI_INLINE_DECL bool close_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool close_sync (GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_emit_signal (GDBusConnection* connection, const gchar* destination_bus_name, const gchar* object_path, const gchar* interface_name, const gchar* signal_name, GVariant* parameters, GError ** error);
// gboolean g_dbus_connection_emit_signal (::GDBusConnection* connection, const char* destination_bus_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, GError ** error);
GI_INLINE_DECL bool emit_signal (const std::string & destination_bus_name, const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Variant parameters);
GI_INLINE_DECL bool emit_signal (const std::string & object_path, const std::string & interface_name, const std::string & signal_name);
GI_INLINE_DECL bool emit_signal (const std::string & destination_bus_name, const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Variant parameters, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool emit_signal (const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Error * _error) noexcept;

// guint g_dbus_connection_export_action_group (GDBusConnection* connection, const gchar* object_path, GActionGroup* action_group, GError ** error);
// guint g_dbus_connection_export_action_group (::GDBusConnection* connection, const char* object_path, ::GActionGroup* action_group, GError ** error);
GI_INLINE_DECL guint export_action_group (const std::string & object_path, Gio::ActionGroup action_group);
GI_INLINE_DECL guint export_action_group (const std::string & object_path, Gio::ActionGroup action_group, GLib::Error * _error) noexcept;

// guint g_dbus_connection_export_menu_model (GDBusConnection* connection, const gchar* object_path, GMenuModel* menu, GError ** error);
// guint g_dbus_connection_export_menu_model (::GDBusConnection* connection, const char* object_path, ::GMenuModel* menu, GError ** error);
GI_INLINE_DECL guint export_menu_model (const std::string & object_path, Gio::MenuModel menu);
GI_INLINE_DECL guint export_menu_model (const std::string & object_path, Gio::MenuModel menu, GLib::Error * _error) noexcept;

// void g_dbus_connection_flush (GDBusConnection* connection, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_flush (::GDBusConnection* connection, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void flush (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void flush (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_dbus_connection_flush_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// gboolean g_dbus_connection_flush_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool flush_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_dbus_connection_flush_sync (GDBusConnection* connection, GCancellable* cancellable, GError ** error);
// gboolean g_dbus_connection_flush_sync (::GDBusConnection* connection, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool flush_sync (Gio::Cancellable cancellable);
GI_INLINE_DECL bool flush_sync ();
GI_INLINE_DECL bool flush_sync (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool flush_sync (GLib::Error * _error) noexcept;

// GDBusCapabilityFlags g_dbus_connection_get_capabilities (GDBusConnection* connection);
// ::GDBusCapabilityFlags g_dbus_connection_get_capabilities (::GDBusConnection* connection);
GI_INLINE_DECL Gio::DBusCapabilityFlags get_capabilities () noexcept;

// gboolean g_dbus_connection_get_exit_on_close (GDBusConnection* connection);
// gboolean g_dbus_connection_get_exit_on_close (::GDBusConnection* connection);
GI_INLINE_DECL bool get_exit_on_close () noexcept;

// GDBusConnectionFlags g_dbus_connection_get_flags (GDBusConnection* connection);
// ::GDBusConnectionFlags g_dbus_connection_get_flags (::GDBusConnection* connection);
GI_INLINE_DECL Gio::DBusConnectionFlags get_flags () noexcept;

// const gchar* g_dbus_connection_get_guid (GDBusConnection* connection);
// const char* g_dbus_connection_get_guid (::GDBusConnection* connection);
GI_INLINE_DECL std::string get_guid () noexcept;

// guint32 g_dbus_connection_get_last_serial (GDBusConnection* connection);
// guint32 g_dbus_connection_get_last_serial (::GDBusConnection* connection);
GI_INLINE_DECL guint32 get_last_serial () noexcept;

// GCredentials* g_dbus_connection_get_peer_credentials (GDBusConnection* connection);
// ::GCredentials* g_dbus_connection_get_peer_credentials (::GDBusConnection* connection);
GI_INLINE_DECL Gio::Credentials get_peer_credentials () noexcept;

// GIOStream* g_dbus_connection_get_stream (GDBusConnection* connection);
// ::GIOStream* g_dbus_connection_get_stream (::GDBusConnection* connection);
GI_INLINE_DECL Gio::IOStream get_stream () noexcept;

// const gchar* g_dbus_connection_get_unique_name (GDBusConnection* connection);
// const char* g_dbus_connection_get_unique_name (::GDBusConnection* connection);
GI_INLINE_DECL std::string get_unique_name () noexcept;

// gboolean g_dbus_connection_is_closed (GDBusConnection* connection);
// gboolean g_dbus_connection_is_closed (::GDBusConnection* connection);
GI_INLINE_DECL bool is_closed () noexcept;

// guint g_dbus_connection_register_object (GDBusConnection* connection, const gchar* object_path, GDBusInterfaceInfo* interface_info, const GDBusInterfaceVTable* vtable, gpointer user_data, GDestroyNotify user_data_free_func, GError ** error);
// guint g_dbus_connection_register_object (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, const ::GDBusInterfaceVTable* vtable, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func, GError ** error);
// SKIP; callback misses closure info

// guint g_dbus_connection_register_object_with_closures (GDBusConnection* connection, const gchar* object_path, GDBusInterfaceInfo* interface_info, GClosure* method_call_closure, GClosure* get_property_closure, GClosure* set_property_closure, GError ** error);
// guint g_dbus_connection_register_object_with_closures (::GDBusConnection* connection, const char* object_path, ::GDBusInterfaceInfo* interface_info, ::GClosure* method_call_closure, ::GClosure* get_property_closure, ::GClosure* set_property_closure, GError ** error);
GI_INLINE_DECL guint register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GObject::Closure method_call_closure, GObject::Closure get_property_closure, GObject::Closure set_property_closure);
GI_INLINE_DECL guint register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info);
GI_INLINE_DECL guint register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GObject::Closure method_call_closure, GObject::Closure get_property_closure, GObject::Closure set_property_closure, GLib::Error * _error) noexcept;
GI_INLINE_DECL guint register_object (const std::string & object_path, Gio::DBusInterfaceInfo interface_info, GLib::Error * _error) noexcept;

// guint g_dbus_connection_register_subtree (GDBusConnection* connection, const gchar* object_path, const GDBusSubtreeVTable* vtable, GDBusSubtreeFlags flags, gpointer user_data, GDestroyNotify user_data_free_func, GError ** error);
// guint g_dbus_connection_register_subtree (::GDBusConnection* connection, const char* object_path, const ::GDBusSubtreeVTable* vtable, ::GDBusSubtreeFlags flags, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func, GError ** error);
// SKIP; callback misses closure info

// void g_dbus_connection_remove_filter (GDBusConnection* connection, guint filter_id);
// void g_dbus_connection_remove_filter (::GDBusConnection* connection, guint filter_id);
GI_INLINE_DECL void remove_filter (guint filter_id) noexcept;

// gboolean g_dbus_connection_send_message (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, volatile guint32* out_serial, GError ** error);
// gboolean g_dbus_connection_send_message (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, guint32* out_serial, GError ** error);
GI_INLINE_DECL bool send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial = nullptr);
GI_INLINE_DECL bool send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, guint32 * out_serial, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint32> send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags);
GI_INLINE_DECL std::tuple<bool, guint32> send_message (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, GLib::Error * _error) noexcept;

// void g_dbus_connection_send_message_with_reply (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_connection_send_message_with_reply (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL guint32 send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL guint32 send_message_with_reply (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::AsyncReadyCallback callback) noexcept;

// GDBusMessage* g_dbus_connection_send_message_with_reply_finish (GDBusConnection* connection, GAsyncResult* res, GError ** error);
// ::GDBusMessage* g_dbus_connection_send_message_with_reply_finish (::GDBusConnection* connection, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusMessage* g_dbus_connection_send_message_with_reply_sync (GDBusConnection* connection, GDBusMessage* message, GDBusSendMessageFlags flags, gint timeout_msec, volatile guint32* out_serial, GCancellable* cancellable, GError ** error);
// ::GDBusMessage* g_dbus_connection_send_message_with_reply_sync (::GDBusConnection* connection, ::GDBusMessage* message, ::GDBusSendMessageFlags flags, gint timeout_msec, guint32* out_serial, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial = nullptr);
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::DBusMessage send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, guint32 * out_serial, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec);
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::DBusMessage, guint32> send_message_with_reply_sync (Gio::DBusMessage message, Gio::DBusSendMessageFlags flags, gint timeout_msec, GLib::Error * _error) noexcept;

// void g_dbus_connection_set_exit_on_close (GDBusConnection* connection, gboolean exit_on_close);
// void g_dbus_connection_set_exit_on_close (::GDBusConnection* connection, gboolean exit_on_close);
GI_INLINE_DECL void set_exit_on_close (gboolean exit_on_close) noexcept;

// guint g_dbus_connection_signal_subscribe (GDBusConnection* connection, const gchar* sender, const gchar* interface_name, const gchar* member, const gchar* object_path, const gchar* arg0, GDBusSignalFlags flags, GDBusSignalCallback callback, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_dbus_connection_signal_subscribe (::GDBusConnection* connection, const char* sender, const char* interface_name, const char* member, const char* object_path, const char* arg0, ::GDBusSignalFlags flags, Gio::DBusSignalCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
GI_INLINE_DECL guint signal_subscribe (const std::string & sender, const std::string & interface_name, const std::string & member, const std::string & object_path, const std::string & arg0, Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept;
GI_INLINE_DECL guint signal_subscribe (Gio::DBusSignalFlags flags, Gio::DBusSignalCallback callback) noexcept;

// void g_dbus_connection_signal_unsubscribe (GDBusConnection* connection, guint subscription_id);
// void g_dbus_connection_signal_unsubscribe (::GDBusConnection* connection, guint subscription_id);
GI_INLINE_DECL void signal_unsubscribe (guint subscription_id) noexcept;

// void g_dbus_connection_start_message_processing (GDBusConnection* connection);
// void g_dbus_connection_start_message_processing (::GDBusConnection* connection);
GI_INLINE_DECL void start_message_processing () noexcept;

// void g_dbus_connection_unexport_action_group (GDBusConnection* connection, guint export_id);
// void g_dbus_connection_unexport_action_group (::GDBusConnection* connection, guint export_id);
GI_INLINE_DECL void unexport_action_group (guint export_id) noexcept;

// void g_dbus_connection_unexport_menu_model (GDBusConnection* connection, guint export_id);
// void g_dbus_connection_unexport_menu_model (::GDBusConnection* connection, guint export_id);
GI_INLINE_DECL void unexport_menu_model (guint export_id) noexcept;

// gboolean g_dbus_connection_unregister_object (GDBusConnection* connection, guint registration_id);
// gboolean g_dbus_connection_unregister_object (::GDBusConnection* connection, guint registration_id);
GI_INLINE_DECL bool unregister_object (guint registration_id) noexcept;

// gboolean g_dbus_connection_unregister_subtree (GDBusConnection* connection, guint registration_id);
// gboolean g_dbus_connection_unregister_subtree (::GDBusConnection* connection, guint registration_id);
GI_INLINE_DECL bool unregister_subtree (guint registration_id) noexcept;

gi::property_proxy_write<std::string, base::DBusConnectionBase> property_address()
{ return gi::property_proxy_write<std::string, base::DBusConnectionBase> (*this, "address"); }

gi::property_proxy_write<Gio::DBusAuthObserver, base::DBusConnectionBase> property_authentication_observer()
{ return gi::property_proxy_write<Gio::DBusAuthObserver, base::DBusConnectionBase> (*this, "authentication-observer"); }

gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> property_capabilities()
{ return gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> (*this, "capabilities"); }
const gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> property_capabilities() const
{ return gi::property_proxy<Gio::DBusCapabilityFlags, base::DBusConnectionBase> (*this, "capabilities"); }

gi::property_proxy<bool, base::DBusConnectionBase> property_closed()
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "closed"); }
const gi::property_proxy<bool, base::DBusConnectionBase> property_closed() const
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "closed"); }

gi::property_proxy<bool, base::DBusConnectionBase> property_exit_on_close()
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "exit-on-close"); }
const gi::property_proxy<bool, base::DBusConnectionBase> property_exit_on_close() const
{ return gi::property_proxy<bool, base::DBusConnectionBase> (*this, "exit-on-close"); }

gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> property_flags()
{ return gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> (*this, "flags"); }
const gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> property_flags() const
{ return gi::property_proxy<Gio::DBusConnectionFlags, base::DBusConnectionBase> (*this, "flags"); }

gi::property_proxy<std::string, base::DBusConnectionBase> property_guid()
{ return gi::property_proxy<std::string, base::DBusConnectionBase> (*this, "guid"); }
const gi::property_proxy<std::string, base::DBusConnectionBase> property_guid() const
{ return gi::property_proxy<std::string, base::DBusConnectionBase> (*this, "guid"); }

gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> property_stream()
{ return gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> (*this, "stream"); }
const gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> property_stream() const
{ return gi::property_proxy<Gio::IOStream, base::DBusConnectionBase> (*this, "stream"); }

gi::property_proxy<std::string, base::DBusConnectionBase> property_unique_name()
{ return gi::property_proxy<std::string, base::DBusConnectionBase> (*this, "unique-name"); }
const gi::property_proxy<std::string, base::DBusConnectionBase> property_unique_name() const
{ return gi::property_proxy<std::string, base::DBusConnectionBase> (*this, "unique-name"); }

// signal closed
gi::signal_proxy<void(Gio::DBusConnection, gboolean remote_peer_vanished, GLib::Error error)> signal_closed()
{ return gi::signal_proxy<void(Gio::DBusConnection, gboolean remote_peer_vanished, GLib::Error error)> (*this, "closed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra_def.hpp>)
#include <gio/dbusconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusconnection_extra.hpp>)
#include <gio/dbusconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusConnection : public GI_GIO_DBUSCONNECTION_BASE
{ typedef GI_GIO_DBUSCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusConnection>
{ typedef Gio::DBusConnection type; }; 

} // namespace repository

} // namespace gi

#endif
