// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERWIDGET_IMPL_HPP_
#define _GI_GTK_APPCHOOSERWIDGET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AppChooser AppChooserWidgetBase::interface_ (gi::interface_tag<Gtk::AppChooser>)
{ return gi::wrap ((Gtk::AppChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

AppChooserWidgetBase::operator Gtk::AppChooser ()
{ return interface_ (gi::interface_tag<Gtk::AppChooser>()); }

// GtkWidget* gtk_app_chooser_widget_new (const gchar* content_type);
// ::GtkAppChooserWidget* gtk_app_chooser_widget_new (const char* content_type);
Gtk::AppChooserWidget base::AppChooserWidgetBase::new_ (const std::string & content_type) noexcept
{
  typedef ::GtkAppChooserWidget* (*call_wrap_t) (const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_new;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_app_chooser_widget_get_default_text (GtkAppChooserWidget* self);
// const char* gtk_app_chooser_widget_get_default_text (::GtkAppChooserWidget* self);
std::string base::AppChooserWidgetBase::get_default_text () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_default_text;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_app_chooser_widget_get_show_all (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_all (::GtkAppChooserWidget* self);
bool base::AppChooserWidgetBase::get_show_all () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_show_all;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_default (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_default (::GtkAppChooserWidget* self);
bool base::AppChooserWidgetBase::get_show_default () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_show_default;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_fallback (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_fallback (::GtkAppChooserWidget* self);
bool base::AppChooserWidgetBase::get_show_fallback () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_show_fallback;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_other (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_other (::GtkAppChooserWidget* self);
bool base::AppChooserWidgetBase::get_show_other () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_show_other;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// gboolean gtk_app_chooser_widget_get_show_recommended (GtkAppChooserWidget* self);
// gboolean gtk_app_chooser_widget_get_show_recommended (::GtkAppChooserWidget* self);
bool base::AppChooserWidgetBase::get_show_recommended () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkAppChooserWidget* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_get_show_recommended;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserWidget*) (gobj_()));
  return _temp_ret;
}

// void gtk_app_chooser_widget_set_default_text (GtkAppChooserWidget* self, const gchar* text);
// void gtk_app_chooser_widget_set_default_text (::GtkAppChooserWidget* self, const char* text);
void base::AppChooserWidgetBase::set_default_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_default_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (const char*) (text_to_c));
}

// void gtk_app_chooser_widget_set_show_all (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_all (::GtkAppChooserWidget* self, gboolean setting);
void base::AppChooserWidgetBase::set_show_all (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_show_all;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_default (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_default (::GtkAppChooserWidget* self, gboolean setting);
void base::AppChooserWidgetBase::set_show_default (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_show_default;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_fallback (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_fallback (::GtkAppChooserWidget* self, gboolean setting);
void base::AppChooserWidgetBase::set_show_fallback (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_show_fallback;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_other (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_other (::GtkAppChooserWidget* self, gboolean setting);
void base::AppChooserWidgetBase::set_show_other (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_show_other;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}

// void gtk_app_chooser_widget_set_show_recommended (GtkAppChooserWidget* self, gboolean setting);
// void gtk_app_chooser_widget_set_show_recommended (::GtkAppChooserWidget* self, gboolean setting);
void base::AppChooserWidgetBase::set_show_recommended (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_widget_set_show_recommended;
  auto setting_to_c = setting;
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (gboolean) (setting_to_c));
}





} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_def_impl.hpp>)
#include <gtk/appchooserwidget_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserwidget_extra_impl.hpp>)
#include <gtk/appchooserwidget_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AppChooserWidgetClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAppChooserWidgetClass *methods = (::GtkAppChooserWidgetClass *) class_struct;
  (void) methods;

  methods->application_activated = (decltype (methods->application_activated)) detail::method_wrapper<self, void (*) (Gio::AppInfo app_info), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::application_activated_>;
  methods->application_selected = (decltype (methods->application_selected)) detail::method_wrapper<self, void (*) (Gio::AppInfo app_info), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::application_selected_>;
  methods->populate_popup = (decltype (methods->populate_popup)) detail::method_wrapper<self, void (*) (Gtk::Menu menu, Gio::AppInfo app_info), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::populate_popup_>;
}

// void AppChooserWidget::application_activated (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_activated (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
void AppChooserWidgetClass::application_activated_ (Gio::AppInfo app_info) noexcept
{
  if (!get_struct_()->application_activated) return ;
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->application_activated;
  auto app_info_to_c = gi::unwrap (app_info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (::GAppInfo*) (app_info_to_c));
}

// void AppChooserWidget::application_selected (GtkAppChooserWidget* self, GAppInfo* app_info);
// void AppChooserWidget::application_selected (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
void AppChooserWidgetClass::application_selected_ (Gio::AppInfo app_info) noexcept
{
  if (!get_struct_()->application_selected) return ;
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, ::GAppInfo* app_info);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->application_selected;
  auto app_info_to_c = gi::unwrap (app_info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (::GAppInfo*) (app_info_to_c));
}

// void AppChooserWidget::populate_popup (GtkAppChooserWidget* self, GtkMenu* menu, GAppInfo* app_info);
// void AppChooserWidget::populate_popup (::GtkAppChooserWidget* self, ::GtkMenu* menu, ::GAppInfo* app_info);
void AppChooserWidgetClass::populate_popup_ (Gtk::Menu menu, Gio::AppInfo app_info) noexcept
{
  if (!get_struct_()->populate_popup) return ;
  typedef void (*call_wrap_t) (::GtkAppChooserWidget* self, ::GtkMenu* menu, ::GAppInfo* app_info);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->populate_popup;
  auto app_info_to_c = gi::unwrap (app_info, gi::transfer_none, gi::direction_in);
  auto menu_to_c = gi::unwrap (menu, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserWidget*) (gobj_()), (::GtkMenu*) (menu_to_c), (::GAppInfo*) (app_info_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
