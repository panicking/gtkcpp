// AUTO-GENERATED

#ifndef _GI_GLIB_STRING_IMPL_HPP_
#define _GI_GLIB_STRING_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

static char* _field_str_get (const ::GString* obj) { return (char*) obj->str; }
// char* String::str (const ::GString* obj);
// char* String::str (const ::GString* obj);
std::string base::StringBase::str_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_str_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

static gsize _field_len_get (const ::GString* obj) { return (gsize) obj->len; }
// gsize String::len (const ::GString* obj);
// gsize String::len (const ::GString* obj);
gsize base::StringBase::len_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

static void _field_len_set (::GString* obj, gsize _value) { obj->len = (decltype(obj->len)) _value; }
//  String::len (::GString* obj, gsize _value);
// void String::len (::GString* obj, gsize _value);
void base::StringBase::len_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GString* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GString*) (gobj_()), (gsize) (_value_to_c));
}

static gsize _field_allocated_len_get (const ::GString* obj) { return (gsize) obj->allocated_len; }
// gsize String::allocated_len (const ::GString* obj);
// gsize String::allocated_len (const ::GString* obj);
gsize base::StringBase::allocated_len_ () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GString* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocated_len_get;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

static void _field_allocated_len_set (::GString* obj, gsize _value) { obj->allocated_len = (decltype(obj->allocated_len)) _value; }
//  String::allocated_len (::GString* obj, gsize _value);
// void String::allocated_len (::GString* obj, gsize _value);
void base::StringBase::allocated_len_ (gsize _value) noexcept
{
  typedef void (*call_wrap_t) (::GString* obj, gsize _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_allocated_len_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GString*) (gobj_()), (gsize) (_value_to_c));
}

// GString* g_string_new (const gchar* init);
// ::GString* g_string_new (const char* init);
GLib::String base::StringBase::new_ (const std::string & init) noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new;
  auto init_to_c = gi::unwrap (init, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::String base::StringBase::new_ () noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new;
  auto init_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GString* g_string_new_len (const gchar* init, gssize len);
// ::GString* g_string_new_len (const char* init, gssize len);
GLib::String base::StringBase::new_len (const std::string & init, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (const char* init, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_new_len;
  auto len_to_c = len;
  auto init_to_c = gi::unwrap (init, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (init_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GString* g_string_sized_new (gsize dfl_size);
// ::GString* g_string_sized_new (gsize dfl_size);
GLib::String base::StringBase::sized_new (gsize dfl_size) noexcept
{
  typedef ::GString* (*call_wrap_t) (gsize dfl_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_sized_new;
  auto dfl_size_to_c = dfl_size;
  auto _temp_ret = call_wrap_v ((gsize) (dfl_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GString* g_string_append (GString* string, const gchar* val);
// ::GString* g_string_append (::GString* string, const char* val);
GLib::String base::StringBase::append (const std::string & val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_append;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_append_c (GString* string, gchar c);
// ::GString* g_string_append_c (::GString* string, gchar c);
GLib::String base::StringBase::append_c (gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_append_c;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_append_len (GString* string, const gchar* val, gssize len);
// ::GString* g_string_append_len (::GString* string, const char* val, gssize len);
GLib::String base::StringBase::append_len (const std::string & val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_append_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_string_append_printf (GString* string, const gchar* format);
// void g_string_append_printf (::GString* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// GString* g_string_append_unichar (GString* string, gunichar wc);
// ::GString* g_string_append_unichar (::GString* string, gunichar wc);
GLib::String base::StringBase::append_unichar (gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_append_unichar;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_append_uri_escaped (GString* string, const gchar* unescaped, const gchar* reserved_chars_allowed, gboolean allow_utf8);
// ::GString* g_string_append_uri_escaped (::GString* string, const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
GLib::String base::StringBase::append_uri_escaped (const std::string & unescaped, const std::string & reserved_chars_allowed, gboolean allow_utf8) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* unescaped, const char* reserved_chars_allowed, gboolean allow_utf8);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_append_uri_escaped;
  auto allow_utf8_to_c = allow_utf8;
  auto reserved_chars_allowed_to_c = gi::unwrap (reserved_chars_allowed, gi::transfer_none, gi::direction_in);
  auto unescaped_to_c = gi::unwrap (unescaped, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (unescaped_to_c), (const char*) (reserved_chars_allowed_to_c), (gboolean) (allow_utf8_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_string_append_vprintf (GString* string, const gchar* format, va_list args);
// void g_string_append_vprintf (::GString* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// GString* g_string_ascii_down (GString* string);
// ::GString* g_string_ascii_down (::GString* string);
GLib::String base::StringBase::ascii_down () noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_ascii_down;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_ascii_up (GString* string);
// ::GString* g_string_ascii_up (::GString* string);
GLib::String base::StringBase::ascii_up () noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_ascii_up;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_assign (GString* string, const gchar* rval);
// ::GString* g_string_assign (::GString* string, const char* rval);
GLib::String base::StringBase::assign (const std::string & rval) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* rval);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_assign;
  auto rval_to_c = gi::unwrap (rval, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (rval_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_down (GString* string);
// ::GString* g_string_down (::GString* string);
// IGNORE; deprecated

// gboolean g_string_equal (const GString* v, const GString* v2);
// gboolean g_string_equal (const ::GString* v, const ::GString* v2);
bool base::StringBase::equal (const GLib::String & v2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GString* v, const ::GString* v2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_equal;
  auto v2_to_c = gi::unwrap (v2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()), (const ::GString*) (v2_to_c));
  return _temp_ret;
}

// GString* g_string_erase (GString* string, gssize pos, gssize len);
// ::GString* g_string_erase (::GString* string, gssize pos, gssize len);
GLib::String base::StringBase::erase (gssize pos, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_erase;
  auto len_to_c = len;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gchar* g_string_free (GString* string, gboolean free_segment);
// char* g_string_free (::GString* string, gboolean free_segment);
// IGNORE; marked ignore

// GBytes* g_string_free_to_bytes (GString* string);
// ::GBytes* g_string_free_to_bytes (::GString* string);
GLib::Bytes base::StringBase::free_to_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GString* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_free_to_bytes;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint g_string_hash (const GString* str);
// guint g_string_hash (const ::GString* str);
guint base::StringBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GString* str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_hash;
  auto _temp_ret = call_wrap_v ((const ::GString*) (gobj_()));
  return _temp_ret;
}

// GString* g_string_insert (GString* string, gssize pos, const gchar* val);
// ::GString* g_string_insert (::GString* string, gssize pos, const char* val);
GLib::String base::StringBase::insert (gssize pos, const std::string & val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_insert;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_insert_c (GString* string, gssize pos, gchar c);
// ::GString* g_string_insert_c (::GString* string, gssize pos, gchar c);
GLib::String base::StringBase::insert_c (gssize pos, gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_insert_c;
  auto c_to_c = c;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_insert_len (GString* string, gssize pos, const gchar* val, gssize len);
// ::GString* g_string_insert_len (::GString* string, gssize pos, const char* val, gssize len);
GLib::String base::StringBase::insert_len (gssize pos, const std::string & val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_insert_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_insert_unichar (GString* string, gssize pos, gunichar wc);
// ::GString* g_string_insert_unichar (::GString* string, gssize pos, gunichar wc);
GLib::String base::StringBase::insert_unichar (gssize pos, gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gssize pos, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_insert_unichar;
  auto wc_to_c = wc;
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gssize) (pos_to_c), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_overwrite (GString* string, gsize pos, const gchar* val);
// ::GString* g_string_overwrite (::GString* string, gsize pos, const char* val);
GLib::String base::StringBase::overwrite (gsize pos, const std::string & val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize pos, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_overwrite;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (pos_to_c), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_overwrite_len (GString* string, gsize pos, const gchar* val, gssize len);
// ::GString* g_string_overwrite_len (::GString* string, gsize pos, const char* val, gssize len);
GLib::String base::StringBase::overwrite_len (gsize pos, const std::string & val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize pos, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_overwrite_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto pos_to_c = pos;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (pos_to_c), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_prepend (GString* string, const gchar* val);
// ::GString* g_string_prepend (::GString* string, const char* val);
GLib::String base::StringBase::prepend (const std::string & val) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_prepend;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_prepend_c (GString* string, gchar c);
// ::GString* g_string_prepend_c (::GString* string, gchar c);
GLib::String base::StringBase::prepend_c (gchar c) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gchar c);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_prepend_c;
  auto c_to_c = c;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gchar) (c_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_prepend_len (GString* string, const gchar* val, gssize len);
// ::GString* g_string_prepend_len (::GString* string, const char* val, gssize len);
GLib::String base::StringBase::prepend_len (const std::string & val, gssize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, const char* val, gssize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_prepend_len;
  auto len_to_c = len;
  auto val_to_c = gi::unwrap (val, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (val_to_c), (gssize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_prepend_unichar (GString* string, gunichar wc);
// ::GString* g_string_prepend_unichar (::GString* string, gunichar wc);
GLib::String base::StringBase::prepend_unichar (gunichar wc) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gunichar wc);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_prepend_unichar;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gunichar) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_string_printf (GString* string, const gchar* format);
// void g_string_printf (::GString* string, const char* format);
// IGNORE; not introspectable, varargs not supported

// guint g_string_replace (GString* string, const gchar* find, const gchar* replace, guint limit);
// guint g_string_replace (::GString* string, const char* find, const char* replace, guint limit);
guint base::StringBase::replace (const std::string & find, const std::string & replace, guint limit) noexcept
{
  typedef guint (*call_wrap_t) (::GString* string, const char* find, const char* replace, guint limit);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_replace;
  auto limit_to_c = limit;
  auto replace_to_c = gi::unwrap (replace, gi::transfer_none, gi::direction_in);
  auto find_to_c = gi::unwrap (find, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (const char*) (find_to_c), (const char*) (replace_to_c), (guint) (limit_to_c));
  return _temp_ret;
}

// GString* g_string_set_size (GString* string, gsize len);
// ::GString* g_string_set_size (::GString* string, gsize len);
GLib::String base::StringBase::set_size (gsize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_set_size;
  auto len_to_c = len;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_truncate (GString* string, gsize len);
// ::GString* g_string_truncate (::GString* string, gsize len);
GLib::String base::StringBase::truncate (gsize len) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GString* string, gsize len);
  call_wrap_t call_wrap_v = (call_wrap_t) g_string_truncate;
  auto len_to_c = len;
  auto _temp_ret = call_wrap_v ((::GString*) (gobj_()), (gsize) (len_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GString* g_string_up (GString* string);
// ::GString* g_string_up (::GString* string);
// IGNORE; deprecated

// void g_string_vprintf (GString* string, const gchar* format, va_list args);
// void g_string_vprintf (::GString* string, const char* format,  args);
// IGNORE; not introspectable, args type  not supported


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/string_extra_def_impl.hpp>)
#include <glib/string_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/string_extra_impl.hpp>)
#include <glib/string_extra_impl.hpp>
#endif
#endif

#endif
