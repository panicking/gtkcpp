// AUTO-GENERATED

#ifndef _GI_GTK_FILECHOOSERNATIVE_IMPL_HPP_
#define _GI_GTK_FILECHOOSERNATIVE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

Gtk::FileChooser FileChooserNativeBase::interface_ (gi::interface_tag<Gtk::FileChooser>)
{ return gi::wrap ((Gtk::FileChooser::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

FileChooserNativeBase::operator Gtk::FileChooser ()
{ return interface_ (gi::interface_tag<Gtk::FileChooser>()); }

// GtkFileChooserNative* gtk_file_chooser_native_new (const gchar* title, GtkWindow* parent, GtkFileChooserAction action, const gchar* accept_label, const gchar* cancel_label);
// ::GtkFileChooserNative* gtk_file_chooser_native_new (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
Gtk::FileChooserNative base::FileChooserNativeBase::new_ (const std::string & title, Gtk::Window parent, Gtk::FileChooserAction action, const std::string & accept_label, const std::string & cancel_label) noexcept
{
  typedef ::GtkFileChooserNative* (*call_wrap_t) (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_new;
  auto cancel_label_to_c = gi::unwrap (cancel_label, gi::transfer_none, gi::direction_in);
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none, gi::direction_in);
  auto action_to_c = gi::unwrap (action);
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c), (::GtkFileChooserAction) (action_to_c), (const char*) (accept_label_to_c), (const char*) (cancel_label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::FileChooserNative base::FileChooserNativeBase::new_ (Gtk::FileChooserAction action) noexcept
{
  typedef ::GtkFileChooserNative* (*call_wrap_t) (const char* title, ::GtkWindow* parent, ::GtkFileChooserAction action, const char* accept_label, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_new;
  auto cancel_label_to_c = nullptr;
  auto accept_label_to_c = nullptr;
  auto action_to_c = gi::unwrap (action);
  auto parent_to_c = nullptr;
  auto title_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (title_to_c), (::GtkWindow*) (parent_to_c), (::GtkFileChooserAction) (action_to_c), (const char*) (accept_label_to_c), (const char*) (cancel_label_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* gtk_file_chooser_native_get_accept_label (GtkFileChooserNative* self);
// const char* gtk_file_chooser_native_get_accept_label (::GtkFileChooserNative* self);
std::string base::FileChooserNativeBase::get_accept_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooserNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_get_accept_label;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* gtk_file_chooser_native_get_cancel_label (GtkFileChooserNative* self);
// const char* gtk_file_chooser_native_get_cancel_label (::GtkFileChooserNative* self);
std::string base::FileChooserNativeBase::get_cancel_label () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkFileChooserNative* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_get_cancel_label;
  auto _temp_ret = call_wrap_v ((::GtkFileChooserNative*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void gtk_file_chooser_native_set_accept_label (GtkFileChooserNative* self, const char* accept_label);
// void gtk_file_chooser_native_set_accept_label (::GtkFileChooserNative* self, const char* accept_label);
void base::FileChooserNativeBase::set_accept_label (const std::string & accept_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_set_accept_label;
  auto accept_label_to_c = gi::unwrap (accept_label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (accept_label_to_c));
}
void base::FileChooserNativeBase::set_accept_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* accept_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_set_accept_label;
  auto accept_label_to_c = nullptr;
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (accept_label_to_c));
}

// void gtk_file_chooser_native_set_cancel_label (GtkFileChooserNative* self, const char* cancel_label);
// void gtk_file_chooser_native_set_cancel_label (::GtkFileChooserNative* self, const char* cancel_label);
void base::FileChooserNativeBase::set_cancel_label (const std::string & cancel_label) noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_set_cancel_label;
  auto cancel_label_to_c = gi::unwrap (cancel_label, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (cancel_label_to_c));
}
void base::FileChooserNativeBase::set_cancel_label () noexcept
{
  typedef void (*call_wrap_t) (::GtkFileChooserNative* self, const char* cancel_label);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_file_chooser_native_set_cancel_label;
  auto cancel_label_to_c = nullptr;
  call_wrap_v ((::GtkFileChooserNative*) (gobj_()), (const char*) (cancel_label_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra_def_impl.hpp>)
#include <gtk/filechoosernative_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/filechoosernative_extra_impl.hpp>)
#include <gtk/filechoosernative_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void FileChooserNativeClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkFileChooserNativeClass *methods = (::GtkFileChooserNativeClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
