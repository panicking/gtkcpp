// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATION_IMPL_HPP_
#define _GI_GIO_APPLICATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::ActionGroup ApplicationBase::interface_ (gi::interface_tag<Gio::ActionGroup>)
{ return gi::wrap ((Gio::ActionGroup::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ApplicationBase::operator Gio::ActionGroup ()
{ return interface_ (gi::interface_tag<Gio::ActionGroup>()); }

Gio::ActionMap ApplicationBase::interface_ (gi::interface_tag<Gio::ActionMap>)
{ return gi::wrap ((Gio::ActionMap::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ApplicationBase::operator Gio::ActionMap ()
{ return interface_ (gi::interface_tag<Gio::ActionMap>()); }

// GApplication* g_application_new (const gchar* application_id, GApplicationFlags flags);
// ::GApplication* g_application_new (const char* application_id, ::GApplicationFlags flags);
Gio::Application base::ApplicationBase::new_ (const std::string & application_id, Gio::ApplicationFlags flags) noexcept
{
  typedef ::GApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Application base::ApplicationBase::new_ (Gio::ApplicationFlags flags) noexcept
{
  typedef ::GApplication* (*call_wrap_t) (const char* application_id, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_new;
  auto flags_to_c = gi::unwrap (flags);
  auto application_id_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c), (::GApplicationFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GApplication* g_application_get_default ();
// ::GApplication* g_application_get_default ();
Gio::Application base::ApplicationBase::get_default () noexcept
{
  typedef ::GApplication* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_application_id_is_valid (const gchar* application_id);
// gboolean g_application_id_is_valid (const char* application_id);
bool base::ApplicationBase::id_is_valid (const std::string & application_id) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_id_is_valid;
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (application_id_to_c));
  return _temp_ret;
}

// void g_application_activate (GApplication* application);
// void g_application_activate (::GApplication* application);
void base::ApplicationBase::activate () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_activate;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_add_main_option (GApplication* application, const char* long_name, char short_name, GOptionFlags flags, GOptionArg arg, const char* description, const char* arg_description);
// void g_application_add_main_option (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
void base::ApplicationBase::add_main_option (const std::string & long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const std::string & description, const std::string & arg_description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_add_main_option;
  auto arg_description_to_c = gi::unwrap (arg_description, gi::transfer_none, gi::direction_in);
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto arg_to_c = gi::unwrap (arg);
  auto flags_to_c = gi::unwrap (flags);
  auto short_name_to_c = short_name;
  auto long_name_to_c = gi::unwrap (long_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (long_name_to_c), (gchar) (short_name_to_c), (::GOptionFlags) (flags_to_c), (::GOptionArg) (arg_to_c), (const char*) (description_to_c), (const char*) (arg_description_to_c));
}
void base::ApplicationBase::add_main_option (const std::string & long_name, gchar short_name, GLib::OptionFlags flags, GLib::OptionArg arg, const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* long_name, gchar short_name, ::GOptionFlags flags, ::GOptionArg arg, const char* description, const char* arg_description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_add_main_option;
  auto arg_description_to_c = nullptr;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  auto arg_to_c = gi::unwrap (arg);
  auto flags_to_c = gi::unwrap (flags);
  auto short_name_to_c = short_name;
  auto long_name_to_c = gi::unwrap (long_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (long_name_to_c), (gchar) (short_name_to_c), (::GOptionFlags) (flags_to_c), (::GOptionArg) (arg_to_c), (const char*) (description_to_c), (const char*) (arg_description_to_c));
}

// void g_application_add_main_option_entries (GApplication* application, const GOptionEntry* entries);
// void g_application_add_main_option_entries (::GApplication* application, const ::GOptionEntry** entries);
// SKIP; inconsistent in entries pointer depth (1 vs 2)

// void g_application_add_option_group (GApplication* application, GOptionGroup* group);
// void g_application_add_option_group (::GApplication* application, ::GOptionGroup* group);
void base::ApplicationBase::add_option_group (GLib::OptionGroup group) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GOptionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_add_option_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GOptionGroup*) (group_to_c));
}

// void g_application_bind_busy_property (GApplication* application, gpointer object, const gchar* property);
// void g_application_bind_busy_property (::GApplication* application, ::GObject* object, const char* property);
void base::ApplicationBase::bind_busy_property (GObject::Object object, const std::string & property) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_bind_busy_property;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c));
}

// const gchar* g_application_get_application_id (GApplication* application);
// const char* g_application_get_application_id (::GApplication* application);
std::string base::ApplicationBase::get_application_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_application_id;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GDBusConnection* g_application_get_dbus_connection (GApplication* application);
// ::GDBusConnection* g_application_get_dbus_connection (::GApplication* application);
Gio::DBusConnection base::ApplicationBase::get_dbus_connection () noexcept
{
  typedef ::GDBusConnection* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_dbus_connection;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_application_get_dbus_object_path (GApplication* application);
// const char* g_application_get_dbus_object_path (::GApplication* application);
std::string base::ApplicationBase::get_dbus_object_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_dbus_object_path;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GApplicationFlags g_application_get_flags (GApplication* application);
// ::GApplicationFlags g_application_get_flags (::GApplication* application);
Gio::ApplicationFlags base::ApplicationBase::get_flags () noexcept
{
  typedef ::GApplicationFlags (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_flags;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// guint g_application_get_inactivity_timeout (GApplication* application);
// guint g_application_get_inactivity_timeout (::GApplication* application);
guint base::ApplicationBase::get_inactivity_timeout () noexcept
{
  typedef guint (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_inactivity_timeout;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_busy (GApplication* application);
// gboolean g_application_get_is_busy (::GApplication* application);
bool base::ApplicationBase::get_is_busy () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_is_busy;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_registered (GApplication* application);
// gboolean g_application_get_is_registered (::GApplication* application);
bool base::ApplicationBase::get_is_registered () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_is_registered;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// gboolean g_application_get_is_remote (GApplication* application);
// gboolean g_application_get_is_remote (::GApplication* application);
bool base::ApplicationBase::get_is_remote () noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_is_remote;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_application_get_resource_base_path (GApplication* application);
// const char* g_application_get_resource_base_path (::GApplication* application);
std::string base::ApplicationBase::get_resource_base_path () noexcept
{
  typedef const char* (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_get_resource_base_path;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_application_hold (GApplication* application);
// void g_application_hold (::GApplication* application);
void base::ApplicationBase::hold () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_hold;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_mark_busy (GApplication* application);
// void g_application_mark_busy (::GApplication* application);
void base::ApplicationBase::mark_busy () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_mark_busy;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_open (GApplication* application, GFile** files, gint n_files, const gchar* hint);
// void g_application_open (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
void base::ApplicationBase::open (Gio::File * files, gint n_files, const std::string & hint) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_open;
  auto hint_to_c = gi::unwrap (hint, gi::transfer_none, gi::direction_in);
  auto files_i = detail::make_list_unwrap_range (files, n_files, false);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  call_wrap_v ((::GApplication*) (gobj_()), (::GFile**) (files_to_c), (gint) (files_w.size()), (const char*) (hint_to_c));
}

// void g_application_quit (GApplication* application);
// void g_application_quit (::GApplication* application);
void base::ApplicationBase::quit () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_quit;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// gboolean g_application_register (GApplication* application, GCancellable* cancellable, GError ** error);
// gboolean g_application_register (::GApplication* application, ::GCancellable* cancellable, GError ** error);
bool base::ApplicationBase::register_ (Gio::Cancellable cancellable)
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_register;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ApplicationBase::register_ ()
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_register;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ApplicationBase::register_ (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_register;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::ApplicationBase::register_ (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GApplication* application, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_register;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_application_release (GApplication* application);
// void g_application_release (::GApplication* application);
void base::ApplicationBase::release () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_release;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// int g_application_run (GApplication* application, int argc, char** argv);
// gint g_application_run (::GApplication* application, gint argc, char** argv);
gint base::ApplicationBase::run (gint argc, std::string * argv) noexcept
{
  typedef gint (*call_wrap_t) (::GApplication* application, gint argc, char** argv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_run;
  auto argv_i = detail::make_list_unwrap_range (argv, argc, false);
  auto argv_w = unwrap (argv_i, gi::transfer_none, direction_in);
  auto argv_to_c = argv_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (gint) (argv_w.size()), (char**) (argv_to_c));
  return _temp_ret;
}

// void g_application_send_notification (GApplication* application, const gchar* id, GNotification* notification);
// void g_application_send_notification (::GApplication* application, const char* id, ::GNotification* notification);
void base::ApplicationBase::send_notification (const std::string & id, Gio::Notification notification) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id, ::GNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_send_notification;
  auto notification_to_c = gi::unwrap (notification, gi::transfer_none, gi::direction_in);
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c), (::GNotification*) (notification_to_c));
}
void base::ApplicationBase::send_notification (Gio::Notification notification) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id, ::GNotification* notification);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_send_notification;
  auto notification_to_c = gi::unwrap (notification, gi::transfer_none, gi::direction_in);
  auto id_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c), (::GNotification*) (notification_to_c));
}

// void g_application_set_action_group (GApplication* application, GActionGroup* action_group);
// void g_application_set_action_group (::GApplication* application, ::GActionGroup* action_group);
// IGNORE; deprecated

// void g_application_set_application_id (GApplication* application, const gchar* application_id);
// void g_application_set_application_id (::GApplication* application, const char* application_id);
void base::ApplicationBase::set_application_id (const std::string & application_id) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_application_id;
  auto application_id_to_c = gi::unwrap (application_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (application_id_to_c));
}
void base::ApplicationBase::set_application_id () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* application_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_application_id;
  auto application_id_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (application_id_to_c));
}

// void g_application_set_default (GApplication* application);
// void g_application_set_default (::GApplication* application);
void base::ApplicationBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_default;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_set_flags (GApplication* application, GApplicationFlags flags);
// void g_application_set_flags (::GApplication* application, ::GApplicationFlags flags);
void base::ApplicationBase::set_flags (Gio::ApplicationFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GApplicationFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GApplication*) (gobj_()), (::GApplicationFlags) (flags_to_c));
}

// void g_application_set_inactivity_timeout (GApplication* application, guint inactivity_timeout);
// void g_application_set_inactivity_timeout (::GApplication* application, guint inactivity_timeout);
void base::ApplicationBase::set_inactivity_timeout (guint inactivity_timeout) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, guint inactivity_timeout);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_inactivity_timeout;
  auto inactivity_timeout_to_c = inactivity_timeout;
  call_wrap_v ((::GApplication*) (gobj_()), (guint) (inactivity_timeout_to_c));
}

// void g_application_set_option_context_description (GApplication* application, const gchar* description);
// void g_application_set_option_context_description (::GApplication* application, const char* description);
void base::ApplicationBase::set_option_context_description (const std::string & description) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_description;
  auto description_to_c = gi::unwrap (description, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (description_to_c));
}
void base::ApplicationBase::set_option_context_description () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* description);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_description;
  auto description_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (description_to_c));
}

// void g_application_set_option_context_parameter_string (GApplication* application, const gchar* parameter_string);
// void g_application_set_option_context_parameter_string (::GApplication* application, const char* parameter_string);
void base::ApplicationBase::set_option_context_parameter_string (const std::string & parameter_string) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* parameter_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_parameter_string;
  auto parameter_string_to_c = gi::unwrap (parameter_string, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (parameter_string_to_c));
}
void base::ApplicationBase::set_option_context_parameter_string () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* parameter_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_parameter_string;
  auto parameter_string_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (parameter_string_to_c));
}

// void g_application_set_option_context_summary (GApplication* application, const gchar* summary);
// void g_application_set_option_context_summary (::GApplication* application, const char* summary);
void base::ApplicationBase::set_option_context_summary (const std::string & summary) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_summary;
  auto summary_to_c = gi::unwrap (summary, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (summary_to_c));
}
void base::ApplicationBase::set_option_context_summary () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* summary);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_option_context_summary;
  auto summary_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (summary_to_c));
}

// void g_application_set_resource_base_path (GApplication* application, const gchar* resource_path);
// void g_application_set_resource_base_path (::GApplication* application, const char* resource_path);
void base::ApplicationBase::set_resource_base_path (const std::string & resource_path) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_resource_base_path;
  auto resource_path_to_c = gi::unwrap (resource_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (resource_path_to_c));
}
void base::ApplicationBase::set_resource_base_path () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* resource_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_set_resource_base_path;
  auto resource_path_to_c = nullptr;
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (resource_path_to_c));
}

// void g_application_unbind_busy_property (GApplication* application, gpointer object, const gchar* property);
// void g_application_unbind_busy_property (::GApplication* application, ::GObject* object, const char* property);
void base::ApplicationBase::unbind_busy_property (GObject::Object object, const std::string & property) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, ::GObject* object, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_unbind_busy_property;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto object_to_c = gi::unwrap (object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GObject*) (object_to_c), (const char*) (property_to_c));
}

// void g_application_unmark_busy (GApplication* application);
// void g_application_unmark_busy (::GApplication* application);
void base::ApplicationBase::unmark_busy () noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_unmark_busy;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void g_application_withdraw_notification (GApplication* application, const gchar* id);
// void g_application_withdraw_notification (::GApplication* application, const char* id);
void base::ApplicationBase::withdraw_notification (const std::string & id) noexcept
{
  typedef void (*call_wrap_t) (::GApplication* application, const char* id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_application_withdraw_notification;
  auto id_to_c = gi::unwrap (id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (const char*) (id_to_c));
}





// SKIP; glib:signal container parameter not supported




} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/application_extra_def_impl.hpp>)
#include <gio/application_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/application_extra_impl.hpp>)
#include <gio/application_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void ApplicationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GApplicationClass *methods = (::GApplicationClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
  methods->add_platform_data = (decltype (methods->add_platform_data)) detail::method_wrapper<self, void (*) (GLib::VariantBuilder builder), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::add_platform_data_>;
  methods->after_emit = (decltype (methods->after_emit)) detail::method_wrapper<self, void (*) (GLib::Variant platform_data), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::after_emit_>;
  methods->before_emit = (decltype (methods->before_emit)) detail::method_wrapper<self, void (*) (GLib::Variant platform_data), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::before_emit_>;
  methods->command_line = (decltype (methods->command_line)) detail::method_wrapper<self, gint (*) (Gio::ApplicationCommandLine command_line), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::command_line_>;
  methods->dbus_unregister = (decltype (methods->dbus_unregister)) detail::method_wrapper<self, void (*) (Gio::DBusConnection connection, const std::string & object_path), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::dbus_unregister_>;
  methods->handle_local_options = (decltype (methods->handle_local_options)) detail::method_wrapper<self, gint (*) (GLib::VariantDict options), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::handle_local_options_>;
  methods->name_lost = (decltype (methods->name_lost)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::name_lost_>;
  methods->quit_mainloop = (decltype (methods->quit_mainloop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::quit_mainloop_>;
  methods->run_mainloop = (decltype (methods->run_mainloop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::run_mainloop_>;
  methods->shutdown = (decltype (methods->shutdown)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::shutdown_>;
  methods->startup = (decltype (methods->startup)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::startup_>;
}

// void Application::activate (GApplication* application);
// void Application::activate (::GApplication* application);
void ApplicationClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::add_platform_data (GApplication* application, GVariantBuilder* builder);
// void Application::add_platform_data (::GApplication* application, ::GVariantBuilder* builder);
void ApplicationClass::add_platform_data_ (GLib::VariantBuilder builder) noexcept
{
  if (!get_struct_()->add_platform_data) return ;
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariantBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->add_platform_data;
  auto builder_to_c = gi::unwrap (builder, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariantBuilder*) (builder_to_c));
}

// void Application::after_emit (GApplication* application, GVariant* platform_data);
// void Application::after_emit (::GApplication* application, ::GVariant* platform_data);
void ApplicationClass::after_emit_ (GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->after_emit) return ;
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->after_emit;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariant*) (platform_data_to_c));
}

// void Application::before_emit (GApplication* application, GVariant* platform_data);
// void Application::before_emit (::GApplication* application, ::GVariant* platform_data);
void ApplicationClass::before_emit_ (GLib::Variant platform_data) noexcept
{
  if (!get_struct_()->before_emit) return ;
  typedef void (*call_wrap_t) (::GApplication* application, ::GVariant* platform_data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->before_emit;
  auto platform_data_to_c = gi::unwrap (platform_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GVariant*) (platform_data_to_c));
}

// int Application::command_line (GApplication* application, GApplicationCommandLine* command_line);
// gint Application::command_line (::GApplication* application, ::GApplicationCommandLine* command_line);
gint ApplicationClass::command_line_ (Gio::ApplicationCommandLine command_line) noexcept
{
  if (!get_struct_()->command_line) return gint{};
  typedef gint (*call_wrap_t) (::GApplication* application, ::GApplicationCommandLine* command_line);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->command_line;
  auto command_line_to_c = gi::unwrap (command_line, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GApplicationCommandLine*) (command_line_to_c));
  return _temp_ret;
}

// gboolean Application::dbus_register (GApplication* application, GDBusConnection* connection, const gchar* object_path, GError ** error);
// gboolean Application::dbus_register (::GApplication* application, ::GDBusConnection* connection, const char* object_path, GError ** error);
// SKIP; callee GError not supported

// void Application::dbus_unregister (GApplication* application, GDBusConnection* connection, const gchar* object_path);
// void Application::dbus_unregister (::GApplication* application, ::GDBusConnection* connection, const char* object_path);
void ApplicationClass::dbus_unregister_ (Gio::DBusConnection connection, const std::string & object_path) noexcept
{
  if (!get_struct_()->dbus_unregister) return ;
  typedef void (*call_wrap_t) (::GApplication* application, ::GDBusConnection* connection, const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dbus_unregister;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto connection_to_c = gi::unwrap (connection, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GApplication*) (gobj_()), (::GDBusConnection*) (connection_to_c), (const char*) (object_path_to_c));
}

// gint Application::handle_local_options (GApplication* application, GVariantDict* options);
// gint Application::handle_local_options (::GApplication* application, ::GVariantDict* options);
gint ApplicationClass::handle_local_options_ (GLib::VariantDict options) noexcept
{
  if (!get_struct_()->handle_local_options) return gint{};
  typedef gint (*call_wrap_t) (::GApplication* application, ::GVariantDict* options);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->handle_local_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()), (::GVariantDict*) (options_to_c));
  return _temp_ret;
}

// gboolean Application::local_command_line (GApplication* application, gchar*** arguments, int* exit_status);
// gboolean Application::local_command_line (::GApplication* application, char*** arguments, gint* exit_status);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// gboolean Application::name_lost (GApplication* application);
// gboolean Application::name_lost (::GApplication* application);
bool ApplicationClass::name_lost_ () noexcept
{
  if (!get_struct_()->name_lost) return bool{};
  typedef gboolean (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->name_lost;
  auto _temp_ret = call_wrap_v ((::GApplication*) (gobj_()));
  return _temp_ret;
}

// void Application::open (GApplication* application, GFile** files, gint n_files, const gchar* hint);
// void Application::open (::GApplication* application, ::GFile** files, gint n_files, const char* hint);
// SKIP; virtual-method container parameter not supported

// void Application::quit_mainloop (GApplication* application);
// void Application::quit_mainloop (::GApplication* application);
void ApplicationClass::quit_mainloop_ () noexcept
{
  if (!get_struct_()->quit_mainloop) return ;
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->quit_mainloop;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::run_mainloop (GApplication* application);
// void Application::run_mainloop (::GApplication* application);
void ApplicationClass::run_mainloop_ () noexcept
{
  if (!get_struct_()->run_mainloop) return ;
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->run_mainloop;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::shutdown (GApplication* application);
// void Application::shutdown (::GApplication* application);
void ApplicationClass::shutdown_ () noexcept
{
  if (!get_struct_()->shutdown) return ;
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->shutdown;
  call_wrap_v ((::GApplication*) (gobj_()));
}

// void Application::startup (GApplication* application);
// void Application::startup (::GApplication* application);
void ApplicationClass::startup_ () noexcept
{
  if (!get_struct_()->startup) return ;
  typedef void (*call_wrap_t) (::GApplication* application);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->startup;
  call_wrap_v ((::GApplication*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
