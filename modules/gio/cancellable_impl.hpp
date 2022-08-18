// AUTO-GENERATED

#ifndef _GI_GIO_CANCELLABLE_IMPL_HPP_
#define _GI_GIO_CANCELLABLE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

// GCancellable* g_cancellable_new ();
// ::GCancellable* g_cancellable_new ();
Gio::Cancellable base::CancellableBase::new_ () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GCancellable* g_cancellable_get_current ();
// ::GCancellable* g_cancellable_get_current ();
Gio::Cancellable base::CancellableBase::get_current () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_get_current;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_cancellable_cancel (GCancellable* cancellable);
// void g_cancellable_cancel (::GCancellable* cancellable);
void base::CancellableBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_cancel;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

// gulong g_cancellable_connect (GCancellable* cancellable, GCallback callback, gpointer data, GDestroyNotify data_destroy_func);
// gulong g_cancellable_connect (::GCancellable* cancellable,  callback, void* data, GLib::DestroyNotify::cfunction_type data_destroy_func);
// SKIP; callback type  not supported

// void g_cancellable_disconnect (GCancellable* cancellable, gulong handler_id);
// void g_cancellable_disconnect (::GCancellable* cancellable, gulong handler_id);
void base::CancellableBase::disconnect (gulong handler_id) noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable, gulong handler_id);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_disconnect;
  auto handler_id_to_c = handler_id;
  call_wrap_v ((::GCancellable*) (gobj_()), (gulong) (handler_id_to_c));
}

// int g_cancellable_get_fd (GCancellable* cancellable);
// gint g_cancellable_get_fd (::GCancellable* cancellable);
gint base::CancellableBase::get_fd () noexcept
{
  typedef gint (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_get_fd;
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()));
  return _temp_ret;
}

// gboolean g_cancellable_is_cancelled (GCancellable* cancellable);
// gboolean g_cancellable_is_cancelled (::GCancellable* cancellable);
bool base::CancellableBase::is_cancelled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_is_cancelled;
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()));
  return _temp_ret;
}

// gboolean g_cancellable_make_pollfd (GCancellable* cancellable, GPollFD* pollfd);
// gboolean g_cancellable_make_pollfd (::GCancellable* cancellable, ::GPollFD* pollfd);
bool base::CancellableBase::make_pollfd (GLib::PollFD pollfd) noexcept
{
  typedef gboolean (*call_wrap_t) (::GCancellable* cancellable, ::GPollFD* pollfd);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_make_pollfd;
  auto pollfd_to_c = gi::unwrap (pollfd, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()), (::GPollFD*) (pollfd_to_c));
  return _temp_ret;
}

// void g_cancellable_pop_current (GCancellable* cancellable);
// void g_cancellable_pop_current (::GCancellable* cancellable);
void base::CancellableBase::pop_current () noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_pop_current;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

// void g_cancellable_push_current (GCancellable* cancellable);
// void g_cancellable_push_current (::GCancellable* cancellable);
void base::CancellableBase::push_current () noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_push_current;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

// void g_cancellable_release_fd (GCancellable* cancellable);
// void g_cancellable_release_fd (::GCancellable* cancellable);
void base::CancellableBase::release_fd () noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_release_fd;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

// void g_cancellable_reset (GCancellable* cancellable);
// void g_cancellable_reset (::GCancellable* cancellable);
void base::CancellableBase::reset () noexcept
{
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_reset;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

// gboolean g_cancellable_set_error_if_cancelled (GCancellable* cancellable, GError ** error);
// gboolean g_cancellable_set_error_if_cancelled (::GCancellable* cancellable, GError ** error);
bool base::CancellableBase::set_error_if_cancelled ()
{
  typedef gboolean (*call_wrap_t) (::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_set_error_if_cancelled;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CancellableBase::set_error_if_cancelled (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_set_error_if_cancelled;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// GSource* g_cancellable_source_new (GCancellable* cancellable);
// ::GSource* g_cancellable_source_new (::GCancellable* cancellable);
GLib::Source base::CancellableBase::source_new () noexcept
{
  typedef ::GSource* (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_cancellable_source_new;
  auto _temp_ret = call_wrap_v ((::GCancellable*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/cancellable_extra_def_impl.hpp>)
#include <gio/cancellable_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/cancellable_extra_impl.hpp>)
#include <gio/cancellable_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {

void CancellableClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GCancellableClass *methods = (::GCancellableClass *) class_struct;
  (void) methods;

  methods->cancelled = (decltype (methods->cancelled)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cancelled_>;
}

// void Cancellable::cancelled (GCancellable* cancellable);
// void Cancellable::cancelled (::GCancellable* cancellable);
void CancellableClass::cancelled_ () noexcept
{
  if (!get_struct_()->cancelled) return ;
  typedef void (*call_wrap_t) (::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancelled;
  call_wrap_v ((::GCancellable*) (gobj_()));
}

} // namespace internal

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
