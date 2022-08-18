// AUTO-GENERATED

#ifndef _GI_GIO_FILE_HPP_
#define _GI_GIO_FILE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AppInfo;
class AsyncResult;
class Cancellable;
class FileAttributeInfoList;
class FileEnumerator;
class FileIOStream;
class FileInfo;
class FileInputStream;
class FileMonitor;
class FileOutputStream;
class Mount;
class MountOperation;

class File;

namespace base {


#define GI_GIO_FILE_BASE base::FileBase
class FileBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::GFile BaseObjectType;

FileBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_file_get_type(); } 

// GFile* g_file_new_build_filename (const gchar* first_element);
// ::GFile* g_file_new_build_filename (const char* first_element);
// IGNORE; not introspectable, varargs not supported

// GFile* g_file_new_for_commandline_arg (const char* arg);
// ::GFile* g_file_new_for_commandline_arg (const char* arg);
static GI_INLINE_DECL Gio::File new_for_commandline_arg (const std::string & arg) noexcept;

// GFile* g_file_new_for_commandline_arg_and_cwd (const gchar* arg, const gchar* cwd);
// ::GFile* g_file_new_for_commandline_arg_and_cwd (const char* arg, const char* cwd);
static GI_INLINE_DECL Gio::File new_for_commandline_arg_and_cwd (const std::string & arg, const std::string & cwd) noexcept;

// GFile* g_file_new_for_path (const char* path);
// ::GFile* g_file_new_for_path (const char* path);
static GI_INLINE_DECL Gio::File new_for_path (const std::string & path) noexcept;

// GFile* g_file_new_for_uri (const char* uri);
// ::GFile* g_file_new_for_uri (const char* uri);
static GI_INLINE_DECL Gio::File new_for_uri (const std::string & uri) noexcept;

// GFile* g_file_new_tmp (const char* tmpl, GFileIOStream** iostream, GError ** error);
// ::GFile* g_file_new_tmp (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
static GI_INLINE_DECL Gio::File new_tmp (const std::string & tmpl, Gio::FileIOStream & iostream);
static GI_INLINE_DECL Gio::File new_tmp (Gio::FileIOStream & iostream);
static GI_INLINE_DECL Gio::File new_tmp (const std::string & tmpl, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gio::File new_tmp (Gio::FileIOStream & iostream, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (const std::string & tmpl);
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp ();
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (const std::string & tmpl, GLib::Error * _error) noexcept;
static GI_INLINE_DECL std::tuple<Gio::File, Gio::FileIOStream> new_tmp (GLib::Error * _error) noexcept;

// GFile* g_file_parse_name (const char* parse_name);
// ::GFile* g_file_parse_name (const char* parse_name);
static GI_INLINE_DECL Gio::File parse_name (const std::string & parse_name) noexcept;

// GFileOutputStream* g_file_append_to (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_append_to (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream append_to (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_append_to_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_append_to_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileOutputStream* g_file_append_to_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_append_to_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream append_to_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream append_to_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// char* g_file_build_attribute_list_for_copy (GFile* file, GFileCopyFlags flags, GCancellable* cancellable, GError ** error);
// char* g_file_build_attribute_list_for_copy (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL std::string build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL std::string build_attribute_list_for_copy (Gio::FileCopyFlags flags);
GI_INLINE_DECL std::string build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::string build_attribute_list_for_copy (Gio::FileCopyFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_copy (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean g_file_copy (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;

// void g_file_copy_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_copy_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_copy_attributes (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_copy_attributes (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags);
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_copy_finish (GFile* file, GAsyncResult* res, GError ** error);
// gboolean g_file_copy_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL bool copy_finish (Gio::AsyncResult res);
GI_INLINE_DECL bool copy_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* g_file_create (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_create (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream create (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_create_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_create_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileOutputStream* g_file_create_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_create_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream create_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileIOStream* g_file_create_readwrite (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_create_readwrite (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream create_readwrite (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_create_readwrite_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_create_readwrite_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* g_file_create_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_create_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream create_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_file_delete (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_delete (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool delete_ (Gio::Cancellable cancellable);
GI_INLINE_DECL bool delete_ ();
GI_INLINE_DECL bool delete_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool delete_ (GLib::Error * _error) noexcept;

// void g_file_delete_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_delete_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void delete_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void delete_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_delete_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_delete_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool delete_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool delete_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFile* g_file_dup (GFile* file);
// ::GFile* g_file_dup (::GFile* file);
GI_INLINE_DECL Gio::File dup () noexcept;

// void g_file_eject_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_eject_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_file_eject_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_eject_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_file_eject_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_eject_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_eject_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_eject_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool eject_mountable_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool eject_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileEnumerator* g_file_enumerate_children (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileEnumerator* g_file_enumerate_children (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileEnumerator enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_enumerate_children_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerate_children_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void enumerate_children_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void enumerate_children_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileEnumerator* g_file_enumerate_children_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileEnumerator* g_file_enumerate_children_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileEnumerator enumerate_children_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// gboolean g_file_equal (GFile* file1, GFile* file2);
// gboolean g_file_equal (::GFile* file1, ::GFile* file2);
GI_INLINE_DECL bool equal (Gio::File file2) noexcept;

// GMount* g_file_find_enclosing_mount (GFile* file, GCancellable* cancellable, GError ** error);
// ::GMount* g_file_find_enclosing_mount (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::Mount find_enclosing_mount ();
GI_INLINE_DECL Gio::Mount find_enclosing_mount (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::Mount find_enclosing_mount (GLib::Error * _error) noexcept;

// void g_file_find_enclosing_mount_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_find_enclosing_mount_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void find_enclosing_mount_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void find_enclosing_mount_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GMount* g_file_find_enclosing_mount_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GMount* g_file_find_enclosing_mount_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::Mount find_enclosing_mount_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// char* g_file_get_basename (GFile* file);
// char* g_file_get_basename (::GFile* file);
GI_INLINE_DECL std::string get_basename () noexcept;

// GFile* g_file_get_child (GFile* file, const char* name);
// ::GFile* g_file_get_child (::GFile* file, const char* name);
GI_INLINE_DECL Gio::File get_child (const std::string & name) noexcept;

// GFile* g_file_get_child_for_display_name (GFile* file, const char* display_name, GError ** error);
// ::GFile* g_file_get_child_for_display_name (::GFile* file, const char* display_name, GError ** error);
GI_INLINE_DECL Gio::File get_child_for_display_name (const std::string & display_name);
GI_INLINE_DECL Gio::File get_child_for_display_name (const std::string & display_name, GLib::Error * _error) noexcept;

// GFile* g_file_get_parent (GFile* file);
// ::GFile* g_file_get_parent (::GFile* file);
GI_INLINE_DECL Gio::File get_parent () noexcept;

// char* g_file_get_parse_name (GFile* file);
// char* g_file_get_parse_name (::GFile* file);
GI_INLINE_DECL std::string get_parse_name () noexcept;

// char* g_file_get_path (GFile* file);
// char* g_file_get_path (::GFile* file);
GI_INLINE_DECL std::string get_path () noexcept;

// char* g_file_get_relative_path (GFile* parent, GFile* descendant);
// char* g_file_get_relative_path (::GFile* parent, ::GFile* descendant);
GI_INLINE_DECL std::string get_relative_path (Gio::File descendant) noexcept;

// char* g_file_get_uri (GFile* file);
// char* g_file_get_uri (::GFile* file);
GI_INLINE_DECL std::string get_uri () noexcept;

// char* g_file_get_uri_scheme (GFile* file);
// char* g_file_get_uri_scheme (::GFile* file);
GI_INLINE_DECL std::string get_uri_scheme () noexcept;

// gboolean g_file_has_parent (GFile* file, GFile* parent);
// gboolean g_file_has_parent (::GFile* file, ::GFile* parent);
GI_INLINE_DECL bool has_parent (Gio::File parent) noexcept;
GI_INLINE_DECL bool has_parent () noexcept;

// gboolean g_file_has_prefix (GFile* file, GFile* prefix);
// gboolean g_file_has_prefix (::GFile* file, ::GFile* prefix);
GI_INLINE_DECL bool has_prefix (Gio::File prefix) noexcept;

// gboolean g_file_has_uri_scheme (GFile* file, const char* uri_scheme);
// gboolean g_file_has_uri_scheme (::GFile* file, const char* uri_scheme);
GI_INLINE_DECL bool has_uri_scheme (const std::string & uri_scheme) noexcept;

// guint g_file_hash (gconstpointer file);
// guint g_file_hash (const ::GFile* file);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_file_is_native (GFile* file);
// gboolean g_file_is_native (::GFile* file);
GI_INLINE_DECL bool is_native () noexcept;

// GBytes* g_file_load_bytes (GFile* file, GCancellable* cancellable, gchar** etag_out, GError ** error);
// ::GBytes* g_file_load_bytes (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
GI_INLINE_DECL GLib::Bytes load_bytes (Gio::Cancellable cancellable, std::string * etag_out = nullptr);
GI_INLINE_DECL GLib::Bytes load_bytes (std::string * etag_out = nullptr);
GI_INLINE_DECL GLib::Bytes load_bytes (Gio::Cancellable cancellable, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL GLib::Bytes load_bytes (std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes (Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes ();
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes (GLib::Error * _error) noexcept;

// void g_file_load_bytes_async (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_bytes_async (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_bytes_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_bytes_async (Gio::AsyncReadyCallback callback) noexcept;

// GBytes* g_file_load_bytes_finish (GFile* file, GAsyncResult* result, gchar** etag_out, GError ** error);
// ::GBytes* g_file_load_bytes_finish (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
GI_INLINE_DECL GLib::Bytes load_bytes_finish (Gio::AsyncResult result, std::string * etag_out = nullptr);
GI_INLINE_DECL GLib::Bytes load_bytes_finish (Gio::AsyncResult result, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<GLib::Bytes, std::string> load_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_load_contents (GFile* file, GCancellable* cancellable, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_contents (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
GI_INLINE_DECL bool load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, std::string * etag_out = nullptr);
GI_INLINE_DECL bool load_contents (std::vector<guint8> & contents, std::string * etag_out = nullptr);
GI_INLINE_DECL bool load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool load_contents (std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents);
GI_INLINE_DECL std::tuple<bool, std::string> load_contents (std::vector<guint8> & contents);
GI_INLINE_DECL std::tuple<bool, std::string> load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_contents (std::vector<guint8> & contents, GLib::Error * _error) noexcept;

// void g_file_load_contents_async (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_contents_async (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void load_contents_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void load_contents_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_load_contents_finish (GFile* file, GAsyncResult* res, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_contents_finish (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
GI_INLINE_DECL bool load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out = nullptr);
GI_INLINE_DECL bool load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents);
GI_INLINE_DECL std::tuple<bool, std::string> load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, GLib::Error * _error) noexcept;

// void g_file_load_partial_contents_async (GFile* file, GCancellable* cancellable, GFileReadMoreCallback read_more_callback, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_partial_contents_async (::GFile* file, ::GCancellable* cancellable, Gio::FileReadMoreCallback::cfunction_type read_more_callback, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; not introspectable, callback closure parameter already used

// gboolean g_file_load_partial_contents_finish (GFile* file, GAsyncResult* res, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_partial_contents_finish (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
GI_INLINE_DECL bool load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out = nullptr);
GI_INLINE_DECL bool load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents);
GI_INLINE_DECL std::tuple<bool, std::string> load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, GLib::Error * _error) noexcept;

// gboolean g_file_make_directory (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_directory (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool make_directory (Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_directory ();
GI_INLINE_DECL bool make_directory (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_directory (GLib::Error * _error) noexcept;

// void g_file_make_directory_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_make_directory_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void make_directory_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void make_directory_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_make_directory_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_make_directory_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool make_directory_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool make_directory_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_make_directory_with_parents (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_directory_with_parents (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool make_directory_with_parents (Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_directory_with_parents ();
GI_INLINE_DECL bool make_directory_with_parents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_directory_with_parents (GLib::Error * _error) noexcept;

// gboolean g_file_make_symbolic_link (GFile* file, const char* symlink_value, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_symbolic_link (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool make_symbolic_link (const std::string & symlink_value, Gio::Cancellable cancellable);
GI_INLINE_DECL bool make_symbolic_link (const std::string & symlink_value);
GI_INLINE_DECL bool make_symbolic_link (const std::string & symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool make_symbolic_link (const std::string & symlink_value, GLib::Error * _error) noexcept;

// gboolean g_file_measure_disk_usage (GFile* file, GFileMeasureFlags flags, GCancellable* cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// IGNORE; not introspectable, callback misses scope info

// void g_file_measure_disk_usage_async (GFile* file, GFileMeasureFlags flags, gint io_priority, GCancellable* cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_measure_disk_usage_async (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_measure_disk_usage_finish (GFile* file, GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage_finish (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
GI_INLINE_DECL bool measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage = nullptr, guint64 * num_dirs = nullptr, guint64 * num_files = nullptr);
GI_INLINE_DECL bool measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, guint64, guint64, guint64> measure_disk_usage_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileMonitor* g_file_monitor (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// GFileMonitor* g_file_monitor_directory (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor_directory (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor_directory (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// GFileMonitor* g_file_monitor_file (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor_file (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags);
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileMonitor monitor_file (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept;

// void g_file_mount_enclosing_volume (GFile* location, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_mount_enclosing_volume (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void mount_enclosing_volume (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount_enclosing_volume (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_mount_enclosing_volume_finish (GFile* location, GAsyncResult* result, GError ** error);
// gboolean g_file_mount_enclosing_volume_finish (::GFile* location, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool mount_enclosing_volume_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool mount_enclosing_volume_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_mount_mountable (GFile* file, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_mount_mountable (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void mount_mountable (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void mount_mountable (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// GFile* g_file_mount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GFile* g_file_mount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::File mount_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::File mount_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_move (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean g_file_move (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback);
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept;

// void g_file_move_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_move_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_move_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_move_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool move_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool move_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GFileIOStream* g_file_open_readwrite (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_open_readwrite (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream open_readwrite ();
GI_INLINE_DECL Gio::FileIOStream open_readwrite (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream open_readwrite (GLib::Error * _error) noexcept;

// void g_file_open_readwrite_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_open_readwrite_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void open_readwrite_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void open_readwrite_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* g_file_open_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_open_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream open_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// const char* g_file_peek_path (GFile* file);
// const char* g_file_peek_path (::GFile* file);
GI_INLINE_DECL std::string peek_path () noexcept;

// void g_file_poll_mountable (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_poll_mountable (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void poll_mountable (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void poll_mountable (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_poll_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_poll_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool poll_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool poll_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// GAppInfo* g_file_query_default_handler (GFile* file, GCancellable* cancellable, GError ** error);
// ::GAppInfo* g_file_query_default_handler (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::AppInfo query_default_handler (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::AppInfo query_default_handler ();
GI_INLINE_DECL Gio::AppInfo query_default_handler (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::AppInfo query_default_handler (GLib::Error * _error) noexcept;

// void g_file_query_default_handler_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_default_handler_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_default_handler_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_default_handler_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GAppInfo* g_file_query_default_handler_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GAppInfo* g_file_query_default_handler_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL Gio::AppInfo query_default_handler_finish (Gio::AsyncResult result);
GI_INLINE_DECL Gio::AppInfo query_default_handler_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_query_exists (GFile* file, GCancellable* cancellable);
// gboolean g_file_query_exists (::GFile* file, ::GCancellable* cancellable);
GI_INLINE_DECL bool query_exists (Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL bool query_exists () noexcept;

// GFileType g_file_query_file_type (GFile* file, GFileQueryInfoFlags flags, GCancellable* cancellable);
// ::GFileType g_file_query_file_type (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
GI_INLINE_DECL Gio::FileType query_file_type (Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable) noexcept;
GI_INLINE_DECL Gio::FileType query_file_type (Gio::FileQueryInfoFlags flags) noexcept;

// GFileInfo* g_file_query_filesystem_info (GFile* file, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_query_filesystem_info (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const std::string & attributes, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const std::string & attributes);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_filesystem_info (const std::string & attributes, GLib::Error * _error) noexcept;

// void g_file_query_filesystem_info_async (GFile* file, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_filesystem_info_async (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_filesystem_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_filesystem_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* g_file_query_filesystem_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* g_file_query_filesystem_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInfo query_filesystem_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileInfo* g_file_query_info (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_query_info (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInfo query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_query_info_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_info_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void query_info_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void query_info_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInfo* g_file_query_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* g_file_query_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInfo query_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileAttributeInfoList* g_file_query_settable_attributes (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* g_file_query_settable_attributes (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes ();
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileAttributeInfoList query_settable_attributes (GLib::Error * _error) noexcept;

// GFileAttributeInfoList* g_file_query_writable_namespaces (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* g_file_query_writable_namespaces (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces ();
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileAttributeInfoList query_writable_namespaces (GLib::Error * _error) noexcept;

// GFileInputStream* g_file_read (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileInputStream* g_file_read (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read (Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileInputStream read ();
GI_INLINE_DECL Gio::FileInputStream read (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileInputStream read (GLib::Error * _error) noexcept;

// void g_file_read_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_read_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void read_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void read_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileInputStream* g_file_read_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInputStream* g_file_read_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileInputStream read_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileInputStream read_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* g_file_replace (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_replace (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileOutputStream replace (gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileOutputStream replace (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileOutputStream replace (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void replace_async (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_replace_contents (GFile* file, const char* contents, gsize length, const char* etag, gboolean make_backup, GFileCreateFlags flags, char** new_etag, GCancellable* cancellable, GError ** error);
// gboolean g_file_replace_contents (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, Gio::Cancellable cancellable);
GI_INLINE_DECL bool replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag = nullptr);
GI_INLINE_DECL bool replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_contents_async (GFile* file, const char* contents, gsize length, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_contents_async (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void replace_contents_async (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_contents_async (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// void g_file_replace_contents_bytes_async (GFile* file, GBytes* contents, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_contents_bytes_async (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void replace_contents_bytes_async (GLib::Bytes contents, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_contents_bytes_async (GLib::Bytes contents, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_replace_contents_finish (GFile* file, GAsyncResult* res, char** new_etag, GError ** error);
// gboolean g_file_replace_contents_finish (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
GI_INLINE_DECL bool replace_contents_finish (Gio::AsyncResult res, std::string * new_etag = nullptr);
GI_INLINE_DECL bool replace_contents_finish (Gio::AsyncResult res, std::string * new_etag, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents_finish (Gio::AsyncResult res);
GI_INLINE_DECL std::tuple<bool, std::string> replace_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileOutputStream* g_file_replace_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_replace_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileOutputStream replace_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileOutputStream replace_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFileIOStream* g_file_replace_readwrite (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_replace_readwrite (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::FileIOStream replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept;

// void g_file_replace_readwrite_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_readwrite_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void replace_readwrite_async (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void replace_readwrite_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFileIOStream* g_file_replace_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_replace_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::FileIOStream replace_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// GFile* g_file_resolve_relative_path (GFile* file, const char* relative_path);
// ::GFile* g_file_resolve_relative_path (::GFile* file, const char* relative_path);
GI_INLINE_DECL Gio::File resolve_relative_path (const std::string & relative_path) noexcept;

// gboolean g_file_set_attribute (GFile* file, const char* attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_byte_string (GFile* file, const char* attribute, const char* value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_byte_string (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_int32 (GFile* file, const char* attribute, gint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_int32 (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_int64 (GFile* file, const char* attribute, gint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_int64 (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_string (GFile* file, const char* attribute, const char* value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_string (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_uint32 (GFile* file, const char* attribute, guint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_uint32 (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// gboolean g_file_set_attribute_uint64 (GFile* file, const char* attribute, guint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_uint64 (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// void g_file_set_attributes_async (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_set_attributes_async (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_set_attributes_finish (GFile* file, GAsyncResult* result, GFileInfo** info, GError ** error);
// gboolean g_file_set_attributes_finish (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
GI_INLINE_DECL bool set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info);
GI_INLINE_DECL bool set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo> set_attributes_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, Gio::FileInfo> set_attributes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_set_attributes_from_info (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attributes_from_info (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags);
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept;

// GFile* g_file_set_display_name (GFile* file, const char* display_name, GCancellable* cancellable, GError ** error);
// ::GFile* g_file_set_display_name (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL Gio::File set_display_name (const std::string & display_name, Gio::Cancellable cancellable);
GI_INLINE_DECL Gio::File set_display_name (const std::string & display_name);
GI_INLINE_DECL Gio::File set_display_name (const std::string & display_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL Gio::File set_display_name (const std::string & display_name, GLib::Error * _error) noexcept;

// void g_file_set_display_name_async (GFile* file, const char* display_name, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_set_display_name_async (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void set_display_name_async (const std::string & display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void set_display_name_async (const std::string & display_name, gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// GFile* g_file_set_display_name_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFile* g_file_set_display_name_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
GI_INLINE_DECL Gio::File set_display_name_finish (Gio::AsyncResult res);
GI_INLINE_DECL Gio::File set_display_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept;

// void g_file_start_mountable (GFile* file, GDriveStartFlags flags, GMountOperation* start_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_start_mountable (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void start_mountable (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void start_mountable (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_start_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_start_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool start_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool start_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_stop_mountable (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_stop_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void stop_mountable (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void stop_mountable (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_stop_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_stop_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool stop_mountable_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool stop_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_file_supports_thread_contexts (GFile* file);
// gboolean g_file_supports_thread_contexts (::GFile* file);
GI_INLINE_DECL bool supports_thread_contexts () noexcept;

// gboolean g_file_trash (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_trash (::GFile* file, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool trash (Gio::Cancellable cancellable);
GI_INLINE_DECL bool trash ();
GI_INLINE_DECL bool trash (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool trash (GLib::Error * _error) noexcept;

// void g_file_trash_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_trash_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void trash_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void trash_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_trash_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_trash_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool trash_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool trash_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_file_unmount_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_unmount_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_file_unmount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_unmount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_file_unmount_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_unmount_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_file_unmount_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_unmount_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool unmount_mountable_with_operation_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool unmount_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/file_extra_def.hpp>)
#include <gio/file_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/file_extra.hpp>)
#include <gio/file_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class File : public GI_GIO_FILE_BASE
{ typedef GI_GIO_FILE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFile>
{ typedef Gio::File type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FileIfaceDef
{
typedef FileIfaceDef self;
public:
typedef Gio::File instance_type;
typedef ::GFileIface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// GFileOutputStream* File::append_to (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::append_to (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::append_to_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::append_to_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::append_to_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::append_to_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::copy (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean File::copy (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
// SKIP; virtual-method callback parameter not supported, callee GError not supported

// void File::copy_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void File::copy_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// gboolean File::copy_finish (GFile* file, GAsyncResult* res, GError ** error);
// gboolean File::copy_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileOutputStream* File::create (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::create (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::create_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::create_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::create_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::create_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::create_readwrite (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::create_readwrite (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::create_readwrite_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::create_readwrite_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::create_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::create_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::delete_file (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::delete_file (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::delete_file_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::delete_file_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::delete_file_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::delete_file_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFile* File::dup (GFile* file);
// ::GFile* File::dup (::GFile* file);
virtual Gio::File dup_ () noexcept = 0;

// void File::eject_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::eject_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean File::eject_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::eject_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void File::eject_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::eject_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::eject_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::eject_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFileEnumerator* File::enumerate_children (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileEnumerator* File::enumerate_children (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::enumerate_children_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::enumerate_children_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileEnumerator* File::enumerate_children_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileEnumerator* File::enumerate_children_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::equal (GFile* file1, GFile* file2);
// gboolean File::equal (::GFile* file1, ::GFile* file2);
virtual bool equal_ (Gio::File file2) noexcept = 0;

// GMount* File::find_enclosing_mount (GFile* file, GCancellable* cancellable, GError ** error);
// ::GMount* File::find_enclosing_mount (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::find_enclosing_mount_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::find_enclosing_mount_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GMount* File::find_enclosing_mount_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GMount* File::find_enclosing_mount_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// char* File::get_basename (GFile* file);
// char* File::get_basename (::GFile* file);
virtual std::string get_basename_ () noexcept = 0;

// GFile* File::get_child_for_display_name (GFile* file, const char* display_name, GError ** error);
// ::GFile* File::get_child_for_display_name (::GFile* file, const char* display_name, GError ** error);
// SKIP; callee GError not supported

// GFile* File::get_parent (GFile* file);
// ::GFile* File::get_parent (::GFile* file);
virtual Gio::File get_parent_ () noexcept = 0;

// char* File::get_parse_name (GFile* file);
// char* File::get_parse_name (::GFile* file);
virtual std::string get_parse_name_ () noexcept = 0;

// char* File::get_path (GFile* file);
// char* File::get_path (::GFile* file);
virtual std::string get_path_ () noexcept = 0;

// char* File::get_relative_path (GFile* parent, GFile* descendant);
// char* File::get_relative_path (::GFile* parent, ::GFile* descendant);
virtual std::string get_relative_path_ (Gio::File descendant) noexcept = 0;

// char* File::get_uri (GFile* file);
// char* File::get_uri (::GFile* file);
virtual std::string get_uri_ () noexcept = 0;

// char* File::get_uri_scheme (GFile* file);
// char* File::get_uri_scheme (::GFile* file);
virtual std::string get_uri_scheme_ () noexcept = 0;

// gboolean File::has_uri_scheme (GFile* file, const char* uri_scheme);
// gboolean File::has_uri_scheme (::GFile* file, const char* uri_scheme);
virtual bool has_uri_scheme_ (const std::string & uri_scheme) noexcept = 0;

// guint File::hash (GFile* file);
// guint File::hash (::GFile* file);
virtual guint hash_ () noexcept = 0;

// gboolean File::is_native (GFile* file);
// gboolean File::is_native (::GFile* file);
virtual bool is_native_ () noexcept = 0;

// gboolean File::make_directory (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::make_directory (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::make_directory_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::make_directory_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::make_directory_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::make_directory_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::make_symbolic_link (GFile* file, const char* symlink_value, GCancellable* cancellable, GError ** error);
// gboolean File::make_symbolic_link (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// gboolean File::measure_disk_usage_finish (GFile* file, GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage_finish (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, callee GError not supported

// GFileMonitor* File::monitor_dir (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* File::monitor_dir (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileMonitor* File::monitor_file (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* File::monitor_file (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::mount_enclosing_volume (GFile* location, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::mount_enclosing_volume (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::mount_enclosing_volume_finish (GFile* location, GAsyncResult* result, GError ** error);
// gboolean File::mount_enclosing_volume_finish (::GFile* location, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::mount_mountable (GFile* file, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::mount_mountable (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFile* File::mount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GFile* File::mount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::move (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean File::move (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
// SKIP; virtual-method callback parameter not supported, callee GError not supported

// void File::move_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void File::move_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// gboolean File::move_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::move_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::open_readwrite (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::open_readwrite (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::open_readwrite_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::open_readwrite_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::open_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::open_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// void File::poll_mountable (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::poll_mountable (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::poll_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::poll_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::prefix_matches (GFile* prefix, GFile* file);
// gboolean File::prefix_matches (::GFile* prefix, ::GFile* file);
virtual bool prefix_matches_ (Gio::File file) noexcept = 0;

// GFileInfo* File::query_filesystem_info (GFile* file, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* File::query_filesystem_info (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::query_filesystem_info_async (GFile* file, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::query_filesystem_info_async (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* File::query_filesystem_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* File::query_filesystem_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileInfo* File::query_info (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileInfo* File::query_info (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::query_info_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::query_info_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* File::query_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* File::query_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileAttributeInfoList* File::query_settable_attributes (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* File::query_settable_attributes (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileAttributeInfoList* File::query_writable_namespaces (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* File::query_writable_namespaces (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::read_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::read_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInputStream* File::read_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInputStream* File::read_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileInputStream* File::read_fn (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileInputStream* File::read_fn (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileOutputStream* File::replace (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::replace (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::replace_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::replace_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::replace_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::replace_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::replace_readwrite (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::replace_readwrite (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::replace_readwrite_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::replace_readwrite_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::replace_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::replace_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFile* File::resolve_relative_path (GFile* file, const char* relative_path);
// ::GFile* File::resolve_relative_path (::GFile* file, const char* relative_path);
virtual Gio::File resolve_relative_path_ (const std::string & relative_path) noexcept = 0;

// gboolean File::set_attribute (GFile* file, const char* attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean File::set_attribute (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::set_attributes_async (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::set_attributes_async (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::set_attributes_finish (GFile* file, GAsyncResult* result, GFileInfo** info, GError ** error);
// gboolean File::set_attributes_finish (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// gboolean File::set_attributes_from_info (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean File::set_attributes_from_info (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFile* File::set_display_name (GFile* file, const char* display_name, GCancellable* cancellable, GError ** error);
// ::GFile* File::set_display_name (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::set_display_name_async (GFile* file, const char* display_name, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::set_display_name_async (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFile* File::set_display_name_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFile* File::set_display_name_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// void File::start_mountable (GFile* file, GDriveStartFlags flags, GMountOperation* start_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::start_mountable (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::start_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::start_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::stop_mountable (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::stop_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::stop_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::stop_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::trash (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::trash (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::trash_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::trash_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::trash_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::trash_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::unmount_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::unmount_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean File::unmount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::unmount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void File::unmount_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::unmount_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::unmount_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::unmount_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

using FileImpl = detail::InterfaceImpl<FileIfaceDef>;

class FileIfaceClassImpl: public detail::InterfaceClassImpl<FileImpl>
{
typedef FileIfaceClassImpl self;
typedef detail::InterfaceClassImpl<FileImpl> super;

protected:
using super::super;

// GFileOutputStream* File::append_to (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::append_to (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::append_to_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::append_to_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::append_to_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::append_to_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::copy (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean File::copy (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
// SKIP; virtual-method callback parameter not supported, callee GError not supported

// void File::copy_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void File::copy_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// gboolean File::copy_finish (GFile* file, GAsyncResult* res, GError ** error);
// gboolean File::copy_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileOutputStream* File::create (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::create (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::create_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::create_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::create_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::create_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::create_readwrite (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::create_readwrite (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::create_readwrite_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::create_readwrite_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::create_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::create_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::delete_file (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::delete_file (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::delete_file_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::delete_file_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::delete_file_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::delete_file_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFile* File::dup (GFile* file);
// ::GFile* File::dup (::GFile* file);
GI_INLINE_DECL Gio::File dup_ () noexcept override;

// void File::eject_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::eject_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean File::eject_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::eject_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void File::eject_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::eject_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::eject_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::eject_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFileEnumerator* File::enumerate_children (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileEnumerator* File::enumerate_children (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::enumerate_children_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::enumerate_children_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileEnumerator* File::enumerate_children_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileEnumerator* File::enumerate_children_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// gboolean File::equal (GFile* file1, GFile* file2);
// gboolean File::equal (::GFile* file1, ::GFile* file2);
GI_INLINE_DECL bool equal_ (Gio::File file2) noexcept override;

// GMount* File::find_enclosing_mount (GFile* file, GCancellable* cancellable, GError ** error);
// ::GMount* File::find_enclosing_mount (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::find_enclosing_mount_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::find_enclosing_mount_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GMount* File::find_enclosing_mount_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GMount* File::find_enclosing_mount_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// char* File::get_basename (GFile* file);
// char* File::get_basename (::GFile* file);
GI_INLINE_DECL std::string get_basename_ () noexcept override;

// GFile* File::get_child_for_display_name (GFile* file, const char* display_name, GError ** error);
// ::GFile* File::get_child_for_display_name (::GFile* file, const char* display_name, GError ** error);
// SKIP; callee GError not supported

// GFile* File::get_parent (GFile* file);
// ::GFile* File::get_parent (::GFile* file);
GI_INLINE_DECL Gio::File get_parent_ () noexcept override;

// char* File::get_parse_name (GFile* file);
// char* File::get_parse_name (::GFile* file);
GI_INLINE_DECL std::string get_parse_name_ () noexcept override;

// char* File::get_path (GFile* file);
// char* File::get_path (::GFile* file);
GI_INLINE_DECL std::string get_path_ () noexcept override;

// char* File::get_relative_path (GFile* parent, GFile* descendant);
// char* File::get_relative_path (::GFile* parent, ::GFile* descendant);
GI_INLINE_DECL std::string get_relative_path_ (Gio::File descendant) noexcept override;

// char* File::get_uri (GFile* file);
// char* File::get_uri (::GFile* file);
GI_INLINE_DECL std::string get_uri_ () noexcept override;

// char* File::get_uri_scheme (GFile* file);
// char* File::get_uri_scheme (::GFile* file);
GI_INLINE_DECL std::string get_uri_scheme_ () noexcept override;

// gboolean File::has_uri_scheme (GFile* file, const char* uri_scheme);
// gboolean File::has_uri_scheme (::GFile* file, const char* uri_scheme);
GI_INLINE_DECL bool has_uri_scheme_ (const std::string & uri_scheme) noexcept override;

// guint File::hash (GFile* file);
// guint File::hash (::GFile* file);
GI_INLINE_DECL guint hash_ () noexcept override;

// gboolean File::is_native (GFile* file);
// gboolean File::is_native (::GFile* file);
GI_INLINE_DECL bool is_native_ () noexcept override;

// gboolean File::make_directory (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::make_directory (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::make_directory_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::make_directory_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::make_directory_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::make_directory_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::make_symbolic_link (GFile* file, const char* symlink_value, GCancellable* cancellable, GError ** error);
// gboolean File::make_symbolic_link (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// gboolean File::measure_disk_usage_finish (GFile* file, GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean File::measure_disk_usage_finish (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, callee GError not supported

// GFileMonitor* File::monitor_dir (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* File::monitor_dir (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileMonitor* File::monitor_file (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* File::monitor_file (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::mount_enclosing_volume (GFile* location, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::mount_enclosing_volume (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::mount_enclosing_volume_finish (GFile* location, GAsyncResult* result, GError ** error);
// gboolean File::mount_enclosing_volume_finish (::GFile* location, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::mount_mountable (GFile* file, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::mount_mountable (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFile* File::mount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GFile* File::mount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::move (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean File::move (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
// SKIP; virtual-method callback parameter not supported, callee GError not supported

// void File::move_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void File::move_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported, virtual-method callback parameter not supported

// gboolean File::move_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::move_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::open_readwrite (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::open_readwrite (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::open_readwrite_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::open_readwrite_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::open_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::open_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// void File::poll_mountable (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::poll_mountable (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::poll_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::poll_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::prefix_matches (GFile* prefix, GFile* file);
// gboolean File::prefix_matches (::GFile* prefix, ::GFile* file);
GI_INLINE_DECL bool prefix_matches_ (Gio::File file) noexcept override;

// GFileInfo* File::query_filesystem_info (GFile* file, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* File::query_filesystem_info (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::query_filesystem_info_async (GFile* file, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::query_filesystem_info_async (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* File::query_filesystem_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* File::query_filesystem_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileInfo* File::query_info (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileInfo* File::query_info (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::query_info_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::query_info_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* File::query_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* File::query_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileAttributeInfoList* File::query_settable_attributes (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* File::query_settable_attributes (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileAttributeInfoList* File::query_writable_namespaces (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* File::query_writable_namespaces (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::read_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::read_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInputStream* File::read_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInputStream* File::read_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileInputStream* File::read_fn (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileInputStream* File::read_fn (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileOutputStream* File::replace (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* File::replace (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::replace_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::replace_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileOutputStream* File::replace_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* File::replace_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFileIOStream* File::replace_readwrite (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* File::replace_readwrite (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::replace_readwrite_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::replace_readwrite_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileIOStream* File::replace_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* File::replace_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// GFile* File::resolve_relative_path (GFile* file, const char* relative_path);
// ::GFile* File::resolve_relative_path (::GFile* file, const char* relative_path);
GI_INLINE_DECL Gio::File resolve_relative_path_ (const std::string & relative_path) noexcept override;

// gboolean File::set_attribute (GFile* file, const char* attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean File::set_attribute (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::set_attributes_async (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::set_attributes_async (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::set_attributes_finish (GFile* file, GAsyncResult* result, GFileInfo** info, GError ** error);
// gboolean File::set_attributes_finish (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// gboolean File::set_attributes_from_info (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean File::set_attributes_from_info (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFile* File::set_display_name (GFile* file, const char* display_name, GCancellable* cancellable, GError ** error);
// ::GFile* File::set_display_name (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::set_display_name_async (GFile* file, const char* display_name, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::set_display_name_async (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFile* File::set_display_name_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFile* File::set_display_name_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
// SKIP; callee GError not supported

// void File::start_mountable (GFile* file, GDriveStartFlags flags, GMountOperation* start_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::start_mountable (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::start_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::start_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::stop_mountable (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::stop_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::stop_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::stop_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean File::trash (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean File::trash (::GFile* file, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void File::trash_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::trash_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::trash_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::trash_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// void File::unmount_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::unmount_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated, virtual-method callback parameter not supported

// gboolean File::unmount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::unmount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated, callee GError not supported

// void File::unmount_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void File::unmount_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean File::unmount_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean File::unmount_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported


};

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
