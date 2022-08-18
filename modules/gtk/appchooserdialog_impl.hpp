// AUTO-GENERATED

#ifndef _GI_GTK_APPCHOOSERDIALOG_IMPL_HPP_
#define _GI_GTK_APPCHOOSERDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::AppChooser AppChooserDialogBase::interface_ (gi::interface_tag<Gtk::AppChooser>)
{ return gi::wrap ((Gtk::AppChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

AppChooserDialogBase::operator Gtk::AppChooser ()
{ return interface_ (gi::interface_tag<Gtk::AppChooser>()); }

// GtkWidget* gtk_app_chooser_dialog_new (GtkWindow* parent, GtkDialogFlags flags, GFile* file);
// ::GtkAppChooserDialog* gtk_app_chooser_dialog_new (::GtkWindow* parent, ::GtkDialogFlags flags, ::GFile* file);
Gtk::AppChooserDialog base::AppChooserDialogBase::new_ (Gtk::Window parent, Gtk::DialogFlags flags, Gio::File file) noexcept
{
  typedef ::GtkAppChooserDialog* (*call_wrap_t) (::GtkWindow* parent, ::GtkDialogFlags flags, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_new;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkDialogFlags) (flags_to_c), (::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::AppChooserDialog base::AppChooserDialogBase::new_ (Gtk::DialogFlags flags, Gio::File file) noexcept
{
  typedef ::GtkAppChooserDialog* (*call_wrap_t) (::GtkWindow* parent, ::GtkDialogFlags flags, ::GFile* file);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_new;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkDialogFlags) (flags_to_c), (::GFile*) (file_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_app_chooser_dialog_new_for_content_type (GtkWindow* parent, GtkDialogFlags flags, const gchar* content_type);
// ::GtkAppChooserDialog* gtk_app_chooser_dialog_new_for_content_type (::GtkWindow* parent, ::GtkDialogFlags flags, const char* content_type);
Gtk::AppChooserDialog base::AppChooserDialogBase::new_for_content_type (Gtk::Window parent, Gtk::DialogFlags flags, const std::string & content_type) noexcept
{
  typedef ::GtkAppChooserDialog* (*call_wrap_t) (::GtkWindow* parent, ::GtkDialogFlags flags, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_new_for_content_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkDialogFlags) (flags_to_c), (const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
Gtk::AppChooserDialog base::AppChooserDialogBase::new_for_content_type (Gtk::DialogFlags flags, const std::string & content_type) noexcept
{
  typedef ::GtkAppChooserDialog* (*call_wrap_t) (::GtkWindow* parent, ::GtkDialogFlags flags, const char* content_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_new_for_content_type;
  auto content_type_to_c = gi::unwrap (content_type, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c), (::GtkDialogFlags) (flags_to_c), (const char*) (content_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* gtk_app_chooser_dialog_get_heading (GtkAppChooserDialog* self);
// const char* gtk_app_chooser_dialog_get_heading (::GtkAppChooserDialog* self);
std::string base::AppChooserDialogBase::get_heading () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkAppChooserDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_get_heading;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWidget* gtk_app_chooser_dialog_get_widget (GtkAppChooserDialog* self);
// ::GtkWidget* gtk_app_chooser_dialog_get_widget (::GtkAppChooserDialog* self);
Gtk::Widget base::AppChooserDialogBase::get_widget () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkAppChooserDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_get_widget;
  auto _temp_ret = call_wrap_v ((::GtkAppChooserDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_app_chooser_dialog_set_heading (GtkAppChooserDialog* self, const gchar* heading);
// void gtk_app_chooser_dialog_set_heading (::GtkAppChooserDialog* self, const char* heading);
void base::AppChooserDialogBase::set_heading (const std::string & heading) noexcept
{
  typedef void (*call_wrap_t) (::GtkAppChooserDialog* self, const char* heading);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_app_chooser_dialog_set_heading;
  auto heading_to_c = gi::unwrap (heading, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkAppChooserDialog*) (gobj_()), (const char*) (heading_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra_def_impl.hpp>)
#include <gtk/appchooserdialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/appchooserdialog_extra_impl.hpp>)
#include <gtk/appchooserdialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void AppChooserDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkAppChooserDialogClass *methods = (::GtkAppChooserDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
