// AUTO-GENERATED

#ifndef _GI_GTK_MOUNTOPERATION_IMPL_HPP_
#define _GI_GTK_MOUNTOPERATION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// GMountOperation* gtk_mount_operation_new (GtkWindow* parent);
// ::GtkMountOperation* gtk_mount_operation_new (::GtkWindow* parent);
Gtk::MountOperation base::MountOperationBase::new_ (Gtk::Window parent) noexcept
{
  typedef ::GtkMountOperation* (*call_wrap_t) (::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_new;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gtk::MountOperation base::MountOperationBase::new_ () noexcept
{
  typedef ::GtkMountOperation* (*call_wrap_t) (::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_new;
  auto parent_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GtkWindow*) (parent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GtkWindow* gtk_mount_operation_get_parent (GtkMountOperation* op);
// ::GtkWindow* gtk_mount_operation_get_parent (::GtkMountOperation* op);
Gtk::Window base::MountOperationBase::get_parent () noexcept
{
  typedef ::GtkWindow* (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_get_parent;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GdkScreen* gtk_mount_operation_get_screen (GtkMountOperation* op);
// ::GdkScreen* gtk_mount_operation_get_screen (::GtkMountOperation* op);
Gdk::Screen base::MountOperationBase::get_screen () noexcept
{
  typedef ::GdkScreen* (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_get_screen;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gtk_mount_operation_is_showing (GtkMountOperation* op);
// gboolean gtk_mount_operation_is_showing (::GtkMountOperation* op);
bool base::MountOperationBase::is_showing () noexcept
{
  typedef gboolean (*call_wrap_t) (::GtkMountOperation* op);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_is_showing;
  auto _temp_ret = call_wrap_v ((::GtkMountOperation*) (gobj_()));
  return _temp_ret;
}

// void gtk_mount_operation_set_parent (GtkMountOperation* op, GtkWindow* parent);
// void gtk_mount_operation_set_parent (::GtkMountOperation* op, ::GtkWindow* parent);
void base::MountOperationBase::set_parent (Gtk::Window parent) noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_set_parent;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
}
void base::MountOperationBase::set_parent () noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GtkWindow* parent);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_set_parent;
  auto parent_to_c = nullptr;
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GtkWindow*) (parent_to_c));
}

// void gtk_mount_operation_set_screen (GtkMountOperation* op, GdkScreen* screen);
// void gtk_mount_operation_set_screen (::GtkMountOperation* op, ::GdkScreen* screen);
void base::MountOperationBase::set_screen (Gdk::Screen screen) noexcept
{
  typedef void (*call_wrap_t) (::GtkMountOperation* op, ::GdkScreen* screen);
  call_wrap_t call_wrap_v = (call_wrap_t) gtk_mount_operation_set_screen;
  auto screen_to_c = gi::unwrap (screen, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GtkMountOperation*) (gobj_()), (::GdkScreen*) (screen_to_c));
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_def_impl.hpp>)
#include <gtk/mountoperation_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/mountoperation_extra_impl.hpp>)
#include <gtk/mountoperation_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void MountOperationClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GtkMountOperationClass *methods = (::GtkMountOperationClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
