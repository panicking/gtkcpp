// AUTO-GENERATED

#ifndef _GI_GLIB_RWLOCK_HPP_
#define _GI_GLIB_RWLOCK_HPP_


namespace gi {

namespace repository {

namespace GLib {


class RWLock;

namespace base {


#define GI_GLIB_RWLOCK_BASE base::RWLockBase
class RWLockBase : public gi::detail::CBoxedWrapper<RWLockBase, ::GRWLock>
{
typedef gi::detail::CBoxedWrapper<RWLockBase, ::GRWLock> super_type;
public:

RWLockBase (std::nullptr_t = nullptr) : super_type() {}

// void g_rw_lock_clear (GRWLock* rw_lock);
// void g_rw_lock_clear (::GRWLock* rw_lock);
GI_INLINE_DECL void clear () noexcept;

// void g_rw_lock_init (GRWLock* rw_lock);
// void g_rw_lock_init (::GRWLock* rw_lock);
GI_INLINE_DECL void init () noexcept;

// void g_rw_lock_reader_lock (GRWLock* rw_lock);
// void g_rw_lock_reader_lock (::GRWLock* rw_lock);
GI_INLINE_DECL void reader_lock () noexcept;

// gboolean g_rw_lock_reader_trylock (GRWLock* rw_lock);
// gboolean g_rw_lock_reader_trylock (::GRWLock* rw_lock);
GI_INLINE_DECL bool reader_trylock () noexcept;

// void g_rw_lock_reader_unlock (GRWLock* rw_lock);
// void g_rw_lock_reader_unlock (::GRWLock* rw_lock);
GI_INLINE_DECL void reader_unlock () noexcept;

// void g_rw_lock_writer_lock (GRWLock* rw_lock);
// void g_rw_lock_writer_lock (::GRWLock* rw_lock);
GI_INLINE_DECL void writer_lock () noexcept;

// gboolean g_rw_lock_writer_trylock (GRWLock* rw_lock);
// gboolean g_rw_lock_writer_trylock (::GRWLock* rw_lock);
GI_INLINE_DECL bool writer_trylock () noexcept;

// void g_rw_lock_writer_unlock (GRWLock* rw_lock);
// void g_rw_lock_writer_unlock (::GRWLock* rw_lock);
GI_INLINE_DECL void writer_unlock () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/rwlock_extra_def.hpp>)
#include <glib/rwlock_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/rwlock_extra.hpp>)
#include <glib/rwlock_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class RWLock : public GI_GLIB_RWLOCK_BASE
{ typedef GI_GLIB_RWLOCK_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRWLock>
{ typedef GLib::RWLock type; }; 

} // namespace repository

} // namespace gi

#endif
