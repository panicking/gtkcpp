// AUTO-GENERATED

#ifndef _GI_GIO_FILE_IMPL_HPP_
#define _GI_GIO_FILE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFile* g_file_new_build_filename (const gchar* first_element);
// ::GFile* g_file_new_build_filename (const char* first_element);
// IGNORE; not introspectable, varargs not supported

// GFile* g_file_new_for_commandline_arg (const char* arg);
// ::GFile* g_file_new_for_commandline_arg (const char* arg);
Gio::File base::FileBase::new_for_commandline_arg (const std::string & arg) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* arg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_for_commandline_arg;
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (arg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_new_for_commandline_arg_and_cwd (const gchar* arg, const gchar* cwd);
// ::GFile* g_file_new_for_commandline_arg_and_cwd (const char* arg, const char* cwd);
Gio::File base::FileBase::new_for_commandline_arg_and_cwd (const std::string & arg, const std::string & cwd) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* arg, const char* cwd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_for_commandline_arg_and_cwd;
  auto cwd_to_c = gi::unwrap (cwd, gi::transfer_none, gi::direction_in);
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (arg_to_c), (const char*) (cwd_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_new_for_path (const char* path);
// ::GFile* g_file_new_for_path (const char* path);
Gio::File base::FileBase::new_for_path (const std::string & path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_for_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_new_for_uri (const char* uri);
// ::GFile* g_file_new_for_uri (const char* uri);
Gio::File base::FileBase::new_for_uri (const std::string & uri) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_for_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_new_tmp (const char* tmpl, GFileIOStream** iostream, GError ** error);
// ::GFile* g_file_new_tmp (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
Gio::File base::FileBase::new_tmp (const std::string & tmpl, Gio::FileIOStream & iostream)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  iostream = gi::wrap (iostream_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::new_tmp (Gio::FileIOStream & iostream)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  iostream = gi::wrap (iostream_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::new_tmp (const std::string & tmpl, Gio::FileIOStream & iostream, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  iostream = gi::wrap (iostream_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::new_tmp (Gio::FileIOStream & iostream, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  iostream = gi::wrap (iostream_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (const std::string & tmpl)
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (iostream_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp ()
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (iostream_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (const std::string & tmpl, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = gi::unwrap (tmpl, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (iostream_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gio::File, Gio::FileIOStream> base::FileBase::new_tmp (GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* tmpl, ::GFileIOStream** iostream, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_new_tmp;
  ::GFileIOStream* iostream_o {};
  auto tmpl_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char*) (tmpl_to_c), (::GFileIOStream**) (&iostream_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (iostream_o, gi::transfer_full, gi::direction_out));
}

// GFile* g_file_parse_name (const char* parse_name);
// ::GFile* g_file_parse_name (const char* parse_name);
Gio::File base::FileBase::parse_name (const std::string & parse_name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (const char* parse_name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_parse_name;
  auto parse_name_to_c = gi::unwrap (parse_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (parse_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileOutputStream* g_file_append_to (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_append_to (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::append_to (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_append_to_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_append_to_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::append_to_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* g_file_append_to_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_append_to_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileOutputStream base::FileBase::append_to_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::append_to_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_append_to_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_build_attribute_list_for_copy (GFile* file, GFileCopyFlags flags, GCancellable* cancellable, GError ** error);
// char* g_file_build_attribute_list_for_copy (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
std::string base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable)
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags)
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::string base::FileBase::build_attribute_list_for_copy (Gio::FileCopyFlags flags, GLib::Error * _error) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_build_attribute_list_for_copy;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_copy (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean g_file_copy (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::copy (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_copy_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_copy_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::copy_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_copy_attributes (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_copy_attributes (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_attributes;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::copy_attributes (Gio::File destination, Gio::FileCopyFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_attributes;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_copy_finish (GFile* file, GAsyncResult* res, GError ** error);
// gboolean g_file_copy_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
bool base::FileBase::copy_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::copy_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_copy_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFileOutputStream* g_file_create (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_create (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::create (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_create_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_create_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::create_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileOutputStream* g_file_create_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_create_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileOutputStream base::FileBase::create_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::create_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileIOStream* g_file_create_readwrite (GFile* file, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_create_readwrite (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::create_readwrite (Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_create_readwrite_async (GFile* file, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_create_readwrite_async (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::create_readwrite_async (Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* g_file_create_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_create_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileIOStream base::FileBase::create_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::create_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_create_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_delete (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_delete (::GFile* file, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::delete_ (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_ ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::delete_ (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_delete_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_delete_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::delete_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::delete_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_delete_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_delete_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::delete_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::delete_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_delete_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFile* g_file_dup (GFile* file);
// ::GFile* g_file_dup (::GFile* file);
Gio::File base::FileBase::dup () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_dup;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_eject_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_eject_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_file_eject_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_eject_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_file_eject_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_eject_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_eject_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::eject_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_eject_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_eject_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_eject_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::eject_mountable_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_eject_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::eject_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_eject_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFileEnumerator* g_file_enumerate_children (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileEnumerator* g_file_enumerate_children (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileEnumerator base::FileBase::enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileEnumerator base::FileBase::enumerate_children (const std::string & attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_enumerate_children_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_enumerate_children_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::enumerate_children_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::enumerate_children_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileEnumerator* g_file_enumerate_children_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileEnumerator* g_file_enumerate_children_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileEnumerator base::FileBase::enumerate_children_finish (Gio::AsyncResult res)
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileEnumerator base::FileBase::enumerate_children_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileEnumerator* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_enumerate_children_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_equal (GFile* file1, GFile* file2);
// gboolean g_file_equal (::GFile* file1, ::GFile* file2);
bool base::FileBase::equal (Gio::File file2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file1, ::GFile* file2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_equal;
  auto file2_to_c = gi::unwrap (file2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file2_to_c));
  return _temp_ret;
}

// GMount* g_file_find_enclosing_mount (GFile* file, GCancellable* cancellable, GError ** error);
// ::GMount* g_file_find_enclosing_mount (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::Mount base::FileBase::find_enclosing_mount (Gio::Cancellable cancellable)
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Mount base::FileBase::find_enclosing_mount ()
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Mount base::FileBase::find_enclosing_mount (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Mount base::FileBase::find_enclosing_mount (GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_find_enclosing_mount_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_find_enclosing_mount_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::find_enclosing_mount_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::find_enclosing_mount_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GMount* g_file_find_enclosing_mount_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GMount* g_file_find_enclosing_mount_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::Mount base::FileBase::find_enclosing_mount_finish (Gio::AsyncResult res)
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Mount base::FileBase::find_enclosing_mount_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GMount* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_find_enclosing_mount_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_basename (GFile* file);
// char* g_file_get_basename (::GFile* file);
std::string base::FileBase::get_basename () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_basename;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_get_child (GFile* file, const char* name);
// ::GFile* g_file_get_child (::GFile* file, const char* name);
Gio::File base::FileBase::get_child (const std::string & name) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_get_child_for_display_name (GFile* file, const char* display_name, GError ** error);
// ::GFile* g_file_get_child_for_display_name (::GFile* file, const char* display_name, GError ** error);
Gio::File base::FileBase::get_child_for_display_name (const std::string & display_name)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_child_for_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::get_child_for_display_name (const std::string & display_name, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_child_for_display_name;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_get_parent (GFile* file);
// ::GFile* g_file_get_parent (::GFile* file);
Gio::File base::FileBase::get_parent () noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_parent;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_parse_name (GFile* file);
// char* g_file_get_parse_name (::GFile* file);
std::string base::FileBase::get_parse_name () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_parse_name;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_path (GFile* file);
// char* g_file_get_path (::GFile* file);
std::string base::FileBase::get_path () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_relative_path (GFile* parent, GFile* descendant);
// char* g_file_get_relative_path (::GFile* parent, ::GFile* descendant);
std::string base::FileBase::get_relative_path (Gio::File descendant) noexcept
{
  typedef char* (*call_wrap_t) (::GFile* parent, ::GFile* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_relative_path;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (descendant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_uri (GFile* file);
// char* g_file_get_uri (::GFile* file);
std::string base::FileBase::get_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_uri;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* g_file_get_uri_scheme (GFile* file);
// char* g_file_get_uri_scheme (::GFile* file);
std::string base::FileBase::get_uri_scheme () noexcept
{
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_get_uri_scheme;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_has_parent (GFile* file, GFile* parent);
// gboolean g_file_has_parent (::GFile* file, ::GFile* parent);
bool base::FileBase::has_parent (Gio::File parent) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_has_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (parent_to_c));
  return _temp_ret;
}
bool base::FileBase::has_parent () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_has_parent;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (parent_to_c));
  return _temp_ret;
}

// gboolean g_file_has_prefix (GFile* file, GFile* prefix);
// gboolean g_file_has_prefix (::GFile* file, ::GFile* prefix);
bool base::FileBase::has_prefix (Gio::File prefix) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFile* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_has_prefix;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (prefix_to_c));
  return _temp_ret;
}

// gboolean g_file_has_uri_scheme (GFile* file, const char* uri_scheme);
// gboolean g_file_has_uri_scheme (::GFile* file, const char* uri_scheme);
bool base::FileBase::has_uri_scheme (const std::string & uri_scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_has_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (uri_scheme_to_c));
  return _temp_ret;
}

// guint g_file_hash (gconstpointer file);
// guint g_file_hash (const ::GFile* file);
guint base::FileBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_hash;
  auto _temp_ret = call_wrap_v ((const ::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_is_native (GFile* file);
// gboolean g_file_is_native (::GFile* file);
bool base::FileBase::is_native () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_is_native;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// GBytes* g_file_load_bytes (GFile* file, GCancellable* cancellable, gchar** etag_out, GError ** error);
// ::GBytes* g_file_load_bytes (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
GLib::Bytes base::FileBase::load_bytes (Gio::Cancellable cancellable, std::string * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::FileBase::load_bytes (std::string * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::FileBase::load_bytes (Gio::Cancellable cancellable, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::FileBase::load_bytes (std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes (Gio::Cancellable cancellable)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes ()
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes (GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes;
  char* etag_out_o {};
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}

// void g_file_load_bytes_async (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_bytes_async (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::load_bytes_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::load_bytes_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GBytes* g_file_load_bytes_finish (GFile* file, GAsyncResult* result, gchar** etag_out, GError ** error);
// ::GBytes* g_file_load_bytes_finish (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
GLib::Bytes base::FileBase::load_bytes_finish (Gio::AsyncResult result, std::string * etag_out)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::FileBase::load_bytes_finish (Gio::AsyncResult result, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes_finish (Gio::AsyncResult result)
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&etag_out_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<GLib::Bytes, std::string> base::FileBase::load_bytes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_bytes_finish;
  char* etag_out_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_file_load_contents (GFile* file, GCancellable* cancellable, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_contents (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
bool base::FileBase::load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, std::string * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents (std::vector<guint8> & contents, std::string * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::load_contents (std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::FileBase::load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::load_contents (std::vector<guint8> & contents)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::load_contents (Gio::Cancellable cancellable, std::vector<guint8> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::load_contents (std::vector<guint8> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}

// void g_file_load_contents_async (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_contents_async (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::load_contents_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::load_contents_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_load_contents_finish (GFile* file, GAsyncResult* res, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_contents_finish (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
bool base::FileBase::load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::FileBase::load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::load_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}

// void g_file_load_partial_contents_async (GFile* file, GCancellable* cancellable, GFileReadMoreCallback read_more_callback, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_load_partial_contents_async (::GFile* file, ::GCancellable* cancellable, Gio::FileReadMoreCallback::cfunction_type read_more_callback, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; not introspectable, callback closure parameter already used

// gboolean g_file_load_partial_contents_finish (GFile* file, GAsyncResult* res, char** contents, gsize* length, char** etag_out, GError ** error);
// gboolean g_file_load_partial_contents_finish (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
bool base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), &error);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, std::string * etag_out, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (etag_out ? &etag_out_o : nullptr), _error ? &_error_o : nullptr);
  if (etag_out) *etag_out = gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), &error);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::load_partial_contents_finish (Gio::AsyncResult res, std::vector<guint8> & contents, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, guint8** contents, gsize* length, char** etag_out, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_load_partial_contents_finish;
  char* etag_out_o {};
  typedef guint8 contents_cpptype;
  typedef traits::ctype<contents_cpptype>::type contents_ctype;
  contents_ctype *contents_o;
  gsize length;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (guint8**) ((guint8**) &contents_o), (gsize*) (&length), (char**) (&etag_out_o), _error ? &_error_o : nullptr);
  contents.resize(length);
  detail::wrap_array (contents_o, gi::transfer_full, length, contents.data());
  g_free (contents_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (etag_out_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_file_make_directory (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_directory (::GFile* file, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::make_directory (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::make_directory (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_make_directory_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_make_directory_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::make_directory_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::make_directory_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_make_directory_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_make_directory_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::make_directory_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_make_directory_with_parents (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_directory_with_parents (::GFile* file, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::make_directory_with_parents (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_with_parents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_with_parents;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_with_parents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::make_directory_with_parents (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_directory_with_parents;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_make_symbolic_link (GFile* file, const char* symlink_value, GCancellable* cancellable, GError ** error);
// gboolean g_file_make_symbolic_link (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::make_symbolic_link (const std::string & symlink_value, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_symbolic_link;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const std::string & symlink_value)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_symbolic_link;
  auto cancellable_to_c = nullptr;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const std::string & symlink_value, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_symbolic_link;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::make_symbolic_link (const std::string & symlink_value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* symlink_value, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_make_symbolic_link;
  auto cancellable_to_c = nullptr;
  auto symlink_value_to_c = gi::unwrap (symlink_value, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (symlink_value_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_measure_disk_usage (GFile* file, GFileMeasureFlags flags, GCancellable* cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage (::GFile* file, ::GFileMeasureFlags flags, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// IGNORE; not introspectable, callback misses scope info

// void g_file_measure_disk_usage_async (GFile* file, GFileMeasureFlags flags, gint io_priority, GCancellable* cancellable, GFileMeasureProgressCallback progress_callback, gpointer progress_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_measure_disk_usage_async (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::measure_disk_usage_async (Gio::FileMeasureFlags flags, gint io_priority, Gio::FileMeasureProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileMeasureFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileMeasureProgressCallback::cfunction_type progress_callback, void* progress_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_notified) : nullptr;
  callback_wrap_->take_data (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileMeasureFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileMeasureProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_measure_disk_usage_finish (GFile* file, GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
// gboolean g_file_measure_disk_usage_finish (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
bool base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), &error);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, guint64 * disk_usage, guint64 * num_dirs, guint64 * num_files, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (disk_usage ? &disk_usage_o : nullptr), (guint64*) (num_dirs ? &num_dirs_o : nullptr), (guint64*) (num_files ? &num_files_o : nullptr), _error ? &_error_o : nullptr);
  if (num_files) *num_files = num_files_o;
  if (num_dirs) *num_dirs = num_dirs_o;
  if (disk_usage) *disk_usage = disk_usage_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, disk_usage_o, num_dirs_o, num_files_o);
}
std::tuple<bool, guint64, guint64, guint64> base::FileBase::measure_disk_usage_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, guint64* disk_usage, guint64* num_dirs, guint64* num_files, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_measure_disk_usage_finish;
  guint64 num_files_o {};
  guint64 num_dirs_o {};
  guint64 disk_usage_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (guint64*) (&disk_usage_o), (guint64*) (&num_dirs_o), (guint64*) (&num_files_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, disk_usage_o, num_dirs_o, num_files_o);
}

// GFileMonitor* g_file_monitor (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileMonitor* g_file_monitor_directory (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor_directory (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_directory;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_directory;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_directory (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_directory;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileMonitor* g_file_monitor_file (GFile* file, GFileMonitorFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileMonitor* g_file_monitor_file (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags)
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_file;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_file;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileMonitor base::FileBase::monitor_file (Gio::FileMonitorFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileMonitor* (*call_wrap_t) (::GFile* file, ::GFileMonitorFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_monitor_file;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileMonitorFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_mount_enclosing_volume (GFile* location, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_mount_enclosing_volume (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::mount_enclosing_volume (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_enclosing_volume;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::mount_enclosing_volume (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* location, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_enclosing_volume;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_mount_enclosing_volume_finish (GFile* location, GAsyncResult* result, GError ** error);
// gboolean g_file_mount_enclosing_volume_finish (::GFile* location, ::GAsyncResult* result, GError ** error);
bool base::FileBase::mount_enclosing_volume_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* location, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_enclosing_volume_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::mount_enclosing_volume_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* location, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_enclosing_volume_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_mount_mountable (GFile* file, GMountMountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_mount_mountable (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::mount_mountable (Gio::MountMountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::mount_mountable (Gio::MountMountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountMountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountMountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* g_file_mount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GFile* g_file_mount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
Gio::File base::FileBase::mount_mountable_finish (Gio::AsyncResult result)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::mount_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_mount_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_move (GFile* source, GFile* destination, GFileCopyFlags flags, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GError ** error);
// gboolean g_file_move (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback)
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::move (Gio::File destination, Gio::FileCopyFlags flags, Gio::FileProgressCallback progress_callback, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_move_async (GFile* source, GFile* destination, GFileCopyFlags flags, int io_priority, GCancellable* cancellable, GFileProgressCallback progress_callback, gpointer progress_callback_data, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_move_async (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::move_async (Gio::File destination, Gio::FileCopyFlags flags, gint io_priority, Gio::FileProgressCallback progress_callback, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* source, ::GFile* destination, ::GFileCopyFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::FileProgressCallback::cfunction_type progress_callback, void* progress_callback_data, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto progress_callback_wrap_ = progress_callback ? unwrap (std::move (progress_callback), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(progress_callback_wrap_)>::type> progress_callback_wrap__sp (progress_callback_wrap_);
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto destination_to_c = gi::unwrap (destination, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (destination_to_c), (::GFileCopyFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::FileProgressCallback::cfunction_type) (progress_callback_wrap_ ? &progress_callback_wrap_->wrapper : nullptr), (void*) (progress_callback_wrap_), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_move_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_move_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::move_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::move_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_move_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFileIOStream* g_file_open_readwrite (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_open_readwrite (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::FileIOStream base::FileBase::open_readwrite (Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::open_readwrite ()
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::open_readwrite (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::open_readwrite (GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_open_readwrite_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_open_readwrite_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::open_readwrite_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::open_readwrite_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* g_file_open_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_open_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileIOStream base::FileBase::open_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::open_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_open_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* g_file_peek_path (GFile* file);
// const char* g_file_peek_path (::GFile* file);
std::string base::FileBase::peek_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_peek_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_file_poll_mountable (GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_poll_mountable (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::poll_mountable (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_poll_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::poll_mountable (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_poll_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_poll_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_poll_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::poll_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_poll_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::poll_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_poll_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GAppInfo* g_file_query_default_handler (GFile* file, GCancellable* cancellable, GError ** error);
// ::GAppInfo* g_file_query_default_handler (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::AppInfo base::FileBase::query_default_handler (Gio::Cancellable cancellable)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::FileBase::query_default_handler ()
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::FileBase::query_default_handler (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::FileBase::query_default_handler (GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_query_default_handler_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_default_handler_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::query_default_handler_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_default_handler_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GAppInfo* g_file_query_default_handler_finish (GFile* file, GAsyncResult* result, GError ** error);
// ::GAppInfo* g_file_query_default_handler_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
Gio::AppInfo base::FileBase::query_default_handler_finish (Gio::AsyncResult result)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::FileBase::query_default_handler_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_default_handler_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_query_exists (GFile* file, GCancellable* cancellable);
// gboolean g_file_query_exists (::GFile* file, ::GCancellable* cancellable);
bool base::FileBase::query_exists (Gio::Cancellable cancellable) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_exists;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}
bool base::FileBase::query_exists () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_exists;
  auto cancellable_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c));
  return _temp_ret;
}

// GFileType g_file_query_file_type (GFile* file, GFileQueryInfoFlags flags, GCancellable* cancellable);
// ::GFileType g_file_query_file_type (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
Gio::FileType base::FileBase::query_file_type (Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable) noexcept
{
  typedef ::GFileType (*call_wrap_t) (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_file_type;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret);
}
Gio::FileType base::FileBase::query_file_type (Gio::FileQueryInfoFlags flags) noexcept
{
  typedef ::GFileType (*call_wrap_t) (::GFile* file, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_file_type;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c));
  return gi::wrap (_temp_ret);
}

// GFileInfo* g_file_query_filesystem_info (GFile* file, const char* attributes, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_query_filesystem_info (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
Gio::FileInfo base::FileBase::query_filesystem_info (const std::string & attributes, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const std::string & attributes)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const std::string & attributes, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_filesystem_info (const std::string & attributes, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info;
  auto cancellable_to_c = nullptr;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_query_filesystem_info_async (GFile* file, const char* attributes, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_filesystem_info_async (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::query_filesystem_info_async (const std::string & attributes, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_filesystem_info_async (const std::string & attributes, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* g_file_query_filesystem_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* g_file_query_filesystem_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileInfo base::FileBase::query_filesystem_info_finish (Gio::AsyncResult res)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_filesystem_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_filesystem_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileInfo* g_file_query_info (GFile* file, const char* attributes, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileInfo* g_file_query_info (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileInfo base::FileBase::query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_info (const std::string & attributes, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_query_info_async (GFile* file, const char* attributes, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_query_info_async (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::query_info_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::query_info_async (const std::string & attributes, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* attributes, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (attributes_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInfo* g_file_query_info_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInfo* g_file_query_info_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileInfo base::FileBase::query_info_finish (Gio::AsyncResult res)
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInfo base::FileBase::query_info_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInfo* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_info_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileAttributeInfoList* g_file_query_settable_attributes (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* g_file_query_settable_attributes (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (Gio::Cancellable cancellable)
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_settable_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes ()
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_settable_attributes;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_settable_attributes;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_settable_attributes (GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_settable_attributes;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileAttributeInfoList* g_file_query_writable_namespaces (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileAttributeInfoList* g_file_query_writable_namespaces (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (Gio::Cancellable cancellable)
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_writable_namespaces;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces ()
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_writable_namespaces;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_writable_namespaces;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileAttributeInfoList base::FileBase::query_writable_namespaces (GLib::Error * _error) noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_query_writable_namespaces;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileInputStream* g_file_read (GFile* file, GCancellable* cancellable, GError ** error);
// ::GFileInputStream* g_file_read (::GFile* file, ::GCancellable* cancellable, GError ** error);
Gio::FileInputStream base::FileBase::read (Gio::Cancellable cancellable)
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInputStream base::FileBase::read ()
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInputStream base::FileBase::read (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInputStream base::FileBase::read (GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_read_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_read_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::read_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::read_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileInputStream* g_file_read_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileInputStream* g_file_read_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileInputStream base::FileBase::read_finish (Gio::AsyncResult res)
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileInputStream base::FileBase::read_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileInputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_read_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileOutputStream* g_file_replace (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileOutputStream* g_file_replace (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileOutputStream base::FileBase::replace (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::replace (gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::replace (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::replace (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_replace_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::replace_async (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_replace_contents (GFile* file, const char* contents, gsize length, const char* etag, gboolean make_backup, GFileCreateFlags flags, char** new_etag, GCancellable* cancellable, GError ** error);
// gboolean g_file_replace_contents (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, std::string * new_etag, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (new_etag ? &new_etag_o : nullptr), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::FileBase::replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::replace_contents (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::replace_contents (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, char** new_etag, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents;
  auto cancellable_to_c = nullptr;
  char* new_etag_o {};
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (char**) (&new_etag_o), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}

// void g_file_replace_contents_async (GFile* file, const char* contents, gsize length, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_contents_async (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::replace_contents_async (guint8 * contents, gsize length, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_contents_async (guint8 * contents, gsize length, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const guint8* contents, gsize length, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_i = detail::make_list_unwrap_range (contents, length, false);
  auto contents_w = unwrap (contents_i, gi::transfer_none, direction_in);
  auto contents_to_c = contents_w.gobj_(false);
  call_wrap_v ((::GFile*) (gobj_()), (const guint8*) (contents_to_c), (gsize) (contents_w.size()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void g_file_replace_contents_bytes_async (GFile* file, GBytes* contents, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_contents_bytes_async (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::replace_contents_bytes_async (GLib::Bytes contents, const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  auto contents_to_c = gi::unwrap (contents, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GBytes*) (contents_to_c), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_contents_bytes_async (GLib::Bytes contents, gboolean make_backup, Gio::FileCreateFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GBytes* contents, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_bytes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  auto contents_to_c = gi::unwrap (contents, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GBytes*) (contents_to_c), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_replace_contents_finish (GFile* file, GAsyncResult* res, char** new_etag, GError ** error);
// gboolean g_file_replace_contents_finish (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
bool base::FileBase::replace_contents_finish (Gio::AsyncResult res, std::string * new_etag)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (new_etag ? &new_etag_o : nullptr), &error);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::replace_contents_finish (Gio::AsyncResult res, std::string * new_etag, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (new_etag ? &new_etag_o : nullptr), _error ? &_error_o : nullptr);
  if (new_etag) *new_etag = gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::FileBase::replace_contents_finish (Gio::AsyncResult res)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&new_etag_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::FileBase::replace_contents_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, char** new_etag, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_contents_finish;
  char* new_etag_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), (char**) (&new_etag_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (new_etag_o, gi::transfer_full, gi::direction_out));
}

// GFileOutputStream* g_file_replace_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileOutputStream* g_file_replace_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileOutputStream base::FileBase::replace_finish (Gio::AsyncResult res)
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileOutputStream base::FileBase::replace_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileOutputStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFileIOStream* g_file_replace_readwrite (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, GCancellable* cancellable, GError ** error);
// ::GFileIOStream* g_file_replace_readwrite (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
Gio::FileIOStream base::FileBase::replace_readwrite (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::replace_readwrite (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::replace_readwrite (gboolean make_backup, Gio::FileCreateFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_replace_readwrite_async (GFile* file, const char* etag, gboolean make_backup, GFileCreateFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_replace_readwrite_async (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::replace_readwrite_async (const std::string & etag, gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = gi::unwrap (etag, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::replace_readwrite_async (gboolean make_backup, Gio::FileCreateFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* etag, gboolean make_backup, ::GFileCreateFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto make_backup_to_c = make_backup;
  auto etag_to_c = nullptr;
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (etag_to_c), (gboolean) (make_backup_to_c), (::GFileCreateFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFileIOStream* g_file_replace_readwrite_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFileIOStream* g_file_replace_readwrite_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::FileIOStream base::FileBase::replace_readwrite_finish (Gio::AsyncResult res)
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::FileIOStream base::FileBase::replace_readwrite_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFileIOStream* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_replace_readwrite_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* g_file_resolve_relative_path (GFile* file, const char* relative_path);
// ::GFile* g_file_resolve_relative_path (::GFile* file, const char* relative_path);
Gio::File base::FileBase::resolve_relative_path (const std::string & relative_path) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* relative_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_resolve_relative_path;
  auto relative_path_to_c = gi::unwrap (relative_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (relative_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_file_set_attribute (GFile* file, const char* attribute, GFileAttributeType type, gpointer value_p, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute (const std::string & attribute, Gio::FileAttributeType type, void* value_p, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, ::GFileAttributeType type, void* value_p, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_p_to_c = value_p;
  auto type_to_c = gi::unwrap (type);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (::GFileAttributeType) (type_to_c), (void*) (value_p_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_byte_string (GFile* file, const char* attribute, const char* value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_byte_string (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_byte_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_byte_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_byte_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_byte_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_byte_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_int32 (GFile* file, const char* attribute, gint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_int32 (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int32 (const std::string & attribute, gint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_int64 (GFile* file, const char* attribute, gint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_int64 (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_int64 (const std::string & attribute, gint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, gint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_int64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (gint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_string (GFile* file, const char* attribute, const char* value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_string (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_string;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_string (const std::string & attribute, const std::string & value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, const char* value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_string;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (const char*) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_uint32 (GFile* file, const char* attribute, guint32 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_uint32 (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint32;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint32 (const std::string & attribute, guint32 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint32 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint32;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint32) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_set_attribute_uint64 (GFile* file, const char* attribute, guint64 value, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attribute_uint64 (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint64;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attribute_uint64 (const std::string & attribute, guint64 value, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* attribute, guint64 value, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attribute_uint64;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto value_to_c = value;
  auto attribute_to_c = gi::unwrap (attribute, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (attribute_to_c), (guint64) (value_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_set_attributes_async (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_set_attributes_async (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::set_attributes_async (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_set_attributes_finish (GFile* file, GAsyncResult* result, GFileInfo** info, GError ** error);
// gboolean g_file_set_attributes_finish (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
bool base::FileBase::set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), &error);
  info = gi::wrap (info_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_finish (Gio::AsyncResult result, Gio::FileInfo & info, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), _error ? &_error_o : nullptr);
  info = gi::wrap (info_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gio::FileInfo> base::FileBase::set_attributes_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (info_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, Gio::FileInfo> base::FileBase::set_attributes_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, ::GFileInfo** info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_finish;
  ::GFileInfo* info_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GFileInfo**) (&info_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (info_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_file_set_attributes_from_info (GFile* file, GFileInfo* info, GFileQueryInfoFlags flags, GCancellable* cancellable, GError ** error);
// gboolean g_file_set_attributes_from_info (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_from_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_from_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_from_info;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::set_attributes_from_info (Gio::FileInfo info, Gio::FileQueryInfoFlags flags, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GFileInfo* info, ::GFileQueryInfoFlags flags, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_attributes_from_info;
  auto cancellable_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFileInfo*) (info_to_c), (::GFileQueryInfoFlags) (flags_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GFile* g_file_set_display_name (GFile* file, const char* display_name, GCancellable* cancellable, GError ** error);
// ::GFile* g_file_set_display_name (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
Gio::File base::FileBase::set_display_name (const std::string & display_name, Gio::Cancellable cancellable)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::set_display_name (const std::string & display_name)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name;
  auto cancellable_to_c = nullptr;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::set_display_name (const std::string & display_name, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::set_display_name (const std::string & display_name, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* display_name, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name;
  auto cancellable_to_c = nullptr;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_set_display_name_async (GFile* file, const char* display_name, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_set_display_name_async (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::set_display_name_async (const std::string & display_name, gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::set_display_name_async (const std::string & display_name, gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, const char* display_name, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GFile*) (gobj_()), (const char*) (display_name_to_c), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GFile* g_file_set_display_name_finish (GFile* file, GAsyncResult* res, GError ** error);
// ::GFile* g_file_set_display_name_finish (::GFile* file, ::GAsyncResult* res, GError ** error);
Gio::File base::FileBase::set_display_name_finish (Gio::AsyncResult res)
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::File base::FileBase::set_display_name_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GFile* file, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_set_display_name_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_file_start_mountable (GFile* file, GDriveStartFlags flags, GMountOperation* start_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_start_mountable (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::start_mountable (Gio::DriveStartFlags flags, Gio::MountOperation start_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_start_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto start_operation_to_c = gi::unwrap (start_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (start_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::start_mountable (Gio::DriveStartFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GDriveStartFlags flags, ::GMountOperation* start_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_start_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto start_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GDriveStartFlags) (flags_to_c), (::GMountOperation*) (start_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_start_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_start_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::start_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_start_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::start_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_start_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_stop_mountable (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_stop_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::stop_mountable (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_stop_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::stop_mountable (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_stop_mountable;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_stop_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_stop_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::stop_mountable_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_stop_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::stop_mountable_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_stop_mountable_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_file_supports_thread_contexts (GFile* file);
// gboolean g_file_supports_thread_contexts (::GFile* file);
bool base::FileBase::supports_thread_contexts () noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_supports_thread_contexts;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean g_file_trash (GFile* file, GCancellable* cancellable, GError ** error);
// gboolean g_file_trash (::GFile* file, ::GCancellable* cancellable, GError ** error);
bool base::FileBase::trash (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash ()
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::FileBase::trash (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_trash_async (GFile* file, int io_priority, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_trash_async (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::trash_async (gint io_priority, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::trash_async (gint io_priority, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, gint io_priority, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto io_priority_to_c = io_priority;
  call_wrap_v ((::GFile*) (gobj_()), (gint) (io_priority_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_trash_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_trash_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::trash_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::trash_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_trash_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_file_unmount_mountable (GFile* file, GMountUnmountFlags flags, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_unmount_mountable (::GFile* file, ::GMountUnmountFlags flags, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gboolean g_file_unmount_mountable_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_unmount_mountable_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void g_file_unmount_mountable_with_operation (GFile* file, GMountUnmountFlags flags, GMountOperation* mount_operation, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_file_unmount_mountable_with_operation (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FileBase::unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::MountOperation mount_operation, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_unmount_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto mount_operation_to_c = gi::unwrap (mount_operation, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FileBase::unmount_mountable_with_operation (Gio::MountUnmountFlags flags, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GFile* file, ::GMountUnmountFlags flags, ::GMountOperation* mount_operation, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_unmount_mountable_with_operation;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto mount_operation_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GFile*) (gobj_()), (::GMountUnmountFlags) (flags_to_c), (::GMountOperation*) (mount_operation_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_file_unmount_mountable_with_operation_finish (GFile* file, GAsyncResult* result, GError ** error);
// gboolean g_file_unmount_mountable_with_operation_finish (::GFile* file, ::GAsyncResult* result, GError ** error);
bool base::FileBase::unmount_mountable_with_operation_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_unmount_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::FileBase::unmount_mountable_with_operation_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GFile* file, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_unmount_mountable_with_operation_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/file_extra_def_impl.hpp>)
#include <gio/file_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/file_extra_impl.hpp>)
#include <gio/file_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void FileIfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GFileIface *methods = (::GFileIface *) interface_struct;
  (void) methods;

  methods->dup = (decltype (methods->dup)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t>::wrapper<&self::dup_>;
  methods->equal = (decltype (methods->equal)) detail::method_wrapper<self, bool (*) (Gio::File file2), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::equal_>;
  methods->get_basename = (decltype (methods->get_basename)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_basename_>;
  methods->get_parent = (decltype (methods->get_parent)) detail::method_wrapper<self, Gio::File (*) (), gi::transfer_full_t>::wrapper<&self::get_parent_>;
  methods->get_parse_name = (decltype (methods->get_parse_name)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_parse_name_>;
  methods->get_path = (decltype (methods->get_path)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_path_>;
  methods->get_relative_path = (decltype (methods->get_relative_path)) detail::method_wrapper<self, std::string (*) (Gio::File descendant), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_relative_path_>;
  methods->get_uri = (decltype (methods->get_uri)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_uri_>;
  methods->get_uri_scheme = (decltype (methods->get_uri_scheme)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_uri_scheme_>;
  methods->has_uri_scheme = (decltype (methods->has_uri_scheme)) detail::method_wrapper<self, bool (*) (const std::string & uri_scheme), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::has_uri_scheme_>;
  methods->hash = (decltype (methods->hash)) detail::method_wrapper<self, guint (*) (), gi::transfer_none_t>::wrapper<&self::hash_>;
  methods->is_native = (decltype (methods->is_native)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_native_>;
  methods->prefix_matches = (decltype (methods->prefix_matches)) detail::method_wrapper<self, bool (*) (Gio::File file), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::prefix_matches_>;
  methods->resolve_relative_path = (decltype (methods->resolve_relative_path)) detail::method_wrapper<self, Gio::File (*) (const std::string & relative_path), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::resolve_relative_path_>;
}

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
Gio::File FileIfaceClassImpl::dup_ () noexcept
{
  if (!get_struct_()->dup) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dup;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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
bool FileIfaceClassImpl::equal_ (Gio::File file2) noexcept
{
  if (!get_struct_()->equal) return bool{};
  typedef gboolean (*call_wrap_t) (::GFile* file1, ::GFile* file2);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->equal;
  auto file2_to_c = gi::unwrap (file2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file2_to_c));
  return _temp_ret;
}

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
std::string FileIfaceClassImpl::get_basename_ () noexcept
{
  if (!get_struct_()->get_basename) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_basename;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GFile* File::get_child_for_display_name (GFile* file, const char* display_name, GError ** error);
// ::GFile* File::get_child_for_display_name (::GFile* file, const char* display_name, GError ** error);
// SKIP; callee GError not supported

// GFile* File::get_parent (GFile* file);
// ::GFile* File::get_parent (::GFile* file);
Gio::File FileIfaceClassImpl::get_parent_ () noexcept
{
  if (!get_struct_()->get_parent) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parent;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* File::get_parse_name (GFile* file);
// char* File::get_parse_name (::GFile* file);
std::string FileIfaceClassImpl::get_parse_name_ () noexcept
{
  if (!get_struct_()->get_parse_name) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_parse_name;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* File::get_path (GFile* file);
// char* File::get_path (::GFile* file);
std::string FileIfaceClassImpl::get_path_ () noexcept
{
  if (!get_struct_()->get_path) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_path;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* File::get_relative_path (GFile* parent, GFile* descendant);
// char* File::get_relative_path (::GFile* parent, ::GFile* descendant);
std::string FileIfaceClassImpl::get_relative_path_ (Gio::File descendant) noexcept
{
  if (!get_struct_()->get_relative_path) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* parent, ::GFile* descendant);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_relative_path;
  auto descendant_to_c = gi::unwrap (descendant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (descendant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* File::get_uri (GFile* file);
// char* File::get_uri (::GFile* file);
std::string FileIfaceClassImpl::get_uri_ () noexcept
{
  if (!get_struct_()->get_uri) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* File::get_uri_scheme (GFile* file);
// char* File::get_uri_scheme (::GFile* file);
std::string FileIfaceClassImpl::get_uri_scheme_ () noexcept
{
  if (!get_struct_()->get_uri_scheme) return std::string{};
  typedef char* (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri_scheme;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean File::has_uri_scheme (GFile* file, const char* uri_scheme);
// gboolean File::has_uri_scheme (::GFile* file, const char* uri_scheme);
bool FileIfaceClassImpl::has_uri_scheme_ (const std::string & uri_scheme) noexcept
{
  if (!get_struct_()->has_uri_scheme) return bool{};
  typedef gboolean (*call_wrap_t) (::GFile* file, const char* uri_scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->has_uri_scheme;
  auto uri_scheme_to_c = gi::unwrap (uri_scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (uri_scheme_to_c));
  return _temp_ret;
}

// guint File::hash (GFile* file);
// guint File::hash (::GFile* file);
guint FileIfaceClassImpl::hash_ () noexcept
{
  if (!get_struct_()->hash) return guint{};
  typedef guint (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hash;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

// gboolean File::is_native (GFile* file);
// gboolean File::is_native (::GFile* file);
bool FileIfaceClassImpl::is_native_ () noexcept
{
  if (!get_struct_()->is_native) return bool{};
  typedef gboolean (*call_wrap_t) (::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_native;
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()));
  return _temp_ret;
}

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
bool FileIfaceClassImpl::prefix_matches_ (Gio::File file) noexcept
{
  if (!get_struct_()->prefix_matches) return bool{};
  typedef gboolean (*call_wrap_t) (::GFile* prefix, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->prefix_matches;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (::GFile*) (file_to_c));
  return _temp_ret;
}

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
Gio::File FileIfaceClassImpl::resolve_relative_path_ (const std::string & relative_path) noexcept
{
  if (!get_struct_()->resolve_relative_path) return Gio::File{};
  typedef ::GFile* (*call_wrap_t) (::GFile* file, const char* relative_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->resolve_relative_path;
  auto relative_path_to_c = gi::unwrap (relative_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GFile*) (gobj_()), (const char*) (relative_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
