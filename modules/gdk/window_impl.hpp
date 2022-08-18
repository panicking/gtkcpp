// AUTO-GENERATED

#ifndef _GI_GDK_WINDOW_IMPL_HPP_
#define _GI_GDK_WINDOW_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace base {

// GdkWindow* gdk_window_new (GdkWindow* parent, GdkWindowAttr* attributes, gint attributes_mask);
// ::GdkWindow* gdk_window_new (::GdkWindow* parent, ::GdkWindowAttr* attributes, ::GdkWindowAttributesType attributes_mask);
Gdk::Window base::WindowBase::new_ (Gdk::Window parent, Gdk::WindowAttr attributes, Gdk::WindowAttributesType attributes_mask) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* parent, ::GdkWindowAttr* attributes, ::GdkWindowAttributesType attributes_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_new;
  auto attributes_mask_to_c = gi::unwrap (attributes_mask);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (parent_to_c), (::GdkWindowAttr*) (attributes_to_c), (::GdkWindowAttributesType) (attributes_mask_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gdk::Window base::WindowBase::new_ (Gdk::WindowAttr attributes, Gdk::WindowAttributesType attributes_mask) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* parent, ::GdkWindowAttr* attributes, ::GdkWindowAttributesType attributes_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_new;
  auto attributes_mask_to_c = gi::unwrap (attributes_mask);
  auto attributes_to_c = gi::unwrap (attributes, gi::transfer_none, gi::direction_in);
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (parent_to_c), (::GdkWindowAttr*) (attributes_to_c), (::GdkWindowAttributesType) (attributes_mask_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkWindow* gdk_window_at_pointer (gint* win_x, gint* win_y);
// ::GdkWindow* gdk_window_at_pointer (gint* win_x, gint* win_y);
// IGNORE; deprecated

// void gdk_window_constrain_size (GdkGeometry* geometry, GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
// void gdk_window_constrain_size (::GdkGeometry* geometry, ::GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
void base::WindowBase::constrain_size (Gdk::Geometry geometry, Gdk::WindowHints flags, gint width, gint height, gint & new_width, gint & new_height) noexcept
{
  typedef void (*call_wrap_t) (::GdkGeometry* geometry, ::GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_constrain_size;
  gint new_height_o {};
  gint new_width_o {};
  auto height_to_c = height;
  auto width_to_c = width;
  auto flags_to_c = gi::unwrap (flags);
  auto geometry_to_c = gi::unwrap (geometry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkGeometry*) (geometry_to_c), (::GdkWindowHints) (flags_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint*) (&new_width_o), (gint*) (&new_height_o));
  new_height = new_height_o;
  new_width = new_width_o;
}
std::tuple<gint, gint> base::WindowBase::constrain_size (Gdk::Geometry geometry, Gdk::WindowHints flags, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkGeometry* geometry, ::GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_constrain_size;
  gint new_height_o {};
  gint new_width_o {};
  auto height_to_c = height;
  auto width_to_c = width;
  auto flags_to_c = gi::unwrap (flags);
  auto geometry_to_c = gi::unwrap (geometry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkGeometry*) (geometry_to_c), (::GdkWindowHints) (flags_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint*) (&new_width_o), (gint*) (&new_height_o));
  return std::make_tuple (new_width_o, new_height_o);
}

// void gdk_window_process_all_updates ();
// void gdk_window_process_all_updates ();
// IGNORE; deprecated

// void gdk_window_set_debug_updates (gboolean setting);
// void gdk_window_set_debug_updates (gboolean setting);
// IGNORE; deprecated

// void gdk_window_add_filter (GdkWindow* window, GdkFilterFunc function, gpointer data);
// void gdk_window_add_filter (::GdkWindow* window,  function, void* data);
// IGNORE; not introspectable, function type  not supported

// void gdk_window_beep (GdkWindow* window);
// void gdk_window_beep (::GdkWindow* window);
void base::WindowBase::beep () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_beep;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// GdkDrawingContext* gdk_window_begin_draw_frame (GdkWindow* window, const cairo_region_t* region);
// ::GdkDrawingContext* gdk_window_begin_draw_frame (::GdkWindow* window, const ::cairo_region_t* region);
Gdk::DrawingContext base::WindowBase::begin_draw_frame (const cairo::Region & region) noexcept
{
  typedef ::GdkDrawingContext* (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_begin_draw_frame;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (region_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_window_begin_move_drag (GdkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_move_drag (::GdkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_move_drag (gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_begin_move_drag;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_window_begin_move_drag_for_device (GdkWindow* window, GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_move_drag_for_device (::GdkWindow* window, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_move_drag_for_device (Gdk::Device device, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_begin_move_drag_for_device;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_window_begin_paint_rect (GdkWindow* window, const GdkRectangle* rectangle);
// void gdk_window_begin_paint_rect (::GdkWindow* window, const ::GdkRectangle* rectangle);
// IGNORE; deprecated

// void gdk_window_begin_paint_region (GdkWindow* window, const cairo_region_t* region);
// void gdk_window_begin_paint_region (::GdkWindow* window, const ::cairo_region_t* region);
// IGNORE; deprecated

// void gdk_window_begin_resize_drag (GdkWindow* window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_resize_drag (::GdkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_resize_drag (Gdk::WindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_begin_resize_drag;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  auto edge_to_c = gi::unwrap (edge);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindowEdge) (edge_to_c), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_window_begin_resize_drag_for_device (GdkWindow* window, GdkWindowEdge edge, GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_resize_drag_for_device (::GdkWindow* window, ::GdkWindowEdge edge, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
void base::WindowBase::begin_resize_drag_for_device (Gdk::WindowEdge edge, Gdk::Device device, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindowEdge edge, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_begin_resize_drag_for_device;
  auto timestamp_to_c = timestamp;
  auto root_y_to_c = root_y;
  auto root_x_to_c = root_x;
  auto button_to_c = button;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto edge_to_c = gi::unwrap (edge);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindowEdge) (edge_to_c), (::GdkDevice*) (device_to_c), (gint) (button_to_c), (gint) (root_x_to_c), (gint) (root_y_to_c), (guint32) (timestamp_to_c));
}

// void gdk_window_configure_finished (GdkWindow* window);
// void gdk_window_configure_finished (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_coords_from_parent (GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
// void gdk_window_coords_from_parent (::GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
void base::WindowBase::coords_from_parent (gdouble parent_x, gdouble parent_y, gdouble * x, gdouble * y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_coords_from_parent;
  gdouble y_o {};
  gdouble x_o {};
  auto parent_y_to_c = parent_y;
  auto parent_x_to_c = parent_x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gdouble) (parent_x_to_c), (gdouble) (parent_y_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gdouble, gdouble> base::WindowBase::coords_from_parent (gdouble parent_x, gdouble parent_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_coords_from_parent;
  gdouble y_o {};
  gdouble x_o {};
  auto parent_y_to_c = parent_y;
  auto parent_x_to_c = parent_x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gdouble) (parent_x_to_c), (gdouble) (parent_y_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// void gdk_window_coords_to_parent (GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
// void gdk_window_coords_to_parent (::GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
void base::WindowBase::coords_to_parent (gdouble x, gdouble y, gdouble * parent_x, gdouble * parent_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_coords_to_parent;
  gdouble parent_y_o {};
  gdouble parent_x_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble*) (parent_x ? &parent_x_o : nullptr), (gdouble*) (parent_y ? &parent_y_o : nullptr));
  if (parent_y) *parent_y = parent_y_o;
  if (parent_x) *parent_x = parent_x_o;
}
std::tuple<gdouble, gdouble> base::WindowBase::coords_to_parent (gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_coords_to_parent;
  gdouble parent_y_o {};
  gdouble parent_x_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble*) (&parent_x_o), (gdouble*) (&parent_y_o));
  return std::make_tuple (parent_x_o, parent_y_o);
}

// GdkGLContext* gdk_window_create_gl_context (GdkWindow* window, GError ** error);
// ::GdkGLContext* gdk_window_create_gl_context (::GdkWindow* window, GError ** error);
Gdk::GLContext base::WindowBase::create_gl_context ()
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkWindow* window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_create_gl_context;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gdk::GLContext base::WindowBase::create_gl_context (GLib::Error * _error) noexcept
{
  typedef ::GdkGLContext* (*call_wrap_t) (::GdkWindow* window, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_create_gl_context;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gdk_window_create_similar_image_surface (GdkWindow* window, cairo_format_t format, int width, int height, int scale);
// ::cairo_surface_t* gdk_window_create_similar_image_surface (::GdkWindow* window, ::cairo_format_t format, gint width, gint height, gint scale);
cairo::Surface base::WindowBase::create_similar_image_surface (cairo::Format format, gint width, gint height, gint scale) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkWindow* window, ::cairo_format_t format, gint width, gint height, gint scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_create_similar_image_surface;
  auto scale_to_c = scale;
  auto height_to_c = height;
  auto width_to_c = width;
  auto format_to_c = gi::unwrap (format);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::cairo_format_t) (format_to_c), (gint) (width_to_c), (gint) (height_to_c), (gint) (scale_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_surface_t* gdk_window_create_similar_surface (GdkWindow* window, cairo_content_t content, int width, int height);
// ::cairo_surface_t* gdk_window_create_similar_surface (::GdkWindow* window, ::cairo_content_t content, gint width, gint height);
cairo::Surface base::WindowBase::create_similar_surface (cairo::Content content, gint width, gint height) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkWindow* window, ::cairo_content_t content, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_create_similar_surface;
  auto height_to_c = height;
  auto width_to_c = width;
  auto content_to_c = gi::unwrap (content);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::cairo_content_t) (content_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_window_deiconify (GdkWindow* window);
// void gdk_window_deiconify (::GdkWindow* window);
void base::WindowBase::deiconify () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_deiconify;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_destroy (GdkWindow* window);
// void gdk_window_destroy (::GdkWindow* window);
void base::WindowBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_destroy;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_destroy_notify (GdkWindow* window);
// void gdk_window_destroy_notify (::GdkWindow* window);
// IGNORE; marked ignore

// void gdk_window_enable_synchronized_configure (GdkWindow* window);
// void gdk_window_enable_synchronized_configure (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_end_draw_frame (GdkWindow* window, GdkDrawingContext* context);
// void gdk_window_end_draw_frame (::GdkWindow* window, ::GdkDrawingContext* context);
void base::WindowBase::end_draw_frame (Gdk::DrawingContext context) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkDrawingContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_end_draw_frame;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDrawingContext*) (context_to_c));
}

// void gdk_window_end_paint (GdkWindow* window);
// void gdk_window_end_paint (::GdkWindow* window);
void base::WindowBase::end_paint () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_end_paint;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// gboolean gdk_window_ensure_native (GdkWindow* window);
// gboolean gdk_window_ensure_native (::GdkWindow* window);
bool base::WindowBase::ensure_native () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_ensure_native;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// void gdk_window_flush (GdkWindow* window);
// void gdk_window_flush (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_focus (GdkWindow* window, guint32 timestamp);
// void gdk_window_focus (::GdkWindow* window, guint32 timestamp);
void base::WindowBase::focus (guint32 timestamp) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, guint32 timestamp);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_focus;
  auto timestamp_to_c = timestamp;
  call_wrap_v ((::GdkWindow*) (gobj_()), (guint32) (timestamp_to_c));
}

// void gdk_window_freeze_toplevel_updates_libgtk_only (GdkWindow* window);
// void gdk_window_freeze_toplevel_updates_libgtk_only (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_freeze_updates (GdkWindow* window);
// void gdk_window_freeze_updates (::GdkWindow* window);
void base::WindowBase::freeze_updates () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_freeze_updates;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_fullscreen (GdkWindow* window);
// void gdk_window_fullscreen (::GdkWindow* window);
void base::WindowBase::fullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_fullscreen;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_fullscreen_on_monitor (GdkWindow* window, gint monitor);
// void gdk_window_fullscreen_on_monitor (::GdkWindow* window, gint monitor);
void base::WindowBase::fullscreen_on_monitor (gint monitor) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint monitor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_fullscreen_on_monitor;
  auto monitor_to_c = monitor;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (monitor_to_c));
}

// void gdk_window_geometry_changed (GdkWindow* window);
// void gdk_window_geometry_changed (::GdkWindow* window);
void base::WindowBase::geometry_changed () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_geometry_changed;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// gboolean gdk_window_get_accept_focus (GdkWindow* window);
// gboolean gdk_window_get_accept_focus (::GdkWindow* window);
bool base::WindowBase::get_accept_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_accept_focus;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// cairo_pattern_t* gdk_window_get_background_pattern (GdkWindow* window);
// ::cairo_pattern_t* gdk_window_get_background_pattern (::GdkWindow* window);
// IGNORE; deprecated

// GList* gdk_window_get_children (GdkWindow* window);
// ::GList* gdk_window_get_children (::GdkWindow* window);
std::vector<Gdk::Window> base::WindowBase::get_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_children;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Window> (_temp_ret, gi::transfer_container);
}

// GList* gdk_window_get_children_with_user_data (GdkWindow* window, gpointer user_data);
// ::GList* gdk_window_get_children_with_user_data (::GdkWindow* window, void* user_data);
std::vector<Gdk::Window> base::WindowBase::get_children_with_user_data (void* user_data) noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkWindow* window, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_children_with_user_data;
  auto user_data_to_c = user_data;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (void*) (user_data_to_c));
  return gi::detail::wrap_list<Gdk::Window> (_temp_ret, gi::transfer_container);
}

// cairo_region_t* gdk_window_get_clip_region (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_clip_region (::GdkWindow* window);
cairo::Region base::WindowBase::get_clip_region () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_clip_region;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean gdk_window_get_composited (GdkWindow* window);
// gboolean gdk_window_get_composited (::GdkWindow* window);
// IGNORE; deprecated

// GdkCursor* gdk_window_get_cursor (GdkWindow* window);
// ::GdkCursor* gdk_window_get_cursor (::GdkWindow* window);
Gdk::Cursor base::WindowBase::get_cursor () noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_cursor;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_window_get_decorations (GdkWindow* window, GdkWMDecoration* decorations);
// gboolean gdk_window_get_decorations (::GdkWindow* window, ::GdkWMDecoration* decorations);
bool base::WindowBase::get_decorations (Gdk::WMDecoration & decorations) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window, ::GdkWMDecoration* decorations);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_decorations;
  ::GdkWMDecoration decorations_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWMDecoration*) (&decorations_o));
  decorations = gi::wrap (decorations_o);
  return _temp_ret;
}
std::tuple<bool, Gdk::WMDecoration> base::WindowBase::get_decorations () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window, ::GdkWMDecoration* decorations);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_decorations;
  ::GdkWMDecoration decorations_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWMDecoration*) (&decorations_o));
  return std::make_tuple (_temp_ret, gi::wrap (decorations_o));
}

// GdkCursor* gdk_window_get_device_cursor (GdkWindow* window, GdkDevice* device);
// ::GdkCursor* gdk_window_get_device_cursor (::GdkWindow* window, ::GdkDevice* device);
Gdk::Cursor base::WindowBase::get_device_cursor (Gdk::Device device) noexcept
{
  typedef ::GdkCursor* (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_cursor;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkEventMask gdk_window_get_device_events (GdkWindow* window, GdkDevice* device);
// ::GdkEventMask gdk_window_get_device_events (::GdkWindow* window, ::GdkDevice* device);
Gdk::EventMask base::WindowBase::get_device_events (Gdk::Device device) noexcept
{
  typedef ::GdkEventMask (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_events;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c));
  return gi::wrap (_temp_ret);
}

// GdkWindow* gdk_window_get_device_position (GdkWindow* window, GdkDevice* device, gint* x, gint* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_device_position (::GdkWindow* window, ::GdkDevice* device, gint* x, gint* y, ::GdkModifierType* mask);
Gdk::Window base::WindowBase::get_device_position (Gdk::Device device, gint * x, gint * y, Gdk::ModifierType * mask) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, gint* x, gint* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_position;
  ::GdkModifierType mask_o {};
  gint y_o {};
  gint x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr), (::GdkModifierType*) (mask ? &mask_o : nullptr));
  if (mask) *mask = gi::wrap (mask_o);
  if (y) *y = y_o;
  if (x) *x = x_o;
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Window, gint, gint, Gdk::ModifierType> base::WindowBase::get_device_position (Gdk::Device device) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, gint* x, gint* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_position;
  ::GdkModifierType mask_o {};
  gint y_o {};
  gint x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (gint*) (&x_o), (gint*) (&y_o), (::GdkModifierType*) (&mask_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), x_o, y_o, gi::wrap (mask_o));
}

// GdkWindow* gdk_window_get_device_position_double (GdkWindow* window, GdkDevice* device, gdouble* x, gdouble* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_device_position_double (::GdkWindow* window, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
Gdk::Window base::WindowBase::get_device_position_double (Gdk::Device device, gdouble * x, gdouble * y, Gdk::ModifierType * mask) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_position_double;
  ::GdkModifierType mask_o {};
  gdouble y_o {};
  gdouble x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (gdouble*) (x ? &x_o : nullptr), (gdouble*) (y ? &y_o : nullptr), (::GdkModifierType*) (mask ? &mask_o : nullptr));
  if (mask) *mask = gi::wrap (mask_o);
  if (y) *y = y_o;
  if (x) *x = x_o;
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<Gdk::Window, gdouble, gdouble, Gdk::ModifierType> base::WindowBase::get_device_position_double (Gdk::Device device) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_device_position_double;
  ::GdkModifierType mask_o {};
  gdouble y_o {};
  gdouble x_o {};
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (gdouble*) (&x_o), (gdouble*) (&y_o), (::GdkModifierType*) (&mask_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), x_o, y_o, gi::wrap (mask_o));
}

// GdkDisplay* gdk_window_get_display (GdkWindow* window);
// ::GdkDisplay* gdk_window_get_display (::GdkWindow* window);
Gdk::Display base::WindowBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_display;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkDragProtocol gdk_window_get_drag_protocol (GdkWindow* window, GdkWindow** target);
// ::GdkDragProtocol gdk_window_get_drag_protocol (::GdkWindow* window, ::GdkWindow** target);
Gdk::DragProtocol base::WindowBase::get_drag_protocol (Gdk::Window * target) noexcept
{
  typedef ::GdkDragProtocol (*call_wrap_t) (::GdkWindow* window, ::GdkWindow** target);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_drag_protocol;
  ::GdkWindow* target_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow**) (target ? &target_o : nullptr));
  if (target) *target = gi::wrap (target_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gdk::DragProtocol, Gdk::Window> base::WindowBase::get_drag_protocol () noexcept
{
  typedef ::GdkDragProtocol (*call_wrap_t) (::GdkWindow* window, ::GdkWindow** target);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_drag_protocol;
  ::GdkWindow* target_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow**) (&target_o));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (target_o, gi::transfer_full, gi::direction_out));
}

// GdkWindow* gdk_window_get_effective_parent (GdkWindow* window);
// ::GdkWindow* gdk_window_get_effective_parent (::GdkWindow* window);
Gdk::Window base::WindowBase::get_effective_parent () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_effective_parent;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gdk_window_get_effective_toplevel (GdkWindow* window);
// ::GdkWindow* gdk_window_get_effective_toplevel (::GdkWindow* window);
Gdk::Window base::WindowBase::get_effective_toplevel () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_effective_toplevel;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_window_get_event_compression (GdkWindow* window);
// gboolean gdk_window_get_event_compression (::GdkWindow* window);
bool base::WindowBase::get_event_compression () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_event_compression;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkEventMask gdk_window_get_events (GdkWindow* window);
// ::GdkEventMask gdk_window_get_events (::GdkWindow* window);
Gdk::EventMask base::WindowBase::get_events () noexcept
{
  typedef ::GdkEventMask (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_events;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_window_get_focus_on_map (GdkWindow* window);
// gboolean gdk_window_get_focus_on_map (::GdkWindow* window);
bool base::WindowBase::get_focus_on_map () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_focus_on_map;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkFrameClock* gdk_window_get_frame_clock (GdkWindow* window);
// ::GdkFrameClock* gdk_window_get_frame_clock (::GdkWindow* window);
Gdk::FrameClock base::WindowBase::get_frame_clock () noexcept
{
  typedef ::GdkFrameClock* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_frame_clock;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_window_get_frame_extents (GdkWindow* window, GdkRectangle* rect);
// void gdk_window_get_frame_extents (::GdkWindow* window, ::GdkRectangle* rect);
void base::WindowBase::get_frame_extents (Gdk::Rectangle & rect) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_frame_extents;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}
Gdk::Rectangle base::WindowBase::get_frame_extents () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_frame_extents;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
}

// GdkFullscreenMode gdk_window_get_fullscreen_mode (GdkWindow* window);
// ::GdkFullscreenMode gdk_window_get_fullscreen_mode (::GdkWindow* window);
Gdk::FullscreenMode base::WindowBase::get_fullscreen_mode () noexcept
{
  typedef ::GdkFullscreenMode (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_fullscreen_mode;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gdk_window_get_geometry (GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
// void gdk_window_get_geometry (::GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
void base::WindowBase::get_geometry (gint * x, gint * y, gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_geometry;
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint, gint, gint> base::WindowBase::get_geometry () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_geometry;
  gint height_o {};
  gint width_o {};
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (x_o, y_o, width_o, height_o);
}

// GdkWindow* gdk_window_get_group (GdkWindow* window);
// ::GdkWindow* gdk_window_get_group (::GdkWindow* window);
Gdk::Window base::WindowBase::get_group () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_group;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gdk_window_get_height (GdkWindow* window);
// gint gdk_window_get_height (::GdkWindow* window);
gint base::WindowBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_height;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_window_get_modal_hint (GdkWindow* window);
// gboolean gdk_window_get_modal_hint (::GdkWindow* window);
bool base::WindowBase::get_modal_hint () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_modal_hint;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gint gdk_window_get_origin (GdkWindow* window, gint* x, gint* y);
// gint gdk_window_get_origin (::GdkWindow* window, gint* x, gint* y);
gint base::WindowBase::get_origin (gint * x, gint * y) noexcept
{
  typedef gint (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_origin;
  gint y_o {};
  gint x_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
  return _temp_ret;
}
std::tuple<gint, gint, gint> base::WindowBase::get_origin () noexcept
{
  typedef gint (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_origin;
  gint y_o {};
  gint x_o {};
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (_temp_ret, x_o, y_o);
}

// GdkWindow* gdk_window_get_parent (GdkWindow* window);
// ::GdkWindow* gdk_window_get_parent (::GdkWindow* window);
Gdk::Window base::WindowBase::get_parent () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_parent;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_window_get_pass_through (GdkWindow* window);
// gboolean gdk_window_get_pass_through (::GdkWindow* window);
bool base::WindowBase::get_pass_through () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_pass_through;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkWindow* gdk_window_get_pointer (GdkWindow* window, gint* x, gint* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_pointer (::GdkWindow* window, gint* x, gint* y, ::GdkModifierType* mask);
// IGNORE; deprecated

// void gdk_window_get_position (GdkWindow* window, gint* x, gint* y);
// void gdk_window_get_position (::GdkWindow* window, gint* x, gint* y);
void base::WindowBase::get_position (gint * x, gint * y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_position;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (x ? &x_o : nullptr), (gint*) (y ? &y_o : nullptr));
  if (y) *y = y_o;
  if (x) *x = x_o;
}
std::tuple<gint, gint> base::WindowBase::get_position () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_position;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// void gdk_window_get_root_coords (GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
// void gdk_window_get_root_coords (::GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
void base::WindowBase::get_root_coords (gint x, gint y, gint & root_x, gint & root_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_root_coords;
  gint root_y_o {};
  gint root_x_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint*) (&root_x_o), (gint*) (&root_y_o));
  root_y = root_y_o;
  root_x = root_x_o;
}
std::tuple<gint, gint> base::WindowBase::get_root_coords (gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_root_coords;
  gint root_y_o {};
  gint root_x_o {};
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint*) (&root_x_o), (gint*) (&root_y_o));
  return std::make_tuple (root_x_o, root_y_o);
}

// void gdk_window_get_root_origin (GdkWindow* window, gint* x, gint* y);
// void gdk_window_get_root_origin (::GdkWindow* window, gint* x, gint* y);
void base::WindowBase::get_root_origin (gint & x, gint & y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_root_origin;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  y = y_o;
  x = x_o;
}
std::tuple<gint, gint> base::WindowBase::get_root_origin () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint* x, gint* y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_root_origin;
  gint y_o {};
  gint x_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint*) (&x_o), (gint*) (&y_o));
  return std::make_tuple (x_o, y_o);
}

// gint gdk_window_get_scale_factor (GdkWindow* window);
// gint gdk_window_get_scale_factor (::GdkWindow* window);
gint base::WindowBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkScreen* gdk_window_get_screen (GdkWindow* window);
// ::GdkScreen* gdk_window_get_screen (::GdkWindow* window);
Gdk::Screen base::WindowBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_screen;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkEventMask gdk_window_get_source_events (GdkWindow* window, GdkInputSource source);
// ::GdkEventMask gdk_window_get_source_events (::GdkWindow* window, ::GdkInputSource source);
Gdk::EventMask base::WindowBase::get_source_events (Gdk::InputSource source) noexcept
{
  typedef ::GdkEventMask (*call_wrap_t) (::GdkWindow* window, ::GdkInputSource source);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_source_events;
  auto source_to_c = gi::unwrap (source);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkInputSource) (source_to_c));
  return gi::wrap (_temp_ret);
}

// GdkWindowState gdk_window_get_state (GdkWindow* window);
// ::GdkWindowState gdk_window_get_state (::GdkWindow* window);
Gdk::WindowState base::WindowBase::get_state () noexcept
{
  typedef ::GdkWindowState (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_state;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_window_get_support_multidevice (GdkWindow* window);
// gboolean gdk_window_get_support_multidevice (::GdkWindow* window);
bool base::WindowBase::get_support_multidevice () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_support_multidevice;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkWindow* gdk_window_get_toplevel (GdkWindow* window);
// ::GdkWindow* gdk_window_get_toplevel (::GdkWindow* window);
Gdk::Window base::WindowBase::get_toplevel () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_toplevel;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindowTypeHint gdk_window_get_type_hint (GdkWindow* window);
// ::GdkWindowTypeHint gdk_window_get_type_hint (::GdkWindow* window);
Gdk::WindowTypeHint base::WindowBase::get_type_hint () noexcept
{
  typedef ::GdkWindowTypeHint (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_type_hint;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// cairo_region_t* gdk_window_get_update_area (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_update_area (::GdkWindow* window);
cairo::Region base::WindowBase::get_update_area () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_update_area;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_window_get_user_data (GdkWindow* window, gpointer* data);
// void gdk_window_get_user_data (::GdkWindow* window, void** data);
void base::WindowBase::get_user_data (gpointer & data) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_user_data;
  void* data_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (void**) (&data_o));
  data = data_o;
}
gpointer base::WindowBase::get_user_data () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, void** data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_user_data;
  void* data_o {};
  call_wrap_v ((::GdkWindow*) (gobj_()), (void**) (&data_o));
  return data_o;
}

// cairo_region_t* gdk_window_get_visible_region (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_visible_region (::GdkWindow* window);
cairo::Region base::WindowBase::get_visible_region () noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_visible_region;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkVisual* gdk_window_get_visual (GdkWindow* window);
// ::GdkVisual* gdk_window_get_visual (::GdkWindow* window);
Gdk::Visual base::WindowBase::get_visual () noexcept
{
  typedef ::GdkVisual* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_visual;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gdk_window_get_width (GdkWindow* window);
// gint gdk_window_get_width (::GdkWindow* window);
gint base::WindowBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_width;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// GdkWindowType gdk_window_get_window_type (GdkWindow* window);
// ::GdkWindowType gdk_window_get_window_type (::GdkWindow* window);
Gdk::WindowType base::WindowBase::get_window_type () noexcept
{
  typedef ::GdkWindowType (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_get_window_type;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gdk_window_has_native (GdkWindow* window);
// gboolean gdk_window_has_native (::GdkWindow* window);
bool base::WindowBase::has_native () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_has_native;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// void gdk_window_hide (GdkWindow* window);
// void gdk_window_hide (::GdkWindow* window);
void base::WindowBase::hide () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_hide;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_iconify (GdkWindow* window);
// void gdk_window_iconify (::GdkWindow* window);
void base::WindowBase::iconify () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_iconify;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_input_shape_combine_region (GdkWindow* window, const cairo_region_t* shape_region, gint offset_x, gint offset_y);
// void gdk_window_input_shape_combine_region (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
void base::WindowBase::input_shape_combine_region (const cairo::Region & shape_region, gint offset_x, gint offset_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_input_shape_combine_region;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto shape_region_to_c = gi::unwrap (shape_region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (shape_region_to_c), (gint) (offset_x_to_c), (gint) (offset_y_to_c));
}

// void gdk_window_invalidate_maybe_recurse (GdkWindow* window, const cairo_region_t* region, GdkWindowChildFunc child_func, gpointer user_data);
// void gdk_window_invalidate_maybe_recurse (::GdkWindow* window, const ::cairo_region_t* region, Gdk::WindowChildFunc::cfunction_type child_func, void* user_data);
void base::WindowBase::invalidate_maybe_recurse (const cairo::Region & region, Gdk::WindowChildFunc child_func) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* region, Gdk::WindowChildFunc::cfunction_type child_func, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_invalidate_maybe_recurse;
  auto child_func_wrap_ = child_func ? unwrap (std::move (child_func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(child_func_wrap_)>::type> child_func_wrap__sp (child_func_wrap_);
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (region_to_c), (Gdk::WindowChildFunc::cfunction_type) (child_func_wrap_ ? &child_func_wrap_->wrapper : nullptr), (void*) (child_func_wrap_));
}

// void gdk_window_invalidate_rect (GdkWindow* window, const GdkRectangle* rect, gboolean invalidate_children);
// void gdk_window_invalidate_rect (::GdkWindow* window, const ::GdkRectangle* rect, gboolean invalidate_children);
void base::WindowBase::invalidate_rect (const Gdk::Rectangle & rect, gboolean invalidate_children) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::GdkRectangle* rect, gboolean invalidate_children);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_invalidate_rect;
  auto invalidate_children_to_c = invalidate_children;
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::GdkRectangle*) (rect_to_c), (gboolean) (invalidate_children_to_c));
}
void base::WindowBase::invalidate_rect (gboolean invalidate_children) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::GdkRectangle* rect, gboolean invalidate_children);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_invalidate_rect;
  auto invalidate_children_to_c = invalidate_children;
  auto rect_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::GdkRectangle*) (rect_to_c), (gboolean) (invalidate_children_to_c));
}

// void gdk_window_invalidate_region (GdkWindow* window, const cairo_region_t* region, gboolean invalidate_children);
// void gdk_window_invalidate_region (::GdkWindow* window, const ::cairo_region_t* region, gboolean invalidate_children);
void base::WindowBase::invalidate_region (const cairo::Region & region, gboolean invalidate_children) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* region, gboolean invalidate_children);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_invalidate_region;
  auto invalidate_children_to_c = invalidate_children;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (region_to_c), (gboolean) (invalidate_children_to_c));
}

// gboolean gdk_window_is_destroyed (GdkWindow* window);
// gboolean gdk_window_is_destroyed (::GdkWindow* window);
bool base::WindowBase::is_destroyed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_is_destroyed;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_window_is_input_only (GdkWindow* window);
// gboolean gdk_window_is_input_only (::GdkWindow* window);
bool base::WindowBase::is_input_only () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_is_input_only;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_window_is_shaped (GdkWindow* window);
// gboolean gdk_window_is_shaped (::GdkWindow* window);
bool base::WindowBase::is_shaped () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_is_shaped;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_window_is_viewable (GdkWindow* window);
// gboolean gdk_window_is_viewable (::GdkWindow* window);
bool base::WindowBase::is_viewable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_is_viewable;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// gboolean gdk_window_is_visible (GdkWindow* window);
// gboolean gdk_window_is_visible (::GdkWindow* window);
bool base::WindowBase::is_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_is_visible;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return _temp_ret;
}

// void gdk_window_lower (GdkWindow* window);
// void gdk_window_lower (::GdkWindow* window);
void base::WindowBase::lower () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_lower;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_mark_paint_from_clip (GdkWindow* window, cairo_t* cr);
// void gdk_window_mark_paint_from_clip (::GdkWindow* window, ::cairo_t* cr);
void base::WindowBase::mark_paint_from_clip (cairo::Context cr) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_mark_paint_from_clip;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::cairo_t*) (cr_to_c));
}

// void gdk_window_maximize (GdkWindow* window);
// void gdk_window_maximize (::GdkWindow* window);
void base::WindowBase::maximize () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_maximize;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_merge_child_input_shapes (GdkWindow* window);
// void gdk_window_merge_child_input_shapes (::GdkWindow* window);
void base::WindowBase::merge_child_input_shapes () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_merge_child_input_shapes;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_merge_child_shapes (GdkWindow* window);
// void gdk_window_merge_child_shapes (::GdkWindow* window);
void base::WindowBase::merge_child_shapes () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_merge_child_shapes;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_move (GdkWindow* window, gint x, gint y);
// void gdk_window_move (::GdkWindow* window, gint x, gint y);
void base::WindowBase::move (gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_move;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c));
}

// void gdk_window_move_region (GdkWindow* window, const cairo_region_t* region, gint dx, gint dy);
// void gdk_window_move_region (::GdkWindow* window, const ::cairo_region_t* region, gint dx, gint dy);
void base::WindowBase::move_region (const cairo::Region & region, gint dx, gint dy) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* region, gint dx, gint dy);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_move_region;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (region_to_c), (gint) (dx_to_c), (gint) (dy_to_c));
}

// void gdk_window_move_resize (GdkWindow* window, gint x, gint y, gint width, gint height);
// void gdk_window_move_resize (::GdkWindow* window, gint x, gint y, gint width, gint height);
void base::WindowBase::move_resize (gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_move_resize;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void gdk_window_move_to_rect (GdkWindow* window, const GdkRectangle* rect, GdkGravity rect_anchor, GdkGravity window_anchor, GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
// void gdk_window_move_to_rect (::GdkWindow* window, const ::GdkRectangle* rect, ::GdkGravity rect_anchor, ::GdkGravity window_anchor, ::GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
void base::WindowBase::move_to_rect (const Gdk::Rectangle & rect, Gdk::Gravity rect_anchor, Gdk::Gravity window_anchor, Gdk::AnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::GdkRectangle* rect, ::GdkGravity rect_anchor, ::GdkGravity window_anchor, ::GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_move_to_rect;
  auto rect_anchor_dy_to_c = rect_anchor_dy;
  auto rect_anchor_dx_to_c = rect_anchor_dx;
  auto anchor_hints_to_c = gi::unwrap (anchor_hints);
  auto window_anchor_to_c = gi::unwrap (window_anchor);
  auto rect_anchor_to_c = gi::unwrap (rect_anchor);
  auto rect_to_c = gi::unwrap (rect, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::GdkRectangle*) (rect_to_c), (::GdkGravity) (rect_anchor_to_c), (::GdkGravity) (window_anchor_to_c), (::GdkAnchorHints) (anchor_hints_to_c), (gint) (rect_anchor_dx_to_c), (gint) (rect_anchor_dy_to_c));
}

// GList* gdk_window_peek_children (GdkWindow* window);
// ::GList* gdk_window_peek_children (::GdkWindow* window);
std::vector<Gdk::Window> base::WindowBase::peek_children () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_peek_children;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()));
  return gi::detail::wrap_list<Gdk::Window> (_temp_ret, gi::transfer_none);
}

// void gdk_window_process_updates (GdkWindow* window, gboolean update_children);
// void gdk_window_process_updates (::GdkWindow* window, gboolean update_children);
// IGNORE; deprecated

// void gdk_window_raise (GdkWindow* window);
// void gdk_window_raise (::GdkWindow* window);
void base::WindowBase::raise () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_raise;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_register_dnd (GdkWindow* window);
// void gdk_window_register_dnd (::GdkWindow* window);
void base::WindowBase::register_dnd () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_register_dnd;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_remove_filter (GdkWindow* window, GdkFilterFunc function, gpointer data);
// void gdk_window_remove_filter (::GdkWindow* window,  function, void* data);
// IGNORE; not introspectable, function type  not supported

// void gdk_window_reparent (GdkWindow* window, GdkWindow* new_parent, gint x, gint y);
// void gdk_window_reparent (::GdkWindow* window, ::GdkWindow* new_parent, gint x, gint y);
void base::WindowBase::reparent (Gdk::Window new_parent, gint x, gint y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* new_parent, gint x, gint y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_reparent;
  auto y_to_c = y;
  auto x_to_c = x;
  auto new_parent_to_c = gi::unwrap (new_parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (new_parent_to_c), (gint) (x_to_c), (gint) (y_to_c));
}

// void gdk_window_resize (GdkWindow* window, gint width, gint height);
// void gdk_window_resize (::GdkWindow* window, gint width, gint height);
void base::WindowBase::resize (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_resize;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gdk_window_restack (GdkWindow* window, GdkWindow* sibling, gboolean above);
// void gdk_window_restack (::GdkWindow* window, ::GdkWindow* sibling, gboolean above);
void base::WindowBase::restack (Gdk::Window sibling, gboolean above) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* sibling, gboolean above);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_restack;
  auto above_to_c = above;
  auto sibling_to_c = gi::unwrap (sibling, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (sibling_to_c), (gboolean) (above_to_c));
}
void base::WindowBase::restack (gboolean above) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* sibling, gboolean above);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_restack;
  auto above_to_c = above;
  auto sibling_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (sibling_to_c), (gboolean) (above_to_c));
}

// void gdk_window_scroll (GdkWindow* window, gint dx, gint dy);
// void gdk_window_scroll (::GdkWindow* window, gint dx, gint dy);
void base::WindowBase::scroll (gint dx, gint dy) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint dx, gint dy);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_scroll;
  auto dy_to_c = dy;
  auto dx_to_c = dx;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (dx_to_c), (gint) (dy_to_c));
}

// void gdk_window_set_accept_focus (GdkWindow* window, gboolean accept_focus);
// void gdk_window_set_accept_focus (::GdkWindow* window, gboolean accept_focus);
void base::WindowBase::set_accept_focus (gboolean accept_focus) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean accept_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_accept_focus;
  auto accept_focus_to_c = accept_focus;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (accept_focus_to_c));
}

// void gdk_window_set_background (GdkWindow* window, const GdkColor* color);
// void gdk_window_set_background (::GdkWindow* window, const  color);
// IGNORE; deprecated

// void gdk_window_set_background_pattern (GdkWindow* window, cairo_pattern_t* pattern);
// void gdk_window_set_background_pattern (::GdkWindow* window, ::cairo_pattern_t* pattern);
// IGNORE; deprecated

// void gdk_window_set_background_rgba (GdkWindow* window, const GdkRGBA* rgba);
// void gdk_window_set_background_rgba (::GdkWindow* window, const ::GdkRGBA* rgba);
// IGNORE; deprecated

// void gdk_window_set_child_input_shapes (GdkWindow* window);
// void gdk_window_set_child_input_shapes (::GdkWindow* window);
void base::WindowBase::set_child_input_shapes () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_child_input_shapes;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_set_child_shapes (GdkWindow* window);
// void gdk_window_set_child_shapes (::GdkWindow* window);
void base::WindowBase::set_child_shapes () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_child_shapes;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_set_composited (GdkWindow* window, gboolean composited);
// void gdk_window_set_composited (::GdkWindow* window, gboolean composited);
// IGNORE; deprecated

// void gdk_window_set_cursor (GdkWindow* window, GdkCursor* cursor);
// void gdk_window_set_cursor (::GdkWindow* window, ::GdkCursor* cursor);
void base::WindowBase::set_cursor (Gdk::Cursor cursor) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_cursor;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}
void base::WindowBase::set_cursor () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_cursor;
  auto cursor_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkCursor*) (cursor_to_c));
}

// void gdk_window_set_decorations (GdkWindow* window, GdkWMDecoration decorations);
// void gdk_window_set_decorations (::GdkWindow* window, ::GdkWMDecoration decorations);
void base::WindowBase::set_decorations (Gdk::WMDecoration decorations) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWMDecoration decorations);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_decorations;
  auto decorations_to_c = gi::unwrap (decorations);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWMDecoration) (decorations_to_c));
}

// void gdk_window_set_device_cursor (GdkWindow* window, GdkDevice* device, GdkCursor* cursor);
// void gdk_window_set_device_cursor (::GdkWindow* window, ::GdkDevice* device, ::GdkCursor* cursor);
void base::WindowBase::set_device_cursor (Gdk::Device device, Gdk::Cursor cursor) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, ::GdkCursor* cursor);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_device_cursor;
  auto cursor_to_c = gi::unwrap (cursor, gi::transfer_none, gi::direction_in);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (::GdkCursor*) (cursor_to_c));
}

// void gdk_window_set_device_events (GdkWindow* window, GdkDevice* device, GdkEventMask event_mask);
// void gdk_window_set_device_events (::GdkWindow* window, ::GdkDevice* device, ::GdkEventMask event_mask);
void base::WindowBase::set_device_events (Gdk::Device device, Gdk::EventMask event_mask) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkDevice* device, ::GdkEventMask event_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_device_events;
  auto event_mask_to_c = gi::unwrap (event_mask);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkDevice*) (device_to_c), (::GdkEventMask) (event_mask_to_c));
}

// void gdk_window_set_event_compression (GdkWindow* window, gboolean event_compression);
// void gdk_window_set_event_compression (::GdkWindow* window, gboolean event_compression);
void base::WindowBase::set_event_compression (gboolean event_compression) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean event_compression);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_event_compression;
  auto event_compression_to_c = event_compression;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (event_compression_to_c));
}

// void gdk_window_set_events (GdkWindow* window, GdkEventMask event_mask);
// void gdk_window_set_events (::GdkWindow* window, ::GdkEventMask event_mask);
void base::WindowBase::set_events (Gdk::EventMask event_mask) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkEventMask event_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_events;
  auto event_mask_to_c = gi::unwrap (event_mask);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkEventMask) (event_mask_to_c));
}

// void gdk_window_set_focus_on_map (GdkWindow* window, gboolean focus_on_map);
// void gdk_window_set_focus_on_map (::GdkWindow* window, gboolean focus_on_map);
void base::WindowBase::set_focus_on_map (gboolean focus_on_map) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean focus_on_map);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_focus_on_map;
  auto focus_on_map_to_c = focus_on_map;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (focus_on_map_to_c));
}

// void gdk_window_set_fullscreen_mode (GdkWindow* window, GdkFullscreenMode mode);
// void gdk_window_set_fullscreen_mode (::GdkWindow* window, ::GdkFullscreenMode mode);
void base::WindowBase::set_fullscreen_mode (Gdk::FullscreenMode mode) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkFullscreenMode mode);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_fullscreen_mode;
  auto mode_to_c = gi::unwrap (mode);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkFullscreenMode) (mode_to_c));
}

// void gdk_window_set_functions (GdkWindow* window, GdkWMFunction functions);
// void gdk_window_set_functions (::GdkWindow* window, ::GdkWMFunction functions);
void base::WindowBase::set_functions (Gdk::WMFunction functions) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWMFunction functions);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_functions;
  auto functions_to_c = gi::unwrap (functions);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWMFunction) (functions_to_c));
}

// void gdk_window_set_geometry_hints (GdkWindow* window, const GdkGeometry* geometry, GdkWindowHints geom_mask);
// void gdk_window_set_geometry_hints (::GdkWindow* window, const ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
void base::WindowBase::set_geometry_hints (const Gdk::Geometry & geometry, Gdk::WindowHints geom_mask) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_geometry_hints;
  auto geom_mask_to_c = gi::unwrap (geom_mask);
  auto geometry_to_c = gi::unwrap (geometry, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::GdkGeometry*) (geometry_to_c), (::GdkWindowHints) (geom_mask_to_c));
}

// void gdk_window_set_group (GdkWindow* window, GdkWindow* leader);
// void gdk_window_set_group (::GdkWindow* window, ::GdkWindow* leader);
void base::WindowBase::set_group (Gdk::Window leader) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* leader);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_group;
  auto leader_to_c = gi::unwrap (leader, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (leader_to_c));
}
void base::WindowBase::set_group () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* leader);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_group;
  auto leader_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (leader_to_c));
}

// void gdk_window_set_icon_list (GdkWindow* window, GList* pixbufs);
// void gdk_window_set_icon_list (::GdkWindow* window, ::GList* pixbufs);
void base::WindowBase::set_icon_list (const std::vector<GdkPixbuf::Pixbuf> & pixbufs) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GList* pixbufs);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_icon_list;
  auto pixbufs_i = detail::make_list_unwrap_range<::GList> (pixbufs);
  auto pixbufs_w = unwrap (pixbufs_i, gi::transfer_none, direction_in);
  auto pixbufs_to_c = pixbufs_w.gobj_(false);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GList*) (pixbufs_to_c));
}

// void gdk_window_set_icon_name (GdkWindow* window, const gchar* name);
// void gdk_window_set_icon_name (::GdkWindow* window, const char* name);
void base::WindowBase::set_icon_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_icon_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const char*) (name_to_c));
}
void base::WindowBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_icon_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (const char*) (name_to_c));
}

// void gdk_window_set_invalidate_handler (GdkWindow* window, GdkWindowInvalidateHandlerFunc handler);
// void gdk_window_set_invalidate_handler (::GdkWindow* window,  handler);
// IGNORE; not introspectable, handler type  not supported

// void gdk_window_set_keep_above (GdkWindow* window, gboolean setting);
// void gdk_window_set_keep_above (::GdkWindow* window, gboolean setting);
void base::WindowBase::set_keep_above (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_keep_above;
  auto setting_to_c = setting;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gdk_window_set_keep_below (GdkWindow* window, gboolean setting);
// void gdk_window_set_keep_below (::GdkWindow* window, gboolean setting);
void base::WindowBase::set_keep_below (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_keep_below;
  auto setting_to_c = setting;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (setting_to_c));
}

// void gdk_window_set_modal_hint (GdkWindow* window, gboolean modal);
// void gdk_window_set_modal_hint (::GdkWindow* window, gboolean modal);
void base::WindowBase::set_modal_hint (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_modal_hint;
  auto modal_to_c = modal;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (modal_to_c));
}

// void gdk_window_set_opacity (GdkWindow* window, gdouble opacity);
// void gdk_window_set_opacity (::GdkWindow* window, gdouble opacity);
void base::WindowBase::set_opacity (gdouble opacity) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gdouble opacity);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_opacity;
  auto opacity_to_c = opacity;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gdouble) (opacity_to_c));
}

// void gdk_window_set_opaque_region (GdkWindow* window, cairo_region_t* region);
// void gdk_window_set_opaque_region (::GdkWindow* window, ::cairo_region_t* region);
void base::WindowBase::set_opaque_region (cairo::Region region) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_opaque_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::WindowBase::set_opaque_region () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_opaque_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gdk_window_set_override_redirect (GdkWindow* window, gboolean override_redirect);
// void gdk_window_set_override_redirect (::GdkWindow* window, gboolean override_redirect);
void base::WindowBase::set_override_redirect (gboolean override_redirect) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean override_redirect);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_override_redirect;
  auto override_redirect_to_c = override_redirect;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (override_redirect_to_c));
}

// void gdk_window_set_pass_through (GdkWindow* window, gboolean pass_through);
// void gdk_window_set_pass_through (::GdkWindow* window, gboolean pass_through);
void base::WindowBase::set_pass_through (gboolean pass_through) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean pass_through);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_pass_through;
  auto pass_through_to_c = pass_through;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (pass_through_to_c));
}

// void gdk_window_set_role (GdkWindow* window, const gchar* role);
// void gdk_window_set_role (::GdkWindow* window, const char* role);
void base::WindowBase::set_role (const std::string & role) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const char* role);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_role;
  auto role_to_c = gi::unwrap (role, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const char*) (role_to_c));
}

// void gdk_window_set_shadow_width (GdkWindow* window, gint left, gint right, gint top, gint bottom);
// void gdk_window_set_shadow_width (::GdkWindow* window, gint left, gint right, gint top, gint bottom);
void base::WindowBase::set_shadow_width (gint left, gint right, gint top, gint bottom) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gint left, gint right, gint top, gint bottom);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_shadow_width;
  auto bottom_to_c = bottom;
  auto top_to_c = top;
  auto right_to_c = right;
  auto left_to_c = left;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (left_to_c), (gint) (right_to_c), (gint) (top_to_c), (gint) (bottom_to_c));
}

// void gdk_window_set_skip_pager_hint (GdkWindow* window, gboolean skips_pager);
// void gdk_window_set_skip_pager_hint (::GdkWindow* window, gboolean skips_pager);
void base::WindowBase::set_skip_pager_hint (gboolean skips_pager) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean skips_pager);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_skip_pager_hint;
  auto skips_pager_to_c = skips_pager;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (skips_pager_to_c));
}

// void gdk_window_set_skip_taskbar_hint (GdkWindow* window, gboolean skips_taskbar);
// void gdk_window_set_skip_taskbar_hint (::GdkWindow* window, gboolean skips_taskbar);
void base::WindowBase::set_skip_taskbar_hint (gboolean skips_taskbar) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean skips_taskbar);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_skip_taskbar_hint;
  auto skips_taskbar_to_c = skips_taskbar;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (skips_taskbar_to_c));
}

// void gdk_window_set_source_events (GdkWindow* window, GdkInputSource source, GdkEventMask event_mask);
// void gdk_window_set_source_events (::GdkWindow* window, ::GdkInputSource source, ::GdkEventMask event_mask);
void base::WindowBase::set_source_events (Gdk::InputSource source, Gdk::EventMask event_mask) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkInputSource source, ::GdkEventMask event_mask);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_source_events;
  auto event_mask_to_c = gi::unwrap (event_mask);
  auto source_to_c = gi::unwrap (source);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkInputSource) (source_to_c), (::GdkEventMask) (event_mask_to_c));
}

// void gdk_window_set_startup_id (GdkWindow* window, const gchar* startup_id);
// void gdk_window_set_startup_id (::GdkWindow* window, const char* startup_id);
void base::WindowBase::set_startup_id (const std::string & startup_id) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_startup_id;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const char*) (startup_id_to_c));
}

// gboolean gdk_window_set_static_gravities (GdkWindow* window, gboolean use_static);
// gboolean gdk_window_set_static_gravities (::GdkWindow* window, gboolean use_static);
// IGNORE; deprecated

// void gdk_window_set_support_multidevice (GdkWindow* window, gboolean support_multidevice);
// void gdk_window_set_support_multidevice (::GdkWindow* window, gboolean support_multidevice);
void base::WindowBase::set_support_multidevice (gboolean support_multidevice) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean support_multidevice);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_support_multidevice;
  auto support_multidevice_to_c = support_multidevice;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (support_multidevice_to_c));
}

// void gdk_window_set_title (GdkWindow* window, const gchar* title);
// void gdk_window_set_title (::GdkWindow* window, const char* title);
void base::WindowBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const char*) (title_to_c));
}

// void gdk_window_set_transient_for (GdkWindow* window, GdkWindow* parent);
// void gdk_window_set_transient_for (::GdkWindow* window, ::GdkWindow* parent);
void base::WindowBase::set_transient_for (Gdk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_transient_for;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindow*) (parent_to_c));
}

// void gdk_window_set_type_hint (GdkWindow* window, GdkWindowTypeHint hint);
// void gdk_window_set_type_hint (::GdkWindow* window, ::GdkWindowTypeHint hint);
void base::WindowBase::set_type_hint (Gdk::WindowTypeHint hint) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindowTypeHint hint);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_type_hint;
  auto hint_to_c = gi::unwrap (hint);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GdkWindowTypeHint) (hint_to_c));
}

// void gdk_window_set_urgency_hint (GdkWindow* window, gboolean urgent);
// void gdk_window_set_urgency_hint (::GdkWindow* window, gboolean urgent);
void base::WindowBase::set_urgency_hint (gboolean urgent) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, gboolean urgent);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_urgency_hint;
  auto urgent_to_c = urgent;
  call_wrap_v ((::GdkWindow*) (gobj_()), (gboolean) (urgent_to_c));
}

// void gdk_window_set_user_data (GdkWindow* window, gpointer user_data);
// void gdk_window_set_user_data (::GdkWindow* window, ::GObject* user_data);
void base::WindowBase::set_user_data (GObject::Object user_data) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GObject* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_user_data;
  auto user_data_to_c = gi::unwrap (user_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GObject*) (user_data_to_c));
}
void base::WindowBase::set_user_data () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GObject* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_set_user_data;
  auto user_data_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (::GObject*) (user_data_to_c));
}

// void gdk_window_shape_combine_region (GdkWindow* window, const cairo_region_t* shape_region, gint offset_x, gint offset_y);
// void gdk_window_shape_combine_region (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
void base::WindowBase::shape_combine_region (const cairo::Region & shape_region, gint offset_x, gint offset_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_shape_combine_region;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto shape_region_to_c = gi::unwrap (shape_region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (shape_region_to_c), (gint) (offset_x_to_c), (gint) (offset_y_to_c));
}
void base::WindowBase::shape_combine_region (gint offset_x, gint offset_y) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_shape_combine_region;
  auto offset_y_to_c = offset_y;
  auto offset_x_to_c = offset_x;
  auto shape_region_to_c = nullptr;
  call_wrap_v ((::GdkWindow*) (gobj_()), (const ::cairo_region_t*) (shape_region_to_c), (gint) (offset_x_to_c), (gint) (offset_y_to_c));
}

// void gdk_window_show (GdkWindow* window);
// void gdk_window_show (::GdkWindow* window);
void base::WindowBase::show () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_show;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_show_unraised (GdkWindow* window);
// void gdk_window_show_unraised (::GdkWindow* window);
void base::WindowBase::show_unraised () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_show_unraised;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// gboolean gdk_window_show_window_menu (GdkWindow* window, GdkEvent* event);
// gboolean gdk_window_show_window_menu (::GdkWindow* window,  event);
// SKIP; event type  not supported

// void gdk_window_stick (GdkWindow* window);
// void gdk_window_stick (::GdkWindow* window);
void base::WindowBase::stick () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_stick;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_thaw_toplevel_updates_libgtk_only (GdkWindow* window);
// void gdk_window_thaw_toplevel_updates_libgtk_only (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_thaw_updates (GdkWindow* window);
// void gdk_window_thaw_updates (::GdkWindow* window);
void base::WindowBase::thaw_updates () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_thaw_updates;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_unfullscreen (GdkWindow* window);
// void gdk_window_unfullscreen (::GdkWindow* window);
void base::WindowBase::unfullscreen () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_unfullscreen;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_unmaximize (GdkWindow* window);
// void gdk_window_unmaximize (::GdkWindow* window);
void base::WindowBase::unmaximize () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_unmaximize;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_unstick (GdkWindow* window);
// void gdk_window_unstick (::GdkWindow* window);
void base::WindowBase::unstick () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_unstick;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}

// void gdk_window_withdraw (GdkWindow* window);
// void gdk_window_withdraw (::GdkWindow* window);
void base::WindowBase::withdraw () noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_window_withdraw;
  call_wrap_v ((::GdkWindow*) (gobj_()));
}


// SKIP; glib:signal out parameter not supported, glib:signal out parameter not supported



// SKIP; glib:signal out parameter not supported, glib:signal out parameter not supported


} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/window_extra_def_impl.hpp>)
#include <gdk/window_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/window_extra_impl.hpp>)
#include <gdk/window_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {

void WindowClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GdkWindowClass *methods = (::GdkWindowClass *) class_struct;
  (void) methods;

  methods->create_surface = (decltype (methods->create_surface)) detail::method_wrapper<self, cairo::Surface (*) (gint width, gint height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::create_surface_>;
}

// cairo_surface_t* Window::create_surface (GdkWindow* window, gint width, gint height);
// ::cairo_surface_t* Window::create_surface (::GdkWindow* window, gint width, gint height);
cairo::Surface WindowClass::create_surface_ (gint width, gint height) noexcept
{
  if (!get_struct_()->create_surface) return cairo::Surface{};
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkWindow* window, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->create_surface;
  auto height_to_c = height;
  auto width_to_c = width;
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Window::from_embedder (GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble* offscreen_x, gdouble* offscreen_y);
// void Window::from_embedder (::GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble offscreen_x, gdouble offscreen_y);
// SKIP; inconsistent in offscreen_y pointer depth (1 vs 0), inconsistent in offscreen_x pointer depth (1 vs 0)

// void Window::to_embedder (GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble* embedder_x, gdouble* embedder_y);
// void Window::to_embedder (::GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble embedder_x, gdouble embedder_y);
// SKIP; inconsistent in embedder_y pointer depth (1 vs 0), inconsistent in embedder_x pointer depth (1 vs 0)

} // namespace internal

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
