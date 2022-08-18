// AUTO-GENERATED

#ifndef _GI_GST_BUFFERPOOL_IMPL_HPP_
#define _GI_GST_BUFFERPOOL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstBufferPool* gst_buffer_pool_new ();
// ::GstBufferPool* gst_buffer_pool_new ();
Gst::BufferPool base::BufferPoolBase::new_ () noexcept
{
  typedef ::GstBufferPool* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_buffer_pool_config_add_option (GstStructure* config, const gchar* option);
// void gst_buffer_pool_config_add_option (::GstStructure* config, const char* option);
void base::BufferPoolBase::config_add_option (Gst::Structure config, const std::string & option) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* config, const char* option);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_add_option;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (config_to_c), (const char*) (option_to_c));
}

// gboolean gst_buffer_pool_config_get_allocator (GstStructure* config, GstAllocator** allocator, GstAllocationParams* params);
// gboolean gst_buffer_pool_config_get_allocator (::GstStructure* config, ::GstAllocator** allocator, ::GstAllocationParams* params);
bool base::BufferPoolBase::config_get_allocator (Gst::Structure config, Gst::Allocator * allocator, Gst::AllocationParams * params) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstAllocator** allocator, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_get_allocator;
  traits::unset_wrapper<::GstAllocationParams>::type params_c;
  ::GstAllocator* allocator_o {};
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstAllocator**) (allocator ? &allocator_o : nullptr), (::GstAllocationParams*) (params ? (::GstAllocationParams*) &params_c : nullptr));
  if (params) *params = gi::wrap ((::GstAllocationParams*) &params_c, gi::transfer_none, gi::direction_out);
  if (allocator) *allocator = gi::wrap (allocator_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::Allocator, Gst::AllocationParams> base::BufferPoolBase::config_get_allocator (Gst::Structure config) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstAllocator** allocator, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_get_allocator;
  traits::unset_wrapper<::GstAllocationParams>::type params_c;
  ::GstAllocator* allocator_o {};
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstAllocator**) (&allocator_o), (::GstAllocationParams*) ((::GstAllocationParams*) &params_c));
  return std::make_tuple (_temp_ret, gi::wrap (allocator_o, gi::transfer_none, gi::direction_out), gi::wrap ((::GstAllocationParams*) &params_c, gi::transfer_none, gi::direction_out));
}

// const gchar* gst_buffer_pool_config_get_option (GstStructure* config, guint index);
// const char* gst_buffer_pool_config_get_option (::GstStructure* config, guint index);
std::string base::BufferPoolBase::config_get_option (Gst::Structure config, guint index) noexcept
{
  typedef const char* (*call_wrap_t) (::GstStructure* config, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_get_option;
  auto index_to_c = index;
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean gst_buffer_pool_config_get_params (GstStructure* config, GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
// gboolean gst_buffer_pool_config_get_params (::GstStructure* config, ::GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
bool base::BufferPoolBase::config_get_params (Gst::Structure config, Gst::Caps * caps, guint * size, guint * min_buffers, guint * max_buffers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_get_params;
  guint max_buffers_o {};
  guint min_buffers_o {};
  guint size_o {};
  ::GstCaps* caps_o {};
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps**) (caps ? &caps_o : nullptr), (guint*) (size ? &size_o : nullptr), (guint*) (min_buffers ? &min_buffers_o : nullptr), (guint*) (max_buffers ? &max_buffers_o : nullptr));
  if (max_buffers) *max_buffers = max_buffers_o;
  if (min_buffers) *min_buffers = min_buffers_o;
  if (size) *size = size_o;
  if (caps) *caps = gi::wrap (caps_o, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::Caps, guint, guint, guint> base::BufferPoolBase::config_get_params (Gst::Structure config) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstCaps** caps, guint* size, guint* min_buffers, guint* max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_get_params;
  guint max_buffers_o {};
  guint min_buffers_o {};
  guint size_o {};
  ::GstCaps* caps_o {};
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps**) (&caps_o), (guint*) (&size_o), (guint*) (&min_buffers_o), (guint*) (&max_buffers_o));
  return std::make_tuple (_temp_ret, gi::wrap (caps_o, gi::transfer_none, gi::direction_out), size_o, min_buffers_o, max_buffers_o);
}

// gboolean gst_buffer_pool_config_has_option (GstStructure* config, const gchar* option);
// gboolean gst_buffer_pool_config_has_option (::GstStructure* config, const char* option);
bool base::BufferPoolBase::config_has_option (Gst::Structure config, const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, const char* option);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_has_option;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (const char*) (option_to_c));
  return _temp_ret;
}

// guint gst_buffer_pool_config_n_options (GstStructure* config);
// guint gst_buffer_pool_config_n_options (::GstStructure* config);
guint base::BufferPoolBase::config_n_options (Gst::Structure config) noexcept
{
  typedef guint (*call_wrap_t) (::GstStructure* config);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_n_options;
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c));
  return _temp_ret;
}

// void gst_buffer_pool_config_set_allocator (GstStructure* config, GstAllocator* allocator, const GstAllocationParams* params);
// void gst_buffer_pool_config_set_allocator (::GstStructure* config, ::GstAllocator* allocator, const ::GstAllocationParams* params);
void base::BufferPoolBase::config_set_allocator (Gst::Structure config, Gst::Allocator allocator, const Gst::AllocationParams & params) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* config, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_set_allocator;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_none, gi::direction_in);
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (config_to_c), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}
void base::BufferPoolBase::config_set_allocator (Gst::Structure config) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* config, ::GstAllocator* allocator, const ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_set_allocator;
  auto params_to_c = nullptr;
  auto allocator_to_c = nullptr;
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (config_to_c), (::GstAllocator*) (allocator_to_c), (const ::GstAllocationParams*) (params_to_c));
}

// void gst_buffer_pool_config_set_params (GstStructure* config, GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
// void gst_buffer_pool_config_set_params (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
void base::BufferPoolBase::config_set_params (Gst::Structure config, Gst::Caps caps, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_set_params;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps*) (caps_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}
void base::BufferPoolBase::config_set_params (Gst::Structure config, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef void (*call_wrap_t) (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_set_params;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto caps_to_c = nullptr;
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps*) (caps_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
}

// gboolean gst_buffer_pool_config_validate_params (GstStructure* config, GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
// gboolean gst_buffer_pool_config_validate_params (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
bool base::BufferPoolBase::config_validate_params (Gst::Structure config, Gst::Caps caps, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_validate_params;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto caps_to_c = gi::unwrap (caps, gi::transfer_none, gi::direction_in);
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps*) (caps_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
  return _temp_ret;
}
bool base::BufferPoolBase::config_validate_params (Gst::Structure config, guint size, guint min_buffers, guint max_buffers) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstStructure* config, ::GstCaps* caps, guint size, guint min_buffers, guint max_buffers);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_config_validate_params;
  auto max_buffers_to_c = max_buffers;
  auto min_buffers_to_c = min_buffers;
  auto size_to_c = size;
  auto caps_to_c = nullptr;
  auto config_to_c = gi::unwrap (config, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstStructure*) (config_to_c), (::GstCaps*) (caps_to_c), (guint) (size_to_c), (guint) (min_buffers_to_c), (guint) (max_buffers_to_c));
  return _temp_ret;
}

// GstFlowReturn gst_buffer_pool_acquire_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn gst_buffer_pool_acquire_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
Gst::FlowReturn base::BufferPoolBase::acquire_buffer (Gst::Buffer & buffer, Gst::BufferPoolAcquireParams params) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_acquire_buffer;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  ::GstBuffer* buffer_o {};
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer**) (&buffer_o), (::GstBufferPoolAcquireParams*) (params_to_c));
  buffer = gi::wrap (buffer_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
Gst::FlowReturn base::BufferPoolBase::acquire_buffer (Gst::Buffer & buffer) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_acquire_buffer;
  auto params_to_c = nullptr;
  ::GstBuffer* buffer_o {};
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer**) (&buffer_o), (::GstBufferPoolAcquireParams*) (params_to_c));
  buffer = gi::wrap (buffer_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<Gst::FlowReturn, Gst::Buffer> base::BufferPoolBase::acquire_buffer (Gst::BufferPoolAcquireParams params) noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_acquire_buffer;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  ::GstBuffer* buffer_o {};
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer**) (&buffer_o), (::GstBufferPoolAcquireParams*) (params_to_c));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (buffer_o, gi::transfer_full, gi::direction_out));
}
std::tuple<Gst::FlowReturn, Gst::Buffer> base::BufferPoolBase::acquire_buffer () noexcept
{
  typedef ::GstFlowReturn (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_acquire_buffer;
  auto params_to_c = nullptr;
  ::GstBuffer* buffer_o {};
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer**) (&buffer_o), (::GstBufferPoolAcquireParams*) (params_to_c));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (buffer_o, gi::transfer_full, gi::direction_out));
}

// GstStructure* gst_buffer_pool_get_config (GstBufferPool* pool);
// ::GstStructure* gst_buffer_pool_get_config (::GstBufferPool* pool);
Gst::Structure base::BufferPoolBase::get_config () noexcept
{
  typedef ::GstStructure* (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_get_config;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar** gst_buffer_pool_get_options (GstBufferPool* pool);
// const char** gst_buffer_pool_get_options (::GstBufferPool* pool);
std::vector<std::string> base::BufferPoolBase::get_options () noexcept
{
  typedef const char** (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_get_options;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gboolean gst_buffer_pool_has_option (GstBufferPool* pool, const gchar* option);
// gboolean gst_buffer_pool_has_option (::GstBufferPool* pool, const char* option);
bool base::BufferPoolBase::has_option (const std::string & option) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool, const char* option);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_has_option;
  auto option_to_c = gi::unwrap (option, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (const char*) (option_to_c));
  return _temp_ret;
}

// gboolean gst_buffer_pool_is_active (GstBufferPool* pool);
// gboolean gst_buffer_pool_is_active (::GstBufferPool* pool);
bool base::BufferPoolBase::is_active () noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_is_active;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()));
  return _temp_ret;
}

// void gst_buffer_pool_release_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void gst_buffer_pool_release_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
void base::BufferPoolBase::release_buffer (Gst::Buffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_release_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer*) (buffer_to_c));
}

// gboolean gst_buffer_pool_set_active (GstBufferPool* pool, gboolean active);
// gboolean gst_buffer_pool_set_active (::GstBufferPool* pool, gboolean active);
bool base::BufferPoolBase::set_active (gboolean active) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool, gboolean active);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_set_active;
  auto active_to_c = active;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (gboolean) (active_to_c));
  return _temp_ret;
}

// gboolean gst_buffer_pool_set_config (GstBufferPool* pool, GstStructure* config);
// gboolean gst_buffer_pool_set_config (::GstBufferPool* pool, ::GstStructure* config);
bool base::BufferPoolBase::set_config (Gst::Structure config) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool, ::GstStructure* config);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_set_config;
  auto config_to_c = gi::unwrap (config, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstStructure*) (config_to_c));
  return _temp_ret;
}

// void gst_buffer_pool_set_flushing (GstBufferPool* pool, gboolean flushing);
// void gst_buffer_pool_set_flushing (::GstBufferPool* pool, gboolean flushing);
void base::BufferPoolBase::set_flushing (gboolean flushing) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPool* pool, gboolean flushing);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_buffer_pool_set_flushing;
  auto flushing_to_c = flushing;
  call_wrap_v ((::GstBufferPool*) (gobj_()), (gboolean) (flushing_to_c));
}

static gint _field_flushing_get (const ::GstBufferPool* obj) { return (gint) obj->flushing; }
// gint BufferPool::flushing (const ::GstBufferPool* obj);
// gint BufferPool::flushing (const ::GstBufferPool* obj);
gint base::BufferPoolBase::flushing_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GstBufferPool* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flushing_get;
  auto _temp_ret = call_wrap_v ((const ::GstBufferPool*) (gobj_()));
  return _temp_ret;
}

static void _field_flushing_set (::GstBufferPool* obj, gint _value) { obj->flushing = (decltype(obj->flushing)) _value; }
//  BufferPool::flushing (::GstBufferPool* obj, gint _value);
// void BufferPool::flushing (::GstBufferPool* obj, gint _value);
void base::BufferPoolBase::flushing_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GstBufferPool* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_flushing_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstBufferPool*) (gobj_()), (gint) (_value_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferpool_extra_def_impl.hpp>)
#include <gst/bufferpool_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferpool_extra_impl.hpp>)
#include <gst/bufferpool_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void BufferPoolClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstBufferPoolClass *methods = (::GstBufferPoolClass *) class_struct;
  (void) methods;

  methods->flush_start = (decltype (methods->flush_start)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::flush_start_>;
  methods->flush_stop = (decltype (methods->flush_stop)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::flush_stop_>;
  methods->free_buffer = (decltype (methods->free_buffer)) detail::method_wrapper<self, void (*) (Gst::Buffer buffer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::free_buffer_>;
  methods->release_buffer = (decltype (methods->release_buffer)) detail::method_wrapper<self, void (*) (Gst::Buffer buffer), gi::transfer_full_t, gi::transfer_full_t>::wrapper<&self::release_buffer_>;
  methods->reset_buffer = (decltype (methods->reset_buffer)) detail::method_wrapper<self, void (*) (Gst::Buffer buffer), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::reset_buffer_>;
  methods->set_config = (decltype (methods->set_config)) detail::method_wrapper<self, bool (*) (Gst::Structure config), gi::transfer_none_t, gi::transfer_full_t>::wrapper<&self::set_config_>;
  methods->start = (decltype (methods->start)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::start_>;
  methods->stop = (decltype (methods->stop)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::stop_>;
}

// GstFlowReturn BufferPool::acquire_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::acquire_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// GstFlowReturn BufferPool::alloc_buffer (GstBufferPool* pool, GstBuffer** buffer, GstBufferPoolAcquireParams* params);
// ::GstFlowReturn BufferPool::alloc_buffer (::GstBufferPool* pool, ::GstBuffer** buffer, ::GstBufferPoolAcquireParams* params);
// SKIP; virtual-method out parameter not supported

// void BufferPool::flush_start (GstBufferPool* pool);
// void BufferPool::flush_start (::GstBufferPool* pool);
void BufferPoolClass::flush_start_ () noexcept
{
  if (!get_struct_()->flush_start) return ;
  typedef void (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush_start;
  call_wrap_v ((::GstBufferPool*) (gobj_()));
}

// void BufferPool::flush_stop (GstBufferPool* pool);
// void BufferPool::flush_stop (::GstBufferPool* pool);
void BufferPoolClass::flush_stop_ () noexcept
{
  if (!get_struct_()->flush_stop) return ;
  typedef void (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush_stop;
  call_wrap_v ((::GstBufferPool*) (gobj_()));
}

// void BufferPool::free_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::free_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
void BufferPoolClass::free_buffer_ (Gst::Buffer buffer) noexcept
{
  if (!get_struct_()->free_buffer) return ;
  typedef void (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->free_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer*) (buffer_to_c));
}

// const gchar** BufferPool::get_options (GstBufferPool* pool);
// const char** BufferPool::get_options (::GstBufferPool* pool);
// SKIP; container return not supported

// void BufferPool::release_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::release_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
void BufferPoolClass::release_buffer_ (Gst::Buffer buffer) noexcept
{
  if (!get_struct_()->release_buffer) return ;
  typedef void (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->release_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer*) (buffer_to_c));
}

// void BufferPool::reset_buffer (GstBufferPool* pool, GstBuffer* buffer);
// void BufferPool::reset_buffer (::GstBufferPool* pool, ::GstBuffer* buffer);
void BufferPoolClass::reset_buffer_ (Gst::Buffer buffer) noexcept
{
  if (!get_struct_()->reset_buffer) return ;
  typedef void (*call_wrap_t) (::GstBufferPool* pool, ::GstBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->reset_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstBuffer*) (buffer_to_c));
}

// gboolean BufferPool::set_config (GstBufferPool* pool, GstStructure* config);
// gboolean BufferPool::set_config (::GstBufferPool* pool, ::GstStructure* config);
bool BufferPoolClass::set_config_ (Gst::Structure config) noexcept
{
  if (!get_struct_()->set_config) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool, ::GstStructure* config);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->set_config;
  auto config_to_c = gi::unwrap (config, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()), (::GstStructure*) (config_to_c));
  return _temp_ret;
}

// gboolean BufferPool::start (GstBufferPool* pool);
// gboolean BufferPool::start (::GstBufferPool* pool);
bool BufferPoolClass::start_ () noexcept
{
  if (!get_struct_()->start) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->start;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()));
  return _temp_ret;
}

// gboolean BufferPool::stop (GstBufferPool* pool);
// gboolean BufferPool::stop (::GstBufferPool* pool);
bool BufferPoolClass::stop_ () noexcept
{
  if (!get_struct_()->stop) return bool{};
  typedef gboolean (*call_wrap_t) (::GstBufferPool* pool);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->stop;
  auto _temp_ret = call_wrap_v ((::GstBufferPool*) (gobj_()));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
