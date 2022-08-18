// AUTO-GENERATED

#ifndef _GI_GTK_COLORBUTTON_IMPL_HPP_
#define _GI_GTK_COLORBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::ColorChooser ColorButtonBase::interface_ (gi::interface_tag<Gtk::ColorChooser>)
{ return gi::wrap ((Gtk::ColorChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ColorButtonBase::operator Gtk::ColorChooser ()
{ return interface_ (gi::interface_tag<Gtk::ColorChooser>()); }

// GtkWidget* gtk_color_button_new ();
// ::GtkColorButton* gtk_color_button_new ();
Gtk::ColorButton base::ColorButtonBase::new_ () noexcept
{
  typedef ::GtkColorButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_color_button_new_with_color (const GdkColor* color);
// ::GtkColorButton* gtk_color_button_new_with_color (const  color);
// IGNORE; deprecated

// GtkWidget* gtk_color_button_new_with_rgba (const GdkRGBA* rgba);
// ::GtkColorButton* gtk_color_button_new_with_rgba (const ::GdkRGBA* rgba);
Gtk::ColorButton base::ColorButtonBase::new_with_rgba (const Gdk::RGBA & rgba) noexcept
{
  typedef ::GtkColorButton* (*call_wrap_t) (const ::GdkRGBA* rgba);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_new_with_rgba;
  auto rgba_to_c = gi::unwrap (rgba, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GdkRGBA*) (rgba_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint16 gtk_color_button_get_alpha (GtkColorButton* button);
// guint16 gtk_color_button_get_alpha (::GtkColorButton* button);
// IGNORE; deprecated

// void gtk_color_button_get_color (GtkColorButton* button, GdkColor* color);
// void gtk_color_button_get_color (::GtkColorButton* button,  color);
// IGNORE; deprecated

// void gtk_color_button_get_rgba (GtkColorButton* button, GdkRGBA* rgba);
// void gtk_color_button_get_rgba (::GtkColorButton* button, ::GdkRGBA* rgba);
// IGNORE; deprecated

// const gchar* gtk_color_button_get_title (GtkColorButton* button);
// const char* gtk_color_button_get_title (::GtkColorButton* button);
std::string base::ColorButtonBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkColorButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_get_title;
  auto _temp_ret = call_wrap_v ((::GtkColorButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_color_button_get_use_alpha (GtkColorButton* button);
// gboolean gtk_color_button_get_use_alpha (::GtkColorButton* button);
// IGNORE; deprecated

// void gtk_color_button_set_alpha (GtkColorButton* button, guint16 alpha);
// void gtk_color_button_set_alpha (::GtkColorButton* button, guint16 alpha);
// IGNORE; deprecated

// void gtk_color_button_set_color (GtkColorButton* button, const GdkColor* color);
// void gtk_color_button_set_color (::GtkColorButton* button, const  color);
// IGNORE; deprecated

// void gtk_color_button_set_rgba (GtkColorButton* button, const GdkRGBA* rgba);
// void gtk_color_button_set_rgba (::GtkColorButton* button, const ::GdkRGBA* rgba);
// IGNORE; deprecated

// void gtk_color_button_set_title (GtkColorButton* button, const gchar* title);
// void gtk_color_button_set_title (::GtkColorButton* button, const char* title);
void base::ColorButtonBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkColorButton* button, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_color_button_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkColorButton*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_color_button_set_use_alpha (GtkColorButton* button, gboolean use_alpha);
// void gtk_color_button_set_use_alpha (::GtkColorButton* button, gboolean use_alpha);
// IGNORE; deprecated



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_def_impl.hpp>)
#include <gtk/colorbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/colorbutton_extra_impl.hpp>)
#include <gtk/colorbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ColorButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkColorButtonClass *methods = (::GtkColorButtonClass *) class_struct;
  (void) methods;

  methods->color_set = (decltype (methods->color_set)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::color_set_>;
}

// void ColorButton::color_set (GtkColorButton* cp);
// void ColorButton::color_set (::GtkColorButton* cp);
void ColorButtonClass::color_set_ () noexcept
{
  if (!get_struct_()->color_set) return ;
  typedef void (*call_wrap_t) (::GtkColorButton* cp);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->color_set;
  call_wrap_v ((::GtkColorButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
