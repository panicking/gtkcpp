// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERBUTTON_IMPL_HPP_
#define _GI_GTK_APPCHOOSERBUTTON_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AppChooser AppChooserButtonBase::interface_ (gi::interface_tag<Gtk::AppChooser>)
{ return gi::wrap ((Gtk::AppChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

AppChooserButtonBase::operator Gtk::AppChooser ()
{ return interface_ (gi::interface_tag<Gtk::AppChooser>()); }

// GtkWidget* gtk_app_chooser_button_new (const gchar* content_type);
// ::GtkAppChooserButton* gtk_app_chooser_button_new (const char* content_type);
Gtk::AppChooserButton base::AppChooserButtonBase::new_ (const std::string & content_type) noexcept
{
  typedef ::GtkAppChooserButton* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_new;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_app_chooser_button_append_custom_item (GtkAppChooserButton* self, const gchar* name, const gchar* label, GIcon* icon);
// void gtk_app_chooser_button_append_custom_item (::GtkAppChooserButton* self, const char* name, const char* label, ::GIcon* icon);
void base::AppChooserButtonBase::append_custom_item (const std::string & name, const std::string & label, Gio::Icon icon) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* name, const char* label, ::GIcon* icon);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_append_custom_item;
  auto icon_to_c = gi::unwrap (icon, gi::transfer_none, gi::direction_in);
  auto label_to_c = gi::unwrap (label, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (name_to_c), (const char*) (label_to_c), (::GIcon*) (icon_to_c));
}

// void gtk_app_chooser_button_append_separator (GtkAppChooserButton* self);
// void gtk_app_chooser_button_append_separator (::GtkAppChooserButton* self);
void base::AppChooserButtonBase::append_separator () noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_append_separator;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
}

// const gchar* gtk_app_chooser_button_get_heading (GtkAppChooserButton* self);
// const char* gtk_app_chooser_button_get_heading (::GtkAppChooserButton* self);
std::string base::AppChooserButtonBase::get_heading () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_get_heading;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_app_chooser_button_get_show_default_item (GtkAppChooserButton* self);
// gboolean gtk_app_chooser_button_get_show_default_item (::GtkAppChooserButton* self);
bool base::AppChooserButtonBase::get_show_default_item () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_get_show_default_item;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_button_get_show_dialog_item (GtkAppChooserButton* self);
// gboolean gtk_app_chooser_button_get_show_dialog_item (::GtkAppChooserButton* self);
bool base::AppChooserButtonBase::get_show_dialog_item () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserButton* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_get_show_dialog_item;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserButton*) (gobj_()));
  return _temp_ret;
}

// void gtk_app_chooser_button_set_active_custom_item (GtkAppChooserButton* self, const gchar* name);
// void gtk_app_chooser_button_set_active_custom_item (::GtkAppChooserButton* self, const char* name);
void base::AppChooserButtonBase::set_active_custom_item (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_set_active_custom_item;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_app_chooser_button_set_heading (GtkAppChooserButton* self, const gchar* heading);
// void gtk_app_chooser_button_set_heading (::GtkAppChooserButton* self, const char* heading);
void base::AppChooserButtonBase::set_heading (const std::string & heading) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* heading);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_set_heading;
  auto heading_to_c = gi::unwrap (heading, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (heading_to_c));
}

// void gtk_app_chooser_button_set_show_default_item (GtkAppChooserButton* self, gboolean setting);
// void gtk_app_chooser_button_set_show_default_item (::GtkAppChooserButton* self, gboolean setting);
void base::AppChooserButtonBase::set_show_default_item (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_set_show_default_item;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_button_set_show_dialog_item (GtkAppChooserButton* self, gboolean setting);
// void gtk_app_chooser_button_set_show_dialog_item (::GtkAppChooserButton* self, gboolean setting);
void base::AppChooserButtonBase::set_show_dialog_item (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_button_set_show_dialog_item;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (gboolean) (setting_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_def_impl.hpp>)
#include <gtk/appchooserbutton_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserbutton_extra_impl.hpp>)
#include <gtk/appchooserbutton_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AppChooserButtonClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAppChooserButtonClass *methods = (::GtkAppChooserButtonClass *) class_struct;
  (void) methods;

  methods->custom_item_activated = (decltype (methods->custom_item_activated)) detail::method_wrapper<self, void (*) (const std::string & item_name), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::custom_item_activated_>;
}

// void AppChooserButton::custom_item_activated (GtkAppChooserButton* self, const gchar* item_name);
// void AppChooserButton::custom_item_activated (::GtkAppChooserButton* self, const char* item_name);
void AppChooserButtonClass::custom_item_activated_ (const std::string & item_name) noexcept
{
  if (!get_struct_()->custom_item_activated) return ;
  typedef void (*call_wrap_t) (::GtkAppChooserButton* self, const char* item_name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->custom_item_activated;
  auto item_name_to_c = gi::unwrap (item_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserButton*) (gobj_()), (const char*) (item_name_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
