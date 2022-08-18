// AUTO-GENERATED

#ifndef _GI_GTK_MENUBUTTON_IMPL_HPP_
#define _GI_GTK_MENUBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_menu_button_new ();
// ::GtkMenuButton* gtk_menu_button_new ();
Gtk::MenuButton base::MenuButtonBase::new_ () noexcept
{
  typedef ::GtkMenuButton* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_menu_button_get_align_widget (GtkMenuButton* menu_button);
// ::GtkWidget* gtk_menu_button_get_align_widget (::GtkMenuButton* menu_button);
Gtk::Widget base::MenuButtonBase::get_align_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_align_widget;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkArrowType gtk_menu_button_get_direction (GtkMenuButton* menu_button);
// ::GtkArrowType gtk_menu_button_get_direction (::GtkMenuButton* menu_button);
Gtk::ArrowType base::MenuButtonBase::get_direction () noexcept
{
  typedef ::GtkArrowType (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_direction;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GMenuModel* gtk_menu_button_get_menu_model (GtkMenuButton* menu_button);
// ::GMenuModel* gtk_menu_button_get_menu_model (::GtkMenuButton* menu_button);
Gio::MenuModel base::MenuButtonBase::get_menu_model () noexcept
{
  typedef ::GMenuModel* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_menu_model;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkPopover* gtk_menu_button_get_popover (GtkMenuButton* menu_button);
// ::GtkPopover* gtk_menu_button_get_popover (::GtkMenuButton* menu_button);
Gtk::Popover base::MenuButtonBase::get_popover () noexcept
{
  typedef ::GtkPopover* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_popover;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkMenu* gtk_menu_button_get_popup (GtkMenuButton* menu_button);
// ::GtkMenu* gtk_menu_button_get_popup (::GtkMenuButton* menu_button);
Gtk::Menu base::MenuButtonBase::get_popup () noexcept
{
  typedef ::GtkMenu* (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_popup;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_menu_button_get_use_popover (GtkMenuButton* menu_button);
// gboolean gtk_menu_button_get_use_popover (::GtkMenuButton* menu_button);
bool base::MenuButtonBase::get_use_popover () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMenuButton* menu_button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_get_use_popover;
  auto _temp_ret = call_wrap_v ((::GtkMenuButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_menu_button_set_align_widget (GtkMenuButton* menu_button, GtkWidget* align_widget);
// void gtk_menu_button_set_align_widget (::GtkMenuButton* menu_button, ::GtkWidget* align_widget);
void base::MenuButtonBase::set_align_widget (Gtk::Widget align_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* align_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_align_widget;
  auto align_widget_to_c = gi::unwrap (align_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (align_widget_to_c));
}
void base::MenuButtonBase::set_align_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* align_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_align_widget;
  auto align_widget_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (align_widget_to_c));
}

// void gtk_menu_button_set_direction (GtkMenuButton* menu_button, GtkArrowType direction);
// void gtk_menu_button_set_direction (::GtkMenuButton* menu_button, ::GtkArrowType direction);
void base::MenuButtonBase::set_direction (Gtk::ArrowType direction) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkArrowType direction);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_direction;
  auto direction_to_c = gi::unwrap (direction);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkArrowType) (direction_to_c));
}

// void gtk_menu_button_set_menu_model (GtkMenuButton* menu_button, GMenuModel* menu_model);
// void gtk_menu_button_set_menu_model (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
void base::MenuButtonBase::set_menu_model (Gio::MenuModel menu_model) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_menu_model;
  auto menu_model_to_c = gi::unwrap (menu_model, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}
void base::MenuButtonBase::set_menu_model () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GMenuModel* menu_model);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_menu_model;
  auto menu_model_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GMenuModel*) (menu_model_to_c));
}

// void gtk_menu_button_set_popover (GtkMenuButton* menu_button, GtkWidget* popover);
// void gtk_menu_button_set_popover (::GtkMenuButton* menu_button, ::GtkWidget* popover);
void base::MenuButtonBase::set_popover (Gtk::Widget popover) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_popover;
  auto popover_to_c = gi::unwrap (popover, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (popover_to_c));
}
void base::MenuButtonBase::set_popover () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_popover;
  auto popover_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (popover_to_c));
}

// void gtk_menu_button_set_popup (GtkMenuButton* menu_button, GtkWidget* menu);
// void gtk_menu_button_set_popup (::GtkMenuButton* menu_button, ::GtkWidget* menu);
void base::MenuButtonBase::set_popup (Gtk::Widget menu) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_popup;
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (menu_to_c));
}
void base::MenuButtonBase::set_popup () noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, ::GtkWidget* menu);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_popup;
  auto menu_to_c = nullptr;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (::GtkWidget*) (menu_to_c));
}

// void gtk_menu_button_set_use_popover (GtkMenuButton* menu_button, gboolean use_popover);
// void gtk_menu_button_set_use_popover (::GtkMenuButton* menu_button, gboolean use_popover);
void base::MenuButtonBase::set_use_popover (gboolean use_popover) noexcept
{
  typedef void (*call_wrap_t) (::GtkMenuButton* menu_button, gboolean use_popover);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_menu_button_set_use_popover;
  auto use_popover_to_c = use_popover;
  call_wrap_v ((::GtkMenuButton*) (gobj_()), (gboolean) (use_popover_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_def_impl.hpp>)
#include <gtk/menubutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/menubutton_extra_impl.hpp>)
#include <gtk/menubutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MenuButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMenuButtonClass *methods = (::GtkMenuButtonClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
