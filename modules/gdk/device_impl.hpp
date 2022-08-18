// AUTO-GENERATED

#ifndef _GI_GDK_DEVICE_IMPL_HPP_
#define _GI_GDK_DEVICE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// void gdk_device_free_history (GdkTimeCoord** events, gint n_events);
// void gdk_device_free_history (::GdkTimeCoord** events, gint n_events);
void base::DeviceBase::free_history (Gdk::TimeCoord * events, gint n_events) noexcept
{
  typedef void (*call_wrap_t) (::GdkTimeCoord** events, gint n_events);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_free_history;
  auto events_i = detail::make_list_unwrap_range (events, n_events, false);
  auto events_w = unwrap (events_i, gi::transfer_none, direction_in);
  auto events_to_c = events_w.gobj_(false);
  call_wrap_v ((::GdkTimeCoord**) (events_to_c), (gint) (events_w.size()));
}

// gboolean gdk_device_grab_info_libgtk_only (GdkDisplay* display, GdkDevice* device, GdkWindow** grab_window, gboolean* owner_events);
// gboolean gdk_device_grab_info_libgtk_only (::GdkDisplay* display, ::GdkDevice* device, ::GdkWindow** grab_window, gboolean* owner_events);
// IGNORE; deprecated

// GdkDevice* gdk_device_get_associated_device (GdkDevice* device);
// ::GdkDevice* gdk_device_get_associated_device (::GdkDevice* device);
Gdk::Device base::DeviceBase::get_associated_device () noexcept
{
  typedef ::GdkDevice* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_associated_device;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkAxisFlags gdk_device_get_axes (GdkDevice* device);
// ::GdkAxisFlags gdk_device_get_axes (::GdkDevice* device);
Gdk::AxisFlags base::DeviceBase::get_axes () noexcept
{
  typedef ::GdkAxisFlags (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_axes;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_device_get_axis (GdkDevice* device, GdkAxisUse use, gdouble* value);
// gboolean gdk_device_get_axis (::GdkDevice* device, ::GdkAxisUse use, gdouble* value);
// IGNORE; not introspectable, inconsistent array info

// GdkAxisUse gdk_device_get_axis_use (GdkDevice* device, guint index_);
// ::GdkAxisUse gdk_device_get_axis_use (::GdkDevice* device, guint index_);
Gdk::AxisUse base::DeviceBase::get_axis_use (guint index_) noexcept
{
  typedef ::GdkAxisUse (*call_wrap_t) (::GdkDevice* device, guint index_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_axis_use;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (guint) (index__to_c));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_device_get_axis_value (GdkDevice* device, GdkAtom axis_label, gdouble* value);
// gboolean gdk_device_get_axis_value (::GdkDevice* device,  axis_label, gdouble* value);
// IGNORE; not introspectable, inconsistent array info

// GdkDeviceType gdk_device_get_device_type (GdkDevice* device);
// ::GdkDeviceType gdk_device_get_device_type (::GdkDevice* device);
Gdk::DeviceType base::DeviceBase::get_device_type () noexcept
{
  typedef ::GdkDeviceType (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_device_type;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* gdk_device_get_display (GdkDevice* device);
// ::GdkDisplay* gdk_device_get_display (::GdkDevice* device);
Gdk::Display base::DeviceBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_display;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_device_get_has_cursor (GdkDevice* device);
// gboolean gdk_device_get_has_cursor (::GdkDevice* device);
bool base::DeviceBase::get_has_cursor () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_has_cursor;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_device_get_history (GdkDevice* device, GdkWindow* window, guint32 start, guint32 stop, GdkTimeCoord*** events, gint* n_events);
// gboolean gdk_device_get_history (::GdkDevice* device, ::GdkWindow* window, guint32 start, guint32 stop, ::GdkTimeCoord*** events, gint* n_events);
bool base::DeviceBase::get_history (Gdk::Window window, guint32 start, guint32 stop, std::vector<Gdk::TimeCoord> & events) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device, ::GdkWindow* window, guint32 start, guint32 stop, ::GdkTimeCoord*** events, gint* n_events);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_history;
  typedef Gdk::TimeCoord events_cpptype;
  typedef traits::ctype<events_cpptype>::type events_ctype;
  events_ctype *events_o;
  gint n_events;
  auto stop_to_c = stop;
  auto start_to_c = start;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkWindow*) (window_to_c), (guint32) (start_to_c), (guint32) (stop_to_c), (::GdkTimeCoord***) ((::GdkTimeCoord***) &events_o), (gint*) (&n_events));
  events.resize(n_events);
  detail::wrap_array (events_o, gi::transfer_full, n_events, events.data());
  g_free (events_o);
  return _temp_ret;
}

// gboolean gdk_device_get_key (GdkDevice* device, guint index_, guint* keyval, GdkModifierType* modifiers);
// gboolean gdk_device_get_key (::GdkDevice* device, guint index_, guint* keyval, ::GdkModifierType* modifiers);
bool base::DeviceBase::get_key (guint index_, guint & keyval, Gdk::ModifierType & modifiers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device, guint index_, guint* keyval, ::GdkModifierType* modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_key;
  ::GdkModifierType modifiers_o {};
  guint keyval_o {};
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (guint) (index__to_c), (guint*) (&keyval_o), (::GdkModifierType*) (&modifiers_o));
  modifiers = gi::wrap (modifiers_o);
  keyval = keyval_o;
  return _temp_ret;
}
std::tuple<bool, guint, Gdk::ModifierType> base::DeviceBase::get_key (guint index_) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device, guint index_, guint* keyval, ::GdkModifierType* modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_key;
  ::GdkModifierType modifiers_o {};
  guint keyval_o {};
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (guint) (index__to_c), (guint*) (&keyval_o), (::GdkModifierType*) (&modifiers_o));
  return std::make_tuple (_temp_ret, keyval_o, gi::wrap (modifiers_o));
}

// GdkWindow* gdk_device_get_last_event_window (GdkDevice* device);
// ::GdkWindow* gdk_device_get_last_event_window (::GdkDevice* device);
Gdk::Window base::DeviceBase::get_last_event_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_last_event_window;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkInputMode gdk_device_get_mode (GdkDevice* device);
// ::GdkInputMode gdk_device_get_mode (::GdkDevice* device);
Gdk::InputMode base::DeviceBase::get_mode () noexcept
{
  typedef ::GdkInputMode (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_mode;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint gdk_device_get_n_axes (GdkDevice* device);
// gint gdk_device_get_n_axes (::GdkDevice* device);
gint base::DeviceBase::get_n_axes () noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_n_axes;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// gint gdk_device_get_n_keys (GdkDevice* device);
// gint gdk_device_get_n_keys (::GdkDevice* device);
gint base::DeviceBase::get_n_keys () noexcept
{
  typedef gint (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_n_keys;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return _temp_ret;
}

// const gchar* gdk_device_get_name (GdkDevice* device);
// const char* gdk_device_get_name (::GdkDevice* device);
std::string base::DeviceBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_name;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_device_get_position (GdkDevice* device, GdkScreen** screen, gint* x, gint* y);
// void gdk_device_get_position (::GdkDevice* device, ::GdkScreen** screen, gint* x, gint* y);
void base::DeviceBase::get_position (Gdk::Screen * screen, gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, ::GdkScreen** screen, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_position;
  gint y_o {};
  gint x_o {};
  ::GdkScreen* screen_o {};
  call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkScreen**) (screen ? &screen_o : nullptr), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  if (screen) *screen = gi::wrap (screen_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Screen, gint, gint> base::DeviceBase::get_position () noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, ::GdkScreen** screen, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_position;
  gint y_o {};
  gint x_o {};
  ::GdkScreen* screen_o {};
  call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkScreen**) (&screen_o), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (gi::wrap (screen_o, gi::transfer_none, gi::direction_out), x_o, y_o);
}

// void gdk_device_get_position_double (GdkDevice* device, GdkScreen** screen, gdouble* x, gdouble* y);
// void gdk_device_get_position_double (::GdkDevice* device, ::GdkScreen** screen, gdouble* x, gdouble* y);
void base::DeviceBase::get_position_double (Gdk::Screen * screen, gdouble * x, gdouble * y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, ::GdkScreen** screen, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_position_double;
  gdouble y_o {};
  gdouble x_o {};
  ::GdkScreen* screen_o {};
  call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkScreen**) (screen ? &screen_o : nullptr), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  if (screen) *screen = gi::wrap (screen_o, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Screen, gdouble, gdouble> base::DeviceBase::get_position_double () noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, ::GdkScreen** screen, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_position_double;
  gdouble y_o {};
  gdouble x_o {};
  ::GdkScreen* screen_o {};
  call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkScreen**) (&screen_o), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (gi::wrap (screen_o, gi::transfer_none, gi::direction_out), x_o, y_o);
}

// const gchar* gdk_device_get_product_id (GdkDevice* device);
// const char* gdk_device_get_product_id (::GdkDevice* device);
std::string base::DeviceBase::get_product_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_product_id;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkSeat* gdk_device_get_seat (GdkDevice* device);
// ::GdkSeat* gdk_device_get_seat (::GdkDevice* device);
Gdk::Seat base::DeviceBase::get_seat () noexcept
{
  typedef ::GdkSeat* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_seat;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkInputSource gdk_device_get_source (GdkDevice* device);
// ::GdkInputSource gdk_device_get_source (::GdkDevice* device);
Gdk::InputSource base::DeviceBase::get_source () noexcept
{
  typedef ::GdkInputSource (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_source;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gdk_device_get_state (GdkDevice* device, GdkWindow* window, GdkModifierType* mask);
// void gdk_device_get_state (::GdkDevice* device, ::GdkWindow* window, ::GdkModifierType* mask);
// IGNORE; not introspectable, inconsistent array info

// const gchar* gdk_device_get_vendor_id (GdkDevice* device);
// const char* gdk_device_get_vendor_id (::GdkDevice* device);
std::string base::DeviceBase::get_vendor_id () noexcept
{
  typedef const char* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_vendor_id;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gdk_device_get_window_at_position (GdkDevice* device, gint* win_x, gint* win_y);
// ::GdkWindow* gdk_device_get_window_at_position (::GdkDevice* device, gint* win_x, gint* win_y);
Gdk::Window base::DeviceBase::get_window_at_position (gint * win_x, gint * win_y) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDevice* device, gint* win_x, gint* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_window_at_position;
  gint win_y_o {};
  gint win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gint*) (win_x ? &win_x_o : nullptr), (gint*) (win_y ? &win_y_o : nullptr));
  if (win_y) *win_y = win_y_o;
  if (win_x) *win_x = win_x_o;
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Window, gint, gint> base::DeviceBase::get_window_at_position () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDevice* device, gint* win_x, gint* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_window_at_position;
  gint win_y_o {};
  gint win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gint*) (&win_x_o), (gint*) (&win_y_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), win_x_o, win_y_o);
}

// GdkWindow* gdk_device_get_window_at_position_double (GdkDevice* device, gdouble* win_x, gdouble* win_y);
// ::GdkWindow* gdk_device_get_window_at_position_double (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
Gdk::Window base::DeviceBase::get_window_at_position_double (gdouble * win_x, gdouble * win_y) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_window_at_position_double;
  gdouble win_y_o {};
  gdouble win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gdouble*) (win_x ? &win_x_o : nullptr), (gdouble*) (win_y ? &win_y_o : nullptr));
  if (win_y) *win_y = win_y_o;
  if (win_x) *win_x = win_x_o;
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Window, gdouble, gdouble> base::DeviceBase::get_window_at_position_double () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkDevice* device, gdouble* win_x, gdouble* win_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_get_window_at_position_double;
  gdouble win_y_o {};
  gdouble win_x_o {};
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (gdouble*) (&win_x_o), (gdouble*) (&win_y_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), win_x_o, win_y_o);
}

// GdkGrabStatus gdk_device_grab (GdkDevice* device, GdkWindow* window, GdkGrabOwnership grab_ownership, gboolean owner_events, GdkEventMask event_mask, GdkCursor* cursor, guint32 time_);
// ::GdkGrabStatus gdk_device_grab (::GdkDevice* device, ::GdkWindow* window, ::GdkGrabOwnership grab_ownership, gboolean owner_events, ::GdkEventMask event_mask, ::GdkCursor* cursor, guint32 time_);
// IGNORE; deprecated

//  gdk_device_list_axes (GdkDevice* device);
//  gdk_device_list_axes (::GdkDevice* device);
// SKIP; container element not supported

// GList* gdk_device_list_slave_devices (GdkDevice* device);
// ::GList* gdk_device_list_slave_devices (::GdkDevice* device);
std::vector<Gdk::Device> base::DeviceBase::list_slave_devices () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_list_slave_devices;
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Device> (_temp_ret, gi::transfer_container);
}

// void gdk_device_set_axis_use (GdkDevice* device, guint index_, GdkAxisUse use);
// void gdk_device_set_axis_use (::GdkDevice* device, guint index_, ::GdkAxisUse use);
void base::DeviceBase::set_axis_use (guint index_, Gdk::AxisUse use) noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, guint index_, ::GdkAxisUse use);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_set_axis_use;
  auto use_to_c = gi::unwrap (use);
  auto index__to_c = index_;
  call_wrap_v ((::GdkDevice*) (gobj_()), (guint) (index__to_c), (::GdkAxisUse) (use_to_c));
}

// void gdk_device_set_key (GdkDevice* device, guint index_, guint keyval, GdkModifierType modifiers);
// void gdk_device_set_key (::GdkDevice* device, guint index_, guint keyval, ::GdkModifierType modifiers);
void base::DeviceBase::set_key (guint index_, guint keyval, Gdk::ModifierType modifiers) noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, guint index_, guint keyval, ::GdkModifierType modifiers);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_set_key;
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto index__to_c = index_;
  call_wrap_v ((::GdkDevice*) (gobj_()), (guint) (index__to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c));
}

// gboolean gdk_device_set_mode (GdkDevice* device, GdkInputMode mode);
// gboolean gdk_device_set_mode (::GdkDevice* device, ::GdkInputMode mode);
bool base::DeviceBase::set_mode (Gdk::InputMode mode) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDevice* device, ::GdkInputMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_set_mode;
  auto mode_to_c = gi::unwrap (mode);
  auto _temp_ret = call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkInputMode) (mode_to_c));
  return _temp_ret;
}

// void gdk_device_ungrab (GdkDevice* device, guint32 time_);
// void gdk_device_ungrab (::GdkDevice* device, guint32 time_);
// IGNORE; deprecated

// void gdk_device_warp (GdkDevice* device, GdkScreen* screen, gint x, gint y);
// void gdk_device_warp (::GdkDevice* device, ::GdkScreen* screen, gint x, gint y);
void base::DeviceBase::warp (Gdk::Screen screen, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GdkDevice* device, ::GdkScreen* screen, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_device_warp;
  auto y_to_c = y;
  auto x_to_c = x;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDevice*) (gobj_()), (::GdkScreen*) (screen_to_c), (gint) (x_to_c), (gint) (y_to_c));
}




} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/device_extra_def_impl.hpp>)
#include <gdk/device_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/device_extra_impl.hpp>)
#include <gdk/device_extra_impl.hpp>
#endif
#endif

#endif
