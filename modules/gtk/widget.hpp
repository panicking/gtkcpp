// AUTO-GENERATED

#ifndef _GI_GTK_WIDGET_HPP_
#define _GI_GTK_WIDGET_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Buildable;
class Clipboard;
class Container;
class RcStyle;
class Requisition;
class SelectionData;
class Settings;
class Style;
class StyleContext;
class TargetEntry;
class TargetList;
class Tooltip;
class WidgetPath;
class Window;

class Widget;

namespace base {


#define GI_GTK_WIDGET_BASE base::WidgetBase
class WidgetBase : public GObject::InitiallyUnowned
{
typedef GObject::InitiallyUnowned super_type;
public:
typedef ::GtkWidget BaseObjectType;

WidgetBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_widget_get_type(); } 

GI_INLINE_DECL Atk::ImplementorIface interface_ (gi::interface_tag<Atk::ImplementorIface>);

GI_INLINE_DECL operator Atk::ImplementorIface ();

GI_INLINE_DECL Gtk::Buildable interface_ (gi::interface_tag<Gtk::Buildable>);

GI_INLINE_DECL operator Gtk::Buildable ();

// GtkWidget* gtk_widget_new (GType type, const gchar* first_property_name);
// ::GtkWidget* gtk_widget_new (GType type, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GtkTextDirection gtk_widget_get_default_direction ();
// ::GtkTextDirection gtk_widget_get_default_direction ();
static GI_INLINE_DECL Gtk::TextDirection get_default_direction () noexcept;

// GtkStyle* gtk_widget_get_default_style ();
// ::GtkStyle* gtk_widget_get_default_style ();
// IGNORE; deprecated

// void gtk_widget_pop_composite_child ();
// void gtk_widget_pop_composite_child ();
// IGNORE; deprecated

// void gtk_widget_push_composite_child ();
// void gtk_widget_push_composite_child ();
// IGNORE; deprecated

// void gtk_widget_set_default_direction (GtkTextDirection dir);
// void gtk_widget_set_default_direction (::GtkTextDirection dir);
static GI_INLINE_DECL void set_default_direction (Gtk::TextDirection dir) noexcept;

// gboolean gtk_widget_activate (GtkWidget* widget);
// gboolean gtk_widget_activate (::GtkWidget* widget);
GI_INLINE_DECL bool activate () noexcept;

// void gtk_widget_add_accelerator (GtkWidget* widget, const gchar* accel_signal, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, GtkAccelFlags accel_flags);
// void gtk_widget_add_accelerator (::GtkWidget* widget, const char* accel_signal, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags);
GI_INLINE_DECL void add_accelerator (const std::string & accel_signal, Gtk::AccelGroup accel_group, guint accel_key, Gdk::ModifierType accel_mods, Gtk::AccelFlags accel_flags) noexcept;

// void gtk_widget_add_device_events (GtkWidget* widget, GdkDevice* device, GdkEventMask events);
// void gtk_widget_add_device_events (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
GI_INLINE_DECL void add_device_events (Gdk::Device device, Gdk::EventMask events) noexcept;

// void gtk_widget_add_events (GtkWidget* widget, gint events);
// void gtk_widget_add_events (::GtkWidget* widget, gint events);
GI_INLINE_DECL void add_events (gint events) noexcept;

// void gtk_widget_add_mnemonic_label (GtkWidget* widget, GtkWidget* label);
// void gtk_widget_add_mnemonic_label (::GtkWidget* widget, ::GtkWidget* label);
GI_INLINE_DECL void add_mnemonic_label (Gtk::Widget label) noexcept;

// guint gtk_widget_add_tick_callback (GtkWidget* widget, GtkTickCallback callback, gpointer user_data, GDestroyNotify notify);
// guint gtk_widget_add_tick_callback (::GtkWidget* widget, Gtk::TickCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type notify);
GI_INLINE_DECL guint add_tick_callback (Gtk::TickCallback callback) noexcept;

// gboolean gtk_widget_can_activate_accel (GtkWidget* widget, guint signal_id);
// gboolean gtk_widget_can_activate_accel (::GtkWidget* widget, guint signal_id);
GI_INLINE_DECL bool can_activate_accel (guint signal_id) noexcept;

// gboolean gtk_widget_child_focus (GtkWidget* widget, GtkDirectionType direction);
// gboolean gtk_widget_child_focus (::GtkWidget* widget, ::GtkDirectionType direction);
GI_INLINE_DECL bool child_focus (Gtk::DirectionType direction) noexcept;

// void gtk_widget_child_notify (GtkWidget* widget, const gchar* child_property);
// void gtk_widget_child_notify (::GtkWidget* widget, const char* child_property);
GI_INLINE_DECL void child_notify (const std::string & child_property) noexcept;

// void gtk_widget_class_path (GtkWidget* widget, guint* path_length, gchar** path, gchar** path_reversed);
// void gtk_widget_class_path (::GtkWidget* widget, guint* path_length, char** path, char** path_reversed);
// IGNORE; deprecated

// gboolean gtk_widget_compute_expand (GtkWidget* widget, GtkOrientation orientation);
// gboolean gtk_widget_compute_expand (::GtkWidget* widget, ::GtkOrientation orientation);
GI_INLINE_DECL bool compute_expand (Gtk::Orientation orientation) noexcept;

// PangoContext* gtk_widget_create_pango_context (GtkWidget* widget);
// ::PangoContext* gtk_widget_create_pango_context (::GtkWidget* widget);
GI_INLINE_DECL Pango::Context create_pango_context () noexcept;

// PangoLayout* gtk_widget_create_pango_layout (GtkWidget* widget, const gchar* text);
// ::PangoLayout* gtk_widget_create_pango_layout (::GtkWidget* widget, const char* text);
GI_INLINE_DECL Pango::Layout create_pango_layout (const std::string & text) noexcept;
GI_INLINE_DECL Pango::Layout create_pango_layout () noexcept;

// void gtk_widget_destroy (GtkWidget* widget);
// void gtk_widget_destroy (::GtkWidget* widget);
GI_INLINE_DECL void destroy () noexcept;

// void gtk_widget_destroyed (GtkWidget* widget, GtkWidget** widget_pointer);
// void gtk_widget_destroyed (::GtkWidget* widget, ::GtkWidget** widget_pointer);
GI_INLINE_DECL void destroyed (Gtk::Widget & widget_pointer) noexcept;

// gboolean gtk_widget_device_is_shadowed (GtkWidget* widget, GdkDevice* device);
// gboolean gtk_widget_device_is_shadowed (::GtkWidget* widget, ::GdkDevice* device);
GI_INLINE_DECL bool device_is_shadowed (Gdk::Device device) noexcept;

// GdkDragContext* gtk_drag_begin (GtkWidget* widget, GtkTargetList* targets, GdkDragAction actions, gint button, GdkEvent* event);
// ::GdkDragContext* gtk_drag_begin (::GtkWidget* widget, ::GtkTargetList* targets, ::GdkDragAction actions, gint button,  event);
// IGNORE; deprecated

// GdkDragContext* gtk_drag_begin_with_coordinates (GtkWidget* widget, GtkTargetList* targets, GdkDragAction actions, gint button, GdkEvent* event, gint x, gint y);
// ::GdkDragContext* gtk_drag_begin_with_coordinates (::GtkWidget* widget, ::GtkTargetList* targets, ::GdkDragAction actions, gint button,  event, gint x, gint y);
// SKIP; event type  not supported

// gboolean gtk_drag_check_threshold (GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
// gboolean gtk_drag_check_threshold (::GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
GI_INLINE_DECL bool drag_check_threshold (gint start_x, gint start_y, gint current_x, gint current_y) noexcept;

// void gtk_drag_dest_add_image_targets (GtkWidget* widget);
// void gtk_drag_dest_add_image_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_dest_add_image_targets () noexcept;

// void gtk_drag_dest_add_text_targets (GtkWidget* widget);
// void gtk_drag_dest_add_text_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_dest_add_text_targets () noexcept;

// void gtk_drag_dest_add_uri_targets (GtkWidget* widget);
// void gtk_drag_dest_add_uri_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_dest_add_uri_targets () noexcept;

// GdkAtom gtk_drag_dest_find_target (GtkWidget* widget, GdkDragContext* context, GtkTargetList* target_list);
//  gtk_drag_dest_find_target (::GtkWidget* widget, ::GdkDragContext* context, ::GtkTargetList* target_list);
// SKIP;  type  not supported

// GtkTargetList* gtk_drag_dest_get_target_list (GtkWidget* widget);
// ::GtkTargetList* gtk_drag_dest_get_target_list (::GtkWidget* widget);
GI_INLINE_DECL Gtk::TargetList drag_dest_get_target_list () noexcept;

// gboolean gtk_drag_dest_get_track_motion (GtkWidget* widget);
// gboolean gtk_drag_dest_get_track_motion (::GtkWidget* widget);
GI_INLINE_DECL bool drag_dest_get_track_motion () noexcept;

// void gtk_drag_dest_set (GtkWidget* widget, GtkDestDefaults flags, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_drag_dest_set (::GtkWidget* widget, ::GtkDestDefaults flags, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_drag_dest_set_proxy (GtkWidget* widget, GdkWindow* proxy_window, GdkDragProtocol protocol, gboolean use_coordinates);
// void gtk_drag_dest_set_proxy (::GtkWidget* widget, ::GdkWindow* proxy_window, ::GdkDragProtocol protocol, gboolean use_coordinates);
// IGNORE; deprecated

// void gtk_drag_dest_set_target_list (GtkWidget* widget, GtkTargetList* target_list);
// void gtk_drag_dest_set_target_list (::GtkWidget* widget, ::GtkTargetList* target_list);
GI_INLINE_DECL void drag_dest_set_target_list (Gtk::TargetList target_list) noexcept;
GI_INLINE_DECL void drag_dest_set_target_list () noexcept;

// void gtk_drag_dest_set_track_motion (GtkWidget* widget, gboolean track_motion);
// void gtk_drag_dest_set_track_motion (::GtkWidget* widget, gboolean track_motion);
GI_INLINE_DECL void drag_dest_set_track_motion (gboolean track_motion) noexcept;

// void gtk_drag_dest_unset (GtkWidget* widget);
// void gtk_drag_dest_unset (::GtkWidget* widget);
GI_INLINE_DECL void drag_dest_unset () noexcept;

// void gtk_drag_get_data (GtkWidget* widget, GdkDragContext* context, GdkAtom target, guint32 time_);
// void gtk_drag_get_data (::GtkWidget* widget, ::GdkDragContext* context,  target, guint32 time_);
// SKIP; target type  not supported

// void gtk_drag_highlight (GtkWidget* widget);
// void gtk_drag_highlight (::GtkWidget* widget);
GI_INLINE_DECL void drag_highlight () noexcept;

// void gtk_drag_source_add_image_targets (GtkWidget* widget);
// void gtk_drag_source_add_image_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_source_add_image_targets () noexcept;

// void gtk_drag_source_add_text_targets (GtkWidget* widget);
// void gtk_drag_source_add_text_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_source_add_text_targets () noexcept;

// void gtk_drag_source_add_uri_targets (GtkWidget* widget);
// void gtk_drag_source_add_uri_targets (::GtkWidget* widget);
GI_INLINE_DECL void drag_source_add_uri_targets () noexcept;

// GtkTargetList* gtk_drag_source_get_target_list (GtkWidget* widget);
// ::GtkTargetList* gtk_drag_source_get_target_list (::GtkWidget* widget);
GI_INLINE_DECL Gtk::TargetList drag_source_get_target_list () noexcept;

// void gtk_drag_source_set (GtkWidget* widget, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_drag_source_set (::GtkWidget* widget, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_drag_source_set_icon_gicon (GtkWidget* widget, GIcon* icon);
// void gtk_drag_source_set_icon_gicon (::GtkWidget* widget, ::GIcon* icon);
GI_INLINE_DECL void drag_source_set_icon_gicon (Gio::Icon icon) noexcept;

// void gtk_drag_source_set_icon_name (GtkWidget* widget, const gchar* icon_name);
// void gtk_drag_source_set_icon_name (::GtkWidget* widget, const char* icon_name);
GI_INLINE_DECL void drag_source_set_icon_name (const std::string & icon_name) noexcept;

// void gtk_drag_source_set_icon_pixbuf (GtkWidget* widget, GdkPixbuf* pixbuf);
// void gtk_drag_source_set_icon_pixbuf (::GtkWidget* widget, ::GdkPixbuf* pixbuf);
GI_INLINE_DECL void drag_source_set_icon_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept;

// void gtk_drag_source_set_icon_stock (GtkWidget* widget, const gchar* stock_id);
// void gtk_drag_source_set_icon_stock (::GtkWidget* widget, const char* stock_id);
// IGNORE; deprecated

// void gtk_drag_source_set_target_list (GtkWidget* widget, GtkTargetList* target_list);
// void gtk_drag_source_set_target_list (::GtkWidget* widget, ::GtkTargetList* target_list);
GI_INLINE_DECL void drag_source_set_target_list (Gtk::TargetList target_list) noexcept;
GI_INLINE_DECL void drag_source_set_target_list () noexcept;

// void gtk_drag_source_unset (GtkWidget* widget);
// void gtk_drag_source_unset (::GtkWidget* widget);
GI_INLINE_DECL void drag_source_unset () noexcept;

// void gtk_drag_unhighlight (GtkWidget* widget);
// void gtk_drag_unhighlight (::GtkWidget* widget);
GI_INLINE_DECL void drag_unhighlight () noexcept;

// void gtk_widget_draw (GtkWidget* widget, cairo_t* cr);
// void gtk_widget_draw (::GtkWidget* widget, ::cairo_t* cr);
GI_INLINE_DECL void draw (cairo::Context cr) noexcept;

// void gtk_widget_ensure_style (GtkWidget* widget);
// void gtk_widget_ensure_style (::GtkWidget* widget);
// IGNORE; deprecated

// void gtk_widget_error_bell (GtkWidget* widget);
// void gtk_widget_error_bell (::GtkWidget* widget);
GI_INLINE_DECL void error_bell () noexcept;

// gboolean gtk_widget_event (GtkWidget* widget, GdkEvent* event);
// gboolean gtk_widget_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_widget_freeze_child_notify (GtkWidget* widget);
// void gtk_widget_freeze_child_notify (::GtkWidget* widget);
GI_INLINE_DECL void freeze_child_notify () noexcept;

// AtkObject* gtk_widget_get_accessible (GtkWidget* widget);
// ::AtkObject* gtk_widget_get_accessible (::GtkWidget* widget);
GI_INLINE_DECL Atk::Object get_accessible () noexcept;

// GActionGroup* gtk_widget_get_action_group (GtkWidget* widget, const gchar* prefix);
// ::GActionGroup* gtk_widget_get_action_group (::GtkWidget* widget, const char* prefix);
GI_INLINE_DECL Gio::ActionGroup get_action_group (const std::string & prefix) noexcept;

// int gtk_widget_get_allocated_baseline (GtkWidget* widget);
// gint gtk_widget_get_allocated_baseline (::GtkWidget* widget);
GI_INLINE_DECL gint get_allocated_baseline () noexcept;

// int gtk_widget_get_allocated_height (GtkWidget* widget);
// gint gtk_widget_get_allocated_height (::GtkWidget* widget);
GI_INLINE_DECL gint get_allocated_height () noexcept;

// void gtk_widget_get_allocated_size (GtkWidget* widget, GtkAllocation* allocation, int* baseline);
// void gtk_widget_get_allocated_size (::GtkWidget* widget, ::GtkAllocation* allocation, gint* baseline);
GI_INLINE_DECL void get_allocated_size (Gtk::Allocation & allocation, gint * baseline = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::Allocation, gint> get_allocated_size () noexcept;

// int gtk_widget_get_allocated_width (GtkWidget* widget);
// gint gtk_widget_get_allocated_width (::GtkWidget* widget);
GI_INLINE_DECL gint get_allocated_width () noexcept;

// void gtk_widget_get_allocation (GtkWidget* widget, GtkAllocation* allocation);
// void gtk_widget_get_allocation (::GtkWidget* widget, ::GtkAllocation* allocation);
GI_INLINE_DECL void get_allocation (Gtk::Allocation & allocation) noexcept;
GI_INLINE_DECL Gtk::Allocation get_allocation () noexcept;

// GtkWidget* gtk_widget_get_ancestor (GtkWidget* widget, GType widget_type);
// ::GtkWidget* gtk_widget_get_ancestor (::GtkWidget* widget, GType widget_type);
GI_INLINE_DECL Gtk::Widget get_ancestor (GType widget_type) noexcept;

// gboolean gtk_widget_get_app_paintable (GtkWidget* widget);
// gboolean gtk_widget_get_app_paintable (::GtkWidget* widget);
GI_INLINE_DECL bool get_app_paintable () noexcept;

// gboolean gtk_widget_get_can_default (GtkWidget* widget);
// gboolean gtk_widget_get_can_default (::GtkWidget* widget);
GI_INLINE_DECL bool get_can_default () noexcept;

// gboolean gtk_widget_get_can_focus (GtkWidget* widget);
// gboolean gtk_widget_get_can_focus (::GtkWidget* widget);
GI_INLINE_DECL bool get_can_focus () noexcept;

// void gtk_widget_get_child_requisition (GtkWidget* widget, GtkRequisition* requisition);
// void gtk_widget_get_child_requisition (::GtkWidget* widget, ::GtkRequisition* requisition);
// IGNORE; deprecated

// gboolean gtk_widget_get_child_visible (GtkWidget* widget);
// gboolean gtk_widget_get_child_visible (::GtkWidget* widget);
GI_INLINE_DECL bool get_child_visible () noexcept;

// void gtk_widget_get_clip (GtkWidget* widget, GtkAllocation* clip);
// void gtk_widget_get_clip (::GtkWidget* widget, ::GtkAllocation* clip);
GI_INLINE_DECL void get_clip (Gtk::Allocation & clip) noexcept;
GI_INLINE_DECL Gtk::Allocation get_clip () noexcept;

// GtkClipboard* gtk_widget_get_clipboard (GtkWidget* widget, GdkAtom selection);
// ::GtkClipboard* gtk_widget_get_clipboard (::GtkWidget* widget,  selection);
// SKIP; selection type  not supported

// gchar* gtk_widget_get_composite_name (GtkWidget* widget);
// char* gtk_widget_get_composite_name (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_get_device_enabled (GtkWidget* widget, GdkDevice* device);
// gboolean gtk_widget_get_device_enabled (::GtkWidget* widget, ::GdkDevice* device);
GI_INLINE_DECL bool get_device_enabled (Gdk::Device device) noexcept;

// GdkEventMask gtk_widget_get_device_events (GtkWidget* widget, GdkDevice* device);
// ::GdkEventMask gtk_widget_get_device_events (::GtkWidget* widget, ::GdkDevice* device);
GI_INLINE_DECL Gdk::EventMask get_device_events (Gdk::Device device) noexcept;

// GtkTextDirection gtk_widget_get_direction (GtkWidget* widget);
// ::GtkTextDirection gtk_widget_get_direction (::GtkWidget* widget);
GI_INLINE_DECL Gtk::TextDirection get_direction () noexcept;

// GdkDisplay* gtk_widget_get_display (GtkWidget* widget);
// ::GdkDisplay* gtk_widget_get_display (::GtkWidget* widget);
GI_INLINE_DECL Gdk::Display get_display () noexcept;

// gboolean gtk_widget_get_double_buffered (GtkWidget* widget);
// gboolean gtk_widget_get_double_buffered (::GtkWidget* widget);
GI_INLINE_DECL bool get_double_buffered () noexcept;

// gint gtk_widget_get_events (GtkWidget* widget);
// gint gtk_widget_get_events (::GtkWidget* widget);
GI_INLINE_DECL gint get_events () noexcept;

// gboolean gtk_widget_get_focus_on_click (GtkWidget* widget);
// gboolean gtk_widget_get_focus_on_click (::GtkWidget* widget);
GI_INLINE_DECL bool get_focus_on_click () noexcept;

// PangoFontMap* gtk_widget_get_font_map (GtkWidget* widget);
// ::PangoFontMap* gtk_widget_get_font_map (::GtkWidget* widget);
GI_INLINE_DECL Pango::FontMap get_font_map () noexcept;

// const cairo_font_options_t* gtk_widget_get_font_options (GtkWidget* widget);
// const ::cairo_font_options_t* gtk_widget_get_font_options (::GtkWidget* widget);
GI_INLINE_DECL cairo::FontOptions get_font_options () noexcept;

// GdkFrameClock* gtk_widget_get_frame_clock (GtkWidget* widget);
// ::GdkFrameClock* gtk_widget_get_frame_clock (::GtkWidget* widget);
GI_INLINE_DECL Gdk::FrameClock get_frame_clock () noexcept;

// GtkAlign gtk_widget_get_halign (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_halign (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Align get_halign () noexcept;

// gboolean gtk_widget_get_has_tooltip (GtkWidget* widget);
// gboolean gtk_widget_get_has_tooltip (::GtkWidget* widget);
GI_INLINE_DECL bool get_has_tooltip () noexcept;

// gboolean gtk_widget_get_has_window (GtkWidget* widget);
// gboolean gtk_widget_get_has_window (::GtkWidget* widget);
GI_INLINE_DECL bool get_has_window () noexcept;

// gboolean gtk_widget_get_hexpand (GtkWidget* widget);
// gboolean gtk_widget_get_hexpand (::GtkWidget* widget);
GI_INLINE_DECL bool get_hexpand () noexcept;

// gboolean gtk_widget_get_hexpand_set (GtkWidget* widget);
// gboolean gtk_widget_get_hexpand_set (::GtkWidget* widget);
GI_INLINE_DECL bool get_hexpand_set () noexcept;

// gboolean gtk_widget_get_mapped (GtkWidget* widget);
// gboolean gtk_widget_get_mapped (::GtkWidget* widget);
GI_INLINE_DECL bool get_mapped () noexcept;

// gint gtk_widget_get_margin_bottom (GtkWidget* widget);
// gint gtk_widget_get_margin_bottom (::GtkWidget* widget);
GI_INLINE_DECL gint get_margin_bottom () noexcept;

// gint gtk_widget_get_margin_end (GtkWidget* widget);
// gint gtk_widget_get_margin_end (::GtkWidget* widget);
GI_INLINE_DECL gint get_margin_end () noexcept;

// gint gtk_widget_get_margin_left (GtkWidget* widget);
// gint gtk_widget_get_margin_left (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_margin_right (GtkWidget* widget);
// gint gtk_widget_get_margin_right (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_margin_start (GtkWidget* widget);
// gint gtk_widget_get_margin_start (::GtkWidget* widget);
GI_INLINE_DECL gint get_margin_start () noexcept;

// gint gtk_widget_get_margin_top (GtkWidget* widget);
// gint gtk_widget_get_margin_top (::GtkWidget* widget);
GI_INLINE_DECL gint get_margin_top () noexcept;

// GdkModifierType gtk_widget_get_modifier_mask (GtkWidget* widget, GdkModifierIntent intent);
// ::GdkModifierType gtk_widget_get_modifier_mask (::GtkWidget* widget, ::GdkModifierIntent intent);
GI_INLINE_DECL Gdk::ModifierType get_modifier_mask (Gdk::ModifierIntent intent) noexcept;

// GtkRcStyle* gtk_widget_get_modifier_style (GtkWidget* widget);
// ::GtkRcStyle* gtk_widget_get_modifier_style (::GtkWidget* widget);
// IGNORE; deprecated

// const gchar* gtk_widget_get_name (GtkWidget* widget);
// const char* gtk_widget_get_name (::GtkWidget* widget);
GI_INLINE_DECL std::string get_name () noexcept;

// gboolean gtk_widget_get_no_show_all (GtkWidget* widget);
// gboolean gtk_widget_get_no_show_all (::GtkWidget* widget);
GI_INLINE_DECL bool get_no_show_all () noexcept;

// double gtk_widget_get_opacity (GtkWidget* widget);
// gdouble gtk_widget_get_opacity (::GtkWidget* widget);
GI_INLINE_DECL gdouble get_opacity () noexcept;

// PangoContext* gtk_widget_get_pango_context (GtkWidget* widget);
// ::PangoContext* gtk_widget_get_pango_context (::GtkWidget* widget);
GI_INLINE_DECL Pango::Context get_pango_context () noexcept;

// GtkWidget* gtk_widget_get_parent (GtkWidget* widget);
// ::GtkWidget* gtk_widget_get_parent (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Widget get_parent () noexcept;

// GdkWindow* gtk_widget_get_parent_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_parent_window (::GtkWidget* widget);
GI_INLINE_DECL Gdk::Window get_parent_window () noexcept;

// GtkWidgetPath* gtk_widget_get_path (GtkWidget* widget);
// ::GtkWidgetPath* gtk_widget_get_path (::GtkWidget* widget);
GI_INLINE_DECL Gtk::WidgetPath get_path () noexcept;

// void gtk_widget_get_pointer (GtkWidget* widget, gint* x, gint* y);
// void gtk_widget_get_pointer (::GtkWidget* widget, gint* x, gint* y);
// IGNORE; deprecated

// void gtk_widget_get_preferred_height (GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void gtk_widget_get_preferred_height (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height (gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height () noexcept;

// void gtk_widget_get_preferred_height_and_baseline_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// void gtk_widget_get_preferred_height_and_baseline_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
GI_INLINE_DECL void get_preferred_height_and_baseline_for_width (gint width, gint * minimum_height = nullptr, gint * natural_height = nullptr, gint * minimum_baseline = nullptr, gint * natural_baseline = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint, gint, gint> get_preferred_height_and_baseline_for_width (gint width) noexcept;

// void gtk_widget_get_preferred_height_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_widget_get_preferred_height_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
GI_INLINE_DECL void get_preferred_height_for_width (gint width, gint * minimum_height = nullptr, gint * natural_height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_height_for_width (gint width) noexcept;

// void gtk_widget_get_preferred_size (GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size);
// void gtk_widget_get_preferred_size (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
GI_INLINE_DECL void get_preferred_size (Gtk::Requisition * minimum_size = nullptr, Gtk::Requisition * natural_size = nullptr) noexcept;
GI_INLINE_DECL std::tuple<Gtk::Requisition, Gtk::Requisition> get_preferred_size () noexcept;

// void gtk_widget_get_preferred_width (GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void gtk_widget_get_preferred_width (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width (gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width () noexcept;

// void gtk_widget_get_preferred_width_for_height (GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_widget_get_preferred_width_for_height (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
GI_INLINE_DECL void get_preferred_width_for_height (gint height, gint * minimum_width = nullptr, gint * natural_width = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_preferred_width_for_height (gint height) noexcept;

// gboolean gtk_widget_get_realized (GtkWidget* widget);
// gboolean gtk_widget_get_realized (::GtkWidget* widget);
GI_INLINE_DECL bool get_realized () noexcept;

// gboolean gtk_widget_get_receives_default (GtkWidget* widget);
// gboolean gtk_widget_get_receives_default (::GtkWidget* widget);
GI_INLINE_DECL bool get_receives_default () noexcept;

// GtkSizeRequestMode gtk_widget_get_request_mode (GtkWidget* widget);
// ::GtkSizeRequestMode gtk_widget_get_request_mode (::GtkWidget* widget);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode () noexcept;

// void gtk_widget_get_requisition (GtkWidget* widget, GtkRequisition* requisition);
// void gtk_widget_get_requisition (::GtkWidget* widget, ::GtkRequisition* requisition);
// IGNORE; deprecated

// GdkWindow* gtk_widget_get_root_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_root_window (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_scale_factor (GtkWidget* widget);
// gint gtk_widget_get_scale_factor (::GtkWidget* widget);
GI_INLINE_DECL gint get_scale_factor () noexcept;

// GdkScreen* gtk_widget_get_screen (GtkWidget* widget);
// ::GdkScreen* gtk_widget_get_screen (::GtkWidget* widget);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// gboolean gtk_widget_get_sensitive (GtkWidget* widget);
// gboolean gtk_widget_get_sensitive (::GtkWidget* widget);
GI_INLINE_DECL bool get_sensitive () noexcept;

// GtkSettings* gtk_widget_get_settings (GtkWidget* widget);
// ::GtkSettings* gtk_widget_get_settings (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Settings get_settings () noexcept;

// void gtk_widget_get_size_request (GtkWidget* widget, gint* width, gint* height);
// void gtk_widget_get_size_request (::GtkWidget* widget, gint* width, gint* height);
GI_INLINE_DECL void get_size_request (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_size_request () noexcept;

// GtkStateType gtk_widget_get_state (GtkWidget* widget);
//  gtk_widget_get_state (::GtkWidget* widget);
// IGNORE; deprecated

// GtkStateFlags gtk_widget_get_state_flags (GtkWidget* widget);
// ::GtkStateFlags gtk_widget_get_state_flags (::GtkWidget* widget);
GI_INLINE_DECL Gtk::StateFlags get_state_flags () noexcept;

// GtkStyle* gtk_widget_get_style (GtkWidget* widget);
// ::GtkStyle* gtk_widget_get_style (::GtkWidget* widget);
// IGNORE; deprecated

// GtkStyleContext* gtk_widget_get_style_context (GtkWidget* widget);
// ::GtkStyleContext* gtk_widget_get_style_context (::GtkWidget* widget);
GI_INLINE_DECL Gtk::StyleContext get_style_context () noexcept;

// gboolean gtk_widget_get_support_multidevice (GtkWidget* widget);
// gboolean gtk_widget_get_support_multidevice (::GtkWidget* widget);
GI_INLINE_DECL bool get_support_multidevice () noexcept;

// GObject* gtk_widget_get_template_child (GtkWidget* widget, GType widget_type, const gchar* name);
// ::GObject* gtk_widget_get_template_child (::GtkWidget* widget, GType widget_type, const char* name);
GI_INLINE_DECL GObject::Object get_template_child (GType widget_type, const std::string & name) noexcept;

// gchar* gtk_widget_get_tooltip_markup (GtkWidget* widget);
// char* gtk_widget_get_tooltip_markup (::GtkWidget* widget);
GI_INLINE_DECL std::string get_tooltip_markup () noexcept;

// gchar* gtk_widget_get_tooltip_text (GtkWidget* widget);
// char* gtk_widget_get_tooltip_text (::GtkWidget* widget);
GI_INLINE_DECL std::string get_tooltip_text () noexcept;

// GtkWindow* gtk_widget_get_tooltip_window (GtkWidget* widget);
// ::GtkWindow* gtk_widget_get_tooltip_window (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Window get_tooltip_window () noexcept;

// GtkWidget* gtk_widget_get_toplevel (GtkWidget* widget);
// ::GtkWidget* gtk_widget_get_toplevel (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Widget get_toplevel () noexcept;

// GtkAlign gtk_widget_get_valign (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_valign (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Align get_valign () noexcept;

// GtkAlign gtk_widget_get_valign_with_baseline (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_valign_with_baseline (::GtkWidget* widget);
GI_INLINE_DECL Gtk::Align get_valign_with_baseline () noexcept;

// gboolean gtk_widget_get_vexpand (GtkWidget* widget);
// gboolean gtk_widget_get_vexpand (::GtkWidget* widget);
GI_INLINE_DECL bool get_vexpand () noexcept;

// gboolean gtk_widget_get_vexpand_set (GtkWidget* widget);
// gboolean gtk_widget_get_vexpand_set (::GtkWidget* widget);
GI_INLINE_DECL bool get_vexpand_set () noexcept;

// gboolean gtk_widget_get_visible (GtkWidget* widget);
// gboolean gtk_widget_get_visible (::GtkWidget* widget);
GI_INLINE_DECL bool get_visible () noexcept;

// GdkVisual* gtk_widget_get_visual (GtkWidget* widget);
// ::GdkVisual* gtk_widget_get_visual (::GtkWidget* widget);
GI_INLINE_DECL Gdk::Visual get_visual () noexcept;

// GdkWindow* gtk_widget_get_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_window (::GtkWidget* widget);
GI_INLINE_DECL Gdk::Window get_window () noexcept;

// void gtk_grab_add (GtkWidget* widget);
// void gtk_grab_add (::GtkWidget* widget);
GI_INLINE_DECL void grab_add () noexcept;

// void gtk_widget_grab_default (GtkWidget* widget);
// void gtk_widget_grab_default (::GtkWidget* widget);
GI_INLINE_DECL void grab_default () noexcept;

// void gtk_widget_grab_focus (GtkWidget* widget);
// void gtk_widget_grab_focus (::GtkWidget* widget);
GI_INLINE_DECL void grab_focus () noexcept;

// void gtk_grab_remove (GtkWidget* widget);
// void gtk_grab_remove (::GtkWidget* widget);
GI_INLINE_DECL void grab_remove () noexcept;

// gboolean gtk_widget_has_default (GtkWidget* widget);
// gboolean gtk_widget_has_default (::GtkWidget* widget);
GI_INLINE_DECL bool has_default () noexcept;

// gboolean gtk_widget_has_focus (GtkWidget* widget);
// gboolean gtk_widget_has_focus (::GtkWidget* widget);
GI_INLINE_DECL bool has_focus () noexcept;

// gboolean gtk_widget_has_grab (GtkWidget* widget);
// gboolean gtk_widget_has_grab (::GtkWidget* widget);
GI_INLINE_DECL bool has_grab () noexcept;

// gboolean gtk_widget_has_rc_style (GtkWidget* widget);
// gboolean gtk_widget_has_rc_style (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_has_screen (GtkWidget* widget);
// gboolean gtk_widget_has_screen (::GtkWidget* widget);
GI_INLINE_DECL bool has_screen () noexcept;

// gboolean gtk_widget_has_visible_focus (GtkWidget* widget);
// gboolean gtk_widget_has_visible_focus (::GtkWidget* widget);
GI_INLINE_DECL bool has_visible_focus () noexcept;

// void gtk_widget_hide (GtkWidget* widget);
// void gtk_widget_hide (::GtkWidget* widget);
GI_INLINE_DECL void hide () noexcept;

// gboolean gtk_widget_hide_on_delete (GtkWidget* widget);
// gboolean gtk_widget_hide_on_delete (::GtkWidget* widget);
GI_INLINE_DECL bool hide_on_delete () noexcept;

// gboolean gtk_widget_in_destruction (GtkWidget* widget);
// gboolean gtk_widget_in_destruction (::GtkWidget* widget);
GI_INLINE_DECL bool in_destruction () noexcept;

// void gtk_widget_init_template (GtkWidget* widget);
// void gtk_widget_init_template (::GtkWidget* widget);
GI_INLINE_DECL void init_template () noexcept;

// void gtk_widget_input_shape_combine_region (GtkWidget* widget, cairo_region_t* region);
// void gtk_widget_input_shape_combine_region (::GtkWidget* widget, ::cairo_region_t* region);
GI_INLINE_DECL void input_shape_combine_region (cairo::Region region) noexcept;
GI_INLINE_DECL void input_shape_combine_region () noexcept;

// void gtk_widget_insert_action_group (GtkWidget* widget, const gchar* name, GActionGroup* group);
// void gtk_widget_insert_action_group (::GtkWidget* widget, const char* name, ::GActionGroup* group);
GI_INLINE_DECL void insert_action_group (const std::string & name, Gio::ActionGroup group) noexcept;
GI_INLINE_DECL void insert_action_group (const std::string & name) noexcept;

// gboolean gtk_widget_intersect (GtkWidget* widget, const GdkRectangle* area, GdkRectangle* intersection);
// gboolean gtk_widget_intersect (::GtkWidget* widget, const ::GdkRectangle* area, ::GdkRectangle* intersection);
GI_INLINE_DECL bool intersect (const Gdk::Rectangle & area, Gdk::Rectangle * intersection = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, Gdk::Rectangle> intersect (const Gdk::Rectangle & area) noexcept;

// gboolean gtk_widget_is_ancestor (GtkWidget* widget, GtkWidget* ancestor);
// gboolean gtk_widget_is_ancestor (::GtkWidget* widget, ::GtkWidget* ancestor);
GI_INLINE_DECL bool is_ancestor (Gtk::Widget ancestor) noexcept;

// gboolean gtk_widget_is_composited (GtkWidget* widget);
// gboolean gtk_widget_is_composited (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_is_drawable (GtkWidget* widget);
// gboolean gtk_widget_is_drawable (::GtkWidget* widget);
GI_INLINE_DECL bool is_drawable () noexcept;

// gboolean gtk_widget_is_focus (GtkWidget* widget);
// gboolean gtk_widget_is_focus (::GtkWidget* widget);
GI_INLINE_DECL bool is_focus () noexcept;

// gboolean gtk_widget_is_sensitive (GtkWidget* widget);
// gboolean gtk_widget_is_sensitive (::GtkWidget* widget);
GI_INLINE_DECL bool is_sensitive () noexcept;

// gboolean gtk_widget_is_toplevel (GtkWidget* widget);
// gboolean gtk_widget_is_toplevel (::GtkWidget* widget);
GI_INLINE_DECL bool is_toplevel () noexcept;

// gboolean gtk_widget_is_visible (GtkWidget* widget);
// gboolean gtk_widget_is_visible (::GtkWidget* widget);
GI_INLINE_DECL bool is_visible () noexcept;

// gboolean gtk_widget_keynav_failed (GtkWidget* widget, GtkDirectionType direction);
// gboolean gtk_widget_keynav_failed (::GtkWidget* widget, ::GtkDirectionType direction);
GI_INLINE_DECL bool keynav_failed (Gtk::DirectionType direction) noexcept;

// GList* gtk_widget_list_accel_closures (GtkWidget* widget);
// ::GList* gtk_widget_list_accel_closures (::GtkWidget* widget);
GI_INLINE_DECL std::vector<GObject::Closure> list_accel_closures () noexcept;

// const gchar** gtk_widget_list_action_prefixes (GtkWidget* widget);
// const char** gtk_widget_list_action_prefixes (::GtkWidget* widget);
GI_INLINE_DECL std::vector<std::string> list_action_prefixes () noexcept;

// GList* gtk_widget_list_mnemonic_labels (GtkWidget* widget);
// ::GList* gtk_widget_list_mnemonic_labels (::GtkWidget* widget);
GI_INLINE_DECL std::vector<Gtk::Widget> list_mnemonic_labels () noexcept;

// void gtk_widget_map (GtkWidget* widget);
// void gtk_widget_map (::GtkWidget* widget);
GI_INLINE_DECL void map () noexcept;

// gboolean gtk_widget_mnemonic_activate (GtkWidget* widget, gboolean group_cycling);
// gboolean gtk_widget_mnemonic_activate (::GtkWidget* widget, gboolean group_cycling);
GI_INLINE_DECL bool mnemonic_activate (gboolean group_cycling) noexcept;

// void gtk_widget_modify_base (GtkWidget* widget, GtkStateType state, const GdkColor* color);
// void gtk_widget_modify_base (::GtkWidget* widget,  state, const  color);
// IGNORE; deprecated

// void gtk_widget_modify_bg (GtkWidget* widget, GtkStateType state, const GdkColor* color);
// void gtk_widget_modify_bg (::GtkWidget* widget,  state, const  color);
// IGNORE; deprecated

// void gtk_widget_modify_cursor (GtkWidget* widget, const GdkColor* primary, const GdkColor* secondary);
// void gtk_widget_modify_cursor (::GtkWidget* widget, const  primary, const  secondary);
// IGNORE; deprecated

// void gtk_widget_modify_fg (GtkWidget* widget, GtkStateType state, const GdkColor* color);
// void gtk_widget_modify_fg (::GtkWidget* widget,  state, const  color);
// IGNORE; deprecated

// void gtk_widget_modify_font (GtkWidget* widget, PangoFontDescription* font_desc);
// void gtk_widget_modify_font (::GtkWidget* widget, ::PangoFontDescription* font_desc);
// IGNORE; deprecated

// void gtk_widget_modify_style (GtkWidget* widget, GtkRcStyle* style);
// void gtk_widget_modify_style (::GtkWidget* widget, ::GtkRcStyle* style);
// IGNORE; deprecated

// void gtk_widget_modify_text (GtkWidget* widget, GtkStateType state, const GdkColor* color);
// void gtk_widget_modify_text (::GtkWidget* widget,  state, const  color);
// IGNORE; deprecated

// void gtk_widget_override_background_color (GtkWidget* widget, GtkStateFlags state, const GdkRGBA* color);
// void gtk_widget_override_background_color (::GtkWidget* widget, ::GtkStateFlags state, const ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_widget_override_color (GtkWidget* widget, GtkStateFlags state, const GdkRGBA* color);
// void gtk_widget_override_color (::GtkWidget* widget, ::GtkStateFlags state, const ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_widget_override_cursor (GtkWidget* widget, const GdkRGBA* cursor, const GdkRGBA* secondary_cursor);
// void gtk_widget_override_cursor (::GtkWidget* widget, const ::GdkRGBA* cursor, const ::GdkRGBA* secondary_cursor);
// IGNORE; deprecated

// void gtk_widget_override_font (GtkWidget* widget, const PangoFontDescription* font_desc);
// void gtk_widget_override_font (::GtkWidget* widget, const ::PangoFontDescription* font_desc);
// IGNORE; deprecated

// void gtk_widget_override_symbolic_color (GtkWidget* widget, const gchar* name, const GdkRGBA* color);
// void gtk_widget_override_symbolic_color (::GtkWidget* widget, const char* name, const ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_widget_path (GtkWidget* widget, guint* path_length, gchar** path, gchar** path_reversed);
// void gtk_widget_path (::GtkWidget* widget, guint* path_length, char** path, char** path_reversed);
// IGNORE; deprecated

// void gtk_widget_queue_allocate (GtkWidget* widget);
// void gtk_widget_queue_allocate (::GtkWidget* widget);
GI_INLINE_DECL void queue_allocate () noexcept;

// void gtk_widget_queue_compute_expand (GtkWidget* widget);
// void gtk_widget_queue_compute_expand (::GtkWidget* widget);
GI_INLINE_DECL void queue_compute_expand () noexcept;

// void gtk_widget_queue_draw (GtkWidget* widget);
// void gtk_widget_queue_draw (::GtkWidget* widget);
GI_INLINE_DECL void queue_draw () noexcept;

// void gtk_widget_queue_draw_area (GtkWidget* widget, gint x, gint y, gint width, gint height);
// void gtk_widget_queue_draw_area (::GtkWidget* widget, gint x, gint y, gint width, gint height);
GI_INLINE_DECL void queue_draw_area (gint x, gint y, gint width, gint height) noexcept;

// void gtk_widget_queue_draw_region (GtkWidget* widget, const cairo_region_t* region);
// void gtk_widget_queue_draw_region (::GtkWidget* widget, const ::cairo_region_t* region);
GI_INLINE_DECL void queue_draw_region (const cairo::Region & region) noexcept;

// void gtk_widget_queue_resize (GtkWidget* widget);
// void gtk_widget_queue_resize (::GtkWidget* widget);
GI_INLINE_DECL void queue_resize () noexcept;

// void gtk_widget_queue_resize_no_redraw (GtkWidget* widget);
// void gtk_widget_queue_resize_no_redraw (::GtkWidget* widget);
GI_INLINE_DECL void queue_resize_no_redraw () noexcept;

// void gtk_widget_realize (GtkWidget* widget);
// void gtk_widget_realize (::GtkWidget* widget);
GI_INLINE_DECL void realize () noexcept;

// cairo_region_t* gtk_widget_region_intersect (GtkWidget* widget, const cairo_region_t* region);
// ::cairo_region_t* gtk_widget_region_intersect (::GtkWidget* widget, const ::cairo_region_t* region);
// IGNORE; deprecated

// void gtk_widget_register_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_register_window (::GtkWidget* widget, ::GdkWindow* window);
GI_INLINE_DECL void register_window (Gdk::Window window) noexcept;

// gboolean gtk_widget_remove_accelerator (GtkWidget* widget, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_widget_remove_accelerator (::GtkWidget* widget, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
GI_INLINE_DECL bool remove_accelerator (Gtk::AccelGroup accel_group, guint accel_key, Gdk::ModifierType accel_mods) noexcept;

// void gtk_widget_remove_mnemonic_label (GtkWidget* widget, GtkWidget* label);
// void gtk_widget_remove_mnemonic_label (::GtkWidget* widget, ::GtkWidget* label);
GI_INLINE_DECL void remove_mnemonic_label (Gtk::Widget label) noexcept;

// void gtk_widget_remove_tick_callback (GtkWidget* widget, guint id);
// void gtk_widget_remove_tick_callback (::GtkWidget* widget, guint id);
GI_INLINE_DECL void remove_tick_callback (guint id) noexcept;

// GdkPixbuf* gtk_widget_render_icon (GtkWidget* widget, const gchar* stock_id, GtkIconSize size, const gchar* detail);
// ::GdkPixbuf* gtk_widget_render_icon (::GtkWidget* widget, const char* stock_id, gint size, const char* detail);
// IGNORE; deprecated

// GdkPixbuf* gtk_widget_render_icon_pixbuf (GtkWidget* widget, const gchar* stock_id, GtkIconSize size);
// ::GdkPixbuf* gtk_widget_render_icon_pixbuf (::GtkWidget* widget, const char* stock_id, gint size);
// IGNORE; deprecated

// void gtk_widget_reparent (GtkWidget* widget, GtkWidget* new_parent);
// void gtk_widget_reparent (::GtkWidget* widget, ::GtkWidget* new_parent);
// IGNORE; deprecated

// void gtk_widget_reset_rc_styles (GtkWidget* widget);
// void gtk_widget_reset_rc_styles (::GtkWidget* widget);
// IGNORE; deprecated

// void gtk_widget_reset_style (GtkWidget* widget);
// void gtk_widget_reset_style (::GtkWidget* widget);
GI_INLINE_DECL void reset_style () noexcept;

// gint gtk_widget_send_expose (GtkWidget* widget, GdkEvent* event);
// gint gtk_widget_send_expose (::GtkWidget* widget,  event);
// IGNORE; deprecated

// gboolean gtk_widget_send_focus_change (GtkWidget* widget, GdkEvent* event);
// gboolean gtk_widget_send_focus_change (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_widget_set_accel_path (GtkWidget* widget, const gchar* accel_path, GtkAccelGroup* accel_group);
// void gtk_widget_set_accel_path (::GtkWidget* widget, const char* accel_path, ::GtkAccelGroup* accel_group);
GI_INLINE_DECL void set_accel_path (const std::string & accel_path, Gtk::AccelGroup accel_group) noexcept;
GI_INLINE_DECL void set_accel_path () noexcept;

// void gtk_widget_set_allocation (GtkWidget* widget, const GtkAllocation* allocation);
// void gtk_widget_set_allocation (::GtkWidget* widget, const ::GtkAllocation* allocation);
GI_INLINE_DECL void set_allocation (const Gtk::Allocation & allocation) noexcept;

// void gtk_widget_set_app_paintable (GtkWidget* widget, gboolean app_paintable);
// void gtk_widget_set_app_paintable (::GtkWidget* widget, gboolean app_paintable);
GI_INLINE_DECL void set_app_paintable (gboolean app_paintable) noexcept;

// void gtk_widget_set_can_default (GtkWidget* widget, gboolean can_default);
// void gtk_widget_set_can_default (::GtkWidget* widget, gboolean can_default);
GI_INLINE_DECL void set_can_default (gboolean can_default) noexcept;

// void gtk_widget_set_can_focus (GtkWidget* widget, gboolean can_focus);
// void gtk_widget_set_can_focus (::GtkWidget* widget, gboolean can_focus);
GI_INLINE_DECL void set_can_focus (gboolean can_focus) noexcept;

// void gtk_widget_set_child_visible (GtkWidget* widget, gboolean is_visible);
// void gtk_widget_set_child_visible (::GtkWidget* widget, gboolean is_visible);
GI_INLINE_DECL void set_child_visible (gboolean is_visible) noexcept;

// void gtk_widget_set_clip (GtkWidget* widget, const GtkAllocation* clip);
// void gtk_widget_set_clip (::GtkWidget* widget, const ::GtkAllocation* clip);
GI_INLINE_DECL void set_clip (const Gtk::Allocation & clip) noexcept;

// void gtk_widget_set_composite_name (GtkWidget* widget, const gchar* name);
// void gtk_widget_set_composite_name (::GtkWidget* widget, const char* name);
// IGNORE; deprecated

// void gtk_widget_set_device_enabled (GtkWidget* widget, GdkDevice* device, gboolean enabled);
// void gtk_widget_set_device_enabled (::GtkWidget* widget, ::GdkDevice* device, gboolean enabled);
GI_INLINE_DECL void set_device_enabled (Gdk::Device device, gboolean enabled) noexcept;

// void gtk_widget_set_device_events (GtkWidget* widget, GdkDevice* device, GdkEventMask events);
// void gtk_widget_set_device_events (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
GI_INLINE_DECL void set_device_events (Gdk::Device device, Gdk::EventMask events) noexcept;

// void gtk_widget_set_direction (GtkWidget* widget, GtkTextDirection dir);
// void gtk_widget_set_direction (::GtkWidget* widget, ::GtkTextDirection dir);
GI_INLINE_DECL void set_direction (Gtk::TextDirection dir) noexcept;

// void gtk_widget_set_double_buffered (GtkWidget* widget, gboolean double_buffered);
// void gtk_widget_set_double_buffered (::GtkWidget* widget, gboolean double_buffered);
// IGNORE; deprecated

// void gtk_widget_set_events (GtkWidget* widget, gint events);
// void gtk_widget_set_events (::GtkWidget* widget, gint events);
GI_INLINE_DECL void set_events (gint events) noexcept;

// void gtk_widget_set_focus_on_click (GtkWidget* widget, gboolean focus_on_click);
// void gtk_widget_set_focus_on_click (::GtkWidget* widget, gboolean focus_on_click);
GI_INLINE_DECL void set_focus_on_click (gboolean focus_on_click) noexcept;

// void gtk_widget_set_font_map (GtkWidget* widget, PangoFontMap* font_map);
// void gtk_widget_set_font_map (::GtkWidget* widget, ::PangoFontMap* font_map);
GI_INLINE_DECL void set_font_map (Pango::FontMap font_map) noexcept;
GI_INLINE_DECL void set_font_map () noexcept;

// void gtk_widget_set_font_options (GtkWidget* widget, const cairo_font_options_t* options);
// void gtk_widget_set_font_options (::GtkWidget* widget, const ::cairo_font_options_t* options);
GI_INLINE_DECL void set_font_options (const cairo::FontOptions & options) noexcept;
GI_INLINE_DECL void set_font_options () noexcept;

// void gtk_widget_set_halign (GtkWidget* widget, GtkAlign align);
// void gtk_widget_set_halign (::GtkWidget* widget, ::GtkAlign align);
GI_INLINE_DECL void set_halign (Gtk::Align align) noexcept;

// void gtk_widget_set_has_tooltip (GtkWidget* widget, gboolean has_tooltip);
// void gtk_widget_set_has_tooltip (::GtkWidget* widget, gboolean has_tooltip);
GI_INLINE_DECL void set_has_tooltip (gboolean has_tooltip) noexcept;

// void gtk_widget_set_has_window (GtkWidget* widget, gboolean has_window);
// void gtk_widget_set_has_window (::GtkWidget* widget, gboolean has_window);
GI_INLINE_DECL void set_has_window (gboolean has_window) noexcept;

// void gtk_widget_set_hexpand (GtkWidget* widget, gboolean expand);
// void gtk_widget_set_hexpand (::GtkWidget* widget, gboolean expand);
GI_INLINE_DECL void set_hexpand (gboolean expand) noexcept;

// void gtk_widget_set_hexpand_set (GtkWidget* widget, gboolean set);
// void gtk_widget_set_hexpand_set (::GtkWidget* widget, gboolean set);
GI_INLINE_DECL void set_hexpand_set (gboolean set) noexcept;

// void gtk_widget_set_mapped (GtkWidget* widget, gboolean mapped);
// void gtk_widget_set_mapped (::GtkWidget* widget, gboolean mapped);
GI_INLINE_DECL void set_mapped (gboolean mapped) noexcept;

// void gtk_widget_set_margin_bottom (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_bottom (::GtkWidget* widget, gint margin);
GI_INLINE_DECL void set_margin_bottom (gint margin) noexcept;

// void gtk_widget_set_margin_end (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_end (::GtkWidget* widget, gint margin);
GI_INLINE_DECL void set_margin_end (gint margin) noexcept;

// void gtk_widget_set_margin_left (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_left (::GtkWidget* widget, gint margin);
// IGNORE; deprecated

// void gtk_widget_set_margin_right (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_right (::GtkWidget* widget, gint margin);
// IGNORE; deprecated

// void gtk_widget_set_margin_start (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_start (::GtkWidget* widget, gint margin);
GI_INLINE_DECL void set_margin_start (gint margin) noexcept;

// void gtk_widget_set_margin_top (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_top (::GtkWidget* widget, gint margin);
GI_INLINE_DECL void set_margin_top (gint margin) noexcept;

// void gtk_widget_set_name (GtkWidget* widget, const gchar* name);
// void gtk_widget_set_name (::GtkWidget* widget, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void gtk_widget_set_no_show_all (GtkWidget* widget, gboolean no_show_all);
// void gtk_widget_set_no_show_all (::GtkWidget* widget, gboolean no_show_all);
GI_INLINE_DECL void set_no_show_all (gboolean no_show_all) noexcept;

// void gtk_widget_set_opacity (GtkWidget* widget, double opacity);
// void gtk_widget_set_opacity (::GtkWidget* widget, gdouble opacity);
GI_INLINE_DECL void set_opacity (gdouble opacity) noexcept;

// void gtk_widget_set_parent (GtkWidget* widget, GtkWidget* parent);
// void gtk_widget_set_parent (::GtkWidget* widget, ::GtkWidget* parent);
GI_INLINE_DECL void set_parent (Gtk::Widget parent) noexcept;

// void gtk_widget_set_parent_window (GtkWidget* widget, GdkWindow* parent_window);
// void gtk_widget_set_parent_window (::GtkWidget* widget, ::GdkWindow* parent_window);
GI_INLINE_DECL void set_parent_window (Gdk::Window parent_window) noexcept;

// void gtk_widget_set_realized (GtkWidget* widget, gboolean realized);
// void gtk_widget_set_realized (::GtkWidget* widget, gboolean realized);
GI_INLINE_DECL void set_realized (gboolean realized) noexcept;

// void gtk_widget_set_receives_default (GtkWidget* widget, gboolean receives_default);
// void gtk_widget_set_receives_default (::GtkWidget* widget, gboolean receives_default);
GI_INLINE_DECL void set_receives_default (gboolean receives_default) noexcept;

// void gtk_widget_set_redraw_on_allocate (GtkWidget* widget, gboolean redraw_on_allocate);
// void gtk_widget_set_redraw_on_allocate (::GtkWidget* widget, gboolean redraw_on_allocate);
GI_INLINE_DECL void set_redraw_on_allocate (gboolean redraw_on_allocate) noexcept;

// void gtk_widget_set_sensitive (GtkWidget* widget, gboolean sensitive);
// void gtk_widget_set_sensitive (::GtkWidget* widget, gboolean sensitive);
GI_INLINE_DECL void set_sensitive (gboolean sensitive) noexcept;

// void gtk_widget_set_size_request (GtkWidget* widget, gint width, gint height);
// void gtk_widget_set_size_request (::GtkWidget* widget, gint width, gint height);
GI_INLINE_DECL void set_size_request (gint width, gint height) noexcept;

// void gtk_widget_set_state (GtkWidget* widget, GtkStateType state);
// void gtk_widget_set_state (::GtkWidget* widget,  state);
// IGNORE; deprecated

// void gtk_widget_set_state_flags (GtkWidget* widget, GtkStateFlags flags, gboolean clear);
// void gtk_widget_set_state_flags (::GtkWidget* widget, ::GtkStateFlags flags, gboolean clear);
GI_INLINE_DECL void set_state_flags (Gtk::StateFlags flags, gboolean clear) noexcept;

// void gtk_widget_set_style (GtkWidget* widget, GtkStyle* style);
// void gtk_widget_set_style (::GtkWidget* widget, ::GtkStyle* style);
// IGNORE; deprecated

// void gtk_widget_set_support_multidevice (GtkWidget* widget, gboolean support_multidevice);
// void gtk_widget_set_support_multidevice (::GtkWidget* widget, gboolean support_multidevice);
GI_INLINE_DECL void set_support_multidevice (gboolean support_multidevice) noexcept;

// void gtk_widget_set_tooltip_markup (GtkWidget* widget, const gchar* markup);
// void gtk_widget_set_tooltip_markup (::GtkWidget* widget, const char* markup);
GI_INLINE_DECL void set_tooltip_markup (const std::string & markup) noexcept;
GI_INLINE_DECL void set_tooltip_markup () noexcept;

// void gtk_widget_set_tooltip_text (GtkWidget* widget, const gchar* text);
// void gtk_widget_set_tooltip_text (::GtkWidget* widget, const char* text);
GI_INLINE_DECL void set_tooltip_text (const std::string & text) noexcept;
GI_INLINE_DECL void set_tooltip_text () noexcept;

// void gtk_widget_set_tooltip_window (GtkWidget* widget, GtkWindow* custom_window);
// void gtk_widget_set_tooltip_window (::GtkWidget* widget, ::GtkWindow* custom_window);
GI_INLINE_DECL void set_tooltip_window (Gtk::Window custom_window) noexcept;
GI_INLINE_DECL void set_tooltip_window () noexcept;

// void gtk_widget_set_valign (GtkWidget* widget, GtkAlign align);
// void gtk_widget_set_valign (::GtkWidget* widget, ::GtkAlign align);
GI_INLINE_DECL void set_valign (Gtk::Align align) noexcept;

// void gtk_widget_set_vexpand (GtkWidget* widget, gboolean expand);
// void gtk_widget_set_vexpand (::GtkWidget* widget, gboolean expand);
GI_INLINE_DECL void set_vexpand (gboolean expand) noexcept;

// void gtk_widget_set_vexpand_set (GtkWidget* widget, gboolean set);
// void gtk_widget_set_vexpand_set (::GtkWidget* widget, gboolean set);
GI_INLINE_DECL void set_vexpand_set (gboolean set) noexcept;

// void gtk_widget_set_visible (GtkWidget* widget, gboolean visible);
// void gtk_widget_set_visible (::GtkWidget* widget, gboolean visible);
GI_INLINE_DECL void set_visible (gboolean visible) noexcept;

// void gtk_widget_set_visual (GtkWidget* widget, GdkVisual* visual);
// void gtk_widget_set_visual (::GtkWidget* widget, ::GdkVisual* visual);
GI_INLINE_DECL void set_visual (Gdk::Visual visual) noexcept;
GI_INLINE_DECL void set_visual () noexcept;

// void gtk_widget_set_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_set_window (::GtkWidget* widget, ::GdkWindow* window);
GI_INLINE_DECL void set_window (Gdk::Window window) noexcept;

// void gtk_widget_shape_combine_region (GtkWidget* widget, cairo_region_t* region);
// void gtk_widget_shape_combine_region (::GtkWidget* widget, ::cairo_region_t* region);
GI_INLINE_DECL void shape_combine_region (cairo::Region region) noexcept;
GI_INLINE_DECL void shape_combine_region () noexcept;

// void gtk_widget_show (GtkWidget* widget);
// void gtk_widget_show (::GtkWidget* widget);
GI_INLINE_DECL void show () noexcept;

// void gtk_widget_show_all (GtkWidget* widget);
// void gtk_widget_show_all (::GtkWidget* widget);
GI_INLINE_DECL void show_all () noexcept;

// void gtk_widget_show_now (GtkWidget* widget);
// void gtk_widget_show_now (::GtkWidget* widget);
GI_INLINE_DECL void show_now () noexcept;

// void gtk_widget_size_allocate (GtkWidget* widget, GtkAllocation* allocation);
// void gtk_widget_size_allocate (::GtkWidget* widget, ::GtkAllocation* allocation);
GI_INLINE_DECL void size_allocate (Gtk::Allocation allocation) noexcept;

// void gtk_widget_size_allocate_with_baseline (GtkWidget* widget, GtkAllocation* allocation, gint baseline);
// void gtk_widget_size_allocate_with_baseline (::GtkWidget* widget, ::GtkAllocation* allocation, gint baseline);
GI_INLINE_DECL void size_allocate_with_baseline (Gtk::Allocation allocation, gint baseline) noexcept;

// void gtk_widget_size_request (GtkWidget* widget, GtkRequisition* requisition);
// void gtk_widget_size_request (::GtkWidget* widget, ::GtkRequisition* requisition);
// IGNORE; deprecated

// void gtk_widget_style_attach (GtkWidget* widget);
// void gtk_widget_style_attach (::GtkWidget* widget);
// IGNORE; deprecated

// void gtk_widget_style_get (GtkWidget* widget, const gchar* first_property_name);
// void gtk_widget_style_get (::GtkWidget* widget, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// void gtk_widget_style_get_property (GtkWidget* widget, const gchar* property_name, GValue* value);
// void gtk_widget_style_get_property (::GtkWidget* widget, const char* property_name, ::GValue* value);
GI_INLINE_DECL void style_get_property (const std::string & property_name, GObject::Value value) noexcept;

// void gtk_widget_style_get_valist (GtkWidget* widget, const gchar* first_property_name, va_list var_args);
// void gtk_widget_style_get_valist (::GtkWidget* widget, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_widget_thaw_child_notify (GtkWidget* widget);
// void gtk_widget_thaw_child_notify (::GtkWidget* widget);
GI_INLINE_DECL void thaw_child_notify () noexcept;

// gboolean gtk_widget_translate_coordinates (GtkWidget* src_widget, GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
// gboolean gtk_widget_translate_coordinates (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
GI_INLINE_DECL bool translate_coordinates (Gtk::Widget dest_widget, gint src_x, gint src_y, gint * dest_x = nullptr, gint * dest_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> translate_coordinates (Gtk::Widget dest_widget, gint src_x, gint src_y) noexcept;

// void gtk_widget_trigger_tooltip_query (GtkWidget* widget);
// void gtk_widget_trigger_tooltip_query (::GtkWidget* widget);
GI_INLINE_DECL void trigger_tooltip_query () noexcept;

// void gtk_widget_unmap (GtkWidget* widget);
// void gtk_widget_unmap (::GtkWidget* widget);
GI_INLINE_DECL void unmap () noexcept;

// void gtk_widget_unparent (GtkWidget* widget);
// void gtk_widget_unparent (::GtkWidget* widget);
GI_INLINE_DECL void unparent () noexcept;

// void gtk_widget_unrealize (GtkWidget* widget);
// void gtk_widget_unrealize (::GtkWidget* widget);
GI_INLINE_DECL void unrealize () noexcept;

// void gtk_widget_unregister_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_unregister_window (::GtkWidget* widget, ::GdkWindow* window);
GI_INLINE_DECL void unregister_window (Gdk::Window window) noexcept;

// void gtk_widget_unset_state_flags (GtkWidget* widget, GtkStateFlags flags);
// void gtk_widget_unset_state_flags (::GtkWidget* widget, ::GtkStateFlags flags);
GI_INLINE_DECL void unset_state_flags (Gtk::StateFlags flags) noexcept;

gi::property_proxy<bool, base::WidgetBase> property_app_paintable()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "app-paintable"); }
const gi::property_proxy<bool, base::WidgetBase> property_app_paintable() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "app-paintable"); }

gi::property_proxy<bool, base::WidgetBase> property_can_default()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-default"); }
const gi::property_proxy<bool, base::WidgetBase> property_can_default() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-default"); }

gi::property_proxy<bool, base::WidgetBase> property_can_focus()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-focus"); }
const gi::property_proxy<bool, base::WidgetBase> property_can_focus() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "can-focus"); }

gi::property_proxy<bool, base::WidgetBase> property_composite_child()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "composite-child"); }
const gi::property_proxy<bool, base::WidgetBase> property_composite_child() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "composite-child"); }

gi::property_proxy<bool, base::WidgetBase> property_double_buffered()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "double-buffered"); }
const gi::property_proxy<bool, base::WidgetBase> property_double_buffered() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "double-buffered"); }

gi::property_proxy<Gdk::EventMask, base::WidgetBase> property_events()
{ return gi::property_proxy<Gdk::EventMask, base::WidgetBase> (*this, "events"); }
const gi::property_proxy<Gdk::EventMask, base::WidgetBase> property_events() const
{ return gi::property_proxy<Gdk::EventMask, base::WidgetBase> (*this, "events"); }

gi::property_proxy<bool, base::WidgetBase> property_expand()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "expand"); }
const gi::property_proxy<bool, base::WidgetBase> property_expand() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "expand"); }

gi::property_proxy<bool, base::WidgetBase> property_focus_on_click()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focus-on-click"); }
const gi::property_proxy<bool, base::WidgetBase> property_focus_on_click() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "focus-on-click"); }

gi::property_proxy<Gtk::Align, base::WidgetBase> property_halign()
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "halign"); }
const gi::property_proxy<Gtk::Align, base::WidgetBase> property_halign() const
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "halign"); }

gi::property_proxy<bool, base::WidgetBase> property_has_default()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-default"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_default() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-default"); }

gi::property_proxy<bool, base::WidgetBase> property_has_focus()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-focus"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_focus() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-focus"); }

gi::property_proxy<bool, base::WidgetBase> property_has_tooltip()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-tooltip"); }
const gi::property_proxy<bool, base::WidgetBase> property_has_tooltip() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "has-tooltip"); }

gi::property_proxy<gint, base::WidgetBase> property_height_request()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "height-request"); }
const gi::property_proxy<gint, base::WidgetBase> property_height_request() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "height-request"); }

gi::property_proxy<bool, base::WidgetBase> property_hexpand()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand"); }
const gi::property_proxy<bool, base::WidgetBase> property_hexpand() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand"); }

gi::property_proxy<bool, base::WidgetBase> property_hexpand_set()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand-set"); }
const gi::property_proxy<bool, base::WidgetBase> property_hexpand_set() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "hexpand-set"); }

gi::property_proxy<bool, base::WidgetBase> property_is_focus()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "is-focus"); }
const gi::property_proxy<bool, base::WidgetBase> property_is_focus() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "is-focus"); }

gi::property_proxy<gint, base::WidgetBase> property_margin()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_bottom()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-bottom"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_bottom() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-bottom"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_end()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-end"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_end() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-end"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_left()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-left"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_left() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-left"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_right()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-right"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_right() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-right"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_start()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-start"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_start() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-start"); }

gi::property_proxy<gint, base::WidgetBase> property_margin_top()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-top"); }
const gi::property_proxy<gint, base::WidgetBase> property_margin_top() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "margin-top"); }

gi::property_proxy<std::string, base::WidgetBase> property_name()
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "name"); }
const gi::property_proxy<std::string, base::WidgetBase> property_name() const
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "name"); }

gi::property_proxy<bool, base::WidgetBase> property_no_show_all()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "no-show-all"); }
const gi::property_proxy<bool, base::WidgetBase> property_no_show_all() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "no-show-all"); }

gi::property_proxy<gdouble, base::WidgetBase> property_opacity()
{ return gi::property_proxy<gdouble, base::WidgetBase> (*this, "opacity"); }
const gi::property_proxy<gdouble, base::WidgetBase> property_opacity() const
{ return gi::property_proxy<gdouble, base::WidgetBase> (*this, "opacity"); }

gi::property_proxy<Gtk::Container, base::WidgetBase> property_parent()
{ return gi::property_proxy<Gtk::Container, base::WidgetBase> (*this, "parent"); }
const gi::property_proxy<Gtk::Container, base::WidgetBase> property_parent() const
{ return gi::property_proxy<Gtk::Container, base::WidgetBase> (*this, "parent"); }

gi::property_proxy<bool, base::WidgetBase> property_receives_default()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "receives-default"); }
const gi::property_proxy<bool, base::WidgetBase> property_receives_default() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "receives-default"); }

gi::property_proxy<gint, base::WidgetBase> property_scale_factor()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "scale-factor"); }
const gi::property_proxy<gint, base::WidgetBase> property_scale_factor() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "scale-factor"); }

gi::property_proxy<bool, base::WidgetBase> property_sensitive()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "sensitive"); }
const gi::property_proxy<bool, base::WidgetBase> property_sensitive() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "sensitive"); }

gi::property_proxy<Gtk::Style, base::WidgetBase> property_style()
{ return gi::property_proxy<Gtk::Style, base::WidgetBase> (*this, "style"); }
const gi::property_proxy<Gtk::Style, base::WidgetBase> property_style() const
{ return gi::property_proxy<Gtk::Style, base::WidgetBase> (*this, "style"); }

gi::property_proxy<std::string, base::WidgetBase> property_tooltip_markup()
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "tooltip-markup"); }
const gi::property_proxy<std::string, base::WidgetBase> property_tooltip_markup() const
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "tooltip-markup"); }

gi::property_proxy<std::string, base::WidgetBase> property_tooltip_text()
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "tooltip-text"); }
const gi::property_proxy<std::string, base::WidgetBase> property_tooltip_text() const
{ return gi::property_proxy<std::string, base::WidgetBase> (*this, "tooltip-text"); }

gi::property_proxy<Gtk::Align, base::WidgetBase> property_valign()
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "valign"); }
const gi::property_proxy<Gtk::Align, base::WidgetBase> property_valign() const
{ return gi::property_proxy<Gtk::Align, base::WidgetBase> (*this, "valign"); }

gi::property_proxy<bool, base::WidgetBase> property_vexpand()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand"); }
const gi::property_proxy<bool, base::WidgetBase> property_vexpand() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand"); }

gi::property_proxy<bool, base::WidgetBase> property_vexpand_set()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand-set"); }
const gi::property_proxy<bool, base::WidgetBase> property_vexpand_set() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "vexpand-set"); }

gi::property_proxy<bool, base::WidgetBase> property_visible()
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "visible"); }
const gi::property_proxy<bool, base::WidgetBase> property_visible() const
{ return gi::property_proxy<bool, base::WidgetBase> (*this, "visible"); }

gi::property_proxy<gint, base::WidgetBase> property_width_request()
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "width-request"); }
const gi::property_proxy<gint, base::WidgetBase> property_width_request() const
{ return gi::property_proxy<gint, base::WidgetBase> (*this, "width-request"); }

gi::property_proxy<Gdk::Window, base::WidgetBase> property_window()
{ return gi::property_proxy<Gdk::Window, base::WidgetBase> (*this, "window"); }
const gi::property_proxy<Gdk::Window, base::WidgetBase> property_window() const
{ return gi::property_proxy<Gdk::Window, base::WidgetBase> (*this, "window"); }

// signal accel-closures-changed
gi::signal_proxy<void(Gtk::Widget)> signal_accel_closures_changed()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "accel-closures-changed"); }

// signal button-press-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventButton event)> signal_button_press_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventButton event)> (*this, "button-press-event"); }

// signal button-release-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventButton event)> signal_button_release_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventButton event)> (*this, "button-release-event"); }

// signal can-activate-accel
gi::signal_proxy<bool(Gtk::Widget, guint signal_id)> signal_can_activate_accel()
{ return gi::signal_proxy<bool(Gtk::Widget, guint signal_id)> (*this, "can-activate-accel"); }

// signal child-notify
gi::signal_proxy<void(Gtk::Widget, GObject::ParamSpec child_property)> signal_child_notify()
{ return gi::signal_proxy<void(Gtk::Widget, GObject::ParamSpec child_property)> (*this, "child-notify"); }

// signal composited-changed
// IGNORE; deprecated

// signal configure-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventConfigure event)> signal_configure_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventConfigure event)> (*this, "configure-event"); }

// signal damage-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventExpose event)> signal_damage_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventExpose event)> (*this, "damage-event"); }

// signal delete-event
// SKIP; event type  not supported

// signal destroy
gi::signal_proxy<void(Gtk::Widget)> signal_destroy()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "destroy"); }

// signal destroy-event
// SKIP; event type  not supported

// signal direction-changed
gi::signal_proxy<void(Gtk::Widget, Gtk::TextDirection previous_direction)> signal_direction_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::TextDirection previous_direction)> (*this, "direction-changed"); }

// signal drag-begin
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> signal_drag_begin()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> (*this, "drag-begin"); }

// signal drag-data-delete
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> signal_drag_data_delete()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> (*this, "drag-data-delete"); }

// signal drag-data-get
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, Gtk::SelectionData data, guint info, guint time)> signal_drag_data_get()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, Gtk::SelectionData data, guint info, guint time)> (*this, "drag-data-get"); }

// signal drag-data-received
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, gint x, gint y, Gtk::SelectionData data, guint info, guint time)> signal_drag_data_received()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, gint x, gint y, Gtk::SelectionData data, guint info, guint time)> (*this, "drag-data-received"); }

// signal drag-drop
gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, gint x, gint y, guint time)> signal_drag_drop()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, gint x, gint y, guint time)> (*this, "drag-drop"); }

// signal drag-end
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> signal_drag_end()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context)> (*this, "drag-end"); }

// signal drag-failed
gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, Gtk::DragResult result)> signal_drag_failed()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, Gtk::DragResult result)> (*this, "drag-failed"); }

// signal drag-leave
gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, guint time)> signal_drag_leave()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::DragContext context, guint time)> (*this, "drag-leave"); }

// signal drag-motion
gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, gint x, gint y, guint time)> signal_drag_motion()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::DragContext context, gint x, gint y, guint time)> (*this, "drag-motion"); }

// signal draw
gi::signal_proxy<bool(Gtk::Widget, cairo::Context cr)> signal_draw()
{ return gi::signal_proxy<bool(Gtk::Widget, cairo::Context cr)> (*this, "draw"); }

// signal enter-notify-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventCrossing event)> signal_enter_notify_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventCrossing event)> (*this, "enter-notify-event"); }

// signal event
// SKIP; event type  not supported

// signal event-after
// SKIP; event type  not supported

// signal focus
gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> signal_focus()
{ return gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> (*this, "focus"); }

// signal focus-in-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventFocus event)> signal_focus_in_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventFocus event)> (*this, "focus-in-event"); }

// signal focus-out-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventFocus event)> signal_focus_out_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventFocus event)> (*this, "focus-out-event"); }

// signal grab-broken-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventGrabBroken event)> signal_grab_broken_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventGrabBroken event)> (*this, "grab-broken-event"); }

// signal grab-focus
gi::signal_proxy<void(Gtk::Widget)> signal_grab_focus()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "grab-focus"); }

// signal grab-notify
gi::signal_proxy<void(Gtk::Widget, gboolean was_grabbed)> signal_grab_notify()
{ return gi::signal_proxy<void(Gtk::Widget, gboolean was_grabbed)> (*this, "grab-notify"); }

// signal hide
gi::signal_proxy<void(Gtk::Widget)> signal_hide()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "hide"); }

// signal hierarchy-changed
gi::signal_proxy<void(Gtk::Widget, Gtk::Widget previous_toplevel)> signal_hierarchy_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::Widget previous_toplevel)> (*this, "hierarchy-changed"); }

// signal key-press-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventKey event)> signal_key_press_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventKey event)> (*this, "key-press-event"); }

// signal key-release-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventKey event)> signal_key_release_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventKey event)> (*this, "key-release-event"); }

// signal keynav-failed
gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> signal_keynav_failed()
{ return gi::signal_proxy<bool(Gtk::Widget, Gtk::DirectionType direction)> (*this, "keynav-failed"); }

// signal leave-notify-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventCrossing event)> signal_leave_notify_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventCrossing event)> (*this, "leave-notify-event"); }

// signal map
gi::signal_proxy<void(Gtk::Widget)> signal_map()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "map"); }

// signal map-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventAny event)> signal_map_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventAny event)> (*this, "map-event"); }

// signal mnemonic-activate
gi::signal_proxy<bool(Gtk::Widget, gboolean group_cycling)> signal_mnemonic_activate()
{ return gi::signal_proxy<bool(Gtk::Widget, gboolean group_cycling)> (*this, "mnemonic-activate"); }

// signal motion-notify-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventMotion event)> signal_motion_notify_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventMotion event)> (*this, "motion-notify-event"); }

// signal move-focus
gi::signal_proxy<void(Gtk::Widget, Gtk::DirectionType direction)> signal_move_focus()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::DirectionType direction)> (*this, "move-focus"); }

// signal parent-set
gi::signal_proxy<void(Gtk::Widget, Gtk::Widget old_parent)> signal_parent_set()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::Widget old_parent)> (*this, "parent-set"); }

// signal popup-menu
gi::signal_proxy<bool(Gtk::Widget)> signal_popup_menu()
{ return gi::signal_proxy<bool(Gtk::Widget)> (*this, "popup-menu"); }

// signal property-notify-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProperty event)> signal_property_notify_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProperty event)> (*this, "property-notify-event"); }

// signal proximity-in-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProximity event)> signal_proximity_in_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProximity event)> (*this, "proximity-in-event"); }

// signal proximity-out-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProximity event)> signal_proximity_out_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventProximity event)> (*this, "proximity-out-event"); }

// signal query-tooltip
gi::signal_proxy<bool(Gtk::Widget, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> signal_query_tooltip()
{ return gi::signal_proxy<bool(Gtk::Widget, gint x, gint y, gboolean keyboard_mode, Gtk::Tooltip tooltip)> (*this, "query-tooltip"); }

// signal realize
gi::signal_proxy<void(Gtk::Widget)> signal_realize()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "realize"); }

// signal screen-changed
gi::signal_proxy<void(Gtk::Widget, Gdk::Screen previous_screen)> signal_screen_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gdk::Screen previous_screen)> (*this, "screen-changed"); }

// signal scroll-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventScroll event)> signal_scroll_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventScroll event)> (*this, "scroll-event"); }

// signal selection-clear-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> signal_selection_clear_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> (*this, "selection-clear-event"); }

// signal selection-get
gi::signal_proxy<void(Gtk::Widget, Gtk::SelectionData data, guint info, guint time)> signal_selection_get()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::SelectionData data, guint info, guint time)> (*this, "selection-get"); }

// signal selection-notify-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> signal_selection_notify_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> (*this, "selection-notify-event"); }

// signal selection-received
gi::signal_proxy<void(Gtk::Widget, Gtk::SelectionData data, guint time)> signal_selection_received()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::SelectionData data, guint time)> (*this, "selection-received"); }

// signal selection-request-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> signal_selection_request_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventSelection event)> (*this, "selection-request-event"); }

// signal show
gi::signal_proxy<void(Gtk::Widget)> signal_show()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "show"); }

// signal show-help
gi::signal_proxy<bool(Gtk::Widget, Gtk::WidgetHelpType help_type)> signal_show_help()
{ return gi::signal_proxy<bool(Gtk::Widget, Gtk::WidgetHelpType help_type)> (*this, "show-help"); }

// signal size-allocate
gi::signal_proxy<void(Gtk::Widget, Gtk::Allocation allocation)> signal_size_allocate()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::Allocation allocation)> (*this, "size-allocate"); }

// signal state-changed
// IGNORE; deprecated

// signal state-flags-changed
gi::signal_proxy<void(Gtk::Widget, Gtk::StateFlags flags)> signal_state_flags_changed()
{ return gi::signal_proxy<void(Gtk::Widget, Gtk::StateFlags flags)> (*this, "state-flags-changed"); }

// signal style-set
// IGNORE; deprecated

// signal style-updated
gi::signal_proxy<void(Gtk::Widget)> signal_style_updated()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "style-updated"); }

// signal touch-event
// SKIP; object type  not supported

// signal unmap
gi::signal_proxy<void(Gtk::Widget)> signal_unmap()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "unmap"); }

// signal unmap-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventAny event)> signal_unmap_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventAny event)> (*this, "unmap-event"); }

// signal unrealize
gi::signal_proxy<void(Gtk::Widget)> signal_unrealize()
{ return gi::signal_proxy<void(Gtk::Widget)> (*this, "unrealize"); }

// signal visibility-notify-event
// IGNORE; deprecated

// signal window-state-event
gi::signal_proxy<bool(Gtk::Widget, Gdk::EventWindowState event)> signal_window_state_event()
{ return gi::signal_proxy<bool(Gtk::Widget, Gdk::EventWindowState event)> (*this, "window-state-event"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_def.hpp>)
#include <gtk/widget_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widget_extra.hpp>)
#include <gtk/widget_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Widget : public GI_GTK_WIDGET_BASE
{ typedef GI_GTK_WIDGET_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWidget>
{ typedef Gtk::Widget type; }; 

} // namespace repository

} // namespace gi

#include "buildable.hpp"

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WidgetClassDef
{
typedef WidgetClassDef self;
public:
typedef Gtk::Widget instance_type;
typedef ::GtkWidgetClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Widget::adjust_baseline_allocation (GtkWidget* widget, gint* baseline);
// void Widget::adjust_baseline_allocation (::GtkWidget* widget, gint baseline);
// SKIP; inconsistent in baseline pointer depth (1 vs 0)

// void Widget::adjust_baseline_request (GtkWidget* widget, gint* minimum_baseline, gint* natural_baseline);
// void Widget::adjust_baseline_request (::GtkWidget* widget, gint minimum_baseline, gint natural_baseline);
// SKIP; inconsistent in natural_baseline pointer depth (1 vs 0), inconsistent in minimum_baseline pointer depth (1 vs 0)

// void Widget::adjust_size_allocation (GtkWidget* widget, GtkOrientation orientation, gint* minimum_size, gint* natural_size, gint* allocated_pos, gint* allocated_size);
// void Widget::adjust_size_allocation (::GtkWidget* widget, ::GtkOrientation orientation, gint minimum_size, gint natural_size, gint allocated_pos, gint allocated_size);
// SKIP; inconsistent in allocated_size pointer depth (1 vs 0), inconsistent in allocated_pos pointer depth (1 vs 0), inconsistent in natural_size pointer depth (1 vs 0), inconsistent in minimum_size pointer depth (1 vs 0)

// void Widget::adjust_size_request (GtkWidget* widget, GtkOrientation orientation, gint* minimum_size, gint* natural_size);
// void Widget::adjust_size_request (::GtkWidget* widget, ::GtkOrientation orientation, gint minimum_size, gint natural_size);
// SKIP; inconsistent in natural_size pointer depth (1 vs 0), inconsistent in minimum_size pointer depth (1 vs 0)

// gboolean Widget::button_press_event (GtkWidget* widget, GdkEventButton* event);
// gboolean Widget::button_press_event (::GtkWidget* widget, ::GdkEventButton* event);
virtual bool button_press_event_ (Gdk::EventButton event) noexcept = 0;

// gboolean Widget::button_release_event (GtkWidget* widget, GdkEventButton* event);
// gboolean Widget::button_release_event (::GtkWidget* widget, ::GdkEventButton* event);
virtual bool button_release_event_ (Gdk::EventButton event) noexcept = 0;

// gboolean Widget::can_activate_accel (GtkWidget* widget, guint signal_id);
// gboolean Widget::can_activate_accel (::GtkWidget* widget, guint signal_id);
virtual bool can_activate_accel_ (guint signal_id) noexcept = 0;

// void Widget::child_notify (GtkWidget* widget, GParamSpec* child_property);
// void Widget::child_notify (::GtkWidget* widget, ::GParamSpec* child_property);
virtual void child_notify_ (GObject::ParamSpec child_property) noexcept = 0;

// void Widget::composited_changed (GtkWidget* widget);
// void Widget::composited_changed (::GtkWidget* widget);
virtual void composited_changed_ () noexcept = 0;

// void Widget::compute_expand (GtkWidget* widget, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent in vexpand_p pointer depth (1 vs 0), inconsistent in hexpand_p pointer depth (1 vs 0)

// gboolean Widget::configure_event (GtkWidget* widget, GdkEventConfigure* event);
// gboolean Widget::configure_event (::GtkWidget* widget, ::GdkEventConfigure* event);
virtual bool configure_event_ (Gdk::EventConfigure event) noexcept = 0;

// gboolean Widget::damage_event (GtkWidget* widget, GdkEventExpose* event);
// gboolean Widget::damage_event (::GtkWidget* widget, ::GdkEventExpose* event);
virtual bool damage_event_ (Gdk::EventExpose event) noexcept = 0;

// gboolean Widget::delete_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::delete_event (::GtkWidget* widget, ::GdkEventAny* event);
virtual bool delete_event_ (Gdk::EventAny event) noexcept = 0;

// void Widget::destroy (GtkWidget* widget);
// void Widget::destroy (::GtkWidget* widget);
virtual void destroy_ () noexcept = 0;

// gboolean Widget::destroy_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::destroy_event (::GtkWidget* widget, ::GdkEventAny* event);
virtual bool destroy_event_ (Gdk::EventAny event) noexcept = 0;

// void Widget::direction_changed (GtkWidget* widget, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget, ::GtkTextDirection previous_direction);
virtual void direction_changed_ (Gtk::TextDirection previous_direction) noexcept = 0;

// void Widget::dispatch_child_properties_changed (GtkWidget* widget, guint n_pspecs, GParamSpec** pspecs);
// void Widget::dispatch_child_properties_changed (::GtkWidget* widget, guint n_pspecs, ::GParamSpec* pspecs);
// SKIP; inconsistent in pspecs pointer depth (2 vs 1)

// void Widget::drag_begin (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_begin (::GtkWidget* widget, ::GdkDragContext* context);
virtual void drag_begin_ (Gdk::DragContext context) noexcept = 0;

// void Widget::drag_data_delete (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_data_delete (::GtkWidget* widget, ::GdkDragContext* context);
virtual void drag_data_delete_ (Gdk::DragContext context) noexcept = 0;

// void Widget::drag_data_get (GtkWidget* widget, GdkDragContext* context, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_get (::GtkWidget* widget, ::GdkDragContext* context, ::GtkSelectionData* selection_data, guint info, guint time_);
virtual void drag_data_get_ (Gdk::DragContext context, Gtk::SelectionData selection_data, guint info, guint time_) noexcept = 0;

// void Widget::drag_data_received (GtkWidget* widget, GdkDragContext* context, gint x, gint y, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_received (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, ::GtkSelectionData* selection_data, guint info, guint time_);
virtual void drag_data_received_ (Gdk::DragContext context, gint x, gint y, Gtk::SelectionData selection_data, guint info, guint time_) noexcept = 0;

// gboolean Widget::drag_drop (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_drop (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
virtual bool drag_drop_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept = 0;

// void Widget::drag_end (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_end (::GtkWidget* widget, ::GdkDragContext* context);
virtual void drag_end_ (Gdk::DragContext context) noexcept = 0;

// gboolean Widget::drag_failed (GtkWidget* widget, GdkDragContext* context, GtkDragResult result);
// gboolean Widget::drag_failed (::GtkWidget* widget, ::GdkDragContext* context, ::GtkDragResult result);
virtual bool drag_failed_ (Gdk::DragContext context, Gtk::DragResult result) noexcept = 0;

// void Widget::drag_leave (GtkWidget* widget, GdkDragContext* context, guint time_);
// void Widget::drag_leave (::GtkWidget* widget, ::GdkDragContext* context, guint time_);
virtual void drag_leave_ (Gdk::DragContext context, guint time_) noexcept = 0;

// gboolean Widget::drag_motion (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_motion (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
virtual bool drag_motion_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept = 0;

// gboolean Widget::draw (GtkWidget* widget, cairo_t* cr);
// gboolean Widget::draw (::GtkWidget* widget, ::cairo_t* cr);
virtual bool draw_ (cairo::Context cr) noexcept = 0;

// gboolean Widget::enter_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::enter_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
virtual bool enter_notify_event_ (Gdk::EventCrossing event) noexcept = 0;

// gboolean Widget::event (GtkWidget* widget, GdkEvent* event);
// gboolean Widget::event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::focus (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget, ::GtkDirectionType direction);
virtual bool focus_ (Gtk::DirectionType direction) noexcept = 0;

// gboolean Widget::focus_in_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_in_event (::GtkWidget* widget, ::GdkEventFocus* event);
virtual bool focus_in_event_ (Gdk::EventFocus event) noexcept = 0;

// gboolean Widget::focus_out_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_out_event (::GtkWidget* widget, ::GdkEventFocus* event);
virtual bool focus_out_event_ (Gdk::EventFocus event) noexcept = 0;

// AtkObject* Widget::get_accessible (GtkWidget* widget);
// ::AtkObject* Widget::get_accessible (::GtkWidget* widget);
virtual Atk::Object get_accessible_ () noexcept = 0;

// void Widget::get_preferred_height (GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void Widget::get_preferred_height (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_height_and_baseline_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// void Widget::get_preferred_height_and_baseline_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_height_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void Widget::get_preferred_height_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_width (GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void Widget::get_preferred_width (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_width_for_height (GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void Widget::get_preferred_width_for_height (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode Widget::get_request_mode (GtkWidget* widget);
// ::GtkSizeRequestMode Widget::get_request_mode (::GtkWidget* widget);
virtual Gtk::SizeRequestMode get_request_mode_ () noexcept = 0;

// gboolean Widget::grab_broken_event (GtkWidget* widget, GdkEventGrabBroken* event);
// gboolean Widget::grab_broken_event (::GtkWidget* widget, ::GdkEventGrabBroken* event);
virtual bool grab_broken_event_ (Gdk::EventGrabBroken event) noexcept = 0;

// void Widget::grab_focus (GtkWidget* widget);
// void Widget::grab_focus (::GtkWidget* widget);
virtual void grab_focus_ () noexcept = 0;

// void Widget::grab_notify (GtkWidget* widget, gboolean was_grabbed);
// void Widget::grab_notify (::GtkWidget* widget, gboolean was_grabbed);
virtual void grab_notify_ (gboolean was_grabbed) noexcept = 0;

// void Widget::hide (GtkWidget* widget);
// void Widget::hide (::GtkWidget* widget);
virtual void hide_ () noexcept = 0;

// void Widget::hierarchy_changed (GtkWidget* widget, GtkWidget* previous_toplevel);
// void Widget::hierarchy_changed (::GtkWidget* widget, ::GtkWidget* previous_toplevel);
virtual void hierarchy_changed_ (Gtk::Widget previous_toplevel) noexcept = 0;

// gboolean Widget::key_press_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_press_event (::GtkWidget* widget, ::GdkEventKey* event);
virtual bool key_press_event_ (Gdk::EventKey event) noexcept = 0;

// gboolean Widget::key_release_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_release_event (::GtkWidget* widget, ::GdkEventKey* event);
virtual bool key_release_event_ (Gdk::EventKey event) noexcept = 0;

// gboolean Widget::keynav_failed (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget, ::GtkDirectionType direction);
virtual bool keynav_failed_ (Gtk::DirectionType direction) noexcept = 0;

// gboolean Widget::leave_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::leave_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
virtual bool leave_notify_event_ (Gdk::EventCrossing event) noexcept = 0;

// void Widget::map (GtkWidget* widget);
// void Widget::map (::GtkWidget* widget);
virtual void map_ () noexcept = 0;

// gboolean Widget::map_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::map_event (::GtkWidget* widget, ::GdkEventAny* event);
virtual bool map_event_ (Gdk::EventAny event) noexcept = 0;

// gboolean Widget::mnemonic_activate (GtkWidget* widget, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget, gboolean group_cycling);
virtual bool mnemonic_activate_ (gboolean group_cycling) noexcept = 0;

// gboolean Widget::motion_notify_event (GtkWidget* widget, GdkEventMotion* event);
// gboolean Widget::motion_notify_event (::GtkWidget* widget, ::GdkEventMotion* event);
virtual bool motion_notify_event_ (Gdk::EventMotion event) noexcept = 0;

// void Widget::move_focus (GtkWidget* widget, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget, ::GtkDirectionType direction);
virtual void move_focus_ (Gtk::DirectionType direction) noexcept = 0;

// void Widget::parent_set (GtkWidget* widget, GtkWidget* previous_parent);
// void Widget::parent_set (::GtkWidget* widget, ::GtkWidget* previous_parent);
virtual void parent_set_ (Gtk::Widget previous_parent) noexcept = 0;

// gboolean Widget::popup_menu (GtkWidget* widget);
// gboolean Widget::popup_menu (::GtkWidget* widget);
virtual bool popup_menu_ () noexcept = 0;

// gboolean Widget::property_notify_event (GtkWidget* widget, GdkEventProperty* event);
// gboolean Widget::property_notify_event (::GtkWidget* widget, ::GdkEventProperty* event);
virtual bool property_notify_event_ (Gdk::EventProperty event) noexcept = 0;

// gboolean Widget::proximity_in_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_in_event (::GtkWidget* widget, ::GdkEventProximity* event);
virtual bool proximity_in_event_ (Gdk::EventProximity event) noexcept = 0;

// gboolean Widget::proximity_out_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_out_event (::GtkWidget* widget, ::GdkEventProximity* event);
virtual bool proximity_out_event_ (Gdk::EventProximity event) noexcept = 0;

// gboolean Widget::query_tooltip (GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, GtkTooltip* tooltip);
// gboolean Widget::query_tooltip (::GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip);
virtual bool query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept = 0;

// void Widget::queue_draw_region (GtkWidget* widget, const cairo_region_t* region);
// void Widget::queue_draw_region (::GtkWidget* widget, const ::cairo_region_t* region);
virtual void queue_draw_region_ (const cairo::Region & region) noexcept = 0;

// void Widget::realize (GtkWidget* widget);
// void Widget::realize (::GtkWidget* widget);
virtual void realize_ () noexcept = 0;

// void Widget::screen_changed (GtkWidget* widget, GdkScreen* previous_screen);
// void Widget::screen_changed (::GtkWidget* widget, ::GdkScreen* previous_screen);
virtual void screen_changed_ (Gdk::Screen previous_screen) noexcept = 0;

// gboolean Widget::scroll_event (GtkWidget* widget, GdkEventScroll* event);
// gboolean Widget::scroll_event (::GtkWidget* widget, ::GdkEventScroll* event);
virtual bool scroll_event_ (Gdk::EventScroll event) noexcept = 0;

// gboolean Widget::selection_clear_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_clear_event (::GtkWidget* widget, ::GdkEventSelection* event);
virtual bool selection_clear_event_ (Gdk::EventSelection event) noexcept = 0;

// void Widget::selection_get (GtkWidget* widget, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::selection_get (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint info, guint time_);
virtual void selection_get_ (Gtk::SelectionData selection_data, guint info, guint time_) noexcept = 0;

// gboolean Widget::selection_notify_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_notify_event (::GtkWidget* widget, ::GdkEventSelection* event);
virtual bool selection_notify_event_ (Gdk::EventSelection event) noexcept = 0;

// void Widget::selection_received (GtkWidget* widget, GtkSelectionData* selection_data, guint time_);
// void Widget::selection_received (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint time_);
virtual void selection_received_ (Gtk::SelectionData selection_data, guint time_) noexcept = 0;

// gboolean Widget::selection_request_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_request_event (::GtkWidget* widget, ::GdkEventSelection* event);
virtual bool selection_request_event_ (Gdk::EventSelection event) noexcept = 0;

// void Widget::show (GtkWidget* widget);
// void Widget::show (::GtkWidget* widget);
virtual void show_ () noexcept = 0;

// void Widget::show_all (GtkWidget* widget);
// void Widget::show_all (::GtkWidget* widget);
virtual void show_all_ () noexcept = 0;

// gboolean Widget::show_help (GtkWidget* widget, GtkWidgetHelpType help_type);
// gboolean Widget::show_help (::GtkWidget* widget, ::GtkWidgetHelpType help_type);
virtual bool show_help_ (Gtk::WidgetHelpType help_type) noexcept = 0;

// void Widget::size_allocate (GtkWidget* widget, GtkAllocation* allocation);
// void Widget::size_allocate (::GtkWidget* widget, ::GtkAllocation* allocation);
virtual void size_allocate_ (Gtk::Allocation allocation) noexcept = 0;

// void Widget::state_changed (GtkWidget* widget, GtkStateType previous_state);
// void Widget::state_changed (::GtkWidget* widget,  previous_state);
// SKIP; previous_state type  not supported

// void Widget::state_flags_changed (GtkWidget* widget, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget, ::GtkStateFlags previous_state_flags);
virtual void state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept = 0;

// void Widget::style_set (GtkWidget* widget, GtkStyle* previous_style);
// void Widget::style_set (::GtkWidget* widget, ::GtkStyle* previous_style);
virtual void style_set_ (Gtk::Style previous_style) noexcept = 0;

// void Widget::style_updated (GtkWidget* widget);
// void Widget::style_updated (::GtkWidget* widget);
virtual void style_updated_ () noexcept = 0;

// gboolean Widget::touch_event (GtkWidget* widget, GdkEventTouch* event);
// gboolean Widget::touch_event (::GtkWidget* widget, ::GdkEventTouch* event);
virtual bool touch_event_ (Gdk::EventTouch event) noexcept = 0;

// void Widget::unmap (GtkWidget* widget);
// void Widget::unmap (::GtkWidget* widget);
virtual void unmap_ () noexcept = 0;

// gboolean Widget::unmap_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::unmap_event (::GtkWidget* widget, ::GdkEventAny* event);
virtual bool unmap_event_ (Gdk::EventAny event) noexcept = 0;

// void Widget::unrealize (GtkWidget* widget);
// void Widget::unrealize (::GtkWidget* widget);
virtual void unrealize_ () noexcept = 0;

// gboolean Widget::visibility_notify_event (GtkWidget* widget, GdkEventVisibility* event);
// gboolean Widget::visibility_notify_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::window_state_event (GtkWidget* widget, GdkEventWindowState* event);
// gboolean Widget::window_state_event (::GtkWidget* widget, ::GdkEventWindowState* event);
virtual bool window_state_event_ (Gdk::EventWindowState event) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WidgetClass: public detail::ClassTemplate<Gtk::impl::internal::WidgetClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl>
{
typedef WidgetClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WidgetClassDef, GObject::impl::internal::InitiallyUnownedClass, Gtk::impl::internal::BuildableIfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gtk::impl::internal::BuildableIfaceClassImpl GtkBuildableIface_type;


// void Widget::adjust_baseline_allocation (GtkWidget* widget, gint* baseline);
// void Widget::adjust_baseline_allocation (::GtkWidget* widget, gint baseline);
// SKIP; inconsistent in baseline pointer depth (1 vs 0)

// void Widget::adjust_baseline_request (GtkWidget* widget, gint* minimum_baseline, gint* natural_baseline);
// void Widget::adjust_baseline_request (::GtkWidget* widget, gint minimum_baseline, gint natural_baseline);
// SKIP; inconsistent in natural_baseline pointer depth (1 vs 0), inconsistent in minimum_baseline pointer depth (1 vs 0)

// void Widget::adjust_size_allocation (GtkWidget* widget, GtkOrientation orientation, gint* minimum_size, gint* natural_size, gint* allocated_pos, gint* allocated_size);
// void Widget::adjust_size_allocation (::GtkWidget* widget, ::GtkOrientation orientation, gint minimum_size, gint natural_size, gint allocated_pos, gint allocated_size);
// SKIP; inconsistent in allocated_size pointer depth (1 vs 0), inconsistent in allocated_pos pointer depth (1 vs 0), inconsistent in natural_size pointer depth (1 vs 0), inconsistent in minimum_size pointer depth (1 vs 0)

// void Widget::adjust_size_request (GtkWidget* widget, GtkOrientation orientation, gint* minimum_size, gint* natural_size);
// void Widget::adjust_size_request (::GtkWidget* widget, ::GtkOrientation orientation, gint minimum_size, gint natural_size);
// SKIP; inconsistent in natural_size pointer depth (1 vs 0), inconsistent in minimum_size pointer depth (1 vs 0)

// gboolean Widget::button_press_event (GtkWidget* widget, GdkEventButton* event);
// gboolean Widget::button_press_event (::GtkWidget* widget, ::GdkEventButton* event);
GI_INLINE_DECL bool button_press_event_ (Gdk::EventButton event) noexcept override;

// gboolean Widget::button_release_event (GtkWidget* widget, GdkEventButton* event);
// gboolean Widget::button_release_event (::GtkWidget* widget, ::GdkEventButton* event);
GI_INLINE_DECL bool button_release_event_ (Gdk::EventButton event) noexcept override;

// gboolean Widget::can_activate_accel (GtkWidget* widget, guint signal_id);
// gboolean Widget::can_activate_accel (::GtkWidget* widget, guint signal_id);
GI_INLINE_DECL bool can_activate_accel_ (guint signal_id) noexcept override;

// void Widget::child_notify (GtkWidget* widget, GParamSpec* child_property);
// void Widget::child_notify (::GtkWidget* widget, ::GParamSpec* child_property);
GI_INLINE_DECL void child_notify_ (GObject::ParamSpec child_property) noexcept override;

// void Widget::composited_changed (GtkWidget* widget);
// void Widget::composited_changed (::GtkWidget* widget);
GI_INLINE_DECL void composited_changed_ () noexcept override;

// void Widget::compute_expand (GtkWidget* widget, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent in vexpand_p pointer depth (1 vs 0), inconsistent in hexpand_p pointer depth (1 vs 0)

// gboolean Widget::configure_event (GtkWidget* widget, GdkEventConfigure* event);
// gboolean Widget::configure_event (::GtkWidget* widget, ::GdkEventConfigure* event);
GI_INLINE_DECL bool configure_event_ (Gdk::EventConfigure event) noexcept override;

// gboolean Widget::damage_event (GtkWidget* widget, GdkEventExpose* event);
// gboolean Widget::damage_event (::GtkWidget* widget, ::GdkEventExpose* event);
GI_INLINE_DECL bool damage_event_ (Gdk::EventExpose event) noexcept override;

// gboolean Widget::delete_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::delete_event (::GtkWidget* widget, ::GdkEventAny* event);
GI_INLINE_DECL bool delete_event_ (Gdk::EventAny event) noexcept override;

// void Widget::destroy (GtkWidget* widget);
// void Widget::destroy (::GtkWidget* widget);
GI_INLINE_DECL void destroy_ () noexcept override;

// gboolean Widget::destroy_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::destroy_event (::GtkWidget* widget, ::GdkEventAny* event);
GI_INLINE_DECL bool destroy_event_ (Gdk::EventAny event) noexcept override;

// void Widget::direction_changed (GtkWidget* widget, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget, ::GtkTextDirection previous_direction);
GI_INLINE_DECL void direction_changed_ (Gtk::TextDirection previous_direction) noexcept override;

// void Widget::dispatch_child_properties_changed (GtkWidget* widget, guint n_pspecs, GParamSpec** pspecs);
// void Widget::dispatch_child_properties_changed (::GtkWidget* widget, guint n_pspecs, ::GParamSpec* pspecs);
// SKIP; inconsistent in pspecs pointer depth (2 vs 1)

// void Widget::drag_begin (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_begin (::GtkWidget* widget, ::GdkDragContext* context);
GI_INLINE_DECL void drag_begin_ (Gdk::DragContext context) noexcept override;

// void Widget::drag_data_delete (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_data_delete (::GtkWidget* widget, ::GdkDragContext* context);
GI_INLINE_DECL void drag_data_delete_ (Gdk::DragContext context) noexcept override;

// void Widget::drag_data_get (GtkWidget* widget, GdkDragContext* context, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_get (::GtkWidget* widget, ::GdkDragContext* context, ::GtkSelectionData* selection_data, guint info, guint time_);
GI_INLINE_DECL void drag_data_get_ (Gdk::DragContext context, Gtk::SelectionData selection_data, guint info, guint time_) noexcept override;

// void Widget::drag_data_received (GtkWidget* widget, GdkDragContext* context, gint x, gint y, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_received (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, ::GtkSelectionData* selection_data, guint info, guint time_);
GI_INLINE_DECL void drag_data_received_ (Gdk::DragContext context, gint x, gint y, Gtk::SelectionData selection_data, guint info, guint time_) noexcept override;

// gboolean Widget::drag_drop (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_drop (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
GI_INLINE_DECL bool drag_drop_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept override;

// void Widget::drag_end (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_end (::GtkWidget* widget, ::GdkDragContext* context);
GI_INLINE_DECL void drag_end_ (Gdk::DragContext context) noexcept override;

// gboolean Widget::drag_failed (GtkWidget* widget, GdkDragContext* context, GtkDragResult result);
// gboolean Widget::drag_failed (::GtkWidget* widget, ::GdkDragContext* context, ::GtkDragResult result);
GI_INLINE_DECL bool drag_failed_ (Gdk::DragContext context, Gtk::DragResult result) noexcept override;

// void Widget::drag_leave (GtkWidget* widget, GdkDragContext* context, guint time_);
// void Widget::drag_leave (::GtkWidget* widget, ::GdkDragContext* context, guint time_);
GI_INLINE_DECL void drag_leave_ (Gdk::DragContext context, guint time_) noexcept override;

// gboolean Widget::drag_motion (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_motion (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
GI_INLINE_DECL bool drag_motion_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept override;

// gboolean Widget::draw (GtkWidget* widget, cairo_t* cr);
// gboolean Widget::draw (::GtkWidget* widget, ::cairo_t* cr);
GI_INLINE_DECL bool draw_ (cairo::Context cr) noexcept override;

// gboolean Widget::enter_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::enter_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
GI_INLINE_DECL bool enter_notify_event_ (Gdk::EventCrossing event) noexcept override;

// gboolean Widget::event (GtkWidget* widget, GdkEvent* event);
// gboolean Widget::event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::focus (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget, ::GtkDirectionType direction);
GI_INLINE_DECL bool focus_ (Gtk::DirectionType direction) noexcept override;

// gboolean Widget::focus_in_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_in_event (::GtkWidget* widget, ::GdkEventFocus* event);
GI_INLINE_DECL bool focus_in_event_ (Gdk::EventFocus event) noexcept override;

// gboolean Widget::focus_out_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_out_event (::GtkWidget* widget, ::GdkEventFocus* event);
GI_INLINE_DECL bool focus_out_event_ (Gdk::EventFocus event) noexcept override;

// AtkObject* Widget::get_accessible (GtkWidget* widget);
// ::AtkObject* Widget::get_accessible (::GtkWidget* widget);
GI_INLINE_DECL Atk::Object get_accessible_ () noexcept override;

// void Widget::get_preferred_height (GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void Widget::get_preferred_height (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_height_and_baseline_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// void Widget::get_preferred_height_and_baseline_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_height_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void Widget::get_preferred_height_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_width (GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void Widget::get_preferred_width (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// void Widget::get_preferred_width_for_height (GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void Widget::get_preferred_width_for_height (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// SKIP; virtual-method out parameter not supported, virtual-method out parameter not supported

// GtkSizeRequestMode Widget::get_request_mode (GtkWidget* widget);
// ::GtkSizeRequestMode Widget::get_request_mode (::GtkWidget* widget);
GI_INLINE_DECL Gtk::SizeRequestMode get_request_mode_ () noexcept override;

// gboolean Widget::grab_broken_event (GtkWidget* widget, GdkEventGrabBroken* event);
// gboolean Widget::grab_broken_event (::GtkWidget* widget, ::GdkEventGrabBroken* event);
GI_INLINE_DECL bool grab_broken_event_ (Gdk::EventGrabBroken event) noexcept override;

// void Widget::grab_focus (GtkWidget* widget);
// void Widget::grab_focus (::GtkWidget* widget);
GI_INLINE_DECL void grab_focus_ () noexcept override;

// void Widget::grab_notify (GtkWidget* widget, gboolean was_grabbed);
// void Widget::grab_notify (::GtkWidget* widget, gboolean was_grabbed);
GI_INLINE_DECL void grab_notify_ (gboolean was_grabbed) noexcept override;

// void Widget::hide (GtkWidget* widget);
// void Widget::hide (::GtkWidget* widget);
GI_INLINE_DECL void hide_ () noexcept override;

// void Widget::hierarchy_changed (GtkWidget* widget, GtkWidget* previous_toplevel);
// void Widget::hierarchy_changed (::GtkWidget* widget, ::GtkWidget* previous_toplevel);
GI_INLINE_DECL void hierarchy_changed_ (Gtk::Widget previous_toplevel) noexcept override;

// gboolean Widget::key_press_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_press_event (::GtkWidget* widget, ::GdkEventKey* event);
GI_INLINE_DECL bool key_press_event_ (Gdk::EventKey event) noexcept override;

// gboolean Widget::key_release_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_release_event (::GtkWidget* widget, ::GdkEventKey* event);
GI_INLINE_DECL bool key_release_event_ (Gdk::EventKey event) noexcept override;

// gboolean Widget::keynav_failed (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget, ::GtkDirectionType direction);
GI_INLINE_DECL bool keynav_failed_ (Gtk::DirectionType direction) noexcept override;

// gboolean Widget::leave_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::leave_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
GI_INLINE_DECL bool leave_notify_event_ (Gdk::EventCrossing event) noexcept override;

// void Widget::map (GtkWidget* widget);
// void Widget::map (::GtkWidget* widget);
GI_INLINE_DECL void map_ () noexcept override;

// gboolean Widget::map_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::map_event (::GtkWidget* widget, ::GdkEventAny* event);
GI_INLINE_DECL bool map_event_ (Gdk::EventAny event) noexcept override;

// gboolean Widget::mnemonic_activate (GtkWidget* widget, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget, gboolean group_cycling);
GI_INLINE_DECL bool mnemonic_activate_ (gboolean group_cycling) noexcept override;

// gboolean Widget::motion_notify_event (GtkWidget* widget, GdkEventMotion* event);
// gboolean Widget::motion_notify_event (::GtkWidget* widget, ::GdkEventMotion* event);
GI_INLINE_DECL bool motion_notify_event_ (Gdk::EventMotion event) noexcept override;

// void Widget::move_focus (GtkWidget* widget, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget, ::GtkDirectionType direction);
GI_INLINE_DECL void move_focus_ (Gtk::DirectionType direction) noexcept override;

// void Widget::parent_set (GtkWidget* widget, GtkWidget* previous_parent);
// void Widget::parent_set (::GtkWidget* widget, ::GtkWidget* previous_parent);
GI_INLINE_DECL void parent_set_ (Gtk::Widget previous_parent) noexcept override;

// gboolean Widget::popup_menu (GtkWidget* widget);
// gboolean Widget::popup_menu (::GtkWidget* widget);
GI_INLINE_DECL bool popup_menu_ () noexcept override;

// gboolean Widget::property_notify_event (GtkWidget* widget, GdkEventProperty* event);
// gboolean Widget::property_notify_event (::GtkWidget* widget, ::GdkEventProperty* event);
GI_INLINE_DECL bool property_notify_event_ (Gdk::EventProperty event) noexcept override;

// gboolean Widget::proximity_in_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_in_event (::GtkWidget* widget, ::GdkEventProximity* event);
GI_INLINE_DECL bool proximity_in_event_ (Gdk::EventProximity event) noexcept override;

// gboolean Widget::proximity_out_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_out_event (::GtkWidget* widget, ::GdkEventProximity* event);
GI_INLINE_DECL bool proximity_out_event_ (Gdk::EventProximity event) noexcept override;

// gboolean Widget::query_tooltip (GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, GtkTooltip* tooltip);
// gboolean Widget::query_tooltip (::GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip);
GI_INLINE_DECL bool query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept override;

// void Widget::queue_draw_region (GtkWidget* widget, const cairo_region_t* region);
// void Widget::queue_draw_region (::GtkWidget* widget, const ::cairo_region_t* region);
GI_INLINE_DECL void queue_draw_region_ (const cairo::Region & region) noexcept override;

// void Widget::realize (GtkWidget* widget);
// void Widget::realize (::GtkWidget* widget);
GI_INLINE_DECL void realize_ () noexcept override;

// void Widget::screen_changed (GtkWidget* widget, GdkScreen* previous_screen);
// void Widget::screen_changed (::GtkWidget* widget, ::GdkScreen* previous_screen);
GI_INLINE_DECL void screen_changed_ (Gdk::Screen previous_screen) noexcept override;

// gboolean Widget::scroll_event (GtkWidget* widget, GdkEventScroll* event);
// gboolean Widget::scroll_event (::GtkWidget* widget, ::GdkEventScroll* event);
GI_INLINE_DECL bool scroll_event_ (Gdk::EventScroll event) noexcept override;

// gboolean Widget::selection_clear_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_clear_event (::GtkWidget* widget, ::GdkEventSelection* event);
GI_INLINE_DECL bool selection_clear_event_ (Gdk::EventSelection event) noexcept override;

// void Widget::selection_get (GtkWidget* widget, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::selection_get (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint info, guint time_);
GI_INLINE_DECL void selection_get_ (Gtk::SelectionData selection_data, guint info, guint time_) noexcept override;

// gboolean Widget::selection_notify_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_notify_event (::GtkWidget* widget, ::GdkEventSelection* event);
GI_INLINE_DECL bool selection_notify_event_ (Gdk::EventSelection event) noexcept override;

// void Widget::selection_received (GtkWidget* widget, GtkSelectionData* selection_data, guint time_);
// void Widget::selection_received (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint time_);
GI_INLINE_DECL void selection_received_ (Gtk::SelectionData selection_data, guint time_) noexcept override;

// gboolean Widget::selection_request_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_request_event (::GtkWidget* widget, ::GdkEventSelection* event);
GI_INLINE_DECL bool selection_request_event_ (Gdk::EventSelection event) noexcept override;

// void Widget::show (GtkWidget* widget);
// void Widget::show (::GtkWidget* widget);
GI_INLINE_DECL void show_ () noexcept override;

// void Widget::show_all (GtkWidget* widget);
// void Widget::show_all (::GtkWidget* widget);
GI_INLINE_DECL void show_all_ () noexcept override;

// gboolean Widget::show_help (GtkWidget* widget, GtkWidgetHelpType help_type);
// gboolean Widget::show_help (::GtkWidget* widget, ::GtkWidgetHelpType help_type);
GI_INLINE_DECL bool show_help_ (Gtk::WidgetHelpType help_type) noexcept override;

// void Widget::size_allocate (GtkWidget* widget, GtkAllocation* allocation);
// void Widget::size_allocate (::GtkWidget* widget, ::GtkAllocation* allocation);
GI_INLINE_DECL void size_allocate_ (Gtk::Allocation allocation) noexcept override;

// void Widget::state_changed (GtkWidget* widget, GtkStateType previous_state);
// void Widget::state_changed (::GtkWidget* widget,  previous_state);
// SKIP; previous_state type  not supported

// void Widget::state_flags_changed (GtkWidget* widget, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget, ::GtkStateFlags previous_state_flags);
GI_INLINE_DECL void state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept override;

// void Widget::style_set (GtkWidget* widget, GtkStyle* previous_style);
// void Widget::style_set (::GtkWidget* widget, ::GtkStyle* previous_style);
GI_INLINE_DECL void style_set_ (Gtk::Style previous_style) noexcept override;

// void Widget::style_updated (GtkWidget* widget);
// void Widget::style_updated (::GtkWidget* widget);
GI_INLINE_DECL void style_updated_ () noexcept override;

// gboolean Widget::touch_event (GtkWidget* widget, GdkEventTouch* event);
// gboolean Widget::touch_event (::GtkWidget* widget, ::GdkEventTouch* event);
GI_INLINE_DECL bool touch_event_ (Gdk::EventTouch event) noexcept override;

// void Widget::unmap (GtkWidget* widget);
// void Widget::unmap (::GtkWidget* widget);
GI_INLINE_DECL void unmap_ () noexcept override;

// gboolean Widget::unmap_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::unmap_event (::GtkWidget* widget, ::GdkEventAny* event);
GI_INLINE_DECL bool unmap_event_ (Gdk::EventAny event) noexcept override;

// void Widget::unrealize (GtkWidget* widget);
// void Widget::unrealize (::GtkWidget* widget);
GI_INLINE_DECL void unrealize_ () noexcept override;

// gboolean Widget::visibility_notify_event (GtkWidget* widget, GdkEventVisibility* event);
// gboolean Widget::visibility_notify_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::window_state_event (GtkWidget* widget, GdkEventWindowState* event);
// gboolean Widget::window_state_event (::GtkWidget* widget, ::GdkEventWindowState* event);
GI_INLINE_DECL bool window_state_event_ (Gdk::EventWindowState event) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using WidgetImpl = detail::ObjectImpl<Widget, internal::WidgetClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
