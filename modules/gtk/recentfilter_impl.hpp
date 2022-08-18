// AUTO-GENERATED

#ifndef _GI_GTK_RECENTFILTER_IMPL_HPP_
#define _GI_GTK_RECENTFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable RecentFilterBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RecentFilterBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkRecentFilter* gtk_recent_filter_new ();
// ::GtkRecentFilter* gtk_recent_filter_new ();
Gtk::RecentFilter base::RecentFilterBase::new_ () noexcept
{
  typedef ::GtkRecentFilter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_recent_filter_add_age (GtkRecentFilter* filter, gint days);
// void gtk_recent_filter_add_age (::GtkRecentFilter* filter, gint days);
void base::RecentFilterBase::add_age (gint days) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, gint days);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_age;
  auto days_to_c = days;
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (gint) (days_to_c));
}

// void gtk_recent_filter_add_application (GtkRecentFilter* filter, const gchar* application);
// void gtk_recent_filter_add_application (::GtkRecentFilter* filter, const char* application);
void base::RecentFilterBase::add_application (const std::string & application) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, const char* application);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_application;
  auto application_to_c = gi::unwrap (application, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const char*) (application_to_c));
}

// void gtk_recent_filter_add_custom (GtkRecentFilter* filter, GtkRecentFilterFlags needed, GtkRecentFilterFunc func, gpointer data, GDestroyNotify data_destroy);
// void gtk_recent_filter_add_custom (::GtkRecentFilter* filter, ::GtkRecentFilterFlags needed, Gtk::RecentFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type data_destroy);
void base::RecentFilterBase::add_custom (Gtk::RecentFilterFlags needed, Gtk::RecentFilterFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, ::GtkRecentFilterFlags needed, Gtk::RecentFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type data_destroy);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_custom;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto needed_to_c = gi::unwrap (needed);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (::GtkRecentFilterFlags) (needed_to_c), (Gtk::RecentFilterFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_recent_filter_add_group (GtkRecentFilter* filter, const gchar* group);
// void gtk_recent_filter_add_group (::GtkRecentFilter* filter, const char* group);
void base::RecentFilterBase::add_group (const std::string & group) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, const char* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const char*) (group_to_c));
}

// void gtk_recent_filter_add_mime_type (GtkRecentFilter* filter, const gchar* mime_type);
// void gtk_recent_filter_add_mime_type (::GtkRecentFilter* filter, const char* mime_type);
void base::RecentFilterBase::add_mime_type (const std::string & mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const char*) (mime_type_to_c));
}

// void gtk_recent_filter_add_pattern (GtkRecentFilter* filter, const gchar* pattern);
// void gtk_recent_filter_add_pattern (::GtkRecentFilter* filter, const char* pattern);
void base::RecentFilterBase::add_pattern (const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_pattern;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const char*) (pattern_to_c));
}

// void gtk_recent_filter_add_pixbuf_formats (GtkRecentFilter* filter);
// void gtk_recent_filter_add_pixbuf_formats (::GtkRecentFilter* filter);
void base::RecentFilterBase::add_pixbuf_formats () noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_add_pixbuf_formats;
  call_wrap_v ((::GtkRecentFilter*) (gobj_()));
}

// gboolean gtk_recent_filter_filter (GtkRecentFilter* filter, const GtkRecentFilterInfo* filter_info);
// gboolean gtk_recent_filter_filter (::GtkRecentFilter* filter, const ::GtkRecentFilterInfo* filter_info);
bool base::RecentFilterBase::filter (const Gtk::RecentFilterInfo & filter_info) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkRecentFilter* filter, const ::GtkRecentFilterInfo* filter_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_filter;
  auto filter_info_to_c = gi::unwrap (filter_info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const ::GtkRecentFilterInfo*) (filter_info_to_c));
  return _temp_ret;
}

// const gchar* gtk_recent_filter_get_name (GtkRecentFilter* filter);
// const char* gtk_recent_filter_get_name (::GtkRecentFilter* filter);
std::string base::RecentFilterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_get_name;
  auto _temp_ret = call_wrap_v ((::GtkRecentFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkRecentFilterFlags gtk_recent_filter_get_needed (GtkRecentFilter* filter);
// ::GtkRecentFilterFlags gtk_recent_filter_get_needed (::GtkRecentFilter* filter);
Gtk::RecentFilterFlags base::RecentFilterBase::get_needed () noexcept
{
  typedef ::GtkRecentFilterFlags (*call_wrap_t) (::GtkRecentFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_get_needed;
  auto _temp_ret = call_wrap_v ((::GtkRecentFilter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_recent_filter_set_name (GtkRecentFilter* filter, const gchar* name);
// void gtk_recent_filter_set_name (::GtkRecentFilter* filter, const char* name);
void base::RecentFilterBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkRecentFilter* filter, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_recent_filter_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkRecentFilter*) (gobj_()), (const char*) (name_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentfilter_extra_def_impl.hpp>)
#include <gtk/recentfilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentfilter_extra_impl.hpp>)
#include <gtk/recentfilter_extra_impl.hpp>
#endif
#endif

#endif
