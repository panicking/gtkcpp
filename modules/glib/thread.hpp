// AUTO-GENERATED

#ifndef _GI_GLIB_THREAD_HPP_
#define _GI_GLIB_THREAD_HPP_


namespace gi {

namespace repository {

namespace GLib {


class Thread;

namespace base {


#define GI_GLIB_THREAD_BASE base::ThreadBase
class ThreadBase : public gi::detail::GBoxedWrapper<ThreadBase, ::GThread>
{
typedef gi::detail::GBoxedWrapper<ThreadBase, ::GThread> super_type;
public:

ThreadBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_thread_get_type(); } 

// GThread* g_thread_new (const gchar* name, GThreadFunc func, gpointer data);
// ::GThread* g_thread_new (const char* name,  func, void* data);
// SKIP; func type  not supported

// GThread* g_thread_try_new (const gchar* name, GThreadFunc func, gpointer data, GError ** error);
// ::GThread* g_thread_try_new (const char* name,  func, void* data, GError ** error);
// SKIP; func type  not supported

// gpointer g_thread_join (GThread* thread);
// void* g_thread_join (::GThread* thread);
GI_INLINE_DECL gpointer join () noexcept;

// GThread* g_thread_ref (GThread* thread);
// ::GThread* g_thread_ref (::GThread* thread);
// IGNORE; marked ignore

// void g_thread_unref (GThread* thread);
// void g_thread_unref (::GThread* thread);
// IGNORE; marked ignore

// GQuark g_thread_error_quark ();
// ::GQuark g_thread_error_quark ();
static GI_INLINE_DECL GLib::Quark error_quark () noexcept;

// void g_thread_exit (gpointer retval);
// void g_thread_exit (void* retval);
static GI_INLINE_DECL void exit (void* retval) noexcept;

// GThread* g_thread_self ();
// ::GThread* g_thread_self ();
static GI_INLINE_DECL GLib::Thread self () noexcept;

// void g_thread_yield ();
// void g_thread_yield ();
static GI_INLINE_DECL void yield () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/thread_extra_def.hpp>)
#include <glib/thread_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/thread_extra.hpp>)
#include <glib/thread_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Thread : public GI_GLIB_THREAD_BASE
{ typedef GI_GLIB_THREAD_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GThread>
{ typedef GLib::Thread type; }; 

} // namespace repository

} // namespace gi

#endif
