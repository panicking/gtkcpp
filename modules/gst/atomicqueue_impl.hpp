// AUTO-GENERATED

#ifndef _GI_GST_ATOMICQUEUE_IMPL_HPP_
#define _GI_GST_ATOMICQUEUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstAtomicQueue* gst_atomic_queue_new (guint initial_size);
// ::GstAtomicQueue* gst_atomic_queue_new (guint initial_size);
Gst::AtomicQueue base::AtomicQueueBase::new_ (guint initial_size) noexcept
{
  typedef ::GstAtomicQueue* (*call_wrap_t) (guint initial_size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_atomic_queue_new;
  auto initial_size_to_c = initial_size;
  auto _temp_ret = call_wrap_v ((guint) (initial_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint gst_atomic_queue_length (GstAtomicQueue* queue);
// guint gst_atomic_queue_length (::GstAtomicQueue* queue);
guint base::AtomicQueueBase::length () noexcept
{
  typedef guint (*call_wrap_t) (::GstAtomicQueue* queue);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_atomic_queue_length;
  auto _temp_ret = call_wrap_v ((::GstAtomicQueue*) (gobj_()));
  return _temp_ret;
}

// gpointer gst_atomic_queue_peek (GstAtomicQueue* queue);
// void* gst_atomic_queue_peek (::GstAtomicQueue* queue);
gpointer base::AtomicQueueBase::peek () noexcept
{
  typedef void* (*call_wrap_t) (::GstAtomicQueue* queue);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_atomic_queue_peek;
  auto _temp_ret = call_wrap_v ((::GstAtomicQueue*) (gobj_()));
  return _temp_ret;
}

// gpointer gst_atomic_queue_pop (GstAtomicQueue* queue);
// void* gst_atomic_queue_pop (::GstAtomicQueue* queue);
gpointer base::AtomicQueueBase::pop () noexcept
{
  typedef void* (*call_wrap_t) (::GstAtomicQueue* queue);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_atomic_queue_pop;
  auto _temp_ret = call_wrap_v ((::GstAtomicQueue*) (gobj_()));
  return _temp_ret;
}

// void gst_atomic_queue_push (GstAtomicQueue* queue, gpointer data);
// void gst_atomic_queue_push (::GstAtomicQueue* queue, void* data);
void base::AtomicQueueBase::push (void* data) noexcept
{
  typedef void (*call_wrap_t) (::GstAtomicQueue* queue, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_atomic_queue_push;
  auto data_to_c = data;
  call_wrap_v ((::GstAtomicQueue*) (gobj_()), (void*) (data_to_c));
}

// void gst_atomic_queue_ref (GstAtomicQueue* queue);
// void gst_atomic_queue_ref (::GstAtomicQueue* queue);
// IGNORE; marked ignore

// void gst_atomic_queue_unref (GstAtomicQueue* queue);
// void gst_atomic_queue_unref (::GstAtomicQueue* queue);
// IGNORE; marked ignore


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/atomicqueue_extra_def_impl.hpp>)
#include <gst/atomicqueue_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/atomicqueue_extra_impl.hpp>)
#include <gst/atomicqueue_extra_impl.hpp>
#endif
#endif

#endif
