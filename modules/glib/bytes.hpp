// AUTO-GENERATED

#ifndef _GI_GLIB_BYTES_HPP_
#define _GI_GLIB_BYTES_HPP_


namespace gi {

namespace repository {

namespace GLib {

class ByteArray;

class Bytes;

namespace base {


#define GI_GLIB_BYTES_BASE base::BytesBase
class BytesBase : public gi::detail::GBoxedWrapper<BytesBase, ::GBytes>
{
typedef gi::detail::GBoxedWrapper<BytesBase, ::GBytes> super_type;
public:

BytesBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_bytes_get_type(); } 

// GBytes* g_bytes_new (gconstpointer data, gsize size);
// ::GBytes* g_bytes_new (const guint8* data, gsize size);
static GI_INLINE_DECL GLib::Bytes new_ (guint8 * data, gsize size) noexcept;

// GBytes* g_bytes_new_static (gconstpointer data, gsize size);
// ::GBytes* g_bytes_new_static (const guint8* data, gsize size);
static GI_INLINE_DECL GLib::Bytes new_static (guint8 * data, gsize size) noexcept;

// GBytes* g_bytes_new_take (gpointer data, gsize size);
// ::GBytes* g_bytes_new_take (guint8* data, gsize size);
static GI_INLINE_DECL GLib::Bytes new_take (guint8 * data, gsize size) noexcept;

// GBytes* g_bytes_new_with_free_func (gconstpointer data, gsize size, GDestroyNotify free_func, gpointer user_data);
// ::GBytes* g_bytes_new_with_free_func (const guint8* data, gsize size, GLib::DestroyNotify::cfunction_type free_func, void* user_data);
// IGNORE; not introspectable, callback misses closure info

// gint g_bytes_compare (gconstpointer bytes1, gconstpointer bytes2);
// gint g_bytes_compare (const ::GBytes* bytes1, const ::GBytes* bytes2);
GI_INLINE_DECL gint compare (const GLib::Bytes & bytes2) const noexcept;

// gboolean g_bytes_equal (gconstpointer bytes1, gconstpointer bytes2);
// gboolean g_bytes_equal (const ::GBytes* bytes1, const ::GBytes* bytes2);
GI_INLINE_DECL bool equal (const GLib::Bytes & bytes2) const noexcept;

// gconstpointer g_bytes_get_data (GBytes* bytes, gsize* size);
// const guint8* g_bytes_get_data (::GBytes* bytes, gsize* size);
GI_INLINE_DECL std::vector<guint8> get_data () noexcept;

// gconstpointer g_bytes_get_region (GBytes* bytes, gsize element_size, gsize offset, gsize n_elements);
// const void* g_bytes_get_region (::GBytes* bytes, gsize element_size, gsize offset, gsize n_elements);
GI_INLINE_DECL gconstpointer get_region (gsize element_size, gsize offset, gsize n_elements) noexcept;

// gsize g_bytes_get_size (GBytes* bytes);
// gsize g_bytes_get_size (::GBytes* bytes);
GI_INLINE_DECL gsize get_size () noexcept;

// guint g_bytes_hash (gconstpointer bytes);
// guint g_bytes_hash (const ::GBytes* bytes);
GI_INLINE_DECL guint hash () const noexcept;

// GBytes* g_bytes_new_from_bytes (GBytes* bytes, gsize offset, gsize length);
// ::GBytes* g_bytes_new_from_bytes (::GBytes* bytes, gsize offset, gsize length);
GI_INLINE_DECL GLib::Bytes new_from_bytes (gsize offset, gsize length) noexcept;

// GBytes* g_bytes_ref (GBytes* bytes);
// ::GBytes* g_bytes_ref (::GBytes* bytes);
// IGNORE; marked ignore

// void g_bytes_unref (GBytes* bytes);
// void g_bytes_unref (::GBytes* bytes);
// IGNORE; marked ignore

// GByteArray* g_bytes_unref_to_array (GBytes* bytes);
// ::GByteArray* g_bytes_unref_to_array (::GBytes* bytes);
GI_INLINE_DECL GLib::ByteArray unref_to_array () noexcept;

// gpointer g_bytes_unref_to_data (GBytes* bytes, gsize* size);
// guint8* g_bytes_unref_to_data (::GBytes* bytes, gsize* size);
GI_INLINE_DECL std::vector<guint8> unref_to_data () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/bytes_extra_def.hpp>)
#include <glib/bytes_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/bytes_extra.hpp>)
#include <glib/bytes_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Bytes : public GI_GLIB_BYTES_BASE
{ typedef GI_GLIB_BYTES_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GBytes>
{ typedef GLib::Bytes type; }; 

} // namespace repository

} // namespace gi

#endif
