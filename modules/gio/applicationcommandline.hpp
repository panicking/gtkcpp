// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATIONCOMMANDLINE_HPP_
#define _GI_GIO_APPLICATIONCOMMANDLINE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class File;
class InputStream;

class ApplicationCommandLine;

namespace base {


#define GI_GIO_APPLICATIONCOMMANDLINE_BASE base::ApplicationCommandLineBase
class ApplicationCommandLineBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GApplicationCommandLine BaseObjectType;

ApplicationCommandLineBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_application_command_line_get_type(); } 

// GFile* g_application_command_line_create_file_for_arg (GApplicationCommandLine* cmdline, const gchar* arg);
// ::GFile* g_application_command_line_create_file_for_arg (::GApplicationCommandLine* cmdline, const char* arg);
GI_INLINE_DECL Gio::File create_file_for_arg (const std::string & arg) noexcept;

// gchar** g_application_command_line_get_arguments (GApplicationCommandLine* cmdline, int* argc);
// char** g_application_command_line_get_arguments (::GApplicationCommandLine* cmdline, gint* argc);
GI_INLINE_DECL std::vector<std::string> get_arguments () noexcept;

// const gchar* g_application_command_line_get_cwd (GApplicationCommandLine* cmdline);
// const char* g_application_command_line_get_cwd (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL std::string get_cwd () noexcept;

// const gchar* const* g_application_command_line_get_environ (GApplicationCommandLine* cmdline);
// const char** g_application_command_line_get_environ (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL std::vector<std::string> get_environ () noexcept;

// int g_application_command_line_get_exit_status (GApplicationCommandLine* cmdline);
// gint g_application_command_line_get_exit_status (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL gint get_exit_status () noexcept;

// gboolean g_application_command_line_get_is_remote (GApplicationCommandLine* cmdline);
// gboolean g_application_command_line_get_is_remote (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL bool get_is_remote () noexcept;

// GVariantDict* g_application_command_line_get_options_dict (GApplicationCommandLine* cmdline);
// ::GVariantDict* g_application_command_line_get_options_dict (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL GLib::VariantDict get_options_dict () noexcept;

// GVariant* g_application_command_line_get_platform_data (GApplicationCommandLine* cmdline);
// ::GVariant* g_application_command_line_get_platform_data (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL GLib::Variant get_platform_data () noexcept;

// GInputStream* g_application_command_line_get_stdin (GApplicationCommandLine* cmdline);
// ::GInputStream* g_application_command_line_get_stdin (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL Gio::InputStream get_stdin () noexcept;

// const gchar* g_application_command_line_getenv (GApplicationCommandLine* cmdline, const gchar* name);
// const char* g_application_command_line_getenv (::GApplicationCommandLine* cmdline, const char* name);
GI_INLINE_DECL std::string getenv (const std::string & name) noexcept;

// void g_application_command_line_print (GApplicationCommandLine* cmdline, const gchar* format);
// void g_application_command_line_print (::GApplicationCommandLine* cmdline, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_printerr (GApplicationCommandLine* cmdline, const gchar* format);
// void g_application_command_line_printerr (::GApplicationCommandLine* cmdline, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_set_exit_status (GApplicationCommandLine* cmdline, int exit_status);
// void g_application_command_line_set_exit_status (::GApplicationCommandLine* cmdline, gint exit_status);
GI_INLINE_DECL void set_exit_status (gint exit_status) noexcept;

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_arguments()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "arguments"); }

gi::property_proxy<bool, base::ApplicationCommandLineBase> property_is_remote()
{ return gi::property_proxy<bool, base::ApplicationCommandLineBase> (*this, "is-remote"); }
const gi::property_proxy<bool, base::ApplicationCommandLineBase> property_is_remote() const
{ return gi::property_proxy<bool, base::ApplicationCommandLineBase> (*this, "is-remote"); }

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_options()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "options"); }

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_platform_data()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "platform-data"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_def.hpp>)
#include <gio/applicationcommandline_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra.hpp>)
#include <gio/applicationcommandline_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ApplicationCommandLine : public GI_GIO_APPLICATIONCOMMANDLINE_BASE
{ typedef GI_GIO_APPLICATIONCOMMANDLINE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GApplicationCommandLine>
{ typedef Gio::ApplicationCommandLine type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ApplicationCommandLineClassDef
{
typedef ApplicationCommandLineClassDef self;
public:
typedef Gio::ApplicationCommandLine instance_type;
typedef ::GApplicationCommandLineClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GInputStream* ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline);
// ::GInputStream* ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline);
virtual Gio::InputStream get_stdin_ () noexcept = 0;

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline, const char* message);
virtual void print_literal_ (const std::string & message) noexcept = 0;

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline, const char* message);
virtual void printerr_literal_ (const std::string & message) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationCommandLineClass: public detail::ClassTemplate<Gio::impl::internal::ApplicationCommandLineClassDef, GObject::impl::internal::ObjectClass>
{
typedef ApplicationCommandLineClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ApplicationCommandLineClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GInputStream* ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline);
// ::GInputStream* ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline);
GI_INLINE_DECL Gio::InputStream get_stdin_ () noexcept override;

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline, const char* message);
GI_INLINE_DECL void print_literal_ (const std::string & message) noexcept override;

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline, const gchar* message);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline, const char* message);
GI_INLINE_DECL void printerr_literal_ (const std::string & message) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ApplicationCommandLineImpl = detail::ObjectImpl<ApplicationCommandLine, internal::ApplicationCommandLineClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
