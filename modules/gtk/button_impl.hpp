// AUTO-GENERATED

#ifndef _GI_GTK_BUTTON_IMPL_HPP_
#define _GI_GTK_BUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable ButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

Gtk::Activatable ButtonBase::interface_ (gi::interface_tag<Gtk::Activatable>)
{ return gi::wrap ((Gtk::Activatable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ButtonBase::operator Gtk::Activatable ()
{ return interface_ (gi::interface_tag<Gtk::Activatable>()); }

// GtkWidget* gtk_button_new ();
// ::GtkButton* gtk_button_new ();
Gtk::Button base::ButtonBase::new_ () noexcept
{
  typedef ::GtkButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_button_new_from_icon_name (const gchar* icon_name, GtkIconSize size);
// ::GtkButton* gtk_button_new_from_icon_name (const char* icon_name, gint size);
Gtk::Button base::ButtonBase::new_from_icon_name (const std::string & icon_name, gint size) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::Button base::ButtonBase::new_from_icon_name (gint size) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* icon_name, gint size);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_from_icon_name;
  auto size_to_c = size;
  auto icon_name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (icon_name_to_c), (gint) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_button_new_from_stock (const gchar* stock_id);
// ::GtkButton* gtk_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// GtkWidget* gtk_button_new_with_label (const gchar* label);
// ::GtkButton* gtk_button_new_with_label (const char* label);
Gtk::Button base::ButtonBase::new_with_label (const std::string & label) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_with_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_button_new_with_mnemonic (const gchar* label);
// ::GtkButton* gtk_button_new_with_mnemonic (const char* label);
Gtk::Button base::ButtonBase::new_with_mnemonic (const std::string & label) noexcept
{
  typedef ::GtkButton* (*call_wrap_t) (const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_new_with_mnemonic;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_button_clicked (GtkButton* button);
// void gtk_button_clicked (::GtkButton* button);
void base::ButtonBase::clicked () noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_clicked;
  call_wrap_v ((::GtkButton*) (gobj_()));
}

// void gtk_button_enter (GtkButton* button);
// void gtk_button_enter (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_get_alignment (GtkButton* button, gfloat* xalign, gfloat* yalign);
// void gtk_button_get_alignment (::GtkButton* button, gfloat* xalign, gfloat* yalign);
// IGNORE; deprecated

// gboolean gtk_button_get_always_show_image (GtkButton* button);
// gboolean gtk_button_get_always_show_image (::GtkButton* button);
bool base::ButtonBase::get_always_show_image () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_always_show_image;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return _temp_ret;
}

// GdkWindow* gtk_button_get_event_window (GtkButton* button);
// ::GdkWindow* gtk_button_get_event_window (::GtkButton* button);
Gdk::Window base::ButtonBase::get_event_window () noexcept
{
  typedef ::GdkWindow* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_event_window;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_button_get_focus_on_click (GtkButton* button);
// gboolean gtk_button_get_focus_on_click (::GtkButton* button);
// IGNORE; deprecated

// GtkWidget* gtk_button_get_image (GtkButton* button);
// ::GtkWidget* gtk_button_get_image (::GtkButton* button);
Gtk::Widget base::ButtonBase::get_image () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_image;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPositionType gtk_button_get_image_position (GtkButton* button);
// ::GtkPositionType gtk_button_get_image_position (::GtkButton* button);
Gtk::PositionType base::ButtonBase::get_image_position () noexcept
{
  typedef ::GtkPositionType (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_image_position;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// const gchar* gtk_button_get_label (GtkButton* button);
// const char* gtk_button_get_label (::GtkButton* button);
std::string base::ButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_label;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkReliefStyle gtk_button_get_relief (GtkButton* button);
// ::GtkReliefStyle gtk_button_get_relief (::GtkButton* button);
Gtk::ReliefStyle base::ButtonBase::get_relief () noexcept
{
  typedef ::GtkReliefStyle (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_relief;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gtk_button_get_use_stock (GtkButton* button);
// gboolean gtk_button_get_use_stock (::GtkButton* button);
// IGNORE; deprecated

// gboolean gtk_button_get_use_underline (GtkButton* button);
// gboolean gtk_button_get_use_underline (::GtkButton* button);
bool base::ButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_button_leave (GtkButton* button);
// void gtk_button_leave (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_pressed (GtkButton* button);
// void gtk_button_pressed (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_released (GtkButton* button);
// void gtk_button_released (::GtkButton* button);
// IGNORE; deprecated

// void gtk_button_set_alignment (GtkButton* button, gfloat xalign, gfloat yalign);
// void gtk_button_set_alignment (::GtkButton* button, gfloat xalign, gfloat yalign);
// IGNORE; deprecated

// void gtk_button_set_always_show_image (GtkButton* button, gboolean always_show);
// void gtk_button_set_always_show_image (::GtkButton* button, gboolean always_show);
void base::ButtonBase::set_always_show_image (gboolean always_show) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, gboolean always_show);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_always_show_image;
  auto always_show_to_c = always_show;
  call_wrap_v ((::GtkButton*) (gobj_()), (gboolean) (always_show_to_c));
}

// void gtk_button_set_focus_on_click (GtkButton* button, gboolean focus_on_click);
// void gtk_button_set_focus_on_click (::GtkButton* button, gboolean focus_on_click);
// IGNORE; deprecated

// void gtk_button_set_image (GtkButton* button, GtkWidget* image);
// void gtk_button_set_image (::GtkButton* button, ::GtkWidget* image);
void base::ButtonBase::set_image (Gtk::Widget image) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkWidget* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_image;
  auto image_to_c = gi::unwrap (image, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkWidget*) (image_to_c));
}
void base::ButtonBase::set_image () noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkWidget* image);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_image;
  auto image_to_c = nullptr;
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkWidget*) (image_to_c));
}

// void gtk_button_set_image_position (GtkButton* button, GtkPositionType position);
// void gtk_button_set_image_position (::GtkButton* button, ::GtkPositionType position);
void base::ButtonBase::set_image_position (Gtk::PositionType position) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkPositionType position);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_image_position;
  auto position_to_c = gi::unwrap (position);
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkPositionType) (position_to_c));
}

// void gtk_button_set_label (GtkButton* button, const gchar* label);
// void gtk_button_set_label (::GtkButton* button, const char* label);
void base::ButtonBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkButton*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_button_set_relief (GtkButton* button, GtkReliefStyle relief);
// void gtk_button_set_relief (::GtkButton* button, ::GtkReliefStyle relief);
void base::ButtonBase::set_relief (Gtk::ReliefStyle relief) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, ::GtkReliefStyle relief);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_relief;
  auto relief_to_c = gi::unwrap (relief);
  call_wrap_v ((::GtkButton*) (gobj_()), (::GtkReliefStyle) (relief_to_c));
}

// void gtk_button_set_use_stock (GtkButton* button, gboolean use_stock);
// void gtk_button_set_use_stock (::GtkButton* button, gboolean use_stock);
// IGNORE; deprecated

// void gtk_button_set_use_underline (GtkButton* button, gboolean use_underline);
// void gtk_button_set_use_underline (::GtkButton* button, gboolean use_underline);
void base::ButtonBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkButton* button, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_button_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkButton*) (gobj_()), (gboolean) (use_underline_to_c));
}



// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated

// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/button_extra_def_impl.hpp>)
#include <gtk/button_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/button_extra_impl.hpp>)
#include <gtk/button_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkButtonClass *methods = (::GtkButtonClass *) class_struct;
  (void) methods;

  methods->activate = (decltype (methods->activate)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::activate_>;
  methods->clicked = (decltype (methods->clicked)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::clicked_>;
}

// void Button::activate (GtkButton* button);
// void Button::activate (::GtkButton* button);
void ButtonClass::activate_ () noexcept
{
  if (!get_struct_()->activate) return ;
  typedef void (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->activate;
  call_wrap_v ((::GtkButton*) (gobj_()));
}

// void Button::clicked (GtkButton* button);
// void Button::clicked (::GtkButton* button);
void ButtonClass::clicked_ () noexcept
{
  if (!get_struct_()->clicked) return ;
  typedef void (*call_wrap_t) (::GtkButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clicked;
  call_wrap_v ((::GtkButton*) (gobj_()));
}

// void Button::enter (GtkButton* button);
// void Button::enter (::GtkButton* button);
// IGNORE; deprecated

// void Button::leave (GtkButton* button);
// void Button::leave (::GtkButton* button);
// IGNORE; deprecated

// void Button::pressed (GtkButton* button);
// void Button::pressed (::GtkButton* button);
// IGNORE; deprecated

// void Button::released (GtkButton* button);
// void Button::released (::GtkButton* button);
// IGNORE; deprecated

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
