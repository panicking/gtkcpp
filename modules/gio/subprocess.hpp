// AUTO-GENERATED

#ifndef _GI_GIO_SUBPROCESS_HPP_
#define _GI_GIO_SUBPROCESS_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;
class Initable;
class InputStream;
class OutputStream;

class Subprocess;

namespace base {


#define GI_GIO_SUBPROCESS_BASE base::SubprocessBase
class SubprocessBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSubprocess BaseObjectType;

SubprocessBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_subprocess_get_type(); } 

GI_INLINE_DECL Gio::Initable interface_ (gi::interface_tag<Gio::Initable>);

GI_INLINE_DECL operator Gio::Initable ();

// GSubprocess* g_subprocess_new (GSubprocessFlags flags, GError** error, const gchar* argv0);
// ::GSubprocess* g_subprocess_new (::GSubprocessFlags flags, ::GError* error, const char* argv0);
// IGNORE; not introspectable; shadowed-by newv, varargs not supported

// GSubprocess* g_subprocess_newv (const gchar* const* argv, GSubprocessFlags flags, GError ** error);
// ::GSubprocess* g_subprocess_newv (const char** argv, ::GSubprocessFlags flags, GError ** error);
static GI_INLINE_DECL Gio::Subprocess new_ (const std::vector<std::string> & argv, Gio::SubprocessFlags flags);
static GI_INLINE_DECL Gio::Subprocess new_ (const std::vector<std::string> & argv, Gio::SubprocessFlags flags, GLib::Error * _error) noexcept;

// gboolean g_subprocess_communicate (GSubprocess* subprocess, GBytes* stdin_buf, GCancellable* cancellable, GBytes** stdout_buf, GBytes** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
GI_INLINE_DECL bool communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf = nullptr, GLib::Bytes * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate (GLib::Bytes * stdout_buf = nullptr, GLib::Bytes * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool communicate (GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate ();
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate (GLib::Error * _error) noexcept;

// void g_subprocess_communicate_async (GSubprocess* subprocess, GBytes* stdin_buf, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_communicate_async (::GSubprocess* subprocess, ::GBytes* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void communicate_async (GLib::Bytes stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void communicate_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_communicate_finish (GSubprocess* subprocess, GAsyncResult* result, GBytes** stdout_buf, GBytes** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_finish (::GSubprocess* subprocess, ::GAsyncResult* result, ::GBytes** stdout_buf, ::GBytes** stderr_buf, GError ** error);
GI_INLINE_DECL bool communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf = nullptr, GLib::Bytes * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate_finish (Gio::AsyncResult result, GLib::Bytes * stdout_buf, GLib::Bytes * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, GLib::Bytes, GLib::Bytes> communicate_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_subprocess_communicate_utf8 (GSubprocess* subprocess, const char* stdin_buf, GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_utf8 (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, char** stdout_buf, char** stderr_buf, GError ** error);
GI_INLINE_DECL bool communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, std::string * stdout_buf = nullptr, std::string * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate_utf8 (std::string * stdout_buf = nullptr, std::string * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool communicate_utf8 (std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable);
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8 ();
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8 (const std::string & stdin_buf, Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8 (GLib::Error * _error) noexcept;

// void g_subprocess_communicate_utf8_async (GSubprocess* subprocess, const char* stdin_buf, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_communicate_utf8_async (::GSubprocess* subprocess, const char* stdin_buf, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void communicate_utf8_async (const std::string & stdin_buf, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void communicate_utf8_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_communicate_utf8_finish (GSubprocess* subprocess, GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
// gboolean g_subprocess_communicate_utf8_finish (::GSubprocess* subprocess, ::GAsyncResult* result, char** stdout_buf, char** stderr_buf, GError ** error);
GI_INLINE_DECL bool communicate_utf8_finish (Gio::AsyncResult result, std::string * stdout_buf = nullptr, std::string * stderr_buf = nullptr);
GI_INLINE_DECL bool communicate_utf8_finish (Gio::AsyncResult result, std::string * stdout_buf, std::string * stderr_buf, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::tuple<bool, std::string, std::string> communicate_utf8_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void g_subprocess_force_exit (GSubprocess* subprocess);
// void g_subprocess_force_exit (::GSubprocess* subprocess);
GI_INLINE_DECL void force_exit () noexcept;

// gint g_subprocess_get_exit_status (GSubprocess* subprocess);
// gint g_subprocess_get_exit_status (::GSubprocess* subprocess);
GI_INLINE_DECL gint get_exit_status () noexcept;

// const gchar* g_subprocess_get_identifier (GSubprocess* subprocess);
// const char* g_subprocess_get_identifier (::GSubprocess* subprocess);
GI_INLINE_DECL std::string get_identifier () noexcept;

// gboolean g_subprocess_get_if_exited (GSubprocess* subprocess);
// gboolean g_subprocess_get_if_exited (::GSubprocess* subprocess);
GI_INLINE_DECL bool get_if_exited () noexcept;

// gboolean g_subprocess_get_if_signaled (GSubprocess* subprocess);
// gboolean g_subprocess_get_if_signaled (::GSubprocess* subprocess);
GI_INLINE_DECL bool get_if_signaled () noexcept;

// gint g_subprocess_get_status (GSubprocess* subprocess);
// gint g_subprocess_get_status (::GSubprocess* subprocess);
GI_INLINE_DECL gint get_status () noexcept;

// GInputStream* g_subprocess_get_stderr_pipe (GSubprocess* subprocess);
// ::GInputStream* g_subprocess_get_stderr_pipe (::GSubprocess* subprocess);
GI_INLINE_DECL Gio::InputStream get_stderr_pipe () noexcept;

// GOutputStream* g_subprocess_get_stdin_pipe (GSubprocess* subprocess);
// ::GOutputStream* g_subprocess_get_stdin_pipe (::GSubprocess* subprocess);
GI_INLINE_DECL Gio::OutputStream get_stdin_pipe () noexcept;

// GInputStream* g_subprocess_get_stdout_pipe (GSubprocess* subprocess);
// ::GInputStream* g_subprocess_get_stdout_pipe (::GSubprocess* subprocess);
GI_INLINE_DECL Gio::InputStream get_stdout_pipe () noexcept;

// gboolean g_subprocess_get_successful (GSubprocess* subprocess);
// gboolean g_subprocess_get_successful (::GSubprocess* subprocess);
GI_INLINE_DECL bool get_successful () noexcept;

// gint g_subprocess_get_term_sig (GSubprocess* subprocess);
// gint g_subprocess_get_term_sig (::GSubprocess* subprocess);
GI_INLINE_DECL gint get_term_sig () noexcept;

// void g_subprocess_send_signal (GSubprocess* subprocess, gint signal_num);
// void g_subprocess_send_signal (::GSubprocess* subprocess, gint signal_num);
GI_INLINE_DECL void send_signal (gint signal_num) noexcept;

// gboolean g_subprocess_wait (GSubprocess* subprocess, GCancellable* cancellable, GError ** error);
// gboolean g_subprocess_wait (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool wait (Gio::Cancellable cancellable);
GI_INLINE_DECL bool wait ();
GI_INLINE_DECL bool wait (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool wait (GLib::Error * _error) noexcept;

// void g_subprocess_wait_async (GSubprocess* subprocess, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_wait_async (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void wait_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void wait_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_wait_check (GSubprocess* subprocess, GCancellable* cancellable, GError ** error);
// gboolean g_subprocess_wait_check (::GSubprocess* subprocess, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool wait_check (Gio::Cancellable cancellable);
GI_INLINE_DECL bool wait_check ();
GI_INLINE_DECL bool wait_check (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool wait_check (GLib::Error * _error) noexcept;

// void g_subprocess_wait_check_async (GSubprocess* subprocess, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void g_subprocess_wait_check_async (::GSubprocess* subprocess, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void wait_check_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void wait_check_async (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_subprocess_wait_check_finish (GSubprocess* subprocess, GAsyncResult* result, GError ** error);
// gboolean g_subprocess_wait_check_finish (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool wait_check_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool wait_check_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// gboolean g_subprocess_wait_finish (GSubprocess* subprocess, GAsyncResult* result, GError ** error);
// gboolean g_subprocess_wait_finish (::GSubprocess* subprocess, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool wait_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool wait_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessBase> property_flags()
{ return gi::property_proxy_write<Gio::SubprocessFlags, base::SubprocessBase> (*this, "flags"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra_def.hpp>)
#include <gio/subprocess_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/subprocess_extra.hpp>)
#include <gio/subprocess_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Subprocess : public GI_GIO_SUBPROCESS_BASE
{ typedef GI_GIO_SUBPROCESS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSubprocess>
{ typedef Gio::Subprocess type; }; 

} // namespace repository

} // namespace gi

#endif
