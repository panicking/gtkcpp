// AUTO-GENERATED

#ifndef _GI_GIO_FILEENUMERATOR_IMPL_HPP_
#define _GI_GIO_FILEENUMERATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// gboolean g_file_enumerator_close (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// gboolean g_file_enumerator_close (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
bool base::FileEnumeratorBase::close (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close ()
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_enumerator_close_async (GFileEnumerator* enumerator, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerator_close_async (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileEnumeratorBase::close_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileEnumeratorBase::close_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_enumerator_close_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// gboolean g_file_enumerator_close_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
bool base::FileEnumeratorBase::close_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::close_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_close_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFile* g_file_enumerator_get_child (GFileEnumerator* enumerator, GFileInfo* info);
// ::GFile* g_file_enumerator_get_child (::GFileEnumerator* enumerator, ::GFileInfo* info);
Gio::File base::FileEnumeratorBase::get_child (Gio::FileInfo info) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GFileInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_get_child;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo*) (info_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_enumerator_get_container (GFileEnumerator* enumerator);
// ::GFile* g_file_enumerator_get_container (::GFileEnumerator* enumerator);
Gio::File base::FileEnumeratorBase::get_container () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_get_container;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_file_enumerator_has_pending (GFileEnumerator* enumerator);
// gboolean g_file_enumerator_has_pending (::GFileEnumerator* enumerator);
bool base::FileEnumeratorBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_has_pending;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_enumerator_is_closed (GFileEnumerator* enumerator);
// gboolean g_file_enumerator_is_closed (::GFileEnumerator* enumerator);
bool base::FileEnumeratorBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* enumerator);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_is_closed;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_enumerator_iterate (GFileEnumerator* direnum, GFileInfo** out_info, GFile** out_child, GCancellable* cancellable, GError ** error);
// gboolean g_file_enumerator_iterate (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none, gi::direction_out);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none, gi::direction_out);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none, gi::direction_out);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileEnumeratorBase::iterate (Gio::FileInfo * out_info, Gio::File * out_child, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (out_info ? &out_info_o : nullptr), (::GFile**) (out_child ? &out_child_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (out_child) *out_child = gi::wrap (out_child_o, gi::transfer_none, gi::direction_out);
  if (out_info) *out_info = gi::wrap (out_info_o, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (out_info_o, gi::transfer_none, gi::direction_out), gi::wrap (out_child_o, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate ()
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (out_info_o, gi::transfer_none, gi::direction_out), gi::wrap (out_child_o, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (out_info_o, gi::transfer_none, gi::direction_out), gi::wrap (out_child_o, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, Gio::FileInfo, Gio::File> base::FileEnumeratorBase::iterate (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFileEnumerator* direnum, ::GFileInfo** out_info, ::GFile** out_child, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_iterate;
  auto cancellable_to_c = nullptr;
  ::GFile* out_child_o {};
  ::GFileInfo* out_info_o {};
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GFileInfo**) (&out_info_o), (::GFile**) (&out_child_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (out_info_o, gi::transfer_none, gi::direction_out), gi::wrap (out_child_o, gi::transfer_none, gi::direction_out));
}

// GFileInfo* g_file_enumerator_next_file (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_enumerator_next_file (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
Gio::FileInfo base::FileEnumeratorBase::next_file (Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileEnumeratorBase::next_file ()
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_file;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileEnumeratorBase::next_file (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileEnumeratorBase::next_file (GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_file;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_enumerator_next_files_async (GFileEnumerator* enumerator, int num_files, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerator_next_files_async (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileEnumeratorBase::next_files_async (gint num_files, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_files_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto num_files_to_c = num_files;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (num_files_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileEnumeratorBase::next_files_async (gint num_files, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_files_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto num_files_to_c = num_files;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gint) (num_files_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* g_file_enumerator_next_files_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GList* g_file_enumerator_next_files_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
std::vector<Gio::FileInfo> base::FileEnumeratorBase::next_files_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_files_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Gio::FileInfo> (_temp_ret, gi::transfer_full);
}
std::vector<Gio::FileInfo> base::FileEnumeratorBase::next_files_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_next_files_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFileEnumerator*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Gio::FileInfo> (_temp_ret, gi::transfer_full);
}

// void g_file_enumerator_set_pending (GFileEnumerator* enumerator, gboolean pending);
// void g_file_enumerator_set_pending (::GFileEnumerator* enumerator, gboolean pending);
void base::FileEnumeratorBase::set_pending (gboolean pending) noexcept
{
  typedef void (*call_wrap_t) (::GFileEnumerator* enumerator, gboolean pending);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerator_set_pending;
  auto pending_to_c = pending;
  call_wrap_v ((::GFileEnumerator*) (gobj_()), (gboolean) (pending_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_def_impl.hpp>)
#include <gio/fileenumerator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileenumerator_extra_impl.hpp>)
#include <gio/fileenumerator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileEnumeratorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GFileEnumeratorClass *methods = (::GFileEnumeratorClass *) class_struct;
  (void) methods;

}

// void FileEnumerator::close_async (GFileEnumerator* enumerator, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::close_async (::GFileEnumerator* enumerator, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// gboolean FileEnumerator::close_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// gboolean FileEnumerator::close_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

// gboolean FileEnumerator::close_fn (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// gboolean FileEnumerator::close_fn (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// GFileInfo* FileEnumerator::next_file (GFileEnumerator* enumerator, GCancellable* cancellable, GError ** error);
// ::GFileInfo* FileEnumerator::next_file (::GFileEnumerator* enumerator, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void FileEnumerator::next_files_async (GFileEnumerator* enumerator, int num_files, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void FileEnumerator::next_files_async (::GFileEnumerator* enumerator, gint num_files, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GList* FileEnumerator::next_files_finish (GFileEnumerator* enumerator, GAsyncResult* result, GError ** error);
// ::GList* FileEnumerator::next_files_finish (::GFileEnumerator* enumerator, ::GAsyncResult* result, GError ** error);
// SKIP; container return not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
