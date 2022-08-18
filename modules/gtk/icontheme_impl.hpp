// AUTO-GENERATED

#ifndef _GI_GTK_ICONTHEME_IMPL_HPP_
#define _GI_GTK_ICONTHEME_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIconTheme* gtk_icon_theme_new ();
// ::GtkIconTheme* gtk_icon_theme_new ();
Gtk::IconTheme base::IconThemeBase::new_ () noexcept
{
  typedef ::GtkIconTheme* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_icon_theme_add_builtin_icon (const gchar* icon_name, gint size, GdkPixbuf* pixbuf);
// void gtk_icon_theme_add_builtin_icon (const char* icon_name, gint size, ::GdkPixbuf* pixbuf);
// IGNORE; deprecated

// GtkIconTheme* gtk_icon_theme_get_default ();
// ::GtkIconTheme* gtk_icon_theme_get_default ();
Gtk::IconTheme base::IconThemeBase::get_default () noexcept
{
  typedef ::GtkIconTheme* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkIconTheme* gtk_icon_theme_get_for_screen (GdkScreen* screen);
// ::GtkIconTheme* gtk_icon_theme_get_for_screen (::GdkScreen* screen);
Gtk::IconTheme base::IconThemeBase::get_for_screen (Gdk::Screen screen) noexcept
{
  typedef ::GtkIconTheme* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_get_for_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (screen_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_icon_theme_add_resource_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_add_resource_path (::GtkIconTheme* icon_theme, const char* path);
void base::IconThemeBase::add_resource_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_add_resource_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (path_to_c));
}

// void gtk_icon_theme_append_search_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_append_search_path (::GtkIconTheme* icon_theme, const char* path);
void base::IconThemeBase::append_search_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_append_search_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (path_to_c));
}

// GtkIconInfo* gtk_icon_theme_choose_icon (GtkIconTheme* icon_theme, const gchar** icon_names, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_choose_icon (::GtkIconTheme* icon_theme, const char** icon_names, gint size, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::choose_icon (const std::vector<std::string> & icon_names, gint size, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char** icon_names, gint size, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_choose_icon;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto icon_names_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (icon_names);
  auto icon_names_w = unwrap (icon_names_i, gi::transfer_none, direction_in);
  auto icon_names_to_c = icon_names_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char**) (icon_names_to_c), (gint) (size_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_theme_choose_icon_for_scale (GtkIconTheme* icon_theme, const gchar** icon_names, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_choose_icon_for_scale (::GtkIconTheme* icon_theme, const char** icon_names, gint size, gint scale, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::choose_icon_for_scale (const std::vector<std::string> & icon_names, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char** icon_names, gint size, gint scale, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_choose_icon_for_scale;
  auto flags_to_c = gi::unwrap (flags);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_names_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (icon_names);
  auto icon_names_w = unwrap (icon_names_i, gi::transfer_none, direction_in);
  auto icon_names_to_c = icon_names_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char**) (icon_names_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* gtk_icon_theme_get_example_icon_name (GtkIconTheme* icon_theme);
// char* gtk_icon_theme_get_example_icon_name (::GtkIconTheme* icon_theme);
std::string base::IconThemeBase::get_example_icon_name () noexcept
{
  typedef char* (*call_wrap_t) (::GtkIconTheme* icon_theme);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_get_example_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gint* gtk_icon_theme_get_icon_sizes (GtkIconTheme* icon_theme, const gchar* icon_name);
// gint* gtk_icon_theme_get_icon_sizes (::GtkIconTheme* icon_theme, const char* icon_name);
std::vector<gint> base::IconThemeBase::get_icon_sizes (const std::string & icon_name) noexcept
{
  typedef gint* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_get_icon_sizes;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c));
  return gi::detail::wrap_list<gint> (_temp_ret, gi::transfer_full);
}

// void gtk_icon_theme_get_search_path (GtkIconTheme* icon_theme, gchar*** path, gint* n_elements);
// void gtk_icon_theme_get_search_path (::GtkIconTheme* icon_theme, char*** path, gint* n_elements);
void base::IconThemeBase::get_search_path (std::vector<std::string> & path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, char*** path, gint* n_elements);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_get_search_path;
  typedef std::string path_cpptype;
  typedef traits::ctype<path_cpptype>::type path_ctype;
  path_ctype *path_o;
  gint n_elements;
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (char***) ((char***) &path_o), (gint*) (&n_elements));
  path.resize(n_elements);
  detail::wrap_array (path_o, gi::transfer_full, n_elements, path.data());
  g_free (path_o);
}

// gboolean gtk_icon_theme_has_icon (GtkIconTheme* icon_theme, const gchar* icon_name);
// gboolean gtk_icon_theme_has_icon (::GtkIconTheme* icon_theme, const char* icon_name);
bool base::IconThemeBase::has_icon (const std::string & icon_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_has_icon;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c));
  return _temp_ret;
}

// GList* gtk_icon_theme_list_contexts (GtkIconTheme* icon_theme);
// ::GList* gtk_icon_theme_list_contexts (::GtkIconTheme* icon_theme);
std::vector<std::string> base::IconThemeBase::list_contexts () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkIconTheme* icon_theme);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_list_contexts;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GList* gtk_icon_theme_list_icons (GtkIconTheme* icon_theme, const gchar* context);
// ::GList* gtk_icon_theme_list_icons (::GtkIconTheme* icon_theme, const char* context);
std::vector<std::string> base::IconThemeBase::list_icons (const std::string & context) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_list_icons;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (context_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::vector<std::string> base::IconThemeBase::list_icons () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_list_icons;
  auto context_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (context_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// GdkPixbuf* gtk_icon_theme_load_icon (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, GtkIconLookupFlags flags, GError ** error);
// ::GdkPixbuf* gtk_icon_theme_load_icon (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags, GError ** error);
GdkPixbuf::Pixbuf base::IconThemeBase::load_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_icon;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (::GtkIconLookupFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconThemeBase::load_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_icon;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (::GtkIconLookupFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbuf* gtk_icon_theme_load_icon_for_scale (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GtkIconLookupFlags flags, GError ** error);
// ::GdkPixbuf* gtk_icon_theme_load_icon_for_scale (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags, GError ** error);
GdkPixbuf::Pixbuf base::IconThemeBase::load_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_icon_for_scale;
  auto flags_to_c = gi::unwrap (flags);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkIconLookupFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconThemeBase::load_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_icon_for_scale;
  auto flags_to_c = gi::unwrap (flags);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkIconLookupFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gtk_icon_theme_load_surface (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GdkWindow* for_window, GtkIconLookupFlags flags, GError ** error);
// ::cairo_surface_t* gtk_icon_theme_load_surface (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
cairo::Surface base::IconThemeBase::load_surface (const std::string & icon_name, gint size, gint scale, Gdk::Window for_window, Gtk::IconLookupFlags flags)
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_surface;
  auto flags_to_c = gi::unwrap (flags);
  auto for_window_to_c = gi::unwrap (for_window, gi::transfer_none, gi::direction_in);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c), (::GtkIconLookupFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconThemeBase::load_surface (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags)
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_surface;
  auto flags_to_c = gi::unwrap (flags);
  auto for_window_to_c = nullptr;
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c), (::GtkIconLookupFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconThemeBase::load_surface (const std::string & icon_name, gint size, gint scale, Gdk::Window for_window, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_surface;
  auto flags_to_c = gi::unwrap (flags);
  auto for_window_to_c = gi::unwrap (for_window, gi::transfer_none, gi::direction_in);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c), (::GtkIconLookupFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconThemeBase::load_surface (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags, GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GdkWindow* for_window, ::GtkIconLookupFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_load_surface;
  auto flags_to_c = gi::unwrap (flags);
  auto for_window_to_c = nullptr;
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c), (::GtkIconLookupFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_theme_lookup_by_gicon (GtkIconTheme* icon_theme, GIcon* icon, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_by_gicon (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::lookup_by_gicon (Gio::Icon icon, gint size, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_lookup_by_gicon;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (::GIcon*) (icon_to_c), (gint) (size_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_theme_lookup_by_gicon_for_scale (GtkIconTheme* icon_theme, GIcon* icon, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_by_gicon_for_scale (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, gint scale, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::lookup_by_gicon_for_scale (Gio::Icon icon, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, ::GIcon* icon, gint size, gint scale, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_lookup_by_gicon_for_scale;
  auto flags_to_c = gi::unwrap (flags);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (::GIcon*) (icon_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_theme_lookup_icon (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_icon (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::lookup_icon (const std::string & icon_name, gint size, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_lookup_icon;
  auto flags_to_c = gi::unwrap (flags);
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_theme_lookup_icon_for_scale (GtkIconTheme* icon_theme, const gchar* icon_name, gint size, gint scale, GtkIconLookupFlags flags);
// ::GtkIconInfo* gtk_icon_theme_lookup_icon_for_scale (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags);
Gtk::IconInfo base::IconThemeBase::lookup_icon_for_scale (const std::string & icon_name, gint size, gint scale, Gtk::IconLookupFlags flags) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* icon_name, gint size, gint scale, ::GtkIconLookupFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_lookup_icon_for_scale;
  auto flags_to_c = gi::unwrap (flags);
  auto scale_to_c = scale;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (icon_name_to_c), (gint) (size_to_c), (gint) (scale_to_c), (::GtkIconLookupFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_icon_theme_prepend_search_path (GtkIconTheme* icon_theme, const gchar* path);
// void gtk_icon_theme_prepend_search_path (::GtkIconTheme* icon_theme, const char* path);
void base::IconThemeBase::prepend_search_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_prepend_search_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (path_to_c));
}

// gboolean gtk_icon_theme_rescan_if_needed (GtkIconTheme* icon_theme);
// gboolean gtk_icon_theme_rescan_if_needed (::GtkIconTheme* icon_theme);
bool base::IconThemeBase::rescan_if_needed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconTheme* icon_theme);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_rescan_if_needed;
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (gobj_()));
  return _temp_ret;
}

// void gtk_icon_theme_set_custom_theme (GtkIconTheme* icon_theme, const gchar* theme_name);
// void gtk_icon_theme_set_custom_theme (::GtkIconTheme* icon_theme, const char* theme_name);
void base::IconThemeBase::set_custom_theme (const std::string & theme_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* theme_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_set_custom_theme;
  auto theme_name_to_c = gi::unwrap (theme_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (theme_name_to_c));
}
void base::IconThemeBase::set_custom_theme () noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char* theme_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_set_custom_theme;
  auto theme_name_to_c = nullptr;
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char*) (theme_name_to_c));
}

// void gtk_icon_theme_set_screen (GtkIconTheme* icon_theme, GdkScreen* screen);
// void gtk_icon_theme_set_screen (::GtkIconTheme* icon_theme, ::GdkScreen* screen);
void base::IconThemeBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (::GdkScreen*) (screen_to_c));
}

// void gtk_icon_theme_set_search_path (GtkIconTheme* icon_theme, const gchar** path, gint n_elements);
// void gtk_icon_theme_set_search_path (::GtkIconTheme* icon_theme, const char** path, gint n_elements);
void base::IconThemeBase::set_search_path (std::string * path, gint n_elements) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme, const char** path, gint n_elements);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_theme_set_search_path;
  auto path_i = detail::make_list_unwrap_range (path, n_elements, false);
  auto path_w = unwrap (path_i, gi::transfer_none, direction_in);
  auto path_to_c = path_w.gobj_(false);
  call_wrap_v ((::GtkIconTheme*) (gobj_()), (const char**) (path_to_c), (gint) (path_w.size()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_def_impl.hpp>)
#include <gtk/icontheme_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/icontheme_extra_impl.hpp>)
#include <gtk/icontheme_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void IconThemeClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkIconThemeClass *methods = (::GtkIconThemeClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
}

// void IconTheme::changed (GtkIconTheme* icon_theme);
// void IconTheme::changed (::GtkIconTheme* icon_theme);
void IconThemeClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkIconTheme* icon_theme);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkIconTheme*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
