// AUTO-GENERATED

#ifndef _GI_GTK_COLORSELECTION_IMPL_HPP_
#define _GI_GTK_COLORSELECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_color_selection_new ();
// ::GtkColorSelection* gtk_color_selection_new ();
Gtk::ColorSelection base::ColorSelectionBase::new_ () noexcept
{
  typedef ::GtkColorSelection* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_color_selection_palette_from_string (const gchar* str, gint* n_colors);
// gboolean gtk_color_selection_palette_from_string (const char* str, gint* n_colors);
// SKIP; container element not supported

// gchar* gtk_color_selection_palette_to_string (gint n_colors);
// char* gtk_color_selection_palette_to_string (gint n_colors);
// SKIP; container element not supported

// FAILURE on gtk_color_selection_set_change_palette_with_screen_hook; No such node (<xmlattr>.transfer-ownership)
// guint16 gtk_color_selection_get_current_alpha (GtkColorSelection* colorsel);
// guint16 gtk_color_selection_get_current_alpha (::GtkColorSelection* colorsel);
guint16 base::ColorSelectionBase::get_current_alpha () noexcept
{
  typedef guint16 (*call_wrap_t) (::GtkColorSelection* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_current_alpha;
  auto _temp_ret = call_wrap_v ((::GtkColorSelection*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_selection_get_current_color (GtkColorSelection* colorsel, GdkColor* color);
// void gtk_color_selection_get_current_color (::GtkColorSelection* colorsel,  color);
// IGNORE; deprecated

// void gtk_color_selection_get_current_rgba (GtkColorSelection* colorsel, GdkRGBA* rgba);
// void gtk_color_selection_get_current_rgba (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
void base::ColorSelectionBase::get_current_rgba (Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_current_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  rgba = gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::ColorSelectionBase::get_current_rgba () noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_current_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  return gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_color_selection_get_has_opacity_control (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_get_has_opacity_control (::GtkColorSelection* colorsel);
bool base::ColorSelectionBase::get_has_opacity_control () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorSelection* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_has_opacity_control;
  auto _temp_ret = call_wrap_v ((::GtkColorSelection*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_color_selection_get_has_palette (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_get_has_palette (::GtkColorSelection* colorsel);
bool base::ColorSelectionBase::get_has_palette () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorSelection* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_has_palette;
  auto _temp_ret = call_wrap_v ((::GtkColorSelection*) (gobj_()));
  return _temp_ret;
}

// guint16 gtk_color_selection_get_previous_alpha (GtkColorSelection* colorsel);
// guint16 gtk_color_selection_get_previous_alpha (::GtkColorSelection* colorsel);
guint16 base::ColorSelectionBase::get_previous_alpha () noexcept
{
  typedef guint16 (*call_wrap_t) (::GtkColorSelection* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_previous_alpha;
  auto _temp_ret = call_wrap_v ((::GtkColorSelection*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_selection_get_previous_color (GtkColorSelection* colorsel, GdkColor* color);
// void gtk_color_selection_get_previous_color (::GtkColorSelection* colorsel,  color);
// IGNORE; deprecated

// void gtk_color_selection_get_previous_rgba (GtkColorSelection* colorsel, GdkRGBA* rgba);
// void gtk_color_selection_get_previous_rgba (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
void base::ColorSelectionBase::get_previous_rgba (Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_previous_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  rgba = gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::ColorSelectionBase::get_previous_rgba () noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_get_previous_rgba;
  traits::unset_wrapper<::GdkRGBA>::type rgba_c;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &rgba_c));
  return gi::wrap ((::GdkRGBA*) &rgba_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_color_selection_is_adjusting (GtkColorSelection* colorsel);
// gboolean gtk_color_selection_is_adjusting (::GtkColorSelection* colorsel);
bool base::ColorSelectionBase::is_adjusting () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorSelection* colorsel);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_is_adjusting;
  auto _temp_ret = call_wrap_v ((::GtkColorSelection*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_selection_set_current_alpha (GtkColorSelection* colorsel, guint16 alpha);
// void gtk_color_selection_set_current_alpha (::GtkColorSelection* colorsel, guint16 alpha);
void base::ColorSelectionBase::set_current_alpha (guint16 alpha) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_current_alpha;
  auto alpha_to_c = alpha;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (guint16) (alpha_to_c));
}

// void gtk_color_selection_set_current_color (GtkColorSelection* colorsel, const GdkColor* color);
// void gtk_color_selection_set_current_color (::GtkColorSelection* colorsel, const  color);
// IGNORE; deprecated

// void gtk_color_selection_set_current_rgba (GtkColorSelection* colorsel, const GdkRGBA* rgba);
// void gtk_color_selection_set_current_rgba (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
void base::ColorSelectionBase::set_current_rgba (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_current_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}

// void gtk_color_selection_set_has_opacity_control (GtkColorSelection* colorsel, gboolean has_opacity);
// void gtk_color_selection_set_has_opacity_control (::GtkColorSelection* colorsel, gboolean has_opacity);
void base::ColorSelectionBase::set_has_opacity_control (gboolean has_opacity) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, gboolean has_opacity);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_has_opacity_control;
  auto has_opacity_to_c = has_opacity;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (gboolean) (has_opacity_to_c));
}

// void gtk_color_selection_set_has_palette (GtkColorSelection* colorsel, gboolean has_palette);
// void gtk_color_selection_set_has_palette (::GtkColorSelection* colorsel, gboolean has_palette);
void base::ColorSelectionBase::set_has_palette (gboolean has_palette) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, gboolean has_palette);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_has_palette;
  auto has_palette_to_c = has_palette;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (gboolean) (has_palette_to_c));
}

// void gtk_color_selection_set_previous_alpha (GtkColorSelection* colorsel, guint16 alpha);
// void gtk_color_selection_set_previous_alpha (::GtkColorSelection* colorsel, guint16 alpha);
void base::ColorSelectionBase::set_previous_alpha (guint16 alpha) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, guint16 alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_previous_alpha;
  auto alpha_to_c = alpha;
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (guint16) (alpha_to_c));
}

// void gtk_color_selection_set_previous_color (GtkColorSelection* colorsel, const GdkColor* color);
// void gtk_color_selection_set_previous_color (::GtkColorSelection* colorsel, const  color);
// IGNORE; deprecated

// void gtk_color_selection_set_previous_rgba (GtkColorSelection* colorsel, const GdkRGBA* rgba);
// void gtk_color_selection_set_previous_rgba (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
void base::ColorSelectionBase::set_previous_rgba (const Gdk::RGBA & rgba) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorSelection* colorsel, const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_selection_set_previous_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorSelection*) (gobj_()), (const ::GdkRGBA*) (rgba_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorselection_extra_def_impl.hpp>)
#include <gtk/colorselection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorselection_extra_impl.hpp>)
#include <gtk/colorselection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorSelectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkColorSelectionClass *methods = (::GtkColorSelectionClass *) class_struct;
  (void) methods;

  methods->color_changed = (decltype (methods->color_changed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::color_changed_>;
}

// void ColorSelection::color_changed (GtkColorSelection* color_selection);
// void ColorSelection::color_changed (::GtkColorSelection* color_selection);
void ColorSelectionClass::color_changed_ () noexcept
{
  if (!get_struct_()->color_changed) return ;
  typedef void (*call_wrap_t) (::GtkColorSelection* color_selection);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->color_changed;
  call_wrap_v ((::GtkColorSelection*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
