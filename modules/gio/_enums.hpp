// AUTO-GENERATED

#ifndef _GI_GIO__ENUMS_HPP_
#define _GI_GIO__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gio {

#if defined(BusType)
#undef BusType
#endif
enum class BusType {
  STARTER_ = G_BUS_TYPE_STARTER,
  NONE_ = G_BUS_TYPE_NONE,
  SYSTEM_ = G_BUS_TYPE_SYSTEM,
  SESSION_ = G_BUS_TYPE_SESSION,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::BusType>
{ typedef GBusType type; }; 
template<> struct declare_cpptype_of<GBusType>
{ typedef Gio::BusType type; }; 

template<> struct declare_gtype_of<Gio::BusType>
{ static GType get_type() { return g_bus_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(ConverterResult)
#undef ConverterResult
#endif
enum class ConverterResult {
  ERROR_ = G_CONVERTER_ERROR,
  CONVERTED_ = G_CONVERTER_CONVERTED,
  FINISHED_ = G_CONVERTER_FINISHED,
  FLUSHED_ = G_CONVERTER_FLUSHED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ConverterResult>
{ typedef GConverterResult type; }; 
template<> struct declare_cpptype_of<GConverterResult>
{ typedef Gio::ConverterResult type; }; 

template<> struct declare_gtype_of<Gio::ConverterResult>
{ static GType get_type() { return g_converter_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(CredentialsType)
#undef CredentialsType
#endif
enum class CredentialsType {
  INVALID_ = G_CREDENTIALS_TYPE_INVALID,
  LINUX_UCRED_ = G_CREDENTIALS_TYPE_LINUX_UCRED,
  FREEBSD_CMSGCRED_ = G_CREDENTIALS_TYPE_FREEBSD_CMSGCRED,
  OPENBSD_SOCKPEERCRED_ = G_CREDENTIALS_TYPE_OPENBSD_SOCKPEERCRED,
  SOLARIS_UCRED_ = G_CREDENTIALS_TYPE_SOLARIS_UCRED,
  NETBSD_UNPCBID_ = G_CREDENTIALS_TYPE_NETBSD_UNPCBID,
  APPLE_XUCRED_ = G_CREDENTIALS_TYPE_APPLE_XUCRED,
  WIN32_PID_ = G_CREDENTIALS_TYPE_WIN32_PID,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::CredentialsType>
{ typedef GCredentialsType type; }; 
template<> struct declare_cpptype_of<GCredentialsType>
{ typedef Gio::CredentialsType type; }; 

template<> struct declare_gtype_of<Gio::CredentialsType>
{ static GType get_type() { return g_credentials_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DBusError)
#undef DBusError
#endif
enum class DBusError {
  FAILED_ = G_DBUS_ERROR_FAILED,
  NO_MEMORY_ = G_DBUS_ERROR_NO_MEMORY,
  SERVICE_UNKNOWN_ = G_DBUS_ERROR_SERVICE_UNKNOWN,
  NAME_HAS_NO_OWNER_ = G_DBUS_ERROR_NAME_HAS_NO_OWNER,
  NO_REPLY_ = G_DBUS_ERROR_NO_REPLY,
  IO_ERROR_ = G_DBUS_ERROR_IO_ERROR,
  BAD_ADDRESS_ = G_DBUS_ERROR_BAD_ADDRESS,
  NOT_SUPPORTED_ = G_DBUS_ERROR_NOT_SUPPORTED,
  LIMITS_EXCEEDED_ = G_DBUS_ERROR_LIMITS_EXCEEDED,
  ACCESS_DENIED_ = G_DBUS_ERROR_ACCESS_DENIED,
  AUTH_FAILED_ = G_DBUS_ERROR_AUTH_FAILED,
  NO_SERVER_ = G_DBUS_ERROR_NO_SERVER,
  TIMEOUT_ = G_DBUS_ERROR_TIMEOUT,
  NO_NETWORK_ = G_DBUS_ERROR_NO_NETWORK,
  ADDRESS_IN_USE_ = G_DBUS_ERROR_ADDRESS_IN_USE,
  DISCONNECTED_ = G_DBUS_ERROR_DISCONNECTED,
  INVALID_ARGS_ = G_DBUS_ERROR_INVALID_ARGS,
  FILE_NOT_FOUND_ = G_DBUS_ERROR_FILE_NOT_FOUND,
  FILE_EXISTS_ = G_DBUS_ERROR_FILE_EXISTS,
  UNKNOWN_METHOD_ = G_DBUS_ERROR_UNKNOWN_METHOD,
  TIMED_OUT_ = G_DBUS_ERROR_TIMED_OUT,
  MATCH_RULE_NOT_FOUND_ = G_DBUS_ERROR_MATCH_RULE_NOT_FOUND,
  MATCH_RULE_INVALID_ = G_DBUS_ERROR_MATCH_RULE_INVALID,
  SPAWN_EXEC_FAILED_ = G_DBUS_ERROR_SPAWN_EXEC_FAILED,
  SPAWN_FORK_FAILED_ = G_DBUS_ERROR_SPAWN_FORK_FAILED,
  SPAWN_CHILD_EXITED_ = G_DBUS_ERROR_SPAWN_CHILD_EXITED,
  SPAWN_CHILD_SIGNALED_ = G_DBUS_ERROR_SPAWN_CHILD_SIGNALED,
  SPAWN_FAILED_ = G_DBUS_ERROR_SPAWN_FAILED,
  SPAWN_SETUP_FAILED_ = G_DBUS_ERROR_SPAWN_SETUP_FAILED,
  SPAWN_CONFIG_INVALID_ = G_DBUS_ERROR_SPAWN_CONFIG_INVALID,
  SPAWN_SERVICE_INVALID_ = G_DBUS_ERROR_SPAWN_SERVICE_INVALID,
  SPAWN_SERVICE_NOT_FOUND_ = G_DBUS_ERROR_SPAWN_SERVICE_NOT_FOUND,
  SPAWN_PERMISSIONS_INVALID_ = G_DBUS_ERROR_SPAWN_PERMISSIONS_INVALID,
  SPAWN_FILE_INVALID_ = G_DBUS_ERROR_SPAWN_FILE_INVALID,
  SPAWN_NO_MEMORY_ = G_DBUS_ERROR_SPAWN_NO_MEMORY,
  UNIX_PROCESS_ID_UNKNOWN_ = G_DBUS_ERROR_UNIX_PROCESS_ID_UNKNOWN,
  INVALID_SIGNATURE_ = G_DBUS_ERROR_INVALID_SIGNATURE,
  INVALID_FILE_CONTENT_ = G_DBUS_ERROR_INVALID_FILE_CONTENT,
  SELINUX_SECURITY_CONTEXT_UNKNOWN_ = G_DBUS_ERROR_SELINUX_SECURITY_CONTEXT_UNKNOWN,
  ADT_AUDIT_DATA_UNKNOWN_ = G_DBUS_ERROR_ADT_AUDIT_DATA_UNKNOWN,
  OBJECT_PATH_IN_USE_ = G_DBUS_ERROR_OBJECT_PATH_IN_USE,
  UNKNOWN_OBJECT_ = G_DBUS_ERROR_UNKNOWN_OBJECT,
  UNKNOWN_INTERFACE_ = G_DBUS_ERROR_UNKNOWN_INTERFACE,
  UNKNOWN_PROPERTY_ = G_DBUS_ERROR_UNKNOWN_PROPERTY,
  PROPERTY_READ_ONLY_ = G_DBUS_ERROR_PROPERTY_READ_ONLY,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusError>
{ typedef GDBusError type; }; 
template<> struct declare_cpptype_of<GDBusError>
{ typedef Gio::DBusError type; }; 

template<> struct declare_gtype_of<Gio::DBusError>
{ static GType get_type() { return g_dbus_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DBusMessageByteOrder)
#undef DBusMessageByteOrder
#endif
enum class DBusMessageByteOrder {
  BIG_ENDIAN_ = G_DBUS_MESSAGE_BYTE_ORDER_BIG_ENDIAN,
  LITTLE_ENDIAN_ = G_DBUS_MESSAGE_BYTE_ORDER_LITTLE_ENDIAN,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusMessageByteOrder>
{ typedef GDBusMessageByteOrder type; }; 
template<> struct declare_cpptype_of<GDBusMessageByteOrder>
{ typedef Gio::DBusMessageByteOrder type; }; 

template<> struct declare_gtype_of<Gio::DBusMessageByteOrder>
{ static GType get_type() { return g_dbus_message_byte_order_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DBusMessageHeaderField)
#undef DBusMessageHeaderField
#endif
enum class DBusMessageHeaderField {
  INVALID_ = G_DBUS_MESSAGE_HEADER_FIELD_INVALID,
  PATH_ = G_DBUS_MESSAGE_HEADER_FIELD_PATH,
  INTERFACE_ = G_DBUS_MESSAGE_HEADER_FIELD_INTERFACE,
  MEMBER_ = G_DBUS_MESSAGE_HEADER_FIELD_MEMBER,
  ERROR_NAME_ = G_DBUS_MESSAGE_HEADER_FIELD_ERROR_NAME,
  REPLY_SERIAL_ = G_DBUS_MESSAGE_HEADER_FIELD_REPLY_SERIAL,
  DESTINATION_ = G_DBUS_MESSAGE_HEADER_FIELD_DESTINATION,
  SENDER_ = G_DBUS_MESSAGE_HEADER_FIELD_SENDER,
  SIGNATURE_ = G_DBUS_MESSAGE_HEADER_FIELD_SIGNATURE,
  NUM_UNIX_FDS_ = G_DBUS_MESSAGE_HEADER_FIELD_NUM_UNIX_FDS,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusMessageHeaderField>
{ typedef GDBusMessageHeaderField type; }; 
template<> struct declare_cpptype_of<GDBusMessageHeaderField>
{ typedef Gio::DBusMessageHeaderField type; }; 

template<> struct declare_gtype_of<Gio::DBusMessageHeaderField>
{ static GType get_type() { return g_dbus_message_header_field_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DBusMessageType)
#undef DBusMessageType
#endif
enum class DBusMessageType {
  INVALID_ = G_DBUS_MESSAGE_TYPE_INVALID,
  METHOD_CALL_ = G_DBUS_MESSAGE_TYPE_METHOD_CALL,
  METHOD_RETURN_ = G_DBUS_MESSAGE_TYPE_METHOD_RETURN,
  ERROR_ = G_DBUS_MESSAGE_TYPE_ERROR,
  SIGNAL_ = G_DBUS_MESSAGE_TYPE_SIGNAL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DBusMessageType>
{ typedef GDBusMessageType type; }; 
template<> struct declare_cpptype_of<GDBusMessageType>
{ typedef Gio::DBusMessageType type; }; 

template<> struct declare_gtype_of<Gio::DBusMessageType>
{ static GType get_type() { return g_dbus_message_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DataStreamByteOrder)
#undef DataStreamByteOrder
#endif
enum class DataStreamByteOrder {
  BIG_ENDIAN_ = G_DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  LITTLE_ENDIAN_ = G_DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  HOST_ENDIAN_ = G_DATA_STREAM_BYTE_ORDER_HOST_ENDIAN,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DataStreamByteOrder>
{ typedef GDataStreamByteOrder type; }; 
template<> struct declare_cpptype_of<GDataStreamByteOrder>
{ typedef Gio::DataStreamByteOrder type; }; 

template<> struct declare_gtype_of<Gio::DataStreamByteOrder>
{ static GType get_type() { return g_data_stream_byte_order_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DataStreamNewlineType)
#undef DataStreamNewlineType
#endif
enum class DataStreamNewlineType {
  LF_ = G_DATA_STREAM_NEWLINE_TYPE_LF,
  CR_ = G_DATA_STREAM_NEWLINE_TYPE_CR,
  CR_LF_ = G_DATA_STREAM_NEWLINE_TYPE_CR_LF,
  ANY_ = G_DATA_STREAM_NEWLINE_TYPE_ANY,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DataStreamNewlineType>
{ typedef GDataStreamNewlineType type; }; 
template<> struct declare_cpptype_of<GDataStreamNewlineType>
{ typedef Gio::DataStreamNewlineType type; }; 

template<> struct declare_gtype_of<Gio::DataStreamNewlineType>
{ static GType get_type() { return g_data_stream_newline_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(DriveStartStopType)
#undef DriveStartStopType
#endif
enum class DriveStartStopType {
  UNKNOWN_ = G_DRIVE_START_STOP_TYPE_UNKNOWN,
  SHUTDOWN_ = G_DRIVE_START_STOP_TYPE_SHUTDOWN,
  NETWORK_ = G_DRIVE_START_STOP_TYPE_NETWORK,
  MULTIDISK_ = G_DRIVE_START_STOP_TYPE_MULTIDISK,
  PASSWORD_ = G_DRIVE_START_STOP_TYPE_PASSWORD,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::DriveStartStopType>
{ typedef GDriveStartStopType type; }; 
template<> struct declare_cpptype_of<GDriveStartStopType>
{ typedef Gio::DriveStartStopType type; }; 

template<> struct declare_gtype_of<Gio::DriveStartStopType>
{ static GType get_type() { return g_drive_start_stop_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(EmblemOrigin)
#undef EmblemOrigin
#endif
enum class EmblemOrigin {
  UNKNOWN_ = G_EMBLEM_ORIGIN_UNKNOWN,
  DEVICE_ = G_EMBLEM_ORIGIN_DEVICE,
  LIVEMETADATA_ = G_EMBLEM_ORIGIN_LIVEMETADATA,
  TAG_ = G_EMBLEM_ORIGIN_TAG,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::EmblemOrigin>
{ typedef GEmblemOrigin type; }; 
template<> struct declare_cpptype_of<GEmblemOrigin>
{ typedef Gio::EmblemOrigin type; }; 

template<> struct declare_gtype_of<Gio::EmblemOrigin>
{ static GType get_type() { return g_emblem_origin_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(FileAttributeStatus)
#undef FileAttributeStatus
#endif
enum class FileAttributeStatus {
  UNSET_ = G_FILE_ATTRIBUTE_STATUS_UNSET,
  SET_ = G_FILE_ATTRIBUTE_STATUS_SET,
  ERROR_SETTING_ = G_FILE_ATTRIBUTE_STATUS_ERROR_SETTING,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileAttributeStatus>
{ typedef GFileAttributeStatus type; }; 
template<> struct declare_cpptype_of<GFileAttributeStatus>
{ typedef Gio::FileAttributeStatus type; }; 

template<> struct declare_gtype_of<Gio::FileAttributeStatus>
{ static GType get_type() { return g_file_attribute_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(FileAttributeType)
#undef FileAttributeType
#endif
enum class FileAttributeType {
  INVALID_ = G_FILE_ATTRIBUTE_TYPE_INVALID,
  STRING_ = G_FILE_ATTRIBUTE_TYPE_STRING,
  BYTE_STRING_ = G_FILE_ATTRIBUTE_TYPE_BYTE_STRING,
  BOOLEAN_ = G_FILE_ATTRIBUTE_TYPE_BOOLEAN,
  UINT32_ = G_FILE_ATTRIBUTE_TYPE_UINT32,
  INT32_ = G_FILE_ATTRIBUTE_TYPE_INT32,
  UINT64_ = G_FILE_ATTRIBUTE_TYPE_UINT64,
  INT64_ = G_FILE_ATTRIBUTE_TYPE_INT64,
  OBJECT_ = G_FILE_ATTRIBUTE_TYPE_OBJECT,
  STRINGV_ = G_FILE_ATTRIBUTE_TYPE_STRINGV,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileAttributeType>
{ typedef GFileAttributeType type; }; 
template<> struct declare_cpptype_of<GFileAttributeType>
{ typedef Gio::FileAttributeType type; }; 

template<> struct declare_gtype_of<Gio::FileAttributeType>
{ static GType get_type() { return g_file_attribute_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(FileMonitorEvent)
#undef FileMonitorEvent
#endif
enum class FileMonitorEvent {
  CHANGED_ = G_FILE_MONITOR_EVENT_CHANGED,
  CHANGES_DONE_HINT_ = G_FILE_MONITOR_EVENT_CHANGES_DONE_HINT,
  DELETED_ = G_FILE_MONITOR_EVENT_DELETED,
  CREATED_ = G_FILE_MONITOR_EVENT_CREATED,
  ATTRIBUTE_CHANGED_ = G_FILE_MONITOR_EVENT_ATTRIBUTE_CHANGED,
  PRE_UNMOUNT_ = G_FILE_MONITOR_EVENT_PRE_UNMOUNT,
  UNMOUNTED_ = G_FILE_MONITOR_EVENT_UNMOUNTED,
  MOVED_ = G_FILE_MONITOR_EVENT_MOVED,
  RENAMED_ = G_FILE_MONITOR_EVENT_RENAMED,
  MOVED_IN_ = G_FILE_MONITOR_EVENT_MOVED_IN,
  MOVED_OUT_ = G_FILE_MONITOR_EVENT_MOVED_OUT,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileMonitorEvent>
{ typedef GFileMonitorEvent type; }; 
template<> struct declare_cpptype_of<GFileMonitorEvent>
{ typedef Gio::FileMonitorEvent type; }; 

template<> struct declare_gtype_of<Gio::FileMonitorEvent>
{ static GType get_type() { return g_file_monitor_event_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(FileType)
#undef FileType
#endif
enum class FileType {
  UNKNOWN_ = G_FILE_TYPE_UNKNOWN,
  REGULAR_ = G_FILE_TYPE_REGULAR,
  DIRECTORY_ = G_FILE_TYPE_DIRECTORY,
  SYMBOLIC_LINK_ = G_FILE_TYPE_SYMBOLIC_LINK,
  SPECIAL_ = G_FILE_TYPE_SPECIAL,
  SHORTCUT_ = G_FILE_TYPE_SHORTCUT,
  MOUNTABLE_ = G_FILE_TYPE_MOUNTABLE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FileType>
{ typedef GFileType type; }; 
template<> struct declare_cpptype_of<GFileType>
{ typedef Gio::FileType type; }; 

template<> struct declare_gtype_of<Gio::FileType>
{ static GType get_type() { return g_file_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(FilesystemPreviewType)
#undef FilesystemPreviewType
#endif
enum class FilesystemPreviewType {
  IF_ALWAYS_ = G_FILESYSTEM_PREVIEW_TYPE_IF_ALWAYS,
  IF_LOCAL_ = G_FILESYSTEM_PREVIEW_TYPE_IF_LOCAL,
  NEVER_ = G_FILESYSTEM_PREVIEW_TYPE_NEVER,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::FilesystemPreviewType>
{ typedef GFilesystemPreviewType type; }; 
template<> struct declare_cpptype_of<GFilesystemPreviewType>
{ typedef Gio::FilesystemPreviewType type; }; 

template<> struct declare_gtype_of<Gio::FilesystemPreviewType>
{ static GType get_type() { return g_filesystem_preview_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(IOErrorEnum)
#undef IOErrorEnum
#endif
enum class IOErrorEnum {
  FAILED_ = G_IO_ERROR_FAILED,
  NOT_FOUND_ = G_IO_ERROR_NOT_FOUND,
  EXISTS_ = G_IO_ERROR_EXISTS,
  IS_DIRECTORY_ = G_IO_ERROR_IS_DIRECTORY,
  NOT_DIRECTORY_ = G_IO_ERROR_NOT_DIRECTORY,
  NOT_EMPTY_ = G_IO_ERROR_NOT_EMPTY,
  NOT_REGULAR_FILE_ = G_IO_ERROR_NOT_REGULAR_FILE,
  NOT_SYMBOLIC_LINK_ = G_IO_ERROR_NOT_SYMBOLIC_LINK,
  NOT_MOUNTABLE_FILE_ = G_IO_ERROR_NOT_MOUNTABLE_FILE,
  FILENAME_TOO_LONG_ = G_IO_ERROR_FILENAME_TOO_LONG,
  INVALID_FILENAME_ = G_IO_ERROR_INVALID_FILENAME,
  TOO_MANY_LINKS_ = G_IO_ERROR_TOO_MANY_LINKS,
  NO_SPACE_ = G_IO_ERROR_NO_SPACE,
  INVALID_ARGUMENT_ = G_IO_ERROR_INVALID_ARGUMENT,
  PERMISSION_DENIED_ = G_IO_ERROR_PERMISSION_DENIED,
  NOT_SUPPORTED_ = G_IO_ERROR_NOT_SUPPORTED,
  NOT_MOUNTED_ = G_IO_ERROR_NOT_MOUNTED,
  ALREADY_MOUNTED_ = G_IO_ERROR_ALREADY_MOUNTED,
  CLOSED_ = G_IO_ERROR_CLOSED,
  CANCELLED_ = G_IO_ERROR_CANCELLED,
  PENDING_ = G_IO_ERROR_PENDING,
  READ_ONLY_ = G_IO_ERROR_READ_ONLY,
  CANT_CREATE_BACKUP_ = G_IO_ERROR_CANT_CREATE_BACKUP,
  WRONG_ETAG_ = G_IO_ERROR_WRONG_ETAG,
  TIMED_OUT_ = G_IO_ERROR_TIMED_OUT,
  WOULD_RECURSE_ = G_IO_ERROR_WOULD_RECURSE,
  BUSY_ = G_IO_ERROR_BUSY,
  WOULD_BLOCK_ = G_IO_ERROR_WOULD_BLOCK,
  HOST_NOT_FOUND_ = G_IO_ERROR_HOST_NOT_FOUND,
  WOULD_MERGE_ = G_IO_ERROR_WOULD_MERGE,
  FAILED_HANDLED_ = G_IO_ERROR_FAILED_HANDLED,
  TOO_MANY_OPEN_FILES_ = G_IO_ERROR_TOO_MANY_OPEN_FILES,
  NOT_INITIALIZED_ = G_IO_ERROR_NOT_INITIALIZED,
  ADDRESS_IN_USE_ = G_IO_ERROR_ADDRESS_IN_USE,
  PARTIAL_INPUT_ = G_IO_ERROR_PARTIAL_INPUT,
  INVALID_DATA_ = G_IO_ERROR_INVALID_DATA,
  DBUS_ERROR_ = G_IO_ERROR_DBUS_ERROR,
  HOST_UNREACHABLE_ = G_IO_ERROR_HOST_UNREACHABLE,
  NETWORK_UNREACHABLE_ = G_IO_ERROR_NETWORK_UNREACHABLE,
  CONNECTION_REFUSED_ = G_IO_ERROR_CONNECTION_REFUSED,
  PROXY_FAILED_ = G_IO_ERROR_PROXY_FAILED,
  PROXY_AUTH_FAILED_ = G_IO_ERROR_PROXY_AUTH_FAILED,
  PROXY_NEED_AUTH_ = G_IO_ERROR_PROXY_NEED_AUTH,
  PROXY_NOT_ALLOWED_ = G_IO_ERROR_PROXY_NOT_ALLOWED,
  BROKEN_PIPE_ = G_IO_ERROR_BROKEN_PIPE,
  CONNECTION_CLOSED_ = G_IO_ERROR_CONNECTION_CLOSED,
  NOT_CONNECTED_ = G_IO_ERROR_NOT_CONNECTED,
  MESSAGE_TOO_LARGE_ = G_IO_ERROR_MESSAGE_TOO_LARGE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::IOErrorEnum>
{ typedef GIOErrorEnum type; }; 
template<> struct declare_cpptype_of<GIOErrorEnum>
{ typedef Gio::IOErrorEnum type; }; 

template<> struct declare_gtype_of<Gio::IOErrorEnum>
{ static GType get_type() { return g_io_error_enum_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(IOModuleScopeFlags)
#undef IOModuleScopeFlags
#endif
enum class IOModuleScopeFlags {
  NONE_ = G_IO_MODULE_SCOPE_NONE,
  BLOCK_DUPLICATES_ = G_IO_MODULE_SCOPE_BLOCK_DUPLICATES,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::IOModuleScopeFlags>
{ typedef GIOModuleScopeFlags type; }; 
template<> struct declare_cpptype_of<GIOModuleScopeFlags>
{ typedef Gio::IOModuleScopeFlags type; }; 

template<> struct declare_gtype_of<Gio::IOModuleScopeFlags>
{ static GType get_type() { return g_io_module_scope_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(MemoryMonitorWarningLevel)
#undef MemoryMonitorWarningLevel
#endif
enum class MemoryMonitorWarningLevel {
  LOW_ = G_MEMORY_MONITOR_WARNING_LEVEL_LOW,
  MEDIUM_ = G_MEMORY_MONITOR_WARNING_LEVEL_MEDIUM,
  CRITICAL_ = G_MEMORY_MONITOR_WARNING_LEVEL_CRITICAL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::MemoryMonitorWarningLevel>
{ typedef GMemoryMonitorWarningLevel type; }; 
template<> struct declare_cpptype_of<GMemoryMonitorWarningLevel>
{ typedef Gio::MemoryMonitorWarningLevel type; }; 

template<> struct declare_gtype_of<Gio::MemoryMonitorWarningLevel>
{ static GType get_type() { return g_memory_monitor_warning_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(MountOperationResult)
#undef MountOperationResult
#endif
enum class MountOperationResult {
  HANDLED_ = G_MOUNT_OPERATION_HANDLED,
  ABORTED_ = G_MOUNT_OPERATION_ABORTED,
  UNHANDLED_ = G_MOUNT_OPERATION_UNHANDLED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::MountOperationResult>
{ typedef GMountOperationResult type; }; 
template<> struct declare_cpptype_of<GMountOperationResult>
{ typedef Gio::MountOperationResult type; }; 

template<> struct declare_gtype_of<Gio::MountOperationResult>
{ static GType get_type() { return g_mount_operation_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(NetworkConnectivity)
#undef NetworkConnectivity
#endif
enum class NetworkConnectivity {
  LOCAL_ = G_NETWORK_CONNECTIVITY_LOCAL,
  LIMITED_ = G_NETWORK_CONNECTIVITY_LIMITED,
  PORTAL_ = G_NETWORK_CONNECTIVITY_PORTAL,
  FULL_ = G_NETWORK_CONNECTIVITY_FULL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::NetworkConnectivity>
{ typedef GNetworkConnectivity type; }; 
template<> struct declare_cpptype_of<GNetworkConnectivity>
{ typedef Gio::NetworkConnectivity type; }; 

template<> struct declare_gtype_of<Gio::NetworkConnectivity>
{ static GType get_type() { return g_network_connectivity_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(NotificationPriority)
#undef NotificationPriority
#endif
enum class NotificationPriority {
  NORMAL_ = G_NOTIFICATION_PRIORITY_NORMAL,
  LOW_ = G_NOTIFICATION_PRIORITY_LOW,
  HIGH_ = G_NOTIFICATION_PRIORITY_HIGH,
  URGENT_ = G_NOTIFICATION_PRIORITY_URGENT,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::NotificationPriority>
{ typedef GNotificationPriority type; }; 
template<> struct declare_cpptype_of<GNotificationPriority>
{ typedef Gio::NotificationPriority type; }; 

template<> struct declare_gtype_of<Gio::NotificationPriority>
{ static GType get_type() { return g_notification_priority_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(PasswordSave)
#undef PasswordSave
#endif
enum class PasswordSave {
  NEVER_ = G_PASSWORD_SAVE_NEVER,
  FOR_SESSION_ = G_PASSWORD_SAVE_FOR_SESSION,
  PERMANENTLY_ = G_PASSWORD_SAVE_PERMANENTLY,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::PasswordSave>
{ typedef GPasswordSave type; }; 
template<> struct declare_cpptype_of<GPasswordSave>
{ typedef Gio::PasswordSave type; }; 

template<> struct declare_gtype_of<Gio::PasswordSave>
{ static GType get_type() { return g_password_save_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(PollableReturn)
#undef PollableReturn
#endif
enum class PollableReturn {
  FAILED_ = G_POLLABLE_RETURN_FAILED,
  OK_ = G_POLLABLE_RETURN_OK,
  WOULD_BLOCK_ = G_POLLABLE_RETURN_WOULD_BLOCK,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::PollableReturn>
{ typedef GPollableReturn type; }; 
template<> struct declare_cpptype_of<GPollableReturn>
{ typedef Gio::PollableReturn type; }; 

template<> struct declare_gtype_of<Gio::PollableReturn>
{ static GType get_type() { return g_pollable_return_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(ResolverError)
#undef ResolverError
#endif
enum class ResolverError {
  NOT_FOUND_ = G_RESOLVER_ERROR_NOT_FOUND,
  TEMPORARY_FAILURE_ = G_RESOLVER_ERROR_TEMPORARY_FAILURE,
  INTERNAL_ = G_RESOLVER_ERROR_INTERNAL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResolverError>
{ typedef GResolverError type; }; 
template<> struct declare_cpptype_of<GResolverError>
{ typedef Gio::ResolverError type; }; 

template<> struct declare_gtype_of<Gio::ResolverError>
{ static GType get_type() { return g_resolver_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(ResolverRecordType)
#undef ResolverRecordType
#endif
enum class ResolverRecordType {
  SRV_ = G_RESOLVER_RECORD_SRV,
  MX_ = G_RESOLVER_RECORD_MX,
  TXT_ = G_RESOLVER_RECORD_TXT,
  SOA_ = G_RESOLVER_RECORD_SOA,
  NS_ = G_RESOLVER_RECORD_NS,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResolverRecordType>
{ typedef GResolverRecordType type; }; 
template<> struct declare_cpptype_of<GResolverRecordType>
{ typedef Gio::ResolverRecordType type; }; 

template<> struct declare_gtype_of<Gio::ResolverRecordType>
{ static GType get_type() { return g_resolver_record_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(ResourceError)
#undef ResourceError
#endif
enum class ResourceError {
  NOT_FOUND_ = G_RESOURCE_ERROR_NOT_FOUND,
  INTERNAL_ = G_RESOURCE_ERROR_INTERNAL,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ResourceError>
{ typedef GResourceError type; }; 
template<> struct declare_cpptype_of<GResourceError>
{ typedef Gio::ResourceError type; }; 

template<> struct declare_gtype_of<Gio::ResourceError>
{ static GType get_type() { return g_resource_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(SocketClientEvent)
#undef SocketClientEvent
#endif
enum class SocketClientEvent {
  RESOLVING_ = G_SOCKET_CLIENT_RESOLVING,
  RESOLVED_ = G_SOCKET_CLIENT_RESOLVED,
  CONNECTING_ = G_SOCKET_CLIENT_CONNECTING,
  CONNECTED_ = G_SOCKET_CLIENT_CONNECTED,
  PROXY_NEGOTIATING_ = G_SOCKET_CLIENT_PROXY_NEGOTIATING,
  PROXY_NEGOTIATED_ = G_SOCKET_CLIENT_PROXY_NEGOTIATED,
  TLS_HANDSHAKING_ = G_SOCKET_CLIENT_TLS_HANDSHAKING,
  TLS_HANDSHAKED_ = G_SOCKET_CLIENT_TLS_HANDSHAKED,
  COMPLETE_ = G_SOCKET_CLIENT_COMPLETE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketClientEvent>
{ typedef GSocketClientEvent type; }; 
template<> struct declare_cpptype_of<GSocketClientEvent>
{ typedef Gio::SocketClientEvent type; }; 

template<> struct declare_gtype_of<Gio::SocketClientEvent>
{ static GType get_type() { return g_socket_client_event_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(SocketFamily)
#undef SocketFamily
#endif
enum class SocketFamily {
  INVALID_ = G_SOCKET_FAMILY_INVALID,
  UNIX_ = G_SOCKET_FAMILY_UNIX,
  IPV4_ = G_SOCKET_FAMILY_IPV4,
  IPV6_ = G_SOCKET_FAMILY_IPV6,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketFamily>
{ typedef GSocketFamily type; }; 
template<> struct declare_cpptype_of<GSocketFamily>
{ typedef Gio::SocketFamily type; }; 

template<> struct declare_gtype_of<Gio::SocketFamily>
{ static GType get_type() { return g_socket_family_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(SocketListenerEvent)
#undef SocketListenerEvent
#endif
enum class SocketListenerEvent {
  BINDING_ = G_SOCKET_LISTENER_BINDING,
  BOUND_ = G_SOCKET_LISTENER_BOUND,
  LISTENING_ = G_SOCKET_LISTENER_LISTENING,
  LISTENED_ = G_SOCKET_LISTENER_LISTENED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketListenerEvent>
{ typedef GSocketListenerEvent type; }; 
template<> struct declare_cpptype_of<GSocketListenerEvent>
{ typedef Gio::SocketListenerEvent type; }; 

template<> struct declare_gtype_of<Gio::SocketListenerEvent>
{ static GType get_type() { return g_socket_listener_event_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(SocketProtocol)
#undef SocketProtocol
#endif
enum class SocketProtocol {
  UNKNOWN_ = G_SOCKET_PROTOCOL_UNKNOWN,
  DEFAULT_ = G_SOCKET_PROTOCOL_DEFAULT,
  TCP_ = G_SOCKET_PROTOCOL_TCP,
  UDP_ = G_SOCKET_PROTOCOL_UDP,
  SCTP_ = G_SOCKET_PROTOCOL_SCTP,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketProtocol>
{ typedef GSocketProtocol type; }; 
template<> struct declare_cpptype_of<GSocketProtocol>
{ typedef Gio::SocketProtocol type; }; 

template<> struct declare_gtype_of<Gio::SocketProtocol>
{ static GType get_type() { return g_socket_protocol_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(SocketType)
#undef SocketType
#endif
enum class SocketType {
  INVALID_ = G_SOCKET_TYPE_INVALID,
  STREAM_ = G_SOCKET_TYPE_STREAM,
  DATAGRAM_ = G_SOCKET_TYPE_DATAGRAM,
  SEQPACKET_ = G_SOCKET_TYPE_SEQPACKET,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::SocketType>
{ typedef GSocketType type; }; 
template<> struct declare_cpptype_of<GSocketType>
{ typedef Gio::SocketType type; }; 

template<> struct declare_gtype_of<Gio::SocketType>
{ static GType get_type() { return g_socket_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsAuthenticationMode)
#undef TlsAuthenticationMode
#endif
enum class TlsAuthenticationMode {
  NONE_ = G_TLS_AUTHENTICATION_NONE,
  REQUESTED_ = G_TLS_AUTHENTICATION_REQUESTED,
  REQUIRED_ = G_TLS_AUTHENTICATION_REQUIRED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsAuthenticationMode>
{ typedef GTlsAuthenticationMode type; }; 
template<> struct declare_cpptype_of<GTlsAuthenticationMode>
{ typedef Gio::TlsAuthenticationMode type; }; 

template<> struct declare_gtype_of<Gio::TlsAuthenticationMode>
{ static GType get_type() { return g_tls_authentication_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsCertificateRequestFlags)
#undef TlsCertificateRequestFlags
#endif
enum class TlsCertificateRequestFlags {
  NONE_ = G_TLS_CERTIFICATE_REQUEST_NONE,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsCertificateRequestFlags>
{ typedef GTlsCertificateRequestFlags type; }; 
template<> struct declare_cpptype_of<GTlsCertificateRequestFlags>
{ typedef Gio::TlsCertificateRequestFlags type; }; 

template<> struct declare_gtype_of<Gio::TlsCertificateRequestFlags>
{ static GType get_type() { return g_tls_certificate_request_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsChannelBindingError)
#undef TlsChannelBindingError
#endif
enum class TlsChannelBindingError {
  NOT_IMPLEMENTED_ = G_TLS_CHANNEL_BINDING_ERROR_NOT_IMPLEMENTED,
  INVALID_STATE_ = G_TLS_CHANNEL_BINDING_ERROR_INVALID_STATE,
  NOT_AVAILABLE_ = G_TLS_CHANNEL_BINDING_ERROR_NOT_AVAILABLE,
  NOT_SUPPORTED_ = G_TLS_CHANNEL_BINDING_ERROR_NOT_SUPPORTED,
  GENERAL_ERROR_ = G_TLS_CHANNEL_BINDING_ERROR_GENERAL_ERROR,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsChannelBindingError>
{ typedef GTlsChannelBindingError type; }; 
template<> struct declare_cpptype_of<GTlsChannelBindingError>
{ typedef Gio::TlsChannelBindingError type; }; 

template<> struct declare_gtype_of<Gio::TlsChannelBindingError>
{ static GType get_type() { return g_tls_channel_binding_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsChannelBindingType)
#undef TlsChannelBindingType
#endif
enum class TlsChannelBindingType {
  UNIQUE_ = G_TLS_CHANNEL_BINDING_TLS_UNIQUE,
  SERVER_END_POINT_ = G_TLS_CHANNEL_BINDING_TLS_SERVER_END_POINT,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsChannelBindingType>
{ typedef GTlsChannelBindingType type; }; 
template<> struct declare_cpptype_of<GTlsChannelBindingType>
{ typedef Gio::TlsChannelBindingType type; }; 

template<> struct declare_gtype_of<Gio::TlsChannelBindingType>
{ static GType get_type() { return g_tls_channel_binding_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsDatabaseLookupFlags)
#undef TlsDatabaseLookupFlags
#endif
enum class TlsDatabaseLookupFlags {
  NONE_ = G_TLS_DATABASE_LOOKUP_NONE,
  KEYPAIR_ = G_TLS_DATABASE_LOOKUP_KEYPAIR,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsDatabaseLookupFlags>
{ typedef GTlsDatabaseLookupFlags type; }; 
template<> struct declare_cpptype_of<GTlsDatabaseLookupFlags>
{ typedef Gio::TlsDatabaseLookupFlags type; }; 

template<> struct declare_gtype_of<Gio::TlsDatabaseLookupFlags>
{ static GType get_type() { return g_tls_database_lookup_flags_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsError)
#undef TlsError
#endif
enum class TlsError {
  UNAVAILABLE_ = G_TLS_ERROR_UNAVAILABLE,
  MISC_ = G_TLS_ERROR_MISC,
  BAD_CERTIFICATE_ = G_TLS_ERROR_BAD_CERTIFICATE,
  NOT_TLS_ = G_TLS_ERROR_NOT_TLS,
  HANDSHAKE_ = G_TLS_ERROR_HANDSHAKE,
  CERTIFICATE_REQUIRED_ = G_TLS_ERROR_CERTIFICATE_REQUIRED,
  EOF_ = G_TLS_ERROR_EOF,
  INAPPROPRIATE_FALLBACK_ = G_TLS_ERROR_INAPPROPRIATE_FALLBACK,
  BAD_CERTIFICATE_PASSWORD_ = G_TLS_ERROR_BAD_CERTIFICATE_PASSWORD,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsError>
{ typedef GTlsError type; }; 
template<> struct declare_cpptype_of<GTlsError>
{ typedef Gio::TlsError type; }; 

template<> struct declare_gtype_of<Gio::TlsError>
{ static GType get_type() { return g_tls_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsInteractionResult)
#undef TlsInteractionResult
#endif
enum class TlsInteractionResult {
  UNHANDLED_ = G_TLS_INTERACTION_UNHANDLED,
  HANDLED_ = G_TLS_INTERACTION_HANDLED,
  FAILED_ = G_TLS_INTERACTION_FAILED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsInteractionResult>
{ typedef GTlsInteractionResult type; }; 
template<> struct declare_cpptype_of<GTlsInteractionResult>
{ typedef Gio::TlsInteractionResult type; }; 

template<> struct declare_gtype_of<Gio::TlsInteractionResult>
{ static GType get_type() { return g_tls_interaction_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(TlsProtocolVersion)
#undef TlsProtocolVersion
#endif
enum class TlsProtocolVersion {
  UNKNOWN_ = G_TLS_PROTOCOL_VERSION_UNKNOWN,
  SSL_3_0_ = G_TLS_PROTOCOL_VERSION_SSL_3_0,
  TLS_1_0_ = G_TLS_PROTOCOL_VERSION_TLS_1_0,
  TLS_1_1_ = G_TLS_PROTOCOL_VERSION_TLS_1_1,
  TLS_1_2_ = G_TLS_PROTOCOL_VERSION_TLS_1_2,
  TLS_1_3_ = G_TLS_PROTOCOL_VERSION_TLS_1_3,
  DTLS_1_0_ = G_TLS_PROTOCOL_VERSION_DTLS_1_0,
  DTLS_1_2_ = G_TLS_PROTOCOL_VERSION_DTLS_1_2,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::TlsProtocolVersion>
{ typedef GTlsProtocolVersion type; }; 
template<> struct declare_cpptype_of<GTlsProtocolVersion>
{ typedef Gio::TlsProtocolVersion type; }; 

template<> struct declare_gtype_of<Gio::TlsProtocolVersion>
{ static GType get_type() { return g_tls_protocol_version_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(UnixSocketAddressType)
#undef UnixSocketAddressType
#endif
enum class UnixSocketAddressType {
  INVALID_ = G_UNIX_SOCKET_ADDRESS_INVALID,
  ANONYMOUS_ = G_UNIX_SOCKET_ADDRESS_ANONYMOUS,
  PATH_ = G_UNIX_SOCKET_ADDRESS_PATH,
  ABSTRACT_ = G_UNIX_SOCKET_ADDRESS_ABSTRACT,
  ABSTRACT_PADDED_ = G_UNIX_SOCKET_ADDRESS_ABSTRACT_PADDED,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::UnixSocketAddressType>
{ typedef GUnixSocketAddressType type; }; 
template<> struct declare_cpptype_of<GUnixSocketAddressType>
{ typedef Gio::UnixSocketAddressType type; }; 

template<> struct declare_gtype_of<Gio::UnixSocketAddressType>
{ static GType get_type() { return g_unix_socket_address_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

#if defined(ZlibCompressorFormat)
#undef ZlibCompressorFormat
#endif
enum class ZlibCompressorFormat {
  ZLIB_ = G_ZLIB_COMPRESSOR_FORMAT_ZLIB,
  GZIP_ = G_ZLIB_COMPRESSOR_FORMAT_GZIP,
  RAW_ = G_ZLIB_COMPRESSOR_FORMAT_RAW,
};

} // namespace Gio

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gio::ZlibCompressorFormat>
{ typedef GZlibCompressorFormat type; }; 
template<> struct declare_cpptype_of<GZlibCompressorFormat>
{ typedef Gio::ZlibCompressorFormat type; }; 

template<> struct declare_gtype_of<Gio::ZlibCompressorFormat>
{ static GType get_type() { return g_zlib_compressor_format_get_type(); } };


} // namespace repository

} // namespace gi


#endif
