// AUTO-GENERATED

#ifndef _GI_GIO__CALLBACKS_HPP_
#define _GI_GIO__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class DBusConnection;
class DBusMessage;
class DBusMethodInvocation;
class DBusObjectManagerClient;
class DatagramBased;
class DesktopAppInfo;
class File;
class SimpleAsyncResult;
class Socket;
class Task;
class Vfs;

// typedef void (*GAsyncReadyCallback) (GObject* source_object, GAsyncResult* res, gpointer user_data);
// typedef void (*GAsyncReadyCallback) (::GObject* source_object, ::GAsyncResult* res, void* user_data);
typedef gi::detail::callback<void(GObject::Object source_object, Gio::AsyncResult res), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> AsyncReadyCallback;

// typedef void (*GBusAcquiredCallback) (GDBusConnection* connection, const gchar* name, gpointer user_data);
// typedef void (*GBusAcquiredCallback) (::GDBusConnection* connection, const char* name, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> BusAcquiredCallback;

// typedef void (*GBusNameAcquiredCallback) (GDBusConnection* connection, const gchar* name, gpointer user_data);
// typedef void (*GBusNameAcquiredCallback) (::GDBusConnection* connection, const char* name, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> BusNameAcquiredCallback;

// typedef void (*GBusNameAppearedCallback) (GDBusConnection* connection, const gchar* name, const gchar* name_owner, gpointer user_data);
// typedef void (*GBusNameAppearedCallback) (::GDBusConnection* connection, const char* name, const char* name_owner, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & name, const std::string & name_owner), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> BusNameAppearedCallback;

// typedef void (*GBusNameLostCallback) (GDBusConnection* connection, const gchar* name, gpointer user_data);
// typedef void (*GBusNameLostCallback) (::GDBusConnection* connection, const char* name, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> BusNameLostCallback;

// typedef void (*GBusNameVanishedCallback) (GDBusConnection* connection, const gchar* name, gpointer user_data);
// typedef void (*GBusNameVanishedCallback) (::GDBusConnection* connection, const char* name, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & name), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> BusNameVanishedCallback;

// typedef gboolean (*GCancellableSourceFunc) (GCancellable* cancellable, gpointer user_data);
// typedef gboolean (*GCancellableSourceFunc) (::GCancellable* cancellable, void* user_data);
typedef gi::detail::callback<bool(Gio::Cancellable cancellable), gi::transfer_none_t, gi::transfer_none_t> CancellableSourceFunc;

// typedef GVariant* (*GDBusInterfaceGetPropertyFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data);
// typedef ::GVariant* (*GDBusInterfaceGetPropertyFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* interface_name, const char* property_name, ::GError* error, void* user_data);
// SKIP; inconsistent in error pointer depth (2 vs 1)

// typedef void (*GDBusInterfaceMethodCallFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data);
// typedef void (*GDBusInterfaceMethodCallFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* interface_name, const char* method_name, ::GVariant* parameters, ::GDBusMethodInvocation* invocation, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & sender, const std::string & object_path, const std::string & interface_name, const std::string & method_name, GLib::Variant parameters, Gio::DBusMethodInvocation invocation), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_full_t> DBusInterfaceMethodCallFunc;

// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data);
// typedef gboolean (*GDBusInterfaceSetPropertyFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* interface_name, const char* property_name, ::GVariant* value, ::GError* error, void* user_data);
// SKIP; inconsistent in error pointer depth (2 vs 1)

// typedef GDBusMessage* (*GDBusMessageFilterFunction) (GDBusConnection* connection, GDBusMessage* message, gboolean incoming, gpointer user_data);
// typedef ::GDBusMessage* (*GDBusMessageFilterFunction) (::GDBusConnection* connection, ::GDBusMessage* message, gboolean incoming, void* user_data);
typedef gi::detail::callback<Gio::DBusMessage(Gio::DBusConnection connection, Gio::DBusMessage message, gboolean incoming), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_full_t, gi::transfer_none_t> DBusMessageFilterFunction;

// typedef GType (*GDBusProxyTypeFunc) (GDBusObjectManagerClient* manager, const gchar* object_path, const gchar* interface_name, gpointer user_data);
// typedef GType (*GDBusProxyTypeFunc) (::GDBusObjectManagerClient* manager, const char* object_path, const char* interface_name, void* user_data);
typedef gi::detail::callback<GType(Gio::DBusObjectManagerClient manager, const std::string & object_path, const std::string & interface_name), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> DBusProxyTypeFunc;

// typedef void (*GDBusSignalCallback) (GDBusConnection* connection, const gchar* sender_name, const gchar* object_path, const gchar* interface_name, const gchar* signal_name, GVariant* parameters, gpointer user_data);
// typedef void (*GDBusSignalCallback) (::GDBusConnection* connection, const char* sender_name, const char* object_path, const char* interface_name, const char* signal_name, ::GVariant* parameters, void* user_data);
typedef gi::detail::callback<void(Gio::DBusConnection connection, const std::string & sender_name, const std::string & object_path, const std::string & interface_name, const std::string & signal_name, GLib::Variant parameters), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> DBusSignalCallback;

// typedef const GDBusInterfaceVTable* (*GDBusSubtreeDispatchFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* node, gpointer* out_user_data, gpointer user_data);
// typedef const ::GDBusInterfaceVTable* (*GDBusSubtreeDispatchFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* interface_name, const char* node, void* out_user_data, void* user_data);
// SKIP; invalid callback return transfer none

// typedef gchar** (*GDBusSubtreeEnumerateFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, gpointer user_data);
// typedef char** (*GDBusSubtreeEnumerateFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, void* user_data);
// SKIP; container return not supported

// typedef GDBusInterfaceInfo** (*GDBusSubtreeIntrospectFunc) (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* node, gpointer user_data);
// typedef ::GDBusInterfaceInfo** (*GDBusSubtreeIntrospectFunc) (::GDBusConnection* connection, const char* sender, const char* object_path, const char* node, void* user_data);
// SKIP; container return not supported

// typedef gboolean (*GDatagramBasedSourceFunc) (GDatagramBased* datagram_based, GIOCondition condition, gpointer user_data);
// typedef gboolean (*GDatagramBasedSourceFunc) (::GDatagramBased* datagram_based, ::GIOCondition condition, void* user_data);
typedef gi::detail::callback<bool(Gio::DatagramBased datagram_based, GLib::IOCondition condition), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> DatagramBasedSourceFunc;

// typedef void (*GDesktopAppLaunchCallback) (GDesktopAppInfo* appinfo, GPid pid, gpointer user_data);
// typedef void (*GDesktopAppLaunchCallback) (::GDesktopAppInfo* appinfo, ::GPid pid, void* user_data);
typedef gi::detail::callback<void(Gio::DesktopAppInfo appinfo, ::GPid pid), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> DesktopAppLaunchCallback;

// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, gpointer user_data);
// typedef void (*GFileMeasureProgressCallback) (gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files, void* user_data);
typedef gi::detail::callback<void(gboolean reporting, guint64 current_size, guint64 num_dirs, guint64 num_files), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> FileMeasureProgressCallback;

// typedef void (*GFileProgressCallback) (goffset current_num_bytes, goffset total_num_bytes, gpointer user_data);
// typedef void (*GFileProgressCallback) (gint64 current_num_bytes, gint64 total_num_bytes, void* user_data);
typedef gi::detail::callback<void(gint64 current_num_bytes, gint64 total_num_bytes), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> FileProgressCallback;

// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents, goffset file_size, gpointer callback_data);
// typedef gboolean (*GFileReadMoreCallback) (const char* file_contents, gint64 file_size, void* callback_data);
typedef gi::detail::callback<bool(const std::string & file_contents, gint64 file_size), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> FileReadMoreCallback;

// typedef gboolean (*GIOSchedulerJobFunc) (GIOSchedulerJob* job, GCancellable* cancellable, gpointer user_data);
// typedef gboolean (*GIOSchedulerJobFunc) ( job, ::GCancellable* cancellable, void* user_data);
// SKIP; job type  not supported

// typedef gboolean (*GPollableSourceFunc) (GObject* pollable_stream, gpointer user_data);
// typedef gboolean (*GPollableSourceFunc) (::GObject* pollable_stream, void* user_data);
typedef gi::detail::callback<bool(GObject::Object pollable_stream), gi::transfer_none_t, gi::transfer_none_t> PollableSourceFunc;

// typedef gpointer (*GReallocFunc) (gpointer data, gsize size);
// typedef void* (*GReallocFunc) (void* data, gsize size);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSettingsBindGetMapping) (GValue* value, GVariant* variant, gpointer user_data);
// typedef gboolean (*GSettingsBindGetMapping) (::GValue* value, ::GVariant* variant, void* user_data);
typedef gi::detail::callback<bool(GObject::Value value, GLib::Variant variant), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> SettingsBindGetMapping;

// typedef GVariant* (*GSettingsBindSetMapping) (const GValue* value, const GVariantType* expected_type, gpointer user_data);
// typedef ::GVariant* (*GSettingsBindSetMapping) (const ::GValue* value, const ::GVariantType* expected_type, void* user_data);
typedef gi::detail::callback<GLib::Variant(const GObject::Value & value, const GLib::VariantType & expected_type), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> SettingsBindSetMapping;

// typedef gboolean (*GSettingsGetMapping) (GVariant* value, gpointer* result, gpointer user_data);
// typedef gboolean (*GSettingsGetMapping) (::GVariant* value, void** result, void* user_data);
// SKIP; callback out parameter not supported

// typedef void (*GSimpleAsyncThreadFunc) (GSimpleAsyncResult* res, GObject* object, GCancellable* cancellable);
// typedef void (*GSimpleAsyncThreadFunc) (::GSimpleAsyncResult* res, ::GObject* object, ::GCancellable* cancellable);
// SKIP; not a callback since no user_data

// typedef gboolean (*GSocketSourceFunc) (GSocket* socket, GIOCondition condition, gpointer user_data);
// typedef gboolean (*GSocketSourceFunc) (::GSocket* socket, ::GIOCondition condition, void* user_data);
typedef gi::detail::callback<bool(Gio::Socket socket, GLib::IOCondition condition), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> SocketSourceFunc;

// typedef void (*GTaskThreadFunc) (GTask* task, gpointer source_object, gpointer task_data, GCancellable* cancellable);
// typedef void (*GTaskThreadFunc) (::GTask* task, ::GObject* source_object, void* task_data, ::GCancellable* cancellable);
// SKIP; not a callback since no user_data

// typedef GFile* (*GVfsFileLookupFunc) (GVfs* vfs, const char* identifier, gpointer user_data);
// typedef ::GFile* (*GVfsFileLookupFunc) (::GVfs* vfs, const char* identifier, void* user_data);
typedef gi::detail::callback<Gio::File(Gio::Vfs vfs, const std::string & identifier), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> VfsFileLookupFunc;

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
