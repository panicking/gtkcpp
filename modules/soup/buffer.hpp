// AUTO-GENERATED

#ifndef _GI_SOUP_BUFFER_HPP_
#define _GI_SOUP_BUFFER_HPP_


namespace gi {

namespace repository {

namespace Soup {


class Buffer;

namespace base {


#define GI_SOUP_BUFFER_BASE base::BufferBase
class BufferBase : public gi::detail::GBoxedWrapper<BufferBase, ::SoupBuffer>
{
typedef gi::detail::GBoxedWrapper<BufferBase, ::SoupBuffer> super_type;
public:

BufferBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_buffer_get_type(); } 

// void* Buffer::data (const ::SoupBuffer* obj);
// void* Buffer::data (const ::SoupBuffer* obj);
GI_INLINE_DECL gpointer data_ () const noexcept;

//  Buffer::data (::SoupBuffer* obj, void* _value);
// void Buffer::data (::SoupBuffer* obj, void* _value);
GI_INLINE_DECL void data_ (void* _value) noexcept;

// gsize Buffer::length (const ::SoupBuffer* obj);
// gsize Buffer::length (const ::SoupBuffer* obj);
GI_INLINE_DECL gsize length_ () const noexcept;

//  Buffer::length (::SoupBuffer* obj, gsize _value);
// void Buffer::length (::SoupBuffer* obj, gsize _value);
GI_INLINE_DECL void length_ (gsize _value) noexcept;

// SoupBuffer* soup_buffer_new (SoupMemoryUse use, gconstpointer data, gsize length);
// ::SoupBuffer* soup_buffer_new (::SoupMemoryUse use, const guint8* data, gsize length);
static GI_INLINE_DECL Soup::Buffer new_ (Soup::MemoryUse use, guint8 * data, gsize length) noexcept;

// SoupBuffer* soup_buffer_new_take (guchar* data, gsize length);
// ::SoupBuffer* soup_buffer_new_take (guint8* data, gsize length);
static GI_INLINE_DECL Soup::Buffer new_ (guint8 * data, gsize length) noexcept;

// SoupBuffer* soup_buffer_new_with_owner (gconstpointer data, gsize length, gpointer owner, GDestroyNotify owner_dnotify);
// ::SoupBuffer* soup_buffer_new_with_owner (const guint8* data, gsize length, void* owner, GLib::DestroyNotify::cfunction_type owner_dnotify);
// SKIP; callback misses closure info

// SoupBuffer* soup_buffer_copy (SoupBuffer* buffer);
// ::SoupBuffer* soup_buffer_copy (::SoupBuffer* buffer);
GI_INLINE_DECL Soup::Buffer copy () noexcept;

// void soup_buffer_free (SoupBuffer* buffer);
// void soup_buffer_free (::SoupBuffer* buffer);
// IGNORE; marked ignore

// GBytes* soup_buffer_get_as_bytes (SoupBuffer* buffer);
// ::GBytes* soup_buffer_get_as_bytes (::SoupBuffer* buffer);
GI_INLINE_DECL GLib::Bytes get_as_bytes () noexcept;

// void soup_buffer_get_data (SoupBuffer* buffer, const guint8** data, gsize* length);
// void soup_buffer_get_data (::SoupBuffer* buffer, const guint8** data, gsize* length);
GI_INLINE_DECL void get_data (std::vector<guint8> & data) noexcept;

// gpointer soup_buffer_get_owner (SoupBuffer* buffer);
// void* soup_buffer_get_owner (::SoupBuffer* buffer);
GI_INLINE_DECL gpointer get_owner () noexcept;

// SoupBuffer* soup_buffer_new_subbuffer (SoupBuffer* parent, gsize offset, gsize length);
// ::SoupBuffer* soup_buffer_new_subbuffer (::SoupBuffer* parent, gsize offset, gsize length);
GI_INLINE_DECL Soup::Buffer new_subbuffer (gsize offset, gsize length) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/buffer_extra_def.hpp>)
#include <soup/buffer_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/buffer_extra.hpp>)
#include <soup/buffer_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Buffer : public GI_SOUP_BUFFER_BASE
{ typedef GI_SOUP_BUFFER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupBuffer>
{ typedef Soup::Buffer type; }; 

} // namespace repository

} // namespace gi

#endif
