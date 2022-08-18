// AUTO-GENERATED

#ifndef _GI_GIO_VFS_IMPL_HPP_
#define _GI_GIO_VFS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GVfs* g_vfs_get_default ();
// ::GVfs* g_vfs_get_default ();
Gio::Vfs base::VfsBase::get_default () noexcept
{
  typedef ::GVfs* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVfs* g_vfs_get_local ();
// ::GVfs* g_vfs_get_local ();
Gio::Vfs base::VfsBase::get_local () noexcept
{
  typedef ::GVfs* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_get_local;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GFile* g_vfs_get_file_for_path (GVfs* vfs, const char* path);
// ::GFile* g_vfs_get_file_for_path (::GVfs* vfs, const char* path);
Gio::File base::VfsBase::get_file_for_path (const std::string & path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_get_file_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_vfs_get_file_for_uri (GVfs* vfs, const char* uri);
// ::GFile* g_vfs_get_file_for_uri (::GVfs* vfs, const char* uri);
Gio::File base::VfsBase::get_file_for_uri (const std::string & uri) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_get_file_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* const* g_vfs_get_supported_uri_schemes (GVfs* vfs);
// const char** g_vfs_get_supported_uri_schemes (::GVfs* vfs);
std::vector<std::string> base::VfsBase::get_supported_uri_schemes () noexcept
{
  typedef const char** (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_get_supported_uri_schemes;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gboolean g_vfs_is_active (GVfs* vfs);
// gboolean g_vfs_is_active (::GVfs* vfs);
bool base::VfsBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_is_active;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return _temp_ret;
}

// GFile* g_vfs_parse_name (GVfs* vfs, const char* parse_name);
// ::GFile* g_vfs_parse_name (::GVfs* vfs, const char* parse_name);
Gio::File base::VfsBase::parse_name (const std::string & parse_name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_vfs_register_uri_scheme (GVfs* vfs, const char* scheme, GVfsFileLookupFunc uri_func, gpointer uri_data, GDestroyNotify uri_destroy, GVfsFileLookupFunc parse_name_func, gpointer parse_name_data, GDestroyNotify parse_name_destroy);
// gboolean g_vfs_register_uri_scheme (::GVfs* vfs, const char* scheme, Gio::VfsFileLookupFunc::cfunction_type uri_func, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy, Gio::VfsFileLookupFunc::cfunction_type parse_name_func, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy);
bool base::VfsBase::register_uri_scheme (const std::string & scheme, Gio::VfsFileLookupFunc uri_func, Gio::VfsFileLookupFunc parse_name_func) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs, const char* scheme, Gio::VfsFileLookupFunc::cfunction_type uri_func, void* uri_data, GLib::DestroyNotify::cfunction_type uri_destroy, Gio::VfsFileLookupFunc::cfunction_type parse_name_func, void* parse_name_data, GLib::DestroyNotify::cfunction_type parse_name_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_register_uri_scheme;
  auto parse_name_func_wrap_ = parse_name_func ? unwrap (std::move (parse_name_func), gi::scope_notified) : nullptr;
  auto uri_func_wrap_ = uri_func ? unwrap (std::move (uri_func), gi::scope_notified) : nullptr;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (scheme_to_c), (Gio::VfsFileLookupFunc::cfunction_type) (uri_func_wrap_ ? &uri_func_wrap_->wrapper : nullptr), (void*) (uri_func_wrap_), (GLib::DestroyNotify::cfunction_type) (uri_func_wrap_ ? &uri_func_wrap_->destroy : nullptr), (Gio::VfsFileLookupFunc::cfunction_type) (parse_name_func_wrap_ ? &parse_name_func_wrap_->wrapper : nullptr), (void*) (parse_name_func_wrap_), (GLib::DestroyNotify::cfunction_type) (parse_name_func_wrap_ ? &parse_name_func_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean g_vfs_unregister_uri_scheme (GVfs* vfs, const char* scheme);
// gboolean g_vfs_unregister_uri_scheme (::GVfs* vfs, const char* scheme);
bool base::VfsBase::unregister_uri_scheme (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVfs* vfs, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) g_vfs_unregister_uri_scheme;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_def_impl.hpp>)
#include <gio/vfs_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/vfs_extra_impl.hpp>)
#include <gio/vfs_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void VfsClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GVfsClass *methods = (::GVfsClass *) class_struct;
  (void) methods;

  methods->add_writable_namespaces = (decltype (methods->add_writable_namespaces)) detail::method_wrapper<self, void (*) (Gio::FileAttributeInfoList list), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_writable_namespaces_>;
  methods->get_file_for_path = (decltype (methods->get_file_for_path)) detail::method_wrapper<self, Gio::File (*) (const std::string & path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_file_for_path_>;
  methods->get_file_for_uri = (decltype (methods->get_file_for_uri)) detail::method_wrapper<self, Gio::File (*) (const std::string & uri), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_file_for_uri_>;
  methods->is_active = (decltype (methods->is_active)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_active_>;
  methods->local_file_moved = (decltype (methods->local_file_moved)) detail::method_wrapper<self, void (*) (const std::string & source, const std::string & dest), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::local_file_moved_>;
  methods->local_file_removed = (decltype (methods->local_file_removed)) detail::method_wrapper<self, void (*) (const std::string & filename), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::local_file_removed_>;
  methods->parse_name = (decltype (methods->parse_name)) detail::method_wrapper<self, Gio::File (*) (const std::string & parse_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::parse_name_>;
}

// void Vfs::add_writable_namespaces (GVfs* vfs, GFileAttributeInfoList* list);
// void Vfs::add_writable_namespaces (::GVfs* vfs, ::GFileAttributeInfoList* list);
void VfsClass::add_writable_namespaces_ (Gio::FileAttributeInfoList list) noexcept
{
  if (!get_struct_()->add_writable_namespaces) return ;
  typedef void (*call_wrap_t) (::GVfs* vfs, ::GFileAttributeInfoList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_writable_namespaces;
  auto list_to_c = gi::unwrap (list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVfs*) (gobj_()), (::GFileAttributeInfoList*) (list_to_c));
}

// GFile* Vfs::get_file_for_path (GVfs* vfs, const char* path);
// ::GFile* Vfs::get_file_for_path (::GVfs* vfs, const char* path);
Gio::File VfsClass::get_file_for_path_ (const std::string & path) noexcept
{
  if (!get_struct_()->get_file_for_path) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_file_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* Vfs::get_file_for_uri (GVfs* vfs, const char* uri);
// ::GFile* Vfs::get_file_for_uri (::GVfs* vfs, const char* uri);
Gio::File VfsClass::get_file_for_uri_ (const std::string & uri) noexcept
{
  if (!get_struct_()->get_file_for_uri) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_file_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* const* Vfs::get_supported_uri_schemes (GVfs* vfs);
// const char** Vfs::get_supported_uri_schemes (::GVfs* vfs);
// SKIP; container return not supported

// gboolean Vfs::is_active (GVfs* vfs);
// gboolean Vfs::is_active (::GVfs* vfs);
bool VfsClass::is_active_ () noexcept
{
  if (!get_struct_()->is_active) return bool{};
  typedef gboolean (*call_wrap_t) (::GVfs* vfs);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_active;
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()));
  return _temp_ret;
}

// void Vfs::local_file_add_info (GVfs* vfs, const char* filename, guint64 device, GFileAttributeMatcher* attribute_matcher, GFileInfo* info, GCancellable* cancellable, gpointer* extra_data, GDestroyNotify* free_extra_data);
// void Vfs::local_file_add_info (::GVfs* vfs, const char* filename, guint64 device, ::GFileAttributeMatcher* attribute_matcher, ::GFileInfo* info, ::GCancellable* cancellable, void* extra_data, GLib::DestroyNotify::cfunction_type free_extra_data);
// SKIP; virtual-method callback parameter not supported

// void Vfs::local_file_moved (GVfs* vfs, const char* source, const char* dest);
// void Vfs::local_file_moved (::GVfs* vfs, const char* source, const char* dest);
void VfsClass::local_file_moved_ (const std::string & source, const std::string & dest) noexcept
{
  if (!get_struct_()->local_file_moved) return ;
  typedef void (*call_wrap_t) (::GVfs* vfs, const char* source, const char* dest);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_file_moved;
  auto dest_to_c = gi::unwrap (dest, gi::transfer_none, gi::direction_in);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVfs*) (gobj_()), (const char*) (source_to_c), (const char*) (dest_to_c));
}

// void Vfs::local_file_removed (GVfs* vfs, const char* filename);
// void Vfs::local_file_removed (::GVfs* vfs, const char* filename);
void VfsClass::local_file_removed_ (const std::string & filename) noexcept
{
  if (!get_struct_()->local_file_removed) return ;
  typedef void (*call_wrap_t) (::GVfs* vfs, const char* filename);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->local_file_removed;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVfs*) (gobj_()), (const char*) (filename_to_c));
}

// gboolean Vfs::local_file_set_attributes (GVfs* vfs, const char* filename, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean Vfs::local_file_set_attributes (::GVfs* vfs, const char* filename, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFile* Vfs::parse_name (GVfs* vfs, const char* parse_name);
// ::GFile* Vfs::parse_name (::GVfs* vfs, const char* parse_name);
Gio::File VfsClass::parse_name_ (const std::string & parse_name) noexcept
{
  if (!get_struct_()->parse_name) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GVfs* vfs, const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVfs*) (gobj_()), (const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
