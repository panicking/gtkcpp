// AUTO-GENERATED

#ifndef _GI_GIO_RESOURCE_IMPL_HPP_
#define _GI_GIO_RESOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GResource* g_resource_new_from_data (GBytes* data, GError ** error);
// ::GResource* g_resource_new_from_data (::GBytes* data, GError ** error);
Gio::Resource base::ResourceBase::new_from_data (GLib::Bytes data)
{
  typedef ::GResource* (*call_wrap_t) (::GBytes* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_new_from_data;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Resource base::ResourceBase::new_from_data (GLib::Bytes data, GLib::Error * _error) noexcept
{
  typedef ::GResource* (*call_wrap_t) (::GBytes* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_new_from_data;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GBytes*) (data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_resources_register (GResource* resource);
// void g_resources_register (::GResource* resource);
void base::ResourceBase::_register () noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_register;
  call_wrap_v ((::GResource*) (gobj_()));
}

// void g_resources_unregister (GResource* resource);
// void g_resources_unregister (::GResource* resource);
void base::ResourceBase::_unregister () noexcept
{
  typedef void (*call_wrap_t) (::GResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resources_unregister;
  call_wrap_v ((::GResource*) (gobj_()));
}

// char** g_resource_enumerate_children (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// char** g_resource_enumerate_children (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
std::vector<std::string> base::ResourceBase::enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef char** (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::ResourceBase::enumerate_children (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef char** (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_enumerate_children;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// gboolean g_resource_get_info (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
// gboolean g_resource_get_info (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
bool base::ResourceBase::get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags)
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), &error);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::ResourceBase::get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, gsize * size, guint32 * flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (size ? &size_o : nullptr), (guint32*) (flags ? &flags_o : nullptr), _error ? &_error_o : nullptr);
  if (flags) *flags = flags_o;
  if (size) *size = size_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, gsize, guint32> base::ResourceBase::get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, size_o, flags_o);
}
std::tuple<bool, gsize, guint32> base::ResourceBase::get_info (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, gsize* size, guint32* flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_get_info;
  guint32 flags_o {};
  gsize size_o {};
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), (gsize*) (&size_o), (guint32*) (&flags_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, size_o, flags_o);
}

// GBytes* g_resource_lookup_data (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GBytes* g_resource_lookup_data (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
GLib::Bytes base::ResourceBase::lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GBytes* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::ResourceBase::lookup_data (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_lookup_data;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInputStream* g_resource_open_stream (GResource* resource, const char* path, GResourceLookupFlags lookup_flags, GError ** error);
// ::GInputStream* g_resource_open_stream (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
Gio::InputStream base::ResourceBase::open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags)
{
  typedef ::GInputStream* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::ResourceBase::open_stream (const std::string & path, Gio::ResourceLookupFlags lookup_flags, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GResource* resource, const char* path, ::GResourceLookupFlags lookup_flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_open_stream;
  auto lookup_flags_to_c = gi::unwrap (lookup_flags);
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GResource*) (gobj_()), (const char*) (path_to_c), (::GResourceLookupFlags) (lookup_flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GResource* g_resource_ref (GResource* resource);
// ::GResource* g_resource_ref (::GResource* resource);
// IGNORE; marked ignore

// void g_resource_unref (GResource* resource);
// void g_resource_unref (::GResource* resource);
// IGNORE; marked ignore

// GResource* g_resource_load (const gchar* filename, GError ** error);
// ::GResource* g_resource_load (const char* filename, GError ** error);
Gio::Resource base::ResourceBase::load (const std::string & filename)
{
  typedef ::GResource* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_load;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Resource base::ResourceBase::load (const std::string & filename, GLib::Error * _error) noexcept
{
  typedef ::GResource* (*call_wrap_t) (const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_resource_load;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/resource_extra_def_impl.hpp>)
#include <gio/resource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/resource_extra_impl.hpp>)
#include <gio/resource_extra_impl.hpp>
#endif
#endif

#endif
