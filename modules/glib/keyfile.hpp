// AUTO-GENERATED

#ifndef _GI_GLIB_KEYFILE_HPP_
#define _GI_GLIB_KEYFILE_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;

class KeyFile;

namespace base {


#define GI_GLIB_KEYFILE_BASE base::KeyFileBase
class KeyFileBase : public gi::detail::GBoxedWrapper<KeyFileBase, ::GKeyFile>
{
typedef gi::detail::GBoxedWrapper<KeyFileBase, ::GKeyFile> super_type;
public:

KeyFileBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_key_file_get_type(); } 

// GKeyFile* g_key_file_new ();
// ::GKeyFile* g_key_file_new ();
static GI_INLINE_DECL GLib::KeyFile new_ () noexcept;

// void g_key_file_free (GKeyFile* key_file);
// void g_key_file_free (::GKeyFile* key_file);
// IGNORE; marked ignore

// gboolean g_key_file_get_boolean (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_get_boolean (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL bool get_boolean (const std::string & group_name, const std::string & key);
GI_INLINE_DECL bool get_boolean (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gboolean* g_key_file_get_boolean_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gboolean* g_key_file_get_boolean_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<gboolean> get_boolean_list (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::vector<gboolean> get_boolean_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar* g_key_file_get_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_comment (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL std::string get_comment (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::string get_comment ();
GI_INLINE_DECL std::string get_comment (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string get_comment (GLib::Error * _error) noexcept;

// gdouble g_key_file_get_double (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gdouble g_key_file_get_double (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL gdouble get_double (const std::string & group_name, const std::string & key);
GI_INLINE_DECL gdouble get_double (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gdouble* g_key_file_get_double_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gdouble* g_key_file_get_double_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<gdouble> get_double_list (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::vector<gdouble> get_double_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar** g_key_file_get_groups (GKeyFile* key_file, gsize* length);
// char** g_key_file_get_groups (::GKeyFile* key_file, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_groups (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_groups () noexcept;

// gint64 g_key_file_get_int64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gint64 g_key_file_get_int64 (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL gint64 get_int64 (const std::string & group_name, const std::string & key);
GI_INLINE_DECL gint64 get_int64 (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gint g_key_file_get_integer (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gint g_key_file_get_integer (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL gint get_integer (const std::string & group_name, const std::string & key);
GI_INLINE_DECL gint get_integer (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gint* g_key_file_get_integer_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// gint* g_key_file_get_integer_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<gint> get_integer_list (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::vector<gint> get_integer_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar** g_key_file_get_keys (GKeyFile* key_file, const gchar* group_name, gsize* length, GError ** error);
// char** g_key_file_get_keys (::GKeyFile* key_file, const char* group_name, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<std::string> get_keys (const std::string & group_name, gsize * length = nullptr);
GI_INLINE_DECL std::vector<std::string> get_keys (const std::string & group_name, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_keys (const std::string & group_name);
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_keys (const std::string & group_name, GLib::Error * _error) noexcept;

// gchar* g_key_file_get_locale_for_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale);
// char* g_key_file_get_locale_for_key (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale);
GI_INLINE_DECL std::string get_locale_for_key (const std::string & group_name, const std::string & key, const std::string & locale) noexcept;
GI_INLINE_DECL std::string get_locale_for_key (const std::string & group_name, const std::string & key) noexcept;

// gchar* g_key_file_get_locale_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, GError ** error);
// char* g_key_file_get_locale_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, GError ** error);
GI_INLINE_DECL std::string get_locale_string (const std::string & group_name, const std::string & key, const std::string & locale);
GI_INLINE_DECL std::string get_locale_string (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::string get_locale_string (const std::string & group_name, const std::string & key, const std::string & locale, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string get_locale_string (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar** g_key_file_get_locale_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, gsize* length, GError ** error);
// char** g_key_file_get_locale_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<std::string> get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, gsize * length = nullptr);
GI_INLINE_DECL std::vector<std::string> get_locale_string_list (const std::string & group_name, const std::string & key, gsize * length = nullptr);
GI_INLINE_DECL std::vector<std::string> get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::vector<std::string> get_locale_string_list (const std::string & group_name, const std::string & key, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale);
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_locale_string_list (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_locale_string_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar* g_key_file_get_start_group (GKeyFile* key_file);
// char* g_key_file_get_start_group (::GKeyFile* key_file);
GI_INLINE_DECL std::string get_start_group () noexcept;

// gchar* g_key_file_get_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_string (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL std::string get_string (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::string get_string (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar** g_key_file_get_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gsize* length, GError ** error);
// char** g_key_file_get_string_list (::GKeyFile* key_file, const char* group_name, const char* key, gsize* length, GError ** error);
GI_INLINE_DECL std::vector<std::string> get_string_list (const std::string & group_name, const std::string & key, gsize * length = nullptr);
GI_INLINE_DECL std::vector<std::string> get_string_list (const std::string & group_name, const std::string & key, gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_string_list (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_string_list (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// guint64 g_key_file_get_uint64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// guint64 g_key_file_get_uint64 (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL guint64 get_uint64 (const std::string & group_name, const std::string & key);
GI_INLINE_DECL guint64 get_uint64 (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gchar* g_key_file_get_value (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// char* g_key_file_get_value (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL std::string get_value (const std::string & group_name, const std::string & key);
GI_INLINE_DECL std::string get_value (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gboolean g_key_file_has_group (GKeyFile* key_file, const gchar* group_name);
// gboolean g_key_file_has_group (::GKeyFile* key_file, const char* group_name);
GI_INLINE_DECL bool has_group (const std::string & group_name) noexcept;

// gboolean g_key_file_has_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_has_key (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL bool has_key (const std::string & group_name, const std::string & key);
GI_INLINE_DECL bool has_key (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_bytes (GKeyFile* key_file, GBytes* bytes, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_bytes (::GKeyFile* key_file, ::GBytes* bytes, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_bytes (GLib::Bytes bytes, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_bytes (GLib::Bytes bytes, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_data (GKeyFile* key_file, const gchar* data, gsize length, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data (::GKeyFile* key_file, const char* data, gsize length, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_data (const std::string & data, gsize length, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_data (const std::string & data, gsize length, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_data_dirs (GKeyFile* key_file, const gchar* file, gchar** full_path, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_data_dirs (::GKeyFile* key_file, const char* file, char** full_path, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_data_dirs (const std::string & file, std::string * full_path, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_data_dirs (const std::string & file, std::string * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_from_data_dirs (const std::string & file, GLib::KeyFileFlags flags);
GI_INLINE_DECL std::tuple<bool, std::string> load_from_data_dirs (const std::string & file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_dirs (GKeyFile* key_file, const gchar* file, const gchar** search_dirs, gchar** full_path, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_dirs (::GKeyFile* key_file, const char* file, const char** search_dirs, char** full_path, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, std::string * full_path, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, std::string * full_path, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, GLib::KeyFileFlags flags);
GI_INLINE_DECL std::tuple<bool, std::string> load_from_dirs (const std::string & file, const std::vector<std::string> & search_dirs, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// gboolean g_key_file_load_from_file (GKeyFile* key_file, const gchar* file, GKeyFileFlags flags, GError ** error);
// gboolean g_key_file_load_from_file (::GKeyFile* key_file, const char* file, ::GKeyFileFlags flags, GError ** error);
GI_INLINE_DECL bool load_from_file (const std::string & file, GLib::KeyFileFlags flags);
GI_INLINE_DECL bool load_from_file (const std::string & file, GLib::KeyFileFlags flags, GLib::Error * _error) noexcept;

// GKeyFile* g_key_file_ref (GKeyFile* key_file);
// ::GKeyFile* g_key_file_ref (::GKeyFile* key_file);
// IGNORE; marked ignore

// gboolean g_key_file_remove_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_remove_comment (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL bool remove_comment (const std::string & group_name, const std::string & key);
GI_INLINE_DECL bool remove_comment ();
GI_INLINE_DECL bool remove_comment (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool remove_comment (GLib::Error * _error) noexcept;

// gboolean g_key_file_remove_group (GKeyFile* key_file, const gchar* group_name, GError ** error);
// gboolean g_key_file_remove_group (::GKeyFile* key_file, const char* group_name, GError ** error);
GI_INLINE_DECL bool remove_group (const std::string & group_name);
GI_INLINE_DECL bool remove_group (const std::string & group_name, GLib::Error * _error) noexcept;

// gboolean g_key_file_remove_key (GKeyFile* key_file, const gchar* group_name, const gchar* key, GError ** error);
// gboolean g_key_file_remove_key (::GKeyFile* key_file, const char* group_name, const char* key, GError ** error);
GI_INLINE_DECL bool remove_key (const std::string & group_name, const std::string & key);
GI_INLINE_DECL bool remove_key (const std::string & group_name, const std::string & key, GLib::Error * _error) noexcept;

// gboolean g_key_file_save_to_file (GKeyFile* key_file, const gchar* filename, GError ** error);
// gboolean g_key_file_save_to_file (::GKeyFile* key_file, const char* filename, GError ** error);
GI_INLINE_DECL bool save_to_file (const std::string & filename);
GI_INLINE_DECL bool save_to_file (const std::string & filename, GLib::Error * _error) noexcept;

// void g_key_file_set_boolean (GKeyFile* key_file, const gchar* group_name, const gchar* key, gboolean value);
// void g_key_file_set_boolean (::GKeyFile* key_file, const char* group_name, const char* key, gboolean value);
GI_INLINE_DECL void set_boolean (const std::string & group_name, const std::string & key, gboolean value) noexcept;

// void g_key_file_set_boolean_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gboolean* list, gsize length);
// void g_key_file_set_boolean_list (::GKeyFile* key_file, const char* group_name, const char* key, gboolean* list, gsize length);
GI_INLINE_DECL void set_boolean_list (const std::string & group_name, const std::string & key, gboolean * list, gsize length) noexcept;

// gboolean g_key_file_set_comment (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* comment, GError ** error);
// gboolean g_key_file_set_comment (::GKeyFile* key_file, const char* group_name, const char* key, const char* comment, GError ** error);
GI_INLINE_DECL bool set_comment (const std::string & group_name, const std::string & key, const std::string & comment);
GI_INLINE_DECL bool set_comment (const std::string & comment);
GI_INLINE_DECL bool set_comment (const std::string & group_name, const std::string & key, const std::string & comment, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_comment (const std::string & comment, GLib::Error * _error) noexcept;

// void g_key_file_set_double (GKeyFile* key_file, const gchar* group_name, const gchar* key, gdouble value);
// void g_key_file_set_double (::GKeyFile* key_file, const char* group_name, const char* key, gdouble value);
GI_INLINE_DECL void set_double (const std::string & group_name, const std::string & key, gdouble value) noexcept;

// void g_key_file_set_double_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gdouble* list, gsize length);
// void g_key_file_set_double_list (::GKeyFile* key_file, const char* group_name, const char* key, gdouble* list, gsize length);
GI_INLINE_DECL void set_double_list (const std::string & group_name, const std::string & key, gdouble * list, gsize length) noexcept;

// void g_key_file_set_int64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint64 value);
// void g_key_file_set_int64 (::GKeyFile* key_file, const char* group_name, const char* key, gint64 value);
GI_INLINE_DECL void set_int64 (const std::string & group_name, const std::string & key, gint64 value) noexcept;

// void g_key_file_set_integer (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint value);
// void g_key_file_set_integer (::GKeyFile* key_file, const char* group_name, const char* key, gint value);
GI_INLINE_DECL void set_integer (const std::string & group_name, const std::string & key, gint value) noexcept;

// void g_key_file_set_integer_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, gint* list, gsize length);
// void g_key_file_set_integer_list (::GKeyFile* key_file, const char* group_name, const char* key, gint* list, gsize length);
GI_INLINE_DECL void set_integer_list (const std::string & group_name, const std::string & key, gint * list, gsize length) noexcept;

// void g_key_file_set_list_separator (GKeyFile* key_file, gchar separator);
// void g_key_file_set_list_separator (::GKeyFile* key_file, gchar separator);
GI_INLINE_DECL void set_list_separator (gchar separator) noexcept;

// void g_key_file_set_locale_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, const gchar* string);
// void g_key_file_set_locale_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char* string);
GI_INLINE_DECL void set_locale_string (const std::string & group_name, const std::string & key, const std::string & locale, const std::string & string) noexcept;

// void g_key_file_set_locale_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* locale, const gchar* const* list, gsize length);
// void g_key_file_set_locale_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char* locale, const char** list, gsize length);
GI_INLINE_DECL void set_locale_string_list (const std::string & group_name, const std::string & key, const std::string & locale, const std::vector<std::string> & list, gsize length) noexcept;

// void g_key_file_set_string (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* string);
// void g_key_file_set_string (::GKeyFile* key_file, const char* group_name, const char* key, const char* string);
GI_INLINE_DECL void set_string (const std::string & group_name, const std::string & key, const std::string & string) noexcept;

// void g_key_file_set_string_list (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* const* list, gsize length);
// void g_key_file_set_string_list (::GKeyFile* key_file, const char* group_name, const char* key, const char** list, gsize length);
GI_INLINE_DECL void set_string_list (const std::string & group_name, const std::string & key, const std::vector<std::string> & list, gsize length) noexcept;

// void g_key_file_set_uint64 (GKeyFile* key_file, const gchar* group_name, const gchar* key, guint64 value);
// void g_key_file_set_uint64 (::GKeyFile* key_file, const char* group_name, const char* key, guint64 value);
GI_INLINE_DECL void set_uint64 (const std::string & group_name, const std::string & key, guint64 value) noexcept;

// void g_key_file_set_value (GKeyFile* key_file, const gchar* group_name, const gchar* key, const gchar* value);
// void g_key_file_set_value (::GKeyFile* key_file, const char* group_name, const char* key, const char* value);
GI_INLINE_DECL void set_value (const std::string & group_name, const std::string & key, const std::string & value) noexcept;

// gchar* g_key_file_to_data (GKeyFile* key_file, gsize* length, GError ** error);
// char* g_key_file_to_data (::GKeyFile* key_file, gsize* length, GError ** error);
GI_INLINE_DECL std::string to_data (gsize * length = nullptr);
GI_INLINE_DECL std::string to_data (gsize * length, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> to_data ();
GI_INLINE_DECL std::tuple<std::string, gsize> to_data (GLib::Error * _error) noexcept;

// void g_key_file_unref (GKeyFile* key_file);
// void g_key_file_unref (::GKeyFile* key_file);
// IGNORE; marked ignore

// GQuark g_key_file_error_quark ();
// ::GQuark g_key_file_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra_def.hpp>)
#include <glib/keyfile_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/keyfile_extra.hpp>)
#include <glib/keyfile_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class KeyFile : public GI_GLIB_KEYFILE_BASE
{ typedef GI_GLIB_KEYFILE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GKeyFile>
{ typedef GLib::KeyFile type; }; 

} // namespace repository

} // namespace gi

#endif
