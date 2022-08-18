// AUTO-GENERATED

#ifndef _GI_GTK_MESSAGEDIALOG_IMPL_HPP_
#define _GI_GTK_MESSAGEDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GtkWidget* gtk_message_dialog_new (GtkWindow* parent, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const gchar* message_format);
// ::GtkMessageDialog* gtk_message_dialog_new (::GtkWindow* parent, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_message_dialog_new_with_markup (GtkWindow* parent, GtkDialogFlags flags, GtkMessageType type, GtkButtonsType buttons, const gchar* message_format);
// ::GtkMessageDialog* gtk_message_dialog_new_with_markup (::GtkWindow* parent, ::GtkDialogFlags flags, ::GtkMessageType type, ::GtkButtonsType buttons, const char* message_format);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_markup (GtkMessageDialog* message_dialog, const gchar* message_format);
// void gtk_message_dialog_format_secondary_markup (::GtkMessageDialog* message_dialog, const char* message_format);
// IGNORE; not introspectable, varargs not supported

// void gtk_message_dialog_format_secondary_text (GtkMessageDialog* message_dialog, const gchar* message_format);
// void gtk_message_dialog_format_secondary_text (::GtkMessageDialog* message_dialog, const char* message_format);
// IGNORE; not introspectable, varargs not supported

// GtkWidget* gtk_message_dialog_get_image (GtkMessageDialog* dialog);
// ::GtkWidget* gtk_message_dialog_get_image (::GtkMessageDialog* dialog);
// IGNORE; deprecated

// GtkWidget* gtk_message_dialog_get_message_area (GtkMessageDialog* message_dialog);
// ::GtkWidget* gtk_message_dialog_get_message_area (::GtkMessageDialog* message_dialog);
Gtk::Widget base::MessageDialogBase::get_message_area () noexcept
{
  typedef ::GtkWidget* (*call_wrap_t) (::GtkMessageDialog* message_dialog);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_message_dialog_get_message_area;
  auto _temp_ret = call_wrap_v ((::GtkMessageDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_message_dialog_set_image (GtkMessageDialog* dialog, GtkWidget* image);
// void gtk_message_dialog_set_image (::GtkMessageDialog* dialog, ::GtkWidget* image);
// IGNORE; deprecated

// void gtk_message_dialog_set_markup (GtkMessageDialog* message_dialog, const gchar* str);
// void gtk_message_dialog_set_markup (::GtkMessageDialog* message_dialog, const char* str);
void base::MessageDialogBase::set_markup (const std::string & str) noexcept
{
  typedef void (*call_wrap_t) (::GtkMessageDialog* message_dialog, const char* str);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_message_dialog_set_markup;
  auto str_to_c = gi::unwrap (str, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMessageDialog*) (gobj_()), (const char*) (str_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra_def_impl.hpp>)
#include <gtk/messagedialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/messagedialog_extra_impl.hpp>)
#include <gtk/messagedialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MessageDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMessageDialogClass *methods = (::GtkMessageDialogClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
