// AUTO-GENERATED

#ifndef _GI_GTK_FONTBUTTON_IMPL_HPP_
#define _GI_GTK_FONTBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FontChooser FontButtonBase::interface_ (gi::interface_tag<Gtk::FontChooser>)
{ return gi::wrap ((Gtk::FontChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FontButtonBase::operator Gtk::FontChooser ()
{ return interface_ (gi::interface_tag<Gtk::FontChooser>()); }

// GtkWidget* gtk_font_button_new ();
// ::GtkFontButton* gtk_font_button_new ();
Gtk::FontButton base::FontButtonBase::new_ () noexcept
{
  typedef ::GtkFontButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_font_button_new_with_font (const gchar* fontname);
// ::GtkFontButton* gtk_font_button_new_with_font (const char* fontname);
Gtk::FontButton base::FontButtonBase::new_with_font (const std::string & fontname) noexcept
{
  typedef ::GtkFontButton* (*call_wrap_t) (const char* fontname);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_new_with_font;
  auto fontname_to_c = gi::unwrap (fontname, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (fontname_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_font_button_get_font_name (GtkFontButton* font_button);
// const char* gtk_font_button_get_font_name (::GtkFontButton* font_button);
// IGNORE; deprecated

// gboolean gtk_font_button_get_show_size (GtkFontButton* font_button);
// gboolean gtk_font_button_get_show_size (::GtkFontButton* font_button);
bool base::FontButtonBase::get_show_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_get_show_size;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_font_button_get_show_style (GtkFontButton* font_button);
// gboolean gtk_font_button_get_show_style (::GtkFontButton* font_button);
bool base::FontButtonBase::get_show_style () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_get_show_style;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// const gchar* gtk_font_button_get_title (GtkFontButton* font_button);
// const char* gtk_font_button_get_title (::GtkFontButton* font_button);
std::string base::FontButtonBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_get_title;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_font_button_get_use_font (GtkFontButton* font_button);
// gboolean gtk_font_button_get_use_font (::GtkFontButton* font_button);
bool base::FontButtonBase::get_use_font () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_get_use_font;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_font_button_get_use_size (GtkFontButton* font_button);
// gboolean gtk_font_button_get_use_size (::GtkFontButton* font_button);
bool base::FontButtonBase::get_use_size () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkFontButton* font_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_get_use_size;
  auto _temp_ret = call_wrap_v ((::GtkFontButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_font_button_set_font_name (GtkFontButton* font_button, const gchar* fontname);
// gboolean gtk_font_button_set_font_name (::GtkFontButton* font_button, const char* fontname);
// IGNORE; deprecated

// void gtk_font_button_set_show_size (GtkFontButton* font_button, gboolean show_size);
// void gtk_font_button_set_show_size (::GtkFontButton* font_button, gboolean show_size);
void base::FontButtonBase::set_show_size (gboolean show_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean show_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_set_show_size;
  auto show_size_to_c = show_size;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (show_size_to_c));
}

// void gtk_font_button_set_show_style (GtkFontButton* font_button, gboolean show_style);
// void gtk_font_button_set_show_style (::GtkFontButton* font_button, gboolean show_style);
void base::FontButtonBase::set_show_style (gboolean show_style) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean show_style);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_set_show_style;
  auto show_style_to_c = show_style;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (show_style_to_c));
}

// void gtk_font_button_set_title (GtkFontButton* font_button, const gchar* title);
// void gtk_font_button_set_title (::GtkFontButton* font_button, const char* title);
void base::FontButtonBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFontButton*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_font_button_set_use_font (GtkFontButton* font_button, gboolean use_font);
// void gtk_font_button_set_use_font (::GtkFontButton* font_button, gboolean use_font);
void base::FontButtonBase::set_use_font (gboolean use_font) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean use_font);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_set_use_font;
  auto use_font_to_c = use_font;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (use_font_to_c));
}

// void gtk_font_button_set_use_size (GtkFontButton* font_button, gboolean use_size);
// void gtk_font_button_set_use_size (::GtkFontButton* font_button, gboolean use_size);
void base::FontButtonBase::set_use_size (gboolean use_size) noexcept
{
  typedef void (*call_wrap_t) (::GtkFontButton* font_button, gboolean use_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_font_button_set_use_size;
  auto use_size_to_c = use_size;
  call_wrap_v ((::GtkFontButton*) (gobj_()), (gboolean) (use_size_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_def_impl.hpp>)
#include <gtk/fontbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/fontbutton_extra_impl.hpp>)
#include <gtk/fontbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FontButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFontButtonClass *methods = (::GtkFontButtonClass *) class_struct;
  (void) methods;

  methods->font_set = (decltype (methods->font_set)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::font_set_>;
}

// void FontButton::font_set (GtkFontButton* gfp);
// void FontButton::font_set (::GtkFontButton* gfp);
void FontButtonClass::font_set_ () noexcept
{
  if (!get_struct_()->font_set) return ;
  typedef void (*call_wrap_t) (::GtkFontButton* gfp);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->font_set;
  call_wrap_v ((::GtkFontButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
