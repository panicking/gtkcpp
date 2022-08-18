// AUTO-GENERATED

#ifndef _GI_GIO_FILEIOSTREAM_IMPL_HPP_
#define _GI_GIO_FILEIOSTREAM_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Seekable FileIOStreamBase::interface_ (gi::interface_tag<Gio::Seekable>)
{ return gi::wrap ((Gio::Seekable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileIOStreamBase::operator Gio::Seekable ()
{ return interface_ (gi::interface_tag<Gio::Seekable>()); }

// char* g_file_io_stream_get_etag (GFileIOStream* stream);
// char* g_file_io_stream_get_etag (::GFileIOStream* stream);
std::string base::FileIOStreamBase::get_etag () noexcept
{
  typedef char* (*call_wrap_t) (::GFileIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_get_etag;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileInfo* g_file_io_stream_query_info (GFileIOStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_io_stream_query_info (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
Gio::FileInfo base::FileIOStreamBase::query_info (const std::string & attributes, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileIOStreamBase::query_info (const std::string & attributes)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileIOStreamBase::query_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileIOStreamBase::query_info (const std::string & attributes, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_io_stream_query_info_async (GFileIOStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_io_stream_query_info_async (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileIOStreamBase::query_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileIOStreamBase::query_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFileIOStream*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* g_file_io_stream_query_info_finish (GFileIOStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* g_file_io_stream_query_info_finish (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
Gio::FileInfo base::FileIOStreamBase::query_info_finish (Gio::AsyncResult result)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileIOStreamBase::query_info_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_io_stream_query_info_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileiostream_extra_def_impl.hpp>)
#include <gio/fileiostream_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileiostream_extra_impl.hpp>)
#include <gio/fileiostream_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileIOStreamClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFileIOStreamClass *methods = (::GFileIOStreamClass *) class_struct;
  (void) methods;

  methods->can_seek = (decltype (methods->can_seek)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_seek_>;
  methods->can_truncate = (decltype (methods->can_truncate)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_truncate_>;
  methods->get_etag = (decltype (methods->get_etag)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_etag_>;
  methods->tell = (decltype (methods->tell)) detail::method_wrapper<self, gint64 (*) (), gi::transfer_none_t>::wrapper<&self::tell_>;
}

// gboolean FileIOStream::can_seek (GFileIOStream* stream);
// gboolean FileIOStream::can_seek (::GFileIOStream* stream);
bool FileIOStreamClass::can_seek_ () noexcept
{
  if (!get_struct_()->can_seek) return bool{};
  typedef gboolean (*call_wrap_t) (::GFileIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_seek;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean FileIOStream::can_truncate (GFileIOStream* stream);
// gboolean FileIOStream::can_truncate (::GFileIOStream* stream);
bool FileIOStreamClass::can_truncate_ () noexcept
{
  if (!get_struct_()->can_truncate) return bool{};
  typedef gboolean (*call_wrap_t) (::GFileIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_truncate;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()));
  return _temp_ret;
}

// char* FileIOStream::get_etag (GFileIOStream* stream);
// char* FileIOStream::get_etag (::GFileIOStream* stream);
std::string FileIOStreamClass::get_etag_ () noexcept
{
  if (!get_struct_()->get_etag) return std::string{};
  typedef char* (*call_wrap_t) (::GFileIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_etag;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileInfo* FileIOStream::query_info (GFileIOStream* stream, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileIOStream::query_info (::GFileIOStream* stream, const char* attributes, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileIOStream::query_info_async (GFileIOStream* stream, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileIOStream::query_info_async (::GFileIOStream* stream, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GFileInfo* FileIOStream::query_info_finish (GFileIOStream* stream, GAsyncResult* result, GError ** error);
// ::GFileInfo* FileIOStream::query_info_finish (::GFileIOStream* stream, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileIOStream::seek (GFileIOStream* stream, goffset offset, GSeekType type, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::seek (::GFileIOStream* stream, gint64 offset, ::GSeekType type, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// goffset FileIOStream::tell (GFileIOStream* stream);
// gint64 FileIOStream::tell (::GFileIOStream* stream);
gint64 FileIOStreamClass::tell_ () noexcept
{
  if (!get_struct_()->tell) return gint64{};
  typedef gint64 (*call_wrap_t) (::GFileIOStream* stream);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->tell;
  auto _temp_ret = call_wrap_v ((::GFileIOStream*) (gobj_()));
  return _temp_ret;
}

// gboolean FileIOStream::truncate_fn (GFileIOStream* stream, goffset size, GCancellable* cancellable, GError ** error);
// gboolean FileIOStream::truncate_fn (::GFileIOStream* stream, gint64 size, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
