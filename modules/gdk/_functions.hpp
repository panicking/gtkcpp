// AUTO-GENERATED

#ifndef _GI_GDK__FUNCTIONS_HPP_
#define _GI_GDK__FUNCTIONS_HPP_

namespace gi {

namespace repository {

namespace Gdk {

namespace GLErrorNS_ {

// GQuark gdk_gl_error_quark ();
// ::GQuark gdk_gl_error_quark ();
GI_INLINE_DECL GLib::Quark quark () noexcept;

} // namespace GLErrorNS_

// void gdk_beep ();
// void gdk_beep ();
GI_INLINE_DECL void beep () noexcept;

// void gdk_cairo_draw_from_gl (cairo_t* cr, GdkWindow* window, int source, int source_type, int buffer_scale, int x, int y, int width, int height);
// void gdk_cairo_draw_from_gl (::cairo_t* cr, ::GdkWindow* window, gint source, gint source_type, gint buffer_scale, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void cairo_draw_from_gl (cairo::Context cr, Gdk::Window window, gint source, gint source_type, gint buffer_scale, gint x, gint y, gint width, gint height) noexcept;

// gboolean gdk_cairo_get_clip_rectangle (cairo_t* cr, GdkRectangle* rect);
// gboolean gdk_cairo_get_clip_rectangle (::cairo_t* cr, ::GdkRectangle* rect);
GI_INLINE_DECL bool cairo_get_clip_rectangle (cairo::Context cr, Gdk::Rectangle * rect = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> cairo_get_clip_rectangle (cairo::Context cr) noexcept;

// GdkDrawingContext* gdk_cairo_get_drawing_context (cairo_t* cr);
// ::GdkDrawingContext* gdk_cairo_get_drawing_context (::cairo_t* cr);
GI_INLINE_DECL Gdk::DrawingContext cairo_get_drawing_context (cairo::Context cr) noexcept;

// void gdk_cairo_rectangle (cairo_t* cr, const GdkRectangle* rectangle);
// void gdk_cairo_rectangle (::cairo_t* cr, const ::GdkRectangle* rectangle);
GI_INLINE_DECL void cairo_rectangle (cairo::Context cr, const Gdk::Rectangle & rectangle) noexcept;

// void gdk_cairo_region (cairo_t* cr, const cairo_region_t* region);
// void gdk_cairo_region (::cairo_t* cr, const ::cairo_region_t* region);
GI_INLINE_DECL void cairo_region (cairo::Context cr, const cairo::Region & region) noexcept;

// cairo_region_t* gdk_cairo_region_create_from_surface (cairo_surface_t* surface);
// ::cairo_region_t* gdk_cairo_region_create_from_surface (::cairo_surface_t* surface);
GI_INLINE_DECL cairo::Region cairo_region_create_from_surface (cairo::Surface surface) noexcept;

// void gdk_cairo_set_source_pixbuf (cairo_t* cr, const GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
// void gdk_cairo_set_source_pixbuf (::cairo_t* cr, const ::GdkPixbuf* pixbuf, gdouble pixbuf_x, gdouble pixbuf_y);
GI_INLINE_DECL void cairo_set_source_pixbuf (cairo::Context cr, const GdkPixbuf::Pixbuf & pixbuf, gdouble pixbuf_x, gdouble pixbuf_y) noexcept;

// void gdk_cairo_set_source_rgba (cairo_t* cr, const GdkRGBA* rgba);
// void gdk_cairo_set_source_rgba (::cairo_t* cr, const ::GdkRGBA* rgba);
GI_INLINE_DECL void cairo_set_source_rgba (cairo::Context cr, const Gdk::RGBA & rgba) noexcept;

// void gdk_cairo_set_source_window (cairo_t* cr, GdkWindow* window, gdouble x, gdouble y);
// void gdk_cairo_set_source_window (::cairo_t* cr, ::GdkWindow* window, gdouble x, gdouble y);
GI_INLINE_DECL void cairo_set_source_window (cairo::Context cr, Gdk::Window window, gdouble x, gdouble y) noexcept;

// cairo_surface_t* gdk_cairo_surface_create_from_pixbuf (const GdkPixbuf* pixbuf, int scale, GdkWindow* for_window);
// ::cairo_surface_t* gdk_cairo_surface_create_from_pixbuf (const ::GdkPixbuf* pixbuf, gint scale, ::GdkWindow* for_window);
GI_INLINE_DECL cairo::Surface cairo_surface_create_from_pixbuf (const GdkPixbuf::Pixbuf & pixbuf, gint scale, Gdk::Window for_window) noexcept;
GI_INLINE_DECL cairo::Surface cairo_surface_create_from_pixbuf (const GdkPixbuf::Pixbuf & pixbuf, gint scale) noexcept;

// void gdk_disable_multidevice ();
// void gdk_disable_multidevice ();
GI_INLINE_DECL void disable_multidevice () noexcept;

// void gdk_drag_abort (GdkDragContext* context, guint32 time_);
// void gdk_drag_abort (::GdkDragContext* context, guint32 time_);
GI_INLINE_DECL void drag_abort (Gdk::DragContext context, guint32 time_) noexcept;

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
GI_INLINE_DECL void drag_drop (Gdk::DragContext context, guint32 time_) noexcept;

// void gdk_drag_drop_done (GdkDragContext* context, gboolean success);
// void gdk_drag_drop_done (::GdkDragContext* context, gboolean success);
GI_INLINE_DECL void drag_drop_done (Gdk::DragContext context, gboolean success) noexcept;

// gboolean gdk_drag_drop_succeeded (GdkDragContext* context);
// gboolean gdk_drag_drop_succeeded (::GdkDragContext* context);
GI_INLINE_DECL bool drag_drop_succeeded (Gdk::DragContext context) noexcept;

// void gdk_drag_find_window_for_screen (GdkDragContext* context, GdkWindow* drag_window, GdkScreen* screen, gint x_root, gint y_root, GdkWindow** dest_window, GdkDragProtocol* protocol);
// void gdk_drag_find_window_for_screen (::GdkDragContext* context, ::GdkWindow* drag_window, ::GdkScreen* screen, gint x_root, gint y_root, ::GdkWindow** dest_window, ::GdkDragProtocol* protocol);
GI_INLINE_DECL void drag_find_window_for_screen (Gdk::DragContext context, Gdk::Window drag_window, Gdk::Screen screen, gint x_root, gint y_root, Gdk::Window & dest_window, Gdk::DragProtocol & protocol) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Window, Gdk::DragProtocol> drag_find_window_for_screen (Gdk::DragContext context, Gdk::Window drag_window, Gdk::Screen screen, gint x_root, gint y_root) noexcept;

// GdkAtom gdk_drag_get_selection (GdkDragContext* context);
//  gdk_drag_get_selection (::GdkDragContext* context);
// SKIP;  type  not supported

// gboolean gdk_drag_motion (GdkDragContext* context, GdkWindow* dest_window, GdkDragProtocol protocol, gint x_root, gint y_root, GdkDragAction suggested_action, GdkDragAction possible_actions, guint32 time_);
// gboolean gdk_drag_motion (::GdkDragContext* context, ::GdkWindow* dest_window, ::GdkDragProtocol protocol, gint x_root, gint y_root, ::GdkDragAction suggested_action, ::GdkDragAction possible_actions, guint32 time_);
GI_INLINE_DECL bool drag_motion (Gdk::DragContext context, Gdk::Window dest_window, Gdk::DragProtocol protocol, gint x_root, gint y_root, Gdk::DragAction suggested_action, Gdk::DragAction possible_actions, guint32 time_) noexcept;

// void gdk_drag_status (GdkDragContext* context, GdkDragAction action, guint32 time_);
// void gdk_drag_status (::GdkDragContext* context, ::GdkDragAction action, guint32 time_);
GI_INLINE_DECL void drag_status (Gdk::DragContext context, Gdk::DragAction action, guint32 time_) noexcept;

// void gdk_drop_finish (GdkDragContext* context, gboolean success, guint32 time_);
// void gdk_drop_finish (::GdkDragContext* context, gboolean success, guint32 time_);
GI_INLINE_DECL void drop_finish (Gdk::DragContext context, gboolean success, guint32 time_) noexcept;

// void gdk_drop_reply (GdkDragContext* context, gboolean accepted, guint32 time_);
// void gdk_drop_reply (::GdkDragContext* context, gboolean accepted, guint32 time_);
GI_INLINE_DECL void drop_reply (Gdk::DragContext context, gboolean accepted, guint32 time_) noexcept;

// gint gdk_error_trap_pop ();
// gint gdk_error_trap_pop ();
GI_INLINE_DECL gint error_trap_pop () noexcept;

// void gdk_error_trap_pop_ignored ();
// void gdk_error_trap_pop_ignored ();
GI_INLINE_DECL void error_trap_pop_ignored () noexcept;

// void gdk_error_trap_push ();
// void gdk_error_trap_push ();
GI_INLINE_DECL void error_trap_push () noexcept;

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
GI_INLINE_DECL bool events_pending () noexcept;

// GdkWindow* gdk_get_default_root_window ();
// ::GdkWindow* gdk_get_default_root_window ();
GI_INLINE_DECL Gdk::Window get_default_root_window () noexcept;

// const gchar* gdk_get_display_arg_name ();
// const char* gdk_get_display_arg_name ();
GI_INLINE_DECL std::string get_display_arg_name () noexcept;

// const gchar* gdk_get_program_class ();
// const char* gdk_get_program_class ();
GI_INLINE_DECL std::string get_program_class () noexcept;

// gboolean gdk_get_show_events ();
// gboolean gdk_get_show_events ();
GI_INLINE_DECL bool get_show_events () noexcept;

// void gdk_init (gint* argc, gchar*** argv);
// void gdk_init (gint* argc, char*** argv);
// SKIP; inout array not supported

// gboolean gdk_init_check (gint* argc, gchar*** argv);
// gboolean gdk_init_check (gint* argc, char*** argv);
// SKIP; inout array not supported

// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
// void gdk_keyval_convert_case (guint symbol, guint* lower, guint* upper);
GI_INLINE_DECL void keyval_convert_case (guint symbol, guint & lower, guint & upper) noexcept;
GI_INLINE_DECL std::tuple<guint, guint> keyval_convert_case (guint symbol) noexcept;

// guint gdk_keyval_from_name (const gchar* keyval_name);
// guint gdk_keyval_from_name (const char* keyval_name);
GI_INLINE_DECL guint keyval_from_name (const std::string & keyval_name) noexcept;

// gboolean gdk_keyval_is_lower (guint keyval);
// gboolean gdk_keyval_is_lower (guint keyval);
GI_INLINE_DECL bool keyval_is_lower (guint keyval) noexcept;

// gboolean gdk_keyval_is_upper (guint keyval);
// gboolean gdk_keyval_is_upper (guint keyval);
GI_INLINE_DECL bool keyval_is_upper (guint keyval) noexcept;

// gchar* gdk_keyval_name (guint keyval);
// char* gdk_keyval_name (guint keyval);
GI_INLINE_DECL std::string keyval_name (guint keyval) noexcept;

// guint gdk_keyval_to_lower (guint keyval);
// guint gdk_keyval_to_lower (guint keyval);
GI_INLINE_DECL guint keyval_to_lower (guint keyval) noexcept;

// guint32 gdk_keyval_to_unicode (guint keyval);
// guint32 gdk_keyval_to_unicode (guint keyval);
GI_INLINE_DECL guint32 keyval_to_unicode (guint keyval) noexcept;

// guint gdk_keyval_to_upper (guint keyval);
// guint gdk_keyval_to_upper (guint keyval);
GI_INLINE_DECL guint keyval_to_upper (guint keyval) noexcept;

// void gdk_notify_startup_complete ();
// void gdk_notify_startup_complete ();
GI_INLINE_DECL void notify_startup_complete () noexcept;

// void gdk_notify_startup_complete_with_id (const gchar* startup_id);
// void gdk_notify_startup_complete_with_id (const char* startup_id);
GI_INLINE_DECL void notify_startup_complete_with_id (const std::string & startup_id) noexcept;

// GdkWindow* gdk_offscreen_window_get_embedder (GdkWindow* window);
// ::GdkWindow* gdk_offscreen_window_get_embedder (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window offscreen_window_get_embedder (Gdk::Window window) noexcept;

// cairo_surface_t* gdk_offscreen_window_get_surface (GdkWindow* window);
// ::cairo_surface_t* gdk_offscreen_window_get_surface (::GdkWindow* window);
GI_INLINE_DECL cairo::Surface offscreen_window_get_surface (Gdk::Window window) noexcept;

// void gdk_offscreen_window_set_embedder (GdkWindow* window, GdkWindow* embedder);
// void gdk_offscreen_window_set_embedder (::GdkWindow* window, ::GdkWindow* embedder);
GI_INLINE_DECL void offscreen_window_set_embedder (Gdk::Window window, Gdk::Window embedder) noexcept;

// PangoContext* gdk_pango_context_get ();
// ::PangoContext* gdk_pango_context_get ();
GI_INLINE_DECL Pango::Context pango_context_get () noexcept;

// PangoContext* gdk_pango_context_get_for_display (GdkDisplay* display);
// ::PangoContext* gdk_pango_context_get_for_display (::GdkDisplay* display);
GI_INLINE_DECL Pango::Context pango_context_get_for_display (Gdk::Display display) noexcept;

// PangoContext* gdk_pango_context_get_for_screen (GdkScreen* screen);
// ::PangoContext* gdk_pango_context_get_for_screen (::GdkScreen* screen);
GI_INLINE_DECL Pango::Context pango_context_get_for_screen (Gdk::Screen screen) noexcept;

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
GI_INLINE_DECL GdkPixbuf::Pixbuf pixbuf_get_from_surface (cairo::Surface surface, gint src_x, gint src_y, gint width, gint height) noexcept;

// GdkPixbuf* gdk_pixbuf_get_from_window (GdkWindow* window, gint src_x, gint src_y, gint width, gint height);
// ::GdkPixbuf* gdk_pixbuf_get_from_window (::GdkWindow* window, gint src_x, gint src_y, gint width, gint height);
GI_INLINE_DECL GdkPixbuf::Pixbuf pixbuf_get_from_window (Gdk::Window window, gint src_x, gint src_y, gint width, gint height) noexcept;

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
GI_INLINE_DECL void set_allowed_backends (const std::string & backends) noexcept;

// void gdk_set_double_click_time (guint msec);
// void gdk_set_double_click_time (guint msec);
GI_INLINE_DECL void set_double_click_time (guint msec) noexcept;

// void gdk_set_program_class (const gchar* program_class);
// void gdk_set_program_class (const char* program_class);
GI_INLINE_DECL void set_program_class (const std::string & program_class) noexcept;

// void gdk_set_show_events (gboolean show_events);
// void gdk_set_show_events (gboolean show_events);
GI_INLINE_DECL void set_show_events (gboolean show_events) noexcept;

// gboolean gdk_setting_get (const gchar* name, GValue* value);
// gboolean gdk_setting_get (const char* name, ::GValue* value);
GI_INLINE_DECL bool setting_get (const std::string & name, GObject::Value value) noexcept;

// void gdk_test_render_sync (GdkWindow* window);
// void gdk_test_render_sync (::GdkWindow* window);
GI_INLINE_DECL void test_render_sync (Gdk::Window window) noexcept;

// gboolean gdk_test_simulate_button (GdkWindow* window, gint x, gint y, guint button, GdkModifierType modifiers, GdkEventType button_pressrelease);
// gboolean gdk_test_simulate_button (::GdkWindow* window, gint x, gint y, guint button, ::GdkModifierType modifiers, ::GdkEventType button_pressrelease);
GI_INLINE_DECL bool test_simulate_button (Gdk::Window window, gint x, gint y, guint button, Gdk::ModifierType modifiers, Gdk::EventType button_pressrelease) noexcept;

// gboolean gdk_test_simulate_key (GdkWindow* window, gint x, gint y, guint keyval, GdkModifierType modifiers, GdkEventType key_pressrelease);
// gboolean gdk_test_simulate_key (::GdkWindow* window, gint x, gint y, guint keyval, ::GdkModifierType modifiers, ::GdkEventType key_pressrelease);
GI_INLINE_DECL bool test_simulate_key (Gdk::Window window, gint x, gint y, guint keyval, Gdk::ModifierType modifiers, Gdk::EventType key_pressrelease) noexcept;

// gint gdk_text_property_to_utf8_list_for_display (GdkDisplay* display, GdkAtom encoding, gint format, const guchar* text, gint length, gchar*** list);
// gint gdk_text_property_to_utf8_list_for_display (::GdkDisplay* display,  encoding, gint format, const guint8* text, gint length, char*** list);
// SKIP; encoding type  not supported

// guint gdk_threads_add_idle (GSourceFunc function, gpointer data);
// guint gdk_threads_add_idle (GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_idle_full

// guint gdk_threads_add_idle_full (gint priority, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_idle_full (gint priority, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint threads_add_idle (gint priority, GLib::SourceFunc function) noexcept;

// guint gdk_threads_add_timeout (guint interval, GSourceFunc function, gpointer data);
// guint gdk_threads_add_timeout (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_timeout_full

// guint gdk_threads_add_timeout_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_timeout_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint threads_add_timeout (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// guint gdk_threads_add_timeout_seconds (guint interval, GSourceFunc function, gpointer data);
// guint gdk_threads_add_timeout_seconds (guint interval, GLib::SourceFunc::cfunction_type function, void* data);
// IGNORE; not introspectable; shadowed-by threads_add_timeout_seconds_full

// guint gdk_threads_add_timeout_seconds_full (gint priority, guint interval, GSourceFunc function, gpointer data, GDestroyNotify notify);
// guint gdk_threads_add_timeout_seconds_full (gint priority, guint interval, GLib::SourceFunc::cfunction_type function, void* data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint threads_add_timeout_seconds (gint priority, guint interval, GLib::SourceFunc function) noexcept;

// guint gdk_unicode_to_keyval (guint32 wc);
// guint gdk_unicode_to_keyval (guint32 wc);
GI_INLINE_DECL guint unicode_to_keyval (guint32 wc) noexcept;

// gchar* gdk_utf8_to_string_target (const gchar* str);
// char* gdk_utf8_to_string_target (const char* str);
GI_INLINE_DECL std::string utf8_to_string_target (const std::string & str) noexcept;

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
