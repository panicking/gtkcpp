// AUTO-GENERATED

#ifndef _GI_GTK_ACCELMAP_IMPL_HPP_
#define _GI_GTK_ACCELMAP_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_accel_map_add_entry (const gchar* accel_path, guint accel_key, GdkModifierType accel_mods);
// void gtk_accel_map_add_entry (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods);
void base::AccelMapBase::add_entry (const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods) noexcept
{
  typedef void (*call_wrap_t) (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_add_entry;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accel_path_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c));
}

// void gtk_accel_map_add_filter (const gchar* filter_pattern);
// void gtk_accel_map_add_filter (const char* filter_pattern);
void base::AccelMapBase::add_filter (const std::string & filter_pattern) noexcept
{
  typedef void (*call_wrap_t) (const char* filter_pattern);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_add_filter;
  auto filter_pattern_to_c = gi::unwrap (filter_pattern, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (filter_pattern_to_c));
}

// gboolean gtk_accel_map_change_entry (const gchar* accel_path, guint accel_key, GdkModifierType accel_mods, gboolean replace);
// gboolean gtk_accel_map_change_entry (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods, gboolean replace);
bool base::AccelMapBase::change_entry (const std::string & accel_path, guint accel_key, Gdk::ModifierType accel_mods, gboolean replace) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accel_path, guint accel_key, ::GdkModifierType accel_mods, gboolean replace);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_change_entry;
  auto replace_to_c = replace;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (accel_path_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c), (gboolean) (replace_to_c));
  return _temp_ret;
}

// void gtk_accel_map_foreach (gpointer data, GtkAccelMapForeach foreach_func);
// void gtk_accel_map_foreach (void* data,  foreach_func);
// SKIP; foreach_func type  not supported

// void gtk_accel_map_foreach_unfiltered (gpointer data, GtkAccelMapForeach foreach_func);
// void gtk_accel_map_foreach_unfiltered (void* data,  foreach_func);
// SKIP; foreach_func type  not supported

// GtkAccelMap* gtk_accel_map_get ();
// ::GtkAccelMap* gtk_accel_map_get ();
Gtk::AccelMap base::AccelMapBase::get () noexcept
{
  typedef ::GtkAccelMap* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_accel_map_load (const gchar* file_name);
// void gtk_accel_map_load (const char* file_name);
void base::AccelMapBase::load (const std::string & file_name) noexcept
{
  typedef void (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_load;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (file_name_to_c));
}

// void gtk_accel_map_load_fd (gint fd);
// void gtk_accel_map_load_fd (gint fd);
void base::AccelMapBase::load_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_load_fd;
  auto fd_to_c = fd;
  call_wrap_v ((gint) (fd_to_c));
}

// void gtk_accel_map_load_scanner (GScanner* scanner);
// void gtk_accel_map_load_scanner (::GScanner* scanner);
void base::AccelMapBase::load_scanner (GLib::Scanner scanner) noexcept
{
  typedef void (*call_wrap_t) (::GScanner* scanner);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_load_scanner;
  auto scanner_to_c = gi::unwrap (scanner, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GScanner*) (scanner_to_c));
}

// void gtk_accel_map_lock_path (const gchar* accel_path);
// void gtk_accel_map_lock_path (const char* accel_path);
void base::AccelMapBase::lock_path (const std::string & accel_path) noexcept
{
  typedef void (*call_wrap_t) (const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_lock_path;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accel_path_to_c));
}

// gboolean gtk_accel_map_lookup_entry (const gchar* accel_path, GtkAccelKey* key);
// gboolean gtk_accel_map_lookup_entry (const char* accel_path, ::GtkAccelKey* key);
bool base::AccelMapBase::lookup_entry (const std::string & accel_path, Gtk::AccelKey * key) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accel_path, ::GtkAccelKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_lookup_entry;
  traits::unset_wrapper<::GtkAccelKey>::type key_c;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (accel_path_to_c), (::GtkAccelKey*) (key ? (::GtkAccelKey*) &key_c : nullptr));
  if (key) *key = gi::wrap ((::GtkAccelKey*) &key_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gtk::AccelKey> base::AccelMapBase::lookup_entry (const std::string & accel_path) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* accel_path, ::GtkAccelKey* key);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_lookup_entry;
  traits::unset_wrapper<::GtkAccelKey>::type key_c;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (accel_path_to_c), (::GtkAccelKey*) ((::GtkAccelKey*) &key_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GtkAccelKey*) &key_c, gi::transfer_none, gi::direction_out));
}

// void gtk_accel_map_save (const gchar* file_name);
// void gtk_accel_map_save (const char* file_name);
void base::AccelMapBase::save (const std::string & file_name) noexcept
{
  typedef void (*call_wrap_t) (const char* file_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_save;
  auto file_name_to_c = gi::unwrap (file_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (file_name_to_c));
}

// void gtk_accel_map_save_fd (gint fd);
// void gtk_accel_map_save_fd (gint fd);
void base::AccelMapBase::save_fd (gint fd) noexcept
{
  typedef void (*call_wrap_t) (gint fd);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_save_fd;
  auto fd_to_c = fd;
  call_wrap_v ((gint) (fd_to_c));
}

// void gtk_accel_map_unlock_path (const gchar* accel_path);
// void gtk_accel_map_unlock_path (const char* accel_path);
void base::AccelMapBase::unlock_path (const std::string & accel_path) noexcept
{
  typedef void (*call_wrap_t) (const char* accel_path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_accel_map_unlock_path;
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (accel_path_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/accelmap_extra_def_impl.hpp>)
#include <gtk/accelmap_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/accelmap_extra_impl.hpp>)
#include <gtk/accelmap_extra_impl.hpp>
#endif
#endif

#endif
