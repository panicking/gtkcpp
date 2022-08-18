// AUTO-GENERATED

#ifndef _GI_GTK_WIDGET_IMPL_HPP_
#define _GI_GTK_WIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Atk::ImplementorIface WidgetBase::interface_ (gi::interface_tag<Atk::ImplementorIface>)
{ return gi::wrap ((Atk::ImplementorIface::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

WidgetBase::operator Atk::ImplementorIface ()
{ return interface_ (gi::interface_tag<Atk::ImplementorIface>()); }

Gtk::Buildable WidgetBase::interface_ (gi::interface_tag<Gtk::Buildable>)
{ return gi::wrap ((Gtk::Buildable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

WidgetBase::operator Gtk::Buildable ()
{ return interface_ (gi::interface_tag<Gtk::Buildable>()); }

// GtkWidget* gtk_widget_new (GType type, const gchar* first_property_name);
// ::GtkWidget* gtk_widget_new (GType type, const char* first_property_name);
// IGNORE; not introspectable, varargs not supported

// GtkTextDirection gtk_widget_get_default_direction ();
// ::GtkTextDirection gtk_widget_get_default_direction ();
Gtk::TextDirection base::WidgetBase::get_default_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_default_direction;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret);
}

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
void base::WidgetBase::set_default_direction (Gtk::TextDirection dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkTextDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_default_direction;
  auto dir_to_c = gi::unwrap (dir);
  call_wrap_v ((::GtkTextDirection) (dir_to_c));
}

// gboolean gtk_widget_activate (GtkWidget* widget);
// gboolean gtk_widget_activate (::GtkWidget* widget);
bool base::WidgetBase::activate () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_activate;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_add_accelerator (GtkWidget* widget, const gchar* accel_signal, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods, GtkAccelFlags accel_flags);
// void gtk_widget_add_accelerator (::GtkWidget* widget, const char* accel_signal, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags);
void base::WidgetBase::add_accelerator (const std::string & accel_signal, Gtk::AccelGroup accel_group, guint accel_key, Gdk::ModifierType accel_mods, Gtk::AccelFlags accel_flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* accel_signal, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods, ::GtkAccelFlags accel_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_add_accelerator;
  auto accel_flags_to_c = gi::unwrap (accel_flags);
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  auto accel_signal_to_c = gi::unwrap (accel_signal, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (accel_signal_to_c), (::GtkAccelGroup*) (accel_group_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c), (::GtkAccelFlags) (accel_flags_to_c));
}

// void gtk_widget_add_device_events (GtkWidget* widget, GdkDevice* device, GdkEventMask events);
// void gtk_widget_add_device_events (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
void base::WidgetBase::add_device_events (Gdk::Device device, Gdk::EventMask events) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_add_device_events;
  auto events_to_c = gi::unwrap (events);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c), (::GdkEventMask) (events_to_c));
}

// void gtk_widget_add_events (GtkWidget* widget, gint events);
// void gtk_widget_add_events (::GtkWidget* widget, gint events);
void base::WidgetBase::add_events (gint events) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint events);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_add_events;
  auto events_to_c = events;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (events_to_c));
}

// void gtk_widget_add_mnemonic_label (GtkWidget* widget, GtkWidget* label);
// void gtk_widget_add_mnemonic_label (::GtkWidget* widget, ::GtkWidget* label);
void base::WidgetBase::add_mnemonic_label (Gtk::Widget label) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_add_mnemonic_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (label_to_c));
}

// guint gtk_widget_add_tick_callback (GtkWidget* widget, GtkTickCallback callback, gpointer user_data, GDestroyNotify notify);
// guint gtk_widget_add_tick_callback (::GtkWidget* widget, Gtk::TickCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type notify);
guint base::WidgetBase::add_tick_callback (Gtk::TickCallback callback) noexcept
{
  typedef guint (*call_wrap_t) (::GtkWidget* widget, Gtk::TickCallback::cfunction_type callback, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_add_tick_callback;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_notified) : nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (Gtk::TickCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (GLib::DestroyNotify::cfunction_type) (callback_wrap_ ? &callback_wrap_->destroy : nullptr));
  return _temp_ret;
}

// gboolean gtk_widget_can_activate_accel (GtkWidget* widget, guint signal_id);
// gboolean gtk_widget_can_activate_accel (::GtkWidget* widget, guint signal_id);
bool base::WidgetBase::can_activate_accel (guint signal_id) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, guint signal_id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_can_activate_accel;
  auto signal_id_to_c = signal_id;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (guint) (signal_id_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_child_focus (GtkWidget* widget, GtkDirectionType direction);
// gboolean gtk_widget_child_focus (::GtkWidget* widget, ::GtkDirectionType direction);
bool base::WidgetBase::child_focus (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_child_focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// void gtk_widget_child_notify (GtkWidget* widget, const gchar* child_property);
// void gtk_widget_child_notify (::GtkWidget* widget, const char* child_property);
void base::WidgetBase::child_notify (const std::string & child_property) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* child_property);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_child_notify;
  auto child_property_to_c = gi::unwrap (child_property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (child_property_to_c));
}

// void gtk_widget_class_path (GtkWidget* widget, guint* path_length, gchar** path, gchar** path_reversed);
// void gtk_widget_class_path (::GtkWidget* widget, guint* path_length, char** path, char** path_reversed);
// IGNORE; deprecated

// gboolean gtk_widget_compute_expand (GtkWidget* widget, GtkOrientation orientation);
// gboolean gtk_widget_compute_expand (::GtkWidget* widget, ::GtkOrientation orientation);
bool base::WidgetBase::compute_expand (Gtk::Orientation orientation) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_compute_expand;
  auto orientation_to_c = gi::unwrap (orientation);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkOrientation) (orientation_to_c));
  return _temp_ret;
}

// PangoContext* gtk_widget_create_pango_context (GtkWidget* widget);
// ::PangoContext* gtk_widget_create_pango_context (::GtkWidget* widget);
Pango::Context base::WidgetBase::create_pango_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_create_pango_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// PangoLayout* gtk_widget_create_pango_layout (GtkWidget* widget, const gchar* text);
// ::PangoLayout* gtk_widget_create_pango_layout (::GtkWidget* widget, const char* text);
Pango::Layout base::WidgetBase::create_pango_layout (const std::string & text) noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_create_pango_layout;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Pango::Layout base::WidgetBase::create_pango_layout () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_create_pango_layout;
  auto text_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_widget_destroy (GtkWidget* widget);
// void gtk_widget_destroy (::GtkWidget* widget);
void base::WidgetBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_destroy;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_destroyed (GtkWidget* widget, GtkWidget** widget_pointer);
// void gtk_widget_destroyed (::GtkWidget* widget, ::GtkWidget** widget_pointer);
void base::WidgetBase::destroyed (Gtk::Widget & widget_pointer) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget** widget_pointer);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_destroyed;
  auto widget_pointer_to_c = gi::unwrap (widget_pointer, gi::transfer_none, gi::direction_in);
  ::GtkWidget* widget_pointer_o = widget_pointer_to_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget**) (&widget_pointer_o));
  widget_pointer = gi::wrap (widget_pointer_o, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_device_is_shadowed (GtkWidget* widget, GdkDevice* device);
// gboolean gtk_widget_device_is_shadowed (::GtkWidget* widget, ::GdkDevice* device);
bool base::WidgetBase::device_is_shadowed (Gdk::Device device) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_device_is_shadowed;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c));
  return _temp_ret;
}

// GdkDragContext* gtk_drag_begin (GtkWidget* widget, GtkTargetList* targets, GdkDragAction actions, gint button, GdkEvent* event);
// ::GdkDragContext* gtk_drag_begin (::GtkWidget* widget, ::GtkTargetList* targets, ::GdkDragAction actions, gint button,  event);
// IGNORE; deprecated

// GdkDragContext* gtk_drag_begin_with_coordinates (GtkWidget* widget, GtkTargetList* targets, GdkDragAction actions, gint button, GdkEvent* event, gint x, gint y);
// ::GdkDragContext* gtk_drag_begin_with_coordinates (::GtkWidget* widget, ::GtkTargetList* targets, ::GdkDragAction actions, gint button,  event, gint x, gint y);
// SKIP; event type  not supported

// gboolean gtk_drag_check_threshold (GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
// gboolean gtk_drag_check_threshold (::GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
bool base::WidgetBase::drag_check_threshold (gint start_x, gint start_y, gint current_x, gint current_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gint start_x, gint start_y, gint current_x, gint current_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_check_threshold;
  auto current_y_to_c = current_y;
  auto current_x_to_c = current_x;
  auto start_y_to_c = start_y;
  auto start_x_to_c = start_x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (start_x_to_c), (gint) (start_y_to_c), (gint) (current_x_to_c), (gint) (current_y_to_c));
  return _temp_ret;
}

// void gtk_drag_dest_add_image_targets (GtkWidget* widget);
// void gtk_drag_dest_add_image_targets (::GtkWidget* widget);
void base::WidgetBase::drag_dest_add_image_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_add_image_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_dest_add_text_targets (GtkWidget* widget);
// void gtk_drag_dest_add_text_targets (::GtkWidget* widget);
void base::WidgetBase::drag_dest_add_text_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_add_text_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_dest_add_uri_targets (GtkWidget* widget);
// void gtk_drag_dest_add_uri_targets (::GtkWidget* widget);
void base::WidgetBase::drag_dest_add_uri_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_add_uri_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// GdkAtom gtk_drag_dest_find_target (GtkWidget* widget, GdkDragContext* context, GtkTargetList* target_list);
//  gtk_drag_dest_find_target (::GtkWidget* widget, ::GdkDragContext* context, ::GtkTargetList* target_list);
// SKIP;  type  not supported

// GtkTargetList* gtk_drag_dest_get_target_list (GtkWidget* widget);
// ::GtkTargetList* gtk_drag_dest_get_target_list (::GtkWidget* widget);
Gtk::TargetList base::WidgetBase::drag_dest_get_target_list () noexcept
{
  typedef ::GtkTargetList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_get_target_list;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_drag_dest_get_track_motion (GtkWidget* widget);
// gboolean gtk_drag_dest_get_track_motion (::GtkWidget* widget);
bool base::WidgetBase::drag_dest_get_track_motion () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_get_track_motion;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_drag_dest_set (GtkWidget* widget, GtkDestDefaults flags, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_drag_dest_set (::GtkWidget* widget, ::GtkDestDefaults flags, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_drag_dest_set_proxy (GtkWidget* widget, GdkWindow* proxy_window, GdkDragProtocol protocol, gboolean use_coordinates);
// void gtk_drag_dest_set_proxy (::GtkWidget* widget, ::GdkWindow* proxy_window, ::GdkDragProtocol protocol, gboolean use_coordinates);
// IGNORE; deprecated

// void gtk_drag_dest_set_target_list (GtkWidget* widget, GtkTargetList* target_list);
// void gtk_drag_dest_set_target_list (::GtkWidget* widget, ::GtkTargetList* target_list);
void base::WidgetBase::drag_dest_set_target_list (Gtk::TargetList target_list) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTargetList* target_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_set_target_list;
  auto target_list_to_c = gi::unwrap (target_list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTargetList*) (target_list_to_c));
}
void base::WidgetBase::drag_dest_set_target_list () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTargetList* target_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_set_target_list;
  auto target_list_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTargetList*) (target_list_to_c));
}

// void gtk_drag_dest_set_track_motion (GtkWidget* widget, gboolean track_motion);
// void gtk_drag_dest_set_track_motion (::GtkWidget* widget, gboolean track_motion);
void base::WidgetBase::drag_dest_set_track_motion (gboolean track_motion) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean track_motion);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_set_track_motion;
  auto track_motion_to_c = track_motion;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (track_motion_to_c));
}

// void gtk_drag_dest_unset (GtkWidget* widget);
// void gtk_drag_dest_unset (::GtkWidget* widget);
void base::WidgetBase::drag_dest_unset () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_dest_unset;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_get_data (GtkWidget* widget, GdkDragContext* context, GdkAtom target, guint32 time_);
// void gtk_drag_get_data (::GtkWidget* widget, ::GdkDragContext* context,  target, guint32 time_);
// SKIP; target type  not supported

// void gtk_drag_highlight (GtkWidget* widget);
// void gtk_drag_highlight (::GtkWidget* widget);
void base::WidgetBase::drag_highlight () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_highlight;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_source_add_image_targets (GtkWidget* widget);
// void gtk_drag_source_add_image_targets (::GtkWidget* widget);
void base::WidgetBase::drag_source_add_image_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_add_image_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_source_add_text_targets (GtkWidget* widget);
// void gtk_drag_source_add_text_targets (::GtkWidget* widget);
void base::WidgetBase::drag_source_add_text_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_add_text_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_source_add_uri_targets (GtkWidget* widget);
// void gtk_drag_source_add_uri_targets (::GtkWidget* widget);
void base::WidgetBase::drag_source_add_uri_targets () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_add_uri_targets;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// GtkTargetList* gtk_drag_source_get_target_list (GtkWidget* widget);
// ::GtkTargetList* gtk_drag_source_get_target_list (::GtkWidget* widget);
Gtk::TargetList base::WidgetBase::drag_source_get_target_list () noexcept
{
  typedef ::GtkTargetList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_get_target_list;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_drag_source_set (GtkWidget* widget, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions);
// void gtk_drag_source_set (::GtkWidget* widget, ::GdkModifierType start_button_mask, const ::GtkTargetEntry** targets, gint n_targets, ::GdkDragAction actions);
// SKIP; inconsistent in targets pointer depth (1 vs 2)

// void gtk_drag_source_set_icon_gicon (GtkWidget* widget, GIcon* icon);
// void gtk_drag_source_set_icon_gicon (::GtkWidget* widget, ::GIcon* icon);
void base::WidgetBase::drag_source_set_icon_gicon (Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_set_icon_gicon;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GIcon*) (icon_to_c));
}

// void gtk_drag_source_set_icon_name (GtkWidget* widget, const gchar* icon_name);
// void gtk_drag_source_set_icon_name (::GtkWidget* widget, const char* icon_name);
void base::WidgetBase::drag_source_set_icon_name (const std::string & icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_drag_source_set_icon_pixbuf (GtkWidget* widget, GdkPixbuf* pixbuf);
// void gtk_drag_source_set_icon_pixbuf (::GtkWidget* widget, ::GdkPixbuf* pixbuf);
void base::WidgetBase::drag_source_set_icon_pixbuf (GdkPixbuf::Pixbuf pixbuf) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkPixbuf* pixbuf);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_set_icon_pixbuf;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkPixbuf*) (pixbuf_to_c));
}

// void gtk_drag_source_set_icon_stock (GtkWidget* widget, const gchar* stock_id);
// void gtk_drag_source_set_icon_stock (::GtkWidget* widget, const char* stock_id);
// IGNORE; deprecated

// void gtk_drag_source_set_target_list (GtkWidget* widget, GtkTargetList* target_list);
// void gtk_drag_source_set_target_list (::GtkWidget* widget, ::GtkTargetList* target_list);
void base::WidgetBase::drag_source_set_target_list (Gtk::TargetList target_list) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTargetList* target_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_set_target_list;
  auto target_list_to_c = gi::unwrap (target_list, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTargetList*) (target_list_to_c));
}
void base::WidgetBase::drag_source_set_target_list () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTargetList* target_list);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_set_target_list;
  auto target_list_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTargetList*) (target_list_to_c));
}

// void gtk_drag_source_unset (GtkWidget* widget);
// void gtk_drag_source_unset (::GtkWidget* widget);
void base::WidgetBase::drag_source_unset () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_source_unset;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_drag_unhighlight (GtkWidget* widget);
// void gtk_drag_unhighlight (::GtkWidget* widget);
void base::WidgetBase::drag_unhighlight () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_drag_unhighlight;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_draw (GtkWidget* widget, cairo_t* cr);
// void gtk_widget_draw (::GtkWidget* widget, ::cairo_t* cr);
void base::WidgetBase::draw (cairo::Context cr) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_draw;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_t*) (cr_to_c));
}

// void gtk_widget_ensure_style (GtkWidget* widget);
// void gtk_widget_ensure_style (::GtkWidget* widget);
// IGNORE; deprecated

// void gtk_widget_error_bell (GtkWidget* widget);
// void gtk_widget_error_bell (::GtkWidget* widget);
void base::WidgetBase::error_bell () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_error_bell;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_event (GtkWidget* widget, GdkEvent* event);
// gboolean gtk_widget_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_widget_freeze_child_notify (GtkWidget* widget);
// void gtk_widget_freeze_child_notify (::GtkWidget* widget);
void base::WidgetBase::freeze_child_notify () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_freeze_child_notify;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// AtkObject* gtk_widget_get_accessible (GtkWidget* widget);
// ::AtkObject* gtk_widget_get_accessible (::GtkWidget* widget);
Atk::Object base::WidgetBase::get_accessible () noexcept
{
  typedef ::AtkObject* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_accessible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GActionGroup* gtk_widget_get_action_group (GtkWidget* widget, const gchar* prefix);
// ::GActionGroup* gtk_widget_get_action_group (::GtkWidget* widget, const char* prefix);
Gio::ActionGroup base::WidgetBase::get_action_group (const std::string & prefix) noexcept
{
  typedef ::GActionGroup* (*call_wrap_t) (::GtkWidget* widget, const char* prefix);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_action_group;
  auto prefix_to_c = gi::unwrap (prefix, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (prefix_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// int gtk_widget_get_allocated_baseline (GtkWidget* widget);
// gint gtk_widget_get_allocated_baseline (::GtkWidget* widget);
gint base::WidgetBase::get_allocated_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocated_baseline;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// int gtk_widget_get_allocated_height (GtkWidget* widget);
// gint gtk_widget_get_allocated_height (::GtkWidget* widget);
gint base::WidgetBase::get_allocated_height () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocated_height;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_get_allocated_size (GtkWidget* widget, GtkAllocation* allocation, int* baseline);
// void gtk_widget_get_allocated_size (::GtkWidget* widget, ::GtkAllocation* allocation, gint* baseline);
void base::WidgetBase::get_allocated_size (Gtk::Allocation & allocation, gint * baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation, gint* baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocated_size;
  gint baseline_o {};
  traits::unset_wrapper<::GtkAllocation>::type allocation_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &allocation_c), (gint*) (baseline ? &baseline_o : nullptr));
  if (baseline) *baseline = baseline_o;
  allocation = gi::wrap ((::GtkAllocation*) &allocation_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Gtk::Allocation, gint> base::WidgetBase::get_allocated_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation, gint* baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocated_size;
  gint baseline_o {};
  traits::unset_wrapper<::GtkAllocation>::type allocation_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &allocation_c), (gint*) (&baseline_o));
  return std::make_tuple (gi::wrap ((::GtkAllocation*) &allocation_c, gi::transfer_none, gi::direction_out), baseline_o);
}

// int gtk_widget_get_allocated_width (GtkWidget* widget);
// gint gtk_widget_get_allocated_width (::GtkWidget* widget);
gint base::WidgetBase::get_allocated_width () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocated_width;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_get_allocation (GtkWidget* widget, GtkAllocation* allocation);
// void gtk_widget_get_allocation (::GtkWidget* widget, ::GtkAllocation* allocation);
void base::WidgetBase::get_allocation (Gtk::Allocation & allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocation;
  traits::unset_wrapper<::GtkAllocation>::type allocation_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &allocation_c));
  allocation = gi::wrap ((::GtkAllocation*) &allocation_c, gi::transfer_none, gi::direction_out);
}
Gtk::Allocation base::WidgetBase::get_allocation () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_allocation;
  traits::unset_wrapper<::GtkAllocation>::type allocation_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &allocation_c));
  return gi::wrap ((::GtkAllocation*) &allocation_c, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_widget_get_ancestor (GtkWidget* widget, GType widget_type);
// ::GtkWidget* gtk_widget_get_ancestor (::GtkWidget* widget, GType widget_type);
Gtk::Widget base::WidgetBase::get_ancestor (GType widget_type) noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget, GType widget_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_ancestor;
  auto widget_type_to_c = widget_type;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (GType) (widget_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_get_app_paintable (GtkWidget* widget);
// gboolean gtk_widget_get_app_paintable (::GtkWidget* widget);
bool base::WidgetBase::get_app_paintable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_app_paintable;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_can_default (GtkWidget* widget);
// gboolean gtk_widget_get_can_default (::GtkWidget* widget);
bool base::WidgetBase::get_can_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_can_default;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_can_focus (GtkWidget* widget);
// gboolean gtk_widget_get_can_focus (::GtkWidget* widget);
bool base::WidgetBase::get_can_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_can_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_get_child_requisition (GtkWidget* widget, GtkRequisition* requisition);
// void gtk_widget_get_child_requisition (::GtkWidget* widget, ::GtkRequisition* requisition);
// IGNORE; deprecated

// gboolean gtk_widget_get_child_visible (GtkWidget* widget);
// gboolean gtk_widget_get_child_visible (::GtkWidget* widget);
bool base::WidgetBase::get_child_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_child_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_get_clip (GtkWidget* widget, GtkAllocation* clip);
// void gtk_widget_get_clip (::GtkWidget* widget, ::GtkAllocation* clip);
void base::WidgetBase::get_clip (Gtk::Allocation & clip) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* clip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_clip;
  traits::unset_wrapper<::GtkAllocation>::type clip_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &clip_c));
  clip = gi::wrap ((::GtkAllocation*) &clip_c, gi::transfer_none, gi::direction_out);
}
Gtk::Allocation base::WidgetBase::get_clip () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* clip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_clip;
  traits::unset_wrapper<::GtkAllocation>::type clip_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) ((::GtkAllocation*) &clip_c));
  return gi::wrap ((::GtkAllocation*) &clip_c, gi::transfer_none, gi::direction_out);
}

// GtkClipboard* gtk_widget_get_clipboard (GtkWidget* widget, GdkAtom selection);
// ::GtkClipboard* gtk_widget_get_clipboard (::GtkWidget* widget,  selection);
// SKIP; selection type  not supported

// gchar* gtk_widget_get_composite_name (GtkWidget* widget);
// char* gtk_widget_get_composite_name (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_get_device_enabled (GtkWidget* widget, GdkDevice* device);
// gboolean gtk_widget_get_device_enabled (::GtkWidget* widget, ::GdkDevice* device);
bool base::WidgetBase::get_device_enabled (Gdk::Device device) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_device_enabled;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c));
  return _temp_ret;
}

// GdkEventMask gtk_widget_get_device_events (GtkWidget* widget, GdkDevice* device);
// ::GdkEventMask gtk_widget_get_device_events (::GtkWidget* widget, ::GdkDevice* device);
Gdk::EventMask base::WidgetBase::get_device_events (Gdk::Device device) noexcept
{
  typedef ::GdkEventMask (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_device_events;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c));
  return gi::wrap (_temp_ret);
}

// GtkTextDirection gtk_widget_get_direction (GtkWidget* widget);
// ::GtkTextDirection gtk_widget_get_direction (::GtkWidget* widget);
Gtk::TextDirection base::WidgetBase::get_direction () noexcept
{
  typedef ::GtkTextDirection (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_direction;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GdkDisplay* gtk_widget_get_display (GtkWidget* widget);
// ::GdkDisplay* gtk_widget_get_display (::GtkWidget* widget);
Gdk::Display base::WidgetBase::get_display () noexcept
{
  typedef ::GdkDisplay* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_display;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_get_double_buffered (GtkWidget* widget);
// gboolean gtk_widget_get_double_buffered (::GtkWidget* widget);
bool base::WidgetBase::get_double_buffered () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_double_buffered;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gint gtk_widget_get_events (GtkWidget* widget);
// gint gtk_widget_get_events (::GtkWidget* widget);
gint base::WidgetBase::get_events () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_events;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_focus_on_click (GtkWidget* widget);
// gboolean gtk_widget_get_focus_on_click (::GtkWidget* widget);
bool base::WidgetBase::get_focus_on_click () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_focus_on_click;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// PangoFontMap* gtk_widget_get_font_map (GtkWidget* widget);
// ::PangoFontMap* gtk_widget_get_font_map (::GtkWidget* widget);
Pango::FontMap base::WidgetBase::get_font_map () noexcept
{
  typedef ::PangoFontMap* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_font_map;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const cairo_font_options_t* gtk_widget_get_font_options (GtkWidget* widget);
// const ::cairo_font_options_t* gtk_widget_get_font_options (::GtkWidget* widget);
cairo::FontOptions base::WidgetBase::get_font_options () noexcept
{
  typedef const ::cairo_font_options_t* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_font_options;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkFrameClock* gtk_widget_get_frame_clock (GtkWidget* widget);
// ::GdkFrameClock* gtk_widget_get_frame_clock (::GtkWidget* widget);
Gdk::FrameClock base::WidgetBase::get_frame_clock () noexcept
{
  typedef ::GdkFrameClock* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_frame_clock;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAlign gtk_widget_get_halign (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_halign (::GtkWidget* widget);
Gtk::Align base::WidgetBase::get_halign () noexcept
{
  typedef ::GtkAlign (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_halign;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_widget_get_has_tooltip (GtkWidget* widget);
// gboolean gtk_widget_get_has_tooltip (::GtkWidget* widget);
bool base::WidgetBase::get_has_tooltip () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_has_tooltip;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_has_window (GtkWidget* widget);
// gboolean gtk_widget_get_has_window (::GtkWidget* widget);
bool base::WidgetBase::get_has_window () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_has_window;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_hexpand (GtkWidget* widget);
// gboolean gtk_widget_get_hexpand (::GtkWidget* widget);
bool base::WidgetBase::get_hexpand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_hexpand;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_hexpand_set (GtkWidget* widget);
// gboolean gtk_widget_get_hexpand_set (::GtkWidget* widget);
bool base::WidgetBase::get_hexpand_set () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_hexpand_set;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_mapped (GtkWidget* widget);
// gboolean gtk_widget_get_mapped (::GtkWidget* widget);
bool base::WidgetBase::get_mapped () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_mapped;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gint gtk_widget_get_margin_bottom (GtkWidget* widget);
// gint gtk_widget_get_margin_bottom (::GtkWidget* widget);
gint base::WidgetBase::get_margin_bottom () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_margin_bottom;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gint gtk_widget_get_margin_end (GtkWidget* widget);
// gint gtk_widget_get_margin_end (::GtkWidget* widget);
gint base::WidgetBase::get_margin_end () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_margin_end;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gint gtk_widget_get_margin_left (GtkWidget* widget);
// gint gtk_widget_get_margin_left (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_margin_right (GtkWidget* widget);
// gint gtk_widget_get_margin_right (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_margin_start (GtkWidget* widget);
// gint gtk_widget_get_margin_start (::GtkWidget* widget);
gint base::WidgetBase::get_margin_start () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_margin_start;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gint gtk_widget_get_margin_top (GtkWidget* widget);
// gint gtk_widget_get_margin_top (::GtkWidget* widget);
gint base::WidgetBase::get_margin_top () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_margin_top;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GdkModifierType gtk_widget_get_modifier_mask (GtkWidget* widget, GdkModifierIntent intent);
// ::GdkModifierType gtk_widget_get_modifier_mask (::GtkWidget* widget, ::GdkModifierIntent intent);
Gdk::ModifierType base::WidgetBase::get_modifier_mask (Gdk::ModifierIntent intent) noexcept
{
  typedef ::GdkModifierType (*call_wrap_t) (::GtkWidget* widget, ::GdkModifierIntent intent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_modifier_mask;
  auto intent_to_c = gi::unwrap (intent);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkModifierIntent) (intent_to_c));
  return gi::wrap (_temp_ret);
}

// GtkRcStyle* gtk_widget_get_modifier_style (GtkWidget* widget);
// ::GtkRcStyle* gtk_widget_get_modifier_style (::GtkWidget* widget);
// IGNORE; deprecated

// const gchar* gtk_widget_get_name (GtkWidget* widget);
// const char* gtk_widget_get_name (::GtkWidget* widget);
std::string base::WidgetBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_name;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_get_no_show_all (GtkWidget* widget);
// gboolean gtk_widget_get_no_show_all (::GtkWidget* widget);
bool base::WidgetBase::get_no_show_all () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_no_show_all;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// double gtk_widget_get_opacity (GtkWidget* widget);
// gdouble gtk_widget_get_opacity (::GtkWidget* widget);
gdouble base::WidgetBase::get_opacity () noexcept
{
  typedef gdouble (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_opacity;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// PangoContext* gtk_widget_get_pango_context (GtkWidget* widget);
// ::PangoContext* gtk_widget_get_pango_context (::GtkWidget* widget);
Pango::Context base::WidgetBase::get_pango_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_pango_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_widget_get_parent (GtkWidget* widget);
// ::GtkWidget* gtk_widget_get_parent (::GtkWidget* widget);
Gtk::Widget base::WidgetBase::get_parent () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_widget_get_parent_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_parent_window (::GtkWidget* widget);
Gdk::Window base::WidgetBase::get_parent_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_parent_window;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidgetPath* gtk_widget_get_path (GtkWidget* widget);
// ::GtkWidgetPath* gtk_widget_get_path (::GtkWidget* widget);
Gtk::WidgetPath base::WidgetBase::get_path () noexcept
{
  typedef ::GtkWidgetPath* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_path;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_widget_get_pointer (GtkWidget* widget, gint* x, gint* y);
// void gtk_widget_get_pointer (::GtkWidget* widget, gint* x, gint* y);
// IGNORE; deprecated

// void gtk_widget_get_preferred_height (GtkWidget* widget, gint* minimum_height, gint* natural_height);
// void gtk_widget_get_preferred_height (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
void base::WidgetBase::get_preferred_height (gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::WidgetBase::get_preferred_height () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height;
  gint natural_height_o {};
  gint minimum_height_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_widget_get_preferred_height_and_baseline_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
// void gtk_widget_get_preferred_height_and_baseline_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
void base::WidgetBase::get_preferred_height_and_baseline_for_width (gint width, gint * minimum_height, gint * natural_height, gint * minimum_baseline, gint * natural_baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height_and_baseline_for_width;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr), (gint*) (minimum_baseline ? &minimum_baseline_o : nullptr), (gint*) (natural_baseline ? &natural_baseline_o : nullptr));
  if (natural_baseline) *natural_baseline = natural_baseline_o;
  if (minimum_baseline) *minimum_baseline = minimum_baseline_o;
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint, gint, gint> base::WidgetBase::get_preferred_height_and_baseline_for_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height, gint* minimum_baseline, gint* natural_baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height_and_baseline_for_width;
  gint natural_baseline_o {};
  gint minimum_baseline_o {};
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o), (gint*) (&minimum_baseline_o), (gint*) (&natural_baseline_o));
  return std::make_tuple (minimum_height_o, natural_height_o, minimum_baseline_o, natural_baseline_o);
}

// void gtk_widget_get_preferred_height_for_width (GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
// void gtk_widget_get_preferred_height_for_width (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
void base::WidgetBase::get_preferred_height_for_width (gint width, gint * minimum_height, gint * natural_height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint*) (minimum_height ? &minimum_height_o : nullptr), (gint*) (natural_height ? &natural_height_o : nullptr));
  if (natural_height) *natural_height = natural_height_o;
  if (minimum_height) *minimum_height = minimum_height_o;
}
std::tuple<gint, gint> base::WidgetBase::get_preferred_height_for_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint* minimum_height, gint* natural_height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_height_for_width;
  gint natural_height_o {};
  gint minimum_height_o {};
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint*) (&minimum_height_o), (gint*) (&natural_height_o));
  return std::make_tuple (minimum_height_o, natural_height_o);
}

// void gtk_widget_get_preferred_size (GtkWidget* widget, GtkRequisition* minimum_size, GtkRequisition* natural_size);
// void gtk_widget_get_preferred_size (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
void base::WidgetBase::get_preferred_size (Gtk::Requisition * minimum_size, Gtk::Requisition * natural_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_size;
  traits::unset_wrapper<::GtkRequisition>::type natural_size_c;
  traits::unset_wrapper<::GtkRequisition>::type minimum_size_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkRequisition*) (minimum_size ? (::GtkRequisition*) &minimum_size_c : nullptr), (::GtkRequisition*) (natural_size ? (::GtkRequisition*) &natural_size_c : nullptr));
  if (natural_size) *natural_size = gi::wrap ((::GtkRequisition*) &natural_size_c, gi::transfer_none, gi::direction_out);
  if (minimum_size) *minimum_size = gi::wrap ((::GtkRequisition*) &minimum_size_c, gi::transfer_none, gi::direction_out);
}
std::tuple<Gtk::Requisition, Gtk::Requisition> base::WidgetBase::get_preferred_size () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkRequisition* minimum_size, ::GtkRequisition* natural_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_size;
  traits::unset_wrapper<::GtkRequisition>::type natural_size_c;
  traits::unset_wrapper<::GtkRequisition>::type minimum_size_c;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkRequisition*) ((::GtkRequisition*) &minimum_size_c), (::GtkRequisition*) ((::GtkRequisition*) &natural_size_c));
  return std::make_tuple (gi::wrap ((::GtkRequisition*) &minimum_size_c, gi::transfer_none, gi::direction_out), gi::wrap ((::GtkRequisition*) &natural_size_c, gi::transfer_none, gi::direction_out));
}

// void gtk_widget_get_preferred_width (GtkWidget* widget, gint* minimum_width, gint* natural_width);
// void gtk_widget_get_preferred_width (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
void base::WidgetBase::get_preferred_width (gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::WidgetBase::get_preferred_width () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_width;
  gint natural_width_o {};
  gint minimum_width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// void gtk_widget_get_preferred_width_for_height (GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
// void gtk_widget_get_preferred_width_for_height (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
void base::WidgetBase::get_preferred_width_for_height (gint height, gint * minimum_width, gint * natural_width) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (height_to_c), (gint*) (minimum_width ? &minimum_width_o : nullptr), (gint*) (natural_width ? &natural_width_o : nullptr));
  if (natural_width) *natural_width = natural_width_o;
  if (minimum_width) *minimum_width = minimum_width_o;
}
std::tuple<gint, gint> base::WidgetBase::get_preferred_width_for_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint height, gint* minimum_width, gint* natural_width);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_preferred_width_for_height;
  gint natural_width_o {};
  gint minimum_width_o {};
  auto height_to_c = height;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (height_to_c), (gint*) (&minimum_width_o), (gint*) (&natural_width_o));
  return std::make_tuple (minimum_width_o, natural_width_o);
}

// gboolean gtk_widget_get_realized (GtkWidget* widget);
// gboolean gtk_widget_get_realized (::GtkWidget* widget);
bool base::WidgetBase::get_realized () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_realized;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_receives_default (GtkWidget* widget);
// gboolean gtk_widget_get_receives_default (::GtkWidget* widget);
bool base::WidgetBase::get_receives_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_receives_default;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkSizeRequestMode gtk_widget_get_request_mode (GtkWidget* widget);
// ::GtkSizeRequestMode gtk_widget_get_request_mode (::GtkWidget* widget);
Gtk::SizeRequestMode base::WidgetBase::get_request_mode () noexcept
{
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_widget_get_requisition (GtkWidget* widget, GtkRequisition* requisition);
// void gtk_widget_get_requisition (::GtkWidget* widget, ::GtkRequisition* requisition);
// IGNORE; deprecated

// GdkWindow* gtk_widget_get_root_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_root_window (::GtkWidget* widget);
// IGNORE; deprecated

// gint gtk_widget_get_scale_factor (GtkWidget* widget);
// gint gtk_widget_get_scale_factor (::GtkWidget* widget);
gint base::WidgetBase::get_scale_factor () noexcept
{
  typedef gint (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_scale_factor;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GdkScreen* gtk_widget_get_screen (GtkWidget* widget);
// ::GdkScreen* gtk_widget_get_screen (::GtkWidget* widget);
Gdk::Screen base::WidgetBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_screen;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_get_sensitive (GtkWidget* widget);
// gboolean gtk_widget_get_sensitive (::GtkWidget* widget);
bool base::WidgetBase::get_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GtkSettings* gtk_widget_get_settings (GtkWidget* widget);
// ::GtkSettings* gtk_widget_get_settings (::GtkWidget* widget);
Gtk::Settings base::WidgetBase::get_settings () noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_settings;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_widget_get_size_request (GtkWidget* widget, gint* width, gint* height);
// void gtk_widget_get_size_request (::GtkWidget* widget, gint* width, gint* height);
void base::WidgetBase::get_size_request (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_size_request;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::WidgetBase::get_size_request () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_size_request;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  return std::make_tuple (width_o, height_o);
}

// GtkStateType gtk_widget_get_state (GtkWidget* widget);
//  gtk_widget_get_state (::GtkWidget* widget);
// IGNORE; deprecated

// GtkStateFlags gtk_widget_get_state_flags (GtkWidget* widget);
// ::GtkStateFlags gtk_widget_get_state_flags (::GtkWidget* widget);
Gtk::StateFlags base::WidgetBase::get_state_flags () noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_state_flags;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkStyle* gtk_widget_get_style (GtkWidget* widget);
// ::GtkStyle* gtk_widget_get_style (::GtkWidget* widget);
// IGNORE; deprecated

// GtkStyleContext* gtk_widget_get_style_context (GtkWidget* widget);
// ::GtkStyleContext* gtk_widget_get_style_context (::GtkWidget* widget);
Gtk::StyleContext base::WidgetBase::get_style_context () noexcept
{
  typedef ::GtkStyleContext* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_style_context;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_widget_get_support_multidevice (GtkWidget* widget);
// gboolean gtk_widget_get_support_multidevice (::GtkWidget* widget);
bool base::WidgetBase::get_support_multidevice () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_support_multidevice;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GObject* gtk_widget_get_template_child (GtkWidget* widget, GType widget_type, const gchar* name);
// ::GObject* gtk_widget_get_template_child (::GtkWidget* widget, GType widget_type, const char* name);
GObject::Object base::WidgetBase::get_template_child (GType widget_type, const std::string & name) noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GtkWidget* widget, GType widget_type, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_template_child;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto widget_type_to_c = widget_type;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (GType) (widget_type_to_c), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* gtk_widget_get_tooltip_markup (GtkWidget* widget);
// char* gtk_widget_get_tooltip_markup (::GtkWidget* widget);
std::string base::WidgetBase::get_tooltip_markup () noexcept
{
  typedef char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_tooltip_markup;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_widget_get_tooltip_text (GtkWidget* widget);
// char* gtk_widget_get_tooltip_text (::GtkWidget* widget);
std::string base::WidgetBase::get_tooltip_text () noexcept
{
  typedef char* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_tooltip_text;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkWindow* gtk_widget_get_tooltip_window (GtkWidget* widget);
// ::GtkWindow* gtk_widget_get_tooltip_window (::GtkWidget* widget);
Gtk::Window base::WidgetBase::get_tooltip_window () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_tooltip_window;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_widget_get_toplevel (GtkWidget* widget);
// ::GtkWidget* gtk_widget_get_toplevel (::GtkWidget* widget);
Gtk::Widget base::WidgetBase::get_toplevel () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_toplevel;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkAlign gtk_widget_get_valign (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_valign (::GtkWidget* widget);
Gtk::Align base::WidgetBase::get_valign () noexcept
{
  typedef ::GtkAlign (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_valign;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GtkAlign gtk_widget_get_valign_with_baseline (GtkWidget* widget);
// ::GtkAlign gtk_widget_get_valign_with_baseline (::GtkWidget* widget);
Gtk::Align base::WidgetBase::get_valign_with_baseline () noexcept
{
  typedef ::GtkAlign (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_valign_with_baseline;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_widget_get_vexpand (GtkWidget* widget);
// gboolean gtk_widget_get_vexpand (::GtkWidget* widget);
bool base::WidgetBase::get_vexpand () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_vexpand;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_vexpand_set (GtkWidget* widget);
// gboolean gtk_widget_get_vexpand_set (::GtkWidget* widget);
bool base::WidgetBase::get_vexpand_set () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_vexpand_set;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_get_visible (GtkWidget* widget);
// gboolean gtk_widget_get_visible (::GtkWidget* widget);
bool base::WidgetBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// GdkVisual* gtk_widget_get_visual (GtkWidget* widget);
// ::GdkVisual* gtk_widget_get_visual (::GtkWidget* widget);
Gdk::Visual base::WidgetBase::get_visual () noexcept
{
  typedef ::GdkVisual* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_visual;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkWindow* gtk_widget_get_window (GtkWidget* widget);
// ::GdkWindow* gtk_widget_get_window (::GtkWidget* widget);
Gdk::Window base::WidgetBase::get_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_get_window;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_grab_add (GtkWidget* widget);
// void gtk_grab_add (::GtkWidget* widget);
void base::WidgetBase::grab_add () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grab_add;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_grab_default (GtkWidget* widget);
// void gtk_widget_grab_default (::GtkWidget* widget);
void base::WidgetBase::grab_default () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_grab_default;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_grab_focus (GtkWidget* widget);
// void gtk_widget_grab_focus (::GtkWidget* widget);
void base::WidgetBase::grab_focus () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_grab_focus;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_grab_remove (GtkWidget* widget);
// void gtk_grab_remove (::GtkWidget* widget);
void base::WidgetBase::grab_remove () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_grab_remove;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_has_default (GtkWidget* widget);
// gboolean gtk_widget_has_default (::GtkWidget* widget);
bool base::WidgetBase::has_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_has_default;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_focus (GtkWidget* widget);
// gboolean gtk_widget_has_focus (::GtkWidget* widget);
bool base::WidgetBase::has_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_has_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_grab (GtkWidget* widget);
// gboolean gtk_widget_has_grab (::GtkWidget* widget);
bool base::WidgetBase::has_grab () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_has_grab;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_rc_style (GtkWidget* widget);
// gboolean gtk_widget_has_rc_style (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_has_screen (GtkWidget* widget);
// gboolean gtk_widget_has_screen (::GtkWidget* widget);
bool base::WidgetBase::has_screen () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_has_screen;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_has_visible_focus (GtkWidget* widget);
// gboolean gtk_widget_has_visible_focus (::GtkWidget* widget);
bool base::WidgetBase::has_visible_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_has_visible_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_hide (GtkWidget* widget);
// void gtk_widget_hide (::GtkWidget* widget);
void base::WidgetBase::hide () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_hide;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_hide_on_delete (GtkWidget* widget);
// gboolean gtk_widget_hide_on_delete (::GtkWidget* widget);
bool base::WidgetBase::hide_on_delete () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_hide_on_delete;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_in_destruction (GtkWidget* widget);
// gboolean gtk_widget_in_destruction (::GtkWidget* widget);
bool base::WidgetBase::in_destruction () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_in_destruction;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_widget_init_template (GtkWidget* widget);
// void gtk_widget_init_template (::GtkWidget* widget);
void base::WidgetBase::init_template () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_init_template;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_input_shape_combine_region (GtkWidget* widget, cairo_region_t* region);
// void gtk_widget_input_shape_combine_region (::GtkWidget* widget, ::cairo_region_t* region);
void base::WidgetBase::input_shape_combine_region (cairo::Region region) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_input_shape_combine_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::WidgetBase::input_shape_combine_region () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_input_shape_combine_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gtk_widget_insert_action_group (GtkWidget* widget, const gchar* name, GActionGroup* group);
// void gtk_widget_insert_action_group (::GtkWidget* widget, const char* name, ::GActionGroup* group);
void base::WidgetBase::insert_action_group (const std::string & name, Gio::ActionGroup group) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GActionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_insert_action_group;
  auto group_to_c = gi::unwrap (group, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GActionGroup*) (group_to_c));
}
void base::WidgetBase::insert_action_group (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name, ::GActionGroup* group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_insert_action_group;
  auto group_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c), (::GActionGroup*) (group_to_c));
}

// gboolean gtk_widget_intersect (GtkWidget* widget, const GdkRectangle* area, GdkRectangle* intersection);
// gboolean gtk_widget_intersect (::GtkWidget* widget, const ::GdkRectangle* area, ::GdkRectangle* intersection);
bool base::WidgetBase::intersect (const Gdk::Rectangle & area, Gdk::Rectangle * intersection) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, const ::GdkRectangle* area, ::GdkRectangle* intersection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_intersect;
  traits::unset_wrapper<::GdkRectangle>::type intersection_c;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const ::GdkRectangle*) (area_to_c), (::GdkRectangle*) (intersection ? (::GdkRectangle*) &intersection_c : nullptr));
  if (intersection) *intersection = gi::wrap ((::GdkRectangle*) &intersection_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::Rectangle> base::WidgetBase::intersect (const Gdk::Rectangle & area) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, const ::GdkRectangle* area, ::GdkRectangle* intersection);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_intersect;
  traits::unset_wrapper<::GdkRectangle>::type intersection_c;
  auto area_to_c = gi::unwrap (area, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (const ::GdkRectangle*) (area_to_c), (::GdkRectangle*) ((::GdkRectangle*) &intersection_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRectangle*) &intersection_c, gi::transfer_none, gi::direction_out));
}

// gboolean gtk_widget_is_ancestor (GtkWidget* widget, GtkWidget* ancestor);
// gboolean gtk_widget_is_ancestor (::GtkWidget* widget, ::GtkWidget* ancestor);
bool base::WidgetBase::is_ancestor (Gtk::Widget ancestor) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* ancestor);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_ancestor;
  auto ancestor_to_c = gi::unwrap (ancestor, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (ancestor_to_c));
  return _temp_ret;
}

// gboolean gtk_widget_is_composited (GtkWidget* widget);
// gboolean gtk_widget_is_composited (::GtkWidget* widget);
// IGNORE; deprecated

// gboolean gtk_widget_is_drawable (GtkWidget* widget);
// gboolean gtk_widget_is_drawable (::GtkWidget* widget);
bool base::WidgetBase::is_drawable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_drawable;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_focus (GtkWidget* widget);
// gboolean gtk_widget_is_focus (::GtkWidget* widget);
bool base::WidgetBase::is_focus () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_focus;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_sensitive (GtkWidget* widget);
// gboolean gtk_widget_is_sensitive (::GtkWidget* widget);
bool base::WidgetBase::is_sensitive () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_sensitive;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_toplevel (GtkWidget* widget);
// gboolean gtk_widget_is_toplevel (::GtkWidget* widget);
bool base::WidgetBase::is_toplevel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_toplevel;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_is_visible (GtkWidget* widget);
// gboolean gtk_widget_is_visible (::GtkWidget* widget);
bool base::WidgetBase::is_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_is_visible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_widget_keynav_failed (GtkWidget* widget, GtkDirectionType direction);
// gboolean gtk_widget_keynav_failed (::GtkWidget* widget, ::GtkDirectionType direction);
bool base::WidgetBase::keynav_failed (Gtk::DirectionType direction) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_keynav_failed;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// GList* gtk_widget_list_accel_closures (GtkWidget* widget);
// ::GList* gtk_widget_list_accel_closures (::GtkWidget* widget);
std::vector<GObject::Closure> base::WidgetBase::list_accel_closures () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_list_accel_closures;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::detail::wrap_list<GObject::Closure> (_temp_ret, gi::transfer_container);
}

// const gchar** gtk_widget_list_action_prefixes (GtkWidget* widget);
// const char** gtk_widget_list_action_prefixes (::GtkWidget* widget);
std::vector<std::string> base::WidgetBase::list_action_prefixes () noexcept
{
  typedef const char** (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_list_action_prefixes;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}

// GList* gtk_widget_list_mnemonic_labels (GtkWidget* widget);
// ::GList* gtk_widget_list_mnemonic_labels (::GtkWidget* widget);
std::vector<Gtk::Widget> base::WidgetBase::list_mnemonic_labels () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_list_mnemonic_labels;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::detail::wrap_list<Gtk::Widget> (_temp_ret, gi::transfer_container);
}

// void gtk_widget_map (GtkWidget* widget);
// void gtk_widget_map (::GtkWidget* widget);
void base::WidgetBase::map () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_map;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_mnemonic_activate (GtkWidget* widget, gboolean group_cycling);
// gboolean gtk_widget_mnemonic_activate (::GtkWidget* widget, gboolean group_cycling);
bool base::WidgetBase::mnemonic_activate (gboolean group_cycling) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gboolean group_cycling);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_mnemonic_activate;
  auto group_cycling_to_c = group_cycling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (group_cycling_to_c));
  return _temp_ret;
}

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
void base::WidgetBase::queue_allocate () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_allocate;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_compute_expand (GtkWidget* widget);
// void gtk_widget_queue_compute_expand (::GtkWidget* widget);
void base::WidgetBase::queue_compute_expand () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_compute_expand;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_draw (GtkWidget* widget);
// void gtk_widget_queue_draw (::GtkWidget* widget);
void base::WidgetBase::queue_draw () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_draw;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_draw_area (GtkWidget* widget, gint x, gint y, gint width, gint height);
// void gtk_widget_queue_draw_area (::GtkWidget* widget, gint x, gint y, gint width, gint height);
void base::WidgetBase::queue_draw_area (gint x, gint y, gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint x, gint y, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_draw_area;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_widget_queue_draw_region (GtkWidget* widget, const cairo_region_t* region);
// void gtk_widget_queue_draw_region (::GtkWidget* widget, const ::cairo_region_t* region);
void base::WidgetBase::queue_draw_region (const cairo::Region & region) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_draw_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_region_t*) (region_to_c));
}

// void gtk_widget_queue_resize (GtkWidget* widget);
// void gtk_widget_queue_resize (::GtkWidget* widget);
void base::WidgetBase::queue_resize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_resize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_queue_resize_no_redraw (GtkWidget* widget);
// void gtk_widget_queue_resize_no_redraw (::GtkWidget* widget);
void base::WidgetBase::queue_resize_no_redraw () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_queue_resize_no_redraw;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_realize (GtkWidget* widget);
// void gtk_widget_realize (::GtkWidget* widget);
void base::WidgetBase::realize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_realize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// cairo_region_t* gtk_widget_region_intersect (GtkWidget* widget, const cairo_region_t* region);
// ::cairo_region_t* gtk_widget_region_intersect (::GtkWidget* widget, const ::cairo_region_t* region);
// IGNORE; deprecated

// void gtk_widget_register_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_register_window (::GtkWidget* widget, ::GdkWindow* window);
void base::WidgetBase::register_window (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_register_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// gboolean gtk_widget_remove_accelerator (GtkWidget* widget, GtkAccelGroup* accel_group, guint accel_key, GdkModifierType accel_mods);
// gboolean gtk_widget_remove_accelerator (::GtkWidget* widget, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
bool base::WidgetBase::remove_accelerator (Gtk::AccelGroup accel_group, guint accel_key, Gdk::ModifierType accel_mods) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkAccelGroup* accel_group, guint accel_key, ::GdkModifierType accel_mods);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_remove_accelerator;
  auto accel_mods_to_c = gi::unwrap (accel_mods);
  auto accel_key_to_c = accel_key;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAccelGroup*) (accel_group_to_c), (guint) (accel_key_to_c), (::GdkModifierType) (accel_mods_to_c));
  return _temp_ret;
}

// void gtk_widget_remove_mnemonic_label (GtkWidget* widget, GtkWidget* label);
// void gtk_widget_remove_mnemonic_label (::GtkWidget* widget, ::GtkWidget* label);
void base::WidgetBase::remove_mnemonic_label (Gtk::Widget label) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_remove_mnemonic_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (label_to_c));
}

// void gtk_widget_remove_tick_callback (GtkWidget* widget, guint id);
// void gtk_widget_remove_tick_callback (::GtkWidget* widget, guint id);
void base::WidgetBase::remove_tick_callback (guint id) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, guint id);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_remove_tick_callback;
  auto id_to_c = id;
  call_wrap_v ((::GtkWidget*) (gobj_()), (guint) (id_to_c));
}

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
void base::WidgetBase::reset_style () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_reset_style;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gint gtk_widget_send_expose (GtkWidget* widget, GdkEvent* event);
// gint gtk_widget_send_expose (::GtkWidget* widget,  event);
// IGNORE; deprecated

// gboolean gtk_widget_send_focus_change (GtkWidget* widget, GdkEvent* event);
// gboolean gtk_widget_send_focus_change (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// void gtk_widget_set_accel_path (GtkWidget* widget, const gchar* accel_path, GtkAccelGroup* accel_group);
// void gtk_widget_set_accel_path (::GtkWidget* widget, const char* accel_path, ::GtkAccelGroup* accel_group);
void base::WidgetBase::set_accel_path (const std::string & accel_path, Gtk::AccelGroup accel_group) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* accel_path, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_accel_path;
  auto accel_group_to_c = gi::unwrap (accel_group, gi::transfer_none, gi::direction_in);
  auto accel_path_to_c = gi::unwrap (accel_path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (accel_path_to_c), (::GtkAccelGroup*) (accel_group_to_c));
}
void base::WidgetBase::set_accel_path () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* accel_path, ::GtkAccelGroup* accel_group);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_accel_path;
  auto accel_group_to_c = nullptr;
  auto accel_path_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (accel_path_to_c), (::GtkAccelGroup*) (accel_group_to_c));
}

// void gtk_widget_set_allocation (GtkWidget* widget, const GtkAllocation* allocation);
// void gtk_widget_set_allocation (::GtkWidget* widget, const ::GtkAllocation* allocation);
void base::WidgetBase::set_allocation (const Gtk::Allocation & allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_allocation;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::GtkAllocation*) (allocation_to_c));
}

// void gtk_widget_set_app_paintable (GtkWidget* widget, gboolean app_paintable);
// void gtk_widget_set_app_paintable (::GtkWidget* widget, gboolean app_paintable);
void base::WidgetBase::set_app_paintable (gboolean app_paintable) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean app_paintable);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_app_paintable;
  auto app_paintable_to_c = app_paintable;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (app_paintable_to_c));
}

// void gtk_widget_set_can_default (GtkWidget* widget, gboolean can_default);
// void gtk_widget_set_can_default (::GtkWidget* widget, gboolean can_default);
void base::WidgetBase::set_can_default (gboolean can_default) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean can_default);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_can_default;
  auto can_default_to_c = can_default;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (can_default_to_c));
}

// void gtk_widget_set_can_focus (GtkWidget* widget, gboolean can_focus);
// void gtk_widget_set_can_focus (::GtkWidget* widget, gboolean can_focus);
void base::WidgetBase::set_can_focus (gboolean can_focus) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean can_focus);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_can_focus;
  auto can_focus_to_c = can_focus;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (can_focus_to_c));
}

// void gtk_widget_set_child_visible (GtkWidget* widget, gboolean is_visible);
// void gtk_widget_set_child_visible (::GtkWidget* widget, gboolean is_visible);
void base::WidgetBase::set_child_visible (gboolean is_visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean is_visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_child_visible;
  auto is_visible_to_c = is_visible;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (is_visible_to_c));
}

// void gtk_widget_set_clip (GtkWidget* widget, const GtkAllocation* clip);
// void gtk_widget_set_clip (::GtkWidget* widget, const ::GtkAllocation* clip);
void base::WidgetBase::set_clip (const Gtk::Allocation & clip) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::GtkAllocation* clip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_clip;
  auto clip_to_c = gi::unwrap (clip, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::GtkAllocation*) (clip_to_c));
}

// void gtk_widget_set_composite_name (GtkWidget* widget, const gchar* name);
// void gtk_widget_set_composite_name (::GtkWidget* widget, const char* name);
// IGNORE; deprecated

// void gtk_widget_set_device_enabled (GtkWidget* widget, GdkDevice* device, gboolean enabled);
// void gtk_widget_set_device_enabled (::GtkWidget* widget, ::GdkDevice* device, gboolean enabled);
void base::WidgetBase::set_device_enabled (Gdk::Device device, gboolean enabled) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device, gboolean enabled);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_device_enabled;
  auto enabled_to_c = enabled;
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c), (gboolean) (enabled_to_c));
}

// void gtk_widget_set_device_events (GtkWidget* widget, GdkDevice* device, GdkEventMask events);
// void gtk_widget_set_device_events (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
void base::WidgetBase::set_device_events (Gdk::Device device, Gdk::EventMask events) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDevice* device, ::GdkEventMask events);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_device_events;
  auto events_to_c = gi::unwrap (events);
  auto device_to_c = gi::unwrap (device, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDevice*) (device_to_c), (::GdkEventMask) (events_to_c));
}

// void gtk_widget_set_direction (GtkWidget* widget, GtkTextDirection dir);
// void gtk_widget_set_direction (::GtkWidget* widget, ::GtkTextDirection dir);
void base::WidgetBase::set_direction (Gtk::TextDirection dir) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTextDirection dir);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_direction;
  auto dir_to_c = gi::unwrap (dir);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTextDirection) (dir_to_c));
}

// void gtk_widget_set_double_buffered (GtkWidget* widget, gboolean double_buffered);
// void gtk_widget_set_double_buffered (::GtkWidget* widget, gboolean double_buffered);
// IGNORE; deprecated

// void gtk_widget_set_events (GtkWidget* widget, gint events);
// void gtk_widget_set_events (::GtkWidget* widget, gint events);
void base::WidgetBase::set_events (gint events) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint events);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_events;
  auto events_to_c = events;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (events_to_c));
}

// void gtk_widget_set_focus_on_click (GtkWidget* widget, gboolean focus_on_click);
// void gtk_widget_set_focus_on_click (::GtkWidget* widget, gboolean focus_on_click);
void base::WidgetBase::set_focus_on_click (gboolean focus_on_click) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean focus_on_click);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_focus_on_click;
  auto focus_on_click_to_c = focus_on_click;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (focus_on_click_to_c));
}

// void gtk_widget_set_font_map (GtkWidget* widget, PangoFontMap* font_map);
// void gtk_widget_set_font_map (::GtkWidget* widget, ::PangoFontMap* font_map);
void base::WidgetBase::set_font_map (Pango::FontMap font_map) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_font_map;
  auto font_map_to_c = gi::unwrap (font_map, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}
void base::WidgetBase::set_font_map () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::PangoFontMap* font_map);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_font_map;
  auto font_map_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::PangoFontMap*) (font_map_to_c));
}

// void gtk_widget_set_font_options (GtkWidget* widget, const cairo_font_options_t* options);
// void gtk_widget_set_font_options (::GtkWidget* widget, const ::cairo_font_options_t* options);
void base::WidgetBase::set_font_options (const cairo::FontOptions & options) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_font_options;
  auto options_to_c = gi::unwrap (options, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}
void base::WidgetBase::set_font_options () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_font_options_t* options);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_font_options;
  auto options_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_font_options_t*) (options_to_c));
}

// void gtk_widget_set_halign (GtkWidget* widget, GtkAlign align);
// void gtk_widget_set_halign (::GtkWidget* widget, ::GtkAlign align);
void base::WidgetBase::set_halign (Gtk::Align align) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAlign align);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_halign;
  auto align_to_c = gi::unwrap (align);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAlign) (align_to_c));
}

// void gtk_widget_set_has_tooltip (GtkWidget* widget, gboolean has_tooltip);
// void gtk_widget_set_has_tooltip (::GtkWidget* widget, gboolean has_tooltip);
void base::WidgetBase::set_has_tooltip (gboolean has_tooltip) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean has_tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_has_tooltip;
  auto has_tooltip_to_c = has_tooltip;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (has_tooltip_to_c));
}

// void gtk_widget_set_has_window (GtkWidget* widget, gboolean has_window);
// void gtk_widget_set_has_window (::GtkWidget* widget, gboolean has_window);
void base::WidgetBase::set_has_window (gboolean has_window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean has_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_has_window;
  auto has_window_to_c = has_window;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (has_window_to_c));
}

// void gtk_widget_set_hexpand (GtkWidget* widget, gboolean expand);
// void gtk_widget_set_hexpand (::GtkWidget* widget, gboolean expand);
void base::WidgetBase::set_hexpand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_hexpand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_widget_set_hexpand_set (GtkWidget* widget, gboolean set);
// void gtk_widget_set_hexpand_set (::GtkWidget* widget, gboolean set);
void base::WidgetBase::set_hexpand_set (gboolean set) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean set);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_hexpand_set;
  auto set_to_c = set;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (set_to_c));
}

// void gtk_widget_set_mapped (GtkWidget* widget, gboolean mapped);
// void gtk_widget_set_mapped (::GtkWidget* widget, gboolean mapped);
void base::WidgetBase::set_mapped (gboolean mapped) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean mapped);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_mapped;
  auto mapped_to_c = mapped;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (mapped_to_c));
}

// void gtk_widget_set_margin_bottom (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_bottom (::GtkWidget* widget, gint margin);
void base::WidgetBase::set_margin_bottom (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_margin_bottom;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_end (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_end (::GtkWidget* widget, gint margin);
void base::WidgetBase::set_margin_end (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_margin_end;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_left (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_left (::GtkWidget* widget, gint margin);
// IGNORE; deprecated

// void gtk_widget_set_margin_right (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_right (::GtkWidget* widget, gint margin);
// IGNORE; deprecated

// void gtk_widget_set_margin_start (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_start (::GtkWidget* widget, gint margin);
void base::WidgetBase::set_margin_start (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_margin_start;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_margin_top (GtkWidget* widget, gint margin);
// void gtk_widget_set_margin_top (::GtkWidget* widget, gint margin);
void base::WidgetBase::set_margin_top (gint margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_margin_top;
  auto margin_to_c = margin;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (margin_to_c));
}

// void gtk_widget_set_name (GtkWidget* widget, const gchar* name);
// void gtk_widget_set_name (::GtkWidget* widget, const char* name);
void base::WidgetBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_widget_set_no_show_all (GtkWidget* widget, gboolean no_show_all);
// void gtk_widget_set_no_show_all (::GtkWidget* widget, gboolean no_show_all);
void base::WidgetBase::set_no_show_all (gboolean no_show_all) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean no_show_all);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_no_show_all;
  auto no_show_all_to_c = no_show_all;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (no_show_all_to_c));
}

// void gtk_widget_set_opacity (GtkWidget* widget, double opacity);
// void gtk_widget_set_opacity (::GtkWidget* widget, gdouble opacity);
void base::WidgetBase::set_opacity (gdouble opacity) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gdouble opacity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_opacity;
  auto opacity_to_c = opacity;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gdouble) (opacity_to_c));
}

// void gtk_widget_set_parent (GtkWidget* widget, GtkWidget* parent);
// void gtk_widget_set_parent (::GtkWidget* widget, ::GtkWidget* parent);
void base::WidgetBase::set_parent (Gtk::Widget parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (parent_to_c));
}

// void gtk_widget_set_parent_window (GtkWidget* widget, GdkWindow* parent_window);
// void gtk_widget_set_parent_window (::GtkWidget* widget, ::GdkWindow* parent_window);
void base::WidgetBase::set_parent_window (Gdk::Window parent_window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkWindow* parent_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_parent_window;
  auto parent_window_to_c = gi::unwrap (parent_window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkWindow*) (parent_window_to_c));
}

// void gtk_widget_set_realized (GtkWidget* widget, gboolean realized);
// void gtk_widget_set_realized (::GtkWidget* widget, gboolean realized);
void base::WidgetBase::set_realized (gboolean realized) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean realized);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_realized;
  auto realized_to_c = realized;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (realized_to_c));
}

// void gtk_widget_set_receives_default (GtkWidget* widget, gboolean receives_default);
// void gtk_widget_set_receives_default (::GtkWidget* widget, gboolean receives_default);
void base::WidgetBase::set_receives_default (gboolean receives_default) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean receives_default);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_receives_default;
  auto receives_default_to_c = receives_default;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (receives_default_to_c));
}

// void gtk_widget_set_redraw_on_allocate (GtkWidget* widget, gboolean redraw_on_allocate);
// void gtk_widget_set_redraw_on_allocate (::GtkWidget* widget, gboolean redraw_on_allocate);
void base::WidgetBase::set_redraw_on_allocate (gboolean redraw_on_allocate) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean redraw_on_allocate);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_redraw_on_allocate;
  auto redraw_on_allocate_to_c = redraw_on_allocate;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (redraw_on_allocate_to_c));
}

// void gtk_widget_set_sensitive (GtkWidget* widget, gboolean sensitive);
// void gtk_widget_set_sensitive (::GtkWidget* widget, gboolean sensitive);
void base::WidgetBase::set_sensitive (gboolean sensitive) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean sensitive);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_sensitive;
  auto sensitive_to_c = sensitive;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (sensitive_to_c));
}

// void gtk_widget_set_size_request (GtkWidget* widget, gint width, gint height);
// void gtk_widget_set_size_request (::GtkWidget* widget, gint width, gint height);
void base::WidgetBase::set_size_request (gint width, gint height) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gint width, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_size_request;
  auto height_to_c = height;
  auto width_to_c = width;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (width_to_c), (gint) (height_to_c));
}

// void gtk_widget_set_state (GtkWidget* widget, GtkStateType state);
// void gtk_widget_set_state (::GtkWidget* widget,  state);
// IGNORE; deprecated

// void gtk_widget_set_state_flags (GtkWidget* widget, GtkStateFlags flags, gboolean clear);
// void gtk_widget_set_state_flags (::GtkWidget* widget, ::GtkStateFlags flags, gboolean clear);
void base::WidgetBase::set_state_flags (Gtk::StateFlags flags, gboolean clear) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags flags, gboolean clear);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_state_flags;
  auto clear_to_c = clear;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (flags_to_c), (gboolean) (clear_to_c));
}

// void gtk_widget_set_style (GtkWidget* widget, GtkStyle* style);
// void gtk_widget_set_style (::GtkWidget* widget, ::GtkStyle* style);
// IGNORE; deprecated

// void gtk_widget_set_support_multidevice (GtkWidget* widget, gboolean support_multidevice);
// void gtk_widget_set_support_multidevice (::GtkWidget* widget, gboolean support_multidevice);
void base::WidgetBase::set_support_multidevice (gboolean support_multidevice) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean support_multidevice);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_support_multidevice;
  auto support_multidevice_to_c = support_multidevice;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (support_multidevice_to_c));
}

// void gtk_widget_set_tooltip_markup (GtkWidget* widget, const gchar* markup);
// void gtk_widget_set_tooltip_markup (::GtkWidget* widget, const char* markup);
void base::WidgetBase::set_tooltip_markup (const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (markup_to_c));
}
void base::WidgetBase::set_tooltip_markup () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_markup;
  auto markup_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_widget_set_tooltip_text (GtkWidget* widget, const gchar* text);
// void gtk_widget_set_tooltip_text (::GtkWidget* widget, const char* text);
void base::WidgetBase::set_tooltip_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
}
void base::WidgetBase::set_tooltip_text () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_text;
  auto text_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_widget_set_tooltip_window (GtkWidget* widget, GtkWindow* custom_window);
// void gtk_widget_set_tooltip_window (::GtkWidget* widget, ::GtkWindow* custom_window);
void base::WidgetBase::set_tooltip_window (Gtk::Window custom_window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWindow* custom_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_window;
  auto custom_window_to_c = gi::unwrap (custom_window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWindow*) (custom_window_to_c));
}
void base::WidgetBase::set_tooltip_window () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWindow* custom_window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_tooltip_window;
  auto custom_window_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWindow*) (custom_window_to_c));
}

// void gtk_widget_set_valign (GtkWidget* widget, GtkAlign align);
// void gtk_widget_set_valign (::GtkWidget* widget, ::GtkAlign align);
void base::WidgetBase::set_valign (Gtk::Align align) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAlign align);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_valign;
  auto align_to_c = gi::unwrap (align);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAlign) (align_to_c));
}

// void gtk_widget_set_vexpand (GtkWidget* widget, gboolean expand);
// void gtk_widget_set_vexpand (::GtkWidget* widget, gboolean expand);
void base::WidgetBase::set_vexpand (gboolean expand) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean expand);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_vexpand;
  auto expand_to_c = expand;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (expand_to_c));
}

// void gtk_widget_set_vexpand_set (GtkWidget* widget, gboolean set);
// void gtk_widget_set_vexpand_set (::GtkWidget* widget, gboolean set);
void base::WidgetBase::set_vexpand_set (gboolean set) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean set);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_vexpand_set;
  auto set_to_c = set;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (set_to_c));
}

// void gtk_widget_set_visible (GtkWidget* widget, gboolean visible);
// void gtk_widget_set_visible (::GtkWidget* widget, gboolean visible);
void base::WidgetBase::set_visible (gboolean visible) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean visible);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_visible;
  auto visible_to_c = visible;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (visible_to_c));
}

// void gtk_widget_set_visual (GtkWidget* widget, GdkVisual* visual);
// void gtk_widget_set_visual (::GtkWidget* widget, ::GdkVisual* visual);
void base::WidgetBase::set_visual (Gdk::Visual visual) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkVisual* visual);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_visual;
  auto visual_to_c = gi::unwrap (visual, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkVisual*) (visual_to_c));
}
void base::WidgetBase::set_visual () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkVisual* visual);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_visual;
  auto visual_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkVisual*) (visual_to_c));
}

// void gtk_widget_set_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_set_window (::GtkWidget* widget, ::GdkWindow* window);
void base::WidgetBase::set_window (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_set_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// void gtk_widget_shape_combine_region (GtkWidget* widget, cairo_region_t* region);
// void gtk_widget_shape_combine_region (::GtkWidget* widget, ::cairo_region_t* region);
void base::WidgetBase::shape_combine_region (cairo::Region region) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_shape_combine_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_region_t*) (region_to_c));
}
void base::WidgetBase::shape_combine_region () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_shape_combine_region;
  auto region_to_c = nullptr;
  call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_region_t*) (region_to_c));
}

// void gtk_widget_show (GtkWidget* widget);
// void gtk_widget_show (::GtkWidget* widget);
void base::WidgetBase::show () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_show;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_show_all (GtkWidget* widget);
// void gtk_widget_show_all (::GtkWidget* widget);
void base::WidgetBase::show_all () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_show_all;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_show_now (GtkWidget* widget);
// void gtk_widget_show_now (::GtkWidget* widget);
void base::WidgetBase::show_now () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_show_now;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_size_allocate (GtkWidget* widget, GtkAllocation* allocation);
// void gtk_widget_size_allocate (::GtkWidget* widget, ::GtkAllocation* allocation);
void base::WidgetBase::size_allocate (Gtk::Allocation allocation) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_size_allocate;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) (allocation_to_c));
}

// void gtk_widget_size_allocate_with_baseline (GtkWidget* widget, GtkAllocation* allocation, gint baseline);
// void gtk_widget_size_allocate_with_baseline (::GtkWidget* widget, ::GtkAllocation* allocation, gint baseline);
void base::WidgetBase::size_allocate_with_baseline (Gtk::Allocation allocation, gint baseline) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation, gint baseline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_size_allocate_with_baseline;
  auto baseline_to_c = baseline;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) (allocation_to_c), (gint) (baseline_to_c));
}

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
void base::WidgetBase::style_get_property (const std::string & property_name, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_style_get_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const char*) (property_name_to_c), (::GValue*) (value_to_c));
}

// void gtk_widget_style_get_valist (GtkWidget* widget, const gchar* first_property_name, va_list var_args);
// void gtk_widget_style_get_valist (::GtkWidget* widget, const char* first_property_name,  var_args);
// IGNORE; not introspectable, var_args type  not supported

// void gtk_widget_thaw_child_notify (GtkWidget* widget);
// void gtk_widget_thaw_child_notify (::GtkWidget* widget);
void base::WidgetBase::thaw_child_notify () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_thaw_child_notify;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean gtk_widget_translate_coordinates (GtkWidget* src_widget, GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
// gboolean gtk_widget_translate_coordinates (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
bool base::WidgetBase::translate_coordinates (Gtk::Widget dest_widget, gint src_x, gint src_y, gint * dest_x, gint * dest_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_translate_coordinates;
  gint dest_y_o {};
  gint dest_x_o {};
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto dest_widget_to_c = gi::unwrap (dest_widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (dest_widget_to_c), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint*) (dest_x ? &dest_x_o : nullptr), (gint*) (dest_y ? &dest_y_o : nullptr));
  if (dest_y) *dest_y = dest_y_o;
  if (dest_x) *dest_x = dest_x_o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::WidgetBase::translate_coordinates (Gtk::Widget dest_widget, gint src_x, gint src_y) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkWidget* src_widget, ::GtkWidget* dest_widget, gint src_x, gint src_y, gint* dest_x, gint* dest_y);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_translate_coordinates;
  gint dest_y_o {};
  gint dest_x_o {};
  auto src_y_to_c = src_y;
  auto src_x_to_c = src_x;
  auto dest_widget_to_c = gi::unwrap (dest_widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (dest_widget_to_c), (gint) (src_x_to_c), (gint) (src_y_to_c), (gint*) (&dest_x_o), (gint*) (&dest_y_o));
  return std::make_tuple (_temp_ret, dest_x_o, dest_y_o);
}

// void gtk_widget_trigger_tooltip_query (GtkWidget* widget);
// void gtk_widget_trigger_tooltip_query (::GtkWidget* widget);
void base::WidgetBase::trigger_tooltip_query () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_trigger_tooltip_query;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unmap (GtkWidget* widget);
// void gtk_widget_unmap (::GtkWidget* widget);
void base::WidgetBase::unmap () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_unmap;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unparent (GtkWidget* widget);
// void gtk_widget_unparent (::GtkWidget* widget);
void base::WidgetBase::unparent () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_unparent;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unrealize (GtkWidget* widget);
// void gtk_widget_unrealize (::GtkWidget* widget);
void base::WidgetBase::unrealize () noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_unrealize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void gtk_widget_unregister_window (GtkWidget* widget, GdkWindow* window);
// void gtk_widget_unregister_window (::GtkWidget* widget, ::GdkWindow* window);
void base::WidgetBase::unregister_window (Gdk::Window window) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkWindow* window);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_unregister_window;
  auto window_to_c = gi::unwrap (window, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkWindow*) (window_to_c));
}

// void gtk_widget_unset_state_flags (GtkWidget* widget, GtkStateFlags flags);
// void gtk_widget_unset_state_flags (::GtkWidget* widget, ::GtkStateFlags flags);
void base::WidgetBase::unset_state_flags (Gtk::StateFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_widget_unset_state_flags;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (flags_to_c));
}






// IGNORE; deprecated



// SKIP; event type  not supported


// SKIP; event type  not supported













// SKIP; event type  not supported

// SKIP; event type  not supported



































// IGNORE; deprecated


// IGNORE; deprecated


// SKIP; object type  not supported




// IGNORE; deprecated



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_def_impl.hpp>)
#include <gtk/widget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/widget_extra_impl.hpp>)
#include <gtk/widget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void WidgetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkWidgetClass *methods = (::GtkWidgetClass *) class_struct;
  (void) methods;

  methods->button_press_event = (decltype (methods->button_press_event)) detail::method_wrapper<self, bool (*) (Gdk::EventButton event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::button_press_event_>;
  methods->button_release_event = (decltype (methods->button_release_event)) detail::method_wrapper<self, bool (*) (Gdk::EventButton event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::button_release_event_>;
  methods->can_activate_accel = (decltype (methods->can_activate_accel)) detail::method_wrapper<self, bool (*) (guint signal_id), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::can_activate_accel_>;
  methods->child_notify = (decltype (methods->child_notify)) detail::method_wrapper<self, void (*) (GObject::ParamSpec child_property), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::child_notify_>;
  methods->composited_changed = (decltype (methods->composited_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::composited_changed_>;
  methods->configure_event = (decltype (methods->configure_event)) detail::method_wrapper<self, bool (*) (Gdk::EventConfigure event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::configure_event_>;
  methods->damage_event = (decltype (methods->damage_event)) detail::method_wrapper<self, bool (*) (Gdk::EventExpose event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::damage_event_>;
  methods->delete_event = (decltype (methods->delete_event)) detail::method_wrapper<self, bool (*) (Gdk::EventAny event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::delete_event_>;
  methods->destroy = (decltype (methods->destroy)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::destroy_>;
  methods->destroy_event = (decltype (methods->destroy_event)) detail::method_wrapper<self, bool (*) (Gdk::EventAny event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::destroy_event_>;
  methods->direction_changed = (decltype (methods->direction_changed)) detail::method_wrapper<self, void (*) (Gtk::TextDirection previous_direction), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::direction_changed_>;
  methods->drag_begin = (decltype (methods->drag_begin)) detail::method_wrapper<self, void (*) (Gdk::DragContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drag_begin_>;
  methods->drag_data_delete = (decltype (methods->drag_data_delete)) detail::method_wrapper<self, void (*) (Gdk::DragContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drag_data_delete_>;
  methods->drag_data_get = (decltype (methods->drag_data_get)) detail::method_wrapper<self, void (*) (Gdk::DragContext context, Gtk::SelectionData selection_data, guint info, guint time_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_data_get_>;
  methods->drag_data_received = (decltype (methods->drag_data_received)) detail::method_wrapper<self, void (*) (Gdk::DragContext context, gint x, gint y, Gtk::SelectionData selection_data, guint info, guint time_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_data_received_>;
  methods->drag_drop = (decltype (methods->drag_drop)) detail::method_wrapper<self, bool (*) (Gdk::DragContext context, gint x, gint y, guint time_), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_drop_>;
  methods->drag_end = (decltype (methods->drag_end)) detail::method_wrapper<self, void (*) (Gdk::DragContext context), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::drag_end_>;
  methods->drag_failed = (decltype (methods->drag_failed)) detail::method_wrapper<self, bool (*) (Gdk::DragContext context, Gtk::DragResult result), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_failed_>;
  methods->drag_leave = (decltype (methods->drag_leave)) detail::method_wrapper<self, void (*) (Gdk::DragContext context, guint time_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_leave_>;
  methods->drag_motion = (decltype (methods->drag_motion)) detail::method_wrapper<self, bool (*) (Gdk::DragContext context, gint x, gint y, guint time_), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::drag_motion_>;
  methods->draw = (decltype (methods->draw)) detail::method_wrapper<self, bool (*) (cairo::Context cr), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::draw_>;
  methods->enter_notify_event = (decltype (methods->enter_notify_event)) detail::method_wrapper<self, bool (*) (Gdk::EventCrossing event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::enter_notify_event_>;
  methods->focus = (decltype (methods->focus)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::focus_>;
  methods->focus_in_event = (decltype (methods->focus_in_event)) detail::method_wrapper<self, bool (*) (Gdk::EventFocus event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::focus_in_event_>;
  methods->focus_out_event = (decltype (methods->focus_out_event)) detail::method_wrapper<self, bool (*) (Gdk::EventFocus event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::focus_out_event_>;
  methods->get_accessible = (decltype (methods->get_accessible)) detail::method_wrapper<self, Atk::Object (*) (), gi::transfer_none_t>::wrapper<&self::get_accessible_>;
  methods->get_request_mode = (decltype (methods->get_request_mode)) detail::method_wrapper<self, Gtk::SizeRequestMode (*) (), gi::transfer_none_t>::wrapper<&self::get_request_mode_>;
  methods->grab_broken_event = (decltype (methods->grab_broken_event)) detail::method_wrapper<self, bool (*) (Gdk::EventGrabBroken event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::grab_broken_event_>;
  methods->grab_focus = (decltype (methods->grab_focus)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::grab_focus_>;
  methods->grab_notify = (decltype (methods->grab_notify)) detail::method_wrapper<self, void (*) (gboolean was_grabbed), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::grab_notify_>;
  methods->hide = (decltype (methods->hide)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::hide_>;
  methods->hierarchy_changed = (decltype (methods->hierarchy_changed)) detail::method_wrapper<self, void (*) (Gtk::Widget previous_toplevel), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::hierarchy_changed_>;
  methods->key_press_event = (decltype (methods->key_press_event)) detail::method_wrapper<self, bool (*) (Gdk::EventKey event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::key_press_event_>;
  methods->key_release_event = (decltype (methods->key_release_event)) detail::method_wrapper<self, bool (*) (Gdk::EventKey event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::key_release_event_>;
  methods->keynav_failed = (decltype (methods->keynav_failed)) detail::method_wrapper<self, bool (*) (Gtk::DirectionType direction), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::keynav_failed_>;
  methods->leave_notify_event = (decltype (methods->leave_notify_event)) detail::method_wrapper<self, bool (*) (Gdk::EventCrossing event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::leave_notify_event_>;
  methods->map = (decltype (methods->map)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::map_>;
  methods->map_event = (decltype (methods->map_event)) detail::method_wrapper<self, bool (*) (Gdk::EventAny event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::map_event_>;
  methods->mnemonic_activate = (decltype (methods->mnemonic_activate)) detail::method_wrapper<self, bool (*) (gboolean group_cycling), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::mnemonic_activate_>;
  methods->motion_notify_event = (decltype (methods->motion_notify_event)) detail::method_wrapper<self, bool (*) (Gdk::EventMotion event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::motion_notify_event_>;
  methods->move_focus = (decltype (methods->move_focus)) detail::method_wrapper<self, void (*) (Gtk::DirectionType direction), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::move_focus_>;
  methods->parent_set = (decltype (methods->parent_set)) detail::method_wrapper<self, void (*) (Gtk::Widget previous_parent), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::parent_set_>;
  methods->popup_menu = (decltype (methods->popup_menu)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::popup_menu_>;
  methods->property_notify_event = (decltype (methods->property_notify_event)) detail::method_wrapper<self, bool (*) (Gdk::EventProperty event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::property_notify_event_>;
  methods->proximity_in_event = (decltype (methods->proximity_in_event)) detail::method_wrapper<self, bool (*) (Gdk::EventProximity event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::proximity_in_event_>;
  methods->proximity_out_event = (decltype (methods->proximity_out_event)) detail::method_wrapper<self, bool (*) (Gdk::EventProximity event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::proximity_out_event_>;
  methods->query_tooltip = (decltype (methods->query_tooltip)) detail::method_wrapper<self, bool (*) (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::query_tooltip_>;
  methods->queue_draw_region = (decltype (methods->queue_draw_region)) detail::method_wrapper<self, void (*) (const cairo::Region & region), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::queue_draw_region_>;
  methods->realize = (decltype (methods->realize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::realize_>;
  methods->screen_changed = (decltype (methods->screen_changed)) detail::method_wrapper<self, void (*) (Gdk::Screen previous_screen), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::screen_changed_>;
  methods->scroll_event = (decltype (methods->scroll_event)) detail::method_wrapper<self, bool (*) (Gdk::EventScroll event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::scroll_event_>;
  methods->selection_clear_event = (decltype (methods->selection_clear_event)) detail::method_wrapper<self, bool (*) (Gdk::EventSelection event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::selection_clear_event_>;
  methods->selection_get = (decltype (methods->selection_get)) detail::method_wrapper<self, void (*) (Gtk::SelectionData selection_data, guint info, guint time_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::selection_get_>;
  methods->selection_notify_event = (decltype (methods->selection_notify_event)) detail::method_wrapper<self, bool (*) (Gdk::EventSelection event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::selection_notify_event_>;
  methods->selection_received = (decltype (methods->selection_received)) detail::method_wrapper<self, void (*) (Gtk::SelectionData selection_data, guint time_), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::selection_received_>;
  methods->selection_request_event = (decltype (methods->selection_request_event)) detail::method_wrapper<self, bool (*) (Gdk::EventSelection event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::selection_request_event_>;
  methods->show = (decltype (methods->show)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::show_>;
  methods->show_all = (decltype (methods->show_all)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::show_all_>;
  methods->show_help = (decltype (methods->show_help)) detail::method_wrapper<self, bool (*) (Gtk::WidgetHelpType help_type), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::show_help_>;
  methods->size_allocate = (decltype (methods->size_allocate)) detail::method_wrapper<self, void (*) (Gtk::Allocation allocation), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::size_allocate_>;
  methods->state_flags_changed = (decltype (methods->state_flags_changed)) detail::method_wrapper<self, void (*) (Gtk::StateFlags previous_state_flags), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::state_flags_changed_>;
  methods->style_set = (decltype (methods->style_set)) detail::method_wrapper<self, void (*) (Gtk::Style previous_style), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::style_set_>;
  methods->style_updated = (decltype (methods->style_updated)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::style_updated_>;
  methods->touch_event = (decltype (methods->touch_event)) detail::method_wrapper<self, bool (*) (Gdk::EventTouch event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::touch_event_>;
  methods->unmap = (decltype (methods->unmap)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unmap_>;
  methods->unmap_event = (decltype (methods->unmap_event)) detail::method_wrapper<self, bool (*) (Gdk::EventAny event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::unmap_event_>;
  methods->unrealize = (decltype (methods->unrealize)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::unrealize_>;
  methods->window_state_event = (decltype (methods->window_state_event)) detail::method_wrapper<self, bool (*) (Gdk::EventWindowState event), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::window_state_event_>;
}

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
bool WidgetClass::button_press_event_ (Gdk::EventButton event) noexcept
{
  if (!get_struct_()->button_press_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventButton* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->button_press_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventButton*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::button_release_event (GtkWidget* widget, GdkEventButton* event);
// gboolean Widget::button_release_event (::GtkWidget* widget, ::GdkEventButton* event);
bool WidgetClass::button_release_event_ (Gdk::EventButton event) noexcept
{
  if (!get_struct_()->button_release_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventButton* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->button_release_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventButton*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::can_activate_accel (GtkWidget* widget, guint signal_id);
// gboolean Widget::can_activate_accel (::GtkWidget* widget, guint signal_id);
bool WidgetClass::can_activate_accel_ (guint signal_id) noexcept
{
  if (!get_struct_()->can_activate_accel) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, guint signal_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_activate_accel;
  auto signal_id_to_c = signal_id;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (guint) (signal_id_to_c));
  return _temp_ret;
}

// void Widget::child_notify (GtkWidget* widget, GParamSpec* child_property);
// void Widget::child_notify (::GtkWidget* widget, ::GParamSpec* child_property);
void WidgetClass::child_notify_ (GObject::ParamSpec child_property) noexcept
{
  if (!get_struct_()->child_notify) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GParamSpec* child_property);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->child_notify;
  auto child_property_to_c = gi::unwrap (child_property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GParamSpec*) (child_property_to_c));
}

// void Widget::composited_changed (GtkWidget* widget);
// void Widget::composited_changed (::GtkWidget* widget);
void WidgetClass::composited_changed_ () noexcept
{
  if (!get_struct_()->composited_changed) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->composited_changed;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::compute_expand (GtkWidget* widget, gboolean* hexpand_p, gboolean* vexpand_p);
// void Widget::compute_expand (::GtkWidget* widget, gboolean hexpand_p, gboolean vexpand_p);
// SKIP; inconsistent in vexpand_p pointer depth (1 vs 0), inconsistent in hexpand_p pointer depth (1 vs 0)

// gboolean Widget::configure_event (GtkWidget* widget, GdkEventConfigure* event);
// gboolean Widget::configure_event (::GtkWidget* widget, ::GdkEventConfigure* event);
bool WidgetClass::configure_event_ (Gdk::EventConfigure event) noexcept
{
  if (!get_struct_()->configure_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventConfigure* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->configure_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventConfigure*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::damage_event (GtkWidget* widget, GdkEventExpose* event);
// gboolean Widget::damage_event (::GtkWidget* widget, ::GdkEventExpose* event);
bool WidgetClass::damage_event_ (Gdk::EventExpose event) noexcept
{
  if (!get_struct_()->damage_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventExpose* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->damage_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventExpose*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::delete_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::delete_event (::GtkWidget* widget, ::GdkEventAny* event);
bool WidgetClass::delete_event_ (Gdk::EventAny event) noexcept
{
  if (!get_struct_()->delete_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventAny* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->delete_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventAny*) (event_to_c));
  return _temp_ret;
}

// void Widget::destroy (GtkWidget* widget);
// void Widget::destroy (::GtkWidget* widget);
void WidgetClass::destroy_ () noexcept
{
  if (!get_struct_()->destroy) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->destroy;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::destroy_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::destroy_event (::GtkWidget* widget, ::GdkEventAny* event);
bool WidgetClass::destroy_event_ (Gdk::EventAny event) noexcept
{
  if (!get_struct_()->destroy_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventAny* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->destroy_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventAny*) (event_to_c));
  return _temp_ret;
}

// void Widget::direction_changed (GtkWidget* widget, GtkTextDirection previous_direction);
// void Widget::direction_changed (::GtkWidget* widget, ::GtkTextDirection previous_direction);
void WidgetClass::direction_changed_ (Gtk::TextDirection previous_direction) noexcept
{
  if (!get_struct_()->direction_changed) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkTextDirection previous_direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->direction_changed;
  auto previous_direction_to_c = gi::unwrap (previous_direction);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkTextDirection) (previous_direction_to_c));
}

// void Widget::dispatch_child_properties_changed (GtkWidget* widget, guint n_pspecs, GParamSpec** pspecs);
// void Widget::dispatch_child_properties_changed (::GtkWidget* widget, guint n_pspecs, ::GParamSpec* pspecs);
// SKIP; inconsistent in pspecs pointer depth (2 vs 1)

// void Widget::drag_begin (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_begin (::GtkWidget* widget, ::GdkDragContext* context);
void WidgetClass::drag_begin_ (Gdk::DragContext context) noexcept
{
  if (!get_struct_()->drag_begin) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_begin;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c));
}

// void Widget::drag_data_delete (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_data_delete (::GtkWidget* widget, ::GdkDragContext* context);
void WidgetClass::drag_data_delete_ (Gdk::DragContext context) noexcept
{
  if (!get_struct_()->drag_data_delete) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_delete;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c));
}

// void Widget::drag_data_get (GtkWidget* widget, GdkDragContext* context, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_get (::GtkWidget* widget, ::GdkDragContext* context, ::GtkSelectionData* selection_data, guint info, guint time_);
void WidgetClass::drag_data_get_ (Gdk::DragContext context, Gtk::SelectionData selection_data, guint info, guint time_) noexcept
{
  if (!get_struct_()->drag_data_get) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, ::GtkSelectionData* selection_data, guint info, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_get;
  auto time__to_c = time_;
  auto info_to_c = info;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (::GtkSelectionData*) (selection_data_to_c), (guint) (info_to_c), (guint) (time__to_c));
}

// void Widget::drag_data_received (GtkWidget* widget, GdkDragContext* context, gint x, gint y, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::drag_data_received (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, ::GtkSelectionData* selection_data, guint info, guint time_);
void WidgetClass::drag_data_received_ (Gdk::DragContext context, gint x, gint y, Gtk::SelectionData selection_data, guint info, guint time_) noexcept
{
  if (!get_struct_()->drag_data_received) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, ::GtkSelectionData* selection_data, guint info, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_data_received;
  auto time__to_c = time_;
  auto info_to_c = info;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (gint) (x_to_c), (gint) (y_to_c), (::GtkSelectionData*) (selection_data_to_c), (guint) (info_to_c), (guint) (time__to_c));
}

// gboolean Widget::drag_drop (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_drop (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
bool WidgetClass::drag_drop_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept
{
  if (!get_struct_()->drag_drop) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_drop;
  auto time__to_c = time_;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (gint) (x_to_c), (gint) (y_to_c), (guint) (time__to_c));
  return _temp_ret;
}

// void Widget::drag_end (GtkWidget* widget, GdkDragContext* context);
// void Widget::drag_end (::GtkWidget* widget, ::GdkDragContext* context);
void WidgetClass::drag_end_ (Gdk::DragContext context) noexcept
{
  if (!get_struct_()->drag_end) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_end;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c));
}

// gboolean Widget::drag_failed (GtkWidget* widget, GdkDragContext* context, GtkDragResult result);
// gboolean Widget::drag_failed (::GtkWidget* widget, ::GdkDragContext* context, ::GtkDragResult result);
bool WidgetClass::drag_failed_ (Gdk::DragContext context, Gtk::DragResult result) noexcept
{
  if (!get_struct_()->drag_failed) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, ::GtkDragResult result);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_failed;
  auto result_to_c = gi::unwrap (result);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (::GtkDragResult) (result_to_c));
  return _temp_ret;
}

// void Widget::drag_leave (GtkWidget* widget, GdkDragContext* context, guint time_);
// void Widget::drag_leave (::GtkWidget* widget, ::GdkDragContext* context, guint time_);
void WidgetClass::drag_leave_ (Gdk::DragContext context, guint time_) noexcept
{
  if (!get_struct_()->drag_leave) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_leave;
  auto time__to_c = time_;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (guint) (time__to_c));
}

// gboolean Widget::drag_motion (GtkWidget* widget, GdkDragContext* context, gint x, gint y, guint time_);
// gboolean Widget::drag_motion (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
bool WidgetClass::drag_motion_ (Gdk::DragContext context, gint x, gint y, guint time_) noexcept
{
  if (!get_struct_()->drag_motion) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkDragContext* context, gint x, gint y, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->drag_motion;
  auto time__to_c = time_;
  auto y_to_c = y;
  auto x_to_c = x;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkDragContext*) (context_to_c), (gint) (x_to_c), (gint) (y_to_c), (guint) (time__to_c));
  return _temp_ret;
}

// gboolean Widget::draw (GtkWidget* widget, cairo_t* cr);
// gboolean Widget::draw (::GtkWidget* widget, ::cairo_t* cr);
bool WidgetClass::draw_ (cairo::Context cr) noexcept
{
  if (!get_struct_()->draw) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::cairo_t* cr);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->draw;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::cairo_t*) (cr_to_c));
  return _temp_ret;
}

// gboolean Widget::enter_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::enter_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
bool WidgetClass::enter_notify_event_ (Gdk::EventCrossing event) noexcept
{
  if (!get_struct_()->enter_notify_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventCrossing* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->enter_notify_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventCrossing*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::event (GtkWidget* widget, GdkEvent* event);
// gboolean Widget::event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::focus (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::focus (::GtkWidget* widget, ::GtkDirectionType direction);
bool WidgetClass::focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->focus) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// gboolean Widget::focus_in_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_in_event (::GtkWidget* widget, ::GdkEventFocus* event);
bool WidgetClass::focus_in_event_ (Gdk::EventFocus event) noexcept
{
  if (!get_struct_()->focus_in_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventFocus* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_in_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventFocus*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::focus_out_event (GtkWidget* widget, GdkEventFocus* event);
// gboolean Widget::focus_out_event (::GtkWidget* widget, ::GdkEventFocus* event);
bool WidgetClass::focus_out_event_ (Gdk::EventFocus event) noexcept
{
  if (!get_struct_()->focus_out_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventFocus* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->focus_out_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventFocus*) (event_to_c));
  return _temp_ret;
}

// AtkObject* Widget::get_accessible (GtkWidget* widget);
// ::AtkObject* Widget::get_accessible (::GtkWidget* widget);
Atk::Object WidgetClass::get_accessible_ () noexcept
{
  if (!get_struct_()->get_accessible) return Atk::Object{};
  typedef ::AtkObject* (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_accessible;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

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
Gtk::SizeRequestMode WidgetClass::get_request_mode_ () noexcept
{
  if (!get_struct_()->get_request_mode) return Gtk::SizeRequestMode{};
  typedef ::GtkSizeRequestMode (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_mode;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean Widget::grab_broken_event (GtkWidget* widget, GdkEventGrabBroken* event);
// gboolean Widget::grab_broken_event (::GtkWidget* widget, ::GdkEventGrabBroken* event);
bool WidgetClass::grab_broken_event_ (Gdk::EventGrabBroken event) noexcept
{
  if (!get_struct_()->grab_broken_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventGrabBroken* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_broken_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventGrabBroken*) (event_to_c));
  return _temp_ret;
}

// void Widget::grab_focus (GtkWidget* widget);
// void Widget::grab_focus (::GtkWidget* widget);
void WidgetClass::grab_focus_ () noexcept
{
  if (!get_struct_()->grab_focus) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_focus;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::grab_notify (GtkWidget* widget, gboolean was_grabbed);
// void Widget::grab_notify (::GtkWidget* widget, gboolean was_grabbed);
void WidgetClass::grab_notify_ (gboolean was_grabbed) noexcept
{
  if (!get_struct_()->grab_notify) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, gboolean was_grabbed);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->grab_notify;
  auto was_grabbed_to_c = was_grabbed;
  call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (was_grabbed_to_c));
}

// void Widget::hide (GtkWidget* widget);
// void Widget::hide (::GtkWidget* widget);
void WidgetClass::hide_ () noexcept
{
  if (!get_struct_()->hide) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hide;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::hierarchy_changed (GtkWidget* widget, GtkWidget* previous_toplevel);
// void Widget::hierarchy_changed (::GtkWidget* widget, ::GtkWidget* previous_toplevel);
void WidgetClass::hierarchy_changed_ (Gtk::Widget previous_toplevel) noexcept
{
  if (!get_struct_()->hierarchy_changed) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* previous_toplevel);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hierarchy_changed;
  auto previous_toplevel_to_c = gi::unwrap (previous_toplevel, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (previous_toplevel_to_c));
}

// gboolean Widget::key_press_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_press_event (::GtkWidget* widget, ::GdkEventKey* event);
bool WidgetClass::key_press_event_ (Gdk::EventKey event) noexcept
{
  if (!get_struct_()->key_press_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->key_press_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::key_release_event (GtkWidget* widget, GdkEventKey* event);
// gboolean Widget::key_release_event (::GtkWidget* widget, ::GdkEventKey* event);
bool WidgetClass::key_release_event_ (Gdk::EventKey event) noexcept
{
  if (!get_struct_()->key_release_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventKey* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->key_release_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventKey*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::keynav_failed (GtkWidget* widget, GtkDirectionType direction);
// gboolean Widget::keynav_failed (::GtkWidget* widget, ::GtkDirectionType direction);
bool WidgetClass::keynav_failed_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->keynav_failed) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->keynav_failed;
  auto direction_to_c = gi::unwrap (direction);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
  return _temp_ret;
}

// gboolean Widget::leave_notify_event (GtkWidget* widget, GdkEventCrossing* event);
// gboolean Widget::leave_notify_event (::GtkWidget* widget, ::GdkEventCrossing* event);
bool WidgetClass::leave_notify_event_ (Gdk::EventCrossing event) noexcept
{
  if (!get_struct_()->leave_notify_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventCrossing* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->leave_notify_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventCrossing*) (event_to_c));
  return _temp_ret;
}

// void Widget::map (GtkWidget* widget);
// void Widget::map (::GtkWidget* widget);
void WidgetClass::map_ () noexcept
{
  if (!get_struct_()->map) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->map;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::map_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::map_event (::GtkWidget* widget, ::GdkEventAny* event);
bool WidgetClass::map_event_ (Gdk::EventAny event) noexcept
{
  if (!get_struct_()->map_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventAny* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->map_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventAny*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::mnemonic_activate (GtkWidget* widget, gboolean group_cycling);
// gboolean Widget::mnemonic_activate (::GtkWidget* widget, gboolean group_cycling);
bool WidgetClass::mnemonic_activate_ (gboolean group_cycling) noexcept
{
  if (!get_struct_()->mnemonic_activate) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gboolean group_cycling);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->mnemonic_activate;
  auto group_cycling_to_c = group_cycling;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gboolean) (group_cycling_to_c));
  return _temp_ret;
}

// gboolean Widget::motion_notify_event (GtkWidget* widget, GdkEventMotion* event);
// gboolean Widget::motion_notify_event (::GtkWidget* widget, ::GdkEventMotion* event);
bool WidgetClass::motion_notify_event_ (Gdk::EventMotion event) noexcept
{
  if (!get_struct_()->motion_notify_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventMotion* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->motion_notify_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventMotion*) (event_to_c));
  return _temp_ret;
}

// void Widget::move_focus (GtkWidget* widget, GtkDirectionType direction);
// void Widget::move_focus (::GtkWidget* widget, ::GtkDirectionType direction);
void WidgetClass::move_focus_ (Gtk::DirectionType direction) noexcept
{
  if (!get_struct_()->move_focus) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkDirectionType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->move_focus;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkDirectionType) (direction_to_c));
}

// void Widget::parent_set (GtkWidget* widget, GtkWidget* previous_parent);
// void Widget::parent_set (::GtkWidget* widget, ::GtkWidget* previous_parent);
void WidgetClass::parent_set_ (Gtk::Widget previous_parent) noexcept
{
  if (!get_struct_()->parent_set) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkWidget* previous_parent);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->parent_set;
  auto previous_parent_to_c = gi::unwrap (previous_parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidget*) (previous_parent_to_c));
}

// gboolean Widget::popup_menu (GtkWidget* widget);
// gboolean Widget::popup_menu (::GtkWidget* widget);
bool WidgetClass::popup_menu_ () noexcept
{
  if (!get_struct_()->popup_menu) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->popup_menu;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean Widget::property_notify_event (GtkWidget* widget, GdkEventProperty* event);
// gboolean Widget::property_notify_event (::GtkWidget* widget, ::GdkEventProperty* event);
bool WidgetClass::property_notify_event_ (Gdk::EventProperty event) noexcept
{
  if (!get_struct_()->property_notify_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventProperty* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->property_notify_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventProperty*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::proximity_in_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_in_event (::GtkWidget* widget, ::GdkEventProximity* event);
bool WidgetClass::proximity_in_event_ (Gdk::EventProximity event) noexcept
{
  if (!get_struct_()->proximity_in_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventProximity* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->proximity_in_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventProximity*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::proximity_out_event (GtkWidget* widget, GdkEventProximity* event);
// gboolean Widget::proximity_out_event (::GtkWidget* widget, ::GdkEventProximity* event);
bool WidgetClass::proximity_out_event_ (Gdk::EventProximity event) noexcept
{
  if (!get_struct_()->proximity_out_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventProximity* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->proximity_out_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventProximity*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::query_tooltip (GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, GtkTooltip* tooltip);
// gboolean Widget::query_tooltip (::GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip);
bool WidgetClass::query_tooltip_ (gint x, gint y, gboolean keyboard_tooltip, Gtk::Tooltip tooltip) noexcept
{
  if (!get_struct_()->query_tooltip) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, gint x, gint y, gboolean keyboard_tooltip, ::GtkTooltip* tooltip);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->query_tooltip;
  auto tooltip_to_c = gi::unwrap (tooltip, gi::transfer_none, gi::direction_in);
  auto keyboard_tooltip_to_c = keyboard_tooltip;
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gboolean) (keyboard_tooltip_to_c), (::GtkTooltip*) (tooltip_to_c));
  return _temp_ret;
}

// void Widget::queue_draw_region (GtkWidget* widget, const cairo_region_t* region);
// void Widget::queue_draw_region (::GtkWidget* widget, const ::cairo_region_t* region);
void WidgetClass::queue_draw_region_ (const cairo::Region & region) noexcept
{
  if (!get_struct_()->queue_draw_region) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, const ::cairo_region_t* region);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->queue_draw_region;
  auto region_to_c = gi::unwrap (region, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (const ::cairo_region_t*) (region_to_c));
}

// void Widget::realize (GtkWidget* widget);
// void Widget::realize (::GtkWidget* widget);
void WidgetClass::realize_ () noexcept
{
  if (!get_struct_()->realize) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->realize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::screen_changed (GtkWidget* widget, GdkScreen* previous_screen);
// void Widget::screen_changed (::GtkWidget* widget, ::GdkScreen* previous_screen);
void WidgetClass::screen_changed_ (Gdk::Screen previous_screen) noexcept
{
  if (!get_struct_()->screen_changed) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GdkScreen* previous_screen);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->screen_changed;
  auto previous_screen_to_c = gi::unwrap (previous_screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkScreen*) (previous_screen_to_c));
}

// gboolean Widget::scroll_event (GtkWidget* widget, GdkEventScroll* event);
// gboolean Widget::scroll_event (::GtkWidget* widget, ::GdkEventScroll* event);
bool WidgetClass::scroll_event_ (Gdk::EventScroll event) noexcept
{
  if (!get_struct_()->scroll_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventScroll* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->scroll_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventScroll*) (event_to_c));
  return _temp_ret;
}

// gboolean Widget::selection_clear_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_clear_event (::GtkWidget* widget, ::GdkEventSelection* event);
bool WidgetClass::selection_clear_event_ (Gdk::EventSelection event) noexcept
{
  if (!get_struct_()->selection_clear_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventSelection* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_clear_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventSelection*) (event_to_c));
  return _temp_ret;
}

// void Widget::selection_get (GtkWidget* widget, GtkSelectionData* selection_data, guint info, guint time_);
// void Widget::selection_get (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint info, guint time_);
void WidgetClass::selection_get_ (Gtk::SelectionData selection_data, guint info, guint time_) noexcept
{
  if (!get_struct_()->selection_get) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint info, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_get;
  auto time__to_c = time_;
  auto info_to_c = info;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkSelectionData*) (selection_data_to_c), (guint) (info_to_c), (guint) (time__to_c));
}

// gboolean Widget::selection_notify_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_notify_event (::GtkWidget* widget, ::GdkEventSelection* event);
bool WidgetClass::selection_notify_event_ (Gdk::EventSelection event) noexcept
{
  if (!get_struct_()->selection_notify_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventSelection* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_notify_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventSelection*) (event_to_c));
  return _temp_ret;
}

// void Widget::selection_received (GtkWidget* widget, GtkSelectionData* selection_data, guint time_);
// void Widget::selection_received (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint time_);
void WidgetClass::selection_received_ (Gtk::SelectionData selection_data, guint time_) noexcept
{
  if (!get_struct_()->selection_received) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkSelectionData* selection_data, guint time_);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_received;
  auto time__to_c = time_;
  auto selection_data_to_c = gi::unwrap (selection_data, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkSelectionData*) (selection_data_to_c), (guint) (time__to_c));
}

// gboolean Widget::selection_request_event (GtkWidget* widget, GdkEventSelection* event);
// gboolean Widget::selection_request_event (::GtkWidget* widget, ::GdkEventSelection* event);
bool WidgetClass::selection_request_event_ (Gdk::EventSelection event) noexcept
{
  if (!get_struct_()->selection_request_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventSelection* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->selection_request_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventSelection*) (event_to_c));
  return _temp_ret;
}

// void Widget::show (GtkWidget* widget);
// void Widget::show (::GtkWidget* widget);
void WidgetClass::show_ () noexcept
{
  if (!get_struct_()->show) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// void Widget::show_all (GtkWidget* widget);
// void Widget::show_all (::GtkWidget* widget);
void WidgetClass::show_all_ () noexcept
{
  if (!get_struct_()->show_all) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_all;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::show_help (GtkWidget* widget, GtkWidgetHelpType help_type);
// gboolean Widget::show_help (::GtkWidget* widget, ::GtkWidgetHelpType help_type);
bool WidgetClass::show_help_ (Gtk::WidgetHelpType help_type) noexcept
{
  if (!get_struct_()->show_help) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GtkWidgetHelpType help_type);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_help;
  auto help_type_to_c = gi::unwrap (help_type);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkWidgetHelpType) (help_type_to_c));
  return _temp_ret;
}

// void Widget::size_allocate (GtkWidget* widget, GtkAllocation* allocation);
// void Widget::size_allocate (::GtkWidget* widget, ::GtkAllocation* allocation);
void WidgetClass::size_allocate_ (Gtk::Allocation allocation) noexcept
{
  if (!get_struct_()->size_allocate) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkAllocation* allocation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->size_allocate;
  auto allocation_to_c = gi::unwrap (allocation, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkAllocation*) (allocation_to_c));
}

// void Widget::state_changed (GtkWidget* widget, GtkStateType previous_state);
// void Widget::state_changed (::GtkWidget* widget,  previous_state);
// SKIP; previous_state type  not supported

// void Widget::state_flags_changed (GtkWidget* widget, GtkStateFlags previous_state_flags);
// void Widget::state_flags_changed (::GtkWidget* widget, ::GtkStateFlags previous_state_flags);
void WidgetClass::state_flags_changed_ (Gtk::StateFlags previous_state_flags) noexcept
{
  if (!get_struct_()->state_flags_changed) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStateFlags previous_state_flags);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->state_flags_changed;
  auto previous_state_flags_to_c = gi::unwrap (previous_state_flags);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStateFlags) (previous_state_flags_to_c));
}

// void Widget::style_set (GtkWidget* widget, GtkStyle* previous_style);
// void Widget::style_set (::GtkWidget* widget, ::GtkStyle* previous_style);
void WidgetClass::style_set_ (Gtk::Style previous_style) noexcept
{
  if (!get_struct_()->style_set) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget, ::GtkStyle* previous_style);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->style_set;
  auto previous_style_to_c = gi::unwrap (previous_style, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkWidget*) (gobj_()), (::GtkStyle*) (previous_style_to_c));
}

// void Widget::style_updated (GtkWidget* widget);
// void Widget::style_updated (::GtkWidget* widget);
void WidgetClass::style_updated_ () noexcept
{
  if (!get_struct_()->style_updated) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->style_updated;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::touch_event (GtkWidget* widget, GdkEventTouch* event);
// gboolean Widget::touch_event (::GtkWidget* widget, ::GdkEventTouch* event);
bool WidgetClass::touch_event_ (Gdk::EventTouch event) noexcept
{
  if (!get_struct_()->touch_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventTouch* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->touch_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventTouch*) (event_to_c));
  return _temp_ret;
}

// void Widget::unmap (GtkWidget* widget);
// void Widget::unmap (::GtkWidget* widget);
void WidgetClass::unmap_ () noexcept
{
  if (!get_struct_()->unmap) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmap;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::unmap_event (GtkWidget* widget, GdkEventAny* event);
// gboolean Widget::unmap_event (::GtkWidget* widget, ::GdkEventAny* event);
bool WidgetClass::unmap_event_ (Gdk::EventAny event) noexcept
{
  if (!get_struct_()->unmap_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventAny* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unmap_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventAny*) (event_to_c));
  return _temp_ret;
}

// void Widget::unrealize (GtkWidget* widget);
// void Widget::unrealize (::GtkWidget* widget);
void WidgetClass::unrealize_ () noexcept
{
  if (!get_struct_()->unrealize) return ;
  typedef void (*call_wrap_t) (::GtkWidget* widget);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->unrealize;
  call_wrap_v ((::GtkWidget*) (gobj_()));
}

// gboolean Widget::visibility_notify_event (GtkWidget* widget, GdkEventVisibility* event);
// gboolean Widget::visibility_notify_event (::GtkWidget* widget,  event);
// SKIP; event type  not supported

// gboolean Widget::window_state_event (GtkWidget* widget, GdkEventWindowState* event);
// gboolean Widget::window_state_event (::GtkWidget* widget, ::GdkEventWindowState* event);
bool WidgetClass::window_state_event_ (Gdk::EventWindowState event) noexcept
{
  if (!get_struct_()->window_state_event) return bool{};
  typedef gboolean (*call_wrap_t) (::GtkWidget* widget, ::GdkEventWindowState* event);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->window_state_event;
  auto event_to_c = gi::unwrap (event, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (gobj_()), (::GdkEventWindowState*) (event_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
