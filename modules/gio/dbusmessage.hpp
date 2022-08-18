// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMESSAGE_HPP_
#define _GI_GIO_DBUSMESSAGE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class UnixFDList;

class DBusMessage;

namespace base {


#define GI_GIO_DBUSMESSAGE_BASE base::DBusMessageBase
class DBusMessageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GDBusMessage BaseObjectType;

DBusMessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_dbus_message_get_type(); } 

// GDBusMessage* g_dbus_message_new ();
// ::GDBusMessage* g_dbus_message_new ();
static GI_INLINE_DECL Gio::DBusMessage new_ () noexcept;

// GDBusMessage* g_dbus_message_new_from_blob (guchar* blob, gsize blob_len, GDBusCapabilityFlags capabilities, GError ** error);
// ::GDBusMessage* g_dbus_message_new_from_blob (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
static GI_INLINE_DECL Gio::DBusMessage new_from_blob (guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities);
static GI_INLINE_DECL Gio::DBusMessage new_from_blob (guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept;

// GDBusMessage* g_dbus_message_new_method_call (const gchar* name, const gchar* path, const gchar* interface_, const gchar* method);
// ::GDBusMessage* g_dbus_message_new_method_call (const char* name, const char* path, const char* interface_, const char* method);
static GI_INLINE_DECL Gio::DBusMessage new_method_call (const std::string & name, const std::string & path, const std::string & interface_, const std::string & method) noexcept;
static GI_INLINE_DECL Gio::DBusMessage new_method_call (const std::string & path, const std::string & method) noexcept;

// GDBusMessage* g_dbus_message_new_signal (const gchar* path, const gchar* interface_, const gchar* signal);
// ::GDBusMessage* g_dbus_message_new_signal (const char* path, const char* interface_, const char* signal);
static GI_INLINE_DECL Gio::DBusMessage new_signal (const std::string & path, const std::string & interface_, const std::string & signal) noexcept;

// gssize g_dbus_message_bytes_needed (guchar* blob, gsize blob_len, GError ** error);
// gssize g_dbus_message_bytes_needed (guint8* blob, gsize blob_len, GError ** error);
static GI_INLINE_DECL gssize bytes_needed (guint8 * blob, gsize blob_len);
static GI_INLINE_DECL gssize bytes_needed (guint8 * blob, gsize blob_len, GLib::Error * _error) noexcept;

// GDBusMessage* g_dbus_message_copy (GDBusMessage* message, GError ** error);
// ::GDBusMessage* g_dbus_message_copy (::GDBusMessage* message, GError ** error);
GI_INLINE_DECL Gio::DBusMessage copy ();
GI_INLINE_DECL Gio::DBusMessage copy (GLib::Error * _error) noexcept;

// const gchar* g_dbus_message_get_arg0 (GDBusMessage* message);
// const char* g_dbus_message_get_arg0 (::GDBusMessage* message);
GI_INLINE_DECL std::string get_arg0 () noexcept;

// GVariant* g_dbus_message_get_body (GDBusMessage* message);
// ::GVariant* g_dbus_message_get_body (::GDBusMessage* message);
GI_INLINE_DECL GLib::Variant get_body () noexcept;

// GDBusMessageByteOrder g_dbus_message_get_byte_order (GDBusMessage* message);
// ::GDBusMessageByteOrder g_dbus_message_get_byte_order (::GDBusMessage* message);
GI_INLINE_DECL Gio::DBusMessageByteOrder get_byte_order () noexcept;

// const gchar* g_dbus_message_get_destination (GDBusMessage* message);
// const char* g_dbus_message_get_destination (::GDBusMessage* message);
GI_INLINE_DECL std::string get_destination () noexcept;

// const gchar* g_dbus_message_get_error_name (GDBusMessage* message);
// const char* g_dbus_message_get_error_name (::GDBusMessage* message);
GI_INLINE_DECL std::string get_error_name () noexcept;

// GDBusMessageFlags g_dbus_message_get_flags (GDBusMessage* message);
// ::GDBusMessageFlags g_dbus_message_get_flags (::GDBusMessage* message);
GI_INLINE_DECL Gio::DBusMessageFlags get_flags () noexcept;

// GVariant* g_dbus_message_get_header (GDBusMessage* message, GDBusMessageHeaderField header_field);
// ::GVariant* g_dbus_message_get_header (::GDBusMessage* message, ::GDBusMessageHeaderField header_field);
GI_INLINE_DECL GLib::Variant get_header (Gio::DBusMessageHeaderField header_field) noexcept;

// guchar* g_dbus_message_get_header_fields (GDBusMessage* message);
// guint8* g_dbus_message_get_header_fields (::GDBusMessage* message);
GI_INLINE_DECL std::vector<guint8> get_header_fields () noexcept;

// const gchar* g_dbus_message_get_interface (GDBusMessage* message);
// const char* g_dbus_message_get_interface (::GDBusMessage* message);
GI_INLINE_DECL std::string get_interface () noexcept;

// gboolean g_dbus_message_get_locked (GDBusMessage* message);
// gboolean g_dbus_message_get_locked (::GDBusMessage* message);
GI_INLINE_DECL bool get_locked () noexcept;

// const gchar* g_dbus_message_get_member (GDBusMessage* message);
// const char* g_dbus_message_get_member (::GDBusMessage* message);
GI_INLINE_DECL std::string get_member () noexcept;

// GDBusMessageType g_dbus_message_get_message_type (GDBusMessage* message);
// ::GDBusMessageType g_dbus_message_get_message_type (::GDBusMessage* message);
GI_INLINE_DECL Gio::DBusMessageType get_message_type () noexcept;

// guint32 g_dbus_message_get_num_unix_fds (GDBusMessage* message);
// guint32 g_dbus_message_get_num_unix_fds (::GDBusMessage* message);
GI_INLINE_DECL guint32 get_num_unix_fds () noexcept;

// const gchar* g_dbus_message_get_path (GDBusMessage* message);
// const char* g_dbus_message_get_path (::GDBusMessage* message);
GI_INLINE_DECL std::string get_path () noexcept;

// guint32 g_dbus_message_get_reply_serial (GDBusMessage* message);
// guint32 g_dbus_message_get_reply_serial (::GDBusMessage* message);
GI_INLINE_DECL guint32 get_reply_serial () noexcept;

// const gchar* g_dbus_message_get_sender (GDBusMessage* message);
// const char* g_dbus_message_get_sender (::GDBusMessage* message);
GI_INLINE_DECL std::string get_sender () noexcept;

// guint32 g_dbus_message_get_serial (GDBusMessage* message);
// guint32 g_dbus_message_get_serial (::GDBusMessage* message);
GI_INLINE_DECL guint32 get_serial () noexcept;

// const gchar* g_dbus_message_get_signature (GDBusMessage* message);
// const char* g_dbus_message_get_signature (::GDBusMessage* message);
GI_INLINE_DECL std::string get_signature () noexcept;

// GUnixFDList* g_dbus_message_get_unix_fd_list (GDBusMessage* message);
// ::GUnixFDList* g_dbus_message_get_unix_fd_list (::GDBusMessage* message);
GI_INLINE_DECL Gio::UnixFDList get_unix_fd_list () noexcept;

// void g_dbus_message_lock (GDBusMessage* message);
// void g_dbus_message_lock (::GDBusMessage* message);
GI_INLINE_DECL void lock () noexcept;

// GDBusMessage* g_dbus_message_new_method_error (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message_format);
// ::GDBusMessage* g_dbus_message_new_method_error (::GDBusMessage* method_call_message, const char* error_name, const char* error_message_format);
// IGNORE; not introspectable, varargs not supported

// GDBusMessage* g_dbus_message_new_method_error_literal (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message);
// ::GDBusMessage* g_dbus_message_new_method_error_literal (::GDBusMessage* method_call_message, const char* error_name, const char* error_message);
GI_INLINE_DECL Gio::DBusMessage new_method_error_literal (const std::string & error_name, const std::string & error_message) noexcept;

// GDBusMessage* g_dbus_message_new_method_error_valist (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message_format, va_list var_args);
// ::GDBusMessage* g_dbus_message_new_method_error_valist (::GDBusMessage* method_call_message, const char* error_name, const char* error_message_format,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GDBusMessage* g_dbus_message_new_method_reply (GDBusMessage* method_call_message);
// ::GDBusMessage* g_dbus_message_new_method_reply (::GDBusMessage* method_call_message);
GI_INLINE_DECL Gio::DBusMessage new_method_reply () noexcept;

// gchar* g_dbus_message_print (GDBusMessage* message, guint indent);
// char* g_dbus_message_print (::GDBusMessage* message, guint indent);
GI_INLINE_DECL std::string print (guint indent) noexcept;

// void g_dbus_message_set_body (GDBusMessage* message, GVariant* body);
// void g_dbus_message_set_body (::GDBusMessage* message, ::GVariant* body);
GI_INLINE_DECL void set_body (GLib::Variant body) noexcept;

// void g_dbus_message_set_byte_order (GDBusMessage* message, GDBusMessageByteOrder byte_order);
// void g_dbus_message_set_byte_order (::GDBusMessage* message, ::GDBusMessageByteOrder byte_order);
GI_INLINE_DECL void set_byte_order (Gio::DBusMessageByteOrder byte_order) noexcept;

// void g_dbus_message_set_destination (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_destination (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_destination (const std::string & value) noexcept;
GI_INLINE_DECL void set_destination () noexcept;

// void g_dbus_message_set_error_name (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_error_name (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_error_name (const std::string & value) noexcept;

// void g_dbus_message_set_flags (GDBusMessage* message, GDBusMessageFlags flags);
// void g_dbus_message_set_flags (::GDBusMessage* message, ::GDBusMessageFlags flags);
GI_INLINE_DECL void set_flags (Gio::DBusMessageFlags flags) noexcept;

// void g_dbus_message_set_header (GDBusMessage* message, GDBusMessageHeaderField header_field, GVariant* value);
// void g_dbus_message_set_header (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
GI_INLINE_DECL void set_header (Gio::DBusMessageHeaderField header_field, GLib::Variant value) noexcept;
GI_INLINE_DECL void set_header (Gio::DBusMessageHeaderField header_field) noexcept;

// void g_dbus_message_set_interface (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_interface (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_interface (const std::string & value) noexcept;
GI_INLINE_DECL void set_interface () noexcept;

// void g_dbus_message_set_member (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_member (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_member (const std::string & value) noexcept;
GI_INLINE_DECL void set_member () noexcept;

// void g_dbus_message_set_message_type (GDBusMessage* message, GDBusMessageType type);
// void g_dbus_message_set_message_type (::GDBusMessage* message, ::GDBusMessageType type);
GI_INLINE_DECL void set_message_type (Gio::DBusMessageType type) noexcept;

// void g_dbus_message_set_num_unix_fds (GDBusMessage* message, guint32 value);
// void g_dbus_message_set_num_unix_fds (::GDBusMessage* message, guint32 value);
GI_INLINE_DECL void set_num_unix_fds (guint32 value) noexcept;

// void g_dbus_message_set_path (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_path (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_path (const std::string & value) noexcept;
GI_INLINE_DECL void set_path () noexcept;

// void g_dbus_message_set_reply_serial (GDBusMessage* message, guint32 value);
// void g_dbus_message_set_reply_serial (::GDBusMessage* message, guint32 value);
GI_INLINE_DECL void set_reply_serial (guint32 value) noexcept;

// void g_dbus_message_set_sender (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_sender (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_sender (const std::string & value) noexcept;
GI_INLINE_DECL void set_sender () noexcept;

// void g_dbus_message_set_serial (GDBusMessage* message, guint32 serial);
// void g_dbus_message_set_serial (::GDBusMessage* message, guint32 serial);
GI_INLINE_DECL void set_serial (guint32 serial) noexcept;

// void g_dbus_message_set_signature (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_signature (::GDBusMessage* message, const char* value);
GI_INLINE_DECL void set_signature (const std::string & value) noexcept;
GI_INLINE_DECL void set_signature () noexcept;

// void g_dbus_message_set_unix_fd_list (GDBusMessage* message, GUnixFDList* fd_list);
// void g_dbus_message_set_unix_fd_list (::GDBusMessage* message, ::GUnixFDList* fd_list);
GI_INLINE_DECL void set_unix_fd_list (Gio::UnixFDList fd_list) noexcept;
GI_INLINE_DECL void set_unix_fd_list () noexcept;

// guchar* g_dbus_message_to_blob (GDBusMessage* message, gsize* out_size, GDBusCapabilityFlags capabilities, GError ** error);
// guint8* g_dbus_message_to_blob (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
GI_INLINE_DECL std::vector<guint8> to_blob (Gio::DBusCapabilityFlags capabilities);
GI_INLINE_DECL std::vector<guint8> to_blob (Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept;

// gboolean g_dbus_message_to_gerror (GDBusMessage* message, GError ** error);
// gboolean g_dbus_message_to_gerror (::GDBusMessage* message, GError ** error);
GI_INLINE_DECL bool to_gerror ();
GI_INLINE_DECL bool to_gerror (GLib::Error * _error) noexcept;

gi::property_proxy<bool, base::DBusMessageBase> property_locked()
{ return gi::property_proxy<bool, base::DBusMessageBase> (*this, "locked"); }
const gi::property_proxy<bool, base::DBusMessageBase> property_locked() const
{ return gi::property_proxy<bool, base::DBusMessageBase> (*this, "locked"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_def.hpp>)
#include <gio/dbusmessage_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra.hpp>)
#include <gio/dbusmessage_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class DBusMessage : public GI_GIO_DBUSMESSAGE_BASE
{ typedef GI_GIO_DBUSMESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GDBusMessage>
{ typedef Gio::DBusMessage type; }; 

} // namespace repository

} // namespace gi

#endif
