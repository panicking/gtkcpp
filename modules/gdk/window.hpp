// AUTO-GENERATED

#ifndef _GI_GDK_WINDOW_HPP_
#define _GI_GDK_WINDOW_HPP_


namespace gi {

namespace repository {

namespace Gdk {

class Cursor;
class Device;
class Display;
class DrawingContext;
class FrameClock;
class GLContext;
class Geometry;
class RGBA;
class Rectangle;
class Screen;
class Visual;
class WindowAttr;

class Window;

namespace base {


#define GI_GDK_WINDOW_BASE base::WindowBase
class WindowBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GdkWindow BaseObjectType;

WindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gdk_window_get_type(); } 

// GdkWindow* gdk_window_new (GdkWindow* parent, GdkWindowAttr* attributes, gint attributes_mask);
// ::GdkWindow* gdk_window_new (::GdkWindow* parent, ::GdkWindowAttr* attributes, ::GdkWindowAttributesType attributes_mask);
static GI_INLINE_DECL Gdk::Window new_ (Gdk::Window parent, Gdk::WindowAttr attributes, Gdk::WindowAttributesType attributes_mask) noexcept;
static GI_INLINE_DECL Gdk::Window new_ (Gdk::WindowAttr attributes, Gdk::WindowAttributesType attributes_mask) noexcept;

// GdkWindow* gdk_window_at_pointer (gint* win_x, gint* win_y);
// ::GdkWindow* gdk_window_at_pointer (gint* win_x, gint* win_y);
// IGNORE; deprecated

// void gdk_window_constrain_size (GdkGeometry* geometry, GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
// void gdk_window_constrain_size (::GdkGeometry* geometry, ::GdkWindowHints flags, gint width, gint height, gint* new_width, gint* new_height);
static GI_INLINE_DECL void constrain_size (Gdk::Geometry geometry, Gdk::WindowHints flags, gint width, gint height, gint & new_width, gint & new_height) noexcept;
static GI_INLINE_DECL std::tuple<gint, gint> constrain_size (Gdk::Geometry geometry, Gdk::WindowHints flags, gint width, gint height) noexcept;

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
GI_INLINE_DECL void beep () noexcept;

// GdkDrawingContext* gdk_window_begin_draw_frame (GdkWindow* window, const cairo_region_t* region);
// ::GdkDrawingContext* gdk_window_begin_draw_frame (::GdkWindow* window, const ::cairo_region_t* region);
GI_INLINE_DECL Gdk::DrawingContext begin_draw_frame (const cairo::Region & region) noexcept;

// void gdk_window_begin_move_drag (GdkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_move_drag (::GdkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_move_drag (gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gdk_window_begin_move_drag_for_device (GdkWindow* window, GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_move_drag_for_device (::GdkWindow* window, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_move_drag_for_device (Gdk::Device device, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gdk_window_begin_paint_rect (GdkWindow* window, const GdkRectangle* rectangle);
// void gdk_window_begin_paint_rect (::GdkWindow* window, const ::GdkRectangle* rectangle);
// IGNORE; deprecated

// void gdk_window_begin_paint_region (GdkWindow* window, const cairo_region_t* region);
// void gdk_window_begin_paint_region (::GdkWindow* window, const ::cairo_region_t* region);
// IGNORE; deprecated

// void gdk_window_begin_resize_drag (GdkWindow* window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_resize_drag (::GdkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_resize_drag (Gdk::WindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gdk_window_begin_resize_drag_for_device (GdkWindow* window, GdkWindowEdge edge, GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gdk_window_begin_resize_drag_for_device (::GdkWindow* window, ::GdkWindowEdge edge, ::GdkDevice* device, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_resize_drag_for_device (Gdk::WindowEdge edge, Gdk::Device device, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gdk_window_configure_finished (GdkWindow* window);
// void gdk_window_configure_finished (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_coords_from_parent (GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
// void gdk_window_coords_from_parent (::GdkWindow* window, gdouble parent_x, gdouble parent_y, gdouble* x, gdouble* y);
GI_INLINE_DECL void coords_from_parent (gdouble parent_x, gdouble parent_y, gdouble * x = nullptr, gdouble * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> coords_from_parent (gdouble parent_x, gdouble parent_y) noexcept;

// void gdk_window_coords_to_parent (GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
// void gdk_window_coords_to_parent (::GdkWindow* window, gdouble x, gdouble y, gdouble* parent_x, gdouble* parent_y);
GI_INLINE_DECL void coords_to_parent (gdouble x, gdouble y, gdouble * parent_x = nullptr, gdouble * parent_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gdouble, gdouble> coords_to_parent (gdouble x, gdouble y) noexcept;

// GdkGLContext* gdk_window_create_gl_context (GdkWindow* window, GError ** error);
// ::GdkGLContext* gdk_window_create_gl_context (::GdkWindow* window, GError ** error);
GI_INLINE_DECL Gdk::GLContext create_gl_context ();
GI_INLINE_DECL Gdk::GLContext create_gl_context (GLib::Error * _error) noexcept;

// cairo_surface_t* gdk_window_create_similar_image_surface (GdkWindow* window, cairo_format_t format, int width, int height, int scale);
// ::cairo_surface_t* gdk_window_create_similar_image_surface (::GdkWindow* window, ::cairo_format_t format, gint width, gint height, gint scale);
GI_INLINE_DECL cairo::Surface create_similar_image_surface (cairo::Format format, gint width, gint height, gint scale) noexcept;

// cairo_surface_t* gdk_window_create_similar_surface (GdkWindow* window, cairo_content_t content, int width, int height);
// ::cairo_surface_t* gdk_window_create_similar_surface (::GdkWindow* window, ::cairo_content_t content, gint width, gint height);
GI_INLINE_DECL cairo::Surface create_similar_surface (cairo::Content content, gint width, gint height) noexcept;

// void gdk_window_deiconify (GdkWindow* window);
// void gdk_window_deiconify (::GdkWindow* window);
GI_INLINE_DECL void deiconify () noexcept;

// void gdk_window_destroy (GdkWindow* window);
// void gdk_window_destroy (::GdkWindow* window);
GI_INLINE_DECL void destroy () noexcept;

// void gdk_window_destroy_notify (GdkWindow* window);
// void gdk_window_destroy_notify (::GdkWindow* window);
// IGNORE; marked ignore

// void gdk_window_enable_synchronized_configure (GdkWindow* window);
// void gdk_window_enable_synchronized_configure (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_end_draw_frame (GdkWindow* window, GdkDrawingContext* context);
// void gdk_window_end_draw_frame (::GdkWindow* window, ::GdkDrawingContext* context);
GI_INLINE_DECL void end_draw_frame (Gdk::DrawingContext context) noexcept;

// void gdk_window_end_paint (GdkWindow* window);
// void gdk_window_end_paint (::GdkWindow* window);
GI_INLINE_DECL void end_paint () noexcept;

// gboolean gdk_window_ensure_native (GdkWindow* window);
// gboolean gdk_window_ensure_native (::GdkWindow* window);
GI_INLINE_DECL bool ensure_native () noexcept;

// void gdk_window_flush (GdkWindow* window);
// void gdk_window_flush (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_focus (GdkWindow* window, guint32 timestamp);
// void gdk_window_focus (::GdkWindow* window, guint32 timestamp);
GI_INLINE_DECL void focus (guint32 timestamp) noexcept;

// void gdk_window_freeze_toplevel_updates_libgtk_only (GdkWindow* window);
// void gdk_window_freeze_toplevel_updates_libgtk_only (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_freeze_updates (GdkWindow* window);
// void gdk_window_freeze_updates (::GdkWindow* window);
GI_INLINE_DECL void freeze_updates () noexcept;

// void gdk_window_fullscreen (GdkWindow* window);
// void gdk_window_fullscreen (::GdkWindow* window);
GI_INLINE_DECL void fullscreen () noexcept;

// void gdk_window_fullscreen_on_monitor (GdkWindow* window, gint monitor);
// void gdk_window_fullscreen_on_monitor (::GdkWindow* window, gint monitor);
GI_INLINE_DECL void fullscreen_on_monitor (gint monitor) noexcept;

// void gdk_window_geometry_changed (GdkWindow* window);
// void gdk_window_geometry_changed (::GdkWindow* window);
GI_INLINE_DECL void geometry_changed () noexcept;

// gboolean gdk_window_get_accept_focus (GdkWindow* window);
// gboolean gdk_window_get_accept_focus (::GdkWindow* window);
GI_INLINE_DECL bool get_accept_focus () noexcept;

// cairo_pattern_t* gdk_window_get_background_pattern (GdkWindow* window);
// ::cairo_pattern_t* gdk_window_get_background_pattern (::GdkWindow* window);
// IGNORE; deprecated

// GList* gdk_window_get_children (GdkWindow* window);
// ::GList* gdk_window_get_children (::GdkWindow* window);
GI_INLINE_DECL std::vector<Gdk::Window> get_children () noexcept;

// GList* gdk_window_get_children_with_user_data (GdkWindow* window, gpointer user_data);
// ::GList* gdk_window_get_children_with_user_data (::GdkWindow* window, void* user_data);
GI_INLINE_DECL std::vector<Gdk::Window> get_children_with_user_data (void* user_data) noexcept;

// cairo_region_t* gdk_window_get_clip_region (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_clip_region (::GdkWindow* window);
GI_INLINE_DECL cairo::Region get_clip_region () noexcept;

// gboolean gdk_window_get_composited (GdkWindow* window);
// gboolean gdk_window_get_composited (::GdkWindow* window);
// IGNORE; deprecated

// GdkCursor* gdk_window_get_cursor (GdkWindow* window);
// ::GdkCursor* gdk_window_get_cursor (::GdkWindow* window);
GI_INLINE_DECL Gdk::Cursor get_cursor () noexcept;

// gboolean gdk_window_get_decorations (GdkWindow* window, GdkWMDecoration* decorations);
// gboolean gdk_window_get_decorations (::GdkWindow* window, ::GdkWMDecoration* decorations);
GI_INLINE_DECL bool get_decorations (Gdk::WMDecoration & decorations) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::WMDecoration> get_decorations () noexcept;

// GdkCursor* gdk_window_get_device_cursor (GdkWindow* window, GdkDevice* device);
// ::GdkCursor* gdk_window_get_device_cursor (::GdkWindow* window, ::GdkDevice* device);
GI_INLINE_DECL Gdk::Cursor get_device_cursor (Gdk::Device device) noexcept;

// GdkEventMask gdk_window_get_device_events (GdkWindow* window, GdkDevice* device);
// ::GdkEventMask gdk_window_get_device_events (::GdkWindow* window, ::GdkDevice* device);
GI_INLINE_DECL Gdk::EventMask get_device_events (Gdk::Device device) noexcept;

// GdkWindow* gdk_window_get_device_position (GdkWindow* window, GdkDevice* device, gint* x, gint* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_device_position (::GdkWindow* window, ::GdkDevice* device, gint* x, gint* y, ::GdkModifierType* mask);
GI_INLINE_DECL Gdk::Window get_device_position (Gdk::Device device, gint * x = nullptr, gint * y = nullptr, Gdk::ModifierType * mask = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Window, gint, gint, Gdk::ModifierType> get_device_position (Gdk::Device device) noexcept;

// GdkWindow* gdk_window_get_device_position_double (GdkWindow* window, GdkDevice* device, gdouble* x, gdouble* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_device_position_double (::GdkWindow* window, ::GdkDevice* device, gdouble* x, gdouble* y, ::GdkModifierType* mask);
GI_INLINE_DECL Gdk::Window get_device_position_double (Gdk::Device device, gdouble * x = nullptr, gdouble * y = nullptr, Gdk::ModifierType * mask = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::Window, gdouble, gdouble, Gdk::ModifierType> get_device_position_double (Gdk::Device device) noexcept;

// GdkDisplay* gdk_window_get_display (GdkWindow* window);
// ::GdkDisplay* gdk_window_get_display (::GdkWindow* window);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// GdkDragProtocol gdk_window_get_drag_protocol (GdkWindow* window, GdkWindow** target);
// ::GdkDragProtocol gdk_window_get_drag_protocol (::GdkWindow* window, ::GdkWindow** target);
GI_INLINE_DECL Gdk::DragProtocol get_drag_protocol (Gdk::Window * target = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gdk::DragProtocol, Gdk::Window> get_drag_protocol () noexcept;

// GdkWindow* gdk_window_get_effective_parent (GdkWindow* window);
// ::GdkWindow* gdk_window_get_effective_parent (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window get_effective_parent () noexcept;

// GdkWindow* gdk_window_get_effective_toplevel (GdkWindow* window);
// ::GdkWindow* gdk_window_get_effective_toplevel (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window get_effective_toplevel () noexcept;

// gboolean gdk_window_get_event_compression (GdkWindow* window);
// gboolean gdk_window_get_event_compression (::GdkWindow* window);
GI_INLINE_DECL bool get_event_compression () noexcept;

// GdkEventMask gdk_window_get_events (GdkWindow* window);
// ::GdkEventMask gdk_window_get_events (::GdkWindow* window);
GI_INLINE_DECL Gdk::EventMask get_events () noexcept;

// gboolean gdk_window_get_focus_on_map (GdkWindow* window);
// gboolean gdk_window_get_focus_on_map (::GdkWindow* window);
GI_INLINE_DECL bool get_focus_on_map () noexcept;

// GdkFrameClock* gdk_window_get_frame_clock (GdkWindow* window);
// ::GdkFrameClock* gdk_window_get_frame_clock (::GdkWindow* window);
GI_INLINE_DECL Gdk::FrameClock get_frame_clock () noexcept;

// void gdk_window_get_frame_extents (GdkWindow* window, GdkRectangle* rect);
// void gdk_window_get_frame_extents (::GdkWindow* window, ::GdkRectangle* rect);
GI_INLINE_DECL void get_frame_extents (Gdk::Rectangle & rect) noexcept;
GI_INLINE_DECL Gdk::Rectangle get_frame_extents () noexcept;

// GdkFullscreenMode gdk_window_get_fullscreen_mode (GdkWindow* window);
// ::GdkFullscreenMode gdk_window_get_fullscreen_mode (::GdkWindow* window);
GI_INLINE_DECL Gdk::FullscreenMode get_fullscreen_mode () noexcept;

// void gdk_window_get_geometry (GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
// void gdk_window_get_geometry (::GdkWindow* window, gint* x, gint* y, gint* width, gint* height);
GI_INLINE_DECL void get_geometry (gint * x = nullptr, gint * y = nullptr, gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_geometry () noexcept;

// GdkWindow* gdk_window_get_group (GdkWindow* window);
// ::GdkWindow* gdk_window_get_group (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window get_group () noexcept;

// int gdk_window_get_height (GdkWindow* window);
// gint gdk_window_get_height (::GdkWindow* window);
GI_INLINE_DECL gint get_height () noexcept;

// gboolean gdk_window_get_modal_hint (GdkWindow* window);
// gboolean gdk_window_get_modal_hint (::GdkWindow* window);
GI_INLINE_DECL bool get_modal_hint () noexcept;

// gint gdk_window_get_origin (GdkWindow* window, gint* x, gint* y);
// gint gdk_window_get_origin (::GdkWindow* window, gint* x, gint* y);
GI_INLINE_DECL gint get_origin (gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint> get_origin () noexcept;

// GdkWindow* gdk_window_get_parent (GdkWindow* window);
// ::GdkWindow* gdk_window_get_parent (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window get_parent () noexcept;

// gboolean gdk_window_get_pass_through (GdkWindow* window);
// gboolean gdk_window_get_pass_through (::GdkWindow* window);
GI_INLINE_DECL bool get_pass_through () noexcept;

// GdkWindow* gdk_window_get_pointer (GdkWindow* window, gint* x, gint* y, GdkModifierType* mask);
// ::GdkWindow* gdk_window_get_pointer (::GdkWindow* window, gint* x, gint* y, ::GdkModifierType* mask);
// IGNORE; deprecated

// void gdk_window_get_position (GdkWindow* window, gint* x, gint* y);
// void gdk_window_get_position (::GdkWindow* window, gint* x, gint* y);
GI_INLINE_DECL void get_position (gint * x = nullptr, gint * y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_position () noexcept;

// void gdk_window_get_root_coords (GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
// void gdk_window_get_root_coords (::GdkWindow* window, gint x, gint y, gint* root_x, gint* root_y);
GI_INLINE_DECL void get_root_coords (gint x, gint y, gint & root_x, gint & root_y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_root_coords (gint x, gint y) noexcept;

// void gdk_window_get_root_origin (GdkWindow* window, gint* x, gint* y);
// void gdk_window_get_root_origin (::GdkWindow* window, gint* x, gint* y);
GI_INLINE_DECL void get_root_origin (gint & x, gint & y) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_root_origin () noexcept;

// gint gdk_window_get_scale_factor (GdkWindow* window);
// gint gdk_window_get_scale_factor (::GdkWindow* window);
GI_INLINE_DECL gint get_scale_factor () noexcept;

// GdkScreen* gdk_window_get_screen (GdkWindow* window);
// ::GdkScreen* gdk_window_get_screen (::GdkWindow* window);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// GdkEventMask gdk_window_get_source_events (GdkWindow* window, GdkInputSource source);
// ::GdkEventMask gdk_window_get_source_events (::GdkWindow* window, ::GdkInputSource source);
GI_INLINE_DECL Gdk::EventMask get_source_events (Gdk::InputSource source) noexcept;

// GdkWindowState gdk_window_get_state (GdkWindow* window);
// ::GdkWindowState gdk_window_get_state (::GdkWindow* window);
GI_INLINE_DECL Gdk::WindowState get_state () noexcept;

// gboolean gdk_window_get_support_multidevice (GdkWindow* window);
// gboolean gdk_window_get_support_multidevice (::GdkWindow* window);
GI_INLINE_DECL bool get_support_multidevice () noexcept;

// GdkWindow* gdk_window_get_toplevel (GdkWindow* window);
// ::GdkWindow* gdk_window_get_toplevel (::GdkWindow* window);
GI_INLINE_DECL Gdk::Window get_toplevel () noexcept;

// GdkWindowTypeHint gdk_window_get_type_hint (GdkWindow* window);
// ::GdkWindowTypeHint gdk_window_get_type_hint (::GdkWindow* window);
GI_INLINE_DECL Gdk::WindowTypeHint get_type_hint () noexcept;

// cairo_region_t* gdk_window_get_update_area (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_update_area (::GdkWindow* window);
GI_INLINE_DECL cairo::Region get_update_area () noexcept;

// void gdk_window_get_user_data (GdkWindow* window, gpointer* data);
// void gdk_window_get_user_data (::GdkWindow* window, void** data);
GI_INLINE_DECL void get_user_data (gpointer & data) noexcept;
GI_INLINE_DECL gpointer get_user_data () noexcept;

// cairo_region_t* gdk_window_get_visible_region (GdkWindow* window);
// ::cairo_region_t* gdk_window_get_visible_region (::GdkWindow* window);
GI_INLINE_DECL cairo::Region get_visible_region () noexcept;

// GdkVisual* gdk_window_get_visual (GdkWindow* window);
// ::GdkVisual* gdk_window_get_visual (::GdkWindow* window);
GI_INLINE_DECL Gdk::Visual get_visual () noexcept;

// int gdk_window_get_width (GdkWindow* window);
// gint gdk_window_get_width (::GdkWindow* window);
GI_INLINE_DECL gint get_width () noexcept;

// GdkWindowType gdk_window_get_window_type (GdkWindow* window);
// ::GdkWindowType gdk_window_get_window_type (::GdkWindow* window);
GI_INLINE_DECL Gdk::WindowType get_window_type () noexcept;

// gboolean gdk_window_has_native (GdkWindow* window);
// gboolean gdk_window_has_native (::GdkWindow* window);
GI_INLINE_DECL bool has_native () noexcept;

// void gdk_window_hide (GdkWindow* window);
// void gdk_window_hide (::GdkWindow* window);
GI_INLINE_DECL void hide () noexcept;

// void gdk_window_iconify (GdkWindow* window);
// void gdk_window_iconify (::GdkWindow* window);
GI_INLINE_DECL void iconify () noexcept;

// void gdk_window_input_shape_combine_region (GdkWindow* window, const cairo_region_t* shape_region, gint offset_x, gint offset_y);
// void gdk_window_input_shape_combine_region (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
GI_INLINE_DECL void input_shape_combine_region (const cairo::Region & shape_region, gint offset_x, gint offset_y) noexcept;

// void gdk_window_invalidate_maybe_recurse (GdkWindow* window, const cairo_region_t* region, GdkWindowChildFunc child_func, gpointer user_data);
// void gdk_window_invalidate_maybe_recurse (::GdkWindow* window, const ::cairo_region_t* region, Gdk::WindowChildFunc::cfunction_type child_func, void* user_data);
GI_INLINE_DECL void invalidate_maybe_recurse (const cairo::Region & region, Gdk::WindowChildFunc child_func) noexcept;

// void gdk_window_invalidate_rect (GdkWindow* window, const GdkRectangle* rect, gboolean invalidate_children);
// void gdk_window_invalidate_rect (::GdkWindow* window, const ::GdkRectangle* rect, gboolean invalidate_children);
GI_INLINE_DECL void invalidate_rect (const Gdk::Rectangle & rect, gboolean invalidate_children) noexcept;
GI_INLINE_DECL void invalidate_rect (gboolean invalidate_children) noexcept;

// void gdk_window_invalidate_region (GdkWindow* window, const cairo_region_t* region, gboolean invalidate_children);
// void gdk_window_invalidate_region (::GdkWindow* window, const ::cairo_region_t* region, gboolean invalidate_children);
GI_INLINE_DECL void invalidate_region (const cairo::Region & region, gboolean invalidate_children) noexcept;

// gboolean gdk_window_is_destroyed (GdkWindow* window);
// gboolean gdk_window_is_destroyed (::GdkWindow* window);
GI_INLINE_DECL bool is_destroyed () noexcept;

// gboolean gdk_window_is_input_only (GdkWindow* window);
// gboolean gdk_window_is_input_only (::GdkWindow* window);
GI_INLINE_DECL bool is_input_only () noexcept;

// gboolean gdk_window_is_shaped (GdkWindow* window);
// gboolean gdk_window_is_shaped (::GdkWindow* window);
GI_INLINE_DECL bool is_shaped () noexcept;

// gboolean gdk_window_is_viewable (GdkWindow* window);
// gboolean gdk_window_is_viewable (::GdkWindow* window);
GI_INLINE_DECL bool is_viewable () noexcept;

// gboolean gdk_window_is_visible (GdkWindow* window);
// gboolean gdk_window_is_visible (::GdkWindow* window);
GI_INLINE_DECL bool is_visible () noexcept;

// void gdk_window_lower (GdkWindow* window);
// void gdk_window_lower (::GdkWindow* window);
GI_INLINE_DECL void lower () noexcept;

// void gdk_window_mark_paint_from_clip (GdkWindow* window, cairo_t* cr);
// void gdk_window_mark_paint_from_clip (::GdkWindow* window, ::cairo_t* cr);
GI_INLINE_DECL void mark_paint_from_clip (cairo::Context cr) noexcept;

// void gdk_window_maximize (GdkWindow* window);
// void gdk_window_maximize (::GdkWindow* window);
GI_INLINE_DECL void maximize () noexcept;

// void gdk_window_merge_child_input_shapes (GdkWindow* window);
// void gdk_window_merge_child_input_shapes (::GdkWindow* window);
GI_INLINE_DECL void merge_child_input_shapes () noexcept;

// void gdk_window_merge_child_shapes (GdkWindow* window);
// void gdk_window_merge_child_shapes (::GdkWindow* window);
GI_INLINE_DECL void merge_child_shapes () noexcept;

// void gdk_window_move (GdkWindow* window, gint x, gint y);
// void gdk_window_move (::GdkWindow* window, gint x, gint y);
GI_INLINE_DECL void move (gint x, gint y) noexcept;

// void gdk_window_move_region (GdkWindow* window, const cairo_region_t* region, gint dx, gint dy);
// void gdk_window_move_region (::GdkWindow* window, const ::cairo_region_t* region, gint dx, gint dy);
GI_INLINE_DECL void move_region (const cairo::Region & region, gint dx, gint dy) noexcept;

// void gdk_window_move_resize (GdkWindow* window, gint x, gint y, gint width, gint height);
// void gdk_window_move_resize (::GdkWindow* window, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void move_resize (gint x, gint y, gint width, gint height) noexcept;

// void gdk_window_move_to_rect (GdkWindow* window, const GdkRectangle* rect, GdkGravity rect_anchor, GdkGravity window_anchor, GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
// void gdk_window_move_to_rect (::GdkWindow* window, const ::GdkRectangle* rect, ::GdkGravity rect_anchor, ::GdkGravity window_anchor, ::GdkAnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy);
GI_INLINE_DECL void move_to_rect (const Gdk::Rectangle & rect, Gdk::Gravity rect_anchor, Gdk::Gravity window_anchor, Gdk::AnchorHints anchor_hints, gint rect_anchor_dx, gint rect_anchor_dy) noexcept;

// GList* gdk_window_peek_children (GdkWindow* window);
// ::GList* gdk_window_peek_children (::GdkWindow* window);
GI_INLINE_DECL std::vector<Gdk::Window> peek_children () noexcept;

// void gdk_window_process_updates (GdkWindow* window, gboolean update_children);
// void gdk_window_process_updates (::GdkWindow* window, gboolean update_children);
// IGNORE; deprecated

// void gdk_window_raise (GdkWindow* window);
// void gdk_window_raise (::GdkWindow* window);
GI_INLINE_DECL void raise () noexcept;

// void gdk_window_register_dnd (GdkWindow* window);
// void gdk_window_register_dnd (::GdkWindow* window);
GI_INLINE_DECL void register_dnd () noexcept;

// void gdk_window_remove_filter (GdkWindow* window, GdkFilterFunc function, gpointer data);
// void gdk_window_remove_filter (::GdkWindow* window,  function, void* data);
// IGNORE; not introspectable, function type  not supported

// void gdk_window_reparent (GdkWindow* window, GdkWindow* new_parent, gint x, gint y);
// void gdk_window_reparent (::GdkWindow* window, ::GdkWindow* new_parent, gint x, gint y);
GI_INLINE_DECL void reparent (Gdk::Window new_parent, gint x, gint y) noexcept;

// void gdk_window_resize (GdkWindow* window, gint width, gint height);
// void gdk_window_resize (::GdkWindow* window, gint width, gint height);
GI_INLINE_DECL void resize (gint width, gint height) noexcept;

// void gdk_window_restack (GdkWindow* window, GdkWindow* sibling, gboolean above);
// void gdk_window_restack (::GdkWindow* window, ::GdkWindow* sibling, gboolean above);
GI_INLINE_DECL void restack (Gdk::Window sibling, gboolean above) noexcept;
GI_INLINE_DECL void restack (gboolean above) noexcept;

// void gdk_window_scroll (GdkWindow* window, gint dx, gint dy);
// void gdk_window_scroll (::GdkWindow* window, gint dx, gint dy);
GI_INLINE_DECL void scroll (gint dx, gint dy) noexcept;

// void gdk_window_set_accept_focus (GdkWindow* window, gboolean accept_focus);
// void gdk_window_set_accept_focus (::GdkWindow* window, gboolean accept_focus);
GI_INLINE_DECL void set_accept_focus (gboolean accept_focus) noexcept;

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
GI_INLINE_DECL void set_child_input_shapes () noexcept;

// void gdk_window_set_child_shapes (GdkWindow* window);
// void gdk_window_set_child_shapes (::GdkWindow* window);
GI_INLINE_DECL void set_child_shapes () noexcept;

// void gdk_window_set_composited (GdkWindow* window, gboolean composited);
// void gdk_window_set_composited (::GdkWindow* window, gboolean composited);
// IGNORE; deprecated

// void gdk_window_set_cursor (GdkWindow* window, GdkCursor* cursor);
// void gdk_window_set_cursor (::GdkWindow* window, ::GdkCursor* cursor);
GI_INLINE_DECL void set_cursor (Gdk::Cursor cursor) noexcept;
GI_INLINE_DECL void set_cursor () noexcept;

// void gdk_window_set_decorations (GdkWindow* window, GdkWMDecoration decorations);
// void gdk_window_set_decorations (::GdkWindow* window, ::GdkWMDecoration decorations);
GI_INLINE_DECL void set_decorations (Gdk::WMDecoration decorations) noexcept;

// void gdk_window_set_device_cursor (GdkWindow* window, GdkDevice* device, GdkCursor* cursor);
// void gdk_window_set_device_cursor (::GdkWindow* window, ::GdkDevice* device, ::GdkCursor* cursor);
GI_INLINE_DECL void set_device_cursor (Gdk::Device device, Gdk::Cursor cursor) noexcept;

// void gdk_window_set_device_events (GdkWindow* window, GdkDevice* device, GdkEventMask event_mask);
// void gdk_window_set_device_events (::GdkWindow* window, ::GdkDevice* device, ::GdkEventMask event_mask);
GI_INLINE_DECL void set_device_events (Gdk::Device device, Gdk::EventMask event_mask) noexcept;

// void gdk_window_set_event_compression (GdkWindow* window, gboolean event_compression);
// void gdk_window_set_event_compression (::GdkWindow* window, gboolean event_compression);
GI_INLINE_DECL void set_event_compression (gboolean event_compression) noexcept;

// void gdk_window_set_events (GdkWindow* window, GdkEventMask event_mask);
// void gdk_window_set_events (::GdkWindow* window, ::GdkEventMask event_mask);
GI_INLINE_DECL void set_events (Gdk::EventMask event_mask) noexcept;

// void gdk_window_set_focus_on_map (GdkWindow* window, gboolean focus_on_map);
// void gdk_window_set_focus_on_map (::GdkWindow* window, gboolean focus_on_map);
GI_INLINE_DECL void set_focus_on_map (gboolean focus_on_map) noexcept;

// void gdk_window_set_fullscreen_mode (GdkWindow* window, GdkFullscreenMode mode);
// void gdk_window_set_fullscreen_mode (::GdkWindow* window, ::GdkFullscreenMode mode);
GI_INLINE_DECL void set_fullscreen_mode (Gdk::FullscreenMode mode) noexcept;

// void gdk_window_set_functions (GdkWindow* window, GdkWMFunction functions);
// void gdk_window_set_functions (::GdkWindow* window, ::GdkWMFunction functions);
GI_INLINE_DECL void set_functions (Gdk::WMFunction functions) noexcept;

// void gdk_window_set_geometry_hints (GdkWindow* window, const GdkGeometry* geometry, GdkWindowHints geom_mask);
// void gdk_window_set_geometry_hints (::GdkWindow* window, const ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
GI_INLINE_DECL void set_geometry_hints (const Gdk::Geometry & geometry, Gdk::WindowHints geom_mask) noexcept;

// void gdk_window_set_group (GdkWindow* window, GdkWindow* leader);
// void gdk_window_set_group (::GdkWindow* window, ::GdkWindow* leader);
GI_INLINE_DECL void set_group (Gdk::Window leader) noexcept;
GI_INLINE_DECL void set_group () noexcept;

// void gdk_window_set_icon_list (GdkWindow* window, GList* pixbufs);
// void gdk_window_set_icon_list (::GdkWindow* window, ::GList* pixbufs);
GI_INLINE_DECL void set_icon_list (const std::vector<GdkPixbuf::Pixbuf> & pixbufs) noexcept;

// void gdk_window_set_icon_name (GdkWindow* window, const gchar* name);
// void gdk_window_set_icon_name (::GdkWindow* window, const char* name);
GI_INLINE_DECL void set_icon_name (const std::string & name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void gdk_window_set_invalidate_handler (GdkWindow* window, GdkWindowInvalidateHandlerFunc handler);
// void gdk_window_set_invalidate_handler (::GdkWindow* window,  handler);
// IGNORE; not introspectable, handler type  not supported

// void gdk_window_set_keep_above (GdkWindow* window, gboolean setting);
// void gdk_window_set_keep_above (::GdkWindow* window, gboolean setting);
GI_INLINE_DECL void set_keep_above (gboolean setting) noexcept;

// void gdk_window_set_keep_below (GdkWindow* window, gboolean setting);
// void gdk_window_set_keep_below (::GdkWindow* window, gboolean setting);
GI_INLINE_DECL void set_keep_below (gboolean setting) noexcept;

// void gdk_window_set_modal_hint (GdkWindow* window, gboolean modal);
// void gdk_window_set_modal_hint (::GdkWindow* window, gboolean modal);
GI_INLINE_DECL void set_modal_hint (gboolean modal) noexcept;

// void gdk_window_set_opacity (GdkWindow* window, gdouble opacity);
// void gdk_window_set_opacity (::GdkWindow* window, gdouble opacity);
GI_INLINE_DECL void set_opacity (gdouble opacity) noexcept;

// void gdk_window_set_opaque_region (GdkWindow* window, cairo_region_t* region);
// void gdk_window_set_opaque_region (::GdkWindow* window, ::cairo_region_t* region);
GI_INLINE_DECL void set_opaque_region (cairo::Region region) noexcept;
GI_INLINE_DECL void set_opaque_region () noexcept;

// void gdk_window_set_override_redirect (GdkWindow* window, gboolean override_redirect);
// void gdk_window_set_override_redirect (::GdkWindow* window, gboolean override_redirect);
GI_INLINE_DECL void set_override_redirect (gboolean override_redirect) noexcept;

// void gdk_window_set_pass_through (GdkWindow* window, gboolean pass_through);
// void gdk_window_set_pass_through (::GdkWindow* window, gboolean pass_through);
GI_INLINE_DECL void set_pass_through (gboolean pass_through) noexcept;

// void gdk_window_set_role (GdkWindow* window, const gchar* role);
// void gdk_window_set_role (::GdkWindow* window, const char* role);
GI_INLINE_DECL void set_role (const std::string & role) noexcept;

// void gdk_window_set_shadow_width (GdkWindow* window, gint left, gint right, gint top, gint bottom);
// void gdk_window_set_shadow_width (::GdkWindow* window, gint left, gint right, gint top, gint bottom);
GI_INLINE_DECL void set_shadow_width (gint left, gint right, gint top, gint bottom) noexcept;

// void gdk_window_set_skip_pager_hint (GdkWindow* window, gboolean skips_pager);
// void gdk_window_set_skip_pager_hint (::GdkWindow* window, gboolean skips_pager);
GI_INLINE_DECL void set_skip_pager_hint (gboolean skips_pager) noexcept;

// void gdk_window_set_skip_taskbar_hint (GdkWindow* window, gboolean skips_taskbar);
// void gdk_window_set_skip_taskbar_hint (::GdkWindow* window, gboolean skips_taskbar);
GI_INLINE_DECL void set_skip_taskbar_hint (gboolean skips_taskbar) noexcept;

// void gdk_window_set_source_events (GdkWindow* window, GdkInputSource source, GdkEventMask event_mask);
// void gdk_window_set_source_events (::GdkWindow* window, ::GdkInputSource source, ::GdkEventMask event_mask);
GI_INLINE_DECL void set_source_events (Gdk::InputSource source, Gdk::EventMask event_mask) noexcept;

// void gdk_window_set_startup_id (GdkWindow* window, const gchar* startup_id);
// void gdk_window_set_startup_id (::GdkWindow* window, const char* startup_id);
GI_INLINE_DECL void set_startup_id (const std::string & startup_id) noexcept;

// gboolean gdk_window_set_static_gravities (GdkWindow* window, gboolean use_static);
// gboolean gdk_window_set_static_gravities (::GdkWindow* window, gboolean use_static);
// IGNORE; deprecated

// void gdk_window_set_support_multidevice (GdkWindow* window, gboolean support_multidevice);
// void gdk_window_set_support_multidevice (::GdkWindow* window, gboolean support_multidevice);
GI_INLINE_DECL void set_support_multidevice (gboolean support_multidevice) noexcept;

// void gdk_window_set_title (GdkWindow* window, const gchar* title);
// void gdk_window_set_title (::GdkWindow* window, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gdk_window_set_transient_for (GdkWindow* window, GdkWindow* parent);
// void gdk_window_set_transient_for (::GdkWindow* window, ::GdkWindow* parent);
GI_INLINE_DECL void set_transient_for (Gdk::Window parent) noexcept;

// void gdk_window_set_type_hint (GdkWindow* window, GdkWindowTypeHint hint);
// void gdk_window_set_type_hint (::GdkWindow* window, ::GdkWindowTypeHint hint);
GI_INLINE_DECL void set_type_hint (Gdk::WindowTypeHint hint) noexcept;

// void gdk_window_set_urgency_hint (GdkWindow* window, gboolean urgent);
// void gdk_window_set_urgency_hint (::GdkWindow* window, gboolean urgent);
GI_INLINE_DECL void set_urgency_hint (gboolean urgent) noexcept;

// void gdk_window_set_user_data (GdkWindow* window, gpointer user_data);
// void gdk_window_set_user_data (::GdkWindow* window, ::GObject* user_data);
GI_INLINE_DECL void set_user_data (GObject::Object user_data) noexcept;
GI_INLINE_DECL void set_user_data () noexcept;

// void gdk_window_shape_combine_region (GdkWindow* window, const cairo_region_t* shape_region, gint offset_x, gint offset_y);
// void gdk_window_shape_combine_region (::GdkWindow* window, const ::cairo_region_t* shape_region, gint offset_x, gint offset_y);
GI_INLINE_DECL void shape_combine_region (const cairo::Region & shape_region, gint offset_x, gint offset_y) noexcept;
GI_INLINE_DECL void shape_combine_region (gint offset_x, gint offset_y) noexcept;

// void gdk_window_show (GdkWindow* window);
// void gdk_window_show (::GdkWindow* window);
GI_INLINE_DECL void show () noexcept;

// void gdk_window_show_unraised (GdkWindow* window);
// void gdk_window_show_unraised (::GdkWindow* window);
GI_INLINE_DECL void show_unraised () noexcept;

// gboolean gdk_window_show_window_menu (GdkWindow* window, GdkEvent* event);
// gboolean gdk_window_show_window_menu (::GdkWindow* window,  event);
// SKIP; event type  not supported

// void gdk_window_stick (GdkWindow* window);
// void gdk_window_stick (::GdkWindow* window);
GI_INLINE_DECL void stick () noexcept;

// void gdk_window_thaw_toplevel_updates_libgtk_only (GdkWindow* window);
// void gdk_window_thaw_toplevel_updates_libgtk_only (::GdkWindow* window);
// IGNORE; deprecated

// void gdk_window_thaw_updates (GdkWindow* window);
// void gdk_window_thaw_updates (::GdkWindow* window);
GI_INLINE_DECL void thaw_updates () noexcept;

// void gdk_window_unfullscreen (GdkWindow* window);
// void gdk_window_unfullscreen (::GdkWindow* window);
GI_INLINE_DECL void unfullscreen () noexcept;

// void gdk_window_unmaximize (GdkWindow* window);
// void gdk_window_unmaximize (::GdkWindow* window);
GI_INLINE_DECL void unmaximize () noexcept;

// void gdk_window_unstick (GdkWindow* window);
// void gdk_window_unstick (::GdkWindow* window);
GI_INLINE_DECL void unstick () noexcept;

// void gdk_window_withdraw (GdkWindow* window);
// void gdk_window_withdraw (::GdkWindow* window);
GI_INLINE_DECL void withdraw () noexcept;

gi::property_proxy<Gdk::Cursor, base::WindowBase> property_cursor()
{ return gi::property_proxy<Gdk::Cursor, base::WindowBase> (*this, "cursor"); }
const gi::property_proxy<Gdk::Cursor, base::WindowBase> property_cursor() const
{ return gi::property_proxy<Gdk::Cursor, base::WindowBase> (*this, "cursor"); }

// signal create-surface
gi::signal_proxy<cairo::Surface(Gdk::Window, gint width, gint height)> signal_create_surface()
{ return gi::signal_proxy<cairo::Surface(Gdk::Window, gint width, gint height)> (*this, "create-surface"); }

// signal from-embedder
// SKIP; glib:signal out parameter not supported, glib:signal out parameter not supported

// signal moved-to-rect
gi::signal_proxy<void(Gdk::Window, void* flipped_rect, void* final_rect, gboolean flipped_x, gboolean flipped_y)> signal_moved_to_rect()
{ return gi::signal_proxy<void(Gdk::Window, void* flipped_rect, void* final_rect, gboolean flipped_x, gboolean flipped_y)> (*this, "moved-to-rect"); }

// signal pick-embedded-child
gi::signal_proxy<Gdk::Window(Gdk::Window, gdouble x, gdouble y)> signal_pick_embedded_child()
{ return gi::signal_proxy<Gdk::Window(Gdk::Window, gdouble x, gdouble y)> (*this, "pick-embedded-child"); }

// signal to-embedder
// SKIP; glib:signal out parameter not supported, glib:signal out parameter not supported

}; // class

} // namespace base

} // namespace Gdk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gdk/window_extra_def.hpp>)
#include <gdk/window_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gdk/window_extra.hpp>)
#include <gdk/window_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gdk {

class Window : public GI_GDK_WINDOW_BASE
{ typedef GI_GDK_WINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gdk

template<> struct declare_cpptype_of<::GdkWindow>
{ typedef Gdk::Window type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gdk {

namespace impl {

namespace internal {


class WindowClassDef
{
typedef WindowClassDef self;
public:
typedef Gdk::Window instance_type;
typedef ::GdkWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// cairo_surface_t* Window::create_surface (GdkWindow* window, gint width, gint height);
// ::cairo_surface_t* Window::create_surface (::GdkWindow* window, gint width, gint height);
virtual cairo::Surface create_surface_ (gint width, gint height) noexcept = 0;

// void Window::from_embedder (GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble* offscreen_x, gdouble* offscreen_y);
// void Window::from_embedder (::GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble offscreen_x, gdouble offscreen_y);
// SKIP; inconsistent in offscreen_y pointer depth (1 vs 0), inconsistent in offscreen_x pointer depth (1 vs 0)

// void Window::to_embedder (GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble* embedder_x, gdouble* embedder_y);
// void Window::to_embedder (::GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble embedder_x, gdouble embedder_y);
// SKIP; inconsistent in embedder_y pointer depth (1 vs 0), inconsistent in embedder_x pointer depth (1 vs 0)


};

GI_CLASS_IMPL_BEGIN


class WindowClass: public detail::ClassTemplate<Gdk::impl::internal::WindowClassDef, GObject::impl::internal::ObjectClass>
{
typedef WindowClass self;
typedef detail::ClassTemplate<Gdk::impl::internal::WindowClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// cairo_surface_t* Window::create_surface (GdkWindow* window, gint width, gint height);
// ::cairo_surface_t* Window::create_surface (::GdkWindow* window, gint width, gint height);
GI_INLINE_DECL cairo::Surface create_surface_ (gint width, gint height) noexcept override;

// void Window::from_embedder (GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble* offscreen_x, gdouble* offscreen_y);
// void Window::from_embedder (::GdkWindow* window, gdouble embedder_x, gdouble embedder_y, gdouble offscreen_x, gdouble offscreen_y);
// SKIP; inconsistent in offscreen_y pointer depth (1 vs 0), inconsistent in offscreen_x pointer depth (1 vs 0)

// void Window::to_embedder (GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble* embedder_x, gdouble* embedder_y);
// void Window::to_embedder (::GdkWindow* window, gdouble offscreen_x, gdouble offscreen_y, gdouble embedder_x, gdouble embedder_y);
// SKIP; inconsistent in embedder_y pointer depth (1 vs 0), inconsistent in embedder_x pointer depth (1 vs 0)


};

} // namespace internal

GI_CLASS_IMPL_END

using WindowImpl = detail::ObjectImpl<Window, internal::WindowClass>;

} // namespace impl

} // namespace Gdk

} // namespace repository

} // namespace gi

#endif
