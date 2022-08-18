// AUTO-GENERATED

#ifndef _GI_GTK_STYLECONTEXT_IMPL_HPP_
#define _GI_GTK_STYLECONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkStyleContext* gtk_style_context_new ();
// ::GtkStyleContext* gtk_style_context_new ();
Gtk::StyleContext base::StyleContextBase::new_ () noexcept
{
  typedef ::GtkStyleContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_style_context_add_provider_for_screen (GdkScreen* screen, GtkStyleProvider* provider, guint priority);
// void gtk_style_context_add_provider_for_screen (::GdkScreen* screen, ::GtkStyleProvider* provider, guint priority);
void base::StyleContextBase::add_provider_for_screen (Gdk::Screen screen, Gtk::StyleProvider provider, guint priority) noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen, ::GtkStyleProvider* provider, guint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_add_provider_for_screen;
  auto priority_to_c = priority;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none, gi::direction_in);
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkScreen*) (screen_to_c), (::GtkStyleProvider*) (provider_to_c), (guint) (priority_to_c));
}

// void gtk_style_context_remove_provider_for_screen (GdkScreen* screen, GtkStyleProvider* provider);
// void gtk_style_context_remove_provider_for_screen (::GdkScreen* screen, ::GtkStyleProvider* provider);
void base::StyleContextBase::remove_provider_for_screen (Gdk::Screen screen, Gtk::StyleProvider provider) noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen, ::GtkStyleProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_remove_provider_for_screen;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none, gi::direction_in);
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkScreen*) (screen_to_c), (::GtkStyleProvider*) (provider_to_c));
}

// void gtk_style_context_reset_widgets (GdkScreen* screen);
// void gtk_style_context_reset_widgets (::GdkScreen* screen);
void base::StyleContextBase::reset_widgets (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_reset_widgets;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GdkScreen*) (screen_to_c));
}

// void gtk_style_context_add_class (GtkStyleContext* context, const gchar* class_name);
// void gtk_style_context_add_class (::GtkStyleContext* context, const char* class_name);
void base::StyleContextBase::add_class (const std::string & class_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_add_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
}

// void gtk_style_context_add_provider (GtkStyleContext* context, GtkStyleProvider* provider, guint priority);
// void gtk_style_context_add_provider (::GtkStyleContext* context, ::GtkStyleProvider* provider, guint priority);
void base::StyleContextBase::add_provider (Gtk::StyleProvider provider, guint priority) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleProvider* provider, guint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_add_provider;
  auto priority_to_c = priority;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleProvider*) (provider_to_c), (guint) (priority_to_c));
}

// void gtk_style_context_add_region (GtkStyleContext* context, const gchar* region_name, GtkRegionFlags flags);
// void gtk_style_context_add_region (::GtkStyleContext* context, const char* region_name, ::GtkRegionFlags flags);
// IGNORE; deprecated

// void gtk_style_context_cancel_animations (GtkStyleContext* context, gpointer region_id);
// void gtk_style_context_cancel_animations (::GtkStyleContext* context, void* region_id);
// IGNORE; deprecated

// void gtk_style_context_get (GtkStyleContext* context, GtkStateFlags state);
// void gtk_style_context_get (::GtkStyleContext* context, ::GtkStateFlags state);
// IGNORE; not introspectable, varargs not supported

// void gtk_style_context_get_background_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_background_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_style_context_get_border (GtkStyleContext* context, GtkStateFlags state, GtkBorder* border);
// void gtk_style_context_get_border (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* border);
void base::StyleContextBase::get_border (Gtk::StateFlags state, Gtk::Border & border) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_border;
  traits::unset_wrapper<::GtkBorder>::type border_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &border_c));
  border = gi::wrap ((::GtkBorder*) &border_c, gi::transfer_none, gi::direction_out);
}
Gtk::Border base::StyleContextBase::get_border (Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* border);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_border;
  traits::unset_wrapper<::GtkBorder>::type border_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &border_c));
  return gi::wrap ((::GtkBorder*) &border_c, gi::transfer_none, gi::direction_out);
}

// void gtk_style_context_get_border_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_border_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_style_context_get_color (GtkStyleContext* context, GtkStateFlags state, GdkRGBA* color);
// void gtk_style_context_get_color (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
void base::StyleContextBase::get_color (Gtk::StateFlags state, Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_color;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  color = gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::StyleContextBase::get_color (Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_color;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  return gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out);
}

// GtkTextDirection gtk_style_context_get_direction (GtkStyleContext* context);
// ::GtkTextDirection gtk_style_context_get_direction (::GtkStyleContext* context);
// IGNORE; deprecated

// const PangoFontDescription* gtk_style_context_get_font (GtkStyleContext* context, GtkStateFlags state);
// const ::PangoFontDescription* gtk_style_context_get_font (::GtkStyleContext* context, ::GtkStateFlags state);
// IGNORE; deprecated

// GdkFrameClock* gtk_style_context_get_frame_clock (GtkStyleContext* context);
// ::GdkFrameClock* gtk_style_context_get_frame_clock (::GtkStyleContext* context);
Gdk::FrameClock base::StyleContextBase::get_frame_clock () noexcept
{
  typedef ::GdkFrameClock* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_frame_clock;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkJunctionSides gtk_style_context_get_junction_sides (GtkStyleContext* context);
// ::GtkJunctionSides gtk_style_context_get_junction_sides (::GtkStyleContext* context);
Gtk::JunctionSides base::StyleContextBase::get_junction_sides () noexcept
{
  typedef ::GtkJunctionSides (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_junction_sides;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_style_context_get_margin (GtkStyleContext* context, GtkStateFlags state, GtkBorder* margin);
// void gtk_style_context_get_margin (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* margin);
void base::StyleContextBase::get_margin (Gtk::StateFlags state, Gtk::Border & margin) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_margin;
  traits::unset_wrapper<::GtkBorder>::type margin_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &margin_c));
  margin = gi::wrap ((::GtkBorder*) &margin_c, gi::transfer_none, gi::direction_out);
}
Gtk::Border base::StyleContextBase::get_margin (Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* margin);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_margin;
  traits::unset_wrapper<::GtkBorder>::type margin_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &margin_c));
  return gi::wrap ((::GtkBorder*) &margin_c, gi::transfer_none, gi::direction_out);
}

// void gtk_style_context_get_padding (GtkStyleContext* context, GtkStateFlags state, GtkBorder* padding);
// void gtk_style_context_get_padding (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* padding);
void base::StyleContextBase::get_padding (Gtk::StateFlags state, Gtk::Border & padding) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_padding;
  traits::unset_wrapper<::GtkBorder>::type padding_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &padding_c));
  padding = gi::wrap ((::GtkBorder*) &padding_c, gi::transfer_none, gi::direction_out);
}
Gtk::Border base::StyleContextBase::get_padding (Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags state, ::GtkBorder* padding);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_padding;
  traits::unset_wrapper<::GtkBorder>::type padding_c;
  auto state_to_c = gi::unwrap (state);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (state_to_c), (::GtkBorder*) ((::GtkBorder*) &padding_c));
  return gi::wrap ((::GtkBorder*) &padding_c, gi::transfer_none, gi::direction_out);
}

// GtkStyleContext* gtk_style_context_get_parent (GtkStyleContext* context);
// ::GtkStyleContext* gtk_style_context_get_parent (::GtkStyleContext* context);
Gtk::StyleContext base::StyleContextBase::get_parent () noexcept
{
  typedef ::GtkStyleContext* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GtkWidgetPath* gtk_style_context_get_path (GtkStyleContext* context);
// const ::GtkWidgetPath* gtk_style_context_get_path (::GtkStyleContext* context);
Gtk::WidgetPath base::StyleContextBase::get_path () noexcept
{
  typedef const ::GtkWidgetPath* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_path;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_style_context_get_property (GtkStyleContext* context, const gchar* property, GtkStateFlags state, GValue* value);
// void gtk_style_context_get_property (::GtkStyleContext* context, const char* property, ::GtkStateFlags state, ::GValue* value);
void base::StyleContextBase::get_property (const std::string & property, Gtk::StateFlags state, GObject::Value & value) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* property, ::GtkStateFlags state, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto state_to_c = gi::unwrap (state);
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (property_to_c), (::GtkStateFlags) (state_to_c), (::GValue*) ((GValue*) &value_c));
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}
GObject::Value base::StyleContextBase::get_property (const std::string & property, Gtk::StateFlags state) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* property, ::GtkStateFlags state, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_property;
  traits::unset_wrapper<GValue>::type value_c;
  auto state_to_c = gi::unwrap (state);
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (property_to_c), (::GtkStateFlags) (state_to_c), (::GValue*) ((GValue*) &value_c));
  return gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
}

// gint gtk_style_context_get_scale (GtkStyleContext* context);
// gint gtk_style_context_get_scale (::GtkStyleContext* context);
gint base::StyleContextBase::get_scale () noexcept
{
  typedef gint (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_scale;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return _temp_ret;
}

// GdkScreen* gtk_style_context_get_screen (GtkStyleContext* context);
// ::GdkScreen* gtk_style_context_get_screen (::GtkStyleContext* context);
Gdk::Screen base::StyleContextBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_screen;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkCssSection* gtk_style_context_get_section (GtkStyleContext* context, const gchar* property);
// ::GtkCssSection* gtk_style_context_get_section (::GtkStyleContext* context, const char* property);
Gtk::CssSection base::StyleContextBase::get_section (const std::string & property) noexcept
{
  typedef ::GtkCssSection* (*call_wrap_t) (::GtkStyleContext* context, const char* property);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_section;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (property_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkStateFlags gtk_style_context_get_state (GtkStyleContext* context);
// ::GtkStateFlags gtk_style_context_get_state (::GtkStyleContext* context);
Gtk::StateFlags base::StyleContextBase::get_state () noexcept
{
  typedef ::GtkStateFlags (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_state;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void gtk_style_context_get_style (GtkStyleContext* context);
// void gtk_style_context_get_style (::GtkStyleContext* context);
// IGNORE; not introspectable, varargs not supported

// void gtk_style_context_get_style_property (GtkStyleContext* context, const gchar* property_name, GValue* value);
// void gtk_style_context_get_style_property (::GtkStyleContext* context, const char* property_name, ::GValue* value);
void base::StyleContextBase::get_style_property (const std::string & property_name, GObject::Value value) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* property_name, ::GValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_get_style_property;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (property_name_to_c), (::GValue*) (value_to_c));
}

// void gtk_style_context_get_style_valist (GtkStyleContext* context, va_list args);
// void gtk_style_context_get_style_valist (::GtkStyleContext* context,  args);
// IGNORE; not introspectable, args type  not supported

// void gtk_style_context_get_valist (GtkStyleContext* context, GtkStateFlags state, va_list args);
// void gtk_style_context_get_valist (::GtkStyleContext* context, ::GtkStateFlags state,  args);
// IGNORE; not introspectable, args type  not supported

// gboolean gtk_style_context_has_class (GtkStyleContext* context, const gchar* class_name);
// gboolean gtk_style_context_has_class (::GtkStyleContext* context, const char* class_name);
bool base::StyleContextBase::has_class (const std::string & class_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_has_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
  return _temp_ret;
}

// gboolean gtk_style_context_has_region (GtkStyleContext* context, const gchar* region_name, GtkRegionFlags* flags_return);
// gboolean gtk_style_context_has_region (::GtkStyleContext* context, const char* region_name, ::GtkRegionFlags* flags_return);
// IGNORE; deprecated

// void gtk_style_context_invalidate (GtkStyleContext* context);
// void gtk_style_context_invalidate (::GtkStyleContext* context);
// IGNORE; deprecated

// GList* gtk_style_context_list_classes (GtkStyleContext* context);
// ::GList* gtk_style_context_list_classes (::GtkStyleContext* context);
std::vector<std::string> base::StyleContextBase::list_classes () noexcept
{
  typedef ::GList* (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_list_classes;
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}

// GList* gtk_style_context_list_regions (GtkStyleContext* context);
// ::GList* gtk_style_context_list_regions (::GtkStyleContext* context);
// IGNORE; deprecated

// gboolean gtk_style_context_lookup_color (GtkStyleContext* context, const gchar* color_name, GdkRGBA* color);
// gboolean gtk_style_context_lookup_color (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
bool base::StyleContextBase::lookup_color (const std::string & color_name, Gdk::RGBA & color) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_lookup_color;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  auto color_name_to_c = gi::unwrap (color_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (color_name_to_c), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  color = gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gdk::RGBA> base::StyleContextBase::lookup_color (const std::string & color_name) noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkStyleContext* context, const char* color_name, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_lookup_color;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  auto color_name_to_c = gi::unwrap (color_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (color_name_to_c), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out));
}

// GtkIconSet* gtk_style_context_lookup_icon_set (GtkStyleContext* context, const gchar* stock_id);
// ::GtkIconSet* gtk_style_context_lookup_icon_set (::GtkStyleContext* context, const char* stock_id);
// IGNORE; deprecated

// void gtk_style_context_notify_state_change (GtkStyleContext* context, GdkWindow* window, gpointer region_id, GtkStateType state, gboolean state_value);
// void gtk_style_context_notify_state_change (::GtkStyleContext* context, ::GdkWindow* window, void* region_id,  state, gboolean state_value);
// IGNORE; deprecated

// void gtk_style_context_pop_animatable_region (GtkStyleContext* context);
// void gtk_style_context_pop_animatable_region (::GtkStyleContext* context);
// IGNORE; deprecated

// void gtk_style_context_push_animatable_region (GtkStyleContext* context, gpointer region_id);
// void gtk_style_context_push_animatable_region (::GtkStyleContext* context, void* region_id);
// IGNORE; deprecated

// void gtk_style_context_remove_class (GtkStyleContext* context, const gchar* class_name);
// void gtk_style_context_remove_class (::GtkStyleContext* context, const char* class_name);
void base::StyleContextBase::remove_class (const std::string & class_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, const char* class_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_remove_class;
  auto class_name_to_c = gi::unwrap (class_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (const char*) (class_name_to_c));
}

// void gtk_style_context_remove_provider (GtkStyleContext* context, GtkStyleProvider* provider);
// void gtk_style_context_remove_provider (::GtkStyleContext* context, ::GtkStyleProvider* provider);
void base::StyleContextBase::remove_provider (Gtk::StyleProvider provider) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleProvider* provider);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_remove_provider;
  auto provider_to_c = gi::unwrap (provider, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleProvider*) (provider_to_c));
}

// void gtk_style_context_remove_region (GtkStyleContext* context, const gchar* region_name);
// void gtk_style_context_remove_region (::GtkStyleContext* context, const char* region_name);
// IGNORE; deprecated

// void gtk_style_context_restore (GtkStyleContext* context);
// void gtk_style_context_restore (::GtkStyleContext* context);
void base::StyleContextBase::restore () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_restore;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

// void gtk_style_context_save (GtkStyleContext* context);
// void gtk_style_context_save (::GtkStyleContext* context);
void base::StyleContextBase::save () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_save;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

// void gtk_style_context_scroll_animations (GtkStyleContext* context, GdkWindow* window, gint dx, gint dy);
// void gtk_style_context_scroll_animations (::GtkStyleContext* context, ::GdkWindow* window, gint dx, gint dy);
// IGNORE; deprecated

// void gtk_style_context_set_background (GtkStyleContext* context, GdkWindow* window);
// void gtk_style_context_set_background (::GtkStyleContext* context, ::GdkWindow* window);
// IGNORE; deprecated

// void gtk_style_context_set_direction (GtkStyleContext* context, GtkTextDirection direction);
// void gtk_style_context_set_direction (::GtkStyleContext* context, ::GtkTextDirection direction);
// IGNORE; deprecated

// void gtk_style_context_set_frame_clock (GtkStyleContext* context, GdkFrameClock* frame_clock);
// void gtk_style_context_set_frame_clock (::GtkStyleContext* context, ::GdkFrameClock* frame_clock);
void base::StyleContextBase::set_frame_clock (Gdk::FrameClock frame_clock) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GdkFrameClock* frame_clock);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_frame_clock;
  auto frame_clock_to_c = gi::unwrap (frame_clock, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GdkFrameClock*) (frame_clock_to_c));
}

// void gtk_style_context_set_junction_sides (GtkStyleContext* context, GtkJunctionSides sides);
// void gtk_style_context_set_junction_sides (::GtkStyleContext* context, ::GtkJunctionSides sides);
void base::StyleContextBase::set_junction_sides (Gtk::JunctionSides sides) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkJunctionSides sides);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_junction_sides;
  auto sides_to_c = gi::unwrap (sides);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkJunctionSides) (sides_to_c));
}

// void gtk_style_context_set_parent (GtkStyleContext* context, GtkStyleContext* parent);
// void gtk_style_context_set_parent (::GtkStyleContext* context, ::GtkStyleContext* parent);
void base::StyleContextBase::set_parent (Gtk::StyleContext parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleContext* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleContext*) (parent_to_c));
}
void base::StyleContextBase::set_parent () noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleContext* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_parent;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleContext*) (parent_to_c));
}

// void gtk_style_context_set_path (GtkStyleContext* context, GtkWidgetPath* path);
// void gtk_style_context_set_path (::GtkStyleContext* context, ::GtkWidgetPath* path);
void base::StyleContextBase::set_path (Gtk::WidgetPath path) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkWidgetPath* path);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkWidgetPath*) (path_to_c));
}

// void gtk_style_context_set_scale (GtkStyleContext* context, gint scale);
// void gtk_style_context_set_scale (::GtkStyleContext* context, gint scale);
void base::StyleContextBase::set_scale (gint scale) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, gint scale);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_scale;
  auto scale_to_c = scale;
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (gint) (scale_to_c));
}

// void gtk_style_context_set_screen (GtkStyleContext* context, GdkScreen* screen);
// void gtk_style_context_set_screen (::GtkStyleContext* context, ::GdkScreen* screen);
void base::StyleContextBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GdkScreen*) (screen_to_c));
}

// void gtk_style_context_set_state (GtkStyleContext* context, GtkStateFlags flags);
// void gtk_style_context_set_state (::GtkStyleContext* context, ::GtkStateFlags flags);
void base::StyleContextBase::set_state (Gtk::StateFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GtkStyleContext* context, ::GtkStateFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_set_state;
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStateFlags) (flags_to_c));
}

// gboolean gtk_style_context_state_is_running (GtkStyleContext* context, GtkStateType state, gdouble* progress);
// gboolean gtk_style_context_state_is_running (::GtkStyleContext* context,  state, gdouble* progress);
// IGNORE; deprecated

// char* gtk_style_context_to_string (GtkStyleContext* context, GtkStyleContextPrintFlags flags);
// char* gtk_style_context_to_string (::GtkStyleContext* context, ::GtkStyleContextPrintFlags flags);
std::string base::StyleContextBase::to_string (Gtk::StyleContextPrintFlags flags) noexcept
{
  typedef char* (*call_wrap_t) (::GtkStyleContext* context, ::GtkStyleContextPrintFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_style_context_to_string;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GtkStyleContext*) (gobj_()), (::GtkStyleContextPrintFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_def_impl.hpp>)
#include <gtk/stylecontext_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/stylecontext_extra_impl.hpp>)
#include <gtk/stylecontext_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void StyleContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkStyleContextClass *methods = (::GtkStyleContextClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::changed_>;
}

// void StyleContext::changed (GtkStyleContext* context);
// void StyleContext::changed (::GtkStyleContext* context);
void StyleContextClass::changed_ () noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::GtkStyleContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  call_wrap_v ((::GtkStyleContext*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
