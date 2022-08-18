// AUTO-GENERATED

#ifndef _GI_GIO__FUNCTIONS_HPP_
#define _GI_GIO__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace DBusErrorNS_ {

// gchar* g_dbus_error_encode_gerror (const GError* error);
// char* g_dbus_error_encode_gerror (const ::GError* error);
GI_INLINE_DECL std::string encode_gerror (const GLib::Error & error) noexcept;

// gchar* g_dbus_error_get_remote_error (const GError* error);
// char* g_dbus_error_get_remote_error (const ::GError* error);
GI_INLINE_DECL std::string get_remote_error (const GLib::Error & error) noexcept;

// gboolean g_dbus_error_is_remote_error (const GError* error);
// gboolean g_dbus_error_is_remote_error (const ::GError* error);
GI_INLINE_DECL bool is_remote_error (const GLib::Error & error) noexcept;

// GError* g_dbus_error_new_for_dbus_error (const gchar* dbus_error_name, const gchar* dbus_error_message);
// ::GError* g_dbus_error_new_for_dbus_error (const char* dbus_error_name, const char* dbus_error_message);
GI_INLINE_DECL GLib::Error new_for_dbus_error (const std::string & dbus_error_name, const std::string & dbus_error_message) noexcept;

// GQuark g_dbus_error_quark ();
// ::GQuark g_dbus_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

// gboolean g_dbus_error_register_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name);
// gboolean g_dbus_error_register_error (::GQuark error_domain, gint error_code, const char* dbus_error_name);
GI_INLINE_DECL bool register_error (::GQuark error_domain, gint error_code, const std::string & dbus_error_name) noexcept;

// void g_dbus_error_register_error_domain (const gchar* error_domain_quark_name, volatile gsize* quark_volatile, const GDBusErrorEntry* entries, guint num_entries);
// void g_dbus_error_register_error_domain (const char* error_domain_quark_name, gsize quark_volatile, const ::GDBusErrorEntry** entries, guint num_entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2), inconsistent in quark_volatile pointer depth (1 vs 0)

// void g_dbus_error_set_dbus_error (GError** error, const gchar* dbus_error_name, const gchar* dbus_error_message, const gchar* format);
// void g_dbus_error_set_dbus_error (::GError* error, const char* dbus_error_name, const char* dbus_error_message, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_dbus_error_set_dbus_error_valist (GError** error, const gchar* dbus_error_name, const gchar* dbus_error_message, const gchar* format, va_list var_args);
// void g_dbus_error_set_dbus_error_valist (::GError* error, const char* dbus_error_name, const char* dbus_error_message, const char* format,  var_args);
// IGNORE; not introspectable, var_args type  not supported, inconsistent in error pointer depth (2 vs 1)

// gboolean g_dbus_error_strip_remote_error (GError* error);
// gboolean g_dbus_error_strip_remote_error (::GError* error);
GI_INLINE_DECL bool strip_remote_error (GLib::Error error) noexcept;

// gboolean g_dbus_error_unregister_error (GQuark error_domain, gint error_code, const gchar* dbus_error_name);
// gboolean g_dbus_error_unregister_error (::GQuark error_domain, gint error_code, const char* dbus_error_name);
GI_INLINE_DECL bool unregister_error (::GQuark error_domain, gint error_code, const std::string & dbus_error_name) noexcept;

} // namespace DBusErrorNS_

namespace ResolverErrorNS_ {

// GQuark g_resolver_error_quark ();
// ::GQuark g_resolver_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ResolverErrorNS_

namespace ResourceErrorNS_ {

// GQuark g_resource_error_quark ();
// ::GQuark g_resource_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace ResourceErrorNS_

namespace TlsChannelBindingErrorNS_ {

// GQuark g_tls_channel_binding_error_quark ();
// ::GQuark g_tls_channel_binding_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TlsChannelBindingErrorNS_

namespace TlsErrorNS_ {

// GQuark g_tls_error_quark ();
// ::GQuark g_tls_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace TlsErrorNS_

// void g_bus_get (GBusType bus_type, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_bus_get (::GBusType bus_type, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void bus_get (Gio::BusType bus_type, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void bus_get (Gio::BusType bus_type, Gio::AsyncReadyCallback callback) noexcept;

// GDBusConnection* g_bus_get_finish (GAsyncResult* res, GError ** error);
// ::GDBusConnection* g_bus_get_finish (::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::DBusConnection bus_get_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::DBusConnection bus_get_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GDBusConnection* g_bus_get_sync (GBusType bus_type, GCancellable* cancellable, GError ** error);
// ::GDBusConnection* g_bus_get_sync (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type);
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::DBusConnection bus_get_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept;

// guint g_bus_own_name (GBusType bus_type, const gchar* name, GBusNameOwnerFlags flags, GBusAcquiredCallback bus_acquired_handler, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_own_name (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, Gio::BusAcquiredCallback::cfunction_type bus_acquired_handler, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler, Gio::BusNameLostCallback::cfunction_type name_lost_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_own_name_with_closures

// guint g_bus_own_name_on_connection (GDBusConnection* connection, const gchar* name, GBusNameOwnerFlags flags, GBusNameAcquiredCallback name_acquired_handler, GBusNameLostCallback name_lost_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_own_name_on_connection (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, Gio::BusNameAcquiredCallback::cfunction_type name_acquired_handler, Gio::BusNameLostCallback::cfunction_type name_lost_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_own_name_on_connection_with_closures

// guint g_bus_own_name_on_connection_with_closures (GDBusConnection* connection, const gchar* name, GBusNameOwnerFlags flags, GClosure* name_acquired_closure, GClosure* name_lost_closure);
// guint g_bus_own_name_on_connection_with_closures (::GDBusConnection* connection, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
GI_INLINE_DECL guint bus_own_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameOwnerFlags flags, GObject::Closure name_acquired_closure, GObject::Closure name_lost_closure) noexcept;
GI_INLINE_DECL guint bus_own_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameOwnerFlags flags) noexcept;

// guint g_bus_own_name_with_closures (GBusType bus_type, const gchar* name, GBusNameOwnerFlags flags, GClosure* bus_acquired_closure, GClosure* name_acquired_closure, GClosure* name_lost_closure);
// guint g_bus_own_name_with_closures (::GBusType bus_type, const char* name, ::GBusNameOwnerFlags flags, ::GClosure* bus_acquired_closure, ::GClosure* name_acquired_closure, ::GClosure* name_lost_closure);
GI_INLINE_DECL guint bus_own_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameOwnerFlags flags, GObject::Closure bus_acquired_closure, GObject::Closure name_acquired_closure, GObject::Closure name_lost_closure) noexcept;
GI_INLINE_DECL guint bus_own_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameOwnerFlags flags) noexcept;

// void g_bus_unown_name (guint owner_id);
// void g_bus_unown_name (guint owner_id);
GI_INLINE_DECL void bus_unown_name (guint owner_id) noexcept;

// void g_bus_unwatch_name (guint watcher_id);
// void g_bus_unwatch_name (guint watcher_id);
GI_INLINE_DECL void bus_unwatch_name (guint watcher_id) noexcept;

// guint g_bus_watch_name (GBusType bus_type, const gchar* name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_watch_name (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_watch_name_with_closures

// guint g_bus_watch_name_on_connection (GDBusConnection* connection, const gchar* name, GBusNameWatcherFlags flags, GBusNameAppearedCallback name_appeared_handler, GBusNameVanishedCallback name_vanished_handler, gpointer user_data, GDestroyNotify user_data_free_func);
// guint g_bus_watch_name_on_connection (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, Gio::BusNameAppearedCallback::cfunction_type name_appeared_handler, Gio::BusNameVanishedCallback::cfunction_type name_vanished_handler, void* user_data, GLib::DestroyNotify::cfunction_type user_data_free_func);
// IGNORE; not introspectable; shadowed-by bus_watch_name_on_connection_with_closures

// guint g_bus_watch_name_on_connection_with_closures (GDBusConnection* connection, const gchar* name, GBusNameWatcherFlags flags, GClosure* name_appeared_closure, GClosure* name_vanished_closure);
// guint g_bus_watch_name_on_connection_with_closures (::GDBusConnection* connection, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
GI_INLINE_DECL guint bus_watch_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameWatcherFlags flags, GObject::Closure name_appeared_closure, GObject::Closure name_vanished_closure) noexcept;
GI_INLINE_DECL guint bus_watch_name_on_connection (Gio::DBusConnection connection, const std::string & name, Gio::BusNameWatcherFlags flags) noexcept;

// guint g_bus_watch_name_with_closures (GBusType bus_type, const gchar* name, GBusNameWatcherFlags flags, GClosure* name_appeared_closure, GClosure* name_vanished_closure);
// guint g_bus_watch_name_with_closures (::GBusType bus_type, const char* name, ::GBusNameWatcherFlags flags, ::GClosure* name_appeared_closure, ::GClosure* name_vanished_closure);
GI_INLINE_DECL guint bus_watch_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameWatcherFlags flags, GObject::Closure name_appeared_closure, GObject::Closure name_vanished_closure) noexcept;
GI_INLINE_DECL guint bus_watch_name (Gio::BusType bus_type, const std::string & name, Gio::BusNameWatcherFlags flags) noexcept;

// gboolean g_content_type_can_be_executable (const gchar* type);
// gboolean g_content_type_can_be_executable (const char* type);
GI_INLINE_DECL bool content_type_can_be_executable (const std::string & type) noexcept;

// gboolean g_content_type_equals (const gchar* type1, const gchar* type2);
// gboolean g_content_type_equals (const char* type1, const char* type2);
GI_INLINE_DECL bool content_type_equals (const std::string & type1, const std::string & type2) noexcept;

// gchar* g_content_type_from_mime_type (const gchar* mime_type);
// char* g_content_type_from_mime_type (const char* mime_type);
GI_INLINE_DECL std::string content_type_from_mime_type (const std::string & mime_type) noexcept;

// gchar* g_content_type_get_description (const gchar* type);
// char* g_content_type_get_description (const char* type);
GI_INLINE_DECL std::string content_type_get_description (const std::string & type) noexcept;

// gchar* g_content_type_get_generic_icon_name (const gchar* type);
// char* g_content_type_get_generic_icon_name (const char* type);
GI_INLINE_DECL std::string content_type_get_generic_icon_name (const std::string & type) noexcept;

// GIcon* g_content_type_get_icon (const gchar* type);
// ::GIcon* g_content_type_get_icon (const char* type);
GI_INLINE_DECL Gio::Icon content_type_get_icon (const std::string & type) noexcept;

// const gchar* const* g_content_type_get_mime_dirs ();
// const char** g_content_type_get_mime_dirs ();
GI_INLINE_DECL std::vector<std::string> content_type_get_mime_dirs () noexcept;

// gchar* g_content_type_get_mime_type (const gchar* type);
// char* g_content_type_get_mime_type (const char* type);
GI_INLINE_DECL std::string content_type_get_mime_type (const std::string & type) noexcept;

// GIcon* g_content_type_get_symbolic_icon (const gchar* type);
// ::GIcon* g_content_type_get_symbolic_icon (const char* type);
GI_INLINE_DECL Gio::Icon content_type_get_symbolic_icon (const std::string & type) noexcept;

// gchar* g_content_type_guess (const gchar* filename, const guchar* data, gsize data_size, gboolean* result_uncertain);
// char* g_content_type_guess (const char* filename, const guint8* data, gsize data_size, gboolean* result_uncertain);
GI_INLINE_DECL std::string content_type_guess (const std::string & filename, guint8 * data, gsize data_size, bool * result_uncertain = nullptr) noexcept;
GI_INLINE_DECL std::string content_type_guess (guint8 * data, gsize data_size, bool * result_uncertain = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, bool> content_type_guess (const std::string & filename, guint8 * data, gsize data_size) noexcept;
GI_INLINE_DECL std::tuple<std::string, bool> content_type_guess (guint8 * data, gsize data_size) noexcept;

// gchar** g_content_type_guess_for_tree (GFile* root);
// char** g_content_type_guess_for_tree (::GFile* root);
GI_INLINE_DECL std::vector<std::string> content_type_guess_for_tree (Gio::File root) noexcept;

// gboolean g_content_type_is_a (const gchar* type, const gchar* supertype);
// gboolean g_content_type_is_a (const char* type, const char* supertype);
GI_INLINE_DECL bool content_type_is_a (const std::string & type, const std::string & supertype) noexcept;

// gboolean g_content_type_is_mime_type (const gchar* type, const gchar* mime_type);
// gboolean g_content_type_is_mime_type (const char* type, const char* mime_type);
GI_INLINE_DECL bool content_type_is_mime_type (const std::string & type, const std::string & mime_type) noexcept;

// gboolean g_content_type_is_unknown (const gchar* type);
// gboolean g_content_type_is_unknown (const char* type);
GI_INLINE_DECL bool content_type_is_unknown (const std::string & type) noexcept;

// void g_content_type_set_mime_dirs (const gchar* const* dirs);
// void g_content_type_set_mime_dirs (const char** dirs);
GI_INLINE_DECL void content_type_set_mime_dirs (const std::vector<std::string> & dirs) noexcept;

// GList* g_content_types_get_registered ();
// ::GList* g_content_types_get_registered ();
GI_INLINE_DECL std::vector<std::string> content_types_get_registered () noexcept;

// gchar* g_dbus_address_escape_value (const gchar* string);
// char* g_dbus_address_escape_value (const char* string);
GI_INLINE_DECL std::string dbus_address_escape_value (const std::string & string) noexcept;

// gchar* g_dbus_address_get_for_bus_sync (GBusType bus_type, GCancellable* cancellable, GError ** error);
// char* g_dbus_address_get_for_bus_sync (::GBusType bus_type, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable);
GI_INLINE_DECL std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type);
GI_INLINE_DECL std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string dbus_address_get_for_bus_sync (Gio::BusType bus_type, GLib::Error * _error) noexcept;

// void g_dbus_address_get_stream (const gchar* address, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_dbus_address_get_stream (const char* address, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void dbus_address_get_stream (const std::string & address, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void dbus_address_get_stream (const std::string & address, Gio::AsyncReadyCallback callback) noexcept;

// GIOStream* g_dbus_address_get_stream_finish (GAsyncResult* res, gchar** out_guid, GError ** error);
// ::GIOStream* g_dbus_address_get_stream_finish (::GAsyncResult* res, char** out_guid, GError ** error);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, std::string * out_guid = nullptr);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_finish (Gio::AsyncResult res, std::string * out_guid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GIOStream* g_dbus_address_get_stream_sync (const gchar* address, gchar** out_guid, GCancellable* cancellable, GError ** error);
// ::GIOStream* g_dbus_address_get_stream_sync (const char* address, char** out_guid, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid = nullptr);
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::IOStream dbus_address_get_stream_sync (const std::string & address, std::string * out_guid, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address);
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<Gio::IOStream, std::string> dbus_address_get_stream_sync (const std::string & address, GLib::Error * _error) noexcept;

// gchar* g_dbus_escape_object_path (const gchar* s);
// char* g_dbus_escape_object_path (const char* s);
GI_INLINE_DECL std::string dbus_escape_object_path (const std::string & s) noexcept;

// gchar* g_dbus_escape_object_path_bytestring (const guint8* bytes);
// char* g_dbus_escape_object_path_bytestring (const guint8* bytes);
GI_INLINE_DECL std::string dbus_escape_object_path_bytestring (const std::vector<guint8> & bytes) noexcept;

// gchar* g_dbus_generate_guid ();
// char* g_dbus_generate_guid ();
GI_INLINE_DECL std::string dbus_generate_guid () noexcept;

// GVariant* g_dbus_gvalue_to_gvariant (const GValue* gvalue, const GVariantType* type);
// ::GVariant* g_dbus_gvalue_to_gvariant (const ::GValue* gvalue, const ::GVariantType* type);
GI_INLINE_DECL GLib::Variant dbus_gvalue_to_gvariant (const GObject::Value & gvalue, const GLib::VariantType & type) noexcept;

// void g_dbus_gvariant_to_gvalue (GVariant* value, GValue* out_gvalue);
// void g_dbus_gvariant_to_gvalue (::GVariant* value, ::GValue* out_gvalue);
GI_INLINE_DECL void dbus_gvariant_to_gvalue (GLib::Variant value, GObject::Value & out_gvalue) noexcept;
GI_INLINE_DECL GObject::Value dbus_gvariant_to_gvalue (GLib::Variant value) noexcept;

// gboolean g_dbus_is_address (const gchar* string);
// gboolean g_dbus_is_address (const char* string);
GI_INLINE_DECL bool dbus_is_address (const std::string & string) noexcept;

// gboolean g_dbus_is_error_name (const gchar* string);
// gboolean g_dbus_is_error_name (const char* string);
GI_INLINE_DECL bool dbus_is_error_name (const std::string & string) noexcept;

// gboolean g_dbus_is_guid (const gchar* string);
// gboolean g_dbus_is_guid (const char* string);
GI_INLINE_DECL bool dbus_is_guid (const std::string & string) noexcept;

// gboolean g_dbus_is_interface_name (const gchar* string);
// gboolean g_dbus_is_interface_name (const char* string);
GI_INLINE_DECL bool dbus_is_interface_name (const std::string & string) noexcept;

// gboolean g_dbus_is_member_name (const gchar* string);
// gboolean g_dbus_is_member_name (const char* string);
GI_INLINE_DECL bool dbus_is_member_name (const std::string & string) noexcept;

// gboolean g_dbus_is_name (const gchar* string);
// gboolean g_dbus_is_name (const char* string);
GI_INLINE_DECL bool dbus_is_name (const std::string & string) noexcept;

// gboolean g_dbus_is_supported_address (const gchar* string, GError ** error);
// gboolean g_dbus_is_supported_address (const char* string, GError ** error);
GI_INLINE_DECL bool dbus_is_supported_address (const std::string & string);
GI_INLINE_DECL bool dbus_is_supported_address (const std::string & string, GLib::Error * _error) noexcept;

// gboolean g_dbus_is_unique_name (const gchar* string);
// gboolean g_dbus_is_unique_name (const char* string);
GI_INLINE_DECL bool dbus_is_unique_name (const std::string & string) noexcept;

// guint8* g_dbus_unescape_object_path (const gchar* s);
// guint8* g_dbus_unescape_object_path (const char* s);
GI_INLINE_DECL std::vector<guint8> dbus_unescape_object_path (const std::string & s) noexcept;

// GIOErrorEnum g_io_error_from_errno (gint err_no);
// ::GIOErrorEnum g_io_error_from_errno (gint err_no);
GI_INLINE_DECL Gio::IOErrorEnum io_error_from_errno (gint err_no) noexcept;

// GQuark g_io_error_quark ();
// ::GQuark g_io_error_quark ();
GI_INLINE_DECL GLib::Quark io_error_quark () noexcept;

// GList* g_io_modules_load_all_in_directory (const gchar* dirname);
// ::GList* g_io_modules_load_all_in_directory (const char* dirname);
GI_INLINE_DECL std::vector<Gio::IOModule> io_modules_load_all_in_directory (const std::string & dirname) noexcept;

// GList* g_io_modules_load_all_in_directory_with_scope (const gchar* dirname, GIOModuleScope* scope);
// ::GList* g_io_modules_load_all_in_directory_with_scope (const char* dirname,  scope);
// SKIP; scope type  not supported

// void g_io_modules_scan_all_in_directory (const char* dirname);
// void g_io_modules_scan_all_in_directory (const char* dirname);
GI_INLINE_DECL void io_modules_scan_all_in_directory (const std::string & dirname) noexcept;

// void g_io_modules_scan_all_in_directory_with_scope (const gchar* dirname, GIOModuleScope* scope);
// void g_io_modules_scan_all_in_directory_with_scope (const char* dirname,  scope);
// SKIP; scope type  not supported

// GSettingsBackend* g_keyfile_settings_backend_new (const gchar* filename, const gchar* root_path, const gchar* root_group);
// ::GSettingsBackend* g_keyfile_settings_backend_new (const char* filename, const char* root_path, const char* root_group);
GI_INLINE_DECL Gio::SettingsBackend keyfile_settings_backend_new (const std::string & filename, const std::string & root_path, const std::string & root_group) noexcept;
GI_INLINE_DECL Gio::SettingsBackend keyfile_settings_backend_new (const std::string & filename, const std::string & root_path) noexcept;

// GSettingsBackend* g_memory_settings_backend_new ();
// ::GSettingsBackend* g_memory_settings_backend_new ();
GI_INLINE_DECL Gio::SettingsBackend memory_settings_backend_new () noexcept;

// void g_networking_init ();
// void g_networking_init ();
// IGNORE; marked ignore

// GSettingsBackend* g_null_settings_backend_new ();
// ::GSettingsBackend* g_null_settings_backend_new ();
GI_INLINE_DECL Gio::SettingsBackend null_settings_backend_new () noexcept;

// GSource* g_pollable_source_new (GObject* pollable_stream);
// ::GSource* g_pollable_source_new (::GObject* pollable_stream);
GI_INLINE_DECL GLib::Source pollable_source_new (GObject::Object pollable_stream) noexcept;

// GSource* g_pollable_source_new_full (gpointer pollable_stream, GSource* child_source, GCancellable* cancellable);
// ::GSource* g_pollable_source_new_full (::GObject* pollable_stream, ::GSource* child_source, ::GCancellable* cancellable);
GI_INLINE_DECL GLib::Source pollable_source_new_full (GObject::Object pollable_stream, GLib::Source child_source, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL GLib::Source pollable_source_new_full (GObject::Object pollable_stream) noexcept;

// gssize g_pollable_stream_read (GInputStream* stream, void* buffer, gsize count, gboolean blocking, GCancellable* cancellable, GError ** error);
// gssize g_pollable_stream_read (::GInputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize pollable_stream_read (Gio::InputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// gssize g_pollable_stream_write (GOutputStream* stream, void* buffer, gsize count, gboolean blocking, GCancellable* cancellable, GError ** error);
// gssize g_pollable_stream_write (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL gssize pollable_stream_write (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// gboolean g_pollable_stream_write_all (GOutputStream* stream, void* buffer, gsize count, gboolean blocking, gsize* bytes_written, GCancellable* cancellable, GError ** error);
// gboolean g_pollable_stream_write_all (::GOutputStream* stream, guint8* buffer, gsize count, gboolean blocking, gsize* bytes_written, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written);
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, gsize & bytes_written, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking);
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> pollable_stream_write_all (Gio::OutputStream stream, guint8 * buffer, gsize count, gboolean blocking, GLib::Error * _error) noexcept;

// char** g_resources_enumerate_children (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// char** g_resources_enumerate_children (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL std::vector<std::string> resources_enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::vector<std::string> resources_enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// gboolean g_resources_get_info (const char* path, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resources_get_info (const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
GI_INLINE_DECL bool resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size = nullptr, guint32 * flags = nullptr);
GI_INLINE_DECL bool resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize, guint32> resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL std::tuple<bool, gsize, guint32> resources_get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GBytes* g_resources_lookup_data (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* g_resources_lookup_data (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL GLib::Bytes resources_lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL GLib::Bytes resources_lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// GInputStream* g_resources_open_stream (const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* g_resources_open_stream (const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GI_INLINE_DECL Gio::InputStream resources_open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags);
GI_INLINE_DECL Gio::InputStream resources_open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept;

// void g_resources_register (GResource* resource);
// void g_resources_register (::GResource* resource);
GI_INLINE_DECL void resources_register (Gio::Resource resource) noexcept;

// void g_resources_unregister (GResource* resource);
// void g_resources_unregister (::GResource* resource);
GI_INLINE_DECL void resources_unregister (Gio::Resource resource) noexcept;

// gboolean g_unix_is_mount_path_system_internal (const char* mount_path);
// gboolean g_unix_is_mount_path_system_internal (const char* mount_path);
GI_INLINE_DECL bool unix_is_mount_path_system_internal (const std::string & mount_path) noexcept;

// gboolean g_unix_is_system_device_path (const char* device_path);
// gboolean g_unix_is_system_device_path (const char* device_path);
GI_INLINE_DECL bool unix_is_system_device_path (const std::string & device_path) noexcept;

// gboolean g_unix_is_system_fs_type (const char* fs_type);
// gboolean g_unix_is_system_fs_type (const char* fs_type);
GI_INLINE_DECL bool unix_is_system_fs_type (const std::string & fs_type) noexcept;

// GUnixMountEntry* g_unix_mount_at (const char* mount_path, guint64* time_read);
// ::GUnixMountEntry* g_unix_mount_at (const char* mount_path, guint64* time_read);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_at (const std::string & mount_path, guint64 * time_read = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> unix_mount_at (const std::string & mount_path) noexcept;

// gint g_unix_mount_compare (GUnixMountEntry* mount1, GUnixMountEntry* mount2);
// gint g_unix_mount_compare (::GUnixMountEntry* mount1, ::GUnixMountEntry* mount2);
GI_INLINE_DECL gint unix_mount_compare (Gio::UnixMountEntry mount1, Gio::UnixMountEntry mount2) noexcept;

// GUnixMountEntry* g_unix_mount_copy (GUnixMountEntry* mount_entry);
// ::GUnixMountEntry* g_unix_mount_copy (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_copy (Gio::UnixMountEntry mount_entry) noexcept;

// GUnixMountEntry* g_unix_mount_for (const char* file_path, guint64* time_read);
// ::GUnixMountEntry* g_unix_mount_for (const char* file_path, guint64* time_read);
GI_INLINE_DECL Gio::UnixMountEntry unix_mount_for (const std::string & file_path, guint64 * time_read = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gio::UnixMountEntry, guint64> unix_mount_for (const std::string & file_path) noexcept;

// const char* g_unix_mount_get_device_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_device_path (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_get_device_path (Gio::UnixMountEntry mount_entry) noexcept;

// const char* g_unix_mount_get_fs_type (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_fs_type (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_get_fs_type (Gio::UnixMountEntry mount_entry) noexcept;

// const char* g_unix_mount_get_mount_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_mount_path (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_get_mount_path (Gio::UnixMountEntry mount_entry) noexcept;

// const char* g_unix_mount_get_options (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_options (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_get_options (Gio::UnixMountEntry mount_entry) noexcept;

// const char* g_unix_mount_get_root_path (GUnixMountEntry* mount_entry);
// const char* g_unix_mount_get_root_path (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_get_root_path (Gio::UnixMountEntry mount_entry) noexcept;

// gboolean g_unix_mount_guess_can_eject (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_guess_can_eject (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL bool unix_mount_guess_can_eject (Gio::UnixMountEntry mount_entry) noexcept;

// GIcon* g_unix_mount_guess_icon (GUnixMountEntry* mount_entry);
// ::GIcon* g_unix_mount_guess_icon (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL Gio::Icon unix_mount_guess_icon (Gio::UnixMountEntry mount_entry) noexcept;

// char* g_unix_mount_guess_name (GUnixMountEntry* mount_entry);
// char* g_unix_mount_guess_name (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL std::string unix_mount_guess_name (Gio::UnixMountEntry mount_entry) noexcept;

// gboolean g_unix_mount_guess_should_display (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_guess_should_display (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL bool unix_mount_guess_should_display (Gio::UnixMountEntry mount_entry) noexcept;

// GIcon* g_unix_mount_guess_symbolic_icon (GUnixMountEntry* mount_entry);
// ::GIcon* g_unix_mount_guess_symbolic_icon (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL Gio::Icon unix_mount_guess_symbolic_icon (Gio::UnixMountEntry mount_entry) noexcept;

// gboolean g_unix_mount_is_readonly (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_is_readonly (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL bool unix_mount_is_readonly (Gio::UnixMountEntry mount_entry) noexcept;

// gboolean g_unix_mount_is_system_internal (GUnixMountEntry* mount_entry);
// gboolean g_unix_mount_is_system_internal (::GUnixMountEntry* mount_entry);
GI_INLINE_DECL bool unix_mount_is_system_internal (Gio::UnixMountEntry mount_entry) noexcept;

// gboolean g_unix_mount_points_changed_since (guint64 time);
// gboolean g_unix_mount_points_changed_since (guint64 time);
GI_INLINE_DECL bool unix_mount_points_changed_since (guint64 time) noexcept;

// GList* g_unix_mount_points_get (guint64* time_read);
// ::GList* g_unix_mount_points_get (guint64* time_read);
GI_INLINE_DECL std::vector<Gio::UnixMountPoint> unix_mount_points_get (guint64 * time_read = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<Gio::UnixMountPoint>, guint64> unix_mount_points_get () noexcept;

// gboolean g_unix_mounts_changed_since (guint64 time);
// gboolean g_unix_mounts_changed_since (guint64 time);
GI_INLINE_DECL bool unix_mounts_changed_since (guint64 time) noexcept;

// GList* g_unix_mounts_get (guint64* time_read);
// ::GList* g_unix_mounts_get (guint64* time_read);
GI_INLINE_DECL std::vector<Gio::UnixMountEntry> unix_mounts_get (guint64 * time_read = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<Gio::UnixMountEntry>, guint64> unix_mounts_get () noexcept;

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
