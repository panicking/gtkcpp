// AUTO-GENERATED

#ifndef _GI_GIO_FILEINPUTSTREAM_IMPL_HPP_
#define _GI_GIO_FILEINPUTSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable FileInputStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileInputStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// GFileInfo* g_file_input_stream_query_info (GFileInputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_input_stream_query_info (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
Gio::FileInfo base::FileInputStreamBase::query_info (const std::string & attributes, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const std::string & attributes)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileInputStreamBase::query_info (const std::string & attributes, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_input_stream_query_info_async (GFileInputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_input_stream_query_info_async (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileInputStreamBase::query_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileInputStreamBase::query_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileInputStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* g_file_input_stream_query_info_finish (GFileInputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* g_file_input_stream_query_info_finish (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
Gio::FileInfo base::FileInputStreamBase::query_info_finish (Gio::AsyncResult result)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileInputStreamBase::query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_input_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_def_impl.hpp>)
#include <gio/fileinputstream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileinputstream_extra_impl.hpp>)
#include <gio/fileinputstream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileInputStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFileInputStreamClass *methods = (::GFileInputStreamClass *) class_struct;
  (void) methods;

  methods->can_seek = (decltype (methods->can_seek)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_seek_>;
  methods->tell = (decltype (methods->tell)) detail::method_wrapper<self, gint64 (*) (), gi::transfer_none_t>::wrapper<&self::tell_>;
}

// gboolean FileInputStream::can_seek (GFileInputStream* stream);
// gboolean FileInputStream::can_seek (::GFileInputStream* stream);
bool FileInputStreamClass::can_seek_ () noexcept
{
  if (!get_struct_()->can_seek) return bool{};
  typedef gboolean (*call_wrap_t) (::GFileInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_seek;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()));
  return _temp_ret;
}

// GFileInfo* FileInputStream::query_info (GFileInputStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileInputStream::query_info (::GFileInputStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileInputStream::query_info_async (GFileInputStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileInputStream::query_info_async (::GFileInputStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileInputStream::query_info_finish (GFileInputStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileInputStream::query_info_finish (::GFileInputStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileInputStream::seek (GFileInputStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileInputStream::seek (::GFileInputStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileInputStream::tell (GFileInputStream* stream);
// gint64 FileInputStream::tell (::GFileInputStream* stream);
gint64 FileInputStreamClass::tell_ () noexcept
{
  if (!get_struct_()->tell) return gint64{};
  typedef gint64 (*call_wrap_t) (::GFileInputStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tell;
  auto _temp_ret = call_wrap_v ((::GFileInputStream*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
