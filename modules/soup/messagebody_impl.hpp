// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGEBODY_IMPL_HPP_
#define _GI_SOUP_MESSAGEBODY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static const char* _field_data_get (const ::SoupMessageBody* obj) { return (const char*) obj->data; }
// const char* MessageBody::data (const ::SoupMessageBody* obj);
// const char* MessageBody::data (const ::SoupMessageBody* obj);
std::string base::MessageBodyBase::data_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::SoupMessageBody* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_data_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessageBody*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gint64 _field_length_get (const ::SoupMessageBody* obj) { return (gint64) obj->length; }
// gint64 MessageBody::length (const ::SoupMessageBody* obj);
// gint64 MessageBody::length (const ::SoupMessageBody* obj);
gint64 base::MessageBodyBase::length_ () const noexcept
{
  typedef gint64 (*call_wrap_t) (const ::SoupMessageBody* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::SoupMessageBody*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::SoupMessageBody* obj, gint64 _value) { obj->length = (decltype(obj->length)) _value; }
//  MessageBody::length (::SoupMessageBody* obj, gint64 _value);
// void MessageBody::length (::SoupMessageBody* obj, gint64 _value);
void base::MessageBodyBase::length_ (gint64 _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* obj, gint64 _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (gint64) (_value_to_c));
}

// SoupMessageBody* soup_message_body_new ();
// ::SoupMessageBody* soup_message_body_new ();
Soup::MessageBody base::MessageBodyBase::new_ () noexcept
{
  typedef ::SoupMessageBody* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_message_body_append (SoupMessageBody* body, SoupMemoryUse use, gconstpointer data, gsize length);
// void soup_message_body_append (::SoupMessageBody* body, ::SoupMemoryUse use, const guint8* data, gsize length);
void base::MessageBodyBase::append (Soup::MemoryUse use, guint8 * data, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, ::SoupMemoryUse use, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_append;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto use_to_c = gi::unwrap (use);
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (::SoupMemoryUse) (use_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()));
}

// void soup_message_body_append_buffer (SoupMessageBody* body, SoupBuffer* buffer);
// void soup_message_body_append_buffer (::SoupMessageBody* body, ::SoupBuffer* buffer);
void base::MessageBodyBase::append_buffer (Soup::Buffer buffer) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, ::SoupBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_append_buffer;
  auto buffer_to_c = gi::unwrap (buffer, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (::SoupBuffer*) (buffer_to_c));
}

// void soup_message_body_append_take (SoupMessageBody* body, guchar* data, gsize length);
// void soup_message_body_append_take (::SoupMessageBody* body, guint8* data, gsize length);
void base::MessageBodyBase::append (guint8 * data, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_append_take;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_full, direction_in);
  auto data_to_c = data_w.gobj_(true);
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (guint8*) (data_to_c), (gsize) (data_w.size()));
}

// void soup_message_body_complete (SoupMessageBody* body);
// void soup_message_body_complete (::SoupMessageBody* body);
void base::MessageBodyBase::complete () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_complete;
  call_wrap_v ((::SoupMessageBody*) (gobj_()));
}

// SoupBuffer* soup_message_body_flatten (SoupMessageBody* body);
// ::SoupBuffer* soup_message_body_flatten (::SoupMessageBody* body);
Soup::Buffer base::MessageBodyBase::flatten () noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (::SoupMessageBody* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_flatten;
  auto _temp_ret = call_wrap_v ((::SoupMessageBody*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_message_body_free (SoupMessageBody* body);
// void soup_message_body_free (::SoupMessageBody* body);
// IGNORE; marked ignore

// gboolean soup_message_body_get_accumulate (SoupMessageBody* body);
// gboolean soup_message_body_get_accumulate (::SoupMessageBody* body);
bool base::MessageBodyBase::get_accumulate () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupMessageBody* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_get_accumulate;
  auto _temp_ret = call_wrap_v ((::SoupMessageBody*) (gobj_()));
  return _temp_ret;
}

// SoupBuffer* soup_message_body_get_chunk (SoupMessageBody* body, goffset offset);
// ::SoupBuffer* soup_message_body_get_chunk (::SoupMessageBody* body, gint64 offset);
Soup::Buffer base::MessageBodyBase::get_chunk (gint64 offset) noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (::SoupMessageBody* body, gint64 offset);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_get_chunk;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::SoupMessageBody*) (gobj_()), (gint64) (offset_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_message_body_got_chunk (SoupMessageBody* body, SoupBuffer* chunk);
// void soup_message_body_got_chunk (::SoupMessageBody* body, ::SoupBuffer* chunk);
void base::MessageBodyBase::got_chunk (Soup::Buffer chunk) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, ::SoupBuffer* chunk);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_got_chunk;
  auto chunk_to_c = gi::unwrap (chunk, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (::SoupBuffer*) (chunk_to_c));
}

// void soup_message_body_set_accumulate (SoupMessageBody* body, gboolean accumulate);
// void soup_message_body_set_accumulate (::SoupMessageBody* body, gboolean accumulate);
void base::MessageBodyBase::set_accumulate (gboolean accumulate) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, gboolean accumulate);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_set_accumulate;
  auto accumulate_to_c = accumulate;
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (gboolean) (accumulate_to_c));
}

// void soup_message_body_truncate (SoupMessageBody* body);
// void soup_message_body_truncate (::SoupMessageBody* body);
void base::MessageBodyBase::truncate () noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_truncate;
  call_wrap_v ((::SoupMessageBody*) (gobj_()));
}

// void soup_message_body_wrote_chunk (SoupMessageBody* body, SoupBuffer* chunk);
// void soup_message_body_wrote_chunk (::SoupMessageBody* body, ::SoupBuffer* chunk);
void base::MessageBodyBase::wrote_chunk (Soup::Buffer chunk) noexcept
{
  typedef void (*call_wrap_t) (::SoupMessageBody* body, ::SoupBuffer* chunk);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_message_body_wrote_chunk;
  auto chunk_to_c = gi::unwrap (chunk, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupMessageBody*) (gobj_()), (::SoupBuffer*) (chunk_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/messagebody_extra_def_impl.hpp>)
#include <soup/messagebody_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/messagebody_extra_impl.hpp>)
#include <soup/messagebody_extra_impl.hpp>
#endif
#endif

#endif
