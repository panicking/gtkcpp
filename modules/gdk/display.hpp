// AUTO-GENERATED

#ifndef _GI_GDK_DISPLAY_HPP_
#define _GI_GDK_DISPLAY_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class AppLaunchContext;
class Device;
class DeviceManager;
class Monitor;
class Screen;
class Seat;
class Window;

class Display;

namespace base {


#define GI_GDK_DISPLAY_BASE base::DisplayBase
class DisplayBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkDisplay BaseObjectType;

DisplayBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_display_get_type(); } 

// GdkDisplay* gdk_display_get_default ();
// ::GdkDisplay* gdk_display_get_default ();
static GI_INLINE_DECL Gdk::Display get_default () noexcept;

// GdkDisplay* gdk_display_open (const gchar* display_name);
// ::GdkDisplay* gdk_display_open (const char* display_name);
static GI_INLINE_DECL Gdk::Display open (const std::string & display_name) noexcept;

// GdkDisplay* gdk_display_open_default_libgtk_only ();
// ::GdkDisplay* gdk_display_open_default_libgtk_only ();
// IGNORE; deprecated

// void gdk_display_beep (GdkDisplay* display);
// void gdk_display_beep (::GdkDisplay* display);
GI_INLINE_DECL void beep () noexcept;

// void gdk_display_close (GdkDisplay* display);
// void gdk_display_close (::GdkDisplay* display);
GI_INLINE_DECL void close () noexcept;

// gboolean gdk_display_device_is_grabbed (GdkDisplay* display, GdkDevice* device);
// gboolean gdk_display_device_is_grabbed (::GdkDisplay* display, ::GdkDevice* device);
GI_INLINE_DECL bool device_is_grabbed (Gdk::Device device) noexcept;

// void gdk_display_flush (GdkDisplay* display);
// void gdk_display_flush (::GdkDisplay* display);
GI_INLINE_DECL void flush () noexcept;

// GdkAppLaunchContext* gdk_display_get_app_launch_context (GdkDisplay* display);
// ::GdkAppLaunchContext* gdk_display_get_app_launch_context (::GdkDisplay* display);
GI_INLINE_DECL Gdk::AppLaunchContext get_app_launch_context () noexcept;

// guint gdk_display_get_default_cursor_size (GdkDisplay* display);
// guint gdk_display_get_default_cursor_size (::GdkDisplay* display);
GI_INLINE_DECL guint get_default_cursor_size () noexcept;

// GdkWindow* gdk_display_get_default_group (GdkDisplay* display);
// ::GdkWindow* gdk_display_get_default_group (::GdkDisplay* display);
GI_INLINE_DECL Gdk::Window get_default_group () noexcept;

// GdkScreen* gdk_display_get_default_screen (GdkDisplay* display);
// ::GdkScreen* gdk_display_get_default_screen (::GdkDisplay* display);
GI_INLINE_DECL Gdk::Screen get_default_screen () noexcept;

// GdkSeat* gdk_display_get_default_seat (GdkDisplay* display);
// ::GdkSeat* gdk_display_get_default_seat (::GdkDisplay* display);
GI_INLINE_DECL Gdk::Seat get_default_seat () noexcept;

// GdkDeviceManager* gdk_display_get_device_manager (GdkDisplay* display);
// ::GdkDeviceManager* gdk_display_get_device_manager (::GdkDisplay* display);
// IGNORE; deprecated

// GdkEvent* gdk_display_get_event (GdkDisplay* display);
//  gdk_display_get_event (::GdkDisplay* display);
// SKIP;  type  not supported

// void gdk_display_get_maximal_cursor_size (GdkDisplay* display, guint* width, guint* height);
// void gdk_display_get_maximal_cursor_size (::GdkDisplay* display, guint* width, guint* height);
GI_INLINE_DECL void get_maximal_cursor_size (guint & width, guint & height) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> get_maximal_cursor_size () noexcept;

// GdkMonitor* gdk_display_get_monitor (GdkDisplay* display, int monitor_num);
// ::GdkMonitor* gdk_display_get_monitor (::GdkDisplay* display, gint monitor_num);
GI_INLINE_DECL Gdk::Monitor get_monitor (gint monitor_num) noexcept;

// GdkMonitor* gdk_display_get_monitor_at_point (GdkDisplay* display, int x, int y);
// ::GdkMonitor* gdk_display_get_monitor_at_point (::GdkDisplay* display, gint x, gint y);
GI_INLINE_DECL Gdk::Monitor get_monitor_at_point (gint x, gint y) noexcept;

// GdkMonitor* gdk_display_get_monitor_at_window (GdkDisplay* display, GdkWindow* window);
// ::GdkMonitor* gdk_display_get_monitor_at_window (::GdkDisplay* display, ::GdkWindow* window);
GI_INLINE_DECL Gdk::Monitor get_monitor_at_window (Gdk::Window window) noexcept;

// int gdk_display_get_n_monitors (GdkDisplay* display);
// gint gdk_display_get_n_monitors (::GdkDisplay* display);
GI_INLINE_DECL gint get_n_monitors () noexcept;

// gint gdk_display_get_n_screens (GdkDisplay* display);
// gint gdk_display_get_n_screens (::GdkDisplay* display);
// IGNORE; deprecated

// const gchar* gdk_display_get_name (GdkDisplay* display);
// const char* gdk_display_get_name (::GdkDisplay* display);
GI_INLINE_DECL std::string get_name () noexcept;

// void gdk_display_get_pointer (GdkDisplay* display, GdkScreen** screen, gint* x, gint* y, GdkModifierType* mask);
// void gdk_display_get_pointer (::GdkDisplay* display, ::GdkScreen** screen, gint* x, gint* y, ::GdkModifierType* mask);
// IGNORE; deprecated

// GdkMonitor* gdk_display_get_primary_monitor (GdkDisplay* display);
// ::GdkMonitor* gdk_display_get_primary_monitor (::GdkDisplay* display);
GI_INLINE_DECL Gdk::Monitor get_primary_monitor () noexcept;

// GdkScreen* gdk_display_get_screen (GdkDisplay* display, gint screen_num);
// ::GdkScreen* gdk_display_get_screen (::GdkDisplay* display, gint screen_num);
// IGNORE; deprecated

// GdkWindow* gdk_display_get_window_at_pointer (GdkDisplay* display, gint* win_x, gint* win_y);
// ::GdkWindow* gdk_display_get_window_at_pointer (::GdkDisplay* display, gint* win_x, gint* win_y);
// IGNORE; deprecated

// gboolean gdk_display_has_pending (GdkDisplay* display);
// gboolean gdk_display_has_pending (::GdkDisplay* display);
GI_INLINE_DECL bool has_pending () noexcept;

// gboolean gdk_display_is_closed (GdkDisplay* display);
// gboolean gdk_display_is_closed (::GdkDisplay* display);
GI_INLINE_DECL bool is_closed () noexcept;

// void gdk_display_keyboard_ungrab (GdkDisplay* display, guint32 time_);
// void gdk_display_keyboard_ungrab (::GdkDisplay* display, guint32 time_);
// IGNORE; deprecated

// GList* gdk_display_list_devices (GdkDisplay* display);
// ::GList* gdk_display_list_devices (::GdkDisplay* display);
// IGNORE; deprecated

// GList* gdk_display_list_seats (GdkDisplay* display);
// ::GList* gdk_display_list_seats (::GdkDisplay* display);
GI_INLINE_DECL std::vector<Gdk::Seat> list_seats () noexcept;

// void gdk_display_notify_startup_complete (GdkDisplay* display, const gchar* startup_id);
// void gdk_display_notify_startup_complete (::GdkDisplay* display, const char* startup_id);
GI_INLINE_DECL void notify_startup_complete (const std::string & startup_id) noexcept;

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
GI_INLINE_DECL void set_double_click_distance (guint distance) noexcept;

// void gdk_display_set_double_click_time (GdkDisplay* display, guint msec);
// void gdk_display_set_double_click_time (::GdkDisplay* display, guint msec);
GI_INLINE_DECL void set_double_click_time (guint msec) noexcept;

// void gdk_display_store_clipboard (GdkDisplay* display, GdkWindow* clipboard_window, guint32 time_, gint n_targets);
// void gdk_display_store_clipboard (::GdkDisplay* display, ::GdkWindow* clipboard_window, guint32 time_, gint n_targets);
// SKIP; container element not supported

// gboolean gdk_display_supports_clipboard_persistence (GdkDisplay* display);
// gboolean gdk_display_supports_clipboard_persistence (::GdkDisplay* display);
GI_INLINE_DECL bool supports_clipboard_persistence () noexcept;

// gboolean gdk_display_supports_composite (GdkDisplay* display);
// gboolean gdk_display_supports_composite (::GdkDisplay* display);
// IGNORE; deprecated

// gboolean gdk_display_supports_cursor_alpha (GdkDisplay* display);
// gboolean gdk_display_supports_cursor_alpha (::GdkDisplay* display);
GI_INLINE_DECL bool supports_cursor_alpha () noexcept;

// gboolean gdk_display_supports_cursor_color (GdkDisplay* display);
// gboolean gdk_display_supports_cursor_color (::GdkDisplay* display);
GI_INLINE_DECL bool supports_cursor_color () noexcept;

// gboolean gdk_display_supports_input_shapes (GdkDisplay* display);
// gboolean gdk_display_supports_input_shapes (::GdkDisplay* display);
GI_INLINE_DECL bool supports_input_shapes () noexcept;

// gboolean gdk_display_supports_selection_notification (GdkDisplay* display);
// gboolean gdk_display_supports_selection_notification (::GdkDisplay* display);
GI_INLINE_DECL bool supports_selection_notification () noexcept;

// gboolean gdk_display_supports_shapes (GdkDisplay* display);
// gboolean gdk_display_supports_shapes (::GdkDisplay* display);
GI_INLINE_DECL bool supports_shapes () noexcept;

// void gdk_display_sync (GdkDisplay* display);
// void gdk_display_sync (::GdkDisplay* display);
GI_INLINE_DECL void sync () noexcept;

// void gdk_display_warp_pointer (GdkDisplay* display, GdkScreen* screen, gint x, gint y);
// void gdk_display_warp_pointer (::GdkDisplay* display, ::GdkScreen* screen, gint x, gint y);
// IGNORE; deprecated

// signal closed
gi::signal_proxy<void(Gdk::Display, gboolean is_error)> signal_closed()
{ return gi::signal_proxy<void(Gdk::Display, gboolean is_error)> (*this, "closed"); }

// signal monitor-added
gi::signal_proxy<void(Gdk::Display, Gdk::Monitor monitor)> signal_monitor_added()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Monitor monitor)> (*this, "monitor-added"); }

// signal monitor-removed
gi::signal_proxy<void(Gdk::Display, Gdk::Monitor monitor)> signal_monitor_removed()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Monitor monitor)> (*this, "monitor-removed"); }

// signal opened
gi::signal_proxy<void(Gdk::Display)> signal_opened()
{ return gi::signal_proxy<void(Gdk::Display)> (*this, "opened"); }

// signal seat-added
gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> signal_seat_added()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> (*this, "seat-added"); }

// signal seat-removed
gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> signal_seat_removed()
{ return gi::signal_proxy<void(Gdk::Display, Gdk::Seat seat)> (*this, "seat-removed"); }

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/display_extra_def.hpp>)
#include <gdk/display_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/display_extra.hpp>)
#include <gdk/display_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Display : public GI_GDK_DISPLAY_BASE
{ typedef GI_GDK_DISPLAY_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkDisplay>
{ typedef Gdk::Display type; }; 

} // namespace repository

} // namespace gi

#endif
