// AUTO-GENERATED

#ifndef _GI_GLIB_THREADPOOL_IMPL_HPP_
#define _GI_GLIB_THREADPOOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static gboolean _field_exclusive_get (const ::GThreadPool* obj) { return (gboolean) obj->exclusive; }
// gboolean ThreadPool::exclusive (const ::GThreadPool* obj);
// gboolean ThreadPool::exclusive (const ::GThreadPool* obj);
bool base::ThreadPoolBase::exclusive_ () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GThreadPool* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_exclusive_get;
  auto _temp_ret = call_wrap_v ((const ::GThreadPool*) (gobj_()));
  return _temp_ret;
}

static void _field_exclusive_set (::GThreadPool* obj, gboolean _value) { obj->exclusive = (decltype(obj->exclusive)) _value; }
//  ThreadPool::exclusive (::GThreadPool* obj, gboolean _value);
// void ThreadPool::exclusive (::GThreadPool* obj, gboolean _value);
void base::ThreadPoolBase::exclusive_ (gboolean _value) noexcept
{
  typedef void (*call_wrap_t) (::GThreadPool* obj, gboolean _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_exclusive_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GThreadPool*) (gobj_()), (gboolean) (_value_to_c));
}

// void g_thread_pool_free (GThreadPool* pool, gboolean immediate, gboolean wait_);
// void g_thread_pool_free (::GThreadPool* pool, gboolean immediate, gboolean wait_);
// IGNORE; marked ignore

// gint g_thread_pool_get_max_threads (GThreadPool* pool);
// gint g_thread_pool_get_max_threads (::GThreadPool* pool);
gint base::ThreadPoolBase::get_max_threads () noexcept
{
  typedef gint (*call_wrap_t) (::GThreadPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_get_max_threads;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()));
  return _temp_ret;
}

// guint g_thread_pool_get_num_threads (GThreadPool* pool);
// guint g_thread_pool_get_num_threads (::GThreadPool* pool);
guint base::ThreadPoolBase::get_num_threads () noexcept
{
  typedef guint (*call_wrap_t) (::GThreadPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_get_num_threads;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()));
  return _temp_ret;
}

// gboolean g_thread_pool_move_to_front (GThreadPool* pool, gpointer data);
// gboolean g_thread_pool_move_to_front (::GThreadPool* pool, void* data);
bool base::ThreadPoolBase::move_to_front (void* data) noexcept
{
  typedef gboolean (*call_wrap_t) (::GThreadPool* pool, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_move_to_front;
  auto data_to_c = data;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()), (void*) (data_to_c));
  return _temp_ret;
}

// gboolean g_thread_pool_push (GThreadPool* pool, gpointer data, GError ** error);
// gboolean g_thread_pool_push (::GThreadPool* pool, void* data, GError ** error);
bool base::ThreadPoolBase::push (void* data)
{
  typedef gboolean (*call_wrap_t) (::GThreadPool* pool, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_push;
  auto data_to_c = data;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()), (void*) (data_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ThreadPoolBase::push (void* data, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GThreadPool* pool, void* data, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_push;
  auto data_to_c = data;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()), (void*) (data_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_thread_pool_set_max_threads (GThreadPool* pool, gint max_threads, GError ** error);
// gboolean g_thread_pool_set_max_threads (::GThreadPool* pool, gint max_threads, GError ** error);
bool base::ThreadPoolBase::set_max_threads (gint max_threads)
{
  typedef gboolean (*call_wrap_t) (::GThreadPool* pool, gint max_threads, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_set_max_threads;
  auto max_threads_to_c = max_threads;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()), (gint) (max_threads_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::ThreadPoolBase::set_max_threads (gint max_threads, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GThreadPool* pool, gint max_threads, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_set_max_threads;
  auto max_threads_to_c = max_threads;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()), (gint) (max_threads_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void g_thread_pool_set_sort_function (GThreadPool* pool, GCompareDataFunc func, gpointer user_data);
// void g_thread_pool_set_sort_function (::GThreadPool* pool, GLib::CompareDataFunc::cfunction_type func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint g_thread_pool_unprocessed (GThreadPool* pool);
// guint g_thread_pool_unprocessed (::GThreadPool* pool);
guint base::ThreadPoolBase::unprocessed () noexcept
{
  typedef guint (*call_wrap_t) (::GThreadPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_unprocessed;
  auto _temp_ret = call_wrap_v ((::GThreadPool*) (gobj_()));
  return _temp_ret;
}

// guint g_thread_pool_get_max_idle_time ();
// guint g_thread_pool_get_max_idle_time ();
guint base::ThreadPoolBase::get_max_idle_time () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_get_max_idle_time;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// gint g_thread_pool_get_max_unused_threads ();
// gint g_thread_pool_get_max_unused_threads ();
gint base::ThreadPoolBase::get_max_unused_threads () noexcept
{
  typedef gint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_get_max_unused_threads;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// guint g_thread_pool_get_num_unused_threads ();
// guint g_thread_pool_get_num_unused_threads ();
guint base::ThreadPoolBase::get_num_unused_threads () noexcept
{
  typedef guint (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_get_num_unused_threads;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// FAILURE on g_thread_pool_new; No such node (<xmlattr>.transfer-ownership)
// GThreadPool* g_thread_pool_new_full (GFunc func, gpointer user_data, GDestroyNotify item_free_func, gint max_threads, gboolean exclusive, GError ** error);
// ::GThreadPool* g_thread_pool_new_full (GLib::Func::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type item_free_func, gint max_threads, gboolean exclusive, GError ** error);
GLib::ThreadPool base::ThreadPoolBase::new_full (GLib::Func func, gint max_threads, gboolean exclusive)
{
  typedef ::GThreadPool* (*call_wrap_t) (GLib::Func::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type item_free_func, gint max_threads, gboolean exclusive, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_new_full;
  auto exclusive_to_c = exclusive;
  auto max_threads_to_c = max_threads;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((GLib::Func::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr), (gint) (max_threads_to_c), (gboolean) (exclusive_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::ThreadPool base::ThreadPoolBase::new_full (GLib::Func func, gint max_threads, gboolean exclusive, GLib::Error * _error) noexcept
{
  typedef ::GThreadPool* (*call_wrap_t) (GLib::Func::cfunction_type func, void* user_data, GLib::DestroyNotify::cfunction_type item_free_func, gint max_threads, gboolean exclusive, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_new_full;
  auto exclusive_to_c = exclusive;
  auto max_threads_to_c = max_threads;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_notified) : nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((GLib::Func::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_), (GLib::DestroyNotify::cfunction_type) (func_wrap_ ? &func_wrap_->destroy : nullptr), (gint) (max_threads_to_c), (gboolean) (exclusive_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_thread_pool_set_max_idle_time (guint interval);
// void g_thread_pool_set_max_idle_time (guint interval);
void base::ThreadPoolBase::set_max_idle_time (guint interval) noexcept
{
  typedef void (*call_wrap_t) (guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_set_max_idle_time;
  auto interval_to_c = interval;
  call_wrap_v ((guint) (interval_to_c));
}

// void g_thread_pool_set_max_unused_threads (gint max_threads);
// void g_thread_pool_set_max_unused_threads (gint max_threads);
void base::ThreadPoolBase::set_max_unused_threads (gint max_threads) noexcept
{
  typedef void (*call_wrap_t) (gint max_threads);
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_set_max_unused_threads;
  auto max_threads_to_c = max_threads;
  call_wrap_v ((gint) (max_threads_to_c));
}

// void g_thread_pool_stop_unused_threads ();
// void g_thread_pool_stop_unused_threads ();
void base::ThreadPoolBase::stop_unused_threads () noexcept
{
  typedef void (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_thread_pool_stop_unused_threads;
  call_wrap_v ();
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/threadpool_extra_def_impl.hpp>)
#include <glib/threadpool_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/threadpool_extra_impl.hpp>)
#include <glib/threadpool_extra_impl.hpp>
#endif
#endif

#endif
