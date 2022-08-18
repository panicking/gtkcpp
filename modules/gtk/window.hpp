// AUTO-GENERATED

#ifndef _GI_GTK_WINDOW_HPP_
#define _GI_GTK_WINDOW_HPP_

#include "bin.hpp"

namespace gi {

namespace repository {

namespace Gtk {

class AccelGroup;
class Application;
class Widget;
class WindowGroup;

class Window;

namespace base {


#define GI_GTK_WINDOW_BASE base::WindowBase
class WindowBase : public Gtk::Bin
{
typedef Gtk::Bin super_type;
public:
typedef ::GtkWindow BaseObjectType;

WindowBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_window_get_type(); } 

// GtkWidget* gtk_window_new (GtkWindowType type);
// ::GtkWindow* gtk_window_new (::GtkWindowType type);
static GI_INLINE_DECL Gtk::Window new_ (Gtk::WindowType type) noexcept;

// GList* gtk_window_get_default_icon_list ();
// ::GList* gtk_window_get_default_icon_list ();
static GI_INLINE_DECL std::vector<GdkPixbuf::Pixbuf> get_default_icon_list () noexcept;

// const gchar* gtk_window_get_default_icon_name ();
// const char* gtk_window_get_default_icon_name ();
static GI_INLINE_DECL std::string get_default_icon_name () noexcept;

// GList* gtk_window_list_toplevels ();
// ::GList* gtk_window_list_toplevels ();
static GI_INLINE_DECL std::vector<Gtk::Widget> list_toplevels () noexcept;

// void gtk_window_set_auto_startup_notification (gboolean setting);
// void gtk_window_set_auto_startup_notification (gboolean setting);
static GI_INLINE_DECL void set_auto_startup_notification (gboolean setting) noexcept;

// void gtk_window_set_default_icon (GdkPixbuf* icon);
// void gtk_window_set_default_icon (::GdkPixbuf* icon);
static GI_INLINE_DECL void set_default_icon (GdkPixbuf::Pixbuf icon) noexcept;

// gboolean gtk_window_set_default_icon_from_file (const gchar* filename, GError ** error);
// gboolean gtk_window_set_default_icon_from_file (const char* filename, GError ** error);
static GI_INLINE_DECL bool set_default_icon_from_file (const std::string & filename);
static GI_INLINE_DECL bool set_default_icon_from_file (const std::string & filename, GLib::Error * _error) noexcept;

// void gtk_window_set_default_icon_list (GList* list);
// void gtk_window_set_default_icon_list (::GList* list);
static GI_INLINE_DECL void set_default_icon_list (const std::vector<GdkPixbuf::Pixbuf> & list) noexcept;

// void gtk_window_set_default_icon_name (const gchar* name);
// void gtk_window_set_default_icon_name (const char* name);
static GI_INLINE_DECL void set_default_icon_name (const std::string & name) noexcept;

// void gtk_window_set_interactive_debugging (gboolean enable);
// void gtk_window_set_interactive_debugging (gboolean enable);
static GI_INLINE_DECL void set_interactive_debugging (gboolean enable) noexcept;

// gboolean gtk_window_activate_default (GtkWindow* window);
// gboolean gtk_window_activate_default (::GtkWindow* window);
GI_INLINE_DECL bool activate_default () noexcept;

// gboolean gtk_window_activate_focus (GtkWindow* window);
// gboolean gtk_window_activate_focus (::GtkWindow* window);
GI_INLINE_DECL bool activate_focus () noexcept;

// gboolean gtk_window_activate_key (GtkWindow* window, GdkEventKey* event);
// gboolean gtk_window_activate_key (::GtkWindow* window, ::GdkEventKey* event);
GI_INLINE_DECL bool activate_key (Gdk::EventKey event) noexcept;

// void gtk_window_add_accel_group (GtkWindow* window, GtkAccelGroup* accel_group);
// void gtk_window_add_accel_group (::GtkWindow* window, ::GtkAccelGroup* accel_group);
GI_INLINE_DECL void add_accel_group (Gtk::AccelGroup accel_group) noexcept;

// void gtk_window_add_mnemonic (GtkWindow* window, guint keyval, GtkWidget* target);
// void gtk_window_add_mnemonic (::GtkWindow* window, guint keyval, ::GtkWidget* target);
GI_INLINE_DECL void add_mnemonic (guint keyval, Gtk::Widget target) noexcept;

// void gtk_window_begin_move_drag (GtkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gtk_window_begin_move_drag (::GtkWindow* window, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_move_drag (gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gtk_window_begin_resize_drag (GtkWindow* window, GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
// void gtk_window_begin_resize_drag (::GtkWindow* window, ::GdkWindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp);
GI_INLINE_DECL void begin_resize_drag (Gdk::WindowEdge edge, gint button, gint root_x, gint root_y, guint32 timestamp) noexcept;

// void gtk_window_close (GtkWindow* window);
// void gtk_window_close (::GtkWindow* window);
GI_INLINE_DECL void close () noexcept;

// void gtk_window_deiconify (GtkWindow* window);
// void gtk_window_deiconify (::GtkWindow* window);
GI_INLINE_DECL void deiconify () noexcept;

// void gtk_window_fullscreen (GtkWindow* window);
// void gtk_window_fullscreen (::GtkWindow* window);
GI_INLINE_DECL void fullscreen () noexcept;

// void gtk_window_fullscreen_on_monitor (GtkWindow* window, GdkScreen* screen, gint monitor);
// void gtk_window_fullscreen_on_monitor (::GtkWindow* window, ::GdkScreen* screen, gint monitor);
GI_INLINE_DECL void fullscreen_on_monitor (Gdk::Screen screen, gint monitor) noexcept;

// gboolean gtk_window_get_accept_focus (GtkWindow* window);
// gboolean gtk_window_get_accept_focus (::GtkWindow* window);
GI_INLINE_DECL bool get_accept_focus () noexcept;

// GtkApplication* gtk_window_get_application (GtkWindow* window);
// ::GtkApplication* gtk_window_get_application (::GtkWindow* window);
GI_INLINE_DECL Gtk::Application get_application () noexcept;

// GtkWidget* gtk_window_get_attached_to (GtkWindow* window);
// ::GtkWidget* gtk_window_get_attached_to (::GtkWindow* window);
GI_INLINE_DECL Gtk::Widget get_attached_to () noexcept;

// gboolean gtk_window_get_decorated (GtkWindow* window);
// gboolean gtk_window_get_decorated (::GtkWindow* window);
GI_INLINE_DECL bool get_decorated () noexcept;

// void gtk_window_get_default_size (GtkWindow* window, gint* width, gint* height);
// void gtk_window_get_default_size (::GtkWindow* window, gint* width, gint* height);
GI_INLINE_DECL void get_default_size (gint * width = nullptr, gint * height = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_default_size () noexcept;

// GtkWidget* gtk_window_get_default_widget (GtkWindow* window);
// ::GtkWidget* gtk_window_get_default_widget (::GtkWindow* window);
GI_INLINE_DECL Gtk::Widget get_default_widget () noexcept;

// gboolean gtk_window_get_deletable (GtkWindow* window);
// gboolean gtk_window_get_deletable (::GtkWindow* window);
GI_INLINE_DECL bool get_deletable () noexcept;

// gboolean gtk_window_get_destroy_with_parent (GtkWindow* window);
// gboolean gtk_window_get_destroy_with_parent (::GtkWindow* window);
GI_INLINE_DECL bool get_destroy_with_parent () noexcept;

// GtkWidget* gtk_window_get_focus (GtkWindow* window);
// ::GtkWidget* gtk_window_get_focus (::GtkWindow* window);
GI_INLINE_DECL Gtk::Widget get_focus () noexcept;

// gboolean gtk_window_get_focus_on_map (GtkWindow* window);
// gboolean gtk_window_get_focus_on_map (::GtkWindow* window);
GI_INLINE_DECL bool get_focus_on_map () noexcept;

// gboolean gtk_window_get_focus_visible (GtkWindow* window);
// gboolean gtk_window_get_focus_visible (::GtkWindow* window);
GI_INLINE_DECL bool get_focus_visible () noexcept;

// GdkGravity gtk_window_get_gravity (GtkWindow* window);
// ::GdkGravity gtk_window_get_gravity (::GtkWindow* window);
GI_INLINE_DECL Gdk::Gravity get_gravity () noexcept;

// GtkWindowGroup* gtk_window_get_group (GtkWindow* window);
// ::GtkWindowGroup* gtk_window_get_group (::GtkWindow* window);
GI_INLINE_DECL Gtk::WindowGroup get_group () noexcept;

// gboolean gtk_window_get_has_resize_grip (GtkWindow* window);
// gboolean gtk_window_get_has_resize_grip (::GtkWindow* window);
// IGNORE; deprecated

// gboolean gtk_window_get_hide_titlebar_when_maximized (GtkWindow* window);
// gboolean gtk_window_get_hide_titlebar_when_maximized (::GtkWindow* window);
GI_INLINE_DECL bool get_hide_titlebar_when_maximized () noexcept;

// GdkPixbuf* gtk_window_get_icon (GtkWindow* window);
// ::GdkPixbuf* gtk_window_get_icon (::GtkWindow* window);
GI_INLINE_DECL GdkPixbuf::Pixbuf get_icon () noexcept;

// GList* gtk_window_get_icon_list (GtkWindow* window);
// ::GList* gtk_window_get_icon_list (::GtkWindow* window);
GI_INLINE_DECL std::vector<GdkPixbuf::Pixbuf> get_icon_list () noexcept;

// const gchar* gtk_window_get_icon_name (GtkWindow* window);
// const char* gtk_window_get_icon_name (::GtkWindow* window);
GI_INLINE_DECL std::string get_icon_name () noexcept;

// GdkModifierType gtk_window_get_mnemonic_modifier (GtkWindow* window);
// ::GdkModifierType gtk_window_get_mnemonic_modifier (::GtkWindow* window);
GI_INLINE_DECL Gdk::ModifierType get_mnemonic_modifier () noexcept;

// gboolean gtk_window_get_mnemonics_visible (GtkWindow* window);
// gboolean gtk_window_get_mnemonics_visible (::GtkWindow* window);
GI_INLINE_DECL bool get_mnemonics_visible () noexcept;

// gboolean gtk_window_get_modal (GtkWindow* window);
// gboolean gtk_window_get_modal (::GtkWindow* window);
GI_INLINE_DECL bool get_modal () noexcept;

// gdouble gtk_window_get_opacity (GtkWindow* window);
// gdouble gtk_window_get_opacity (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_get_position (GtkWindow* window, gint* root_x, gint* root_y);
// void gtk_window_get_position (::GtkWindow* window, gint* root_x, gint* root_y);
GI_INLINE_DECL void get_position (gint * root_x = nullptr, gint * root_y = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_position () noexcept;

// gboolean gtk_window_get_resizable (GtkWindow* window);
// gboolean gtk_window_get_resizable (::GtkWindow* window);
GI_INLINE_DECL bool get_resizable () noexcept;

// gboolean gtk_window_get_resize_grip_area (GtkWindow* window, GdkRectangle* rect);
// gboolean gtk_window_get_resize_grip_area (::GtkWindow* window, ::GdkRectangle* rect);
// IGNORE; deprecated

// const gchar* gtk_window_get_role (GtkWindow* window);
// const char* gtk_window_get_role (::GtkWindow* window);
GI_INLINE_DECL std::string get_role () noexcept;

// GdkScreen* gtk_window_get_screen (GtkWindow* window);
// ::GdkScreen* gtk_window_get_screen (::GtkWindow* window);
GI_INLINE_DECL Gdk::Screen get_screen () noexcept;

// void gtk_window_get_size (GtkWindow* window, gint* width, gint* height);
// void gtk_window_get_size (::GtkWindow* window, gint* width, gint* height);
GI_INLINE_DECL void get_size (gint & width, gint & height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_size () noexcept;

// gboolean gtk_window_get_skip_pager_hint (GtkWindow* window);
// gboolean gtk_window_get_skip_pager_hint (::GtkWindow* window);
GI_INLINE_DECL bool get_skip_pager_hint () noexcept;

// gboolean gtk_window_get_skip_taskbar_hint (GtkWindow* window);
// gboolean gtk_window_get_skip_taskbar_hint (::GtkWindow* window);
GI_INLINE_DECL bool get_skip_taskbar_hint () noexcept;

// const gchar* gtk_window_get_title (GtkWindow* window);
// const char* gtk_window_get_title (::GtkWindow* window);
GI_INLINE_DECL std::string get_title () noexcept;

// GtkWidget* gtk_window_get_titlebar (GtkWindow* window);
// ::GtkWidget* gtk_window_get_titlebar (::GtkWindow* window);
GI_INLINE_DECL Gtk::Widget get_titlebar () noexcept;

// GtkWindow* gtk_window_get_transient_for (GtkWindow* window);
// ::GtkWindow* gtk_window_get_transient_for (::GtkWindow* window);
GI_INLINE_DECL Gtk::Window get_transient_for () noexcept;

// GdkWindowTypeHint gtk_window_get_type_hint (GtkWindow* window);
// ::GdkWindowTypeHint gtk_window_get_type_hint (::GtkWindow* window);
GI_INLINE_DECL Gdk::WindowTypeHint get_type_hint () noexcept;

// gboolean gtk_window_get_urgency_hint (GtkWindow* window);
// gboolean gtk_window_get_urgency_hint (::GtkWindow* window);
GI_INLINE_DECL bool get_urgency_hint () noexcept;

// GtkWindowType gtk_window_get_window_type (GtkWindow* window);
// ::GtkWindowType gtk_window_get_window_type (::GtkWindow* window);
GI_INLINE_DECL Gtk::WindowType get_window_type () noexcept;

// gboolean gtk_window_has_group (GtkWindow* window);
// gboolean gtk_window_has_group (::GtkWindow* window);
GI_INLINE_DECL bool has_group () noexcept;

// gboolean gtk_window_has_toplevel_focus (GtkWindow* window);
// gboolean gtk_window_has_toplevel_focus (::GtkWindow* window);
GI_INLINE_DECL bool has_toplevel_focus () noexcept;

// void gtk_window_iconify (GtkWindow* window);
// void gtk_window_iconify (::GtkWindow* window);
GI_INLINE_DECL void iconify () noexcept;

// gboolean gtk_window_is_active (GtkWindow* window);
// gboolean gtk_window_is_active (::GtkWindow* window);
GI_INLINE_DECL bool is_active () noexcept;

// gboolean gtk_window_is_maximized (GtkWindow* window);
// gboolean gtk_window_is_maximized (::GtkWindow* window);
GI_INLINE_DECL bool is_maximized () noexcept;

// void gtk_window_maximize (GtkWindow* window);
// void gtk_window_maximize (::GtkWindow* window);
GI_INLINE_DECL void maximize () noexcept;

// gboolean gtk_window_mnemonic_activate (GtkWindow* window, guint keyval, GdkModifierType modifier);
// gboolean gtk_window_mnemonic_activate (::GtkWindow* window, guint keyval, ::GdkModifierType modifier);
GI_INLINE_DECL bool mnemonic_activate (guint keyval, Gdk::ModifierType modifier) noexcept;

// void gtk_window_move (GtkWindow* window, gint x, gint y);
// void gtk_window_move (::GtkWindow* window, gint x, gint y);
GI_INLINE_DECL void move (gint x, gint y) noexcept;

// gboolean gtk_window_parse_geometry (GtkWindow* window, const gchar* geometry);
// gboolean gtk_window_parse_geometry (::GtkWindow* window, const char* geometry);
// IGNORE; deprecated

// void gtk_window_present (GtkWindow* window);
// void gtk_window_present (::GtkWindow* window);
GI_INLINE_DECL void present () noexcept;

// void gtk_window_present_with_time (GtkWindow* window, guint32 timestamp);
// void gtk_window_present_with_time (::GtkWindow* window, guint32 timestamp);
GI_INLINE_DECL void present_with_time (guint32 timestamp) noexcept;

// gboolean gtk_window_propagate_key_event (GtkWindow* window, GdkEventKey* event);
// gboolean gtk_window_propagate_key_event (::GtkWindow* window, ::GdkEventKey* event);
GI_INLINE_DECL bool propagate_key_event (Gdk::EventKey event) noexcept;

// void gtk_window_remove_accel_group (GtkWindow* window, GtkAccelGroup* accel_group);
// void gtk_window_remove_accel_group (::GtkWindow* window, ::GtkAccelGroup* accel_group);
GI_INLINE_DECL void remove_accel_group (Gtk::AccelGroup accel_group) noexcept;

// void gtk_window_remove_mnemonic (GtkWindow* window, guint keyval, GtkWidget* target);
// void gtk_window_remove_mnemonic (::GtkWindow* window, guint keyval, ::GtkWidget* target);
GI_INLINE_DECL void remove_mnemonic (guint keyval, Gtk::Widget target) noexcept;

// void gtk_window_reshow_with_initial_size (GtkWindow* window);
// void gtk_window_reshow_with_initial_size (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_resize (GtkWindow* window, gint width, gint height);
// void gtk_window_resize (::GtkWindow* window, gint width, gint height);
GI_INLINE_DECL void resize (gint width, gint height) noexcept;

// gboolean gtk_window_resize_grip_is_visible (GtkWindow* window);
// gboolean gtk_window_resize_grip_is_visible (::GtkWindow* window);
// IGNORE; deprecated

// void gtk_window_resize_to_geometry (GtkWindow* window, gint width, gint height);
// void gtk_window_resize_to_geometry (::GtkWindow* window, gint width, gint height);
// IGNORE; deprecated

// void gtk_window_set_accept_focus (GtkWindow* window, gboolean setting);
// void gtk_window_set_accept_focus (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_accept_focus (gboolean setting) noexcept;

// void gtk_window_set_application (GtkWindow* window, GtkApplication* application);
// void gtk_window_set_application (::GtkWindow* window, ::GtkApplication* application);
GI_INLINE_DECL void set_application (Gtk::Application application) noexcept;
GI_INLINE_DECL void set_application () noexcept;

// void gtk_window_set_attached_to (GtkWindow* window, GtkWidget* attach_widget);
// void gtk_window_set_attached_to (::GtkWindow* window, ::GtkWidget* attach_widget);
GI_INLINE_DECL void set_attached_to (Gtk::Widget attach_widget) noexcept;
GI_INLINE_DECL void set_attached_to () noexcept;

// void gtk_window_set_decorated (GtkWindow* window, gboolean setting);
// void gtk_window_set_decorated (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_decorated (gboolean setting) noexcept;

// void gtk_window_set_default (GtkWindow* window, GtkWidget* default_widget);
// void gtk_window_set_default (::GtkWindow* window, ::GtkWidget* default_widget);
GI_INLINE_DECL void set_default (Gtk::Widget default_widget) noexcept;
GI_INLINE_DECL void set_default () noexcept;

// void gtk_window_set_default_geometry (GtkWindow* window, gint width, gint height);
// void gtk_window_set_default_geometry (::GtkWindow* window, gint width, gint height);
// IGNORE; deprecated

// void gtk_window_set_default_size (GtkWindow* window, gint width, gint height);
// void gtk_window_set_default_size (::GtkWindow* window, gint width, gint height);
GI_INLINE_DECL void set_default_size (gint width, gint height) noexcept;

// void gtk_window_set_deletable (GtkWindow* window, gboolean setting);
// void gtk_window_set_deletable (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_deletable (gboolean setting) noexcept;

// void gtk_window_set_destroy_with_parent (GtkWindow* window, gboolean setting);
// void gtk_window_set_destroy_with_parent (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_destroy_with_parent (gboolean setting) noexcept;

// void gtk_window_set_focus (GtkWindow* window, GtkWidget* focus);
// void gtk_window_set_focus (::GtkWindow* window, ::GtkWidget* focus);
GI_INLINE_DECL void set_focus (Gtk::Widget focus) noexcept;
GI_INLINE_DECL void set_focus () noexcept;

// void gtk_window_set_focus_on_map (GtkWindow* window, gboolean setting);
// void gtk_window_set_focus_on_map (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_focus_on_map (gboolean setting) noexcept;

// void gtk_window_set_focus_visible (GtkWindow* window, gboolean setting);
// void gtk_window_set_focus_visible (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_focus_visible (gboolean setting) noexcept;

// void gtk_window_set_geometry_hints (GtkWindow* window, GtkWidget* geometry_widget, GdkGeometry* geometry, GdkWindowHints geom_mask);
// void gtk_window_set_geometry_hints (::GtkWindow* window, ::GtkWidget* geometry_widget, ::GdkGeometry* geometry, ::GdkWindowHints geom_mask);
GI_INLINE_DECL void set_geometry_hints (Gtk::Widget geometry_widget, Gdk::Geometry geometry, Gdk::WindowHints geom_mask) noexcept;
GI_INLINE_DECL void set_geometry_hints (Gdk::WindowHints geom_mask) noexcept;

// void gtk_window_set_gravity (GtkWindow* window, GdkGravity gravity);
// void gtk_window_set_gravity (::GtkWindow* window, ::GdkGravity gravity);
GI_INLINE_DECL void set_gravity (Gdk::Gravity gravity) noexcept;

// void gtk_window_set_has_resize_grip (GtkWindow* window, gboolean value);
// void gtk_window_set_has_resize_grip (::GtkWindow* window, gboolean value);
// IGNORE; deprecated

// void gtk_window_set_has_user_ref_count (GtkWindow* window, gboolean setting);
// void gtk_window_set_has_user_ref_count (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_has_user_ref_count (gboolean setting) noexcept;

// void gtk_window_set_hide_titlebar_when_maximized (GtkWindow* window, gboolean setting);
// void gtk_window_set_hide_titlebar_when_maximized (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_hide_titlebar_when_maximized (gboolean setting) noexcept;

// void gtk_window_set_icon (GtkWindow* window, GdkPixbuf* icon);
// void gtk_window_set_icon (::GtkWindow* window, ::GdkPixbuf* icon);
GI_INLINE_DECL void set_icon (GdkPixbuf::Pixbuf icon) noexcept;
GI_INLINE_DECL void set_icon () noexcept;

// gboolean gtk_window_set_icon_from_file (GtkWindow* window, const gchar* filename, GError ** error);
// gboolean gtk_window_set_icon_from_file (::GtkWindow* window, const char* filename, GError ** error);
GI_INLINE_DECL bool set_icon_from_file (const std::string & filename);
GI_INLINE_DECL bool set_icon_from_file (const std::string & filename, GLib::Error * _error) noexcept;

// void gtk_window_set_icon_list (GtkWindow* window, GList* list);
// void gtk_window_set_icon_list (::GtkWindow* window, ::GList* list);
GI_INLINE_DECL void set_icon_list (const std::vector<GdkPixbuf::Pixbuf> & list) noexcept;

// void gtk_window_set_icon_name (GtkWindow* window, const gchar* name);
// void gtk_window_set_icon_name (::GtkWindow* window, const char* name);
GI_INLINE_DECL void set_icon_name (const std::string & name) noexcept;
GI_INLINE_DECL void set_icon_name () noexcept;

// void gtk_window_set_keep_above (GtkWindow* window, gboolean setting);
// void gtk_window_set_keep_above (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_keep_above (gboolean setting) noexcept;

// void gtk_window_set_keep_below (GtkWindow* window, gboolean setting);
// void gtk_window_set_keep_below (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_keep_below (gboolean setting) noexcept;

// void gtk_window_set_mnemonic_modifier (GtkWindow* window, GdkModifierType modifier);
// void gtk_window_set_mnemonic_modifier (::GtkWindow* window, ::GdkModifierType modifier);
GI_INLINE_DECL void set_mnemonic_modifier (Gdk::ModifierType modifier) noexcept;

// void gtk_window_set_mnemonics_visible (GtkWindow* window, gboolean setting);
// void gtk_window_set_mnemonics_visible (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_mnemonics_visible (gboolean setting) noexcept;

// void gtk_window_set_modal (GtkWindow* window, gboolean modal);
// void gtk_window_set_modal (::GtkWindow* window, gboolean modal);
GI_INLINE_DECL void set_modal (gboolean modal) noexcept;

// void gtk_window_set_opacity (GtkWindow* window, gdouble opacity);
// void gtk_window_set_opacity (::GtkWindow* window, gdouble opacity);
// IGNORE; deprecated

// void gtk_window_set_position (GtkWindow* window, GtkWindowPosition position);
// void gtk_window_set_position (::GtkWindow* window, ::GtkWindowPosition position);
GI_INLINE_DECL void set_position (Gtk::WindowPosition position) noexcept;

// void gtk_window_set_resizable (GtkWindow* window, gboolean resizable);
// void gtk_window_set_resizable (::GtkWindow* window, gboolean resizable);
GI_INLINE_DECL void set_resizable (gboolean resizable) noexcept;

// void gtk_window_set_role (GtkWindow* window, const gchar* role);
// void gtk_window_set_role (::GtkWindow* window, const char* role);
GI_INLINE_DECL void set_role (const std::string & role) noexcept;

// void gtk_window_set_screen (GtkWindow* window, GdkScreen* screen);
// void gtk_window_set_screen (::GtkWindow* window, ::GdkScreen* screen);
GI_INLINE_DECL void set_screen (Gdk::Screen screen) noexcept;

// void gtk_window_set_skip_pager_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_skip_pager_hint (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_skip_pager_hint (gboolean setting) noexcept;

// void gtk_window_set_skip_taskbar_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_skip_taskbar_hint (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_skip_taskbar_hint (gboolean setting) noexcept;

// void gtk_window_set_startup_id (GtkWindow* window, const gchar* startup_id);
// void gtk_window_set_startup_id (::GtkWindow* window, const char* startup_id);
GI_INLINE_DECL void set_startup_id (const std::string & startup_id) noexcept;

// void gtk_window_set_title (GtkWindow* window, const gchar* title);
// void gtk_window_set_title (::GtkWindow* window, const char* title);
GI_INLINE_DECL void set_title (const std::string & title) noexcept;

// void gtk_window_set_titlebar (GtkWindow* window, GtkWidget* titlebar);
// void gtk_window_set_titlebar (::GtkWindow* window, ::GtkWidget* titlebar);
GI_INLINE_DECL void set_titlebar (Gtk::Widget titlebar) noexcept;
GI_INLINE_DECL void set_titlebar () noexcept;

// void gtk_window_set_transient_for (GtkWindow* window, GtkWindow* parent);
// void gtk_window_set_transient_for (::GtkWindow* window, ::GtkWindow* parent);
GI_INLINE_DECL void set_transient_for (Gtk::Window parent) noexcept;
GI_INLINE_DECL void set_transient_for () noexcept;

// void gtk_window_set_type_hint (GtkWindow* window, GdkWindowTypeHint hint);
// void gtk_window_set_type_hint (::GtkWindow* window, ::GdkWindowTypeHint hint);
GI_INLINE_DECL void set_type_hint (Gdk::WindowTypeHint hint) noexcept;

// void gtk_window_set_urgency_hint (GtkWindow* window, gboolean setting);
// void gtk_window_set_urgency_hint (::GtkWindow* window, gboolean setting);
GI_INLINE_DECL void set_urgency_hint (gboolean setting) noexcept;

// void gtk_window_set_wmclass (GtkWindow* window, const gchar* wmclass_name, const gchar* wmclass_class);
// void gtk_window_set_wmclass (::GtkWindow* window, const char* wmclass_name, const char* wmclass_class);
// IGNORE; deprecated

// void gtk_window_stick (GtkWindow* window);
// void gtk_window_stick (::GtkWindow* window);
GI_INLINE_DECL void stick () noexcept;

// void gtk_window_unfullscreen (GtkWindow* window);
// void gtk_window_unfullscreen (::GtkWindow* window);
GI_INLINE_DECL void unfullscreen () noexcept;

// void gtk_window_unmaximize (GtkWindow* window);
// void gtk_window_unmaximize (::GtkWindow* window);
GI_INLINE_DECL void unmaximize () noexcept;

// void gtk_window_unstick (GtkWindow* window);
// void gtk_window_unstick (::GtkWindow* window);
GI_INLINE_DECL void unstick () noexcept;

gi::property_proxy<bool, base::WindowBase> property_accept_focus()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "accept-focus"); }
const gi::property_proxy<bool, base::WindowBase> property_accept_focus() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "accept-focus"); }

gi::property_proxy<Gtk::Application, base::WindowBase> property_application()
{ return gi::property_proxy<Gtk::Application, base::WindowBase> (*this, "application"); }
const gi::property_proxy<Gtk::Application, base::WindowBase> property_application() const
{ return gi::property_proxy<Gtk::Application, base::WindowBase> (*this, "application"); }

gi::property_proxy<Gtk::Widget, base::WindowBase> property_attached_to()
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "attached-to"); }
const gi::property_proxy<Gtk::Widget, base::WindowBase> property_attached_to() const
{ return gi::property_proxy<Gtk::Widget, base::WindowBase> (*this, "attached-to"); }

gi::property_proxy<bool, base::WindowBase> property_decorated()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "decorated"); }
const gi::property_proxy<bool, base::WindowBase> property_decorated() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "decorated"); }

gi::property_proxy<gint, base::WindowBase> property_default_height()
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-height"); }
const gi::property_proxy<gint, base::WindowBase> property_default_height() const
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-height"); }

gi::property_proxy<gint, base::WindowBase> property_default_width()
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-width"); }
const gi::property_proxy<gint, base::WindowBase> property_default_width() const
{ return gi::property_proxy<gint, base::WindowBase> (*this, "default-width"); }

gi::property_proxy<bool, base::WindowBase> property_deletable()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "deletable"); }
const gi::property_proxy<bool, base::WindowBase> property_deletable() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "deletable"); }

gi::property_proxy<bool, base::WindowBase> property_destroy_with_parent()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "destroy-with-parent"); }
const gi::property_proxy<bool, base::WindowBase> property_destroy_with_parent() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "destroy-with-parent"); }

gi::property_proxy<bool, base::WindowBase> property_focus_on_map()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-on-map"); }
const gi::property_proxy<bool, base::WindowBase> property_focus_on_map() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-on-map"); }

gi::property_proxy<bool, base::WindowBase> property_focus_visible()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-visible"); }
const gi::property_proxy<bool, base::WindowBase> property_focus_visible() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "focus-visible"); }

gi::property_proxy<Gdk::Gravity, base::WindowBase> property_gravity()
{ return gi::property_proxy<Gdk::Gravity, base::WindowBase> (*this, "gravity"); }
const gi::property_proxy<Gdk::Gravity, base::WindowBase> property_gravity() const
{ return gi::property_proxy<Gdk::Gravity, base::WindowBase> (*this, "gravity"); }

gi::property_proxy<bool, base::WindowBase> property_has_resize_grip()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "has-resize-grip"); }
const gi::property_proxy<bool, base::WindowBase> property_has_resize_grip() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "has-resize-grip"); }

gi::property_proxy<bool, base::WindowBase> property_has_toplevel_focus()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "has-toplevel-focus"); }
const gi::property_proxy<bool, base::WindowBase> property_has_toplevel_focus() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "has-toplevel-focus"); }

gi::property_proxy<bool, base::WindowBase> property_hide_titlebar_when_maximized()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "hide-titlebar-when-maximized"); }
const gi::property_proxy<bool, base::WindowBase> property_hide_titlebar_when_maximized() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "hide-titlebar-when-maximized"); }

gi::property_proxy<GdkPixbuf::Pixbuf, base::WindowBase> property_icon()
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::WindowBase> (*this, "icon"); }
const gi::property_proxy<GdkPixbuf::Pixbuf, base::WindowBase> property_icon() const
{ return gi::property_proxy<GdkPixbuf::Pixbuf, base::WindowBase> (*this, "icon"); }

gi::property_proxy<std::string, base::WindowBase> property_icon_name()
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "icon-name"); }
const gi::property_proxy<std::string, base::WindowBase> property_icon_name() const
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "icon-name"); }

gi::property_proxy<bool, base::WindowBase> property_is_active()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-active"); }
const gi::property_proxy<bool, base::WindowBase> property_is_active() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-active"); }

gi::property_proxy<bool, base::WindowBase> property_is_maximized()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-maximized"); }
const gi::property_proxy<bool, base::WindowBase> property_is_maximized() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "is-maximized"); }

gi::property_proxy<bool, base::WindowBase> property_mnemonics_visible()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "mnemonics-visible"); }
const gi::property_proxy<bool, base::WindowBase> property_mnemonics_visible() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "mnemonics-visible"); }

gi::property_proxy<bool, base::WindowBase> property_modal()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "modal"); }
const gi::property_proxy<bool, base::WindowBase> property_modal() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "modal"); }

gi::property_proxy<bool, base::WindowBase> property_resizable()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resizable"); }
const gi::property_proxy<bool, base::WindowBase> property_resizable() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resizable"); }

gi::property_proxy<bool, base::WindowBase> property_resize_grip_visible()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resize-grip-visible"); }
const gi::property_proxy<bool, base::WindowBase> property_resize_grip_visible() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "resize-grip-visible"); }

gi::property_proxy<std::string, base::WindowBase> property_role()
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "role"); }
const gi::property_proxy<std::string, base::WindowBase> property_role() const
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "role"); }

gi::property_proxy<Gdk::Screen, base::WindowBase> property_screen()
{ return gi::property_proxy<Gdk::Screen, base::WindowBase> (*this, "screen"); }
const gi::property_proxy<Gdk::Screen, base::WindowBase> property_screen() const
{ return gi::property_proxy<Gdk::Screen, base::WindowBase> (*this, "screen"); }

gi::property_proxy<bool, base::WindowBase> property_skip_pager_hint()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "skip-pager-hint"); }
const gi::property_proxy<bool, base::WindowBase> property_skip_pager_hint() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "skip-pager-hint"); }

gi::property_proxy<bool, base::WindowBase> property_skip_taskbar_hint()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "skip-taskbar-hint"); }
const gi::property_proxy<bool, base::WindowBase> property_skip_taskbar_hint() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "skip-taskbar-hint"); }

gi::property_proxy_write<std::string, base::WindowBase> property_startup_id()
{ return gi::property_proxy_write<std::string, base::WindowBase> (*this, "startup-id"); }

gi::property_proxy<std::string, base::WindowBase> property_title()
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "title"); }
const gi::property_proxy<std::string, base::WindowBase> property_title() const
{ return gi::property_proxy<std::string, base::WindowBase> (*this, "title"); }

gi::property_proxy<Gtk::Window, base::WindowBase> property_transient_for()
{ return gi::property_proxy<Gtk::Window, base::WindowBase> (*this, "transient-for"); }
const gi::property_proxy<Gtk::Window, base::WindowBase> property_transient_for() const
{ return gi::property_proxy<Gtk::Window, base::WindowBase> (*this, "transient-for"); }

gi::property_proxy<Gtk::WindowType, base::WindowBase> property_type()
{ return gi::property_proxy<Gtk::WindowType, base::WindowBase> (*this, "type"); }
const gi::property_proxy<Gtk::WindowType, base::WindowBase> property_type() const
{ return gi::property_proxy<Gtk::WindowType, base::WindowBase> (*this, "type"); }

gi::property_proxy<Gdk::WindowTypeHint, base::WindowBase> property_type_hint()
{ return gi::property_proxy<Gdk::WindowTypeHint, base::WindowBase> (*this, "type-hint"); }
const gi::property_proxy<Gdk::WindowTypeHint, base::WindowBase> property_type_hint() const
{ return gi::property_proxy<Gdk::WindowTypeHint, base::WindowBase> (*this, "type-hint"); }

gi::property_proxy<bool, base::WindowBase> property_urgency_hint()
{ return gi::property_proxy<bool, base::WindowBase> (*this, "urgency-hint"); }
const gi::property_proxy<bool, base::WindowBase> property_urgency_hint() const
{ return gi::property_proxy<bool, base::WindowBase> (*this, "urgency-hint"); }

gi::property_proxy<Gtk::WindowPosition, base::WindowBase> property_window_position()
{ return gi::property_proxy<Gtk::WindowPosition, base::WindowBase> (*this, "window-position"); }
const gi::property_proxy<Gtk::WindowPosition, base::WindowBase> property_window_position() const
{ return gi::property_proxy<Gtk::WindowPosition, base::WindowBase> (*this, "window-position"); }

// signal activate-default
gi::signal_proxy<void(Gtk::Window)> signal_activate_default()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "activate-default"); }

// signal activate-focus
gi::signal_proxy<void(Gtk::Window)> signal_activate_focus()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "activate-focus"); }

// signal enable-debugging
gi::signal_proxy<bool(Gtk::Window, gboolean toggle)> signal_enable_debugging()
{ return gi::signal_proxy<bool(Gtk::Window, gboolean toggle)> (*this, "enable-debugging"); }

// signal keys-changed
gi::signal_proxy<void(Gtk::Window)> signal_keys_changed()
{ return gi::signal_proxy<void(Gtk::Window)> (*this, "keys-changed"); }

// signal set-focus
gi::signal_proxy<void(Gtk::Window, Gtk::Widget widget)> signal_set_focus()
{ return gi::signal_proxy<void(Gtk::Window, Gtk::Widget widget)> (*this, "set-focus"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/window_extra_def.hpp>)
#include <gtk/window_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/window_extra.hpp>)
#include <gtk/window_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Window : public GI_GTK_WINDOW_BASE
{ typedef GI_GTK_WINDOW_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkWindow>
{ typedef Gtk::Window type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class WindowClassDef
{
typedef WindowClassDef self;
public:
typedef Gtk::Window instance_type;
typedef ::GtkWindowClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Window::activate_default (GtkWindow* window);
// void Window::activate_default (::GtkWindow* window);
virtual void activate_default_ () noexcept = 0;

// void Window::activate_focus (GtkWindow* window);
// void Window::activate_focus (::GtkWindow* window);
virtual void activate_focus_ () noexcept = 0;

// gboolean Window::enable_debugging (GtkWindow* window, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window, gboolean toggle);
virtual bool enable_debugging_ (gboolean toggle) noexcept = 0;

// void Window::keys_changed (GtkWindow* window);
// void Window::keys_changed (::GtkWindow* window);
virtual void keys_changed_ () noexcept = 0;

// void Window::set_focus (GtkWindow* window, GtkWidget* focus);
// void Window::set_focus (::GtkWindow* window, ::GtkWidget* focus);
virtual void set_focus_ (Gtk::Widget focus) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WindowClass: public detail::ClassTemplate<Gtk::impl::internal::WindowClassDef, Gtk::impl::internal::BinClass>
{
typedef WindowClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::WindowClassDef, Gtk::impl::internal::BinClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Window::activate_default (GtkWindow* window);
// void Window::activate_default (::GtkWindow* window);
GI_INLINE_DECL void activate_default_ () noexcept override;

// void Window::activate_focus (GtkWindow* window);
// void Window::activate_focus (::GtkWindow* window);
GI_INLINE_DECL void activate_focus_ () noexcept override;

// gboolean Window::enable_debugging (GtkWindow* window, gboolean toggle);
// gboolean Window::enable_debugging (::GtkWindow* window, gboolean toggle);
GI_INLINE_DECL bool enable_debugging_ (gboolean toggle) noexcept override;

// void Window::keys_changed (GtkWindow* window);
// void Window::keys_changed (::GtkWindow* window);
GI_INLINE_DECL void keys_changed_ () noexcept override;

// void Window::set_focus (GtkWindow* window, GtkWidget* focus);
// void Window::set_focus (::GtkWindow* window, ::GtkWidget* focus);
GI_INLINE_DECL void set_focus_ (Gtk::Widget focus) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using WindowImpl = detail::ObjectImpl<Window, internal::WindowClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
