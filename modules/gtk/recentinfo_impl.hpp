// AUTO-GENERATED

#ifndef _GI_GTK_RECENTINFO_IMPL_HPP_
#define _GI_GTK_RECENTINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GAppInfo* gtk_recent_info_create_app_info (GtkRecentInfo* info, const gchar* app_name, GError ** error);
// ::GAppInfo* gtk_recent_info_create_app_info (::GtkRecentInfo* info, const char* app_name, GError ** error);
Gio::AppInfo base::RecentInfoBase::create_app_info (const std::string & app_name)
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_create_app_info;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::RecentInfoBase::create_app_info ()
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_create_app_info;
  auto app_name_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::RecentInfoBase::create_app_info (const std::string & app_name, GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_create_app_info;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::AppInfo base::RecentInfoBase::create_app_info (GLib::Error * _error) noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_create_app_info;
  auto app_name_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_recent_info_exists (GtkRecentInfo* info);
// gboolean gtk_recent_info_exists (::GtkRecentInfo* info);
bool base::RecentInfoBase::exists () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_exists;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// time_t gtk_recent_info_get_added (GtkRecentInfo* info);
// glong gtk_recent_info_get_added (::GtkRecentInfo* info);
glong base::RecentInfoBase::get_added () noexcept
{
  typedef glong (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_added;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gint gtk_recent_info_get_age (GtkRecentInfo* info);
// gint gtk_recent_info_get_age (::GtkRecentInfo* info);
gint base::RecentInfoBase::get_age () noexcept
{
  typedef gint (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_age;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_info_get_application_info (GtkRecentInfo* info, const gchar* app_name, const gchar** app_exec, guint* count, time_t* time_);
// gboolean gtk_recent_info_get_application_info (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, glong* time_);
bool base::RecentInfoBase::get_application_info (const std::string & app_name, std::string & app_exec, guint & count, glong & time_) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, glong* time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_application_info;
  glong time__o {};
  guint count_o {};
  const char* app_exec_o {};
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), (const char**) (&app_exec_o), (guint*) (&count_o), (glong*) (&time__o));
  time_ = time__o;
  count = count_o;
  app_exec = gi::wrap (app_exec_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string, guint, glong> base::RecentInfoBase::get_application_info (const std::string & app_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name, const char** app_exec, guint* count, glong* time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_application_info;
  glong time__o {};
  guint count_o {};
  const char* app_exec_o {};
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c), (const char**) (&app_exec_o), (guint*) (&count_o), (glong*) (&time__o));
  return std::make_tuple (_temp_ret, gi::wrap (app_exec_o, gi::transfer_none, gi::direction_out), count_o, time__o);
}

// gchar** gtk_recent_info_get_applications (GtkRecentInfo* info, gsize* length);
// char** gtk_recent_info_get_applications (::GtkRecentInfo* info, gsize* length);
std::vector<std::string> base::RecentInfoBase::get_applications (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_applications;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::RecentInfoBase::get_applications () noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_applications;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// const gchar* gtk_recent_info_get_description (GtkRecentInfo* info);
// const char* gtk_recent_info_get_description (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_description () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_description;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_recent_info_get_display_name (GtkRecentInfo* info);
// const char* gtk_recent_info_get_display_name (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_display_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_display_name;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GIcon* gtk_recent_info_get_gicon (GtkRecentInfo* info);
// ::GIcon* gtk_recent_info_get_gicon (::GtkRecentInfo* info);
Gio::Icon base::RecentInfoBase::get_gicon () noexcept
{
  typedef ::GIcon* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_gicon;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar** gtk_recent_info_get_groups (GtkRecentInfo* info, gsize* length);
// char** gtk_recent_info_get_groups (::GtkRecentInfo* info, gsize* length);
std::vector<std::string> base::RecentInfoBase::get_groups (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::RecentInfoBase::get_groups () noexcept
{
  typedef char** (*call_wrap_t) (::GtkRecentInfo* info, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_groups;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// GdkPixbuf* gtk_recent_info_get_icon (GtkRecentInfo* info, gint size);
// ::GdkPixbuf* gtk_recent_info_get_icon (::GtkRecentInfo* info, gint size);
GdkPixbuf::Pixbuf base::RecentInfoBase::get_icon (gint size) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkRecentInfo* info, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_icon;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gtk_recent_info_get_mime_type (GtkRecentInfo* info);
// const char* gtk_recent_info_get_mime_type (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_mime_type () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_mime_type;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// time_t gtk_recent_info_get_modified (GtkRecentInfo* info);
// glong gtk_recent_info_get_modified (::GtkRecentInfo* info);
glong base::RecentInfoBase::get_modified () noexcept
{
  typedef glong (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_modified;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_info_get_private_hint (GtkRecentInfo* info);
// gboolean gtk_recent_info_get_private_hint (::GtkRecentInfo* info);
bool base::RecentInfoBase::get_private_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_private_hint;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_recent_info_get_short_name (GtkRecentInfo* info);
// char* gtk_recent_info_get_short_name (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_short_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_short_name;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar* gtk_recent_info_get_uri (GtkRecentInfo* info);
// const char* gtk_recent_info_get_uri (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_uri;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* gtk_recent_info_get_uri_display (GtkRecentInfo* info);
// char* gtk_recent_info_get_uri_display (::GtkRecentInfo* info);
std::string base::RecentInfoBase::get_uri_display () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_uri_display;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// time_t gtk_recent_info_get_visited (GtkRecentInfo* info);
// glong gtk_recent_info_get_visited (::GtkRecentInfo* info);
glong base::RecentInfoBase::get_visited () noexcept
{
  typedef glong (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_get_visited;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_recent_info_has_application (GtkRecentInfo* info, const gchar* app_name);
// gboolean gtk_recent_info_has_application (::GtkRecentInfo* info, const char* app_name);
bool base::RecentInfoBase::has_application (const std::string & app_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* app_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_has_application;
  auto app_name_to_c = gi::unwrap (app_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (app_name_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_info_has_group (GtkRecentInfo* info, const gchar* group_name);
// gboolean gtk_recent_info_has_group (::GtkRecentInfo* info, const char* group_name);
bool base::RecentInfoBase::has_group (const std::string & group_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info, const char* group_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_has_group;
  auto group_name_to_c = gi::unwrap (group_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (const char*) (group_name_to_c));
  return _temp_ret;
}

// gboolean gtk_recent_info_is_local (GtkRecentInfo* info);
// gboolean gtk_recent_info_is_local (::GtkRecentInfo* info);
bool base::RecentInfoBase::is_local () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_is_local;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return _temp_ret;
}

// gchar* gtk_recent_info_last_application (GtkRecentInfo* info);
// char* gtk_recent_info_last_application (::GtkRecentInfo* info);
std::string base::RecentInfoBase::last_application () noexcept
{
  typedef char* (*call_wrap_t) (::GtkRecentInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_last_application;
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gtk_recent_info_match (GtkRecentInfo* info_a, GtkRecentInfo* info_b);
// gboolean gtk_recent_info_match (::GtkRecentInfo* info_a, ::GtkRecentInfo* info_b);
bool base::RecentInfoBase::match (Gtk::RecentInfo info_b) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentInfo* info_a, ::GtkRecentInfo* info_b);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_info_match;
  auto info_b_to_c = gi::unwrap (info_b, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentInfo*) (gobj_()), (::GtkRecentInfo*) (info_b_to_c));
  return _temp_ret;
}

// GtkRecentInfo* gtk_recent_info_ref (GtkRecentInfo* info);
// ::GtkRecentInfo* gtk_recent_info_ref (::GtkRecentInfo* info);
// IGNORE; marked ignore

// void gtk_recent_info_unref (GtkRecentInfo* info);
// void gtk_recent_info_unref (::GtkRecentInfo* info);
// IGNORE; marked ignore


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_def_impl.hpp>)
#include <gtk/recentinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentinfo_extra_impl.hpp>)
#include <gtk/recentinfo_extra_impl.hpp>
#endif
#endif

#endif
