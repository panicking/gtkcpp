// AUTO-GENERATED

#ifndef _GI_GLIB_RWLOCK_IMPL_HPP_
#define _GI_GLIB_RWLOCK_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// void g_rw_lock_clear (GRWLock* rw_lock);
// void g_rw_lock_clear (::GRWLock* rw_lock);
void base::RWLockBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_clear;
  call_wrap_v ((::GRWLock*) (gobj_()));
}

// void g_rw_lock_init (GRWLock* rw_lock);
// void g_rw_lock_init (::GRWLock* rw_lock);
void base::RWLockBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_init;
  call_wrap_v ((::GRWLock*) (gobj_()));
}

// void g_rw_lock_reader_lock (GRWLock* rw_lock);
// void g_rw_lock_reader_lock (::GRWLock* rw_lock);
void base::RWLockBase::reader_lock () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_reader_lock;
  call_wrap_v ((::GRWLock*) (gobj_()));
}

// gboolean g_rw_lock_reader_trylock (GRWLock* rw_lock);
// gboolean g_rw_lock_reader_trylock (::GRWLock* rw_lock);
bool base::RWLockBase::reader_trylock () noexcept
{
  typedef gboolean (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_reader_trylock;
  auto _temp_ret = call_wrap_v ((::GRWLock*) (gobj_()));
  return _temp_ret;
}

// void g_rw_lock_reader_unlock (GRWLock* rw_lock);
// void g_rw_lock_reader_unlock (::GRWLock* rw_lock);
void base::RWLockBase::reader_unlock () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_reader_unlock;
  call_wrap_v ((::GRWLock*) (gobj_()));
}

// void g_rw_lock_writer_lock (GRWLock* rw_lock);
// void g_rw_lock_writer_lock (::GRWLock* rw_lock);
void base::RWLockBase::writer_lock () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_writer_lock;
  call_wrap_v ((::GRWLock*) (gobj_()));
}

// gboolean g_rw_lock_writer_trylock (GRWLock* rw_lock);
// gboolean g_rw_lock_writer_trylock (::GRWLock* rw_lock);
bool base::RWLockBase::writer_trylock () noexcept
{
  typedef gboolean (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_writer_trylock;
  auto _temp_ret = call_wrap_v ((::GRWLock*) (gobj_()));
  return _temp_ret;
}

// void g_rw_lock_writer_unlock (GRWLock* rw_lock);
// void g_rw_lock_writer_unlock (::GRWLock* rw_lock);
void base::RWLockBase::writer_unlock () noexcept
{
  typedef void (*call_wrap_t) (::GRWLock* rw_lock);
  call_wrap_t call_wrap_v = (call_wrap_t) g_rw_lock_writer_unlock;
  call_wrap_v ((::GRWLock*) (gobj_()));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/rwlock_extra_def_impl.hpp>)
#include <glib/rwlock_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/rwlock_extra_impl.hpp>)
#include <glib/rwlock_extra_impl.hpp>
#endif
#endif

#endif
