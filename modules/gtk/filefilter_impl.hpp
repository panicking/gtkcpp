// AUTO-GENERATED

#ifndef _GI_GTK_FILEFILTER_IMPL_HPP_
#define _GI_GTK_FILEFILTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Buildable FileFilterBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileFilterBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkFileFilter* gtk_file_filter_new ();
// ::GtkFileFilter* gtk_file_filter_new ();
Gtk::FileFilter base::FileFilterBase::new_ () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkFileFilter* gtk_file_filter_new_from_gvariant (GVariant* variant);
// ::GtkFileFilter* gtk_file_filter_new_from_gvariant (::GVariant* variant);
Gtk::FileFilter base::FileFilterBase::new_from_gvariant (GLib::Variant variant) noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::GVariant* variant);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_new_from_gvariant;
  auto variant_to_c = gi::unwrap (variant, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (variant_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_file_filter_add_custom (GtkFileFilter* filter, GtkFileFilterFlags needed, GtkFileFilterFunc func, gpointer data, GDestroyNotify notify);
// void gtk_file_filter_add_custom (::GtkFileFilter* filter, ::GtkFileFilterFlags needed, Gtk::FileFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type notify);
void base::FileFilterBase::add_custom (Gtk::FileFilterFlags needed, Gtk::FileFilterFunc func) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, ::GtkFileFilterFlags needed, Gtk::FileFilterFunc::cfunction_type func, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_add_custom;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  auto needed_to_c = gi::unwrap (needed);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (::GtkFileFilterFlags) (needed_to_c), (Gtk::FileFilterFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr));
}

// void gtk_file_filter_add_mime_type (GtkFileFilter* filter, const gchar* mime_type);
// void gtk_file_filter_add_mime_type (::GtkFileFilter* filter, const char* mime_type);
void base::FileFilterBase::add_mime_type (const std::string & mime_type) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* mime_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_add_mime_type;
  auto mime_type_to_c = gi::unwrap (mime_type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (mime_type_to_c));
}

// void gtk_file_filter_add_pattern (GtkFileFilter* filter, const gchar* pattern);
// void gtk_file_filter_add_pattern (::GtkFileFilter* filter, const char* pattern);
void base::FileFilterBase::add_pattern (const std::string & pattern) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_add_pattern;
  auto pattern_to_c = gi::unwrap (pattern, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (pattern_to_c));
}

// void gtk_file_filter_add_pixbuf_formats (GtkFileFilter* filter);
// void gtk_file_filter_add_pixbuf_formats (::GtkFileFilter* filter);
void base::FileFilterBase::add_pixbuf_formats () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_add_pixbuf_formats;
  call_wrap_v ((::GtkFileFilter*) (gobj_()));
}

// gboolean gtk_file_filter_filter (GtkFileFilter* filter, const GtkFileFilterInfo* filter_info);
// gboolean gtk_file_filter_filter (::GtkFileFilter* filter, const ::GtkFileFilterInfo* filter_info);
bool base::FileFilterBase::filter (const Gtk::FileFilterInfo & filter_info) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFileFilter* filter, const ::GtkFileFilterInfo* filter_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_filter;
  auto filter_info_to_c = gi::unwrap (filter_info, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()), (const ::GtkFileFilterInfo*) (filter_info_to_c));
  return _temp_ret;
}

// const gchar* gtk_file_filter_get_name (GtkFileFilter* filter);
// const char* gtk_file_filter_get_name (::GtkFileFilter* filter);
std::string base::FileFilterBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_get_name;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkFileFilterFlags gtk_file_filter_get_needed (GtkFileFilter* filter);
// ::GtkFileFilterFlags gtk_file_filter_get_needed (::GtkFileFilter* filter);
Gtk::FileFilterFlags base::FileFilterBase::get_needed () noexcept
{
  typedef ::GtkFileFilterFlags (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_get_needed;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_file_filter_set_name (GtkFileFilter* filter, const gchar* name);
// void gtk_file_filter_set_name (::GtkFileFilter* filter, const char* name);
void base::FileFilterBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (name_to_c));
}
void base::FileFilterBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileFilter* filter, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GtkFileFilter*) (gobj_()), (const char*) (name_to_c));
}

// GVariant* gtk_file_filter_to_gvariant (GtkFileFilter* filter);
// ::GVariant* gtk_file_filter_to_gvariant (::GtkFileFilter* filter);
GLib::Variant base::FileFilterBase::to_gvariant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GtkFileFilter* filter);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_filter_to_gvariant;
  auto _temp_ret = call_wrap_v ((::GtkFileFilter*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_def_impl.hpp>)
#include <gtk/filefilter_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filefilter_extra_impl.hpp>)
#include <gtk/filefilter_extra_impl.hpp>
#endif
#endif

#endif
