// AUTO-GENERATED

#ifndef _GI_GTK_THEMINGENGINE_IMPL_HPP_
#define _GI_GTK_THEMINGENGINE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkThemingEngine* gtk_theming_engine_load (const gchar* name);
// ::GtkThemingEngine* gtk_theming_engine_load (const char* name);
// IGNORE; deprecated

// void gtk_theming_engine_register_property (const gchar* name_space, GtkStylePropertyParser parse_func, GParamSpec* pspec);
// void gtk_theming_engine_register_property (const char* name_space,  parse_func, ::GParamSpec* pspec);
// IGNORE; deprecated

// void gtk_theming_engine_get (GtkThemingEngine* engine, GtkStateFlags state);
// void gtk_theming_engine_get (::GtkThemingEngine* engine, ::GtkStateFlags state);
// IGNORE; deprecated, varargs not supported

// void gtk_theming_engine_get_background_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_background_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_theming_engine_get_border (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* border);
// void gtk_theming_engine_get_border (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* border);
// IGNORE; deprecated

// void gtk_theming_engine_get_border_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_border_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// void gtk_theming_engine_get_color (GtkThemingEngine* engine, GtkStateFlags state, GdkRGBA* color);
// void gtk_theming_engine_get_color (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GdkRGBA* color);
// IGNORE; deprecated

// GtkTextDirection gtk_theming_engine_get_direction (GtkThemingEngine* engine);
// ::GtkTextDirection gtk_theming_engine_get_direction (::GtkThemingEngine* engine);
// IGNORE; deprecated

// const PangoFontDescription* gtk_theming_engine_get_font (GtkThemingEngine* engine, GtkStateFlags state);
// const ::PangoFontDescription* gtk_theming_engine_get_font (::GtkThemingEngine* engine, ::GtkStateFlags state);
// IGNORE; deprecated

// GtkJunctionSides gtk_theming_engine_get_junction_sides (GtkThemingEngine* engine);
// ::GtkJunctionSides gtk_theming_engine_get_junction_sides (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_margin (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* margin);
// void gtk_theming_engine_get_margin (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* margin);
// IGNORE; deprecated

// void gtk_theming_engine_get_padding (GtkThemingEngine* engine, GtkStateFlags state, GtkBorder* padding);
// void gtk_theming_engine_get_padding (::GtkThemingEngine* engine, ::GtkStateFlags state, ::GtkBorder* padding);
// IGNORE; deprecated

// const GtkWidgetPath* gtk_theming_engine_get_path (GtkThemingEngine* engine);
// const ::GtkWidgetPath* gtk_theming_engine_get_path (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_property (GtkThemingEngine* engine, const gchar* property, GtkStateFlags state, GValue* value);
// void gtk_theming_engine_get_property (::GtkThemingEngine* engine, const char* property, ::GtkStateFlags state, ::GValue* value);
// IGNORE; deprecated

// GdkScreen* gtk_theming_engine_get_screen (GtkThemingEngine* engine);
// ::GdkScreen* gtk_theming_engine_get_screen (::GtkThemingEngine* engine);
// IGNORE; deprecated

// GtkStateFlags gtk_theming_engine_get_state (GtkThemingEngine* engine);
// ::GtkStateFlags gtk_theming_engine_get_state (::GtkThemingEngine* engine);
// IGNORE; deprecated

// void gtk_theming_engine_get_style (GtkThemingEngine* engine);
// void gtk_theming_engine_get_style (::GtkThemingEngine* engine);
// IGNORE; deprecated, varargs not supported

// void gtk_theming_engine_get_style_property (GtkThemingEngine* engine, const gchar* property_name, GValue* value);
// void gtk_theming_engine_get_style_property (::GtkThemingEngine* engine, const char* property_name, ::GValue* value);
// IGNORE; deprecated

// void gtk_theming_engine_get_style_valist (GtkThemingEngine* engine, va_list args);
// void gtk_theming_engine_get_style_valist (::GtkThemingEngine* engine,  args);
// IGNORE; deprecated

// void gtk_theming_engine_get_valist (GtkThemingEngine* engine, GtkStateFlags state, va_list args);
// void gtk_theming_engine_get_valist (::GtkThemingEngine* engine, ::GtkStateFlags state,  args);
// IGNORE; deprecated

// gboolean gtk_theming_engine_has_class (GtkThemingEngine* engine, const gchar* style_class);
// gboolean gtk_theming_engine_has_class (::GtkThemingEngine* engine, const char* style_class);
// IGNORE; deprecated

// gboolean gtk_theming_engine_has_region (GtkThemingEngine* engine, const gchar* style_region, GtkRegionFlags* flags);
// gboolean gtk_theming_engine_has_region (::GtkThemingEngine* engine, const char* style_region, ::GtkRegionFlags* flags);
// IGNORE; deprecated

// gboolean gtk_theming_engine_lookup_color (GtkThemingEngine* engine, const gchar* color_name, GdkRGBA* color);
// gboolean gtk_theming_engine_lookup_color (::GtkThemingEngine* engine, const char* color_name, ::GdkRGBA* color);
// IGNORE; deprecated

// gboolean gtk_theming_engine_state_is_running (GtkThemingEngine* engine, GtkStateType state, gdouble* progress);
// gboolean gtk_theming_engine_state_is_running (::GtkThemingEngine* engine,  state, gdouble* progress);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/themingengine_extra_def_impl.hpp>)
#include <gtk/themingengine_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/themingengine_extra_impl.hpp>)
#include <gtk/themingengine_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ThemingEngineClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkThemingEngineClass *methods = (::GtkThemingEngineClass *) class_struct;
  (void) methods;

  methods->render_activity = (decltype (methods->render_activity)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_activity_>;
  methods->render_arrow = (decltype (methods->render_arrow)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_arrow_>;
  methods->render_background = (decltype (methods->render_background)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_background_>;
  methods->render_check = (decltype (methods->render_check)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_check_>;
  methods->render_expander = (decltype (methods->render_expander)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_expander_>;
  methods->render_extension = (decltype (methods->render_extension)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_extension_>;
  methods->render_focus = (decltype (methods->render_focus)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_focus_>;
  methods->render_frame = (decltype (methods->render_frame)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_frame_>;
  methods->render_frame_gap = (decltype (methods->render_frame_gap)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side, gdouble xy0_gap, gdouble xy1_gap), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_frame_gap_>;
  methods->render_handle = (decltype (methods->render_handle)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_handle_>;
  methods->render_icon = (decltype (methods->render_icon)) detail::method_wrapper<self, void (*) (cairo::Context cr, GdkPixbuf::Pixbuf pixbuf, gdouble x, gdouble y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_icon_>;
  methods->render_icon_surface = (decltype (methods->render_icon_surface)) detail::method_wrapper<self, void (*) (cairo::Context cr, cairo::Surface surface, gdouble x, gdouble y), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_icon_surface_>;
  methods->render_layout = (decltype (methods->render_layout)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_layout_>;
  methods->render_line = (decltype (methods->render_line)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_line_>;
  methods->render_option = (decltype (methods->render_option)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_option_>;
  methods->render_slider = (decltype (methods->render_slider)) detail::method_wrapper<self, void (*) (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::render_slider_>;
}

// void ThemingEngine::render_activity (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_activity (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_activity_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_activity) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_activity;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_arrow (GtkThemingEngine* engine, cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
// void ThemingEngine::render_arrow (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
void ThemingEngineClass::render_arrow_ (cairo::Context cr, gdouble angle, gdouble x, gdouble y, gdouble size) noexcept
{
  if (!get_struct_()->render_arrow) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble angle, gdouble x, gdouble y, gdouble size);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_arrow;
  auto size_to_c = size;
  auto y_to_c = y;
  auto x_to_c = x;
  auto angle_to_c = angle;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (angle_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (size_to_c));
}

// void ThemingEngine::render_background (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_background (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_background_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_background) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_background;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_check (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_check (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_check_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_check) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_check;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_expander (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_expander (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_expander_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_expander) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_expander;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_extension (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side);
// void ThemingEngine::render_extension (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
void ThemingEngineClass::render_extension_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side) noexcept
{
  if (!get_struct_()->render_extension) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_extension;
  auto gap_side_to_c = gi::unwrap (gap_side);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkPositionType) (gap_side_to_c));
}

// void ThemingEngine::render_focus (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_focus (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_focus_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_focus) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_focus;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_frame (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_frame (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_frame_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_frame) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_frame;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_frame_gap (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
// void ThemingEngine::render_frame_gap (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
void ThemingEngineClass::render_frame_gap_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::PositionType gap_side, gdouble xy0_gap, gdouble xy1_gap) noexcept
{
  if (!get_struct_()->render_frame_gap) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkPositionType gap_side, gdouble xy0_gap, gdouble xy1_gap);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_frame_gap;
  auto xy1_gap_to_c = xy1_gap;
  auto xy0_gap_to_c = xy0_gap;
  auto gap_side_to_c = gi::unwrap (gap_side);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkPositionType) (gap_side_to_c), (gdouble) (xy0_gap_to_c), (gdouble) (xy1_gap_to_c));
}

// void ThemingEngine::render_handle (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_handle (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_handle_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_handle) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_handle;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_icon (GtkThemingEngine* engine, cairo_t* cr, GdkPixbuf* pixbuf, gdouble x, gdouble y);
// void ThemingEngine::render_icon (::GtkThemingEngine* engine, ::cairo_t* cr, ::GdkPixbuf* pixbuf, gdouble x, gdouble y);
void ThemingEngineClass::render_icon_ (cairo::Context cr, GdkPixbuf::Pixbuf pixbuf, gdouble x, gdouble y) noexcept
{
  if (!get_struct_()->render_icon) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, ::GdkPixbuf* pixbuf, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_icon;
  auto y_to_c = y;
  auto x_to_c = x;
  auto pixbuf_to_c = gi::unwrap (pixbuf, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (::GdkPixbuf*) (pixbuf_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void ThemingEngine::render_icon_surface (GtkThemingEngine* engine, cairo_t* cr, cairo_surface_t* surface, gdouble x, gdouble y);
// void ThemingEngine::render_icon_surface (::GtkThemingEngine* engine, ::cairo_t* cr, ::cairo_surface_t* surface, gdouble x, gdouble y);
void ThemingEngineClass::render_icon_surface_ (cairo::Context cr, cairo::Surface surface, gdouble x, gdouble y) noexcept
{
  if (!get_struct_()->render_icon_surface) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, ::cairo_surface_t* surface, gdouble x, gdouble y);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_icon_surface;
  auto y_to_c = y;
  auto x_to_c = x;
  auto surface_to_c = gi::unwrap (surface, gi::transfer_none, gi::direction_in);
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (::cairo_surface_t*) (surface_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c));
}

// void ThemingEngine::render_layout (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, PangoLayout* layout);
// void ThemingEngine::render_layout (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
void ThemingEngineClass::render_layout_ (cairo::Context cr, gdouble x, gdouble y, Pango::Layout layout) noexcept
{
  if (!get_struct_()->render_layout) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, ::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_layout;
  auto layout_to_c = gi::unwrap (layout, gi::transfer_none, gi::direction_in);
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (::PangoLayout*) (layout_to_c));
}

// void ThemingEngine::render_line (GtkThemingEngine* engine, cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
// void ThemingEngine::render_line (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
void ThemingEngineClass::render_line_ (cairo::Context cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1) noexcept
{
  if (!get_struct_()->render_line) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x0, gdouble y0, gdouble x1, gdouble y1);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_line;
  auto y1_to_c = y1;
  auto x1_to_c = x1;
  auto y0_to_c = y0;
  auto x0_to_c = x0;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x0_to_c), (gdouble) (y0_to_c), (gdouble) (x1_to_c), (gdouble) (y1_to_c));
}

// void ThemingEngine::render_option (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
// void ThemingEngine::render_option (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
void ThemingEngineClass::render_option_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height) noexcept
{
  if (!get_struct_()->render_option) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_option;
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c));
}

// void ThemingEngine::render_slider (GtkThemingEngine* engine, cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, GtkOrientation orientation);
// void ThemingEngine::render_slider (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
void ThemingEngineClass::render_slider_ (cairo::Context cr, gdouble x, gdouble y, gdouble width, gdouble height, Gtk::Orientation orientation) noexcept
{
  if (!get_struct_()->render_slider) return ;
  typedef void (*call_wrap_t) (::GtkThemingEngine* engine, ::cairo_t* cr, gdouble x, gdouble y, gdouble width, gdouble height, ::GtkOrientation orientation);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->render_slider;
  auto orientation_to_c = gi::unwrap (orientation);
  auto height_to_c = height;
  auto width_to_c = width;
  auto y_to_c = y;
  auto x_to_c = x;
  auto cr_to_c = gi::unwrap (cr, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkThemingEngine*) (gobj_()), (::cairo_t*) (cr_to_c), (gdouble) (x_to_c), (gdouble) (y_to_c), (gdouble) (width_to_c), (gdouble) (height_to_c), (::GtkOrientation) (orientation_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
