// AUTO-GENERATED

#ifndef _GI_GST_BUFFER_HPP_
#define _GI_GST_BUFFER_HPP_


namespace gi {

namespace repository {

namespace Gst {

class AllocationParams;
class Allocator;
class BufferPool;
class Caps;
class CustomMeta;
class MapInfo;
class Memory;
class Meta;
class MetaInfo;
class ParentBufferMeta;
class ProtectionMeta;
class ReferenceTimestampMeta;
class Structure;

class Buffer;

namespace base {


#define GI_GST_BUFFER_BASE base::BufferBase
class BufferBase : public gi::detail::GBoxedWrapper<BufferBase, ::GstBuffer>
{
typedef gi::detail::GBoxedWrapper<BufferBase, ::GstBuffer> super_type;
public:

BufferBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_buffer_get_type(); } 

// ::GstBufferPool* Buffer::pool (const ::GstBuffer* obj);
// ::GstBufferPool* Buffer::pool (const ::GstBuffer* obj);
GI_INLINE_DECL Gst::BufferPool pool_ () const noexcept;

// ::GstClockTime Buffer::pts (const ::GstBuffer* obj);
// ::GstClockTime Buffer::pts (const ::GstBuffer* obj);
GI_INLINE_DECL Gst::ClockTime pts_ () const noexcept;

//  Buffer::pts (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::pts (::GstBuffer* obj, ::GstClockTime _value);
GI_INLINE_DECL void pts_ (::GstClockTime _value) noexcept;

// ::GstClockTime Buffer::dts (const ::GstBuffer* obj);
// ::GstClockTime Buffer::dts (const ::GstBuffer* obj);
GI_INLINE_DECL Gst::ClockTime dts_ () const noexcept;

//  Buffer::dts (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::dts (::GstBuffer* obj, ::GstClockTime _value);
GI_INLINE_DECL void dts_ (::GstClockTime _value) noexcept;

// ::GstClockTime Buffer::duration (const ::GstBuffer* obj);
// ::GstClockTime Buffer::duration (const ::GstBuffer* obj);
GI_INLINE_DECL Gst::ClockTime duration_ () const noexcept;

//  Buffer::duration (::GstBuffer* obj, ::GstClockTime _value);
// void Buffer::duration (::GstBuffer* obj, ::GstClockTime _value);
GI_INLINE_DECL void duration_ (::GstClockTime _value) noexcept;

// guint64 Buffer::offset (const ::GstBuffer* obj);
// guint64 Buffer::offset (const ::GstBuffer* obj);
GI_INLINE_DECL guint64 offset_ () const noexcept;

//  Buffer::offset (::GstBuffer* obj, guint64 _value);
// void Buffer::offset (::GstBuffer* obj, guint64 _value);
GI_INLINE_DECL void offset_ (guint64 _value) noexcept;

// guint64 Buffer::offset_end (const ::GstBuffer* obj);
// guint64 Buffer::offset_end (const ::GstBuffer* obj);
GI_INLINE_DECL guint64 offset_end_ () const noexcept;

//  Buffer::offset_end (::GstBuffer* obj, guint64 _value);
// void Buffer::offset_end (::GstBuffer* obj, guint64 _value);
GI_INLINE_DECL void offset_end_ (guint64 _value) noexcept;

// GstBuffer* gst_buffer_new ();
// ::GstBuffer* gst_buffer_new ();
static GI_INLINE_DECL Gst::Buffer new_ () noexcept;

// GstBuffer* gst_buffer_new_allocate (GstAllocator* allocator, gsize size, GstAllocationParams* params);
// ::GstBuffer* gst_buffer_new_allocate (::GstAllocator* allocator, gsize size, ::GstAllocationParams* params);
static GI_INLINE_DECL Gst::Buffer new_allocate (Gst::Allocator allocator, gsize size, Gst::AllocationParams params) noexcept;
static GI_INLINE_DECL Gst::Buffer new_allocate (gsize size) noexcept;

// GstBuffer* gst_buffer_new_memdup (gconstpointer data, gsize size);
// ::GstBuffer* gst_buffer_new_memdup (const guint8* data, gsize size);
static GI_INLINE_DECL Gst::Buffer new_memdup (guint8 * data, gsize size) noexcept;

// GstBuffer* gst_buffer_new_wrapped (gpointer data, gsize size);
// ::GstBuffer* gst_buffer_new_wrapped (guint8* data, gsize size);
static GI_INLINE_DECL Gst::Buffer new_wrapped (guint8 * data, gsize size) noexcept;

// GstBuffer* gst_buffer_new_wrapped_bytes (GBytes* bytes);
// ::GstBuffer* gst_buffer_new_wrapped_bytes (::GBytes* bytes);
static GI_INLINE_DECL Gst::Buffer new_wrapped_bytes (GLib::Bytes bytes) noexcept;

// GstBuffer* gst_buffer_new_wrapped_full (GstMemoryFlags flags, gpointer data, gsize maxsize, gsize offset, gsize size, gpointer user_data, GDestroyNotify notify);
// ::GstBuffer* gst_buffer_new_wrapped_full (::GstMemoryFlags flags, guint8* data, gsize maxsize, gsize offset, gsize size, void* user_data, GLib::DestroyNotify::cfunction_type notify);
static GI_INLINE_DECL Gst::Buffer new_wrapped_full (Gst::MemoryFlags flags, guint8 * data, gsize maxsize, gsize offset, gsize size, GLib::DestroyNotify notify = nullptr) noexcept;

// GstCustomMeta* gst_buffer_add_custom_meta (GstBuffer* buffer, const gchar* name);
// ::GstCustomMeta* gst_buffer_add_custom_meta (::GstBuffer* buffer, const char* name);
GI_INLINE_DECL Gst::CustomMeta add_custom_meta (const std::string & name) noexcept;

// GstMeta* gst_buffer_add_meta (GstBuffer* buffer, const GstMetaInfo* info, gpointer params);
// ::GstMeta* gst_buffer_add_meta (::GstBuffer* buffer, const ::GstMetaInfo* info, void* params);
GI_INLINE_DECL Gst::Meta add_meta (const Gst::MetaInfo & info, void* params) noexcept;

// GstParentBufferMeta* gst_buffer_add_parent_buffer_meta (GstBuffer* buffer, GstBuffer* ref);
// ::GstParentBufferMeta* gst_buffer_add_parent_buffer_meta (::GstBuffer* buffer, ::GstBuffer* ref);
GI_INLINE_DECL Gst::ParentBufferMeta add_parent_buffer_meta (Gst::Buffer ref) noexcept;

// GstProtectionMeta* gst_buffer_add_protection_meta (GstBuffer* buffer, GstStructure* info);
// ::GstProtectionMeta* gst_buffer_add_protection_meta (::GstBuffer* buffer, ::GstStructure* info);
GI_INLINE_DECL Gst::ProtectionMeta add_protection_meta (Gst::Structure info) noexcept;

// GstReferenceTimestampMeta* gst_buffer_add_reference_timestamp_meta (GstBuffer* buffer, GstCaps* reference, GstClockTime timestamp, GstClockTime duration);
// ::GstReferenceTimestampMeta* gst_buffer_add_reference_timestamp_meta (::GstBuffer* buffer, ::GstCaps* reference, ::GstClockTime timestamp, ::GstClockTime duration);
GI_INLINE_DECL Gst::ReferenceTimestampMeta add_reference_timestamp_meta (Gst::Caps reference, ::GstClockTime timestamp, ::GstClockTime duration) noexcept;

// GstBuffer* gst_buffer_append (GstBuffer* buf1, GstBuffer* buf2);
// ::GstBuffer* gst_buffer_append (::GstBuffer* buf1, ::GstBuffer* buf2);
GI_INLINE_DECL Gst::Buffer append (Gst::Buffer buf2) noexcept;

// void gst_buffer_append_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_append_memory (::GstBuffer* buffer, ::GstMemory* mem);
GI_INLINE_DECL void append_memory (Gst::Memory mem) noexcept;

// GstBuffer* gst_buffer_append_region (GstBuffer* buf1, GstBuffer* buf2, gssize offset, gssize size);
// ::GstBuffer* gst_buffer_append_region (::GstBuffer* buf1, ::GstBuffer* buf2, gssize offset, gssize size);
GI_INLINE_DECL Gst::Buffer append_region (Gst::Buffer buf2, gssize offset, gssize size) noexcept;

// GstBuffer* gst_buffer_copy_deep (const GstBuffer* buf);
// ::GstBuffer* gst_buffer_copy_deep (const ::GstBuffer* buf);
GI_INLINE_DECL Gst::Buffer copy_deep () const noexcept;

// gboolean gst_buffer_copy_into (GstBuffer* dest, GstBuffer* src, GstBufferCopyFlags flags, gsize offset, gsize size);
// gboolean gst_buffer_copy_into (::GstBuffer* dest, ::GstBuffer* src, ::GstBufferCopyFlags flags, gsize offset, gsize size);
GI_INLINE_DECL bool copy_into (Gst::Buffer src, Gst::BufferCopyFlags flags, gsize offset, gsize size) noexcept;

// GstBuffer* gst_buffer_copy_region (GstBuffer* parent, GstBufferCopyFlags flags, gsize offset, gsize size);
// ::GstBuffer* gst_buffer_copy_region (::GstBuffer* parent, ::GstBufferCopyFlags flags, gsize offset, gsize size);
GI_INLINE_DECL Gst::Buffer copy_region (Gst::BufferCopyFlags flags, gsize offset, gsize size) noexcept;

// gsize gst_buffer_extract (GstBuffer* buffer, gsize offset, gpointer dest, gsize size);
// gsize gst_buffer_extract (::GstBuffer* buffer, gsize offset, guint8* dest, gsize size);
GI_INLINE_DECL gsize extract (gsize offset, guint8 * dest, gsize size) noexcept;

// void gst_buffer_extract_dup (GstBuffer* buffer, gsize offset, gsize size, gpointer* dest, gsize* dest_size);
// void gst_buffer_extract_dup (::GstBuffer* buffer, gsize offset, gsize size, guint8** dest, gsize* dest_size);
GI_INLINE_DECL void extract_dup (gsize offset, gsize size, std::vector<guint8> & dest) noexcept;

// gsize gst_buffer_fill (GstBuffer* buffer, gsize offset, gconstpointer src, gsize size);
// gsize gst_buffer_fill (::GstBuffer* buffer, gsize offset, const guint8* src, gsize size);
GI_INLINE_DECL gsize fill (gsize offset, guint8 * src, gsize size) noexcept;

// gboolean gst_buffer_find_memory (GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
// gboolean gst_buffer_find_memory (::GstBuffer* buffer, gsize offset, gsize size, guint* idx, guint* length, gsize* skip);
GI_INLINE_DECL bool find_memory (gsize offset, gsize size, guint & idx, guint & length, gsize & skip) noexcept;
GI_INLINE_DECL std::tuple<bool, guint, guint, gsize> find_memory (gsize offset, gsize size) noexcept;

// gboolean gst_buffer_foreach_meta (GstBuffer* buffer, GstBufferForeachMetaFunc func, gpointer user_data);
// gboolean gst_buffer_foreach_meta (::GstBuffer* buffer,  func, void* user_data);
// SKIP; func type  not supported

// GstMemory* gst_buffer_get_all_memory (GstBuffer* buffer);
// ::GstMemory* gst_buffer_get_all_memory (::GstBuffer* buffer);
GI_INLINE_DECL Gst::Memory get_all_memory () noexcept;

// GstCustomMeta* gst_buffer_get_custom_meta (GstBuffer* buffer, const gchar* name);
// ::GstCustomMeta* gst_buffer_get_custom_meta (::GstBuffer* buffer, const char* name);
GI_INLINE_DECL Gst::CustomMeta get_custom_meta (const std::string & name) noexcept;

// GstBufferFlags gst_buffer_get_flags (GstBuffer* buffer);
// ::GstBufferFlags gst_buffer_get_flags (::GstBuffer* buffer);
GI_INLINE_DECL Gst::BufferFlags get_flags () noexcept;

// GstMemory* gst_buffer_get_memory (GstBuffer* buffer, guint idx);
// ::GstMemory* gst_buffer_get_memory (::GstBuffer* buffer, guint idx);
GI_INLINE_DECL Gst::Memory get_memory (guint idx) noexcept;

// GstMemory* gst_buffer_get_memory_range (GstBuffer* buffer, guint idx, gint length);
// ::GstMemory* gst_buffer_get_memory_range (::GstBuffer* buffer, guint idx, gint length);
GI_INLINE_DECL Gst::Memory get_memory_range (guint idx, gint length) noexcept;

// GstMeta* gst_buffer_get_meta (GstBuffer* buffer, GType api);
// ::GstMeta* gst_buffer_get_meta (::GstBuffer* buffer, GType api);
GI_INLINE_DECL Gst::Meta get_meta (GType api) noexcept;

// guint gst_buffer_get_n_meta (GstBuffer* buffer, GType api_type);
// guint gst_buffer_get_n_meta (::GstBuffer* buffer, GType api_type);
GI_INLINE_DECL guint get_n_meta (GType api_type) noexcept;

// GstReferenceTimestampMeta* gst_buffer_get_reference_timestamp_meta (GstBuffer* buffer, GstCaps* reference);
// ::GstReferenceTimestampMeta* gst_buffer_get_reference_timestamp_meta (::GstBuffer* buffer, ::GstCaps* reference);
GI_INLINE_DECL Gst::ReferenceTimestampMeta get_reference_timestamp_meta (Gst::Caps reference) noexcept;
GI_INLINE_DECL Gst::ReferenceTimestampMeta get_reference_timestamp_meta () noexcept;

// gsize gst_buffer_get_size (GstBuffer* buffer);
// gsize gst_buffer_get_size (::GstBuffer* buffer);
GI_INLINE_DECL gsize get_size () noexcept;

// gsize gst_buffer_get_sizes (GstBuffer* buffer, gsize* offset, gsize* maxsize);
// gsize gst_buffer_get_sizes (::GstBuffer* buffer, gsize* offset, gsize* maxsize);
GI_INLINE_DECL gsize get_sizes (gsize * offset = nullptr, gsize * maxsize = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gsize, gsize, gsize> get_sizes () noexcept;

// gsize gst_buffer_get_sizes_range (GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
// gsize gst_buffer_get_sizes_range (::GstBuffer* buffer, guint idx, gint length, gsize* offset, gsize* maxsize);
GI_INLINE_DECL gsize get_sizes_range (guint idx, gint length, gsize * offset = nullptr, gsize * maxsize = nullptr) noexcept;
GI_INLINE_DECL std::tuple<gsize, gsize, gsize> get_sizes_range (guint idx, gint length) noexcept;

// gboolean gst_buffer_has_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_has_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
GI_INLINE_DECL bool has_flags (Gst::BufferFlags flags) noexcept;

// void gst_buffer_insert_memory (GstBuffer* buffer, gint idx, GstMemory* mem);
// void gst_buffer_insert_memory (::GstBuffer* buffer, gint idx, ::GstMemory* mem);
GI_INLINE_DECL void insert_memory (gint idx, Gst::Memory mem) noexcept;

// gboolean gst_buffer_is_all_memory_writable (GstBuffer* buffer);
// gboolean gst_buffer_is_all_memory_writable (::GstBuffer* buffer);
GI_INLINE_DECL bool is_all_memory_writable () noexcept;

// gboolean gst_buffer_is_memory_range_writable (GstBuffer* buffer, guint idx, gint length);
// gboolean gst_buffer_is_memory_range_writable (::GstBuffer* buffer, guint idx, gint length);
GI_INLINE_DECL bool is_memory_range_writable (guint idx, gint length) noexcept;

// GstMeta* gst_buffer_iterate_meta (GstBuffer* buffer, gpointer* state);
// ::GstMeta* gst_buffer_iterate_meta (::GstBuffer* buffer, void* state);
// IGNORE; not introspectable, inconsistent out state pointer depth (2 vs 1)

// GstMeta* gst_buffer_iterate_meta_filtered (GstBuffer* buffer, gpointer* state, GType meta_api_type);
// ::GstMeta* gst_buffer_iterate_meta_filtered (::GstBuffer* buffer, void* state, GType meta_api_type);
// IGNORE; not introspectable, inconsistent out state pointer depth (2 vs 1)

// gboolean gst_buffer_map (GstBuffer* buffer, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_buffer_map (::GstBuffer* buffer, ::GstMapInfo* info, ::GstMapFlags flags);
GI_INLINE_DECL bool map (Gst::MapInfo & info, Gst::MapFlags flags) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::MapInfo> map (Gst::MapFlags flags) noexcept;

// gboolean gst_buffer_map_range (GstBuffer* buffer, guint idx, gint length, GstMapInfo* info, GstMapFlags flags);
// gboolean gst_buffer_map_range (::GstBuffer* buffer, guint idx, gint length, ::GstMapInfo* info, ::GstMapFlags flags);
GI_INLINE_DECL bool map_range (guint idx, gint length, Gst::MapInfo & info, Gst::MapFlags flags) noexcept;
GI_INLINE_DECL std::tuple<bool, Gst::MapInfo> map_range (guint idx, gint length, Gst::MapFlags flags) noexcept;

// gint gst_buffer_memcmp (GstBuffer* buffer, gsize offset, gconstpointer mem, gsize size);
// gint gst_buffer_memcmp (::GstBuffer* buffer, gsize offset, const guint8* mem, gsize size);
GI_INLINE_DECL gint memcmp (gsize offset, guint8 * mem, gsize size) noexcept;

// gsize gst_buffer_memset (GstBuffer* buffer, gsize offset, guint8 val, gsize size);
// gsize gst_buffer_memset (::GstBuffer* buffer, gsize offset, guint8 val, gsize size);
GI_INLINE_DECL gsize memset (gsize offset, guint8 val, gsize size) noexcept;

// guint gst_buffer_n_memory (GstBuffer* buffer);
// guint gst_buffer_n_memory (::GstBuffer* buffer);
GI_INLINE_DECL guint n_memory () noexcept;

// GstMemory* gst_buffer_peek_memory (GstBuffer* buffer, guint idx);
// ::GstMemory* gst_buffer_peek_memory (::GstBuffer* buffer, guint idx);
GI_INLINE_DECL Gst::Memory peek_memory (guint idx) noexcept;

// void gst_buffer_prepend_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_prepend_memory (::GstBuffer* buffer, ::GstMemory* mem);
GI_INLINE_DECL void prepend_memory (Gst::Memory mem) noexcept;

// void gst_buffer_remove_all_memory (GstBuffer* buffer);
// void gst_buffer_remove_all_memory (::GstBuffer* buffer);
GI_INLINE_DECL void remove_all_memory () noexcept;

// void gst_buffer_remove_memory (GstBuffer* buffer, guint idx);
// void gst_buffer_remove_memory (::GstBuffer* buffer, guint idx);
GI_INLINE_DECL void remove_memory (guint idx) noexcept;

// void gst_buffer_remove_memory_range (GstBuffer* buffer, guint idx, gint length);
// void gst_buffer_remove_memory_range (::GstBuffer* buffer, guint idx, gint length);
GI_INLINE_DECL void remove_memory_range (guint idx, gint length) noexcept;

// gboolean gst_buffer_remove_meta (GstBuffer* buffer, GstMeta* meta);
// gboolean gst_buffer_remove_meta (::GstBuffer* buffer, ::GstMeta* meta);
GI_INLINE_DECL bool remove_meta (Gst::Meta meta) noexcept;

// void gst_buffer_replace_all_memory (GstBuffer* buffer, GstMemory* mem);
// void gst_buffer_replace_all_memory (::GstBuffer* buffer, ::GstMemory* mem);
GI_INLINE_DECL void replace_all_memory (Gst::Memory mem) noexcept;

// void gst_buffer_replace_memory (GstBuffer* buffer, guint idx, GstMemory* mem);
// void gst_buffer_replace_memory (::GstBuffer* buffer, guint idx, ::GstMemory* mem);
GI_INLINE_DECL void replace_memory (guint idx, Gst::Memory mem) noexcept;

// void gst_buffer_replace_memory_range (GstBuffer* buffer, guint idx, gint length, GstMemory* mem);
// void gst_buffer_replace_memory_range (::GstBuffer* buffer, guint idx, gint length, ::GstMemory* mem);
GI_INLINE_DECL void replace_memory_range (guint idx, gint length, Gst::Memory mem) noexcept;

// void gst_buffer_resize (GstBuffer* buffer, gssize offset, gssize size);
// void gst_buffer_resize (::GstBuffer* buffer, gssize offset, gssize size);
GI_INLINE_DECL void resize (gssize offset, gssize size) noexcept;

// gboolean gst_buffer_resize_range (GstBuffer* buffer, guint idx, gint length, gssize offset, gssize size);
// gboolean gst_buffer_resize_range (::GstBuffer* buffer, guint idx, gint length, gssize offset, gssize size);
GI_INLINE_DECL bool resize_range (guint idx, gint length, gssize offset, gssize size) noexcept;

// gboolean gst_buffer_set_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_set_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
GI_INLINE_DECL bool set_flags (Gst::BufferFlags flags) noexcept;

// void gst_buffer_set_size (GstBuffer* buffer, gssize size);
// void gst_buffer_set_size (::GstBuffer* buffer, gssize size);
GI_INLINE_DECL void set_size (gssize size) noexcept;

// void gst_buffer_unmap (GstBuffer* buffer, GstMapInfo* info);
// void gst_buffer_unmap (::GstBuffer* buffer, ::GstMapInfo* info);
GI_INLINE_DECL void unmap (Gst::MapInfo info) noexcept;

// gboolean gst_buffer_unset_flags (GstBuffer* buffer, GstBufferFlags flags);
// gboolean gst_buffer_unset_flags (::GstBuffer* buffer, ::GstBufferFlags flags);
GI_INLINE_DECL bool unset_flags (Gst::BufferFlags flags) noexcept;

// guint gst_buffer_get_max_memory ();
// guint gst_buffer_get_max_memory ();
static GI_INLINE_DECL guint get_max_memory () noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/buffer_extra_def.hpp>)
#include <gst/buffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/buffer_extra.hpp>)
#include <gst/buffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class Buffer : public GI_GST_BUFFER_BASE
{ typedef GI_GST_BUFFER_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBuffer>
{ typedef Gst::Buffer type; }; 

} // namespace repository

} // namespace gi

#endif
