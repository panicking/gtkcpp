// AUTO-GENERATED

#ifndef _GI_GIO_SETTINGS_IMPL_HPP_
#define _GI_GIO_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSettings* g_settings_new (const gchar* schema_id);
// ::GSettings* g_settings_new (const char* schema_id);
Gio::Settings base::SettingsBase::new_ (const std::string & schema_id) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new;
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettings* g_settings_new_full (GSettingsSchema* schema, GSettingsBackend* backend, const gchar* path);
// ::GSettings* g_settings_new_full (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
Gio::Settings base::SettingsBase::new_full (Gio::SettingsSchema schema, Gio::SettingsBackend backend, const std::string & path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_full;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none, gi::direction_in);
  auto schema_to_c = gi::unwrap (schema, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (schema_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Settings base::SettingsBase::new_full (Gio::SettingsSchema schema) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettingsSchema* schema, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_full;
  auto path_to_c = nullptr;
  auto backend_to_c = nullptr;
  auto schema_to_c = gi::unwrap (schema, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettingsSchema*) (schema_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettings* g_settings_new_with_backend (const gchar* schema_id, GSettingsBackend* backend);
// ::GSettings* g_settings_new_with_backend (const char* schema_id, ::GSettingsBackend* backend);
Gio::Settings base::SettingsBase::new_with_backend (const std::string & schema_id, Gio::SettingsBackend backend) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, ::GSettingsBackend* backend);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_backend;
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none, gi::direction_in);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (::GSettingsBackend*) (backend_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettings* g_settings_new_with_backend_and_path (const gchar* schema_id, GSettingsBackend* backend, const gchar* path);
// ::GSettings* g_settings_new_with_backend_and_path (const char* schema_id, ::GSettingsBackend* backend, const char* path);
Gio::Settings base::SettingsBase::new_with_backend_and_path (const std::string & schema_id, Gio::SettingsBackend backend, const std::string & path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, ::GSettingsBackend* backend, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_backend_and_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto backend_to_c = gi::unwrap (backend, gi::transfer_none, gi::direction_in);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (::GSettingsBackend*) (backend_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSettings* g_settings_new_with_path (const gchar* schema_id, const gchar* path);
// ::GSettings* g_settings_new_with_path (const char* schema_id, const char* path);
Gio::Settings base::SettingsBase::new_with_path (const std::string & schema_id, const std::string & path) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (const char* schema_id, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_new_with_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto schema_id_to_c = gi::unwrap (schema_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (schema_id_to_c), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* const* g_settings_list_relocatable_schemas ();
// const char** g_settings_list_relocatable_schemas ();
// IGNORE; deprecated

// const gchar* const* g_settings_list_schemas ();
// const char** g_settings_list_schemas ();
// IGNORE; deprecated

// void g_settings_sync ();
// void g_settings_sync ();
void base::SettingsBase::sync () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_sync;
  call_wrap_v ();
}

// void g_settings_unbind (gpointer object, const gchar* property);
// void g_settings_unbind (::GObject* object, const char* property);
void base::SettingsBase::unbind (GObject::Object object, const std::string & property) noexcept
{
  typedef void (*call_wrap_t) (::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_unbind;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (object_to_c), (const char*) (property_to_c));
}

// void g_settings_apply (GSettings* settings);
// void g_settings_apply (::GSettings* settings);
void base::SettingsBase::apply () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_apply;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// void g_settings_bind (GSettings* settings, const gchar* key, gpointer object, const gchar* property, GSettingsBindFlags flags);
// void g_settings_bind (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags);
void base::SettingsBase::bind (const std::string & key, GObject::Object object, const std::string & property, Gio::SettingsBindFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_bind;
  auto flags_to_c = gi::unwrap (flags);
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GObject*) (object_to_c), (const char*) (property_to_c), (::GSettingsBindFlags) (flags_to_c));
}

// void g_settings_bind_with_mapping (GSettings* settings, const gchar* key, gpointer object, const gchar* property, GSettingsBindFlags flags, GSettingsBindGetMapping get_mapping, GSettingsBindSetMapping set_mapping, gpointer user_data, GDestroyNotify destroy);
// void g_settings_bind_with_mapping (::GSettings* settings, const char* key, ::GObject* object, const char* property, ::GSettingsBindFlags flags, Gio::SettingsBindGetMapping::cfunction_type get_mapping, Gio::SettingsBindSetMapping::cfunction_type set_mapping, void* user_data, GLib::DestroyNotify::cfunction_type destroy);
// IGNORE; not introspectable, callback misses closure info

// void g_settings_bind_writable (GSettings* settings, const gchar* key, gpointer object, const gchar* property, gboolean inverted);
// void g_settings_bind_writable (::GSettings* settings, const char* key, ::GObject* object, const char* property, gboolean inverted);
void base::SettingsBase::bind_writable (const std::string & key, GObject::Object object, const std::string & property, gboolean inverted) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key, ::GObject* object, const char* property, gboolean inverted);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_bind_writable;
  auto inverted_to_c = inverted;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GObject*) (object_to_c), (const char*) (property_to_c), (gboolean) (inverted_to_c));
}

// GAction* g_settings_create_action (GSettings* settings, const gchar* key);
// ::GAction* g_settings_create_action (::GSettings* settings, const char* key);
Gio::Action base::SettingsBase::create_action (const std::string & key) noexcept
{
  typedef ::GAction* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_create_action;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_settings_delay (GSettings* settings);
// void g_settings_delay (::GSettings* settings);
void base::SettingsBase::delay () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_delay;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// void g_settings_get (GSettings* settings, const gchar* key, const gchar* format);
// void g_settings_get (::GSettings* settings, const char* key, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_get_boolean (GSettings* settings, const gchar* key);
// gboolean g_settings_get_boolean (::GSettings* settings, const char* key);
bool base::SettingsBase::get_boolean (const std::string & key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_boolean;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GSettings* g_settings_get_child (GSettings* settings, const gchar* name);
// ::GSettings* g_settings_get_child (::GSettings* settings, const char* name);
Gio::Settings base::SettingsBase::get_child (const std::string & name) noexcept
{
  typedef ::GSettings* (*call_wrap_t) (::GSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_settings_get_default_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_default_value (::GSettings* settings, const char* key);
GLib::Variant base::SettingsBase::get_default_value (const std::string & key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_default_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble g_settings_get_double (GSettings* settings, const gchar* key);
// gdouble g_settings_get_double (::GSettings* settings, const char* key);
gdouble base::SettingsBase::get_double (const std::string & key) noexcept
{
  typedef gdouble (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_double;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gint g_settings_get_enum (GSettings* settings, const gchar* key);
// gint g_settings_get_enum (::GSettings* settings, const char* key);
gint base::SettingsBase::get_enum (const std::string & key) noexcept
{
  typedef gint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_enum;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// guint g_settings_get_flags (GSettings* settings, const gchar* key);
// guint g_settings_get_flags (::GSettings* settings, const char* key);
guint base::SettingsBase::get_flags (const std::string & key) noexcept
{
  typedef guint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_flags;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gboolean g_settings_get_has_unapplied (GSettings* settings);
// gboolean g_settings_get_has_unapplied (::GSettings* settings);
bool base::SettingsBase::get_has_unapplied () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_has_unapplied;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()));
  return _temp_ret;
}

// gint g_settings_get_int (GSettings* settings, const gchar* key);
// gint g_settings_get_int (::GSettings* settings, const char* key);
gint base::SettingsBase::get_int (const std::string & key) noexcept
{
  typedef gint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_int;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gint64 g_settings_get_int64 (GSettings* settings, const gchar* key);
// gint64 g_settings_get_int64 (::GSettings* settings, const char* key);
gint64 base::SettingsBase::get_int64 (const std::string & key) noexcept
{
  typedef gint64 (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_int64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// gpointer g_settings_get_mapped (GSettings* settings, const gchar* key, GSettingsGetMapping mapping, gpointer user_data);
// void* g_settings_get_mapped (::GSettings* settings, const char* key,  mapping, void* user_data);
// SKIP; mapping type  not supported

// GVariant* g_settings_get_range (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_range (::GSettings* settings, const char* key);
// IGNORE; deprecated

// gchar* g_settings_get_string (GSettings* settings, const gchar* key);
// char* g_settings_get_string (::GSettings* settings, const char* key);
std::string base::SettingsBase::get_string (const std::string & key) noexcept
{
  typedef char* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_string;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_settings_get_strv (GSettings* settings, const gchar* key);
// char** g_settings_get_strv (::GSettings* settings, const char* key);
std::vector<std::string> base::SettingsBase::get_strv (const std::string & key) noexcept
{
  typedef char** (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_strv;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// guint g_settings_get_uint (GSettings* settings, const gchar* key);
// guint g_settings_get_uint (::GSettings* settings, const char* key);
guint base::SettingsBase::get_uint (const std::string & key) noexcept
{
  typedef guint (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_uint;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// guint64 g_settings_get_uint64 (GSettings* settings, const gchar* key);
// guint64 g_settings_get_uint64 (::GSettings* settings, const char* key);
guint64 base::SettingsBase::get_uint64 (const std::string & key) noexcept
{
  typedef guint64 (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_uint64;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* g_settings_get_user_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_user_value (::GSettings* settings, const char* key);
GLib::Variant base::SettingsBase::get_user_value (const std::string & key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_user_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_settings_get_value (GSettings* settings, const gchar* key);
// ::GVariant* g_settings_get_value (::GSettings* settings, const char* key);
GLib::Variant base::SettingsBase::get_value (const std::string & key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_get_value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_settings_is_writable (GSettings* settings, const gchar* name);
// gboolean g_settings_is_writable (::GSettings* settings, const char* name);
bool base::SettingsBase::is_writable (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_is_writable;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gchar** g_settings_list_children (GSettings* settings);
// char** g_settings_list_children (::GSettings* settings);
std::vector<std::string> base::SettingsBase::list_children () noexcept
{
  typedef char** (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_list_children;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gchar** g_settings_list_keys (GSettings* settings);
// char** g_settings_list_keys (::GSettings* settings);
// IGNORE; marked ignore

// gboolean g_settings_range_check (GSettings* settings, const gchar* key, GVariant* value);
// gboolean g_settings_range_check (::GSettings* settings, const char* key, ::GVariant* value);
// IGNORE; deprecated

// void g_settings_reset (GSettings* settings, const gchar* key);
// void g_settings_reset (::GSettings* settings, const char* key);
void base::SettingsBase::reset (const std::string & key) noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_reset;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

// void g_settings_revert (GSettings* settings);
// void g_settings_revert (::GSettings* settings);
void base::SettingsBase::revert () noexcept
{
  typedef void (*call_wrap_t) (::GSettings* settings);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_revert;
  call_wrap_v ((::GSettings*) (gobj_()));
}

// gboolean g_settings_set (GSettings* settings, const gchar* key, const gchar* format);
// gboolean g_settings_set (::GSettings* settings, const char* key, const char* format);
// IGNORE; not introspectable, varargs not supported

// gboolean g_settings_set_boolean (GSettings* settings, const gchar* key, gboolean value);
// gboolean g_settings_set_boolean (::GSettings* settings, const char* key, gboolean value);
bool base::SettingsBase::set_boolean (const std::string & key, gboolean value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_boolean;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gboolean) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_double (GSettings* settings, const gchar* key, gdouble value);
// gboolean g_settings_set_double (::GSettings* settings, const char* key, gdouble value);
bool base::SettingsBase::set_double (const std::string & key, gdouble value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_double;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gdouble) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_enum (GSettings* settings, const gchar* key, gint value);
// gboolean g_settings_set_enum (::GSettings* settings, const char* key, gint value);
bool base::SettingsBase::set_enum (const std::string & key, gint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_enum;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_flags (GSettings* settings, const gchar* key, guint value);
// gboolean g_settings_set_flags (::GSettings* settings, const char* key, guint value);
bool base::SettingsBase::set_flags (const std::string & key, guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_flags;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_int (GSettings* settings, const gchar* key, gint value);
// gboolean g_settings_set_int (::GSettings* settings, const char* key, gint value);
bool base::SettingsBase::set_int (const std::string & key, gint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_int;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_int64 (GSettings* settings, const gchar* key, gint64 value);
// gboolean g_settings_set_int64 (::GSettings* settings, const char* key, gint64 value);
bool base::SettingsBase::set_int64 (const std::string & key, gint64 value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_int64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (gint64) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_string (GSettings* settings, const gchar* key, const gchar* value);
// gboolean g_settings_set_string (::GSettings* settings, const char* key, const char* value);
bool base::SettingsBase::set_string (const std::string & key, const std::string & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, const char* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_string;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (const char*) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_strv (GSettings* settings, const gchar* key, const gchar* const* value);
// gboolean g_settings_set_strv (::GSettings* settings, const char* key, const char** value);
bool base::SettingsBase::set_strv (const std::string & key, const std::vector<std::string> & value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, const char** value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_strv;
  auto value_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (value);
  auto value_w = unwrap (value_i, gi::transfer_none, direction_in);
  auto value_to_c = value_w.gobj_(false);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (const char**) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_uint (GSettings* settings, const gchar* key, guint value);
// gboolean g_settings_set_uint (::GSettings* settings, const char* key, guint value);
bool base::SettingsBase::set_uint (const std::string & key, guint value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_uint;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_uint64 (GSettings* settings, const gchar* key, guint64 value);
// gboolean g_settings_set_uint64 (::GSettings* settings, const char* key, guint64 value);
bool base::SettingsBase::set_uint64 (const std::string & key, guint64 value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_uint64;
  auto value_to_c = value;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (guint64) (value_to_c));
  return _temp_ret;
}

// gboolean g_settings_set_value (GSettings* settings, const gchar* key, GVariant* value);
// gboolean g_settings_set_value (::GSettings* settings, const char* key, ::GVariant* value);
bool base::SettingsBase::set_value (const std::string & key, GLib::Variant value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSettings* settings, const char* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_settings_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c));
  return _temp_ret;
}

// SKIP; glib:signal container parameter not supported





} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/settings_extra_def_impl.hpp>)
#include <gio/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/settings_extra_impl.hpp>)
#include <gio/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void SettingsClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GSettingsClass *methods = (::GSettingsClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (const std::string & key), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::changed_>;
  methods->writable_change_event = (decltype (methods->writable_change_event)) detail::method_wrapper<self, bool (*) (::GQuark key), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::writable_change_event_>;
  methods->writable_changed = (decltype (methods->writable_changed)) detail::method_wrapper<self, void (*) (const std::string & key), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::writable_changed_>;
}

// gboolean Settings::change_event (GSettings* settings, const GQuark* keys, gint n_keys);
// gboolean Settings::change_event (::GSettings* settings, const ::GQuark keys, gint n_keys);
// SKIP; inconsistent in keys pointer depth (1 vs 0)

// void Settings::changed (GSettings* settings, const gchar* key);
// void Settings::changed (::GSettings* settings, const char* key);
void SettingsClass::changed_ (const std::string & key) noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

// gboolean Settings::writable_change_event (GSettings* settings, GQuark key);
// gboolean Settings::writable_change_event (::GSettings* settings, ::GQuark key);
bool SettingsClass::writable_change_event_ (::GQuark key) noexcept
{
  if (!get_struct_()->writable_change_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GSettings* settings, ::GQuark key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writable_change_event;
  auto key_to_c = key;
  auto _temp_ret = call_wrap_v ((::GSettings*) (gobj_()), (::GQuark) (key_to_c));
  return _temp_ret;
}

// void Settings::writable_changed (GSettings* settings, const gchar* key);
// void Settings::writable_changed (::GSettings* settings, const char* key);
void SettingsClass::writable_changed_ (const std::string & key) noexcept
{
  if (!get_struct_()->writable_changed) return ;
  typedef void (*call_wrap_t) (::GSettings* settings, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->writable_changed;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSettings*) (gobj_()), (const char*) (key_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
