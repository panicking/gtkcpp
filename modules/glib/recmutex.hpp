// AUTO-GENERATED

#ifndef _GI_GLIB_RECMUTEX_HPP_
#define _GI_GLIB_RECMUTEX_HPP_


namespace gi {

namespace repository {

namespace GLib {


class RecMutex;

namespace base {


#define GI_GLIB_RECMUTEX_BASE base::RecMutexBase
class RecMutexBase : public gi::detail::CBoxedWrapper<RecMutexBase, ::GRecMutex>
{
typedef gi::detail::CBoxedWrapper<RecMutexBase, ::GRecMutex> super_type;
public:

RecMutexBase (std::nullptr_t = nullptr) : super_type() {}

// void g_rec_mutex_clear (GRecMutex* rec_mutex);
// void g_rec_mutex_clear (::GRecMutex* rec_mutex);
GI_INLINE_DECL void clear () noexcept;

// void g_rec_mutex_init (GRecMutex* rec_mutex);
// void g_rec_mutex_init (::GRecMutex* rec_mutex);
GI_INLINE_DECL void init () noexcept;

// void g_rec_mutex_lock (GRecMutex* rec_mutex);
// void g_rec_mutex_lock (::GRecMutex* rec_mutex);
GI_INLINE_DECL void lock () noexcept;

// gboolean g_rec_mutex_trylock (GRecMutex* rec_mutex);
// gboolean g_rec_mutex_trylock (::GRecMutex* rec_mutex);
GI_INLINE_DECL bool trylock () noexcept;

// void g_rec_mutex_unlock (GRecMutex* rec_mutex);
// void g_rec_mutex_unlock (::GRecMutex* rec_mutex);
GI_INLINE_DECL void unlock () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra_def.hpp>)
#include <glib/recmutex_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/recmutex_extra.hpp>)
#include <glib/recmutex_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class RecMutex : public GI_GLIB_RECMUTEX_BASE
{ typedef GI_GLIB_RECMUTEX_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GRecMutex>
{ typedef GLib::RecMutex type; }; 

} // namespace repository

} // namespace gi

#endif
