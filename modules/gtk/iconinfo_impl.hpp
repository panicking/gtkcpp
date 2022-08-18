// AUTO-GENERATED

#ifndef _GI_GTK_ICONINFO_IMPL_HPP_
#define _GI_GTK_ICONINFO_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkIconInfo* gtk_icon_info_new_for_pixbuf (GtkIconTheme* icon_theme, GdkPixbuf* pixbuf);
// ::GtkIconInfo* gtk_icon_info_new_for_pixbuf (::GtkIconTheme* icon_theme, ::GdkPixbuf* pixbuf);
Gtk::IconInfo base::IconInfoBase::new_for_pixbuf (Gtk::IconTheme icon_theme, GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef ::GtkIconInfo* (*call_wrap_t) (::GtkIconTheme* icon_theme, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_new_for_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto icon_theme_to_c = gi::unwrap (icon_theme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkIconTheme*) (icon_theme_to_c), (::GdkPixbuf*) (pixbuf_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkIconInfo* gtk_icon_info_copy (GtkIconInfo* icon_info);
// ::GtkIconInfo* gtk_icon_info_copy (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// void gtk_icon_info_free (GtkIconInfo* icon_info);
// void gtk_icon_info_free (::GtkIconInfo* icon_info);
// IGNORE; marked ignore

// gboolean gtk_icon_info_get_attach_points (GtkIconInfo* icon_info, GdkPoint** points, gint* n_points);
// gboolean gtk_icon_info_get_attach_points (::GtkIconInfo* icon_info, ::GdkPoint*** points, gint* n_points);
// IGNORE; deprecated

// gint gtk_icon_info_get_base_scale (GtkIconInfo* icon_info);
// gint gtk_icon_info_get_base_scale (::GtkIconInfo* icon_info);
gint base::IconInfoBase::get_base_scale () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconInfo* icon_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_get_base_scale;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()));
  return _temp_ret;
}

// gint gtk_icon_info_get_base_size (GtkIconInfo* icon_info);
// gint gtk_icon_info_get_base_size (::GtkIconInfo* icon_info);
gint base::IconInfoBase::get_base_size () noexcept
{
  typedef gint (*call_wrap_t) (::GtkIconInfo* icon_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_get_base_size;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gtk_icon_info_get_builtin_pixbuf (GtkIconInfo* icon_info);
// ::GdkPixbuf* gtk_icon_info_get_builtin_pixbuf (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// const gchar* gtk_icon_info_get_display_name (GtkIconInfo* icon_info);
// const char* gtk_icon_info_get_display_name (::GtkIconInfo* icon_info);
// IGNORE; deprecated

// gboolean gtk_icon_info_get_embedded_rect (GtkIconInfo* icon_info, GdkRectangle* rectangle);
// gboolean gtk_icon_info_get_embedded_rect (::GtkIconInfo* icon_info, ::GdkRectangle* rectangle);
// IGNORE; deprecated

// const gchar* gtk_icon_info_get_filename (GtkIconInfo* icon_info);
// const char* gtk_icon_info_get_filename (::GtkIconInfo* icon_info);
std::string base::IconInfoBase::get_filename () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkIconInfo* icon_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_get_filename;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_icon_info_is_symbolic (GtkIconInfo* icon_info);
// gboolean gtk_icon_info_is_symbolic (::GtkIconInfo* icon_info);
bool base::IconInfoBase::is_symbolic () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkIconInfo* icon_info);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_is_symbolic;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()));
  return _temp_ret;
}

// GdkPixbuf* gtk_icon_info_load_icon (GtkIconInfo* icon_info, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_icon (::GtkIconInfo* icon_info, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_icon ()
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_icon (GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_icon_info_load_icon_async (GtkIconInfo* icon_info, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_icon_async (::GtkIconInfo* icon_info, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::IconInfoBase::load_icon_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IconInfoBase::load_icon_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkPixbuf* gtk_icon_info_load_icon_finish (GtkIconInfo* icon_info, GAsyncResult* res, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_icon_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_icon_finish (Gio::AsyncResult res)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_icon_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_icon_finish;
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gtk_icon_info_load_surface (GtkIconInfo* icon_info, GdkWindow* for_window, GError ** error);
// ::cairo_surface_t* gtk_icon_info_load_surface (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
cairo::Surface base::IconInfoBase::load_surface (Gdk::Window for_window)
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_surface;
  auto for_window_to_c = gi::unwrap (for_window, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GdkWindow*) (for_window_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconInfoBase::load_surface ()
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_surface;
  auto for_window_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GdkWindow*) (for_window_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconInfoBase::load_surface (Gdk::Window for_window, GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_surface;
  auto for_window_to_c = gi::unwrap (for_window, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GdkWindow*) (for_window_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::IconInfoBase::load_surface (GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GdkWindow* for_window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_surface;
  auto for_window_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GdkWindow*) (for_window_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbuf* gtk_icon_info_load_symbolic (GtkIconInfo* icon_info, const GdkRGBA* fg, const GdkRGBA* success_color, const GdkRGBA* warning_color, const GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, bool * was_symbolic)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = gi::unwrap (error_color, gi::transfer_none, gi::direction_in);
  auto warning_color_to_c = gi::unwrap (warning_color, gi::transfer_none, gi::direction_in);
  auto success_color_to_c = gi::unwrap (success_color, gi::transfer_none, gi::direction_in);
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), &error);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, bool * was_symbolic)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = nullptr;
  auto warning_color_to_c = nullptr;
  auto success_color_to_c = nullptr;
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), &error);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, bool * was_symbolic, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = gi::unwrap (error_color, gi::transfer_none, gi::direction_in);
  auto warning_color_to_c = gi::unwrap (warning_color, gi::transfer_none, gi::direction_in);
  auto success_color_to_c = gi::unwrap (success_color, gi::transfer_none, gi::direction_in);
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), _error ? &_error_o : nullptr);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, bool * was_symbolic, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = nullptr;
  auto warning_color_to_c = nullptr;
  auto success_color_to_c = nullptr;
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), _error ? &_error_o : nullptr);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = gi::unwrap (error_color, gi::transfer_none, gi::direction_in);
  auto warning_color_to_c = gi::unwrap (warning_color, gi::transfer_none, gi::direction_in);
  auto success_color_to_c = gi::unwrap (success_color, gi::transfer_none, gi::direction_in);
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (&was_symbolic_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = nullptr;
  auto warning_color_to_c = nullptr;
  auto success_color_to_c = nullptr;
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (&was_symbolic_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = gi::unwrap (error_color, gi::transfer_none, gi::direction_in);
  auto warning_color_to_c = gi::unwrap (warning_color, gi::transfer_none, gi::direction_in);
  auto success_color_to_c = gi::unwrap (success_color, gi::transfer_none, gi::direction_in);
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (&was_symbolic_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic (const Gdk::RGBA & fg, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic;
  gboolean was_symbolic_o {};
  auto error_color_to_c = nullptr;
  auto warning_color_to_c = nullptr;
  auto success_color_to_c = nullptr;
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (gboolean*) (&was_symbolic_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}

// void gtk_icon_info_load_symbolic_async (GtkIconInfo* icon_info, const GdkRGBA* fg, const GdkRGBA* success_color, const GdkRGBA* warning_color, const GdkRGBA* error_color, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_symbolic_async (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::IconInfoBase::load_symbolic_async (const Gdk::RGBA & fg, const Gdk::RGBA & success_color, const Gdk::RGBA & warning_color, const Gdk::RGBA & error_color, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto error_color_to_c = gi::unwrap (error_color, gi::transfer_none, gi::direction_in);
  auto warning_color_to_c = gi::unwrap (warning_color, gi::transfer_none, gi::direction_in);
  auto success_color_to_c = gi::unwrap (success_color, gi::transfer_none, gi::direction_in);
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IconInfoBase::load_symbolic_async (const Gdk::RGBA & fg, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, const ::GdkRGBA* fg, const ::GdkRGBA* success_color, const ::GdkRGBA* warning_color, const ::GdkRGBA* error_color, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto error_color_to_c = nullptr;
  auto warning_color_to_c = nullptr;
  auto success_color_to_c = nullptr;
  auto fg_to_c = gi::unwrap (fg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (const ::GdkRGBA*) (fg_to_c), (const ::GdkRGBA*) (success_color_to_c), (const ::GdkRGBA*) (warning_color_to_c), (const ::GdkRGBA*) (error_color_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkPixbuf* gtk_icon_info_load_symbolic_finish (GtkIconInfo* icon_info, GAsyncResult* res, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_finish (Gio::AsyncResult res, bool * was_symbolic)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), &error);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_finish (Gio::AsyncResult res, bool * was_symbolic, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), _error ? &_error_o : nullptr);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_finish (Gio::AsyncResult res)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (&was_symbolic_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (&was_symbolic_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}

// GdkPixbuf* gtk_icon_info_load_symbolic_for_context (GtkIconInfo* icon_info, GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_context (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_for_context (Gtk::StyleContext context, bool * was_symbolic)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context;
  gboolean was_symbolic_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), &error);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_for_context (Gtk::StyleContext context, bool * was_symbolic, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context;
  gboolean was_symbolic_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), _error ? &_error_o : nullptr);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_for_context (Gtk::StyleContext context)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context;
  gboolean was_symbolic_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gboolean*) (&was_symbolic_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_for_context (Gtk::StyleContext context, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context;
  gboolean was_symbolic_o {};
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (gboolean*) (&was_symbolic_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}

// void gtk_icon_info_load_symbolic_for_context_async (GtkIconInfo* icon_info, GtkStyleContext* context, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void gtk_icon_info_load_symbolic_for_context_async (::GtkIconInfo* icon_info, ::GtkStyleContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::IconInfoBase::load_symbolic_for_context_async (Gtk::StyleContext context, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::IconInfoBase::load_symbolic_for_context_async (Gtk::StyleContext context, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::GtkIconInfo* icon_info, ::GtkStyleContext* context, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GtkStyleContext*) (context_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GdkPixbuf* gtk_icon_info_load_symbolic_for_context_finish (GtkIconInfo* icon_info, GAsyncResult* res, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_context_finish (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_for_context_finish (Gio::AsyncResult res, bool * was_symbolic)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), &error);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GdkPixbuf::Pixbuf base::IconInfoBase::load_symbolic_for_context_finish (Gio::AsyncResult res, bool * was_symbolic, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (was_symbolic ? &was_symbolic_o : nullptr), _error ? &_error_o : nullptr);
  if (was_symbolic) *was_symbolic = was_symbolic_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_for_context_finish (Gio::AsyncResult res)
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (&was_symbolic_o), &error);
  gi::check_error (error);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}
std::tuple<GdkPixbuf::Pixbuf, bool> base::IconInfoBase::load_symbolic_for_context_finish (Gio::AsyncResult res, GLib::Error * _error) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GtkIconInfo* icon_info, ::GAsyncResult* res, gboolean* was_symbolic, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_icon_info_load_symbolic_for_context_finish;
  gboolean was_symbolic_o {};
  auto res_to_c = gi::unwrap (res, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GtkIconInfo*) (gobj_()), (::GAsyncResult*) (res_to_c), (gboolean*) (&was_symbolic_o), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), was_symbolic_o);
}

// GdkPixbuf* gtk_icon_info_load_symbolic_for_style (GtkIconInfo* icon_info, GtkStyle* style, GtkStateType state, gboolean* was_symbolic, GError ** error);
// ::GdkPixbuf* gtk_icon_info_load_symbolic_for_style (::GtkIconInfo* icon_info, ::GtkStyle* style,  state, gboolean* was_symbolic, GError ** error);
// IGNORE; deprecated

// void gtk_icon_info_set_raw_coordinates (GtkIconInfo* icon_info, gboolean raw_coordinates);
// void gtk_icon_info_set_raw_coordinates (::GtkIconInfo* icon_info, gboolean raw_coordinates);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/iconinfo_extra_def_impl.hpp>)
#include <gtk/iconinfo_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/iconinfo_extra_impl.hpp>)
#include <gtk/iconinfo_extra_impl.hpp>
#endif
#endif

#endif
