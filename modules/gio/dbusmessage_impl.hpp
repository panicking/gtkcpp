// AUTO-GENERATED

#ifndef _GI_GIO_DBUSMESSAGE_IMPL_HPP_
#define _GI_GIO_DBUSMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GDBusMessage* g_dbus_message_new ();
// ::GDBusMessage* g_dbus_message_new ();
Gio::DBusMessage base::DBusMessageBase::new_ () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusMessage* g_dbus_message_new_from_blob (guchar* blob, gsize blob_len, GDBusCapabilityFlags capabilities, GError ** error);
// ::GDBusMessage* g_dbus_message_new_from_blob (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
Gio::DBusMessage base::DBusMessageBase::new_from_blob (guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities)
{
  typedef ::GDBusMessage* (*call_wrap_t) (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_from_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto blob_i = detail::make_list_unwrap_range (blob, blob_len, false);
  auto blob_w = unwrap (blob_i, gi::transfer_none, direction_in);
  auto blob_to_c = blob_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_w.size()), (::GDBusCapabilityFlags) (capabilities_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusMessageBase::new_from_blob (guint8 * blob, gsize blob_len, Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (guint8* blob, gsize blob_len, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_from_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  auto blob_i = detail::make_list_unwrap_range (blob, blob_len, false);
  auto blob_w = unwrap (blob_i, gi::transfer_none, direction_in);
  auto blob_to_c = blob_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_w.size()), (::GDBusCapabilityFlags) (capabilities_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusMessage* g_dbus_message_new_method_call (const gchar* name, const gchar* path, const gchar* interface_, const gchar* method);
// ::GDBusMessage* g_dbus_message_new_method_call (const char* name, const char* path, const char* interface_, const char* method);
Gio::DBusMessage base::DBusMessageBase::new_method_call (const std::string & name, const std::string & path, const std::string & interface_, const std::string & method) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* name, const char* path, const char* interface_, const char* method);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_call;
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (method_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusMessageBase::new_method_call (const std::string & path, const std::string & method) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* name, const char* path, const char* interface_, const char* method);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_call;
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  auto interface__to_c = nullptr;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (method_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusMessage* g_dbus_message_new_signal (const gchar* path, const gchar* interface_, const gchar* signal);
// ::GDBusMessage* g_dbus_message_new_signal (const char* path, const char* interface_, const char* signal);
Gio::DBusMessage base::DBusMessageBase::new_signal (const std::string & path, const std::string & interface_, const std::string & signal) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (const char* path, const char* interface_, const char* signal);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_signal;
  auto signal_to_c = gi::unwrap (signal, gi::transfer_none, gi::direction_in);
  auto interface__to_c = gi::unwrap (interface_, gi::transfer_none, gi::direction_in);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c), (const char*) (interface__to_c), (const char*) (signal_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gssize g_dbus_message_bytes_needed (guchar* blob, gsize blob_len, GError ** error);
// gssize g_dbus_message_bytes_needed (guint8* blob, gsize blob_len, GError ** error);
gssize base::DBusMessageBase::bytes_needed (guint8 * blob, gsize blob_len)
{
  typedef gssize (*call_wrap_t) (guint8* blob, gsize blob_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_bytes_needed;
  auto blob_i = detail::make_list_unwrap_range (blob, blob_len, false);
  auto blob_w = unwrap (blob_i, gi::transfer_none, direction_in);
  auto blob_to_c = blob_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_w.size()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::DBusMessageBase::bytes_needed (guint8 * blob, gsize blob_len, GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (guint8* blob, gsize blob_len, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_bytes_needed;
  auto blob_i = detail::make_list_unwrap_range (blob, blob_len, false);
  auto blob_w = unwrap (blob_i, gi::transfer_none, direction_in);
  auto blob_to_c = blob_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((guint8*) (blob_to_c), (gsize) (blob_w.size()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GDBusMessage* g_dbus_message_copy (GDBusMessage* message, GError ** error);
// ::GDBusMessage* g_dbus_message_copy (::GDBusMessage* message, GError ** error);
Gio::DBusMessage base::DBusMessageBase::copy ()
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_copy;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::DBusMessage base::DBusMessageBase::copy (GLib::Error * _error) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_copy;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_dbus_message_get_arg0 (GDBusMessage* message);
// const char* g_dbus_message_get_arg0 (::GDBusMessage* message);
std::string base::DBusMessageBase::get_arg0 () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_arg0;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_dbus_message_get_body (GDBusMessage* message);
// ::GVariant* g_dbus_message_get_body (::GDBusMessage* message);
GLib::Variant base::DBusMessageBase::get_body () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_body;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusMessageByteOrder g_dbus_message_get_byte_order (GDBusMessage* message);
// ::GDBusMessageByteOrder g_dbus_message_get_byte_order (::GDBusMessage* message);
Gio::DBusMessageByteOrder base::DBusMessageBase::get_byte_order () noexcept
{
  typedef ::GDBusMessageByteOrder (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_byte_order;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* g_dbus_message_get_destination (GDBusMessage* message);
// const char* g_dbus_message_get_destination (::GDBusMessage* message);
std::string base::DBusMessageBase::get_destination () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_destination;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_dbus_message_get_error_name (GDBusMessage* message);
// const char* g_dbus_message_get_error_name (::GDBusMessage* message);
std::string base::DBusMessageBase::get_error_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_error_name;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusMessageFlags g_dbus_message_get_flags (GDBusMessage* message);
// ::GDBusMessageFlags g_dbus_message_get_flags (::GDBusMessage* message);
Gio::DBusMessageFlags base::DBusMessageBase::get_flags () noexcept
{
  typedef ::GDBusMessageFlags (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_flags;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GVariant* g_dbus_message_get_header (GDBusMessage* message, GDBusMessageHeaderField header_field);
// ::GVariant* g_dbus_message_get_header (::GDBusMessage* message, ::GDBusMessageHeaderField header_field);
GLib::Variant base::DBusMessageBase::get_header (Gio::DBusMessageHeaderField header_field) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_header;
  auto header_field_to_c = gi::unwrap (header_field);
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guchar* g_dbus_message_get_header_fields (GDBusMessage* message);
// guint8* g_dbus_message_get_header_fields (::GDBusMessage* message);
std::vector<guint8> base::DBusMessageBase::get_header_fields () noexcept
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_header_fields;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_none);
}

// const gchar* g_dbus_message_get_interface (GDBusMessage* message);
// const char* g_dbus_message_get_interface (::GDBusMessage* message);
std::string base::DBusMessageBase::get_interface () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_interface;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_dbus_message_get_locked (GDBusMessage* message);
// gboolean g_dbus_message_get_locked (::GDBusMessage* message);
bool base::DBusMessageBase::get_locked () noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_locked;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_dbus_message_get_member (GDBusMessage* message);
// const char* g_dbus_message_get_member (::GDBusMessage* message);
std::string base::DBusMessageBase::get_member () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_member;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusMessageType g_dbus_message_get_message_type (GDBusMessage* message);
// ::GDBusMessageType g_dbus_message_get_message_type (::GDBusMessage* message);
Gio::DBusMessageType base::DBusMessageBase::get_message_type () noexcept
{
  typedef ::GDBusMessageType (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_message_type;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint32 g_dbus_message_get_num_unix_fds (GDBusMessage* message);
// guint32 g_dbus_message_get_num_unix_fds (::GDBusMessage* message);
guint32 base::DBusMessageBase::get_num_unix_fds () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_num_unix_fds;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_dbus_message_get_path (GDBusMessage* message);
// const char* g_dbus_message_get_path (::GDBusMessage* message);
std::string base::DBusMessageBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_path;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint32 g_dbus_message_get_reply_serial (GDBusMessage* message);
// guint32 g_dbus_message_get_reply_serial (::GDBusMessage* message);
guint32 base::DBusMessageBase::get_reply_serial () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_reply_serial;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_dbus_message_get_sender (GDBusMessage* message);
// const char* g_dbus_message_get_sender (::GDBusMessage* message);
std::string base::DBusMessageBase::get_sender () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_sender;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint32 g_dbus_message_get_serial (GDBusMessage* message);
// guint32 g_dbus_message_get_serial (::GDBusMessage* message);
guint32 base::DBusMessageBase::get_serial () noexcept
{
  typedef guint32 (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_serial;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_dbus_message_get_signature (GDBusMessage* message);
// const char* g_dbus_message_get_signature (::GDBusMessage* message);
std::string base::DBusMessageBase::get_signature () noexcept
{
  typedef const char* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_signature;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GUnixFDList* g_dbus_message_get_unix_fd_list (GDBusMessage* message);
// ::GUnixFDList* g_dbus_message_get_unix_fd_list (::GDBusMessage* message);
Gio::UnixFDList base::DBusMessageBase::get_unix_fd_list () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_get_unix_fd_list;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_dbus_message_lock (GDBusMessage* message);
// void g_dbus_message_lock (::GDBusMessage* message);
void base::DBusMessageBase::lock () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_lock;
  call_wrap_v ((::GDBusMessage*) (gobj_()));
}

// GDBusMessage* g_dbus_message_new_method_error (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message_format);
// ::GDBusMessage* g_dbus_message_new_method_error (::GDBusMessage* method_call_message, const char* error_name, const char* error_message_format);
// IGNORE; not introspectable, varargs not supported

// GDBusMessage* g_dbus_message_new_method_error_literal (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message);
// ::GDBusMessage* g_dbus_message_new_method_error_literal (::GDBusMessage* method_call_message, const char* error_name, const char* error_message);
Gio::DBusMessage base::DBusMessageBase::new_method_error_literal (const std::string & error_name, const std::string & error_message) noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* method_call_message, const char* error_name, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_error_literal;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none, gi::direction_in);
  auto error_name_to_c = gi::unwrap (error_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (error_name_to_c), (const char*) (error_message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GDBusMessage* g_dbus_message_new_method_error_valist (GDBusMessage* method_call_message, const gchar* error_name, const gchar* error_message_format, va_list var_args);
// ::GDBusMessage* g_dbus_message_new_method_error_valist (::GDBusMessage* method_call_message, const char* error_name, const char* error_message_format,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// GDBusMessage* g_dbus_message_new_method_reply (GDBusMessage* method_call_message);
// ::GDBusMessage* g_dbus_message_new_method_reply (::GDBusMessage* method_call_message);
Gio::DBusMessage base::DBusMessageBase::new_method_reply () noexcept
{
  typedef ::GDBusMessage* (*call_wrap_t) (::GDBusMessage* method_call_message);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_new_method_reply;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_dbus_message_print (GDBusMessage* message, guint indent);
// char* g_dbus_message_print (::GDBusMessage* message, guint indent);
std::string base::DBusMessageBase::print (guint indent) noexcept
{
  typedef char* (*call_wrap_t) (::GDBusMessage* message, guint indent);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_print;
  auto indent_to_c = indent;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), (guint) (indent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_dbus_message_set_body (GDBusMessage* message, GVariant* body);
// void g_dbus_message_set_body (::GDBusMessage* message, ::GVariant* body);
void base::DBusMessageBase::set_body (GLib::Variant body) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GVariant* body);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_body;
  auto body_to_c = gi::unwrap (body, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GVariant*) (body_to_c));
}

// void g_dbus_message_set_byte_order (GDBusMessage* message, GDBusMessageByteOrder byte_order);
// void g_dbus_message_set_byte_order (::GDBusMessage* message, ::GDBusMessageByteOrder byte_order);
void base::DBusMessageBase::set_byte_order (Gio::DBusMessageByteOrder byte_order) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageByteOrder byte_order);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_byte_order;
  auto byte_order_to_c = gi::unwrap (byte_order);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageByteOrder) (byte_order_to_c));
}

// void g_dbus_message_set_destination (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_destination (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_destination (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_destination;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_destination () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_destination;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_error_name (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_error_name (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_error_name (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_error_name;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_flags (GDBusMessage* message, GDBusMessageFlags flags);
// void g_dbus_message_set_flags (::GDBusMessage* message, ::GDBusMessageFlags flags);
void base::DBusMessageBase::set_flags (Gio::DBusMessageFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageFlags) (flags_to_c));
}

// void g_dbus_message_set_header (GDBusMessage* message, GDBusMessageHeaderField header_field, GVariant* value);
// void g_dbus_message_set_header (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
void base::DBusMessageBase::set_header (Gio::DBusMessageHeaderField header_field, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_header;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto header_field_to_c = gi::unwrap (header_field);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c), (::GVariant*) (value_to_c));
}
void base::DBusMessageBase::set_header (Gio::DBusMessageHeaderField header_field) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageHeaderField header_field, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_header;
  auto value_to_c = nullptr;
  auto header_field_to_c = gi::unwrap (header_field);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageHeaderField) (header_field_to_c), (::GVariant*) (value_to_c));
}

// void g_dbus_message_set_interface (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_interface (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_interface (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_interface;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_interface () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_interface;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_member (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_member (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_member (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_member;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_member () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_member;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_message_type (GDBusMessage* message, GDBusMessageType type);
// void g_dbus_message_set_message_type (::GDBusMessage* message, ::GDBusMessageType type);
void base::DBusMessageBase::set_message_type (Gio::DBusMessageType type) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GDBusMessageType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_message_type;
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GDBusMessageType) (type_to_c));
}

// void g_dbus_message_set_num_unix_fds (GDBusMessage* message, guint32 value);
// void g_dbus_message_set_num_unix_fds (::GDBusMessage* message, guint32 value);
void base::DBusMessageBase::set_num_unix_fds (guint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_num_unix_fds;
  auto value_to_c = value;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (value_to_c));
}

// void g_dbus_message_set_path (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_path (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_path (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_path;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_path () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_path;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_reply_serial (GDBusMessage* message, guint32 value);
// void g_dbus_message_set_reply_serial (::GDBusMessage* message, guint32 value);
void base::DBusMessageBase::set_reply_serial (guint32 value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_reply_serial;
  auto value_to_c = value;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (value_to_c));
}

// void g_dbus_message_set_sender (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_sender (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_sender (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_sender;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_sender () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_sender;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_serial (GDBusMessage* message, guint32 serial);
// void g_dbus_message_set_serial (::GDBusMessage* message, guint32 serial);
void base::DBusMessageBase::set_serial (guint32 serial) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, guint32 serial);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_serial;
  auto serial_to_c = serial;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (guint32) (serial_to_c));
}

// void g_dbus_message_set_signature (GDBusMessage* message, const gchar* value);
// void g_dbus_message_set_signature (::GDBusMessage* message, const char* value);
void base::DBusMessageBase::set_signature (const std::string & value) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_signature;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}
void base::DBusMessageBase::set_signature () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_signature;
  auto value_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (const char*) (value_to_c));
}

// void g_dbus_message_set_unix_fd_list (GDBusMessage* message, GUnixFDList* fd_list);
// void g_dbus_message_set_unix_fd_list (::GDBusMessage* message, ::GUnixFDList* fd_list);
void base::DBusMessageBase::set_unix_fd_list (Gio::UnixFDList fd_list) noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_unix_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GUnixFDList*) (fd_list_to_c));
}
void base::DBusMessageBase::set_unix_fd_list () noexcept
{
  typedef void (*call_wrap_t) (::GDBusMessage* message, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_set_unix_fd_list;
  auto fd_list_to_c = nullptr;
  call_wrap_v ((::GDBusMessage*) (gobj_()), (::GUnixFDList*) (fd_list_to_c));
}

// guchar* g_dbus_message_to_blob (GDBusMessage* message, gsize* out_size, GDBusCapabilityFlags capabilities, GError ** error);
// guint8* g_dbus_message_to_blob (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
std::vector<guint8> base::DBusMessageBase::to_blob (Gio::DBusCapabilityFlags capabilities)
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_to_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  gsize out_size;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::GDBusMessage*) (gobj_()), (gsize*) (&out_size), (::GDBusCapabilityFlags) (capabilities_to_c), &error);
  _temp_ret.resize(out_size);
  detail::wrap_array (_ret_o, gi::transfer_full, out_size, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<guint8> base::DBusMessageBase::to_blob (Gio::DBusCapabilityFlags capabilities, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::GDBusMessage* message, gsize* out_size, ::GDBusCapabilityFlags capabilities, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_to_blob;
  auto capabilities_to_c = gi::unwrap (capabilities);
  gsize out_size;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::GDBusMessage*) (gobj_()), (gsize*) (&out_size), (::GDBusCapabilityFlags) (capabilities_to_c), _error ? &_error_o : nullptr);
  _temp_ret.resize(out_size);
  detail::wrap_array (_ret_o, gi::transfer_full, out_size, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_dbus_message_to_gerror (GDBusMessage* message, GError ** error);
// gboolean g_dbus_message_to_gerror (::GDBusMessage* message, GError ** error);
bool base::DBusMessageBase::to_gerror ()
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_to_gerror;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::DBusMessageBase::to_gerror (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GDBusMessage* message, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_dbus_message_to_gerror;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GDBusMessage*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_def_impl.hpp>)
#include <gio/dbusmessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/dbusmessage_extra_impl.hpp>)
#include <gio/dbusmessage_extra_impl.hpp>
#endif
#endif

#endif
