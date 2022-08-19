// AUTO-GENERATED

#ifndef _GI_SOUP_BUFFER_IMPL_HPP_
#define _GI_SOUP_BUFFER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

static void* _field_data_get (const ::SoupBuffer* obj) { return (void*) obj->data; }
// void* Buffer::data (const ::SoupBuffer* obj);
// void* Buffer::data (const ::SoupBuffer* obj);
gpointer base::BufferBase::data_ () const noexcept
{
  typedef void* (*call_wrap_t) (const ::SoupBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_data_get;
  auto _temp_ret = call_wrap_v ((const ::SoupBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_data_set (::SoupBuffer* obj, void* _value) { obj->data = (decltype(obj->data)) _value; }
//  Buffer::data (::SoupBuffer* obj, void* _value);
// void Buffer::data (::SoupBuffer* obj, void* _value);
void base::BufferBase::data_ (void* _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupBuffer* obj, void* _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_data_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupBuffer*) (gobj_()), (void*) (_value_to_c));
}

static gsize _field_length_get (const ::SoupBuffer* obj) { return (gsize) obj->length; }
// gsize Buffer::length (const ::SoupBuffer* obj);
// gsize Buffer::length (const ::SoupBuffer* obj);
gsize base::BufferBase::length_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::SoupBuffer* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_get;
  auto _temp_ret = call_wrap_v ((const ::SoupBuffer*) (gobj_()));
  return _temp_ret;
}

static void _field_length_set (::SoupBuffer* obj, gsize _value) { obj->length = (decltype(obj->length)) _value; }
//  Buffer::length (::SoupBuffer* obj, gsize _value);
// void Buffer::length (::SoupBuffer* obj, gsize _value);
void base::BufferBase::length_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::SoupBuffer* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_length_set;
  auto _value_to_c = _value;
  call_wrap_v ((::SoupBuffer*) (gobj_()), (gsize) (_value_to_c));
}

// SoupBuffer* soup_buffer_new (SoupMemoryUse use, gconstpointer data, gsize length);
// ::SoupBuffer* soup_buffer_new (::SoupMemoryUse use, const guint8* data, gsize length);
Soup::Buffer base::BufferBase::new_ (Soup::MemoryUse use, guint8 * data, gsize length) noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (::SoupMemoryUse use, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_new;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  auto use_to_c = gi::unwrap (use);
  auto _temp_ret = call_wrap_v ((::SoupMemoryUse) (use_to_c), (const guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupBuffer* soup_buffer_new_take (guchar* data, gsize length);
// ::SoupBuffer* soup_buffer_new_take (guint8* data, gsize length);
Soup::Buffer base::BufferBase::new_ (guint8 * data, gsize length) noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_new_take;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_full, direction_in);
  auto data_to_c = data_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupBuffer* soup_buffer_new_with_owner (gconstpointer data, gsize length, gpointer owner, GDestroyNotify owner_dnotify);
// ::SoupBuffer* soup_buffer_new_with_owner (const guint8* data, gsize length, void* owner, GLib::DestroyNotify::cfunction_type owner_dnotify);
// SKIP; callback misses closure info

// SoupBuffer* soup_buffer_copy (SoupBuffer* buffer);
// ::SoupBuffer* soup_buffer_copy (::SoupBuffer* buffer);
Soup::Buffer base::BufferBase::copy () noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (::SoupBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_copy;
  auto _temp_ret = call_wrap_v ((::SoupBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_buffer_free (SoupBuffer* buffer);
// void soup_buffer_free (::SoupBuffer* buffer);
// IGNORE; marked ignore

// GBytes* soup_buffer_get_as_bytes (SoupBuffer* buffer);
// ::GBytes* soup_buffer_get_as_bytes (::SoupBuffer* buffer);
GLib::Bytes base::BufferBase::get_as_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::SoupBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_get_as_bytes;
  auto _temp_ret = call_wrap_v ((::SoupBuffer*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_buffer_get_data (SoupBuffer* buffer, const guint8** data, gsize* length);
// void soup_buffer_get_data (::SoupBuffer* buffer, const guint8** data, gsize* length);
void base::BufferBase::get_data (std::vector<guint8> & data) noexcept
{
  typedef void (*call_wrap_t) (::SoupBuffer* buffer, const guint8** data, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_get_data;
  typedef guint8 data_cpptype;
  typedef traits::ctype<data_cpptype>::type data_ctype;
  data_ctype *data_o;
  gsize length;
  call_wrap_v ((::SoupBuffer*) (gobj_()), (const guint8**) ((const guint8**) &data_o), (gsize*) (&length));
  data.resize(length);
  detail::wrap_array (data_o, gi::transfer_none, length, data.data());
}

// gpointer soup_buffer_get_owner (SoupBuffer* buffer);
// void* soup_buffer_get_owner (::SoupBuffer* buffer);
gpointer base::BufferBase::get_owner () noexcept
{
  typedef void* (*call_wrap_t) (::SoupBuffer* buffer);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_get_owner;
  auto _temp_ret = call_wrap_v ((::SoupBuffer*) (gobj_()));
  return _temp_ret;
}

// SoupBuffer* soup_buffer_new_subbuffer (SoupBuffer* parent, gsize offset, gsize length);
// ::SoupBuffer* soup_buffer_new_subbuffer (::SoupBuffer* parent, gsize offset, gsize length);
Soup::Buffer base::BufferBase::new_subbuffer (gsize offset, gsize length) noexcept
{
  typedef ::SoupBuffer* (*call_wrap_t) (::SoupBuffer* parent, gsize offset, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_buffer_new_subbuffer;
  auto length_to_c = length;
  auto offset_to_c = offset;
  auto _temp_ret = call_wrap_v ((::SoupBuffer*) (gobj_()), (gsize) (offset_to_c), (gsize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/buffer_extra_def_impl.hpp>)
#include <soup/buffer_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/buffer_extra_impl.hpp>)
#include <soup/buffer_extra_impl.hpp>
#endif
#endif

#endif
