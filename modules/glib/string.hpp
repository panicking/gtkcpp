// AUTO-GENERATED

#ifndef _GI_GLIB_STRING_HPP_
#define _GI_GLIB_STRING_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;

class String;

namespace base {


#define GI_GLIB_STRING_BASE base::StringBase
class StringBase : public gi::detail::GBoxedWrapper<StringBase, ::GString>
{
typedef gi::detail::GBoxedWrapper<StringBase, ::GString> super_type;
public:

StringBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_gstring_get_type(); } 

// char* String::str (const ::GString* obj);
// char* String::str (const ::GString* obj);
GI_INLINE_DECL std::string str_ () const noexcept;

// gsize String::len (const ::GString* obj);
// gsize String::len (const ::GString* obj);
GI_INLINE_DECL gsize len_ () const noexcept;

//  String::len (::GString* obj, gsize _value);
// void String::len (::GString* obj, gsize _value);
GI_INLINE_DECL void len_ (gsize _value) noexcept;

// gsize String::allocated_len (const ::GString* obj);
// gsize String::allocated_len (const ::GString* obj);
GI_INLINE_DECL gsize allocated_len_ () const noexcept;

//  String::allocated_len (::GString* obj, gsize _value);
// void String::allocated_len (::GString* obj, gsize _value);
GI_INLINE_DECL void allocated_len_ (gsize _value) noexcept;

// GString* g_string_new (const gchar* init);
// ::GString* g_string_new (const char* init);
static GI_INLINE_DECL GLib::String new_ (const std::string & init) noexcept;
static GI_INLINE_DECL GLib::String new_ () noexcept;

// GString* g_string_new_len (const gchar* init, gssize len);
// ::GString* g_string_new_len (const char* init, gssize len);
static GI_INLINE_DECL GLib::String new_len (const std::string & init, gssize len) noexcept;

// GString* g_string_sized_new (gsize dfl_size);
// ::GString* g_string_sized_new (gsize dfl_size);
static GI_INLINE_DECL GLib::String sized_new (gsize dfl_size) noexcept;

// GString* g_string_append (GString* string, const gchar* val);
// ::GString* g_string_append (::GString* string, const char* val);
GI_INLINE_DECL GLib::String append (const std::string & val) noexcept;

// GString* g_string_append_c (GString* string, gchar c);
// ::GString* g_string_append_c (::GString* string, gchar c);
GI_INLINE_DECL GLib::String append_c (gchar c) noexcept;

// GString* g_string_append_len (GString* string, const gchar* val, gssize len);
// ::GString* g_string_append_len (::GString* string, const char* val, gssize len);
GI_INLINE_DECL GLib::String append_len (const std::string & val, gssize len) noexcept;

// void g_string_append_printf (GString* string, const gchar* format);
// void g_string_append_printf (::GString* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// GString* g_string_append_unichar (GString* string, gunichar wc);
// ::GString* g_string_append_unichar (::GString* string, gunichar wc);
GI_INLINE_DECL GLib::String append_unichar (gunichar wc) noexcept;

// GString* g_string_append_uri_escaped (GString* string, const gchar* unescaped, const gchar* reserved_chars_allowed, gboolean allow_utf8);
// ::GString* g_string_append_uri_escaped (::GString* string, const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
GI_INLINE_DECL GLib::String append_uri_escaped (const std::string & unescaped, const std::string & reserved_chars_allowed, gboolean allow_utf8) noexcept;

// void g_string_append_vprintf (GString* string, const gchar* format, va_list args);
// void g_string_append_vprintf (::GString* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// GString* g_string_ascii_down (GString* string);
// ::GString* g_string_ascii_down (::GString* string);
GI_INLINE_DECL GLib::String ascii_down () noexcept;

// GString* g_string_ascii_up (GString* string);
// ::GString* g_string_ascii_up (::GString* string);
GI_INLINE_DECL GLib::String ascii_up () noexcept;

// GString* g_string_assign (GString* string, const gchar* rval);
// ::GString* g_string_assign (::GString* string, const char* rval);
GI_INLINE_DECL GLib::String assign (const std::string & rval) noexcept;

// GString* g_string_down (GString* string);
// ::GString* g_string_down (::GString* string);
// IGNORE; deprecated

// gboolean g_string_equal (const GString* v, const GString* v2);
// gboolean g_string_equal (const ::GString* v, const ::GString* v2);
GI_INLINE_DECL bool equal (const GLib::String & v2) const noexcept;

// GString* g_string_erase (GString* string, gssize pos, gssize len);
// ::GString* g_string_erase (::GString* string, gssize pos, gssize len);
GI_INLINE_DECL GLib::String erase (gssize pos, gssize len) noexcept;

// gchar* g_string_free (GString* string, gboolean free_segment);
// char* g_string_free (::GString* string, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* g_string_free_to_bytes (GString* string);
// ::GBytes* g_string_free_to_bytes (::GString* string);
GI_INLINE_DECL GLib::Bytes free_to_bytes () noexcept;

// guint g_string_hash (const GString* str);
// guint g_string_hash (const ::GString* str);
GI_INLINE_DECL guint hash () const noexcept;

// GString* g_string_insert (GString* string, gssize pos, const gchar* val);
// ::GString* g_string_insert (::GString* string, gssize pos, const char* val);
GI_INLINE_DECL GLib::String insert (gssize pos, const std::string & val) noexcept;

// GString* g_string_insert_c (GString* string, gssize pos, gchar c);
// ::GString* g_string_insert_c (::GString* string, gssize pos, gchar c);
GI_INLINE_DECL GLib::String insert_c (gssize pos, gchar c) noexcept;

// GString* g_string_insert_len (GString* string, gssize pos, const gchar* val, gssize len);
// ::GString* g_string_insert_len (::GString* string, gssize pos, const char* val, gssize len);
GI_INLINE_DECL GLib::String insert_len (gssize pos, const std::string & val, gssize len) noexcept;

// GString* g_string_insert_unichar (GString* string, gssize pos, gunichar wc);
// ::GString* g_string_insert_unichar (::GString* string, gssize pos, gunichar wc);
GI_INLINE_DECL GLib::String insert_unichar (gssize pos, gunichar wc) noexcept;

// GString* g_string_overwrite (GString* string, gsize pos, const gchar* val);
// ::GString* g_string_overwrite (::GString* string, gsize pos, const char* val);
GI_INLINE_DECL GLib::String overwrite (gsize pos, const std::string & val) noexcept;

// GString* g_string_overwrite_len (GString* string, gsize pos, const gchar* val, gssize len);
// ::GString* g_string_overwrite_len (::GString* string, gsize pos, const char* val, gssize len);
GI_INLINE_DECL GLib::String overwrite_len (gsize pos, const std::string & val, gssize len) noexcept;

// GString* g_string_prepend (GString* string, const gchar* val);
// ::GString* g_string_prepend (::GString* string, const char* val);
GI_INLINE_DECL GLib::String prepend (const std::string & val) noexcept;

// GString* g_string_prepend_c (GString* string, gchar c);
// ::GString* g_string_prepend_c (::GString* string, gchar c);
GI_INLINE_DECL GLib::String prepend_c (gchar c) noexcept;

// GString* g_string_prepend_len (GString* string, const gchar* val, gssize len);
// ::GString* g_string_prepend_len (::GString* string, const char* val, gssize len);
GI_INLINE_DECL GLib::String prepend_len (const std::string & val, gssize len) noexcept;

// GString* g_string_prepend_unichar (GString* string, gunichar wc);
// ::GString* g_string_prepend_unichar (::GString* string, gunichar wc);
GI_INLINE_DECL GLib::String prepend_unichar (gunichar wc) noexcept;

// void g_string_printf (GString* string, const gchar* format);
// void g_string_printf (::GString* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// guint g_string_replace (GString* string, const gchar* find, const gchar* replace, guint limit);
// guint g_string_replace (::GString* string, const char* find, const char* replace, guint limit);
GI_INLINE_DECL guint replace (const std::string & find, const std::string & replace, guint limit) noexcept;

// GString* g_string_set_size (GString* string, gsize len);
// ::GString* g_string_set_size (::GString* string, gsize len);
GI_INLINE_DECL GLib::String set_size (gsize len) noexcept;

// GString* g_string_truncate (GString* string, gsize len);
// ::GString* g_string_truncate (::GString* string, gsize len);
GI_INLINE_DECL GLib::String truncate (gsize len) noexcept;

// GString* g_string_up (GString* string);
// ::GString* g_string_up (::GString* string);
// IGNORE; deprecated

// void g_string_vprintf (GString* string, const gchar* format, va_list args);
// void g_string_vprintf (::GString* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/string_extra_def.hpp>)
#include <glib/string_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/string_extra.hpp>)
#include <glib/string_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class String : public GI_GLIB_STRING_BASE
{ typedef GI_GLIB_STRING_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GString>
{ typedef GLib::String type; }; 

} // namespace repository

} // namespace gi

#endif
