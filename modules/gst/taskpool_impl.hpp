// AUTO-GENERATED

#ifndef _GI_GST_TASKPOOL_IMPL_HPP_
#define _GI_GST_TASKPOOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstTaskPool* gst_task_pool_new ();
// ::GstTaskPool* gst_task_pool_new ();
Gst::TaskPool base::TaskPoolBase::new_ () noexcept
{
  typedef ::GstTaskPool* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_task_pool_cleanup (GstTaskPool* pool);
// void gst_task_pool_cleanup (::GstTaskPool* pool);
void base::TaskPoolBase::cleanup () noexcept
{
  typedef void (*call_wrap_t) (::GstTaskPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_cleanup;
  call_wrap_v ((::GstTaskPool*) (gobj_()));
}

// void gst_task_pool_dispose_handle (GstTaskPool* pool, gpointer id);
// void gst_task_pool_dispose_handle (::GstTaskPool* pool, void* id);
void base::TaskPoolBase::dispose_handle (void* id) noexcept
{
  typedef void (*call_wrap_t) (::GstTaskPool* pool, void* id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_dispose_handle;
  auto id_to_c = id;
  call_wrap_v ((::GstTaskPool*) (gobj_()), (void*) (id_to_c));
}

// void gst_task_pool_join (GstTaskPool* pool, gpointer id);
// void gst_task_pool_join (::GstTaskPool* pool, void* id);
void base::TaskPoolBase::join (void* id) noexcept
{
  typedef void (*call_wrap_t) (::GstTaskPool* pool, void* id);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_join;
  auto id_to_c = id;
  call_wrap_v ((::GstTaskPool*) (gobj_()), (void*) (id_to_c));
}

// void gst_task_pool_prepare (GstTaskPool* pool, GError ** error);
// void gst_task_pool_prepare (::GstTaskPool* pool, GError ** error);
void base::TaskPoolBase::prepare ()
{
  typedef void (*call_wrap_t) (::GstTaskPool* pool, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_prepare;
  GError *error = NULL;
  call_wrap_v ((::GstTaskPool*) (gobj_()), &error);
  gi::check_error (error);
}
void base::TaskPoolBase::prepare (GLib::Error * _error) noexcept
{
  typedef void (*call_wrap_t) (::GstTaskPool* pool, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_task_pool_prepare;
  GError* _error_o {};
  call_wrap_v ((::GstTaskPool*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
}

// gpointer gst_task_pool_push (GstTaskPool* pool, GstTaskPoolFunction func, gpointer user_data, GError ** error);
// void* gst_task_pool_push (::GstTaskPool* pool,  func, void* user_data, GError ** error);
// SKIP; func type  not supported


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/taskpool_extra_def_impl.hpp>)
#include <gst/taskpool_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/taskpool_extra_impl.hpp>)
#include <gst/taskpool_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void TaskPoolClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstTaskPoolClass *methods = (::GstTaskPoolClass *) class_struct;
  (void) methods;

  methods->cleanup = (decltype (methods->cleanup)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::cleanup_>;
  methods->dispose_handle = (decltype (methods->dispose_handle)) detail::method_wrapper<self, void (*) (void* id), gi::transfer_full_t, gi::transfer_full_t>::wrapper<&self::dispose_handle_>;
  methods->join = (decltype (methods->join)) detail::method_wrapper<self, void (*) (void* id), gi::transfer_full_t, gi::transfer_full_t>::wrapper<&self::join_>;
}

// void TaskPool::cleanup (GstTaskPool* pool);
// void TaskPool::cleanup (::GstTaskPool* pool);
void TaskPoolClass::cleanup_ () noexcept
{
  if (!get_struct_()->cleanup) return ;
  typedef void (*call_wrap_t) (::GstTaskPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cleanup;
  call_wrap_v ((::GstTaskPool*) (gobj_()));
}

// void TaskPool::dispose_handle (GstTaskPool* pool, gpointer id);
// void TaskPool::dispose_handle (::GstTaskPool* pool, void* id);
void TaskPoolClass::dispose_handle_ (void* id) noexcept
{
  if (!get_struct_()->dispose_handle) return ;
  typedef void (*call_wrap_t) (::GstTaskPool* pool, void* id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->dispose_handle;
  auto id_to_c = id;
  call_wrap_v ((::GstTaskPool*) (gobj_()), (void*) (id_to_c));
}

// void TaskPool::join (GstTaskPool* pool, gpointer id);
// void TaskPool::join (::GstTaskPool* pool, void* id);
void TaskPoolClass::join_ (void* id) noexcept
{
  if (!get_struct_()->join) return ;
  typedef void (*call_wrap_t) (::GstTaskPool* pool, void* id);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->join;
  auto id_to_c = id;
  call_wrap_v ((::GstTaskPool*) (gobj_()), (void*) (id_to_c));
}

// void TaskPool::prepare (GstTaskPool* pool, GError ** error);
// void TaskPool::prepare (::GstTaskPool* pool, GError ** error);
// SKIP; callee GError not supported

// gpointer TaskPool::push (GstTaskPool* pool, GstTaskPoolFunction func, gpointer user_data, GError ** error);
// void* TaskPool::push (::GstTaskPool* pool,  func, void* user_data, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
