// AUTO-GENERATED

#ifndef _GI_GST_SHAREDTASKPOOL_IMPL_HPP_
#define _GI_GST_SHAREDTASKPOOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstTaskPool* gst_shared_task_pool_new ();
// ::GstSharedTaskPool* gst_shared_task_pool_new ();
Gst::SharedTaskPool base::SharedTaskPoolBase::new_ () noexcept
{
  typedef ::GstSharedTaskPool* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_shared_task_pool_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gst_shared_task_pool_get_max_threads (GstSharedTaskPool* pool);
// guint gst_shared_task_pool_get_max_threads (::GstSharedTaskPool* pool);
guint base::SharedTaskPoolBase::get_max_threads () noexcept
{
  typedef guint (*call_wrap_t) (::GstSharedTaskPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_shared_task_pool_get_max_threads;
  auto _temp_ret = call_wrap_v ((::GstSharedTaskPool*) (gobj_()));
  return _temp_ret;
}

// void gst_shared_task_pool_set_max_threads (GstSharedTaskPool* pool, guint max_threads);
// void gst_shared_task_pool_set_max_threads (::GstSharedTaskPool* pool, guint max_threads);
void base::SharedTaskPoolBase::set_max_threads (guint max_threads) noexcept
{
  typedef void (*call_wrap_t) (::GstSharedTaskPool* pool, guint max_threads);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_shared_task_pool_set_max_threads;
  auto max_threads_to_c = max_threads;
  call_wrap_v ((::GstSharedTaskPool*) (gobj_()), (guint) (max_threads_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/sharedtaskpool_extra_def_impl.hpp>)
#include <gst/sharedtaskpool_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/sharedtaskpool_extra_impl.hpp>)
#include <gst/sharedtaskpool_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void SharedTaskPoolClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstSharedTaskPoolClass *methods = (::GstSharedTaskPoolClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
