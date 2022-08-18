// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAY_IMPL_HPP_
#define _GI_GDK_DISPLAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkDisplay* gdk_display_get_default ();
// ::GdkDisplay* gdk_display_get_default ();
Gdk::Display base::DisplayBase::get_default () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDisplay* gdk_display_open (const gchar* display_name);
// ::GdkDisplay* gdk_display_open (const char* display_name);
Gdk::Display base::DisplayBase::open (const std::string & display_name) noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (const char* display_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_open;
  auto display_name_to_c = gi::unwrap (display_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (display_name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDisplay* gdk_display_open_default_libgtk_only ();
// ::GdkDisplay* gdk_display_open_default_libgtk_only ();
// IGNORE; deprecated

// void gdk_display_beep (GdkDisplay* display);
// void gdk_display_beep (::GdkDisplay* display);
void base::DisplayBase::beep () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_beep;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// void gdk_display_close (GdkDisplay* display);
// void gdk_display_close (::GdkDisplay* display);
void base::DisplayBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_close;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// gboolean gdk_display_device_is_grabbed (GdkDisplay* display, GdkDevice* device);
// gboolean gdk_display_device_is_grabbed (::GdkDisplay* display, ::GdkDevice* device);
bool base::DisplayBase::device_is_grabbed (Gdk::Device device) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_device_is_grabbed;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (::GdkDevice*) (device_to_c));
  return _temp_ret;
}

// void gdk_display_flush (GdkDisplay* display);
// void gdk_display_flush (::GdkDisplay* display);
void base::DisplayBase::flush () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_flush;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// GdkAppLaunchContext* gdk_display_get_app_launch_context (GdkDisplay* display);
// ::GdkAppLaunchContext* gdk_display_get_app_launch_context (::GdkDisplay* display);
Gdk::AppLaunchContext base::DisplayBase::get_app_launch_context () noexcept
{
  typedef ::GdkAppLaunchContext* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_app_launch_context;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gdk_display_get_default_cursor_size (GdkDisplay* display);
// guint gdk_display_get_default_cursor_size (::GdkDisplay* display);
guint base::DisplayBase::get_default_cursor_size () noexcept
{
  typedef guint (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_default_cursor_size;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// GdkWindow* gdk_display_get_default_group (GdkDisplay* display);
// ::GdkWindow* gdk_display_get_default_group (::GdkDisplay* display);
Gdk::Window base::DisplayBase::get_default_group () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_default_group;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkScreen* gdk_display_get_default_screen (GdkDisplay* display);
// ::GdkScreen* gdk_display_get_default_screen (::GdkDisplay* display);
Gdk::Screen base::DisplayBase::get_default_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_default_screen;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkSeat* gdk_display_get_default_seat (GdkDisplay* display);
// ::GdkSeat* gdk_display_get_default_seat (::GdkDisplay* display);
Gdk::Seat base::DisplayBase::get_default_seat () noexcept
{
  typedef ::GdkSeat* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_default_seat;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDeviceManager* gdk_display_get_device_manager (GdkDisplay* display);
// ::GdkDeviceManager* gdk_display_get_device_manager (::GdkDisplay* display);
// IGNORE; deprecated

// GdkEvent* gdk_display_get_event (GdkDisplay* display);
//  gdk_display_get_event (::GdkDisplay* display);
// SKIP;  type  not supported

// void gdk_display_get_maximal_cursor_size (GdkDisplay* display, guint* width, guint* height);
// void gdk_display_get_maximal_cursor_size (::GdkDisplay* display, guint* width, guint* height);
void base::DisplayBase::get_maximal_cursor_size (guint & width, guint & height) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, guint* width, guint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_maximal_cursor_size;
  guint height_o {};
  guint width_o {};
  call_wrap_v ((::GdkDisplay*) (gobj_()), (guint*) (&width_o), (guint*) (&height_o));
  height = height_o;
  width = width_o;
}
std::tuple<guint, guint> base::DisplayBase::get_maximal_cursor_size () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, guint* width, guint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_maximal_cursor_size;
  guint height_o {};
  guint width_o {};
  call_wrap_v ((::GdkDisplay*) (gobj_()), (guint*) (&width_o), (guint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// GdkMonitor* gdk_display_get_monitor (GdkDisplay* display, int monitor_num);
// ::GdkMonitor* gdk_display_get_monitor (::GdkDisplay* display, gint monitor_num);
Gdk::Monitor base::DisplayBase::get_monitor (gint monitor_num) noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkDisplay* display, gint monitor_num);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_monitor;
  auto monitor_num_to_c = monitor_num;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (gint) (monitor_num_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkMonitor* gdk_display_get_monitor_at_point (GdkDisplay* display, int x, int y);
// ::GdkMonitor* gdk_display_get_monitor_at_point (::GdkDisplay* display, gint x, gint y);
Gdk::Monitor base::DisplayBase::get_monitor_at_point (gint x, gint y) noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkDisplay* display, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_monitor_at_point;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkMonitor* gdk_display_get_monitor_at_window (GdkDisplay* display, GdkWindow* window);
// ::GdkMonitor* gdk_display_get_monitor_at_window (::GdkDisplay* display, ::GdkWindow* window);
Gdk::Monitor base::DisplayBase::get_monitor_at_window (Gdk::Window window) noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkDisplay* display, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_monitor_at_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()), (::GdkWindow*) (window_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gdk_display_get_n_monitors (GdkDisplay* display);
// gint gdk_display_get_n_monitors (::GdkDisplay* display);
gint base::DisplayBase::get_n_monitors () noexcept
{
  typedef gint (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_n_monitors;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gint gdk_display_get_n_screens (GdkDisplay* display);
// gint gdk_display_get_n_screens (::GdkDisplay* display);
// IGNORE; deprecated

// const gchar* gdk_display_get_name (GdkDisplay* display);
// const char* gdk_display_get_name (::GdkDisplay* display);
std::string base::DisplayBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_name;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_display_get_pointer (GdkDisplay* display, GdkScreen** screen, gint* x, gint* y, GdkModifierType* mask);
// void gdk_display_get_pointer (::GdkDisplay* display, ::GdkScreen** screen, gint* x, gint* y, ::GdkModifierType* mask);
// IGNORE; deprecated

// GdkMonitor* gdk_display_get_primary_monitor (GdkDisplay* display);
// ::GdkMonitor* gdk_display_get_primary_monitor (::GdkDisplay* display);
Gdk::Monitor base::DisplayBase::get_primary_monitor () noexcept
{
  typedef ::GdkMonitor* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_get_primary_monitor;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkScreen* gdk_display_get_screen (GdkDisplay* display, gint screen_num);
// ::GdkScreen* gdk_display_get_screen (::GdkDisplay* display, gint screen_num);
// IGNORE; deprecated

// GdkWindow* gdk_display_get_window_at_pointer (GdkDisplay* display, gint* win_x, gint* win_y);
// ::GdkWindow* gdk_display_get_window_at_pointer (::GdkDisplay* display, gint* win_x, gint* win_y);
// IGNORE; deprecated

// gboolean gdk_display_has_pending (GdkDisplay* display);
// gboolean gdk_display_has_pending (::GdkDisplay* display);
bool base::DisplayBase::has_pending () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_has_pending;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_is_closed (GdkDisplay* display);
// gboolean gdk_display_is_closed (::GdkDisplay* display);
bool base::DisplayBase::is_closed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_is_closed;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// void gdk_display_keyboard_ungrab (GdkDisplay* display, guint32 time_);
// void gdk_display_keyboard_ungrab (::GdkDisplay* display, guint32 time_);
// IGNORE; deprecated

// GList* gdk_display_list_devices (GdkDisplay* display);
// ::GList* gdk_display_list_devices (::GdkDisplay* display);
// IGNORE; deprecated

// GList* gdk_display_list_seats (GdkDisplay* display);
// ::GList* gdk_display_list_seats (::GdkDisplay* display);
std::vector<Gdk::Seat> base::DisplayBase::list_seats () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_list_seats;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Seat> (_temp_ret, gi::transfer_container);
}

// void gdk_display_notify_startup_complete (GdkDisplay* display, const gchar* startup_id);
// void gdk_display_notify_startup_complete (::GdkDisplay* display, const char* startup_id);
void base::DisplayBase::notify_startup_complete (const std::string & startup_id) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_notify_startup_complete;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDisplay*) (gobj_()), (const char*) (startup_id_to_c));
}

// GdkEvent* gdk_display_peek_event (GdkDisplay* display);
//  gdk_display_peek_event (::GdkDisplay* display);
// SKIP;  type  not supported

// gboolean gdk_display_pointer_is_grabbed (GdkDisplay* display);
// gboolean gdk_display_pointer_is_grabbed (::GdkDisplay* display);
// IGNORE; deprecated

// void gdk_display_pointer_ungrab (GdkDisplay* display, guint32 time_);
// void gdk_display_pointer_ungrab (::GdkDisplay* display, guint32 time_);
// IGNORE; deprecated

// void gdk_display_put_event (GdkDisplay* display, const GdkEvent* event);
// void gdk_display_put_event (::GdkDisplay* display, const  event);
// SKIP; event type  not supported

// gboolean gdk_display_request_selection_notification (GdkDisplay* display, GdkAtom selection);
// gboolean gdk_display_request_selection_notification (::GdkDisplay* display,  selection);
// SKIP; selection type  not supported

// void gdk_display_set_double_click_distance (GdkDisplay* display, guint distance);
// void gdk_display_set_double_click_distance (::GdkDisplay* display, guint distance);
void base::DisplayBase::set_double_click_distance (guint distance) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, guint distance);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_set_double_click_distance;
  auto distance_to_c = distance;
  call_wrap_v ((::GdkDisplay*) (gobj_()), (guint) (distance_to_c));
}

// void gdk_display_set_double_click_time (GdkDisplay* display, guint msec);
// void gdk_display_set_double_click_time (::GdkDisplay* display, guint msec);
void base::DisplayBase::set_double_click_time (guint msec) noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display, guint msec);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_set_double_click_time;
  auto msec_to_c = msec;
  call_wrap_v ((::GdkDisplay*) (gobj_()), (guint) (msec_to_c));
}

// void gdk_display_store_clipboard (GdkDisplay* display, GdkWindow* clipboard_window, guint32 time_, gint n_targets);
// void gdk_display_store_clipboard (::GdkDisplay* display, ::GdkWindow* clipboard_window, guint32 time_, gint n_targets);
// SKIP; container element not supported

// gboolean gdk_display_supports_clipboard_persistence (GdkDisplay* display);
// gboolean gdk_display_supports_clipboard_persistence (::GdkDisplay* display);
bool base::DisplayBase::supports_clipboard_persistence () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_clipboard_persistence;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_supports_composite (GdkDisplay* display);
// gboolean gdk_display_supports_composite (::GdkDisplay* display);
// IGNORE; deprecated

// gboolean gdk_display_supports_cursor_alpha (GdkDisplay* display);
// gboolean gdk_display_supports_cursor_alpha (::GdkDisplay* display);
bool base::DisplayBase::supports_cursor_alpha () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_cursor_alpha;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_supports_cursor_color (GdkDisplay* display);
// gboolean gdk_display_supports_cursor_color (::GdkDisplay* display);
bool base::DisplayBase::supports_cursor_color () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_cursor_color;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_supports_input_shapes (GdkDisplay* display);
// gboolean gdk_display_supports_input_shapes (::GdkDisplay* display);
bool base::DisplayBase::supports_input_shapes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_input_shapes;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_supports_selection_notification (GdkDisplay* display);
// gboolean gdk_display_supports_selection_notification (::GdkDisplay* display);
bool base::DisplayBase::supports_selection_notification () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_selection_notification;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_display_supports_shapes (GdkDisplay* display);
// gboolean gdk_display_supports_shapes (::GdkDisplay* display);
bool base::DisplayBase::supports_shapes () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_supports_shapes;
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (gobj_()));
  return _temp_ret;
}

// void gdk_display_sync (GdkDisplay* display);
// void gdk_display_sync (::GdkDisplay* display);
void base::DisplayBase::sync () noexcept
{
  typedef void (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_display_sync;
  call_wrap_v ((::GdkDisplay*) (gobj_()));
}

// void gdk_display_warp_pointer (GdkDisplay* display, GdkScreen* screen, gint x, gint y);
// void gdk_display_warp_pointer (::GdkDisplay* display, ::GdkScreen* screen, gint x, gint y);
// IGNORE; deprecated








} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/display_extra_def_impl.hpp>)
#include <gdk/display_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/display_extra_impl.hpp>)
#include <gdk/display_extra_impl.hpp>
#endif
#endif

#endif
