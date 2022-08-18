// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESS_IMPL_HPP_
#define _GI_GIO_SUBPROCESS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::Initable SubprocessBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SubprocessBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// GSubprocess* g_subprocess_new (GSubprocessFlags flags, GError** error, const gchar* argv0);
// ::GSubprocess* g_subprocess_new (::GSubprocessFlags flags, ::GError* error, const char* argv0);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GSubprocess* g_subprocess_newv (const gchar* const* argv, GSubprocessFlags flags, GError ** error);
// ::GSubprocess* g_subprocess_newv (const char** argv, ::GSubprocessFlags flags, GError ** error);
Gio::Subprocess base::SubprocessBase::new_ (const std::vector<std::string> & argv, Gio::SubprocessFlags flags)
{
  typedef ::GSubprocess* (*call_wrap_t) (const char** argv, ::GSubprocessFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_newv;
  auto flags_to_c = gi::unwrap (flags);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GSubprocessFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Subprocess base::SubprocessBase::new_ (const std::vector<std::string> & argv, Gio::SubprocessFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GSubprocess* (*call_wrap_t) (const char** argv, ::GSubprocessFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_newv;
  auto flags_to_c = gi::unwrap (flags);
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((const char**) (argv_to_c), (::GSubprocessFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_subprocess_communicate (GSubprocess* subprocess, GBytes* stdin_buf, GCancellable* cancellable, GBytes** stdout_buf, GBytes** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
bool base::SubprocessBase::communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SubprocessBase::communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}

// void g_subprocess_communicate_async (GSubprocess* subprocess, GBytes* stdin_buf, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_communicate_async (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SubprocessBase::communicate_async (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::communicate_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GBytes*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_communicate_finish (GSubprocess* subprocess, GAsyncResult* result, GBytes** stdout_buf, GBytes** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_finish (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
bool base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (stdout_buf ? &stdout_buf_o : nullptr), (::GBytes**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, GLib::Bytes, GLib::Bytes> base::SubprocessBase::communicate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_finish;
  ::GBytes* stderr_buf_o {};
  ::GBytes* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (::GBytes**) (&stdout_buf_o), (::GBytes**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}

// gboolean g_subprocess_communicate_utf8 (GSubprocess* subprocess, const char* stdin_buf, GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_utf8 (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
bool base::SubprocessBase::communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, std::string * stdout_buf, std::string * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (std::string * stdout_buf, std::string * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8 (std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8 ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8 (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}

// void g_subprocess_communicate_utf8_async (GSubprocess* subprocess, const char* stdin_buf, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_communicate_utf8_async (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SubprocessBase::communicate_utf8_async (const std::string & stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto stdin_buf_to_c = gi::unwrap (stdin_buf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::communicate_utf8_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto stdin_buf_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (const char*) (stdin_buf_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_communicate_utf8_finish (GSubprocess* subprocess, GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_utf8_finish (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
bool base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, std::string * stdout_buf, std::string * stderr_buf)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), &error);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (stdout_buf ? &stdout_buf_o : nullptr), (char**) (stderr_buf ? &stderr_buf_o : nullptr), _error ? &_error_o : nullptr);
  if (stderr_buf) *stderr_buf = gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out);
  if (stdout_buf) *stdout_buf = gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string, std::string> base::SubprocessBase::communicate_utf8_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_communicate_utf8_finish;
  char* stderr_buf_o {};
  char* stdout_buf_o {};
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), (char**) (&stdout_buf_o), (char**) (&stderr_buf_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap (stdout_buf_o, gi::transfer_full, gi::direction_out), gi::wrap (stderr_buf_o, gi::transfer_full, gi::direction_out));
}

// void g_subprocess_force_exit (GSubprocess* subprocess);
// void g_subprocess_force_exit (::GSubprocess* subprocess);
void base::SubprocessBase::force_exit () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_force_exit;
  call_wrap_v ((::GSubprocess*) (gobj_()));
}

// gint g_subprocess_get_exit_status (GSubprocess* subprocess);
// gint g_subprocess_get_exit_status (::GSubprocess* subprocess);
gint base::SubprocessBase::get_exit_status () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_exit_status;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_subprocess_get_identifier (GSubprocess* subprocess);
// const char* g_subprocess_get_identifier (::GSubprocess* subprocess);
std::string base::SubprocessBase::get_identifier () noexcept
{
  typedef const char* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_identifier;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_subprocess_get_if_exited (GSubprocess* subprocess);
// gboolean g_subprocess_get_if_exited (::GSubprocess* subprocess);
bool base::SubprocessBase::get_if_exited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_if_exited;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gboolean g_subprocess_get_if_signaled (GSubprocess* subprocess);
// gboolean g_subprocess_get_if_signaled (::GSubprocess* subprocess);
bool base::SubprocessBase::get_if_signaled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_if_signaled;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gint g_subprocess_get_status (GSubprocess* subprocess);
// gint g_subprocess_get_status (::GSubprocess* subprocess);
gint base::SubprocessBase::get_status () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_status;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// GInputStream* g_subprocess_get_stderr_pipe (GSubprocess* subprocess);
// ::GInputStream* g_subprocess_get_stderr_pipe (::GSubprocess* subprocess);
Gio::InputStream base::SubprocessBase::get_stderr_pipe () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_stderr_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GOutputStream* g_subprocess_get_stdin_pipe (GSubprocess* subprocess);
// ::GOutputStream* g_subprocess_get_stdin_pipe (::GSubprocess* subprocess);
Gio::OutputStream base::SubprocessBase::get_stdin_pipe () noexcept
{
  typedef ::GOutputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_stdin_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GInputStream* g_subprocess_get_stdout_pipe (GSubprocess* subprocess);
// ::GInputStream* g_subprocess_get_stdout_pipe (::GSubprocess* subprocess);
Gio::InputStream base::SubprocessBase::get_stdout_pipe () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_stdout_pipe;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_subprocess_get_successful (GSubprocess* subprocess);
// gboolean g_subprocess_get_successful (::GSubprocess* subprocess);
bool base::SubprocessBase::get_successful () noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_successful;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// gint g_subprocess_get_term_sig (GSubprocess* subprocess);
// gint g_subprocess_get_term_sig (::GSubprocess* subprocess);
gint base::SubprocessBase::get_term_sig () noexcept
{
  typedef gint (*call_wrap_t) (::GSubprocess* subprocess);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_get_term_sig;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()));
  return _temp_ret;
}

// void g_subprocess_send_signal (GSubprocess* subprocess, gint signal_num);
// void g_subprocess_send_signal (::GSubprocess* subprocess, gint signal_num);
void base::SubprocessBase::send_signal (gint signal_num) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, gint signal_num);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_send_signal;
  auto signal_num_to_c = signal_num;
  call_wrap_v ((::GSubprocess*) (gobj_()), (gint) (signal_num_to_c));
}

// gboolean g_subprocess_wait (GSubprocess* subprocess, GCancellable* cancellable, GError ** error);
// gboolean g_subprocess_wait (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
bool base::SubprocessBase::wait (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SubprocessBase::wait (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_subprocess_wait_async (GSubprocess* subprocess, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_wait_async (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SubprocessBase::wait_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::wait_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_wait_check (GSubprocess* subprocess, GCancellable* cancellable, GError ** error);
// gboolean g_subprocess_wait_check (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
bool base::SubprocessBase::wait_check (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check ()
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_subprocess_wait_check_async (GSubprocess* subprocess, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_wait_check_async (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SubprocessBase::wait_check_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SubprocessBase::wait_check_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GSubprocess*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean g_subprocess_wait_check_finish (GSubprocess* subprocess, GAsyncResult* result, GError ** error);
// gboolean g_subprocess_wait_check_finish (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
bool base::SubprocessBase::wait_check_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_check_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_check_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_subprocess_wait_finish (GSubprocess* subprocess, GAsyncResult* result, GError ** error);
// gboolean g_subprocess_wait_finish (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
bool base::SubprocessBase::wait_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::SubprocessBase::wait_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_wait_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocess*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_def_impl.hpp>)
#include <gio/subprocess_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_impl.hpp>)
#include <gio/subprocess_extra_impl.hpp>
#endif
#endif

#endif
