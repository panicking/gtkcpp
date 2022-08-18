// AUTO-GENERATED

#ifndef _GI_GLIB_THREADPOOL_HPP_
#define _GI_GLIB_THREADPOOL_HPP_


namespace gi {

namespace repository {

namespace GLib {


class ThreadPool;

namespace base {


#define GI_GLIB_THREADPOOL_BASE base::ThreadPoolBase
class ThreadPoolBase : public gi::detail::CBoxedWrapper<ThreadPoolBase, ::GThreadPool>
{
typedef gi::detail::CBoxedWrapper<ThreadPoolBase, ::GThreadPool> super_type;
public:

ThreadPoolBase (std::nullptr_t = nullptr) : super_type() {}

// gboolean ThreadPool::exclusive (const ::GThreadPool* obj);
// gboolean ThreadPool::exclusive (const ::GThreadPool* obj);
GI_INLINE_DECL bool exclusive_ () const noexcept;

//  ThreadPool::exclusive (::GThreadPool* obj, gboolean _value);
// void ThreadPool::exclusive (::GThreadPool* obj, gboolean _value);
GI_INLINE_DECL void exclusive_ (gboolean _value) noexcept;

// void g_thread_pool_free (GThreadPool* pool, gboolean immediate, gboolean wait_);
// void g_thread_pool_free (::GThreadPool* pool, gboolean immediate, gboolean wait_);
// IGNORE; marked ignore

// gint g_thread_pool_get_max_threads (GThreadPool* pool);
// gint g_thread_pool_get_max_threads (::GThreadPool* pool);
GI_INLINE_DECL gint get_max_threads () noexcept;

// guint g_thread_pool_get_num_threads (GThreadPool* pool);
// guint g_thread_pool_get_num_threads (::GThreadPool* pool);
GI_INLINE_DECL guint get_num_threads () noexcept;

// gboolean g_thread_pool_move_to_front (GThreadPool* pool, gpointer data);
// gboolean g_thread_pool_move_to_front (::GThreadPool* pool, void* data);
GI_INLINE_DECL bool move_to_front (void* data) noexcept;

// gboolean g_thread_pool_push (GThreadPool* pool, gpointer data, GError ** error);
// gboolean g_thread_pool_push (::GThreadPool* pool, void* data, GError ** error);
GI_INLINE_DECL bool push (void* data);
GI_INLINE_DECL bool push (void* data, GLib::Error * _error) noexcept;

// gboolean g_thread_pool_set_max_threads (GThreadPool* pool, gint max_threads, GError ** error);
// gboolean g_thread_pool_set_max_threads (::GThreadPool* pool, gint max_threads, GError ** error);
GI_INLINE_DECL bool set_max_threads (gint max_threads);
GI_INLINE_DECL bool set_max_threads (gint max_threads, GLib::Error * _error) noexcept;

// void g_thread_pool_set_sort_function (GThreadPool* pool, GCompareDataFunc func, gpointer user_data);
// void g_thread_pool_set_sort_function (::GThreadPool* pool, GLib::CompareDataFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_thread_pool_unprocessed (GThreadPool* pool);
// guint g_thread_pool_unprocessed (::GThreadPool* pool);
GI_INLINE_DECL guint unprocessed () noexcept;

// guint g_thread_pool_get_max_idle_time ();
// guint g_thread_pool_get_max_idle_time ();
static GI_INLINE_DECL guint get_max_idle_time () noexcept;

// gint g_thread_pool_get_max_unused_threads ();
// gint g_thread_pool_get_max_unused_threads ();
static GI_INLINE_DECL gint get_max_unused_threads () noexcept;

// guint g_thread_pool_get_num_unused_threads ();
// guint g_thread_pool_get_num_unused_threads ();
static GI_INLINE_DECL guint get_num_unused_threads () noexcept;

// FAILURE on g_thread_pool_new; No such node (<xmlattr>.transfer-ownership)
// GThreadPool* g_thread_pool_new_full (GFunc func, gpointer user_data, GDestroyNotify item_free_func, gint max_threads, gboolean exclusive, GError ** error);
// ::GThreadPool* g_thread_pool_new_full (GLib::Func::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type item_free_func, gint max_threads, gboolean exclusive, GError ** error);
static GI_INLINE_DECL GLib::ThreadPool new_full (GLib::Func func, gint max_threads, gboolean exclusive);
static GI_INLINE_DECL GLib::ThreadPool new_full (GLib::Func func, gint max_threads, gboolean exclusive, GLib::Error * _error) noexcept;

// void g_thread_pool_set_max_idle_time (guint interval);
// void g_thread_pool_set_max_idle_time (guint interval);
static GI_INLINE_DECL void set_max_idle_time (guint interval) noexcept;

// void g_thread_pool_set_max_unused_threads (gint max_threads);
// void g_thread_pool_set_max_unused_threads (gint max_threads);
static GI_INLINE_DECL void set_max_unused_threads (gint max_threads) noexcept;

// void g_thread_pool_stop_unused_threads ();
// void g_thread_pool_stop_unused_threads ();
static GI_INLINE_DECL void stop_unused_threads () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/threadpool_extra_def.hpp>)
#include <glib/threadpool_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/threadpool_extra.hpp>)
#include <glib/threadpool_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class ThreadPool : public GI_GLIB_THREADPOOL_BASE
{ typedef GI_GLIB_THREADPOOL_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GThreadPool>
{ typedef GLib::ThreadPool type; }; 

} // namespace repository

} // namespace gi

#endif
