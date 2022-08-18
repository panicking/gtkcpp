// AUTO-GENERATED

#ifndef _GI_GLIB_RECMUTEX_IMPL_HPP_
#define _GI_GLIB_RECMUTEX_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_rec_mutex_clear (GRecMutex* rec_mutex);
// void g_rec_mutex_clear (::GRecMutex* rec_mutex);
void base::RecMutexBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GRecMutex* rec_mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rec_mutex_clear;
  call_wrap_v ((::GRecMutex*) (gobj_()));
}

// void g_rec_mutex_init (GRecMutex* rec_mutex);
// void g_rec_mutex_init (::GRecMutex* rec_mutex);
void base::RecMutexBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GRecMutex* rec_mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rec_mutex_init;
  call_wrap_v ((::GRecMutex*) (gobj_()));
}

// void g_rec_mutex_lock (GRecMutex* rec_mutex);
// void g_rec_mutex_lock (::GRecMutex* rec_mutex);
void base::RecMutexBase::lock () noexcept
{
  typedef void (*call_wrap_t) (::GRecMutex* rec_mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rec_mutex_lock;
  call_wrap_v ((::GRecMutex*) (gobj_()));
}

// gboolean g_rec_mutex_trylock (GRecMutex* rec_mutex);
// gboolean g_rec_mutex_trylock (::GRecMutex* rec_mutex);
bool base::RecMutexBase::trylock () noexcept
{
  typedef gboolean (*call_wrap_t) (::GRecMutex* rec_mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rec_mutex_trylock;
  auto _temp_ret = call_wrap_v ((::GRecMutex*) (gobj_()));
  return _temp_ret;
}

// void g_rec_mutex_unlock (GRecMutex* rec_mutex);
// void g_rec_mutex_unlock (::GRecMutex* rec_mutex);
void base::RecMutexBase::unlock () noexcept
{
  typedef void (*call_wrap_t) (::GRecMutex* rec_mutex);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rec_mutex_unlock;
  call_wrap_v ((::GRecMutex*) (gobj_()));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra_def_impl.hpp>)
#include <glib/recmutex_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra_impl.hpp>)
#include <glib/recmutex_extra_impl.hpp>
#endif
#endif

#endif
