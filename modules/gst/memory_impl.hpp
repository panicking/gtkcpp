// AUTO-GENERATED

#ifndef _GI_GST_MEMORY_IMPL_HPP_
#define _GI_GST_MEMORY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

static ::GstAllocator* _field_allocator_get (const ::GstMemory* obj) { return (::GstAllocator*) obj->allocator; }
// ::GstAllocator* Memory::allocator (const ::GstMemory* obj);
// ::GstAllocator* Memory::allocator (const ::GstMemory* obj);
Gst::Allocator base::MemoryBase::allocator_ () const noexcept
{
  typedef ::GstAllocator* (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocator_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static ::GstMemory* _field_parent_get (const ::GstMemory* obj) { return (::GstMemory*) obj->parent; }
// ::GstMemory* Memory::parent (const ::GstMemory* obj);
// ::GstMemory* Memory::parent (const ::GstMemory* obj);
Gst::Memory base::MemoryBase::parent_ () const noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_parent_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gsize _field_maxsize_get (const ::GstMemory* obj) { return (gsize) obj->maxsize; }
// gsize Memory::maxsize (const ::GstMemory* obj);
// gsize Memory::maxsize (const ::GstMemory* obj);
gsize base::MemoryBase::maxsize_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maxsize_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return _temp_ret;
}

static void _field_maxsize_set (::GstMemory* obj, gsize _value) { obj->maxsize = (decltype(obj->maxsize)) _value; }
//  Memory::maxsize (::GstMemory* obj, gsize _value);
// void Memory::maxsize (::GstMemory* obj, gsize _value);
void base::MemoryBase::maxsize_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_maxsize_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMemory*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_align_get (const ::GstMemory* obj) { return (gsize) obj->align; }
// gsize Memory::align (const ::GstMemory* obj);
// gsize Memory::align (const ::GstMemory* obj);
gsize base::MemoryBase::align_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_align_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return _temp_ret;
}

static void _field_align_set (::GstMemory* obj, gsize _value) { obj->align = (decltype(obj->align)) _value; }
//  Memory::align (::GstMemory* obj, gsize _value);
// void Memory::align (::GstMemory* obj, gsize _value);
void base::MemoryBase::align_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_align_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMemory*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_offset_get (const ::GstMemory* obj) { return (gsize) obj->offset; }
// gsize Memory::offset (const ::GstMemory* obj);
// gsize Memory::offset (const ::GstMemory* obj);
gsize base::MemoryBase::offset_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return _temp_ret;
}

static void _field_offset_set (::GstMemory* obj, gsize _value) { obj->offset = (decltype(obj->offset)) _value; }
//  Memory::offset (::GstMemory* obj, gsize _value);
// void Memory::offset (::GstMemory* obj, gsize _value);
void base::MemoryBase::offset_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_offset_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMemory*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_size_get (const ::GstMemory* obj) { return (gsize) obj->size; }
// gsize Memory::size (const ::GstMemory* obj);
// gsize Memory::size (const ::GstMemory* obj);
gsize base::MemoryBase::size_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GstMemory* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_get;
  auto _temp_ret = call_wrap_v ((const ::GstMemory*) (gobj_()));
  return _temp_ret;
}

static void _field_size_set (::GstMemory* obj, gsize _value) { obj->size = (decltype(obj->size)) _value; }
//  Memory::size (::GstMemory* obj, gsize _value);
// void Memory::size (::GstMemory* obj, gsize _value);
void base::MemoryBase::size_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_size_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GstMemory*) (gobj_()), (gsize) (_value_to_c));
}

// GstMemory* gst_memory_new_wrapped (GstMemoryFlags flags, gpointer data, gsize maxsize, gsize offset, gsize size, gpointer user_data, GDestroyNotify notify);
// ::GstMemory* gst_memory_new_wrapped (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
Gst::Memory base::MemoryBase::new_wrapped (Gst::MemoryFlags flags, guint8 * data, gsize maxsize, gsize offset, gsize size, GLib::DestroyNotify notify) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_new_wrapped;
  auto notify_wrap_ = notify ? unwrap (std::move (notify), gi::scope_async) : nullptr;
  auto offset_to_c = offset;
  auto maxsize_to_c = maxsize;
  auto data_i = detail::make_list_unwrap_range (data, size, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::GstMemoryFlags) (flags_to_c), (guint8*) (data_to_c), (gsize) (maxsize_to_c), (gsize) (offset_to_c), (gsize) (data_w.size()), (void*) (notify_wrap_), (GLib::DestroyNotify::cfunction_type) (notify_wrap_ ? &notify_wrap_->wrapper : nullptr));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstMemory* gst_memory_copy (GstMemory* mem, gssize offset, gssize size);
// ::GstMemory* gst_memory_copy (::GstMemory* mem, gssize offset, gssize size);
Gst::Memory base::MemoryBase::copy (gssize offset, gssize size) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstMemory* mem, gssize offset, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_copy;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (gssize) (offset_to_c), (gssize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize gst_memory_get_sizes (GstMemory* mem, gsize* offset, gsize* maxsize);
// gsize gst_memory_get_sizes (::GstMemory* mem, gsize* offset, gsize* maxsize);
gsize base::MemoryBase::get_sizes (gsize * offset, gsize * maxsize) noexcept
{
  typedef gsize (*call_wrap_t) (::GstMemory* mem, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_get_sizes;
  gsize maxsize_o {};
  gsize offset_o {};
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (gsize*) (offset ? &offset_o : nullptr), (gsize*) (maxsize ? &maxsize_o : nullptr));
  if (maxsize) *maxsize = maxsize_o;
  if (offset) *offset = offset_o;
  return _temp_ret;
}
std::tuple<gsize, gsize, gsize> base::MemoryBase::get_sizes () noexcept
{
  typedef gsize (*call_wrap_t) (::GstMemory* mem, gsize* offset, gsize* maxsize);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_get_sizes;
  gsize maxsize_o {};
  gsize offset_o {};
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (gsize*) (&offset_o), (gsize*) (&maxsize_o));
  return std::make_tuple (_temp_ret, offset_o, maxsize_o);
}

// void gst_memory_init (GstMemory* mem, GstMemoryFlags flags, GstAllocator* allocator, GstMemory* parent, gsize maxsize, gsize align, gsize offset, gsize size);
// void gst_memory_init (::GstMemory* mem, ::GstMemoryFlags flags, ::GstAllocator* allocator, ::GstMemory* parent, gsize maxsize, gsize align, gsize offset, gsize size);
void base::MemoryBase::init (Gst::MemoryFlags flags, Gst::Allocator allocator, Gst::Memory parent, gsize maxsize, gsize align, gsize offset, gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* mem, ::GstMemoryFlags flags, ::GstAllocator* allocator, ::GstMemory* parent, gsize maxsize, gsize align, gsize offset, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_init;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto align_to_c = align;
  auto maxsize_to_c = maxsize;
  auto parent_to_c = gi::unwrap (parent, gi::transfer_none, gi::direction_in);
  auto allocator_to_c = gi::unwrap (allocator, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  call_wrap_v ((::GstMemory*) (gobj_()), (::GstMemoryFlags) (flags_to_c), (::GstAllocator*) (allocator_to_c), (::GstMemory*) (parent_to_c), (gsize) (maxsize_to_c), (gsize) (align_to_c), (gsize) (offset_to_c), (gsize) (size_to_c));
}

// gboolean gst_memory_is_span (GstMemory* mem1, GstMemory* mem2, gsize* offset);
// gboolean gst_memory_is_span (::GstMemory* mem1, ::GstMemory* mem2, gsize* offset);
bool base::MemoryBase::is_span (Gst::Memory mem2, gsize & offset) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMemory* mem1, ::GstMemory* mem2, gsize* offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_is_span;
  gsize offset_o {};
  auto mem2_to_c = gi::unwrap (mem2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMemory*) (mem2_to_c), (gsize*) (&offset_o));
  offset = offset_o;
  return _temp_ret;
}
std::tuple<bool, gsize> base::MemoryBase::is_span (Gst::Memory mem2) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMemory* mem1, ::GstMemory* mem2, gsize* offset);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_is_span;
  gsize offset_o {};
  auto mem2_to_c = gi::unwrap (mem2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMemory*) (mem2_to_c), (gsize*) (&offset_o));
  return std::make_tuple (_temp_ret, offset_o);
}

// gboolean gst_memory_is_type (GstMemory* mem, const gchar* mem_type);
// gboolean gst_memory_is_type (::GstMemory* mem, const char* mem_type);
bool base::MemoryBase::is_type (const std::string & mem_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMemory* mem, const char* mem_type);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_is_type;
  auto mem_type_to_c = gi::unwrap (mem_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (const char*) (mem_type_to_c));
  return _temp_ret;
}

// GstMemory* gst_memory_make_mapped (GstMemory* mem, GstMapInfo* info, GstMapFlags flags);
// ::GstMemory* gst_memory_make_mapped (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
Gst::Memory base::MemoryBase::make_mapped (Gst::MapInfo & info, Gst::MapFlags flags) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_make_mapped;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  info = gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<Gst::Memory, Gst::MapInfo> base::MemoryBase::make_mapped (Gst::MapFlags flags) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_make_mapped;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out));
}

// gboolean gst_memory_map (GstMemory* mem, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_memory_map (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
bool base::MemoryBase::map (Gst::MapInfo & info, Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_map;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  info = gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, Gst::MapInfo> base::MemoryBase::map (Gst::MapFlags flags) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_map;
  auto flags_to_c = gi::unwrap (flags);
  traits::unset_wrapper<::GstMapInfo>::type info_c;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (::GstMapInfo*) ((::GstMapInfo*) &info_c), (::GstMapFlags) (flags_to_c));
  return std::make_tuple (_temp_ret, gi::wrap ((::GstMapInfo*) &info_c, gi::transfer_none, gi::direction_out));
}

// void gst_memory_resize (GstMemory* mem, gssize offset, gsize size);
// void gst_memory_resize (::GstMemory* mem, gssize offset, gsize size);
void base::MemoryBase::resize (gssize offset, gsize size) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* mem, gssize offset, gsize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_resize;
  auto size_to_c = size;
  auto offset_to_c = offset;
  call_wrap_v ((::GstMemory*) (gobj_()), (gssize) (offset_to_c), (gsize) (size_to_c));
}

// GstMemory* gst_memory_share (GstMemory* mem, gssize offset, gssize size);
// ::GstMemory* gst_memory_share (::GstMemory* mem, gssize offset, gssize size);
Gst::Memory base::MemoryBase::share (gssize offset, gssize size) noexcept
{
  typedef ::GstMemory* (*call_wrap_t) (::GstMemory* mem, gssize offset, gssize size);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_share;
  auto size_to_c = size;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::GstMemory*) (gobj_()), (gssize) (offset_to_c), (gssize) (size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void gst_memory_unmap (GstMemory* mem, GstMapInfo* info);
// void gst_memory_unmap (::GstMemory* mem, ::GstMapInfo* info);
void base::MemoryBase::unmap (Gst::MapInfo info) noexcept
{
  typedef void (*call_wrap_t) (::GstMemory* mem, ::GstMapInfo* info);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_memory_unmap;
  auto info_to_c = gi::unwrap (info, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GstMemory*) (gobj_()), (::GstMapInfo*) (info_to_c));
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/memory_extra_def_impl.hpp>)
#include <gst/memory_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/memory_extra_impl.hpp>)
#include <gst/memory_extra_impl.hpp>
#endif
#endif

#endif
