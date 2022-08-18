// AUTO-GENERATED

#ifndef _GI_GDK_SCREEN_IMPL_HPP_
#define _GI_GDK_SCREEN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkScreen* gdk_screen_get_default ();
// ::GdkScreen* gdk_screen_get_default ();
Gdk::Screen base::ScreenBase::get_default () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gdk_screen_height ();
// gint gdk_screen_height ();
// IGNORE; deprecated

// gint gdk_screen_height_mm ();
// gint gdk_screen_height_mm ();
// IGNORE; deprecated

// gint gdk_screen_width ();
// gint gdk_screen_width ();
// IGNORE; deprecated

// gint gdk_screen_width_mm ();
// gint gdk_screen_width_mm ();
// IGNORE; deprecated

// GdkWindow* gdk_screen_get_active_window (GdkScreen* screen);
// ::GdkWindow* gdk_screen_get_active_window (::GdkScreen* screen);
// IGNORE; deprecated

// GdkDisplay* gdk_screen_get_display (GdkScreen* screen);
// ::GdkDisplay* gdk_screen_get_display (::GdkScreen* screen);
Gdk::Display base::ScreenBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_display;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const cairo_font_options_t* gdk_screen_get_font_options (GdkScreen* screen);
// const ::cairo_font_options_t* gdk_screen_get_font_options (::GdkScreen* screen);
cairo::FontOptions base::ScreenBase::get_font_options () noexcept
{
  typedef const ::cairo_font_options_t* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_font_options;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint gdk_screen_get_height (GdkScreen* screen);
// gint gdk_screen_get_height (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_height_mm (GdkScreen* screen);
// gint gdk_screen_get_height_mm (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_at_point (GdkScreen* screen, gint x, gint y);
// gint gdk_screen_get_monitor_at_point (::GdkScreen* screen, gint x, gint y);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_at_window (GdkScreen* screen, GdkWindow* window);
// gint gdk_screen_get_monitor_at_window (::GdkScreen* screen, ::GdkWindow* window);
// IGNORE; deprecated

// void gdk_screen_get_monitor_geometry (GdkScreen* screen, gint monitor_num, GdkRectangle* dest);
// void gdk_screen_get_monitor_geometry (::GdkScreen* screen, gint monitor_num, ::GdkRectangle* dest);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_height_mm (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_height_mm (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gchar* gdk_screen_get_monitor_plug_name (GdkScreen* screen, gint monitor_num);
// char* gdk_screen_get_monitor_plug_name (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_scale_factor (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_scale_factor (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// gint gdk_screen_get_monitor_width_mm (GdkScreen* screen, gint monitor_num);
// gint gdk_screen_get_monitor_width_mm (::GdkScreen* screen, gint monitor_num);
// IGNORE; deprecated

// void gdk_screen_get_monitor_workarea (GdkScreen* screen, gint monitor_num, GdkRectangle* dest);
// void gdk_screen_get_monitor_workarea (::GdkScreen* screen, gint monitor_num, ::GdkRectangle* dest);
// IGNORE; deprecated

// gint gdk_screen_get_n_monitors (GdkScreen* screen);
// gint gdk_screen_get_n_monitors (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_number (GdkScreen* screen);
// gint gdk_screen_get_number (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_primary_monitor (GdkScreen* screen);
// gint gdk_screen_get_primary_monitor (::GdkScreen* screen);
// IGNORE; deprecated

// gdouble gdk_screen_get_resolution (GdkScreen* screen);
// gdouble gdk_screen_get_resolution (::GdkScreen* screen);
gdouble base::ScreenBase::get_resolution () noexcept
{
  typedef gdouble (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_resolution;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return _temp_ret;
}

// GdkVisual* gdk_screen_get_rgba_visual (GdkScreen* screen);
// ::GdkVisual* gdk_screen_get_rgba_visual (::GdkScreen* screen);
Gdk::Visual base::ScreenBase::get_rgba_visual () noexcept
{
  typedef ::GdkVisual* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_rgba_visual;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gdk_screen_get_root_window (GdkScreen* screen);
// ::GdkWindow* gdk_screen_get_root_window (::GdkScreen* screen);
Gdk::Window base::ScreenBase::get_root_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_root_window;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_screen_get_setting (GdkScreen* screen, const gchar* name, GValue* value);
// gboolean gdk_screen_get_setting (::GdkScreen* screen, const char* name, ::GValue* value);
bool base::ScreenBase::get_setting (const std::string & name, GObject::Value value) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkScreen* screen, const char* name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_setting;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()), (const char*) (name_to_c), (::GValue*) (value_to_c));
  return _temp_ret;
}

// GdkVisual* gdk_screen_get_system_visual (GdkScreen* screen);
// ::GdkVisual* gdk_screen_get_system_visual (::GdkScreen* screen);
Gdk::Visual base::ScreenBase::get_system_visual () noexcept
{
  typedef ::GdkVisual* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_system_visual;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GList* gdk_screen_get_toplevel_windows (GdkScreen* screen);
// ::GList* gdk_screen_get_toplevel_windows (::GdkScreen* screen);
std::vector<Gdk::Window> base::ScreenBase::get_toplevel_windows () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_toplevel_windows;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Window> (_temp_ret, gi::transfer_container);
}

// gint gdk_screen_get_width (GdkScreen* screen);
// gint gdk_screen_get_width (::GdkScreen* screen);
// IGNORE; deprecated

// gint gdk_screen_get_width_mm (GdkScreen* screen);
// gint gdk_screen_get_width_mm (::GdkScreen* screen);
// IGNORE; deprecated

// GList* gdk_screen_get_window_stack (GdkScreen* screen);
// ::GList* gdk_screen_get_window_stack (::GdkScreen* screen);
std::vector<Gdk::Window> base::ScreenBase::get_window_stack () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_get_window_stack;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Window> (_temp_ret, gi::transfer_full);
}

// gboolean gdk_screen_is_composited (GdkScreen* screen);
// gboolean gdk_screen_is_composited (::GdkScreen* screen);
bool base::ScreenBase::is_composited () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_is_composited;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return _temp_ret;
}

// GList* gdk_screen_list_visuals (GdkScreen* screen);
// ::GList* gdk_screen_list_visuals (::GdkScreen* screen);
std::vector<Gdk::Visual> base::ScreenBase::list_visuals () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_list_visuals;
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Visual> (_temp_ret, gi::transfer_container);
}

// gchar* gdk_screen_make_display_name (GdkScreen* screen);
// char* gdk_screen_make_display_name (::GdkScreen* screen);
// IGNORE; deprecated

// void gdk_screen_set_font_options (GdkScreen* screen, const cairo_font_options_t* options);
// void gdk_screen_set_font_options (::GdkScreen* screen, const ::cairo_font_options_t* options);
void base::ScreenBase::set_font_options (const cairo::FontOptions & options) noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_set_font_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkScreen*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}
void base::ScreenBase::set_font_options () noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_set_font_options;
  auto options_to_c = nullptr;
  call_wrap_v ((::GdkScreen*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}

// void gdk_screen_set_resolution (GdkScreen* screen, gdouble dpi);
// void gdk_screen_set_resolution (::GdkScreen* screen, gdouble dpi);
void base::ScreenBase::set_resolution (gdouble dpi) noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen, gdouble dpi);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_screen_set_resolution;
  auto dpi_to_c = dpi;
  call_wrap_v ((::GdkScreen*) (gobj_()), (gdouble) (dpi_to_c));
}





} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/screen_extra_def_impl.hpp>)
#include <gdk/screen_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/screen_extra_impl.hpp>)
#include <gdk/screen_extra_impl.hpp>
#endif
#endif

#endif
