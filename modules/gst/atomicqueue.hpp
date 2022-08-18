// AUTO-GENERATED

#ifndef _GI_GST_ATOMICQUEUE_HPP_
#define _GI_GST_ATOMICQUEUE_HPP_


namespace gi {

namespace repository {

namespace Gst {


class AtomicQueue;

namespace base {


#define GI_GST_ATOMICQUEUE_BASE base::AtomicQueueBase
class AtomicQueueBase : public gi::detail::GBoxedWrapper<AtomicQueueBase, ::GstAtomicQueue>
{
typedef gi::detail::GBoxedWrapper<AtomicQueueBase, ::GstAtomicQueue> super_type;
public:

AtomicQueueBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_atomic_queue_get_type(); } 

// GstAtomicQueue* gst_atomic_queue_new (guint initial_size);
// ::GstAtomicQueue* gst_atomic_queue_new (guint initial_size);
static GI_INLINE_DECL Gst::AtomicQueue new_ (guint initial_size) noexcept;

// guint gst_atomic_queue_length (GstAtomicQueue* queue);
// guint gst_atomic_queue_length (::GstAtomicQueue* queue);
GI_INLINE_DECL guint length () noexcept;

// gpointer gst_atomic_queue_peek (GstAtomicQueue* queue);
// void* gst_atomic_queue_peek (::GstAtomicQueue* queue);
GI_INLINE_DECL gpointer peek () noexcept;

// gpointer gst_atomic_queue_pop (GstAtomicQueue* queue);
// void* gst_atomic_queue_pop (::GstAtomicQueue* queue);
GI_INLINE_DECL gpointer pop () noexcept;

// void gst_atomic_queue_push (GstAtomicQueue* queue, gpointer data);
// void gst_atomic_queue_push (::GstAtomicQueue* queue, void* data);
GI_INLINE_DECL void push (void* data) noexcept;

// void gst_atomic_queue_ref (GstAtomicQueue* queue);
// void gst_atomic_queue_ref (::GstAtomicQueue* queue);
// IGNORE; marked ignore

// void gst_atomic_queue_unref (GstAtomicQueue* queue);
// void gst_atomic_queue_unref (::GstAtomicQueue* queue);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/atomicqueue_extra_def.hpp>)
#include <gst/atomicqueue_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/atomicqueue_extra.hpp>)
#include <gst/atomicqueue_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class AtomicQueue : public GI_GST_ATOMICQUEUE_BASE
{ typedef GI_GST_ATOMICQUEUE_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstAtomicQueue>
{ typedef Gst::AtomicQueue type; }; 

} // namespace repository

} // namespace gi

#endif
