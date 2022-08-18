// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESSLAUNCHER_IMPL_HPP_
#define _GI_GIO_SUBPROCESSLAUNCHER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GSubprocessLauncher* g_subprocess_launcher_new (GSubprocessFlags flags);
// ::GSubprocessLauncher* g_subprocess_launcher_new (::GSubprocessFlags flags);
Gio::SubprocessLauncher base::SubprocessLauncherBase::new_ (Gio::SubprocessFlags flags) noexcept
{
  typedef ::GSubprocessLauncher* (*call_wrap_t) (::GSubprocessFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_new;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GSubprocessFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_subprocess_launcher_close (GSubprocessLauncher* self);
// void g_subprocess_launcher_close (::GSubprocessLauncher* self);
void base::SubprocessLauncherBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_close;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()));
}

// const gchar* g_subprocess_launcher_getenv (GSubprocessLauncher* self, const gchar* variable);
// const char* g_subprocess_launcher_getenv (::GSubprocessLauncher* self, const char* variable);
std::string base::SubprocessLauncherBase::getenv (const std::string & variable) noexcept
{
  typedef const char* (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_getenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_subprocess_launcher_set_child_setup (GSubprocessLauncher* self, GSpawnChildSetupFunc child_setup, gpointer user_data, GDestroyNotify destroy_notify);
// void g_subprocess_launcher_set_child_setup (::GSubprocessLauncher* self, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
void base::SubprocessLauncherBase::set_child_setup (GLib::SpawnChildSetupFunc child_setup) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_child_setup;
  auto child_setup_wrap_ = child_setup ? unwrap (std::move (child_setup), gi::scope_notified) : nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (GLib::SpawnChildSetupFunc::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->wrapper : nullptr), (void*) (child_setup_wrap_), (GLib::DestroyNotify::cfunction_type) (child_setup_wrap_ ? &child_setup_wrap_->destroy : nullptr));
}

// void g_subprocess_launcher_set_cwd (GSubprocessLauncher* self, const gchar* cwd);
// void g_subprocess_launcher_set_cwd (::GSubprocessLauncher* self, const char* cwd);
void base::SubprocessLauncherBase::set_cwd (const std::string & cwd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* cwd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_cwd;
  auto cwd_to_c = gi::unwrap (cwd, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (cwd_to_c));
}

// void g_subprocess_launcher_set_environ (GSubprocessLauncher* self, gchar** env);
// void g_subprocess_launcher_set_environ (::GSubprocessLauncher* self, char** env);
void base::SubprocessLauncherBase::set_environ (const std::vector<std::string> & env) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, char** env);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_environ;
  auto env_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (env);
  auto env_w = unwrap (env_i, gi::transfer_none, direction_in);
  auto env_to_c = env_w.gobj_(false);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (char**) (env_to_c));
}

// void g_subprocess_launcher_set_flags (GSubprocessLauncher* self, GSubprocessFlags flags);
// void g_subprocess_launcher_set_flags (::GSubprocessLauncher* self, ::GSubprocessFlags flags);
void base::SubprocessLauncherBase::set_flags (Gio::SubprocessFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, ::GSubprocessFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (::GSubprocessFlags) (flags_to_c));
}

// void g_subprocess_launcher_set_stderr_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stderr_file_path (::GSubprocessLauncher* self, const char* path);
void base::SubprocessLauncherBase::set_stderr_file_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_stderr_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}
void base::SubprocessLauncherBase::set_stderr_file_path () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_stderr_file_path;
  auto path_to_c = nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_set_stdin_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stdin_file_path (::GSubprocessLauncher* self, const char* path);
void base::SubprocessLauncherBase::set_stdin_file_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_stdin_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_set_stdout_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stdout_file_path (::GSubprocessLauncher* self, const char* path);
void base::SubprocessLauncherBase::set_stdout_file_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_stdout_file_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}
void base::SubprocessLauncherBase::set_stdout_file_path () noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_set_stdout_file_path;
  auto path_to_c = nullptr;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (path_to_c));
}

// void g_subprocess_launcher_setenv (GSubprocessLauncher* self, const gchar* variable, const gchar* value, gboolean overwrite);
// void g_subprocess_launcher_setenv (::GSubprocessLauncher* self, const char* variable, const char* value, gboolean overwrite);
void base::SubprocessLauncherBase::setenv (const std::string & variable, const std::string & value, gboolean overwrite) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable, const char* value, gboolean overwrite);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_setenv;
  auto overwrite_to_c = overwrite;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c), (const char*) (value_to_c), (gboolean) (overwrite_to_c));
}

// GSubprocess* g_subprocess_launcher_spawn (GSubprocessLauncher* self, GError** error, const gchar* argv0);
// ::GSubprocess* g_subprocess_launcher_spawn (::GSubprocessLauncher* self, ::GError* error, const char* argv0);
// IGNORE; not introspectable, varargs not supported

// GSubprocess* g_subprocess_launcher_spawnv (GSubprocessLauncher* self, const gchar* const* argv, GError ** error);
// ::GSubprocess* g_subprocess_launcher_spawnv (::GSubprocessLauncher* self, const char** argv, GError ** error);
Gio::Subprocess base::SubprocessLauncherBase::spawnv (const std::vector<std::string> & argv)
{
  typedef ::GSubprocess* (*call_wrap_t) (::GSubprocessLauncher* self, const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_spawnv;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char**) (argv_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Subprocess base::SubprocessLauncherBase::spawnv (const std::vector<std::string> & argv, GLib::Error * _error) noexcept
{
  typedef ::GSubprocess* (*call_wrap_t) (::GSubprocessLauncher* self, const char** argv, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_spawnv;
  auto argv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (argv);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char**) (argv_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_subprocess_launcher_take_fd (GSubprocessLauncher* self, gint source_fd, gint target_fd);
// void g_subprocess_launcher_take_fd (::GSubprocessLauncher* self, gint source_fd, gint target_fd);
void base::SubprocessLauncherBase::take_fd (gint source_fd, gint target_fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint source_fd, gint target_fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_take_fd;
  auto target_fd_to_c = target_fd;
  auto source_fd_to_c = source_fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (source_fd_to_c), (gint) (target_fd_to_c));
}

// void g_subprocess_launcher_take_stderr_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stderr_fd (::GSubprocessLauncher* self, gint fd);
void base::SubprocessLauncherBase::take_stderr_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_take_stderr_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_take_stdin_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stdin_fd (::GSubprocessLauncher* self, gint fd);
void base::SubprocessLauncherBase::take_stdin_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_take_stdin_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_take_stdout_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stdout_fd (::GSubprocessLauncher* self, gint fd);
void base::SubprocessLauncherBase::take_stdout_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_take_stdout_fd;
  auto fd_to_c = fd;
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (gint) (fd_to_c));
}

// void g_subprocess_launcher_unsetenv (GSubprocessLauncher* self, const gchar* variable);
// void g_subprocess_launcher_unsetenv (::GSubprocessLauncher* self, const char* variable);
void base::SubprocessLauncherBase::unsetenv (const std::string & variable) noexcept
{
  typedef void (*call_wrap_t) (::GSubprocessLauncher* self, const char* variable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_subprocess_launcher_unsetenv;
  auto variable_to_c = gi::unwrap (variable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GSubprocessLauncher*) (gobj_()), (const char*) (variable_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_def_impl.hpp>)
#include <gio/subprocesslauncher_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_impl.hpp>)
#include <gio/subprocesslauncher_extra_impl.hpp>
#endif
#endif

#endif
