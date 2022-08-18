// AUTO-GENERATED

#ifndef _GI_GLIB_COND_HPP_
#define _GI_GLIB_COND_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Cond;

namespace base {


#define GI_GLIB_COND_BASE base::CondBase
class CondBase : public gi::detail::CBoxedWrapper<CondBase, ::GCond>
{
typedef gi::detail::CBoxedWrapper<CondBase, ::GCond> super_type;
public:

CondBase (std::nullptr_t = nullptr) : super_type() {}

// void g_cond_broadcast (GCond* cond);
// void g_cond_broadcast (::GCond* cond);
GI_INLINE_DECL void broadcast () noexcept;

// void g_cond_clear (GCond* cond);
// void g_cond_clear (::GCond* cond);
GI_INLINE_DECL void clear () noexcept;

// void g_cond_init (GCond* cond);
// void g_cond_init (::GCond* cond);
GI_INLINE_DECL void init () noexcept;

// void g_cond_signal (GCond* cond);
// void g_cond_signal (::GCond* cond);
GI_INLINE_DECL void signal () noexcept;

// void g_cond_wait (GCond* cond, GMutex* mutex);
// void g_cond_wait (::GCond* cond,  mutex);
// SKIP; mutex type  not supported

// gboolean g_cond_wait_until (GCond* cond, GMutex* mutex, gint64 end_time);
// gboolean g_cond_wait_until (::GCond* cond,  mutex, gint64 end_time);
// SKIP; mutex type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/cond_extra_def.hpp>)
#include <glib/cond_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/cond_extra.hpp>)
#include <glib/cond_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Cond : public GI_GLIB_COND_BASE
{ typedef GI_GLIB_COND_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GCond>
{ typedef GLib::Cond type; }; 

} // namespace repository

} // namespace gi

#endif
