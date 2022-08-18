// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGS_IMPL_HPP_
#define _GI_GTK_SETTINGS_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::StyleProvider SettingsBase::interface_ (gi::interface_tag<Gtk::StyleProvider>)
{ return gi::wrap ((Gtk::StyleProvider::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

SettingsBase::operator Gtk::StyleProvider ()
{ return interface_ (gi::interface_tag<Gtk::StyleProvider>()); }

// GtkSettings* gtk_settings_get_default ();
// ::GtkSettings* gtk_settings_get_default ();
Gtk::Settings base::SettingsBase::get_default () noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_settings_get_default;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkSettings* gtk_settings_get_for_screen (GdkScreen* screen);
// ::GtkSettings* gtk_settings_get_for_screen (::GdkScreen* screen);
Gtk::Settings base::SettingsBase::get_for_screen (Gdk::Screen screen) noexcept
{
  typedef ::GtkSettings* (*call_wrap_t) (::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_settings_get_for_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GdkScreen*) (screen_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_settings_install_property (GParamSpec* pspec);
// void gtk_settings_install_property (::GParamSpec* pspec);
// IGNORE; deprecated

// void gtk_settings_install_property_parser (GParamSpec* pspec, GtkRcPropertyParser parser);
// void gtk_settings_install_property_parser (::GParamSpec* pspec,  parser);
// IGNORE; deprecated

// void gtk_settings_reset_property (GtkSettings* settings, const gchar* name);
// void gtk_settings_reset_property (::GtkSettings* settings, const char* name);
void base::SettingsBase::reset_property (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GtkSettings* settings, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_settings_reset_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkSettings*) (gobj_()), (const char*) (name_to_c));
}

// void gtk_settings_set_double_property (GtkSettings* settings, const gchar* name, gdouble v_double, const gchar* origin);
// void gtk_settings_set_double_property (::GtkSettings* settings, const char* name, gdouble v_double, const char* origin);
// IGNORE; deprecated

// void gtk_settings_set_long_property (GtkSettings* settings, const gchar* name, glong v_long, const gchar* origin);
// void gtk_settings_set_long_property (::GtkSettings* settings, const char* name, glong v_long, const char* origin);
// IGNORE; deprecated

// void gtk_settings_set_property_value (GtkSettings* settings, const gchar* name, const GtkSettingsValue* svalue);
// void gtk_settings_set_property_value (::GtkSettings* settings, const char* name, const ::GtkSettingsValue* svalue);
// IGNORE; deprecated

// void gtk_settings_set_string_property (GtkSettings* settings, const gchar* name, const gchar* v_string, const gchar* origin);
// void gtk_settings_set_string_property (::GtkSettings* settings, const char* name, const char* v_string, const char* origin);
// IGNORE; deprecated


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_def_impl.hpp>)
#include <gtk/settings_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_impl.hpp>)
#include <gtk/settings_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SettingsClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkSettingsClass *methods = (::GtkSettingsClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
