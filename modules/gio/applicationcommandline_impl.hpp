// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATIONCOMMANDLINE_IMPL_HPP_
#define _GI_GIO_APPLICATIONCOMMANDLINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GFile* g_application_command_line_create_file_for_arg (GApplicationCommandLine* cmdline, const gchar* arg);
// ::GFile* g_application_command_line_create_file_for_arg (::GApplicationCommandLine* cmdline, const char* arg);
Gio::File base::ApplicationCommandLineBase::create_file_for_arg (const std::string & arg) noexcept
{
  typedef ::GFile* (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* arg);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_create_file_for_arg;
  auto arg_to_c = gi::unwrap (arg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (arg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** g_application_command_line_get_arguments (GApplicationCommandLine* cmdline, int* argc);
// char** g_application_command_line_get_arguments (::GApplicationCommandLine* cmdline, gint* argc);
std::vector<std::string> base::ApplicationCommandLineBase::get_arguments () noexcept
{
  typedef char** (*call_wrap_t) (::GApplicationCommandLine* cmdline, gint* argc);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_arguments;
  gint argc;
  std::vector<std::string> _temp_ret;
  auto _ret_o = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (gint*) (&argc));
  _temp_ret.resize(argc);
  detail::wrap_array (_ret_o, gi::transfer_full, argc, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// const gchar* g_application_command_line_get_cwd (GApplicationCommandLine* cmdline);
// const char* g_application_command_line_get_cwd (::GApplicationCommandLine* cmdline);
std::string base::ApplicationCommandLineBase::get_cwd () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_cwd;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* const* g_application_command_line_get_environ (GApplicationCommandLine* cmdline);
// const char** g_application_command_line_get_environ (::GApplicationCommandLine* cmdline);
std::vector<std::string> base::ApplicationCommandLineBase::get_environ () noexcept
{
  typedef const char** (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_environ;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// int g_application_command_line_get_exit_status (GApplicationCommandLine* cmdline);
// gint g_application_command_line_get_exit_status (::GApplicationCommandLine* cmdline);
gint base::ApplicationCommandLineBase::get_exit_status () noexcept
{
  typedef gint (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_exit_status;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_command_line_get_is_remote (GApplicationCommandLine* cmdline);
// gboolean g_application_command_line_get_is_remote (::GApplicationCommandLine* cmdline);
bool base::ApplicationCommandLineBase::get_is_remote () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_is_remote;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return _temp_ret;
}

// GVariantDict* g_application_command_line_get_options_dict (GApplicationCommandLine* cmdline);
// ::GVariantDict* g_application_command_line_get_options_dict (::GApplicationCommandLine* cmdline);
GLib::VariantDict base::ApplicationCommandLineBase::get_options_dict () noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_options_dict;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_application_command_line_get_platform_data (GApplicationCommandLine* cmdline);
// ::GVariant* g_application_command_line_get_platform_data (::GApplicationCommandLine* cmdline);
GLib::Variant base::ApplicationCommandLineBase::get_platform_data () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_platform_data;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GInputStream* g_application_command_line_get_stdin (GApplicationCommandLine* cmdline);
// ::GInputStream* g_application_command_line_get_stdin (::GApplicationCommandLine* cmdline);
Gio::InputStream base::ApplicationCommandLineBase::get_stdin () noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_get_stdin;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* g_application_command_line_getenv (GApplicationCommandLine* cmdline, const gchar* name);
// const char* g_application_command_line_getenv (::GApplicationCommandLine* cmdline, const char* name);
std::string base::ApplicationCommandLineBase::getenv (const std::string & name) noexcept
{
  typedef const char* (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_getenv;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_application_command_line_print (GApplicationCommandLine* cmdline, const gchar* format);
// void g_application_command_line_print (::GApplicationCommandLine* cmdline, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_printerr (GApplicationCommandLine* cmdline, const gchar* format);
// void g_application_command_line_printerr (::GApplicationCommandLine* cmdline, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_set_exit_status (GApplicationCommandLine* cmdline, int exit_status);
// void g_application_command_line_set_exit_status (::GApplicationCommandLine* cmdline, gint exit_status);
void base::ApplicationCommandLineBase::set_exit_status (gint exit_status) noexcept
{
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, gint exit_status);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_command_line_set_exit_status;
  auto exit_status_to_c = exit_status;
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (gint) (exit_status_to_c));
}


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_def_impl.hpp>)
#include <gio/applicationcommandline_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_impl.hpp>)
#include <gio/applicationcommandline_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ApplicationCommandLineClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GApplicationCommandLineClass *methods = (::GApplicationCommandLineClass *) class_struct;
  (void) methods;

  methods->get_stdin = (decltype (methods->get_stdin)) detail::method_wrapper<self, Gio::InputStream (*) (), gi::transfer_full_t>::wrapper<&self::get_stdin_>;
  methods->print_literal = (decltype (methods->print_literal)) detail::method_wrapper<self, void (*) (const std::string & message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::print_literal_>;
  methods->printerr_literal = (decltype (methods->printerr_literal)) detail::method_wrapper<self, void (*) (const std::string & message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::printerr_literal_>;
}

// GInputStream* ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline);
// ::GInputStream* ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline);
Gio::InputStream ApplicationCommandLineClass::get_stdin_ () noexcept
{
  if (!get_struct_()->get_stdin) return Gio::InputStream{};
  typedef ::GInputStream* (*call_wrap_t) (::GApplicationCommandLine* cmdline);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_stdin;
  auto _temp_ret = call_wrap_v ((::GApplicationCommandLine*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline, const char* message);
void ApplicationCommandLineClass::print_literal_ (const std::string & message) noexcept
{
  if (!get_struct_()->print_literal) return ;
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->print_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline, const char* message);
void ApplicationCommandLineClass::printerr_literal_ (const std::string & message) noexcept
{
  if (!get_struct_()->printerr_literal) return ;
  typedef void (*call_wrap_t) (::GApplicationCommandLine* cmdline, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->printerr_literal;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplicationCommandLine*) (gobj_()), (const char*) (message_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
