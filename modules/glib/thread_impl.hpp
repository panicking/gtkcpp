// AUTO-GENERATED

#ifndef _GI_GLIB_THREAD_IMPL_HPP_
#define _GI_GLIB_THREAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GThread* g_thread_new (const gchar* name, GThreadFunc func, gpointer data);
// ::GThread* g_thread_new (const char* name,  func, void* data);
// SKIP; func type  not supported

// GThread* g_thread_try_new (const gchar* name, GThreadFunc func, gpointer data, GError ** error);
// ::GThread* g_thread_try_new (const char* name,  func, void* data, GError ** error);
// SKIP; func type  not supported

// gpointer g_thread_join (GThread* thread);
// void* g_thread_join (::GThread* thread);
gpointer base::ThreadBase::join () noexcept
{
  typedef void* (*call_wrap_t) (::GThread* thread);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_join;
  auto _temp_ret = call_wrap_v ((::GThread*) (gobj_()));
  return _temp_ret;
}

// GThread* g_thread_ref (GThread* thread);
// ::GThread* g_thread_ref (::GThread* thread);
// IGNORE; marked ignore

// void g_thread_unref (GThread* thread);
// void g_thread_unref (::GThread* thread);
// IGNORE; marked ignore

// GQuark g_thread_error_quark ();
// ::GQuark g_thread_error_quark ();
GLib::Quark base::ThreadBase::error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// void g_thread_exit (gpointer retval);
// void g_thread_exit (void* retval);
void base::ThreadBase::exit (void* retval) noexcept
{
  typedef void (*call_wrap_t) (void* retval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_exit;
  auto retval_to_c = retval;
  call_wrap_v ((void*) (retval_to_c));
}

// GThread* g_thread_self ();
// ::GThread* g_thread_self ();
GLib::Thread base::ThreadBase::self () noexcept
{
  typedef ::GThread* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_self;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_thread_yield ();
// void g_thread_yield ();
void base::ThreadBase::yield () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_yield;
  call_wrap_v ();
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/thread_extra_def_impl.hpp>)
#include <glib/thread_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/thread_extra_impl.hpp>)
#include <glib/thread_extra_impl.hpp>
#endif
#endif

#endif
