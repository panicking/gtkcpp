// AUTO-GENERATED

#ifndef _GI_GST_BUFFERPOOL_HPP_
#define _GI_GST_BUFFERPOOL_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace Gst {

class AllocationParams;
class Allocator;
class Buffer;
class BufferPoolAcquireParams;
class Caps;
class Structure;

class BufferPool;

namespace base {


#define GI_GST_BUFFERPOOL_BASE base::BufferPoolBase
class BufferPoolBase : public Gst::Object
{
typedef Gst::Object super_type;
public:
typedef ::GstBufferPool BaseObjectType;

BufferPoolBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gst_buffer_pool_get_type(); } 

// GstBufferPool* gst_buffer_pool_new ();
// ::GstBufferPool* gst_buffer_pool_new ();
static GI_INLINE_DECL Gst::BufferPool new_ () noexcept;

// void gst_buffer_pool_config_add_option (GstStructure* config, const gchar* option);
// void gst_buffer_pool_config_add_option (::GstStructure* config, const char* option);
static GI_INLINE_DECL void config_add_option (Gst::Structure config, const std::string & option) noexcept;

// gboolean gst_buffer_pool_config_get_allocator (GstStructure* config, GstAllocator** allocator, GstAllocationParams* params);
// gboolean gst_buffer_pool_config_get_allocator (::GstStructure* config, ::GstAllocator** allocator, ::GstAllocationParams* params);
static GI_INLINE_DECL bool config_get_allocator (Gst::Structure config, Gst::Allocator * allocator = nullptr, Gst::AllocationParams * params = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gst::Allocator, Gst::AllocationParams> config_get_allocator (Gst::Structure config) noexcept;

// const gchar* gst_buffer_pool_config_get_option (GstStructure* config, guint index);
// const char* gst_buffer_pool_config_get_option (::GstStructure* config, guint index);
static GI_INLINE_DECL std::string config_get_option (Gst::Structure config, guint index) noexcept;

// gboolean gst_buffer_pool_config_get_params (GstStructure* config, GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
// gboolean gst_buffer_pool_config_get_params (::GstStructure* config, ::GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
static GI_INLINE_DECL bool config_get_params (Gst::Structure config, Gst::Caps * caps = nullptr, guint * size = nullptr, guint * min_buffers = nullptr, guint * max_buffers = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<bool, Gst::Caps, guint, guint, guint> config_get_params (Gst::Structure config) noexcept;

// gboolean gst_buffer_pool_config_has_option (GstStructure* config, const gchar* option);
// gboolean gst_buffer_pool_config_has_option (::GstStructure* config, const char* option);
static GI_INLINE_DECL bool config_has_option (Gst::Structure config, const std::string & option) noexcept;

// guint gst_buffer_pool_config_n_options (GstStructure* config);
// guint gst_buffer_pool_config_n_options (::GstStructure* config);
static GI_INLINE_DECL guint config_n_options (Gst::Structure config) noexcept;

// void gst_buffer_pool_config_set_allocator (GstStructure* config, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_buffer_pool_config_set_allocator (::GstStructure* config, ::GstAllocator* allocator, const ::GstAllocationParams* params);
static GI_INLINE_DECL void config_set_allocator (Gst::Structure config, Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept;
static GI_INLINE_DECL void config_set_allocator (Gst::Structure config) noexcept;

// void gst_buffer_pool_config_set_params (GstStructure* config, GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
// void gst_buffer_pool_config_set_params (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
static GI_INLINE_DECL void config_set_params (Gst::Structure config, Gst::Caps caps, guint size, guint min_buffers, guint max_buffers) noexcept;
static GI_INLINE_DECL void config_set_params (Gst::Structure config, guint size, guint min_buffers, guint max_buffers) noexcept;

// gboolean gst_buffer_pool_config_validate_params (GstStructure* config, GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
// gboolean gst_buffer_pool_config_validate_params (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
static GI_INLINE_DECL bool config_validate_params (Gst::Structure config, Gst::Caps caps, guint size, guint min_buffers, guint max_buffers) noexcept;
static GI_INLINE_DECL bool config_validate_params (Gst::Structure config, guint size, guint min_buffers, guint max_buffers) noexcept;

// GstFlowReturn gst_buffer_pool_acquire_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn gst_buffer_pool_acquire_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
GI_INLINE_DECL Gst::FlowReturn acquire_buffer (Gst::Buffer & buffer, Gst::BufferPoolAcquireParams params) noexcept;
GI_INLINE_DECL Gst::FlowReturn acquire_buffer (Gst::Buffer & buffer) noexcept;
GI_INLINE_DECL std::tuple<Gst::FlowReturn, Gst::Buffer> acquire_buffer (Gst::BufferPoolAcquireParams params) noexcept;
GI_INLINE_DECL std::tuple<Gst::FlowReturn, Gst::Buffer> acquire_buffer () noexcept;

// GstStructure* gst_buffer_pool_get_config (GstBufferPool* pool);
// ::GstStructure* gst_buffer_pool_get_config (::GstBufferPool* pool);
GI_INLINE_DECL Gst::Structure get_config () noexcept;

// const gchar** gst_buffer_pool_get_options (GstBufferPool* pool);
// const char** gst_buffer_pool_get_options (::GstBufferPool* pool);
GI_INLINE_DECL std::vector<std::string> get_options () noexcept;

// gboolean gst_buffer_pool_has_option (GstBufferPool* pool, const gchar* option);
// gboolean gst_buffer_pool_has_option (::GstBufferPool* pool, const char* option);
GI_INLINE_DECL bool has_option (const std::string & option) noexcept;

// gboolean gst_buffer_pool_is_active (GstBufferPool* pool);
// gboolean gst_buffer_pool_is_active (::GstBufferPool* pool);
GI_INLINE_DECL bool is_active () noexcept;

// void gst_buffer_pool_release_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void gst_buffer_pool_release_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
GI_INLINE_DECL void release_buffer (Gst::Buffer buffer) noexcept;

// gboolean gst_buffer_pool_set_active (GstBufferPool* pool, gboolean active);
// gboolean gst_buffer_pool_set_active (::GstBufferPool* pool, gboolean active);
GI_INLINE_DECL bool set_active (gboolean active) noexcept;

// gboolean gst_buffer_pool_set_config (GstBufferPool* pool, GstStructure* config);
// gboolean gst_buffer_pool_set_config (::GstBufferPool* pool, ::GstStructure* config);
GI_INLINE_DECL bool set_config (Gst::Structure config) noexcept;

// void gst_buffer_pool_set_flushing (GstBufferPool* pool, gboolean flushing);
// void gst_buffer_pool_set_flushing (::GstBufferPool* pool, gboolean flushing);
GI_INLINE_DECL void set_flushing (gboolean flushing) noexcept;

// gint BufferPool::flushing (const ::GstBufferPool* obj);
// gint BufferPool::flushing (const ::GstBufferPool* obj);
GI_INLINE_DECL gint flushing_ () const noexcept;

//  BufferPool::flushing (::GstBufferPool* obj, gint _value);
// void BufferPool::flushing (::GstBufferPool* obj, gint _value);
GI_INLINE_DECL void flushing_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferpool_extra_def.hpp>)
#include <gst/bufferpool_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferpool_extra.hpp>)
#include <gst/bufferpool_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class BufferPool : public GI_GST_BUFFERPOOL_BASE
{ typedef GI_GST_BUFFERPOOL_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBufferPool>
{ typedef Gst::BufferPool type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {


class BufferPoolClassDef
{
typedef BufferPoolClassDef self;
public:
typedef Gst::BufferPool instance_type;
typedef ::GstBufferPoolClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// GstFlowReturn BufferPool::acquire_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::acquire_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// GstFlowReturn BufferPool::alloc_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::alloc_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// void BufferPool::flush_start (GstBufferPool* pool);
// void BufferPool::flush_start (::GstBufferPool* pool);
virtual void flush_start_ () noexcept = 0;

// void BufferPool::flush_stop (GstBufferPool* pool);
// void BufferPool::flush_stop (::GstBufferPool* pool);
virtual void flush_stop_ () noexcept = 0;

// void BufferPool::free_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::free_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
virtual void free_buffer_ (Gst::Buffer buffer) noexcept = 0;

// const gchar** BufferPool::get_options (GstBufferPool* pool);
// const char** BufferPool::get_options (::GstBufferPool* pool);
// SKIP; container return not supported

// void BufferPool::release_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::release_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
virtual void release_buffer_ (Gst::Buffer buffer) noexcept = 0;

// void BufferPool::reset_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::reset_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
virtual void reset_buffer_ (Gst::Buffer buffer) noexcept = 0;

// gboolean BufferPool::set_config (GstBufferPool* pool, GstStructure* config);
// gboolean BufferPool::set_config (::GstBufferPool* pool, ::GstStructure* config);
virtual bool set_config_ (Gst::Structure config) noexcept = 0;

// gboolean BufferPool::start (GstBufferPool* pool);
// gboolean BufferPool::start (::GstBufferPool* pool);
virtual bool start_ () noexcept = 0;

// gboolean BufferPool::stop (GstBufferPool* pool);
// gboolean BufferPool::stop (::GstBufferPool* pool);
virtual bool stop_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class BufferPoolClass: public detail::ClassTemplate<Gst::impl::internal::BufferPoolClassDef, Gst::impl::internal::ObjectClass>
{
typedef BufferPoolClass self;
typedef detail::ClassTemplate<Gst::impl::internal::BufferPoolClassDef, Gst::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// GstFlowReturn BufferPool::acquire_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::acquire_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// GstFlowReturn BufferPool::alloc_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::alloc_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// void BufferPool::flush_start (GstBufferPool* pool);
// void BufferPool::flush_start (::GstBufferPool* pool);
GI_INLINE_DECL void flush_start_ () noexcept override;

// void BufferPool::flush_stop (GstBufferPool* pool);
// void BufferPool::flush_stop (::GstBufferPool* pool);
GI_INLINE_DECL void flush_stop_ () noexcept override;

// void BufferPool::free_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::free_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
GI_INLINE_DECL void free_buffer_ (Gst::Buffer buffer) noexcept override;

// const gchar** BufferPool::get_options (GstBufferPool* pool);
// const char** BufferPool::get_options (::GstBufferPool* pool);
// SKIP; container return not supported

// void BufferPool::release_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::release_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
GI_INLINE_DECL void release_buffer_ (Gst::Buffer buffer) noexcept override;

// void BufferPool::reset_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::reset_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
GI_INLINE_DECL void reset_buffer_ (Gst::Buffer buffer) noexcept override;

// gboolean BufferPool::set_config (GstBufferPool* pool, GstStructure* config);
// gboolean BufferPool::set_config (::GstBufferPool* pool, ::GstStructure* config);
GI_INLINE_DECL bool set_config_ (Gst::Structure config) noexcept override;

// gboolean BufferPool::start (GstBufferPool* pool);
// gboolean BufferPool::start (::GstBufferPool* pool);
GI_INLINE_DECL bool start_ () noexcept override;

// gboolean BufferPool::stop (GstBufferPool* pool);
// gboolean BufferPool::stop (::GstBufferPool* pool);
GI_INLINE_DECL bool stop_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using BufferPoolImpl = detail::ObjectImpl<BufferPool, internal::BufferPoolClass>;

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
