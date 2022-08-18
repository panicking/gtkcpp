// AUTO-GENERATED

#ifndef _GI_GDK__FUNCTIONS_IMPL_HPP_
#define _GI_GDK__FUNCTIONS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace GLErrorNS_ {

// GQuark gdk_gl_error_quark ();
// ::GQuark gdk_gl_error_quark ();
GLib::Quark quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_gl_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

} // namespace GLErrorNS_

// void gdk_beep ();
// void gdk_beep ();
void beep () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_beep;
  call_wrap_v ();
}

// void gdk_cairo_draw_from_gl (cairo_t* cr, GdkWindow* window, int source, int source_type, int buffer_scale, int x, int y, int width, int height);
// void gdk_cairo_draw_from_gl (::cairo_t* cr, ::GdkWindow* window, gint source, gint source_type, gint buffer_scale, gint x, gint y, gint width, gint height);
void cairo_draw_from_gl (cairo::Context cr, Gdk::Window window, gint source, gint source_type, gint buffer_scale, gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::GdkWindow* window, gint source, gint source_type, gint buffer_scale, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_draw_from_gl;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto buffer_scale_to_c = buffer_scale;
  auto source_type_to_c = source_type;
  auto source_to_c = source;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::GdkWindow*) (window_to_c), (gint) (source_to_c), (gint) (source_type_to_c), (gint) (buffer_scale_to_c), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// gboolean gdk_cairo_get_clip_rectangle (cairo_t* cr, GdkRectangle* rect);
// gboolean gdk_cairo_get_clip_rectangle (::cairo_t* cr, ::GdkRectangle* rect);
bool cairo_get_clip_rectangle (cairo::Context cr, Gdk::Rectangle * rect) noexcept
{
  typedef gboolean (*call_wrap_t) (::cairo_t* cr, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_get_clip_rectangle;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c), (::GdkRectangle*) (rect ? (::GdkRectangle*) &rect_c : nullptr));
  if (rect) *rect = gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> cairo_get_clip_rectangle (cairo::Context cr) noexcept
{
  typedef gboolean (*call_wrap_t) (::cairo_t* cr, ::GdkRectangle* rect);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_get_clip_rectangle;
  traits::unset_wrapper<::GdkRectangle>::type rect_c;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c), (::GdkRectangle*) ((::GdkRectangle*) &rect_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &rect_c, gi::transfer_none, gi::direction_out));
}

// GdkDrawingContext* gdk_cairo_get_drawing_context (cairo_t* cr);
// ::GdkDrawingContext* gdk_cairo_get_drawing_context (::cairo_t* cr);
Gdk::DrawingContext cairo_get_drawing_context (cairo::Context cr) noexcept
{
  typedef ::GdkDrawingContext* (*call_wrap_t) (::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_get_drawing_context;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_t*) (cr_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_cairo_rectangle (cairo_t* cr, const GdkRectangle* rectangle);
// void gdk_cairo_rectangle (::cairo_t* cr, const ::GdkRectangle* rectangle);
void cairo_rectangle (cairo::Context cr, const Gdk::Rectangle & rectangle) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkRectangle* rectangle);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_rectangle;
  auto rectangle_to_c = gi::unwrap (rectangle, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkRectangle*) (rectangle_to_c));
}

// void gdk_cairo_region (cairo_t* cr, const cairo_region_t* region);
// void gdk_cairo_region (::cairo_t* cr, const ::cairo_region_t* region);
void cairo_region (cairo::Context cr, const cairo::Region & region) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::cairo_region_t*) (region_to_c));
}

// cairo_region_t* gdk_cairo_region_create_from_surface (cairo_surface_t* surface);
// ::cairo_region_t* gdk_cairo_region_create_from_surface (::cairo_surface_t* surface);
cairo::Region cairo_region_create_from_surface (cairo::Surface surface) noexcept
{
  typedef ::cairo_region_t* (*call_wrap_t) (::cairo_surface_t* surface);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_region_create_from_surface;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_surface_t*) (surface_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_cairo_set_source_pixbuf (cairo_t* cr, const GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
// void gdk_cairo_set_source_pixbuf (::cairo_t* cr, const ::GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
void cairo_set_source_pixbuf (cairo::Context cr, const GdkPixbuf::Pixbuf & pixbuf, gdouble pixbuf_x, gdouble pixbuf_y) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_set_source_pixbuf;
  auto pixbuf_y_to_c = pixbuf_y;
  auto pixbuf_x_to_c = pixbuf_x;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkPixbuf*) (pixbuf_to_c), (gdouble) (pixbuf_x_to_c), (gdouble) (pixbuf_y_to_c));
}

// void gdk_cairo_set_source_rgba (cairo_t* cr, const GdkRGBA* rgba);
// void gdk_cairo_set_source_rgba (::cairo_t* cr, const ::GdkRGBA* rgba);
void cairo_set_source_rgba (cairo::Context cr, const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_set_source_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (const ::GdkRGBA*) (rgba_to_c));
}

// void gdk_cairo_set_source_window (cairo_t* cr, GdkWindow* window, gdouble x, gdouble y);
// void gdk_cairo_set_source_window (::cairo_t* cr, ::GdkWindow* window, gdouble x, gdouble y);
void cairo_set_source_window (cairo::Context cr, Gdk::Window window, gdouble x, gdouble y) noexcept
{
  typedef void (*call_wrap_t) (::cairo_t* cr, ::GdkWindow* window, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_set_source_window;
  auto y_to_c = y;
  auto x_to_c = x;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::cairo_t*) (cr_to_c), (::GdkWindow*) (window_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// cairo_surface_t* gdk_cairo_surface_create_from_pixbuf (const GdkPixbuf* pixbuf, int scale, GdkWindow* for_window);
// ::cairo_surface_t* gdk_cairo_surface_create_from_pixbuf (const ::GdkPixbuf* pixbuf, gint scale, ::GdkWindow* for_window);
cairo::Surface cairo_surface_create_from_pixbuf (const GdkPixbuf::Pixbuf & pixbuf, gint scale, Gdk::Window for_window) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (const ::GdkPixbuf* pixbuf, gint scale, ::GdkWindow* for_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_surface_create_from_pixbuf;
  auto for_window_to_c = gi::unwrap (for_window, gi::transfer_none, gi::direction_in);
  auto scale_to_c = scale;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (pixbuf_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface cairo_surface_create_from_pixbuf (const GdkPixbuf::Pixbuf & pixbuf, gint scale) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (const ::GdkPixbuf* pixbuf, gint scale, ::GdkWindow* for_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_cairo_surface_create_from_pixbuf;
  auto for_window_to_c = nullptr;
  auto scale_to_c = scale;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkPixbuf*) (pixbuf_to_c), (gint) (scale_to_c), (::GdkWindow*) (for_window_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_disable_multidevice ();
// void gdk_disable_multidevice ();
void disable_multidevice () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_disable_multidevice;
  call_wrap_v ();
}

// void gdk_drag_abort (GdkDragContext* context, guint32 time_);
// void gdk_drag_abort (::GdkDragContext* context, guint32 time_);
void drag_abort (Gdk::DragContext context, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_abort;
  auto time__to_c = time_;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (guint32) (time__to_c));
}

// GdkDragContext* gdk_drag_begin (GdkWindow* window);
// ::GdkDragContext* gdk_drag_begin (::GdkWindow* window);
// SKIP; container element not supported

// GdkDragContext* gdk_drag_begin_for_device (GdkWindow* window, GdkDevice* device);
// ::GdkDragContext* gdk_drag_begin_for_device (::GdkWindow* window, ::GdkDevice* device);
// SKIP; container element not supported

// GdkDragContext* gdk_drag_begin_from_point (GdkWindow* window, GdkDevice* device, gint x_root, gint y_root);
// ::GdkDragContext* gdk_drag_begin_from_point (::GdkWindow* window, ::GdkDevice* device, gint x_root, gint y_root);
// SKIP; container element not supported

// void gdk_drag_drop (GdkDragContext* context, guint32 time_);
// void gdk_drag_drop (::GdkDragContext* context, guint32 time_);
void drag_drop (Gdk::DragContext context, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_drop;
  auto time__to_c = time_;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (guint32) (time__to_c));
}

// void gdk_drag_drop_done (GdkDragContext* context, gboolean success);
// void gdk_drag_drop_done (::GdkDragContext* context, gboolean success);
void drag_drop_done (Gdk::DragContext context, gboolean success) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, gboolean success);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_drop_done;
  auto success_to_c = success;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (gboolean) (success_to_c));
}

// gboolean gdk_drag_drop_succeeded (GdkDragContext* context);
// gboolean gdk_drag_drop_succeeded (::GdkDragContext* context);
bool drag_drop_succeeded (Gdk::DragContext context) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_drop_succeeded;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (context_to_c));
  return _temp_ret;
}

// void gdk_drag_find_window_for_screen (GdkDragContext* context, GdkWindow* drag_window, GdkScreen* screen, gint x_root, gint y_root, GdkWindow** dest_window, GdkDragProtocol* protocol);
// void gdk_drag_find_window_for_screen (::GdkDragContext* context, ::GdkWindow* drag_window, ::GdkScreen* screen, gint x_root, gint y_root, ::GdkWindow** dest_window, ::GdkDragProtocol* protocol);
void drag_find_window_for_screen (Gdk::DragContext context, Gdk::Window drag_window, Gdk::Screen screen, gint x_root, gint y_root, Gdk::Window & dest_window, Gdk::DragProtocol & protocol) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GdkWindow* drag_window, ::GdkScreen* screen, gint x_root, gint y_root, ::GdkWindow** dest_window, ::GdkDragProtocol* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_find_window_for_screen;
  ::GdkDragProtocol protocol_o {};
  ::GdkWindow* dest_window_o {};
  auto y_root_to_c = y_root;
  auto x_root_to_c = x_root;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto drag_window_to_c = gi::unwrap (drag_window, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GdkWindow*) (drag_window_to_c), (::GdkScreen*) (screen_to_c), (gint) (x_root_to_c), (gint) (y_root_to_c), (::GdkWindow**) (&dest_window_o), (::GdkDragProtocol*) (&protocol_o));
  protocol = gi::wrap (protocol_o);
  dest_window = gi::wrap (dest_window_o, gi::transfer_full, gi::direction_out);
}
std::tuple<Gdk::Window, Gdk::DragProtocol> drag_find_window_for_screen (Gdk::DragContext context, Gdk::Window drag_window, Gdk::Screen screen, gint x_root, gint y_root) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GdkWindow* drag_window, ::GdkScreen* screen, gint x_root, gint y_root, ::GdkWindow** dest_window, ::GdkDragProtocol* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_find_window_for_screen;
  ::GdkDragProtocol protocol_o {};
  ::GdkWindow* dest_window_o {};
  auto y_root_to_c = y_root;
  auto x_root_to_c = x_root;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto drag_window_to_c = gi::unwrap (drag_window, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GdkWindow*) (drag_window_to_c), (::GdkScreen*) (screen_to_c), (gint) (x_root_to_c), (gint) (y_root_to_c), (::GdkWindow**) (&dest_window_o), (::GdkDragProtocol*) (&protocol_o));
  return std::make_tuple (gi::wrap (dest_window_o, gi::transfer_full, gi::direction_out), gi::wrap (protocol_o));
}

// GdkAtom gdk_drag_get_selection (GdkDragContext* context);
//  gdk_drag_get_selection (::GdkDragContext* context);
// SKIP;  type  not supported

// gboolean gdk_drag_motion (GdkDragContext* context, GdkWindow* dest_window, GdkDragProtocol protocol, gint x_root, gint y_root, GdkDragAction suggested_action, GdkDragAction possible_actions, guint32 time_);
// gboolean gdk_drag_motion (::GdkDragContext* context, ::GdkWindow* dest_window, ::GdkDragProtocol protocol, gint x_root, gint y_root, ::GdkDragAction suggested_action, ::GdkDragAction possible_actions, guint32 time_);
bool drag_motion (Gdk::DragContext context, Gdk::Window dest_window, Gdk::DragProtocol protocol, gint x_root, gint y_root, Gdk::DragAction suggested_action, Gdk::DragAction possible_actions, guint32 time_) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkDragContext* context, ::GdkWindow* dest_window, ::GdkDragProtocol protocol, gint x_root, gint y_root, ::GdkDragAction suggested_action, ::GdkDragAction possible_actions, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_motion;
  auto time__to_c = time_;
  auto possible_actions_to_c = gi::unwrap (possible_actions);
  auto suggested_action_to_c = gi::unwrap (suggested_action);
  auto y_root_to_c = y_root;
  auto x_root_to_c = x_root;
  auto protocol_to_c = gi::unwrap (protocol);
  auto dest_window_to_c = gi::unwrap (dest_window, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDragContext*) (context_to_c), (::GdkWindow*) (dest_window_to_c), (::GdkDragProtocol) (protocol_to_c), (gint) (x_root_to_c), (gint) (y_root_to_c), (::GdkDragAction) (suggested_action_to_c), (::GdkDragAction) (possible_actions_to_c), (guint32) (time__to_c));
  return _temp_ret;
}

// void gdk_drag_status (GdkDragContext* context, GdkDragAction action, guint32 time_);
// void gdk_drag_status (::GdkDragContext* context, ::GdkDragAction action, guint32 time_);
void drag_status (Gdk::DragContext context, Gdk::DragAction action, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, ::GdkDragAction action, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drag_status;
  auto time__to_c = time_;
  auto action_to_c = gi::unwrap (action);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (::GdkDragAction) (action_to_c), (guint32) (time__to_c));
}

// void gdk_drop_finish (GdkDragContext* context, gboolean success, guint32 time_);
// void gdk_drop_finish (::GdkDragContext* context, gboolean success, guint32 time_);
void drop_finish (Gdk::DragContext context, gboolean success, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, gboolean success, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drop_finish;
  auto time__to_c = time_;
  auto success_to_c = success;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (gboolean) (success_to_c), (guint32) (time__to_c));
}

// void gdk_drop_reply (GdkDragContext* context, gboolean accepted, guint32 time_);
// void gdk_drop_reply (::GdkDragContext* context, gboolean accepted, guint32 time_);
void drop_reply (Gdk::DragContext context, gboolean accepted, guint32 time_) noexcept
{
  typedef void (*call_wrap_t) (::GdkDragContext* context, gboolean accepted, guint32 time_);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_drop_reply;
  auto time__to_c = time_;
  auto accepted_to_c = accepted;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkDragContext*) (context_to_c), (gboolean) (accepted_to_c), (guint32) (time__to_c));
}

// gint gdk_error_trap_pop ();
// gint gdk_error_trap_pop ();
gint error_trap_pop () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_error_trap_pop;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gdk_error_trap_pop_ignored ();
// void gdk_error_trap_pop_ignored ();
void error_trap_pop_ignored () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_error_trap_pop_ignored;
  call_wrap_v ();
}

// void gdk_error_trap_push ();
// void gdk_error_trap_push ();
void error_trap_push () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_error_trap_push;
  call_wrap_v ();
}

// gboolean gdk_events_get_angle (GdkEvent* event1, GdkEvent* event2, gdouble* angle);
// gboolean gdk_events_get_angle ( event1,  event2, gdouble* angle);
// SKIP; event2 type  not supported, event1 type  not supported

// gboolean gdk_events_get_center (GdkEvent* event1, GdkEvent* event2, gdouble* x, gdouble* y);
// gboolean gdk_events_get_center ( event1,  event2, gdouble* x, gdouble* y);
// SKIP; event2 type  not supported, event1 type  not supported

// gboolean gdk_events_get_distance (GdkEvent* event1, GdkEvent* event2, gdouble* distance);
// gboolean gdk_events_get_distance ( event1,  event2, gdouble* distance);
// SKIP; event2 type  not supported, event1 type  not supported

// gboolean gdk_events_pending ();
// gboolean gdk_events_pending ();
bool events_pending () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_events_pending;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GdkWindow* gdk_get_default_root_window ();
// ::GdkWindow* gdk_get_default_root_window ();
Gdk::Window get_default_root_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_get_default_root_window;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gdk_get_display_arg_name ();
// const char* gdk_get_display_arg_name ();
std::string get_display_arg_name () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_get_display_arg_name;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gdk_get_program_class ();
// const char* gdk_get_program_class ();
std::string get_program_class () noexcept
{
  typedef const char* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_get_program_class;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gdk_get_show_events ();
// gboolean gdk_get_show_events ();
bool get_show_events () noexcept
{
  typedef gboolean (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_get_show_events;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void gdk_init (gint* argc, gchar*** argv);
// void gdk_init (gint* argc, char*** argv);
// SKIP; inout array not supported

// gboolean gdk_init_check (gint* argc, gchar*** argv);
// gboolean gdk_init_check (gint* argc, char*** argv);
// SKIP; inout array not supported

// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
void keyval_convert_case (guint symbol, guint & lower, guint & upper) noexcept
{
  typedef void (*call_wrap_t) (guint symbol, guint* lower, guint* upper);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_convert_case;
  guint upper_o {};
  guint lower_o {};
  auto symbol_to_c = symbol;
  call_wrap_v ((guint) (symbol_to_c), (guint*) (&lower_o), (guint*) (&upper_o));
  upper = upper_o;
  lower = lower_o;
}
std::tuple<guint, guint> keyval_convert_case (guint symbol) noexcept
{
  typedef void (*call_wrap_t) (guint symbol, guint* lower, guint* upper);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_convert_case;
  guint upper_o {};
  guint lower_o {};
  auto symbol_to_c = symbol;
  call_wrap_v ((guint) (symbol_to_c), (guint*) (&lower_o), (guint*) (&upper_o));
  return std::make_tuple (lower_o, upper_o);
}

// guint gdk_keyval_from_name (const gchar* keyval_name);
// guint gdk_keyval_from_name (const char* keyval_name);
guint keyval_from_name (const std::string & keyval_name) noexcept
{
  typedef guint (*call_wrap_t) (const char* keyval_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_from_name;
  auto keyval_name_to_c = gi::unwrap (keyval_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (keyval_name_to_c));
  return _temp_ret;
}

// gboolean gdk_keyval_is_lower (guint keyval);
// gboolean gdk_keyval_is_lower (guint keyval);
bool keyval_is_lower (guint keyval) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_is_lower;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// gboolean gdk_keyval_is_upper (guint keyval);
// gboolean gdk_keyval_is_upper (guint keyval);
bool keyval_is_upper (guint keyval) noexcept
{
  typedef gboolean (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_is_upper;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// gchar* gdk_keyval_name (guint keyval);
// char* gdk_keyval_name (guint keyval);
std::string keyval_name (guint keyval) noexcept
{
  typedef char* (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_name;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint gdk_keyval_to_lower (guint keyval);
// guint gdk_keyval_to_lower (guint keyval);
guint keyval_to_lower (guint keyval) noexcept
{
  typedef guint (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_to_lower;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// guint32 gdk_keyval_to_unicode (guint keyval);
// guint32 gdk_keyval_to_unicode (guint keyval);
guint32 keyval_to_unicode (guint keyval) noexcept
{
  typedef guint32 (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_to_unicode;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// guint gdk_keyval_to_upper (guint keyval);
// guint gdk_keyval_to_upper (guint keyval);
guint keyval_to_upper (guint keyval) noexcept
{
  typedef guint (*call_wrap_t) (guint keyval);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_keyval_to_upper;
  auto keyval_to_c = keyval;
  auto _temp_ret = call_wrap_v ((guint) (keyval_to_c));
  return _temp_ret;
}

// void gdk_notify_startup_complete ();
// void gdk_notify_startup_complete ();
void notify_startup_complete () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_notify_startup_complete;
  call_wrap_v ();
}

// void gdk_notify_startup_complete_with_id (const gchar* startup_id);
// void gdk_notify_startup_complete_with_id (const char* startup_id);
void notify_startup_complete_with_id (const std::string & startup_id) noexcept
{
  typedef void (*call_wrap_t) (const char* startup_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_notify_startup_complete_with_id;
  auto startup_id_to_c = gi::unwrap (startup_id, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (startup_id_to_c));
}

// GdkWindow* gdk_offscreen_window_get_embedder (GdkWindow* window);
// ::GdkWindow* gdk_offscreen_window_get_embedder (::GdkWindow* window);
Gdk::Window offscreen_window_get_embedder (Gdk::Window window) noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_offscreen_window_get_embedder;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (window_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// cairo_surface_t* gdk_offscreen_window_get_surface (GdkWindow* window);
// ::cairo_surface_t* gdk_offscreen_window_get_surface (::GdkWindow* window);
cairo::Surface offscreen_window_get_surface (Gdk::Window window) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_offscreen_window_get_surface;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (window_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gdk_offscreen_window_set_embedder (GdkWindow* window, GdkWindow* embedder);
// void gdk_offscreen_window_set_embedder (::GdkWindow* window, ::GdkWindow* embedder);
void offscreen_window_set_embedder (Gdk::Window window, Gdk::Window embedder) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window, ::GdkWindow* embedder);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_offscreen_window_set_embedder;
  auto embedder_to_c = gi::unwrap (embedder, gi::transfer_none, gi::direction_in);
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (window_to_c), (::GdkWindow*) (embedder_to_c));
}

// PangoContext* gdk_pango_context_get ();
// ::PangoContext* gdk_pango_context_get ();
Pango::Context pango_context_get () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pango_context_get;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoContext* gdk_pango_context_get_for_display (GdkDisplay* display);
// ::PangoContext* gdk_pango_context_get_for_display (::GdkDisplay* display);
Pango::Context pango_context_get_for_display (Gdk::Display display) noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GdkDisplay* display);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pango_context_get_for_display;
  auto display_to_c = gi::unwrap (display, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkDisplay*) (display_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoContext* gdk_pango_context_get_for_screen (GdkScreen* screen);
// ::PangoContext* gdk_pango_context_get_for_screen (::GdkScreen* screen);
Pango::Context pango_context_get_for_screen (Gdk::Screen screen) noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pango_context_get_for_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (screen_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// cairo_region_t* gdk_pango_layout_get_clip_region (PangoLayout* layout, gint x_origin, gint y_origin, const gint* index_ranges, gint n_ranges);
// ::cairo_region_t* gdk_pango_layout_get_clip_region (::PangoLayout* layout, gint x_origin, gint y_origin, const gint index_ranges, gint n_ranges);
// IGNORE; not introspectable, inconsistent in index_ranges pointer depth (1 vs 0)

// cairo_region_t* gdk_pango_layout_line_get_clip_region (PangoLayoutLine* line, gint x_origin, gint y_origin, gint n_ranges);
// ::cairo_region_t* gdk_pango_layout_line_get_clip_region (::PangoLayoutLine* line, gint x_origin, gint y_origin, gint n_ranges);
// IGNORE; not introspectable, inconsistent array info

// void gdk_parse_args (gint* argc, gchar*** argv);
// void gdk_parse_args (gint* argc, char*** argv);
// SKIP; inout array not supported

// GdkPixbuf* gdk_pixbuf_get_from_surface (cairo_surface_t* surface, gint src_x, gint src_y, gint width, gint height);
// ::GdkPixbuf* gdk_pixbuf_get_from_surface (::cairo_surface_t* surface, gint src_x, gint src_y, gint width, gint height);
GdkPixbuf::Pixbuf pixbuf_get_from_surface (cairo::Surface surface, gint src_x, gint src_y, gint width, gint height) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::cairo_surface_t* surface, gint src_x, gint src_y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_get_from_surface;
  auto height_to_c = height;
  auto width_to_c = width;
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::cairo_surface_t*) (surface_to_c), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GdkPixbuf* gdk_pixbuf_get_from_window (GdkWindow* window, gint src_x, gint src_y, gint width, gint height);
// ::GdkPixbuf* gdk_pixbuf_get_from_window (::GdkWindow* window, gint src_x, gint src_y, gint width, gint height);
GdkPixbuf::Pixbuf pixbuf_get_from_window (Gdk::Window window, gint src_x, gint src_y, gint width, gint height) noexcept
{
  typedef ::GdkPixbuf* (*call_wrap_t) (::GdkWindow* window, gint src_x, gint src_y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_pixbuf_get_from_window;
  auto height_to_c = height;
  auto width_to_c = width;
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (window_to_c), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint) (width_to_c), (gint) (height_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gdk_property_change (GdkWindow* window, GdkAtom property, GdkAtom type, gint format, GdkPropMode mode, const guchar* data, gint nelements);
// void gdk_property_change (::GdkWindow* window,  property,  type, gint format, ::GdkPropMode mode, const guint8 data, gint nelements);
// IGNORE; not introspectable, inconsistent in data pointer depth (1 vs 0), type type  not supported, property type  not supported

// void gdk_property_delete (GdkWindow* window, GdkAtom property);
// void gdk_property_delete (::GdkWindow* window,  property);
// SKIP; property type  not supported

// gboolean gdk_property_get (GdkWindow* window, GdkAtom property, GdkAtom type, gulong offset, gulong length, gint pdelete, GdkAtom* actual_property_type, gint* actual_format, gint* actual_length, guchar** data);
// gboolean gdk_property_get (::GdkWindow* window,  property,  type, gulong offset, gulong length, gint pdelete,  actual_property_type, gint* actual_format, gint* actual_length, guint8** data);
// SKIP; actual_property_type type  not supported, type type  not supported, property type  not supported

// void gdk_selection_convert (GdkWindow* requestor, GdkAtom selection, GdkAtom target, guint32 time_);
// void gdk_selection_convert (::GdkWindow* requestor,  selection,  target, guint32 time_);
// SKIP; target type  not supported, selection type  not supported

// GdkWindow* gdk_selection_owner_get (GdkAtom selection);
// ::GdkWindow* gdk_selection_owner_get ( selection);
// SKIP; selection type  not supported

// GdkWindow* gdk_selection_owner_get_for_display (GdkDisplay* display, GdkAtom selection);
// ::GdkWindow* gdk_selection_owner_get_for_display (::GdkDisplay* display,  selection);
// SKIP; selection type  not supported

// gboolean gdk_selection_owner_set (GdkWindow* owner, GdkAtom selection, guint32 time_, gboolean send_event);
// gboolean gdk_selection_owner_set (::GdkWindow* owner,  selection, guint32 time_, gboolean send_event);
// SKIP; selection type  not supported

// gboolean gdk_selection_owner_set_for_display (GdkDisplay* display, GdkWindow* owner, GdkAtom selection, guint32 time_, gboolean send_event);
// gboolean gdk_selection_owner_set_for_display (::GdkDisplay* display, ::GdkWindow* owner,  selection, guint32 time_, gboolean send_event);
// SKIP; selection type  not supported

// gint gdk_selection_property_get (GdkWindow* requestor, guchar** data, GdkAtom* prop_type, gint* prop_format);
// gint gdk_selection_property_get (::GdkWindow* requestor, guint8 data,  prop_type, gint prop_format);
// IGNORE; not introspectable, inconsistent in prop_format pointer depth (1 vs 0), prop_type type  not supported, inconsistent in data pointer depth (2 vs 0)

// void gdk_selection_send_notify (GdkWindow* requestor, GdkAtom selection, GdkAtom target, GdkAtom property, guint32 time_);
// void gdk_selection_send_notify (::GdkWindow* requestor,  selection,  target,  property, guint32 time_);
// SKIP; property type  not supported, target type  not supported, selection type  not supported

// void gdk_selection_send_notify_for_display (GdkDisplay* display, GdkWindow* requestor, GdkAtom selection, GdkAtom target, GdkAtom property, guint32 time_);
// void gdk_selection_send_notify_for_display (::GdkDisplay* display, ::GdkWindow* requestor,  selection,  target,  property, guint32 time_);
// SKIP; property type  not supported, target type  not supported, selection type  not supported

// void gdk_set_allowed_backends (const gchar* backends);
// void gdk_set_allowed_backends (const char* backends);
void set_allowed_backends (const std::string & backends) noexcept
{
  typedef void (*call_wrap_t) (const char* backends);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_set_allowed_backends;
  auto backends_to_c = gi::unwrap (backends, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (backends_to_c));
}

// void gdk_set_double_click_time (guint msec);
// void gdk_set_double_click_time (guint msec);
void set_double_click_time (guint msec) noexcept
{
  typedef void (*call_wrap_t) (guint msec);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_set_double_click_time;
  auto msec_to_c = msec;
  call_wrap_v ((guint) (msec_to_c));
}

// void gdk_set_program_class (const gchar* program_class);
// void gdk_set_program_class (const char* program_class);
void set_program_class (const std::string & program_class) noexcept
{
  typedef void (*call_wrap_t) (const char* program_class);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_set_program_class;
  auto program_class_to_c = gi::unwrap (program_class, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (program_class_to_c));
}

// void gdk_set_show_events (gboolean show_events);
// void gdk_set_show_events (gboolean show_events);
void set_show_events (gboolean show_events) noexcept
{
  typedef void (*call_wrap_t) (gboolean show_events);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_set_show_events;
  auto show_events_to_c = show_events;
  call_wrap_v ((gboolean) (show_events_to_c));
}

// gboolean gdk_setting_get (const gchar* name, GValue* value);
// gboolean gdk_setting_get (const char* name, ::GValue* value);
bool setting_get (const std::string & name, GObject::Value value) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_setting_get;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GValue*) (value_to_c));
  return _temp_ret;
}

// void gdk_test_render_sync (GdkWindow* window);
// void gdk_test_render_sync (::GdkWindow* window);
void test_render_sync (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_test_render_sync;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkWindow*) (window_to_c));
}

// gboolean gdk_test_simulate_button (GdkWindow* window, gint x, gint y, guint button, GdkModifierType modifiers, GdkEventType button_pressrelease);
// gboolean gdk_test_simulate_button (::GdkWindow* window, gint x, gint y, guint button, ::GdkModifierType modifiers, ::GdkEventType button_pressrelease);
bool test_simulate_button (Gdk::Window window, gint x, gint y, guint button, Gdk::ModifierType modifiers, Gdk::EventType button_pressrelease) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window, gint x, gint y, guint button, ::GdkModifierType modifiers, ::GdkEventType button_pressrelease);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_test_simulate_button;
  auto button_pressrelease_to_c = gi::unwrap (button_pressrelease);
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto button_to_c = button;
  auto y_to_c = y;
  auto x_to_c = x;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (window_to_c), (gint) (x_to_c), (gint) (y_to_c), (guint) (button_to_c), (::GdkModifierType) (modifiers_to_c), (::GdkEventType) (button_pressrelease_to_c));
  return _temp_ret;
}

// gboolean gdk_test_simulate_key (GdkWindow* window, gint x, gint y, guint keyval, GdkModifierType modifiers, GdkEventType key_pressrelease);
// gboolean gdk_test_simulate_key (::GdkWindow* window, gint x, gint y, guint keyval, ::GdkModifierType modifiers, ::GdkEventType key_pressrelease);
bool test_simulate_key (Gdk::Window window, gint x, gint y, guint keyval, Gdk::ModifierType modifiers, Gdk::EventType key_pressrelease) noexcept
{
  typedef gboolean (*call_wrap_t) (::GdkWindow* window, gint x, gint y, guint keyval, ::GdkModifierType modifiers, ::GdkEventType key_pressrelease);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_test_simulate_key;
  auto key_pressrelease_to_c = gi::unwrap (key_pressrelease);
  auto modifiers_to_c = gi::unwrap (modifiers);
  auto keyval_to_c = keyval;
  auto y_to_c = y;
  auto x_to_c = x;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkWindow*) (window_to_c), (gint) (x_to_c), (gint) (y_to_c), (guint) (keyval_to_c), (::GdkModifierType) (modifiers_to_c), (::GdkEventType) (key_pressrelease_to_c));
  return _temp_ret;
}

// gint gdk_text_property_to_utf8_list_for_display (GdkDisplay* display, GdkAtom encoding, gint format, const guchar* text, gint length, gchar*** list);
// gint gdk_text_property_to_utf8_list_for_display (::GdkDisplay* display,  encoding, gint format, const guint8* text, gint length, char*** list);
// SKIP; encoding type  not supported

// guint gdk_threads_add_idle (GSourceFunc function, gpointer data);
// guint gdk_threads_add_idle (GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_idle_full

// guint gdk_threads_add_idle_full (gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_idle_full (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint threads_add_idle (gint priority, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_threads_add_idle_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint gdk_threads_add_timeout (guint interval, GSourceFunc function, gpointer data);
// guint gdk_threads_add_timeout (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_timeout_full

// guint gdk_threads_add_timeout_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_timeout_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint threads_add_timeout (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_threads_add_timeout_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint gdk_threads_add_timeout_seconds (guint interval, GSourceFunc function, gpointer data);
// guint gdk_threads_add_timeout_seconds (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_timeout_seconds_full

// guint gdk_threads_add_timeout_seconds_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_timeout_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
guint threads_add_timeout_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept
{
  typedef guint (*call_wrap_t) (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_threads_add_timeout_seconds_full;
  auto function_wrap_ = function ? unwrap (std::move (function), gi::scope_notified) : nullptr;
  auto interval_to_c = interval;
  auto priority_to_c = priority;
  auto _temp_ret = call_wrap_v ((gint) (priority_to_c), (guint) (interval_to_c), (GLib::SourceFunc::cfunction_type) (function_wrap_ ? &function_wrap_->wrapper : nullptr), (void*) (function_wrap_), (GLib::DestroyNotify::cfunction_type) (function_wrap_ ? &function_wrap_->destroy : nullptr));
  return _temp_ret;
}

// guint gdk_unicode_to_keyval (guint32 wc);
// guint gdk_unicode_to_keyval (guint32 wc);
guint unicode_to_keyval (guint32 wc) noexcept
{
  typedef guint (*call_wrap_t) (guint32 wc);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_unicode_to_keyval;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((guint32) (wc_to_c));
  return _temp_ret;
}

// gchar* gdk_utf8_to_string_target (const gchar* str);
// char* gdk_utf8_to_string_target (const char* str);
std::string utf8_to_string_target (const std::string & str) noexcept
{
  typedef char* (*call_wrap_t) (const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gdk_utf8_to_string_target;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
