// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESSLAUNCHER_HPP_
#define _GI_GIO_SUBPROCESSLAUNCHER_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Subprocess;

class SubprocessLauncher;

namespace base {


#define GI_GIO_SUBPROCESSLAUNCHER_BASE base::SubprocessLauncherBase
class SubprocessLauncherBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSubprocessLauncher BaseObjectType;

SubprocessLauncherBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_subprocess_launcher_get_type(); } 

// GSubprocessLauncher* g_subprocess_launcher_new (GSubprocessFlags flags);
// ::GSubprocessLauncher* g_subprocess_launcher_new (::GSubprocessFlags flags);
static GI_INLINE_DECL Gio::SubprocessLauncher new_ (Gio::SubprocessFlags flags) noexcept;

// void g_subprocess_launcher_close (GSubprocessLauncher* self);
// void g_subprocess_launcher_close (::GSubprocessLauncher* self);
GI_INLINE_DECL void close () noexcept;

// const gchar* g_subprocess_launcher_getenv (GSubprocessLauncher* self, const gchar* variable);
// const char* g_subprocess_launcher_getenv (::GSubprocessLauncher* self, const char* variable);
GI_INLINE_DECL std::string getenv (const std::string & variable) noexcept;

// void g_subprocess_launcher_set_child_setup (GSubprocessLauncher* self, GSpawnChildSetupFunc child_setup, gpointer user_data, GDestroyNotify destroy_notify);
// void g_subprocess_launcher_set_child_setup (::GSubprocessLauncher* self, GLib::SpawnChildSetupFunc::cfunction_type child_setup, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
GI_INLINE_DECL void set_child_setup (GLib::SpawnChildSetupFunc child_setup) noexcept;

// void g_subprocess_launcher_set_cwd (GSubprocessLauncher* self, const gchar* cwd);
// void g_subprocess_launcher_set_cwd (::GSubprocessLauncher* self, const char* cwd);
GI_INLINE_DECL void set_cwd (const std::string & cwd) noexcept;

// void g_subprocess_launcher_set_environ (GSubprocessLauncher* self, gchar** env);
// void g_subprocess_launcher_set_environ (::GSubprocessLauncher* self, char** env);
GI_INLINE_DECL void set_environ (const std::vector<std::string> & env) noexcept;

// void g_subprocess_launcher_set_flags (GSubprocessLauncher* self, GSubprocessFlags flags);
// void g_subprocess_launcher_set_flags (::GSubprocessLauncher* self, ::GSubprocessFlags flags);
GI_INLINE_DECL void set_flags (Gio::SubprocessFlags flags) noexcept;

// void g_subprocess_launcher_set_stderr_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stderr_file_path (::GSubprocessLauncher* self, const char* path);
GI_INLINE_DECL void set_stderr_file_path (const std::string & path) noexcept;
GI_INLINE_DECL void set_stderr_file_path () noexcept;

// void g_subprocess_launcher_set_stdin_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stdin_file_path (::GSubprocessLauncher* self, const char* path);
GI_INLINE_DECL void set_stdin_file_path (const std::string & path) noexcept;

// void g_subprocess_launcher_set_stdout_file_path (GSubprocessLauncher* self, const gchar* path);
// void g_subprocess_launcher_set_stdout_file_path (::GSubprocessLauncher* self, const char* path);
GI_INLINE_DECL void set_stdout_file_path (const std::string & path) noexcept;
GI_INLINE_DECL void set_stdout_file_path () noexcept;

// void g_subprocess_launcher_setenv (GSubprocessLauncher* self, const gchar* variable, const gchar* value, gboolean overwrite);
// void g_subprocess_launcher_setenv (::GSubprocessLauncher* self, const char* variable, const char* value, gboolean overwrite);
GI_INLINE_DECL void setenv (const std::string & variable, const std::string & value, gboolean overwrite) noexcept;

// GSubprocess* g_subprocess_launcher_spawn (GSubprocessLauncher* self, GError** error, const gchar* argv0);
// ::GSubprocess* g_subprocess_launcher_spawn (::GSubprocessLauncher* self, ::GError* error, const char* argv0);
// IGNORE; not introspectable, varargs not supported

// GSubprocess* g_subprocess_launcher_spawnv (GSubprocessLauncher* self, const gchar* const* argv, GError ** error);
// ::GSubprocess* g_subprocess_launcher_spawnv (::GSubprocessLauncher* self, const char** argv, GError ** error);
GI_INLINE_DECL Gio::Subprocess spawnv (const std::vector<std::string> & argv);
GI_INLINE_DECL Gio::Subprocess spawnv (const std::vector<std::string> & argv, GLib::Error * _error) noexcept;

// void g_subprocess_launcher_take_fd (GSubprocessLauncher* self, gint source_fd, gint target_fd);
// void g_subprocess_launcher_take_fd (::GSubprocessLauncher* self, gint source_fd, gint target_fd);
GI_INLINE_DECL void take_fd (gint source_fd, gint target_fd) noexcept;

// void g_subprocess_launcher_take_stderr_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stderr_fd (::GSubprocessLauncher* self, gint fd);
GI_INLINE_DECL void take_stderr_fd (gint fd) noexcept;

// void g_subprocess_launcher_take_stdin_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stdin_fd (::GSubprocessLauncher* self, gint fd);
GI_INLINE_DECL void take_stdin_fd (gint fd) noexcept;

// void g_subprocess_launcher_take_stdout_fd (GSubprocessLauncher* self, gint fd);
// void g_subprocess_launcher_take_stdout_fd (::GSubprocessLauncher* self, gint fd);
GI_INLINE_DECL void take_stdout_fd (gint fd) noexcept;

// void g_subprocess_launcher_unsetenv (GSubprocessLauncher* self, const gchar* variable);
// void g_subprocess_launcher_unsetenv (::GSubprocessLauncher* self, const char* variable);
GI_INLINE_DECL void unsetenv (const std::string & variable) noexcept;

gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessLauncherBase> property_flags()
{ return gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessLauncherBase> (*this, "flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra_def.hpp>)
#include <gio/subprocesslauncher_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocesslauncher_extra.hpp>)
#include <gio/subprocesslauncher_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SubprocessLauncher : public GI_GIO_SUBPROCESSLAUNCHER_BASE
{ typedef GI_GIO_SUBPROCESSLAUNCHER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSubprocessLauncher>
{ typedef Gio::SubprocessLauncher type; }; 

} // namespace repository

} // namespace gi

#endif
