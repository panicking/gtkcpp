// AUTO-GENERATED

#ifndef _GI_GLIB_MAPPEDFILE_IMPL_HPP_
#define _GI_GLIB_MAPPEDFILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GMappedFile* g_mapped_file_new (const gchar* filename, gboolean writable, GError ** error);
// ::GMappedFile* g_mapped_file_new (const char* filename, gboolean writable, GError ** error);
GLib::MappedFile base::MappedFileBase::new_ (const std::string & filename, gboolean writable)
{
  typedef ::GMappedFile* (*call_wrap_t) (const char* filename, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new;
  auto writable_to_c = writable;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gboolean) (writable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::MappedFile base::MappedFileBase::new_ (const std::string & filename, gboolean writable, GLib::Error * _error) noexcept
{
  typedef ::GMappedFile* (*call_wrap_t) (const char* filename, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new;
  auto writable_to_c = writable;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (filename_to_c), (gboolean) (writable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMappedFile* g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
// ::GMappedFile* g_mapped_file_new_from_fd (gint fd, gboolean writable, GError ** error);
GLib::MappedFile base::MappedFileBase::new_from_fd (gint fd, gboolean writable)
{
  typedef ::GMappedFile* (*call_wrap_t) (gint fd, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new_from_fd;
  auto writable_to_c = writable;
  auto fd_to_c = fd;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (writable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::MappedFile base::MappedFileBase::new_from_fd (gint fd, gboolean writable, GLib::Error * _error) noexcept
{
  typedef ::GMappedFile* (*call_wrap_t) (gint fd, gboolean writable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_new_from_fd;
  auto writable_to_c = writable;
  auto fd_to_c = fd;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((gint) (fd_to_c), (gboolean) (writable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_mapped_file_free (GMappedFile* file);
// void g_mapped_file_free (::GMappedFile* file);
// IGNORE; marked ignore

// GBytes* g_mapped_file_get_bytes (GMappedFile* file);
// ::GBytes* g_mapped_file_get_bytes (::GMappedFile* file);
GLib::Bytes base::MappedFileBase::get_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_get_bytes;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_mapped_file_get_contents (GMappedFile* file);
// char* g_mapped_file_get_contents (::GMappedFile* file);
std::string base::MappedFileBase::get_contents () noexcept
{
  typedef char* (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_get_contents;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize g_mapped_file_get_length (GMappedFile* file);
// gsize g_mapped_file_get_length (::GMappedFile* file);
gsize base::MappedFileBase::get_length () noexcept
{
  typedef gsize (*call_wrap_t) (::GMappedFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_mapped_file_get_length;
  auto _temp_ret = call_wrap_v ((::GMappedFile*) (gobj_()));
  return _temp_ret;
}

// GMappedFile* g_mapped_file_ref (GMappedFile* file);
// ::GMappedFile* g_mapped_file_ref (::GMappedFile* file);
// IGNORE; marked ignore

// void g_mapped_file_unref (GMappedFile* file);
// void g_mapped_file_unref (::GMappedFile* file);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_def_impl.hpp>)
#include <glib/mappedfile_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/mappedfile_extra_impl.hpp>)
#include <glib/mappedfile_extra_impl.hpp>
#endif
#endif

#endif
