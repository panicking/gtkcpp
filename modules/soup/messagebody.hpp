// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEBODY_HPP_
#define _GI_SOUP_MESSAGEBODY_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Buffer;

class MessageBody;

namespace base {


#define GI_SOUP_MESSAGEBODY_BASE base::MessageBodyBase
class MessageBodyBase : public gi::detail::GBoxedWrapper<MessageBodyBase, ::SoupMessageBody>
{
typedef gi::detail::GBoxedWrapper<MessageBodyBase, ::SoupMessageBody> super_type;
public:

MessageBodyBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return soup_message_body_get_type(); } 

// const char* MessageBody::data (const ::SoupMessageBody* obj);
// const char* MessageBody::data (const ::SoupMessageBody* obj);
GI_INLINE_DECL std::string data_ () const noexcept;

// gint64 MessageBody::length (const ::SoupMessageBody* obj);
// gint64 MessageBody::length (const ::SoupMessageBody* obj);
GI_INLINE_DECL gint64 length_ () const noexcept;

//  MessageBody::length (::SoupMessageBody* obj, gint64 _value);
// void MessageBody::length (::SoupMessageBody* obj, gint64 _value);
GI_INLINE_DECL void length_ (gint64 _value) noexcept;

// SoupMessageBody* soup_message_body_new ();
// ::SoupMessageBody* soup_message_body_new ();
static GI_INLINE_DECL Soup::MessageBody new_ () noexcept;

// void soup_message_body_append (SoupMessageBody* body, SoupMemoryUse use, gconstpointer data, gsize length);
// void soup_message_body_append (::SoupMessageBody* body, ::SoupMemoryUse use, const guint8* data, gsize length);
GI_INLINE_DECL void append (Soup::MemoryUse use, guint8 * data, gsize length) noexcept;

// void soup_message_body_append_buffer (SoupMessageBody* body, SoupBuffer* buffer);
// void soup_message_body_append_buffer (::SoupMessageBody* body, ::SoupBuffer* buffer);
GI_INLINE_DECL void append_buffer (Soup::Buffer buffer) noexcept;

// void soup_message_body_append_take (SoupMessageBody* body, guchar* data, gsize length);
// void soup_message_body_append_take (::SoupMessageBody* body, guint8* data, gsize length);
GI_INLINE_DECL void append (guint8 * data, gsize length) noexcept;

// void soup_message_body_complete (SoupMessageBody* body);
// void soup_message_body_complete (::SoupMessageBody* body);
GI_INLINE_DECL void complete () noexcept;

// SoupBuffer* soup_message_body_flatten (SoupMessageBody* body);
// ::SoupBuffer* soup_message_body_flatten (::SoupMessageBody* body);
GI_INLINE_DECL Soup::Buffer flatten () noexcept;

// void soup_message_body_free (SoupMessageBody* body);
// void soup_message_body_free (::SoupMessageBody* body);
// IGNORE; marked ignore

// gboolean soup_message_body_get_accumulate (SoupMessageBody* body);
// gboolean soup_message_body_get_accumulate (::SoupMessageBody* body);
GI_INLINE_DECL bool get_accumulate () noexcept;

// SoupBuffer* soup_message_body_get_chunk (SoupMessageBody* body, goffset offset);
// ::SoupBuffer* soup_message_body_get_chunk (::SoupMessageBody* body, gint64 offset);
GI_INLINE_DECL Soup::Buffer get_chunk (gint64 offset) noexcept;

// void soup_message_body_got_chunk (SoupMessageBody* body, SoupBuffer* chunk);
// void soup_message_body_got_chunk (::SoupMessageBody* body, ::SoupBuffer* chunk);
GI_INLINE_DECL void got_chunk (Soup::Buffer chunk) noexcept;

// void soup_message_body_set_accumulate (SoupMessageBody* body, gboolean accumulate);
// void soup_message_body_set_accumulate (::SoupMessageBody* body, gboolean accumulate);
GI_INLINE_DECL void set_accumulate (gboolean accumulate) noexcept;

// void soup_message_body_truncate (SoupMessageBody* body);
// void soup_message_body_truncate (::SoupMessageBody* body);
GI_INLINE_DECL void truncate () noexcept;

// void soup_message_body_wrote_chunk (SoupMessageBody* body, SoupBuffer* chunk);
// void soup_message_body_wrote_chunk (::SoupMessageBody* body, ::SoupBuffer* chunk);
GI_INLINE_DECL void wrote_chunk (Soup::Buffer chunk) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messagebody_extra_def.hpp>)
#include <soup/messagebody_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messagebody_extra.hpp>)
#include <soup/messagebody_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class MessageBody : public GI_SOUP_MESSAGEBODY_BASE
{ typedef GI_SOUP_MESSAGEBODY_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMessageBody>
{ typedef Soup::MessageBody type; }; 

} // namespace repository

} // namespace gi

#endif
