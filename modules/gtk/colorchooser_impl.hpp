// AUTO-GENERATED

#ifndef _GI_GTK_COLORCHOOSER_IMPL_HPP_
#define _GI_GTK_COLORCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_color_chooser_add_palette (GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors);
// void gtk_color_chooser_add_palette (::GtkColorChooser* chooser, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors);
// SKIP; inconsistent in colors pointer depth (1 vs 2)

// void gtk_color_chooser_get_rgba (GtkColorChooser* chooser, GdkRGBA* color);
// void gtk_color_chooser_get_rgba (::GtkColorChooser* chooser, ::GdkRGBA* color);
void base::ColorChooserBase::get_rgba (Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_get_rgba;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  color = gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out);
}
Gdk::RGBA base::ColorChooserBase::get_rgba () noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_get_rgba;
  traits::unset_wrapper<::GdkRGBA>::type color_c;
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (::GdkRGBA*) ((::GdkRGBA*) &color_c));
  return gi::wrap ((::GdkRGBA*) &color_c, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_color_chooser_get_use_alpha (GtkColorChooser* chooser);
// gboolean gtk_color_chooser_get_use_alpha (::GtkColorChooser* chooser);
bool base::ColorChooserBase::get_use_alpha () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkColorChooser* chooser);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_get_use_alpha;
  auto _temp_ret = call_wrap_v ((::GtkColorChooser*) (gobj_()));
  return _temp_ret;
}

// void gtk_color_chooser_set_rgba (GtkColorChooser* chooser, const GdkRGBA* color);
// void gtk_color_chooser_set_rgba (::GtkColorChooser* chooser, const ::GdkRGBA* color);
void base::ColorChooserBase::set_rgba (const Gdk::RGBA & color) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_set_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

// void gtk_color_chooser_set_use_alpha (GtkColorChooser* chooser, gboolean use_alpha);
// void gtk_color_chooser_set_use_alpha (::GtkColorChooser* chooser, gboolean use_alpha);
void base::ColorChooserBase::set_use_alpha (gboolean use_alpha) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, gboolean use_alpha);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_chooser_set_use_alpha;
  auto use_alpha_to_c = use_alpha;
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (gboolean) (use_alpha_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_def_impl.hpp>)
#include <gtk/colorchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorchooser_extra_impl.hpp>)
#include <gtk/colorchooser_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorChooserInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GtkColorChooserInterface *methods = (::GtkColorChooserInterface *) interface_struct;
  (void) methods;

  methods->color_activated = (decltype (methods->color_activated)) detail::method_wrapper<self, void (*) (const Gdk::RGBA & color), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::color_activated_>;
  methods->set_rgba = (decltype (methods->set_rgba)) detail::method_wrapper<self, void (*) (const Gdk::RGBA & color), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::set_rgba_>;
}

// void ColorChooser::add_palette (GtkColorChooser* chooser, GtkOrientation orientation, gint colors_per_line, gint n_colors, GdkRGBA* colors);
// void ColorChooser::add_palette (::GtkColorChooser* chooser, ::GtkOrientation orientation, gint colors_per_line, gint n_colors, ::GdkRGBA** colors);
// SKIP; virtual-method container parameter not supported

// void ColorChooser::color_activated (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::color_activated (::GtkColorChooser* chooser, const ::GdkRGBA* color);
void ColorChooserInterfaceClassImpl::color_activated_ (const Gdk::RGBA & color) noexcept
{
  if (!get_struct_()->color_activated) return ;
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->color_activated;
  auto color_to_c = gi::unwrap (color, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

// void ColorChooser::get_rgba (GtkColorChooser* chooser, GdkRGBA* color);
// void ColorChooser::get_rgba (::GtkColorChooser* chooser, ::GdkRGBA* color);
// SKIP; virtual-method out parameter not supported

// void ColorChooser::set_rgba (GtkColorChooser* chooser, const GdkRGBA* color);
// void ColorChooser::set_rgba (::GtkColorChooser* chooser, const ::GdkRGBA* color);
void ColorChooserInterfaceClassImpl::set_rgba_ (const Gdk::RGBA & color) noexcept
{
  if (!get_struct_()->set_rgba) return ;
  typedef void (*call_wrap_t) (::GtkColorChooser* chooser, const ::GdkRGBA* color);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_rgba;
  auto color_to_c = gi::unwrap (color, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorChooser*) (gobj_()), (const ::GdkRGBA*) (color_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
