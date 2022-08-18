// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATION_HPP_
#define _GI_GIO_APPLICATION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class ActionGroup;
class ActionMap;
class ApplicationCommandLine;
class Cancellable;
class DBusConnection;
class File;
class Notification;

class Application;

namespace base {


#define GI_GIO_APPLICATION_BASE base::ApplicationBase
class ApplicationBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GApplication BaseObjectType;

ApplicationBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_application_get_type(); } 

GI_INLINE_DECL Gio::ActionGroup interface_ (gi::interface_tag<Gio::ActionGroup>);

GI_INLINE_DECL operator Gio::ActionGroup ();

GI_INLINE_DECL Gio::ActionMap interface_ (gi::interface_tag<Gio::ActionMap>);

GI_INLINE_DECL operator Gio::ActionMap ();

// GApplication* g_application_new (const gchar* application_id, GApplicationFlags flags);
// ::GApplication* g_application_new (const char* application_id, ::GApplicationFlags flags);
static GI_INLINE_DECL Gio::Application new_ (const std::string & application_id, Gio::ApplicationFlags flags) noexcept;
static GI_INLINE_DECL Gio::Application new_ (Gio::ApplicationFlags flags) noexcept;

// GApplication* g_application_get_default ();
// ::GApplication* g_application_get_default ();
static GI_INLINE_DECL Gio::Application get_default () noexcept;

// gboolean g_application_id_is_valid (const gchar* application_id);
// gboolean g_application_id_is_valid (const char* application_id);
static GI_INLINE_DECL bool id_is_valid (const std::string & application_id) noexcept;

// void g_application_activate (GApplication* application);
// void g_application_activate (::GApplication* application);
GI_INLINE_DECL void activate () noexcept;

// void g_application_add_main_option (GApplication* application, const char* long_name, char short_name, GOptionFlags flags, GOptionArg arg, const char* description, const char* arg_description);
// void g_application_add_main_option (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
GI_INLINE_DECL void add_main_option (const std::string & long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const std::string & description, const std::string & arg_description) noexcept;
GI_INLINE_DECL void add_main_option (const std::string & long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const std::string & description) noexcept;

// void g_application_add_main_option_entries (GApplication* application, const GOptionEntry* entries);
// void g_application_add_main_option_entries (::GApplication* application, const ::GOptionEntry** entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2)

// void g_application_add_option_group (GApplication* application, GOptionGroup* group);
// void g_application_add_option_group (::GApplication* application, ::GOptionGroup* group);
GI_INLINE_DECL void add_option_group (GLib::OptionGroup group) noexcept;

// void g_application_bind_busy_property (GApplication* application, gpointer object, const gchar* property);
// void g_application_bind_busy_property (::GApplication* application, ::GObject* object, const char* property);
GI_INLINE_DECL void bind_busy_property (GObject::Object object, const std::string & property) noexcept;

// const gchar* g_application_get_application_id (GApplication* application);
// const char* g_application_get_application_id (::GApplication* application);
GI_INLINE_DECL std::string get_application_id () noexcept;

// GDBusConnection* g_application_get_dbus_connection (GApplication* application);
// ::GDBusConnection* g_application_get_dbus_connection (::GApplication* application);
GI_INLINE_DECL Gio::DBusConnection get_dbus_connection () noexcept;

// const gchar* g_application_get_dbus_object_path (GApplication* application);
// const char* g_application_get_dbus_object_path (::GApplication* application);
GI_INLINE_DECL std::string get_dbus_object_path () noexcept;

// GApplicationFlags g_application_get_flags (GApplication* application);
// ::GApplicationFlags g_application_get_flags (::GApplication* application);
GI_INLINE_DECL Gio::ApplicationFlags get_flags () noexcept;

// guint g_application_get_inactivity_timeout (GApplication* application);
// guint g_application_get_inactivity_timeout (::GApplication* application);
GI_INLINE_DECL guint get_inactivity_timeout () noexcept;

// gboolean g_application_get_is_busy (GApplication* application);
// gboolean g_application_get_is_busy (::GApplication* application);
GI_INLINE_DECL bool get_is_busy () noexcept;

// gboolean g_application_get_is_registered (GApplication* application);
// gboolean g_application_get_is_registered (::GApplication* application);
GI_INLINE_DECL bool get_is_registered () noexcept;

// gboolean g_application_get_is_remote (GApplication* application);
// gboolean g_application_get_is_remote (::GApplication* application);
GI_INLINE_DECL bool get_is_remote () noexcept;

// const gchar* g_application_get_resource_base_path (GApplication* application);
// const char* g_application_get_resource_base_path (::GApplication* application);
GI_INLINE_DECL std::string get_resource_base_path () noexcept;

// void g_application_hold (GApplication* application);
// void g_application_hold (::GApplication* application);
GI_INLINE_DECL void hold () noexcept;

// void g_application_mark_busy (GApplication* application);
// void g_application_mark_busy (::GApplication* application);
GI_INLINE_DECL void mark_busy () noexcept;

// void g_application_open (GApplication* application, GFile** files, gint n_files, const gchar* hint);
// void g_application_open (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
GI_INLINE_DECL void open (Gio::File * files, gint n_files, const std::string & hint) noexcept;

// void g_application_quit (GApplication* application);
// void g_application_quit (::GApplication* application);
GI_INLINE_DECL void quit () noexcept;

// gboolean g_application_register (GApplication* application, GCancellable* cancellable, GError ** error);
// gboolean g_application_register (::GApplication* application, ::GCancellable* cancellable, GError ** error);
GI_INLINE_DECL bool register_ (Gio::Cancellable cancellable);
GI_INLINE_DECL bool register_ ();
GI_INLINE_DECL bool register_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool register_ (GLib::Error * _error) noexcept;

// void g_application_release (GApplication* application);
// void g_application_release (::GApplication* application);
GI_INLINE_DECL void release () noexcept;

// int g_application_run (GApplication* application, int argc, char** argv);
// gint g_application_run (::GApplication* application, gint argc, char** argv);
GI_INLINE_DECL gint run (gint argc, std::string * argv) noexcept;

// void g_application_send_notification (GApplication* application, const gchar* id, GNotification* notification);
// void g_application_send_notification (::GApplication* application, const char* id, ::GNotification* notification);
GI_INLINE_DECL void send_notification (const std::string & id, Gio::Notification notification) noexcept;
GI_INLINE_DECL void send_notification (Gio::Notification notification) noexcept;

// void g_application_set_action_group (GApplication* application, GActionGroup* action_group);
// void g_application_set_action_group (::GApplication* application, ::GActionGroup* action_group);
// IGNORE; deprecated

// void g_application_set_application_id (GApplication* application, const gchar* application_id);
// void g_application_set_application_id (::GApplication* application, const char* application_id);
GI_INLINE_DECL void set_application_id (const std::string & application_id) noexcept;
GI_INLINE_DECL void set_application_id () noexcept;

// void g_application_set_default (GApplication* application);
// void g_application_set_default (::GApplication* application);
GI_INLINE_DECL void set_default () noexcept;

// void g_application_set_flags (GApplication* application, GApplicationFlags flags);
// void g_application_set_flags (::GApplication* application, ::GApplicationFlags flags);
GI_INLINE_DECL void set_flags (Gio::ApplicationFlags flags) noexcept;

// void g_application_set_inactivity_timeout (GApplication* application, guint inactivity_timeout);
// void g_application_set_inactivity_timeout (::GApplication* application, guint inactivity_timeout);
GI_INLINE_DECL void set_inactivity_timeout (guint inactivity_timeout) noexcept;

// void g_application_set_option_context_description (GApplication* application, const gchar* description);
// void g_application_set_option_context_description (::GApplication* application, const char* description);
GI_INLINE_DECL void set_option_context_description (const std::string & description) noexcept;
GI_INLINE_DECL void set_option_context_description () noexcept;

// void g_application_set_option_context_parameter_string (GApplication* application, const gchar* parameter_string);
// void g_application_set_option_context_parameter_string (::GApplication* application, const char* parameter_string);
GI_INLINE_DECL void set_option_context_parameter_string (const std::string & parameter_string) noexcept;
GI_INLINE_DECL void set_option_context_parameter_string () noexcept;

// void g_application_set_option_context_summary (GApplication* application, const gchar* summary);
// void g_application_set_option_context_summary (::GApplication* application, const char* summary);
GI_INLINE_DECL void set_option_context_summary (const std::string & summary) noexcept;
GI_INLINE_DECL void set_option_context_summary () noexcept;

// void g_application_set_resource_base_path (GApplication* application, const gchar* resource_path);
// void g_application_set_resource_base_path (::GApplication* application, const char* resource_path);
GI_INLINE_DECL void set_resource_base_path (const std::string & resource_path) noexcept;
GI_INLINE_DECL void set_resource_base_path () noexcept;

// void g_application_unbind_busy_property (GApplication* application, gpointer object, const gchar* property);
// void g_application_unbind_busy_property (::GApplication* application, ::GObject* object, const char* property);
GI_INLINE_DECL void unbind_busy_property (GObject::Object object, const std::string & property) noexcept;

// void g_application_unmark_busy (GApplication* application);
// void g_application_unmark_busy (::GApplication* application);
GI_INLINE_DECL void unmark_busy () noexcept;

// void g_application_withdraw_notification (GApplication* application, const gchar* id);
// void g_application_withdraw_notification (::GApplication* application, const char* id);
GI_INLINE_DECL void withdraw_notification (const std::string & id) noexcept;

gi::property_proxy_write<Gio::ActionGroup, base::ApplicationBase> property_action_group()
{ return gi::property_proxy_write<Gio::ActionGroup, base::ApplicationBase> (*this, "action-group"); }

gi::property_proxy<std::string, base::ApplicationBase> property_application_id()
{ return gi::property_proxy<std::string, base::ApplicationBase> (*this, "application-id"); }
const gi::property_proxy<std::string, base::ApplicationBase> property_application_id() const
{ return gi::property_proxy<std::string, base::ApplicationBase> (*this, "application-id"); }

gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> property_flags()
{ return gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> (*this, "flags"); }
const gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> property_flags() const
{ return gi::property_proxy<Gio::ApplicationFlags, base::ApplicationBase> (*this, "flags"); }

gi::property_proxy<guint, base::ApplicationBase> property_inactivity_timeout()
{ return gi::property_proxy<guint, base::ApplicationBase> (*this, "inactivity-timeout"); }
const gi::property_proxy<guint, base::ApplicationBase> property_inactivity_timeout() const
{ return gi::property_proxy<guint, base::ApplicationBase> (*this, "inactivity-timeout"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_busy()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-busy"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_busy() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-busy"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_registered()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-registered"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_registered() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-registered"); }

gi::property_proxy<bool, base::ApplicationBase> property_is_remote()
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-remote"); }
const gi::property_proxy<bool, base::ApplicationBase> property_is_remote() const
{ return gi::property_proxy<bool, base::ApplicationBase> (*this, "is-remote"); }

gi::property_proxy<std::string, base::ApplicationBase> property_resource_base_path()
{ return gi::property_proxy<std::string, base::ApplicationBase> (*this, "resource-base-path"); }
const gi::property_proxy<std::string, base::ApplicationBase> property_resource_base_path() const
{ return gi::property_proxy<std::string, base::ApplicationBase> (*this, "resource-base-path"); }

// signal activate
gi::signal_proxy<void(Gio::Application)> signal_activate()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "activate"); }

// signal command-line
gi::signal_proxy<gint(Gio::Application, Gio::ApplicationCommandLine command_line)> signal_command_line()
{ return gi::signal_proxy<gint(Gio::Application, Gio::ApplicationCommandLine command_line)> (*this, "command-line"); }

// signal handle-local-options
gi::signal_proxy<gint(Gio::Application, GLib::VariantDict options)> signal_handle_local_options()
{ return gi::signal_proxy<gint(Gio::Application, GLib::VariantDict options)> (*this, "handle-local-options"); }

// signal name-lost
gi::signal_proxy<bool(Gio::Application)> signal_name_lost()
{ return gi::signal_proxy<bool(Gio::Application)> (*this, "name-lost"); }

// signal open
// SKIP; glib:signal container parameter not supported

// signal shutdown
gi::signal_proxy<void(Gio::Application)> signal_shutdown()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "shutdown"); }

// signal startup
gi::signal_proxy<void(Gio::Application)> signal_startup()
{ return gi::signal_proxy<void(Gio::Application)> (*this, "startup"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/application_extra_def.hpp>)
#include <gio/application_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/application_extra.hpp>)
#include <gio/application_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Application : public GI_GIO_APPLICATION_BASE
{ typedef GI_GIO_APPLICATION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GApplication>
{ typedef Gio::Application type; }; 

} // namespace repository

} // namespace gi

#include "actiongroup.hpp"
#include "actionmap.hpp"

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ApplicationClassDef
{
typedef ApplicationClassDef self;
public:
typedef Gio::Application instance_type;
typedef ::GApplicationClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Application::activate (GApplication* application);
// void Application::activate (::GApplication* application);
virtual void activate_ () noexcept = 0;

// void Application::add_platform_data (GApplication* application, GVariantBuilder* builder);
// void Application::add_platform_data (::GApplication* application, ::GVariantBuilder* builder);
virtual void add_platform_data_ (GLib::VariantBuilder builder) noexcept = 0;

// void Application::after_emit (GApplication* application, GVariant* platform_data);
// void Application::after_emit (::GApplication* application, ::GVariant* platform_data);
virtual void after_emit_ (GLib::Variant platform_data) noexcept = 0;

// void Application::before_emit (GApplication* application, GVariant* platform_data);
// void Application::before_emit (::GApplication* application, ::GVariant* platform_data);
virtual void before_emit_ (GLib::Variant platform_data) noexcept = 0;

// int Application::command_line (GApplication* application, GApplicationCommandLine* command_line);
// gint Application::command_line (::GApplication* application, ::GApplicationCommandLine* command_line);
virtual gint command_line_ (Gio::ApplicationCommandLine command_line) noexcept = 0;

// gboolean Application::dbus_register (GApplication* application, GDBusConnection* connection, const gchar* object_path, GError ** error);
// gboolean Application::dbus_register (::GApplication* application, ::GDBusConnection* connection, const char* object_path, GError ** error);
// SKIP; callee GError not supported

// void Application::dbus_unregister (GApplication* application, GDBusConnection* connection, const gchar* object_path);
// void Application::dbus_unregister (::GApplication* application, ::GDBusConnection* connection, const char* object_path);
virtual void dbus_unregister_ (Gio::DBusConnection connection, const std::string & object_path) noexcept = 0;

// gint Application::handle_local_options (GApplication* application, GVariantDict* options);
// gint Application::handle_local_options (::GApplication* application, ::GVariantDict* options);
virtual gint handle_local_options_ (GLib::VariantDict options) noexcept = 0;

// gboolean Application::local_command_line (GApplication* application, gchar*** arguments, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application, char*** arguments, gint* exit_status);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Application::name_lost (GApplication* application);
// gboolean Application::name_lost (::GApplication* application);
virtual bool name_lost_ () noexcept = 0;

// void Application::open (GApplication* application, GFile** files, gint n_files, const gchar* hint);
// void Application::open (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
// SKIP; virtual-method container parameter not supported

// void Application::quit_mainloop (GApplication* application);
// void Application::quit_mainloop (::GApplication* application);
virtual void quit_mainloop_ () noexcept = 0;

// void Application::run_mainloop (GApplication* application);
// void Application::run_mainloop (::GApplication* application);
virtual void run_mainloop_ () noexcept = 0;

// void Application::shutdown (GApplication* application);
// void Application::shutdown (::GApplication* application);
virtual void shutdown_ () noexcept = 0;

// void Application::startup (GApplication* application);
// void Application::startup (::GApplication* application);
virtual void startup_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationClass: public detail::ClassTemplate<Gio::impl::internal::ApplicationClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl>
{
typedef ApplicationClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ApplicationClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ActionGroupInterfaceClassImpl, Gio::impl::internal::ActionMapInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ActionGroupInterfaceClassImpl GActionGroupInterface_type;
typedef Gio::impl::internal::ActionMapInterfaceClassImpl GActionMapInterface_type;


// void Application::activate (GApplication* application);
// void Application::activate (::GApplication* application);
GI_INLINE_DECL void activate_ () noexcept override;

// void Application::add_platform_data (GApplication* application, GVariantBuilder* builder);
// void Application::add_platform_data (::GApplication* application, ::GVariantBuilder* builder);
GI_INLINE_DECL void add_platform_data_ (GLib::VariantBuilder builder) noexcept override;

// void Application::after_emit (GApplication* application, GVariant* platform_data);
// void Application::after_emit (::GApplication* application, ::GVariant* platform_data);
GI_INLINE_DECL void after_emit_ (GLib::Variant platform_data) noexcept override;

// void Application::before_emit (GApplication* application, GVariant* platform_data);
// void Application::before_emit (::GApplication* application, ::GVariant* platform_data);
GI_INLINE_DECL void before_emit_ (GLib::Variant platform_data) noexcept override;

// int Application::command_line (GApplication* application, GApplicationCommandLine* command_line);
// gint Application::command_line (::GApplication* application, ::GApplicationCommandLine* command_line);
GI_INLINE_DECL gint command_line_ (Gio::ApplicationCommandLine command_line) noexcept override;

// gboolean Application::dbus_register (GApplication* application, GDBusConnection* connection, const gchar* object_path, GError ** error);
// gboolean Application::dbus_register (::GApplication* application, ::GDBusConnection* connection, const char* object_path, GError ** error);
// SKIP; callee GError not supported

// void Application::dbus_unregister (GApplication* application, GDBusConnection* connection, const gchar* object_path);
// void Application::dbus_unregister (::GApplication* application, ::GDBusConnection* connection, const char* object_path);
GI_INLINE_DECL void dbus_unregister_ (Gio::DBusConnection connection, const std::string & object_path) noexcept override;

// gint Application::handle_local_options (GApplication* application, GVariantDict* options);
// gint Application::handle_local_options (::GApplication* application, ::GVariantDict* options);
GI_INLINE_DECL gint handle_local_options_ (GLib::VariantDict options) noexcept override;

// gboolean Application::local_command_line (GApplication* application, gchar*** arguments, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application, char*** arguments, gint* exit_status);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Application::name_lost (GApplication* application);
// gboolean Application::name_lost (::GApplication* application);
GI_INLINE_DECL bool name_lost_ () noexcept override;

// void Application::open (GApplication* application, GFile** files, gint n_files, const gchar* hint);
// void Application::open (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
// SKIP; virtual-method container parameter not supported

// void Application::quit_mainloop (GApplication* application);
// void Application::quit_mainloop (::GApplication* application);
GI_INLINE_DECL void quit_mainloop_ () noexcept override;

// void Application::run_mainloop (GApplication* application);
// void Application::run_mainloop (::GApplication* application);
GI_INLINE_DECL void run_mainloop_ () noexcept override;

// void Application::shutdown (GApplication* application);
// void Application::shutdown (::GApplication* application);
GI_INLINE_DECL void shutdown_ () noexcept override;

// void Application::startup (GApplication* application);
// void Application::startup (::GApplication* application);
GI_INLINE_DECL void startup_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using ApplicationImpl = detail::ObjectImpl<Application, internal::ApplicationClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
