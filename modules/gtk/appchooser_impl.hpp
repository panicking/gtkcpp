// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSER_IMPL_HPP_
#define _GI_GTK_APPCHOOSER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GAppInfo* gtk_app_chooser_get_app_info (GtkAppChooser* self);
// ::GAppInfo* gtk_app_chooser_get_app_info (::GtkAppChooser* self);
Gio::AppInfo base::AppChooserBase::get_app_info () noexcept
{
  typedef ::GAppInfo* (*call_wrap_t) (::GtkAppChooser* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_get_app_info;
  auto _temp_ret = call_wrap_v ((::GtkAppChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* gtk_app_chooser_get_content_type (GtkAppChooser* self);
// char* gtk_app_chooser_get_content_type (::GtkAppChooser* self);
std::string base::AppChooserBase::get_content_type () noexcept
{
  typedef char* (*call_wrap_t) (::GtkAppChooser* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_get_content_type;
  auto _temp_ret = call_wrap_v ((::GtkAppChooser*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gtk_app_chooser_refresh (GtkAppChooser* self);
// void gtk_app_chooser_refresh (::GtkAppChooser* self);
void base::AppChooserBase::refresh () noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooser* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_refresh;
  call_wrap_v ((::GtkAppChooser*) (gobj_()));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooser_extra_def_impl.hpp>)
#include <gtk/appchooser_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooser_extra_impl.hpp>)
#include <gtk/appchooser_extra_impl.hpp>
#endif
#endif

#endif
