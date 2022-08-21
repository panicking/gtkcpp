// AUTO-GENERATED

#ifndef _GI_GIO__FLAGS_HPP_
#define _GI_GIO__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gio {

enum class AppInfoCreateFlags {
  NONE_ = G_APP_INFO_CREATE_NONE,
  NEEDS_TERMINAL_ = G_APP_INFO_CREATE_NEEDS_TERMINAL,
  SUPPORTS_URIS_ = G_APP_INFO_CREATE_SUPPORTS_URIS,
  SUPPORTS_STARTUP_NOTIFICATION_ = G_APP_INFO_CREATE_SUPPORTS_STARTUP_NOTIFICATION,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::AppInfoCreateFlags>
{ typedef GAppInfoCreateFlags type; }; 
template<> struct declare_cpptype_of<GAppInfoCreateFlags>
{ typedef Gio::AppInfoCreateFlags type; }; 

template<> struct declare_gtype_of<Gio::AppInfoCreateFlags>
{ static GType get_type() { return g_app_info_create_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class ApplicationFlags {
  FLAGS_NONE_ = G_APPLICATION_FLAGS_NONE,
  IS_SERVICE_ = G_APPLICATION_IS_SERVICE,
  IS_LAUNCHER_ = G_APPLICATION_IS_LAUNCHER,
  HANDLES_OPEN_ = G_APPLICATION_HANDLES_OPEN,
  HANDLES_COMMAND_LINE_ = G_APPLICATION_HANDLES_COMMAND_LINE,
  SEND_ENVIRONMENT_ = G_APPLICATION_SEND_ENVIRONMENT,
  NON_UNIQUE_ = G_APPLICATION_NON_UNIQUE,
  CAN_OVERRIDE_APP_ID_ = G_APPLICATION_CAN_OVERRIDE_APP_ID,
  ALLOW_REPLACEMENT_ = G_APPLICATION_ALLOW_REPLACEMENT,
  REPLACE_ = G_APPLICATION_REPLACE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ApplicationFlags>
{ typedef GApplicationFlags type; }; 
template<> struct declare_cpptype_of<GApplicationFlags>
{ typedef Gio::ApplicationFlags type; }; 

template<> struct declare_gtype_of<Gio::ApplicationFlags>
{ static GType get_type() { return g_application_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class AskPasswordFlags {
  NEED_PASSWORD_ = G_ASK_PASSWORD_NEED_PASSWORD,
  NEED_USERNAME_ = G_ASK_PASSWORD_NEED_USERNAME,
  NEED_DOMAIN_ = G_ASK_PASSWORD_NEED_DOMAIN,
  SAVING_SUPPORTED_ = G_ASK_PASSWORD_SAVING_SUPPORTED,
  ANONYMOUS_SUPPORTED_ = G_ASK_PASSWORD_ANONYMOUS_SUPPORTED,
  TCRYPT_ = G_ASK_PASSWORD_TCRYPT,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::AskPasswordFlags>
{ typedef GAskPasswordFlags type; }; 
template<> struct declare_cpptype_of<GAskPasswordFlags>
{ typedef Gio::AskPasswordFlags type; }; 

template<> struct declare_gtype_of<Gio::AskPasswordFlags>
{ static GType get_type() { return g_ask_password_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class BusNameOwnerFlags {
  NONE_ = G_BUS_NAME_OWNER_FLAGS_NONE,
  ALLOW_REPLACEMENT_ = G_BUS_NAME_OWNER_FLAGS_ALLOW_REPLACEMENT,
  REPLACE_ = G_BUS_NAME_OWNER_FLAGS_REPLACE,
  DO_NOT_QUEUE_ = G_BUS_NAME_OWNER_FLAGS_DO_NOT_QUEUE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::BusNameOwnerFlags>
{ typedef GBusNameOwnerFlags type; }; 
template<> struct declare_cpptype_of<GBusNameOwnerFlags>
{ typedef Gio::BusNameOwnerFlags type; }; 

template<> struct declare_gtype_of<Gio::BusNameOwnerFlags>
{ static GType get_type() { return g_bus_name_owner_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class BusNameWatcherFlags {
  NONE_ = G_BUS_NAME_WATCHER_FLAGS_NONE,
  AUTO_START_ = G_BUS_NAME_WATCHER_FLAGS_AUTO_START,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::BusNameWatcherFlags>
{ typedef GBusNameWatcherFlags type; }; 
template<> struct declare_cpptype_of<GBusNameWatcherFlags>
{ typedef Gio::BusNameWatcherFlags type; }; 

template<> struct declare_gtype_of<Gio::BusNameWatcherFlags>
{ static GType get_type() { return g_bus_name_watcher_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class ConverterFlags {
  NONE_ = G_CONVERTER_NO_FLAGS,
  INPUT_AT_END_ = G_CONVERTER_INPUT_AT_END,
  FLUSH_ = G_CONVERTER_FLUSH,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ConverterFlags>
{ typedef GConverterFlags type; }; 
template<> struct declare_cpptype_of<GConverterFlags>
{ typedef Gio::ConverterFlags type; }; 

template<> struct declare_gtype_of<Gio::ConverterFlags>
{ static GType get_type() { return g_converter_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusCallFlags {
  NONE_ = G_DBUS_CALL_FLAGS_NONE,
  NO_AUTO_START_ = G_DBUS_CALL_FLAGS_NO_AUTO_START,
  ALLOW_INTERACTIVE_AUTHORIZATION_ = G_DBUS_CALL_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusCallFlags>
{ typedef GDBusCallFlags type; }; 
template<> struct declare_cpptype_of<GDBusCallFlags>
{ typedef Gio::DBusCallFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusCallFlags>
{ static GType get_type() { return g_dbus_call_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusCapabilityFlags {
  NONE_ = G_DBUS_CAPABILITY_FLAGS_NONE,
  UNIX_FD_PASSING_ = G_DBUS_CAPABILITY_FLAGS_UNIX_FD_PASSING,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusCapabilityFlags>
{ typedef GDBusCapabilityFlags type; }; 
template<> struct declare_cpptype_of<GDBusCapabilityFlags>
{ typedef Gio::DBusCapabilityFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusCapabilityFlags>
{ static GType get_type() { return g_dbus_capability_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusConnectionFlags {
  NONE_ = G_DBUS_CONNECTION_FLAGS_NONE,
  AUTHENTICATION_CLIENT_ = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_CLIENT,
  AUTHENTICATION_SERVER_ = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_SERVER,
  AUTHENTICATION_ALLOW_ANONYMOUS_ = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS,
  MESSAGE_BUS_CONNECTION_ = G_DBUS_CONNECTION_FLAGS_MESSAGE_BUS_CONNECTION,
  DELAY_MESSAGE_PROCESSING_ = G_DBUS_CONNECTION_FLAGS_DELAY_MESSAGE_PROCESSING,
  AUTHENTICATION_REQUIRE_SAME_USER_ = G_DBUS_CONNECTION_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusConnectionFlags>
{ typedef GDBusConnectionFlags type; }; 
template<> struct declare_cpptype_of<GDBusConnectionFlags>
{ typedef Gio::DBusConnectionFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusConnectionFlags>
{ static GType get_type() { return g_dbus_connection_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusInterfaceSkeletonFlags {
  NONE_ = G_DBUS_INTERFACE_SKELETON_FLAGS_NONE,
  HANDLE_METHOD_INVOCATIONS_IN_THREAD_ = G_DBUS_INTERFACE_SKELETON_FLAGS_HANDLE_METHOD_INVOCATIONS_IN_THREAD,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusInterfaceSkeletonFlags>
{ typedef GDBusInterfaceSkeletonFlags type; }; 
template<> struct declare_cpptype_of<GDBusInterfaceSkeletonFlags>
{ typedef Gio::DBusInterfaceSkeletonFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusInterfaceSkeletonFlags>
{ static GType get_type() { return g_dbus_interface_skeleton_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusMessageFlags {
  NONE_ = G_DBUS_MESSAGE_FLAGS_NONE,
  NO_REPLY_EXPECTED_ = G_DBUS_MESSAGE_FLAGS_NO_REPLY_EXPECTED,
  NO_AUTO_START_ = G_DBUS_MESSAGE_FLAGS_NO_AUTO_START,
  ALLOW_INTERACTIVE_AUTHORIZATION_ = G_DBUS_MESSAGE_FLAGS_ALLOW_INTERACTIVE_AUTHORIZATION,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusMessageFlags>
{ typedef GDBusMessageFlags type; }; 
template<> struct declare_cpptype_of<GDBusMessageFlags>
{ typedef Gio::DBusMessageFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusMessageFlags>
{ static GType get_type() { return g_dbus_message_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusObjectManagerClientFlags {
  NONE_ = G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_NONE,
  DO_NOT_AUTO_START_ = G_DBUS_OBJECT_MANAGER_CLIENT_FLAGS_DO_NOT_AUTO_START,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusObjectManagerClientFlags>
{ typedef GDBusObjectManagerClientFlags type; }; 
template<> struct declare_cpptype_of<GDBusObjectManagerClientFlags>
{ typedef Gio::DBusObjectManagerClientFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusObjectManagerClientFlags>
{ static GType get_type() { return g_dbus_object_manager_client_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusPropertyInfoFlags {
  NONE_ = G_DBUS_PROPERTY_INFO_FLAGS_NONE,
  READABLE_ = G_DBUS_PROPERTY_INFO_FLAGS_READABLE,
  WRITABLE_ = G_DBUS_PROPERTY_INFO_FLAGS_WRITABLE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusPropertyInfoFlags>
{ typedef GDBusPropertyInfoFlags type; }; 
template<> struct declare_cpptype_of<GDBusPropertyInfoFlags>
{ typedef Gio::DBusPropertyInfoFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusPropertyInfoFlags>
{ static GType get_type() { return g_dbus_property_info_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusProxyFlags {
  NONE_ = G_DBUS_PROXY_FLAGS_NONE,
  DO_NOT_LOAD_PROPERTIES_ = G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES,
  DO_NOT_CONNECT_SIGNALS_ = G_DBUS_PROXY_FLAGS_DO_NOT_CONNECT_SIGNALS,
  DO_NOT_AUTO_START_ = G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START,
  GET_INVALIDATED_PROPERTIES_ = G_DBUS_PROXY_FLAGS_GET_INVALIDATED_PROPERTIES,
  DO_NOT_AUTO_START_AT_CONSTRUCTION_ = G_DBUS_PROXY_FLAGS_DO_NOT_AUTO_START_AT_CONSTRUCTION,
  NO_MATCH_RULE_ = G_DBUS_PROXY_FLAGS_NO_MATCH_RULE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusProxyFlags>
{ typedef GDBusProxyFlags type; }; 
template<> struct declare_cpptype_of<GDBusProxyFlags>
{ typedef Gio::DBusProxyFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusProxyFlags>
{ static GType get_type() { return g_dbus_proxy_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusSendMessageFlags {
  NONE_ = G_DBUS_SEND_MESSAGE_FLAGS_NONE,
  PRESERVE_SERIAL_ = G_DBUS_SEND_MESSAGE_FLAGS_PRESERVE_SERIAL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusSendMessageFlags>
{ typedef GDBusSendMessageFlags type; }; 
template<> struct declare_cpptype_of<GDBusSendMessageFlags>
{ typedef Gio::DBusSendMessageFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusSendMessageFlags>
{ static GType get_type() { return g_dbus_send_message_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusServerFlags {
  NONE_ = G_DBUS_SERVER_FLAGS_NONE,
  RUN_IN_THREAD_ = G_DBUS_SERVER_FLAGS_RUN_IN_THREAD,
  AUTHENTICATION_ALLOW_ANONYMOUS_ = G_DBUS_SERVER_FLAGS_AUTHENTICATION_ALLOW_ANONYMOUS,
  AUTHENTICATION_REQUIRE_SAME_USER_ = G_DBUS_SERVER_FLAGS_AUTHENTICATION_REQUIRE_SAME_USER,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusServerFlags>
{ typedef GDBusServerFlags type; }; 
template<> struct declare_cpptype_of<GDBusServerFlags>
{ typedef Gio::DBusServerFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusServerFlags>
{ static GType get_type() { return g_dbus_server_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusSignalFlags {
  NONE_ = G_DBUS_SIGNAL_FLAGS_NONE,
  NO_MATCH_RULE_ = G_DBUS_SIGNAL_FLAGS_NO_MATCH_RULE,
  MATCH_ARG0_NAMESPACE_ = G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_NAMESPACE,
  MATCH_ARG0_PATH_ = G_DBUS_SIGNAL_FLAGS_MATCH_ARG0_PATH,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusSignalFlags>
{ typedef GDBusSignalFlags type; }; 
template<> struct declare_cpptype_of<GDBusSignalFlags>
{ typedef Gio::DBusSignalFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusSignalFlags>
{ static GType get_type() { return g_dbus_signal_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DBusSubtreeFlags {
  NONE_ = G_DBUS_SUBTREE_FLAGS_NONE,
  DISPATCH_TO_UNENUMERATED_NODES_ = G_DBUS_SUBTREE_FLAGS_DISPATCH_TO_UNENUMERATED_NODES,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusSubtreeFlags>
{ typedef GDBusSubtreeFlags type; }; 
template<> struct declare_cpptype_of<GDBusSubtreeFlags>
{ typedef Gio::DBusSubtreeFlags type; }; 

template<> struct declare_gtype_of<Gio::DBusSubtreeFlags>
{ static GType get_type() { return g_dbus_subtree_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class DriveStartFlags {
  NONE_ = G_DRIVE_START_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DriveStartFlags>
{ typedef GDriveStartFlags type; }; 
template<> struct declare_cpptype_of<GDriveStartFlags>
{ typedef Gio::DriveStartFlags type; }; 

template<> struct declare_gtype_of<Gio::DriveStartFlags>
{ static GType get_type() { return g_drive_start_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileAttributeInfoFlags {
  NONE_ = G_FILE_ATTRIBUTE_INFO_NONE,
  COPY_WITH_FILE_ = G_FILE_ATTRIBUTE_INFO_COPY_WITH_FILE,
  COPY_WHEN_MOVED_ = G_FILE_ATTRIBUTE_INFO_COPY_WHEN_MOVED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileAttributeInfoFlags>
{ typedef GFileAttributeInfoFlags type; }; 
template<> struct declare_cpptype_of<GFileAttributeInfoFlags>
{ typedef Gio::FileAttributeInfoFlags type; }; 

template<> struct declare_gtype_of<Gio::FileAttributeInfoFlags>
{ static GType get_type() { return g_file_attribute_info_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileCopyFlags {
  NONE_ = G_FILE_COPY_NONE,
  OVERWRITE_ = G_FILE_COPY_OVERWRITE,
  BACKUP_ = G_FILE_COPY_BACKUP,
  NOFOLLOW_SYMLINKS_ = G_FILE_COPY_NOFOLLOW_SYMLINKS,
  ALL_METADATA_ = G_FILE_COPY_ALL_METADATA,
  NO_FALLBACK_FOR_MOVE_ = G_FILE_COPY_NO_FALLBACK_FOR_MOVE,
  TARGET_DEFAULT_PERMS_ = G_FILE_COPY_TARGET_DEFAULT_PERMS,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileCopyFlags>
{ typedef GFileCopyFlags type; }; 
template<> struct declare_cpptype_of<GFileCopyFlags>
{ typedef Gio::FileCopyFlags type; }; 

template<> struct declare_gtype_of<Gio::FileCopyFlags>
{ static GType get_type() { return g_file_copy_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileCreateFlags {
  NONE_ = G_FILE_CREATE_NONE,
  PRIVATE_ = G_FILE_CREATE_PRIVATE,
  REPLACE_DESTINATION_ = G_FILE_CREATE_REPLACE_DESTINATION,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileCreateFlags>
{ typedef GFileCreateFlags type; }; 
template<> struct declare_cpptype_of<GFileCreateFlags>
{ typedef Gio::FileCreateFlags type; }; 

template<> struct declare_gtype_of<Gio::FileCreateFlags>
{ static GType get_type() { return g_file_create_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileMeasureFlags {
  NONE_ = G_FILE_MEASURE_NONE,
  REPORT_ANY_ERROR_ = G_FILE_MEASURE_REPORT_ANY_ERROR,
  APPARENT_SIZE_ = G_FILE_MEASURE_APPARENT_SIZE,
  NO_XDEV_ = G_FILE_MEASURE_NO_XDEV,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileMeasureFlags>
{ typedef GFileMeasureFlags type; }; 
template<> struct declare_cpptype_of<GFileMeasureFlags>
{ typedef Gio::FileMeasureFlags type; }; 

template<> struct declare_gtype_of<Gio::FileMeasureFlags>
{ static GType get_type() { return g_file_measure_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileMonitorFlags {
  NONE_ = G_FILE_MONITOR_NONE,
  WATCH_MOUNTS_ = G_FILE_MONITOR_WATCH_MOUNTS,
  SEND_MOVED_ = G_FILE_MONITOR_SEND_MOVED,
  WATCH_HARD_LINKS_ = G_FILE_MONITOR_WATCH_HARD_LINKS,
  WATCH_MOVES_ = G_FILE_MONITOR_WATCH_MOVES,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileMonitorFlags>
{ typedef GFileMonitorFlags type; }; 
template<> struct declare_cpptype_of<GFileMonitorFlags>
{ typedef Gio::FileMonitorFlags type; }; 

template<> struct declare_gtype_of<Gio::FileMonitorFlags>
{ static GType get_type() { return g_file_monitor_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class FileQueryInfoFlags {
  NONE_ = G_FILE_QUERY_INFO_NONE,
  NOFOLLOW_SYMLINKS_ = G_FILE_QUERY_INFO_NOFOLLOW_SYMLINKS,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileQueryInfoFlags>
{ typedef GFileQueryInfoFlags type; }; 
template<> struct declare_cpptype_of<GFileQueryInfoFlags>
{ typedef Gio::FileQueryInfoFlags type; }; 

template<> struct declare_gtype_of<Gio::FileQueryInfoFlags>
{ static GType get_type() { return g_file_query_info_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class IOStreamSpliceFlags {
  NONE_ = G_IO_STREAM_SPLICE_NONE,
  CLOSE_STREAM1_ = G_IO_STREAM_SPLICE_CLOSE_STREAM1,
  CLOSE_STREAM2_ = G_IO_STREAM_SPLICE_CLOSE_STREAM2,
  WAIT_FOR_BOTH_ = G_IO_STREAM_SPLICE_WAIT_FOR_BOTH,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::IOStreamSpliceFlags>
{ typedef GIOStreamSpliceFlags type; }; 
template<> struct declare_cpptype_of<GIOStreamSpliceFlags>
{ typedef Gio::IOStreamSpliceFlags type; }; 

template<> struct declare_gtype_of<Gio::IOStreamSpliceFlags>
{ static GType get_type() { return g_io_stream_splice_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class MountMountFlags {
  NONE_ = G_MOUNT_MOUNT_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::MountMountFlags>
{ typedef GMountMountFlags type; }; 
template<> struct declare_cpptype_of<GMountMountFlags>
{ typedef Gio::MountMountFlags type; }; 

template<> struct declare_gtype_of<Gio::MountMountFlags>
{ static GType get_type() { return g_mount_mount_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class MountUnmountFlags {
  NONE_ = G_MOUNT_UNMOUNT_NONE,
  FORCE_ = G_MOUNT_UNMOUNT_FORCE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::MountUnmountFlags>
{ typedef GMountUnmountFlags type; }; 
template<> struct declare_cpptype_of<GMountUnmountFlags>
{ typedef Gio::MountUnmountFlags type; }; 

template<> struct declare_gtype_of<Gio::MountUnmountFlags>
{ static GType get_type() { return g_mount_unmount_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class OutputStreamSpliceFlags {
  NONE_ = G_OUTPUT_STREAM_SPLICE_NONE,
  CLOSE_SOURCE_ = G_OUTPUT_STREAM_SPLICE_CLOSE_SOURCE,
  CLOSE_TARGET_ = G_OUTPUT_STREAM_SPLICE_CLOSE_TARGET,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::OutputStreamSpliceFlags>
{ typedef GOutputStreamSpliceFlags type; }; 
template<> struct declare_cpptype_of<GOutputStreamSpliceFlags>
{ typedef Gio::OutputStreamSpliceFlags type; }; 

template<> struct declare_gtype_of<Gio::OutputStreamSpliceFlags>
{ static GType get_type() { return g_output_stream_splice_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class ResolverNameLookupFlags {
  DEFAULT_ = G_RESOLVER_NAME_LOOKUP_FLAGS_DEFAULT,
  IPV4_ONLY_ = G_RESOLVER_NAME_LOOKUP_FLAGS_IPV4_ONLY,
  IPV6_ONLY_ = G_RESOLVER_NAME_LOOKUP_FLAGS_IPV6_ONLY,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResolverNameLookupFlags>
{ typedef GResolverNameLookupFlags type; }; 
template<> struct declare_cpptype_of<GResolverNameLookupFlags>
{ typedef Gio::ResolverNameLookupFlags type; }; 

template<> struct declare_gtype_of<Gio::ResolverNameLookupFlags>
{ static GType get_type() { return g_resolver_name_lookup_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class ResourceFlags {
  NONE_ = G_RESOURCE_FLAGS_NONE,
  COMPRESSED_ = G_RESOURCE_FLAGS_COMPRESSED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResourceFlags>
{ typedef GResourceFlags type; }; 
template<> struct declare_cpptype_of<GResourceFlags>
{ typedef Gio::ResourceFlags type; }; 

template<> struct declare_gtype_of<Gio::ResourceFlags>
{ static GType get_type() { return g_resource_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class ResourceLookupFlags {
  NONE_ = G_RESOURCE_LOOKUP_FLAGS_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResourceLookupFlags>
{ typedef GResourceLookupFlags type; }; 
template<> struct declare_cpptype_of<GResourceLookupFlags>
{ typedef Gio::ResourceLookupFlags type; }; 

template<> struct declare_gtype_of<Gio::ResourceLookupFlags>
{ static GType get_type() { return g_resource_lookup_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class SettingsBindFlags {
  DEFAULT_ = G_SETTINGS_BIND_DEFAULT,
  GET_ = G_SETTINGS_BIND_GET,
  SET_ = G_SETTINGS_BIND_SET,
  NO_SENSITIVITY_ = G_SETTINGS_BIND_NO_SENSITIVITY,
  GET_NO_CHANGES_ = G_SETTINGS_BIND_GET_NO_CHANGES,
  INVERT_BOOLEAN_ = G_SETTINGS_BIND_INVERT_BOOLEAN,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SettingsBindFlags>
{ typedef GSettingsBindFlags type; }; 
template<> struct declare_cpptype_of<GSettingsBindFlags>
{ typedef Gio::SettingsBindFlags type; }; 

template<> struct declare_gtype_of<Gio::SettingsBindFlags>
{ static GType get_type() { return g_settings_bind_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class SocketMsgFlags {
  NONE_ = G_SOCKET_MSG_NONE,
  OOB_ = G_SOCKET_MSG_OOB,
  PEEK_ = G_SOCKET_MSG_PEEK,
  DONTROUTE_ = G_SOCKET_MSG_DONTROUTE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketMsgFlags>
{ typedef GSocketMsgFlags type; }; 
template<> struct declare_cpptype_of<GSocketMsgFlags>
{ typedef Gio::SocketMsgFlags type; }; 

template<> struct declare_gtype_of<Gio::SocketMsgFlags>
{ static GType get_type() { return g_socket_msg_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class SubprocessFlags {
  NONE_ = G_SUBPROCESS_FLAGS_NONE,
  STDIN_PIPE_ = G_SUBPROCESS_FLAGS_STDIN_PIPE,
  STDIN_INHERIT_ = G_SUBPROCESS_FLAGS_STDIN_INHERIT,
  STDOUT_PIPE_ = G_SUBPROCESS_FLAGS_STDOUT_PIPE,
  STDOUT_SILENCE_ = G_SUBPROCESS_FLAGS_STDOUT_SILENCE,
  STDERR_PIPE_ = G_SUBPROCESS_FLAGS_STDERR_PIPE,
  STDERR_SILENCE_ = G_SUBPROCESS_FLAGS_STDERR_SILENCE,
  STDERR_MERGE_ = G_SUBPROCESS_FLAGS_STDERR_MERGE,
  INHERIT_FDS_ = G_SUBPROCESS_FLAGS_INHERIT_FDS,
  SEARCH_PATH_FROM_ENVP_ = G_SUBPROCESS_FLAGS_SEARCH_PATH_FROM_ENVP,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SubprocessFlags>
{ typedef GSubprocessFlags type; }; 
template<> struct declare_cpptype_of<GSubprocessFlags>
{ typedef Gio::SubprocessFlags type; }; 

template<> struct declare_gtype_of<Gio::SubprocessFlags>
{ static GType get_type() { return g_subprocess_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class TestDBusFlags {
  NONE_ = G_TEST_DBUS_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TestDBusFlags>
{ typedef GTestDBusFlags type; }; 
template<> struct declare_cpptype_of<GTestDBusFlags>
{ typedef Gio::TestDBusFlags type; }; 

template<> struct declare_gtype_of<Gio::TestDBusFlags>
{ static GType get_type() { return g_test_dbus_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class TlsCertificateFlags {
  UNKNOWN_CA_ = G_TLS_CERTIFICATE_UNKNOWN_CA,
  BAD_IDENTITY_ = G_TLS_CERTIFICATE_BAD_IDENTITY,
  NOT_ACTIVATED_ = G_TLS_CERTIFICATE_NOT_ACTIVATED,
  EXPIRED_ = G_TLS_CERTIFICATE_EXPIRED,
  REVOKED_ = G_TLS_CERTIFICATE_REVOKED,
  INSECURE_ = G_TLS_CERTIFICATE_INSECURE,
  GENERIC_ERROR_ = G_TLS_CERTIFICATE_GENERIC_ERROR,
  VALIDATE_ALL_ = G_TLS_CERTIFICATE_VALIDATE_ALL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsCertificateFlags>
{ typedef GTlsCertificateFlags type; }; 
template<> struct declare_cpptype_of<GTlsCertificateFlags>
{ typedef Gio::TlsCertificateFlags type; }; 

template<> struct declare_gtype_of<Gio::TlsCertificateFlags>
{ static GType get_type() { return g_tls_certificate_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class TlsDatabaseVerifyFlags {
  NONE_ = G_TLS_DATABASE_VERIFY_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsDatabaseVerifyFlags>
{ typedef GTlsDatabaseVerifyFlags type; }; 
template<> struct declare_cpptype_of<GTlsDatabaseVerifyFlags>
{ typedef Gio::TlsDatabaseVerifyFlags type; }; 

template<> struct declare_gtype_of<Gio::TlsDatabaseVerifyFlags>
{ static GType get_type() { return g_tls_database_verify_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

enum class TlsPasswordFlags {
  NONE_ = G_TLS_PASSWORD_NONE,
  RETRY_ = G_TLS_PASSWORD_RETRY,
  MANY_TRIES_ = G_TLS_PASSWORD_MANY_TRIES,
  FINAL_TRY_ = G_TLS_PASSWORD_FINAL_TRY,
  PKCS11_USER_ = G_TLS_PASSWORD_PKCS11_USER,
  PKCS11_SECURITY_OFFICER_ = G_TLS_PASSWORD_PKCS11_SECURITY_OFFICER,
  PKCS11_CONTEXT_SPECIFIC_ = G_TLS_PASSWORD_PKCS11_CONTEXT_SPECIFIC,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsPasswordFlags>
{ typedef GTlsPasswordFlags type; }; 
template<> struct declare_cpptype_of<GTlsPasswordFlags>
{ typedef Gio::TlsPasswordFlags type; }; 

template<> struct declare_gtype_of<Gio::TlsPasswordFlags>
{ static GType get_type() { return g_tls_password_flags_get_type(); } };


} // namespace repository

} // namespace gi


#endif
