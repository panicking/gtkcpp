// AUTO-GENERATED

#ifndef _GI_GLIB_BYTEARRAY_HPP_
#define _GI_GLIB_BYTEARRAY_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;

class ByteArray;

namespace base {


#define GI_GLIB_BYTEARRAY_BASE base::ByteArrayBase
class ByteArrayBase : public gi::detail::GBoxedWrapper<ByteArrayBase, ::GByteArray>
{
typedef gi::detail::GBoxedWrapper<ByteArrayBase, ::GByteArray> super_type;
public:

ByteArrayBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_byte_array_get_type(); } 

// guint ByteArray::len (const ::GByteArray* obj);
// guint ByteArray::len (const ::GByteArray* obj);
GI_INLINE_DECL guint len_ () const noexcept;

//  ByteArray::len (::GByteArray* obj, guint _value);
// void ByteArray::len (::GByteArray* obj, guint _value);
GI_INLINE_DECL void len_ (guint _value) noexcept;

// FAILURE on g_byte_array_append; No such node (<xmlattr>.transfer-ownership)
// guint8* g_byte_array_free (GByteArray* array, gboolean free_segment);
// guint8 g_byte_array_free (::GByteArray* array, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* g_byte_array_free_to_bytes (GByteArray* array);
// ::GBytes* g_byte_array_free_to_bytes (::GByteArray* array);
static GI_INLINE_DECL GLib::Bytes free_to_bytes (GLib::ByteArray array) noexcept;

// GByteArray* g_byte_array_new ();
// ::GByteArray* g_byte_array_new ();
static GI_INLINE_DECL GLib::ByteArray new_ () noexcept;

// GByteArray* g_byte_array_new_take (guint8* data, gsize len);
// ::GByteArray* g_byte_array_new_take (guint8* data, gsize len);
static GI_INLINE_DECL GLib::ByteArray new_take (guint8 * data, gsize len) noexcept;

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

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra_def.hpp>)
#include <glib/bytearray_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytearray_extra.hpp>)
#include <glib/bytearray_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class ByteArray : public GI_GLIB_BYTEARRAY_BASE
{ typedef GI_GLIB_BYTEARRAY_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GByteArray>
{ typedef GLib::ByteArray type; }; 

} // namespace repository

} // namespace gi

#endif
