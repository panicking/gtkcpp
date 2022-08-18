// AUTO-GENERATED

#ifndef _GI_GLIB_BYTEARRAY_IMPL_HPP_
#define _GI_GLIB_BYTEARRAY_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static guint _field_len_get (const ::GByteArray* obj) { return (guint) obj->len; }
// guint ByteArray::len (const ::GByteArray* obj);
// guint ByteArray::len (const ::GByteArray* obj);
guint base::ByteArrayBase::len_ () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GByteArray* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_get;
  auto _temp_ret = call_wrap_v ((const ::GByteArray*) (gobj_()));
  return _temp_ret;
}

static void _field_len_set (::GByteArray* obj, guint _value) { obj->len = (decltype(obj->len)) _value; }
//  ByteArray::len (::GByteArray* obj, guint _value);
// void ByteArray::len (::GByteArray* obj, guint _value);
void base::ByteArrayBase::len_ (guint _value) noexcept
{
  typedef void (*call_wrap_t) (::GByteArray* obj, guint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GByteArray*) (gobj_()), (guint) (_value_to_c));
}

// FAILURE on g_byte_array_append; No such node (<xmlattr>.transfer-ownership)
// guint8* g_byte_array_free (GByteArray* array, gboolean free_segment);
// guint8 g_byte_array_free (::GByteArray* array, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* g_byte_array_free_to_bytes (GByteArray* array);
// ::GBytes* g_byte_array_free_to_bytes (::GByteArray* array);
GLib::Bytes base::ByteArrayBase::free_to_bytes (GLib::ByteArray array) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GByteArray* array);
  call_wrap_t call_wrap_v = (call_wrap_t) g_byte_array_free_to_bytes;
  auto array_to_c = gi::unwrap (array, gi::transfer_full, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GByteArray*) (array_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GByteArray* g_byte_array_new ();
// ::GByteArray* g_byte_array_new ();
GLib::ByteArray base::ByteArrayBase::new_ () noexcept
{
  typedef ::GByteArray* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_byte_array_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GByteArray* g_byte_array_new_take (guint8* data, gsize len);
// ::GByteArray* g_byte_array_new_take (guint8* data, gsize len);
GLib::ByteArray base::ByteArrayBase::new_take (guint8 * data, gsize len) noexcept
{
  typedef ::GByteArray* (*call_wrap_t) (guint8* data, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_byte_array_new_take;
  auto data_i = detail::make_list_unwrap_range (data, len, false);
  auto data_w = unwrap (data_i, gi::transfer_full, direction_in);
  auto data_to_c = data_w.gobj_(true);
  auto _temp_ret = call_wrap_v ((guint8*) (data_to_c), (gsize) (data_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// FAILURE on g_byte_array_prepend; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_ref; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_remove_index; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_remove_index_fast; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_remove_range; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_set_size; No such node (<xmlattr>.transfer-ownership)
// FAILURE on g_byte_array_sized_new; No such node (<xmlattr>.transfer-ownership)
// void g_byte_array_sort (GByteArray* array, GCompareFunc compare_func);
// void g_byte_array_sort (::GByteArray* array,  compare_func);
// IGNORE; not introspectable, compare_func type  not supported

// void g_byte_array_sort_with_data (GByteArray* array, GCompareDataFunc compare_func, gpointer user_data);
// void g_byte_array_sort_with_data (::GByteArray* array, GLib::CompareDataFunc::cfunction_type compare_func, void* user_data);
// IGNORE; not introspectable, callback misses scope info

// guint8* g_byte_array_steal (GByteArray* array, gsize* len);
// guint8 g_byte_array_steal (::GByteArray* array, gsize* len);
// SKIP; inconsistent return  pointer depth (1 vs 0)

// void g_byte_array_unref (GByteArray* array);
// void g_byte_array_unref (::GByteArray* array);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_def_impl.hpp>)
#include <glib/bytearray_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_impl.hpp>)
#include <glib/bytearray_extra_impl.hpp>
#endif
#endif

#endif
