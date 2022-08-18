// AUTO-GENERATED

#ifndef _GI_GTK_NATIVEDIALOG_IMPL_HPP_
#define _GI_GTK_NATIVEDIALOG_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_native_dialog_destroy (GtkNativeDialog* self);
// void gtk_native_dialog_destroy (::GtkNativeDialog* self);
void base::NativeDialogBase::destroy () noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_destroy;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()));
}

// gboolean gtk_native_dialog_get_modal (GtkNativeDialog* self);
// gboolean gtk_native_dialog_get_modal (::GtkNativeDialog* self);
bool base::NativeDialogBase::get_modal () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_get_modal;
  auto _temp_ret = call_wrap_v ((::GtkNativeDialog*) (gobj_()));
  return _temp_ret;
}

// const char* gtk_native_dialog_get_title (GtkNativeDialog* self);
// const char* gtk_native_dialog_get_title (::GtkNativeDialog* self);
std::string base::NativeDialogBase::get_title () noexcept
{
  typedef const char* (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_get_title;
  auto _temp_ret = call_wrap_v ((::GtkNativeDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GtkWindow* gtk_native_dialog_get_transient_for (GtkNativeDialog* self);
// ::GtkWindow* gtk_native_dialog_get_transient_for (::GtkNativeDialog* self);
Gtk::Window base::NativeDialogBase::get_transient_for () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_get_transient_for;
  auto _temp_ret = call_wrap_v ((::GtkNativeDialog*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_native_dialog_get_visible (GtkNativeDialog* self);
// gboolean gtk_native_dialog_get_visible (::GtkNativeDialog* self);
bool base::NativeDialogBase::get_visible () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_get_visible;
  auto _temp_ret = call_wrap_v ((::GtkNativeDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_native_dialog_hide (GtkNativeDialog* self);
// void gtk_native_dialog_hide (::GtkNativeDialog* self);
void base::NativeDialogBase::hide () noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_hide;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()));
}

// gint gtk_native_dialog_run (GtkNativeDialog* self);
// gint gtk_native_dialog_run (::GtkNativeDialog* self);
gint base::NativeDialogBase::run () noexcept
{
  typedef gint (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_run;
  auto _temp_ret = call_wrap_v ((::GtkNativeDialog*) (gobj_()));
  return _temp_ret;
}

// void gtk_native_dialog_set_modal (GtkNativeDialog* self, gboolean modal);
// void gtk_native_dialog_set_modal (::GtkNativeDialog* self, gboolean modal);
void base::NativeDialogBase::set_modal (gboolean modal) noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self, gboolean modal);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_set_modal;
  auto modal_to_c = modal;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()), (gboolean) (modal_to_c));
}

// void gtk_native_dialog_set_title (GtkNativeDialog* self, const char* title);
// void gtk_native_dialog_set_title (::GtkNativeDialog* self, const char* title);
void base::NativeDialogBase::set_title (const std::string & title) noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self, const char* title);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_set_title;
  auto title_to_c = gi::unwrap (title, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNativeDialog*) (gobj_()), (const char*) (title_to_c));
}

// void gtk_native_dialog_set_transient_for (GtkNativeDialog* self, GtkWindow* parent);
// void gtk_native_dialog_set_transient_for (::GtkNativeDialog* self, ::GtkWindow* parent);
void base::NativeDialogBase::set_transient_for (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_set_transient_for;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkNativeDialog*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::NativeDialogBase::set_transient_for () noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_set_transient_for;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()), (::GtkWindow*) (parent_to_c));
}

// void gtk_native_dialog_show (GtkNativeDialog* self);
// void gtk_native_dialog_show (::GtkNativeDialog* self);
void base::NativeDialogBase::show () noexcept
{
  typedef void (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_native_dialog_show;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/nativedialog_extra_def_impl.hpp>)
#include <gtk/nativedialog_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/nativedialog_extra_impl.hpp>)
#include <gtk/nativedialog_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void NativeDialogClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkNativeDialogClass *methods = (::GtkNativeDialogClass *) class_struct;
  (void) methods;

  methods->hide = (decltype (methods->hide)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::hide_>;
  methods->response = (decltype (methods->response)) detail::method_wrapper<self, void (*) (gint response_id), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::response_>;
  methods->show = (decltype (methods->show)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::show_>;
}

// void NativeDialog::hide (GtkNativeDialog* self);
// void NativeDialog::hide (::GtkNativeDialog* self);
void NativeDialogClass::hide_ () noexcept
{
  if (!get_struct_()->hide) return ;
  typedef void (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->hide;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()));
}

// void NativeDialog::response (GtkNativeDialog* self, gint response_id);
// void NativeDialog::response (::GtkNativeDialog* self, gint response_id);
void NativeDialogClass::response_ (gint response_id) noexcept
{
  if (!get_struct_()->response) return ;
  typedef void (*call_wrap_t) (::GtkNativeDialog* self, gint response_id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->response;
  auto response_id_to_c = response_id;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()), (gint) (response_id_to_c));
}

// void NativeDialog::show (GtkNativeDialog* self);
// void NativeDialog::show (::GtkNativeDialog* self);
void NativeDialogClass::show_ () noexcept
{
  if (!get_struct_()->show) return ;
  typedef void (*call_wrap_t) (::GtkNativeDialog* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->show;
  call_wrap_v ((::GtkNativeDialog*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
