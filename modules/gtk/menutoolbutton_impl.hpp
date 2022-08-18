// AUTO-GENERATED

#ifndef _GI_GTK_MENUTOOLBUTTON_IMPL_HPP_
#define _GI_GTK_MENUTOOLBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkToolItem* gtk_menu_tool_button_new (GtkWidget* icon_widget, const gchar* label);
// ::GtkMenuToolButton* gtk_menu_tool_button_new (::GtkWidget* icon_widget, const char* label);
Gtk::MenuToolButton base::MenuToolButtonBase::new_ (Gtk::Widget icon_widget, const std::string & label) noexcept
{
  typedef ::GtkMenuToolButton* (*call_wrap_t) (::GtkWidget* icon_widget, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto icon_widget_to_c = gi::unwrap (icon_widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (icon_widget_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::MenuToolButton base::MenuToolButtonBase::new_ () noexcept
{
  typedef ::GtkMenuToolButton* (*call_wrap_t) (::GtkWidget* icon_widget, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_new;
  auto label_to_c = nullptr;
  auto icon_widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (icon_widget_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_menu_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkMenuToolButton* gtk_menu_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// GtkWidget* gtk_menu_tool_button_get_menu (GtkMenuToolButton* button);
// ::GtkWidget* gtk_menu_tool_button_get_menu (::GtkMenuToolButton* button);
Gtk::Widget base::MenuToolButtonBase::get_menu () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_get_menu;
  auto _temp_ret = call_wrap_v ((::GtkMenuToolButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_menu_tool_button_set_arrow_tooltip_markup (GtkMenuToolButton* button, const gchar* markup);
// void gtk_menu_tool_button_set_arrow_tooltip_markup (::GtkMenuToolButton* button, const char* markup);
void base::MenuToolButtonBase::set_arrow_tooltip_markup (const std::string & markup) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuToolButton* button, const char* markup);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_set_arrow_tooltip_markup;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuToolButton*) (gobj_()), (const char*) (markup_to_c));
}

// void gtk_menu_tool_button_set_arrow_tooltip_text (GtkMenuToolButton* button, const gchar* text);
// void gtk_menu_tool_button_set_arrow_tooltip_text (::GtkMenuToolButton* button, const char* text);
void base::MenuToolButtonBase::set_arrow_tooltip_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuToolButton* button, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_set_arrow_tooltip_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuToolButton*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_menu_tool_button_set_menu (GtkMenuToolButton* button, GtkWidget* menu);
// void gtk_menu_tool_button_set_menu (::GtkMenuToolButton* button, ::GtkWidget* menu);
void base::MenuToolButtonBase::set_menu (Gtk::Widget menu) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuToolButton* button, ::GtkWidget* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_tool_button_set_menu;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuToolButton*) (gobj_()), (::GtkWidget*) (menu_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menutoolbutton_extra_def_impl.hpp>)
#include <gtk/menutoolbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menutoolbutton_extra_impl.hpp>)
#include <gtk/menutoolbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuToolButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuToolButtonClass *methods = (::GtkMenuToolButtonClass *) class_struct;
  (void) methods;

  methods->show_menu = (decltype (methods->show_menu)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::show_menu_>;
}

// void MenuToolButton::show_menu (GtkMenuToolButton* button);
// void MenuToolButton::show_menu (::GtkMenuToolButton* button);
void MenuToolButtonClass::show_menu_ () noexcept
{
  if (!get_struct_()->show_menu) return ;
  typedef void (*call_wrap_t) (::GtkMenuToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show_menu;
  call_wrap_v ((::GtkMenuToolButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
