// AUTO-GENERATED

#ifndef _GI_GTK_TOOLBUTTON_IMPL_HPP_
#define _GI_GTK_TOOLBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::Actionable ToolButtonBase::interface_ (gi::interface_tag<Gtk::Actionable>)
{ return gi::wrap ((Gtk::Actionable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

ToolButtonBase::operator Gtk::Actionable ()
{ return interface_ (gi::interface_tag<Gtk::Actionable>()); }

// GtkToolItem* gtk_tool_button_new (GtkWidget* icon_widget, const gchar* label);
// ::GtkToolButton* gtk_tool_button_new (::GtkWidget* icon_widget, const char* label);
Gtk::ToolButton base::ToolButtonBase::new_ (Gtk::Widget icon_widget, const std::string & label) noexcept
{
  typedef ::GtkToolButton* (*call_wrap_t) (::GtkWidget* icon_widget, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_new;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto icon_widget_to_c = gi::unwrap (icon_widget, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (icon_widget_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::ToolButton base::ToolButtonBase::new_ () noexcept
{
  typedef ::GtkToolButton* (*call_wrap_t) (::GtkWidget* icon_widget, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_new;
  auto label_to_c = nullptr;
  auto icon_widget_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWidget*) (icon_widget_to_c), (const char*) (label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkToolItem* gtk_tool_button_new_from_stock (const gchar* stock_id);
// ::GtkToolButton* gtk_tool_button_new_from_stock (const char* stock_id);
// IGNORE; deprecated

// const gchar* gtk_tool_button_get_icon_name (GtkToolButton* button);
// const char* gtk_tool_button_get_icon_name (::GtkToolButton* button);
std::string base::ToolButtonBase::get_icon_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_get_icon_name;
  auto _temp_ret = call_wrap_v ((::GtkToolButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_tool_button_get_icon_widget (GtkToolButton* button);
// ::GtkWidget* gtk_tool_button_get_icon_widget (::GtkToolButton* button);
Gtk::Widget base::ToolButtonBase::get_icon_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_get_icon_widget;
  auto _temp_ret = call_wrap_v ((::GtkToolButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_tool_button_get_label (GtkToolButton* button);
// const char* gtk_tool_button_get_label (::GtkToolButton* button);
std::string base::ToolButtonBase::get_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_get_label;
  auto _temp_ret = call_wrap_v ((::GtkToolButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_tool_button_get_label_widget (GtkToolButton* button);
// ::GtkWidget* gtk_tool_button_get_label_widget (::GtkToolButton* button);
Gtk::Widget base::ToolButtonBase::get_label_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_get_label_widget;
  auto _temp_ret = call_wrap_v ((::GtkToolButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_tool_button_get_stock_id (GtkToolButton* button);
// const char* gtk_tool_button_get_stock_id (::GtkToolButton* button);
// IGNORE; deprecated

// gboolean gtk_tool_button_get_use_underline (GtkToolButton* button);
// gboolean gtk_tool_button_get_use_underline (::GtkToolButton* button);
bool base::ToolButtonBase::get_use_underline () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkToolButton* button);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_get_use_underline;
  auto _temp_ret = call_wrap_v ((::GtkToolButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_tool_button_set_icon_name (GtkToolButton* button, const gchar* icon_name);
// void gtk_tool_button_set_icon_name (::GtkToolButton* button, const char* icon_name);
void base::ToolButtonBase::set_icon_name (const std::string & icon_name) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_icon_name;
  auto icon_name_to_c = gi::unwrap (icon_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolButton*) (gobj_()), (const char*) (icon_name_to_c));
}
void base::ToolButtonBase::set_icon_name () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, const char* icon_name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_icon_name;
  auto icon_name_to_c = nullptr;
  call_wrap_v ((::GtkToolButton*) (gobj_()), (const char*) (icon_name_to_c));
}

// void gtk_tool_button_set_icon_widget (GtkToolButton* button, GtkWidget* icon_widget);
// void gtk_tool_button_set_icon_widget (::GtkToolButton* button, ::GtkWidget* icon_widget);
void base::ToolButtonBase::set_icon_widget (Gtk::Widget icon_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, ::GtkWidget* icon_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_icon_widget;
  auto icon_widget_to_c = gi::unwrap (icon_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolButton*) (gobj_()), (::GtkWidget*) (icon_widget_to_c));
}
void base::ToolButtonBase::set_icon_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, ::GtkWidget* icon_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_icon_widget;
  auto icon_widget_to_c = nullptr;
  call_wrap_v ((::GtkToolButton*) (gobj_()), (::GtkWidget*) (icon_widget_to_c));
}

// void gtk_tool_button_set_label (GtkToolButton* button, const gchar* label);
// void gtk_tool_button_set_label (::GtkToolButton* button, const char* label);
void base::ToolButtonBase::set_label (const std::string & label) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_label;
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolButton*) (gobj_()), (const char*) (label_to_c));
}
void base::ToolButtonBase::set_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, const char* label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_label;
  auto label_to_c = nullptr;
  call_wrap_v ((::GtkToolButton*) (gobj_()), (const char*) (label_to_c));
}

// void gtk_tool_button_set_label_widget (GtkToolButton* button, GtkWidget* label_widget);
// void gtk_tool_button_set_label_widget (::GtkToolButton* button, ::GtkWidget* label_widget);
void base::ToolButtonBase::set_label_widget (Gtk::Widget label_widget) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_label_widget;
  auto label_widget_to_c = gi::unwrap (label_widget, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkToolButton*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}
void base::ToolButtonBase::set_label_widget () noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, ::GtkWidget* label_widget);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_label_widget;
  auto label_widget_to_c = nullptr;
  call_wrap_v ((::GtkToolButton*) (gobj_()), (::GtkWidget*) (label_widget_to_c));
}

// void gtk_tool_button_set_stock_id (GtkToolButton* button, const gchar* stock_id);
// void gtk_tool_button_set_stock_id (::GtkToolButton* button, const char* stock_id);
// IGNORE; deprecated

// void gtk_tool_button_set_use_underline (GtkToolButton* button, gboolean use_underline);
// void gtk_tool_button_set_use_underline (::GtkToolButton* button, gboolean use_underline);
void base::ToolButtonBase::set_use_underline (gboolean use_underline) noexcept
{
  typedef void (*call_wrap_t) (::GtkToolButton* button, gboolean use_underline);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_tool_button_set_use_underline;
  auto use_underline_to_c = use_underline;
  call_wrap_v ((::GtkToolButton*) (gobj_()), (gboolean) (use_underline_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/toolbutton_extra_def_impl.hpp>)
#include <gtk/toolbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/toolbutton_extra_impl.hpp>)
#include <gtk/toolbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void ToolButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkToolButtonClass *methods = (::GtkToolButtonClass *) class_struct;
  (void) methods;

  methods->clicked = (decltype (methods->clicked)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::clicked_>;
}

// void ToolButton::clicked (GtkToolButton* tool_item);
// void ToolButton::clicked (::GtkToolButton* tool_item);
void ToolButtonClass::clicked_ () noexcept
{
  if (!get_struct_()->clicked) return ;
  typedef void (*call_wrap_t) (::GtkToolButton* tool_item);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->clicked;
  call_wrap_v ((::GtkToolButton*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
