// AUTO-GENERATED

#ifndef _GI_GST_MEMORY_HPP_
#define _GI_GST_MEMORY_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Allocator;
class MapInfo;

class Memory;

namespace base {


#define GI_GST_MEMORY_BASE base::MemoryBase
class MemoryBase : public gi::detail::GBoxedWrapper<MemoryBase, ::GstMemory>
{
typedef gi::detail::GBoxedWrapper<MemoryBase, ::GstMemory> super_type;
public:

MemoryBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_memory_get_type(); } 

// ::GstAllocator* Memory::allocator (const ::GstMemory* obj);
// ::GstAllocator* Memory::allocator (const ::GstMemory* obj);
GI_INLINE_DECL Gst::Allocator allocator_ () const noexcept;

// ::GstMemory* Memory::parent (const ::GstMemory* obj);
// ::GstMemory* Memory::parent (const ::GstMemory* obj);
GI_INLINE_DECL Gst::Memory parent_ () const noexcept;

// gsize Memory::maxsize (const ::GstMemory* obj);
// gsize Memory::maxsize (const ::GstMemory* obj);
GI_INLINE_DECL gsize maxsize_ () const noexcept;

//  Memory::maxsize (::GstMemory* obj, gsize _value);
// void Memory::maxsize (::GstMemory* obj, gsize _value);
GI_INLINE_DECL void maxsize_ (gsize _value) noexcept;

// gsize Memory::align (const ::GstMemory* obj);
// gsize Memory::align (const ::GstMemory* obj);
GI_INLINE_DECL gsize align_ () const noexcept;

//  Memory::align (::GstMemory* obj, gsize _value);
// void Memory::align (::GstMemory* obj, gsize _value);
GI_INLINE_DECL void align_ (gsize _value) noexcept;

// gsize Memory::offset (const ::GstMemory* obj);
// gsize Memory::offset (const ::GstMemory* obj);
GI_INLINE_DECL gsize offset_ () const noexcept;

//  Memory::offset (::GstMemory* obj, gsize _value);
// void Memory::offset (::GstMemory* obj, gsize _value);
GI_INLINE_DECL void offset_ (gsize _value) noexcept;

// gsize Memory::size (const ::GstMemory* obj);
// gsize Memory::size (const ::GstMemory* obj);
GI_INLINE_DECL gsize size_ () const noexcept;

//  Memory::size (::GstMemory* obj, gsize _value);
// void Memory::size (::GstMemory* obj, gsize _value);
GI_INLINE_DECL void size_ (gsize _value) noexcept;

// GstMemory* gst_memory_new_wrapped (GstMemoryFlags flags, gpointer data, gsize maxsize, gsize offset, gsize size, gpointer user_data, GDestroyNotify notify);
// ::GstMemory* gst_memory_new_wrapped (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
static GI_INLINE_DECL Gst::Memory new_wrapped (Gst::MemoryFlags flags, guint8 * data, gsize maxsize, gsize offset, gsize size, GLib::DestroyNotify notify = nullptr) noexcept;

// GstMemory* gst_memory_copy (GstMemory* mem, gssize offset, gssize size);
// ::GstMemory* gst_memory_copy (::GstMemory* mem, gssize offset, gssize size);
GI_INLINE_DECL Gst::Memory copy (gssize offset, gssize size) noexcept;

// gsize gst_memory_get_sizes (GstMemory* mem, gsize* offset, gsize* maxsize);
// gsize gst_memory_get_sizes (::GstMemory* mem, gsize* offset, gsize* maxsize);
GI_INLINE_DECL gsize get_sizes (gsize * offset = nullptr, gsize * maxsize = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gsize, gsize, gsize> get_sizes () noexcept;

// void gst_memory_init (GstMemory* mem, GstMemoryFlags flags, GstAllocator* allocator, GstMemory* parent, gsize maxsize, gsize align, gsize offset, gsize size);
// void gst_memory_init (::GstMemory* mem, ::GstMemoryFlags flags, ::GstAllocator* allocator, ::GstMemory* parent, gsize maxsize, gsize align, gsize offset, gsize size);
GI_INLINE_DECL void init (Gst::MemoryFlags flags, Gst::Allocator allocator, Gst::Memory parent, gsize maxsize, gsize align, gsize offset, gsize size) noexcept;

// gboolean gst_memory_is_span (GstMemory* mem1, GstMemory* mem2, gsize* offset);
// gboolean gst_memory_is_span (::GstMemory* mem1, ::GstMemory* mem2, gsize* offset);
GI_INLINE_DECL bool is_span (Gst::Memory mem2, gsize & offset) noexcept;
GI_INLINE_DECL std::tuple<bool, gsize> is_span (Gst::Memory mem2) noexcept;

// gboolean gst_memory_is_type (GstMemory* mem, const gchar* mem_type);
// gboolean gst_memory_is_type (::GstMemory* mem, const char* mem_type);
GI_INLINE_DECL bool is_type (const std::string & mem_type) noexcept;

// GstMemory* gst_memory_make_mapped (GstMemory* mem, GstMapInfo* info, GstMapFlags flags);
// ::GstMemory* gst_memory_make_mapped (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
GI_INLINE_DECL Gst::Memory make_mapped (Gst::MapInfo & info, Gst::MapFlags flags) noexcept;
GI_INLINE_DECL std::tuple<Gst::Memory, Gst::MapInfo> make_mapped (Gst::MapFlags flags) noexcept;

// gboolean gst_memory_map (GstMemory* mem, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_memory_map (::GstMemory* mem, ::GstMapInfo* info, ::GstMapFlags flags);
GI_INLINE_DECL bool map (Gst::MapInfo & info, Gst::MapFlags flags) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::MapInfo> map (Gst::MapFlags flags) noexcept;

// void gst_memory_resize (GstMemory* mem, gssize offset, gsize size);
// void gst_memory_resize (::GstMemory* mem, gssize offset, gsize size);
GI_INLINE_DECL void resize (gssize offset, gsize size) noexcept;

// GstMemory* gst_memory_share (GstMemory* mem, gssize offset, gssize size);
// ::GstMemory* gst_memory_share (::GstMemory* mem, gssize offset, gssize size);
GI_INLINE_DECL Gst::Memory share (gssize offset, gssize size) noexcept;

// void gst_memory_unmap (GstMemory* mem, GstMapInfo* info);
// void gst_memory_unmap (::GstMemory* mem, ::GstMapInfo* info);
GI_INLINE_DECL void unmap (Gst::MapInfo info) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/memory_extra_def.hpp>)
#include <gst/memory_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/memory_extra.hpp>)
#include <gst/memory_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Memory : public GI_GST_MEMORY_BASE
{ typedef GI_GST_MEMORY_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstMemory>
{ typedef Gst::Memory type; }; 

} // namespace repository

} // namespace gi

#endif
