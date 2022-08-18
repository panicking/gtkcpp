// AUTO-GENERATED

#ifndef _GI_GST_BUFFERLIST_HPP_
#define _GI_GST_BUFFERLIST_HPP_


namespace gi {

namespace repository {

namespace Gst {

class Buffer;

class BufferList;

namespace base {


#define GI_GST_BUFFERLIST_BASE base::BufferListBase
class BufferListBase : public gi::detail::GBoxedWrapper<BufferListBase, ::GstBufferList>
{
typedef gi::detail::GBoxedWrapper<BufferListBase, ::GstBufferList> super_type;
public:

BufferListBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gst_buffer_list_get_type(); } 

// GstBufferList* gst_buffer_list_new ();
// ::GstBufferList* gst_buffer_list_new ();
static GI_INLINE_DECL Gst::BufferList new_ () noexcept;

// GstBufferList* gst_buffer_list_new_sized (guint size);
// ::GstBufferList* gst_buffer_list_new_sized (guint size);
static GI_INLINE_DECL Gst::BufferList new_sized (guint size) noexcept;

// gsize gst_buffer_list_calculate_size (GstBufferList* list);
// gsize gst_buffer_list_calculate_size (::GstBufferList* list);
GI_INLINE_DECL gsize calculate_size () noexcept;

// GstBufferList* gst_buffer_list_copy_deep (const GstBufferList* list);
// ::GstBufferList* gst_buffer_list_copy_deep (const ::GstBufferList* list);
GI_INLINE_DECL Gst::BufferList copy_deep () const noexcept;

// gboolean gst_buffer_list_foreach (GstBufferList* list, GstBufferListFunc func, gpointer user_data);
// gboolean gst_buffer_list_foreach (::GstBufferList* list,  func, void* user_data);
// SKIP; func type  not supported

// GstBuffer* gst_buffer_list_get (GstBufferList* list, guint idx);
// ::GstBuffer* gst_buffer_list_get (::GstBufferList* list, guint idx);
GI_INLINE_DECL Gst::Buffer get (guint idx) noexcept;

// GstBuffer* gst_buffer_list_get_writable (GstBufferList* list, guint idx);
// ::GstBuffer* gst_buffer_list_get_writable (::GstBufferList* list, guint idx);
GI_INLINE_DECL Gst::Buffer get_writable (guint idx) noexcept;

// void gst_buffer_list_insert (GstBufferList* list, gint idx, GstBuffer* buffer);
// void gst_buffer_list_insert (::GstBufferList* list, gint idx, ::GstBuffer* buffer);
GI_INLINE_DECL void insert (gint idx, Gst::Buffer buffer) noexcept;

// guint gst_buffer_list_length (GstBufferList* list);
// guint gst_buffer_list_length (::GstBufferList* list);
GI_INLINE_DECL guint length () noexcept;

// void gst_buffer_list_remove (GstBufferList* list, guint idx, guint length);
// void gst_buffer_list_remove (::GstBufferList* list, guint idx, guint length);
GI_INLINE_DECL void remove (guint idx, guint length) noexcept;

}; // class

} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/bufferlist_extra_def.hpp>)
#include <gst/bufferlist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/bufferlist_extra.hpp>)
#include <gst/bufferlist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

class BufferList : public GI_GST_BUFFERLIST_BASE
{ typedef GI_GST_BUFFERLIST_BASE super_type; using super_type::super_type; };

} // namespace Gst

template<> struct declare_cpptype_of<::GstBufferList>
{ typedef Gst::BufferList type; }; 

} // namespace repository

} // namespace gi

#endif
