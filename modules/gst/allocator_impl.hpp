// AUTO-GENERATED

#ifndef _GI_GST_ALLOCATOR_IMPL_HPP_
#define _GI_GST_ALLOCATOR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// GstAllocator* gst_allocator_find (const gchar* name);
// ::GstAllocator* gst_allocator_find (const char* name);
Gst::Allocator base::AllocatorBase::find (const std::string & name) noexcept
{
  typedef ::GstAllocator* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_find;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Allocator base::AllocatorBase::find () noexcept
{
  typedef ::GstAllocator* (*call_wrap_t) (const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_find;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_allocator_register (const gchar* name, GstAllocator* allocator);
// void gst_allocator_register (const char* name, ::GstAllocator* allocator);
void base::AllocatorBase::register_ (const std::string & name, Gst::Allocator allocator) noexcept
{
  typedef void (*call_wrap_t) (const char* name, ::GstAllocator* allocator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_register;
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_full, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((const char*) (name_to_c), (::GstAllocator*) (allocator_to_c));
}

// GstMemory* gst_allocator_alloc (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstMemory* gst_allocator_alloc (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
Gst::Memory base::AllocatorBase::alloc (gsize size, Gst::AllocationParams params) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_alloc;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((::GstAllocator*) (gobj_()), (gsize) (size_to_c), (::GstAllocationParams*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gst::Memory base::AllocatorBase::alloc (gsize size) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_alloc;
  auto params_to_c = nullptr;
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((::GstAllocator*) (gobj_()), (gsize) (size_to_c), (::GstAllocationParams*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_allocator_free (GstAllocator* allocator, GstMemory* memory);
// void gst_allocator_free (::GstAllocator* allocator, ::GstMemory* memory);
// IGNORE; marked ignore

// void gst_allocator_set_default (GstAllocator* allocator);
// void gst_allocator_set_default (::GstAllocator* allocator);
void base::AllocatorBase::set_default () noexcept
{
  typedef void (*call_wrap_t) (::GstAllocator* allocator);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_allocator_set_default;
  call_wrap_v ((::GstAllocator*) (gobj_()));
}

static const char* _field_mem_type_get (const ::GstAllocator* obj) { return (const char*) obj->mem_type; }
// const char* Allocator::mem_type (const ::GstAllocator* obj);
// const char* Allocator::mem_type (const ::GstAllocator* obj);
std::string base::AllocatorBase::mem_type_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GstAllocator* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mem_type_get;
  auto _temp_ret = call_wrap_v ((const ::GstAllocator*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/allocator_extra_def_impl.hpp>)
#include <gst/allocator_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/allocator_extra_impl.hpp>)
#include <gst/allocator_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void AllocatorClassDef::class_init (gpointer class_struct, gpointer )
{
  ::GstAllocatorClass *methods = (::GstAllocatorClass *) class_struct;
  (void) methods;

  methods->alloc = (decltype (methods->alloc)) detail::method_wrapper<self, Gst::Memory (*) (gsize size, Gst::AllocationParams params), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::alloc_>;
  methods->free = (decltype (methods->free)) detail::method_wrapper<self, void (*) (Gst::Memory memory), gi::transfer_full_t, gi::transfer_full_t>::wrapper<&self::free_>;
}

// GstMemory* Allocator::alloc (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstMemory* Allocator::alloc (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
Gst::Memory AllocatorClass::alloc_ (gsize size, Gst::AllocationParams params) noexcept
{
  if (!get_struct_()->alloc) return Gst::Memory{};
  typedef ::GstMemory* (*call_wrap_t) (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->alloc;
  auto params_to_c = gi::unwrap (params, gi::transfer_none, gi::direction_in);
  auto size_to_c = size;
  auto _temp_ret = call_wrap_v ((::GstAllocator*) (gobj_()), (gsize) (size_to_c), (::GstAllocationParams*) (params_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void Allocator::free (GstAllocator* allocator, GstMemory* memory);
// void Allocator::free (::GstAllocator* allocator, ::GstMemory* memory);
void AllocatorClass::free_ (Gst::Memory memory) noexcept
{
  if (!get_struct_()->free) return ;
  typedef void (*call_wrap_t) (::GstAllocator* allocator, ::GstMemory* memory);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->free;
  auto memory_to_c = gi::unwrap (memory, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GstAllocator*) (gobj_()), (::GstMemory*) (memory_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
