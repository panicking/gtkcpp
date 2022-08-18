// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTTYPE_IMPL_HPP_
#define _GI_GLIB_VARIANTTYPE_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantType* g_variant_type_new (const gchar* type_string);
// ::GVariantType* g_variant_type_new (const char* type_string);
GLib::VariantType base::VariantTypeBase::new_ (const std::string & type_string) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantType* g_variant_type_new_array (const GVariantType* element);
// ::GVariantType* g_variant_type_new_array (const ::GVariantType* element);
GLib::VariantType base::VariantTypeBase::new_array (const GLib::VariantType & element) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* element);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_array;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantType* g_variant_type_new_dict_entry (const GVariantType* key, const GVariantType* value);
// ::GVariantType* g_variant_type_new_dict_entry (const ::GVariantType* key, const ::GVariantType* value);
GLib::VariantType base::VariantTypeBase::new_dict_entry (const GLib::VariantType & key, const GLib::VariantType & value) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* key, const ::GVariantType* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_dict_entry;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (key_to_c), (const ::GVariantType*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantType* g_variant_type_new_maybe (const GVariantType* element);
// ::GVariantType* g_variant_type_new_maybe (const ::GVariantType* element);
GLib::VariantType base::VariantTypeBase::new_maybe (const GLib::VariantType & element) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* element);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_maybe;
  auto element_to_c = gi::unwrap (element, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantType* g_variant_type_new_tuple (const GVariantType* const* items, gint length);
// ::GVariantType* g_variant_type_new_tuple (const ::GVariantType** items, gint length);
GLib::VariantType base::VariantTypeBase::new_tuple (GLib::VariantType * items, gint length) noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType** items, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_new_tuple;
  auto items_i = detail::make_list_unwrap_range (items, length, false);
  auto items_w = unwrap (items_i, gi::transfer_none, direction_in);
  auto items_to_c = items_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const ::GVariantType**) (items_to_c), (gint) (items_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantType* g_variant_type_copy (const GVariantType* type);
// ::GVariantType* g_variant_type_copy (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::copy () const noexcept
{
  typedef ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_copy;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* g_variant_type_dup_string (const GVariantType* type);
// char* g_variant_type_dup_string (const ::GVariantType* type);
std::string base::VariantTypeBase::dup_string () const noexcept
{
  typedef char* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_dup_string;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const GVariantType* g_variant_type_element (const GVariantType* type);
// const ::GVariantType* g_variant_type_element (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::element () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_element;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_variant_type_equal (gconstpointer type1, gconstpointer type2);
// gboolean g_variant_type_equal (const ::GVariantType* type1, const ::GVariantType* type2);
bool base::VariantTypeBase::equal (const GLib::VariantType & type2) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type1, const ::GVariantType* type2);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_equal;
  auto type2_to_c = gi::unwrap (type2, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()), (const ::GVariantType*) (type2_to_c));
  return _temp_ret;
}

// const GVariantType* g_variant_type_first (const GVariantType* type);
// const ::GVariantType* g_variant_type_first (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::first () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_first;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_variant_type_free (GVariantType* type);
// void g_variant_type_free (::GVariantType* type);
// IGNORE; marked ignore

// gsize g_variant_type_get_string_length (const GVariantType* type);
// gsize g_variant_type_get_string_length (const ::GVariantType* type);
gsize base::VariantTypeBase::get_string_length () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_get_string_length;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// guint g_variant_type_hash (gconstpointer type);
// guint g_variant_type_hash (const ::GVariantType* type);
guint base::VariantTypeBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_hash;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_array (const GVariantType* type);
// gboolean g_variant_type_is_array (const ::GVariantType* type);
bool base::VariantTypeBase::is_array () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_array;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_basic (const GVariantType* type);
// gboolean g_variant_type_is_basic (const ::GVariantType* type);
bool base::VariantTypeBase::is_basic () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_basic;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_container (const GVariantType* type);
// gboolean g_variant_type_is_container (const ::GVariantType* type);
bool base::VariantTypeBase::is_container () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_container;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_definite (const GVariantType* type);
// gboolean g_variant_type_is_definite (const ::GVariantType* type);
bool base::VariantTypeBase::is_definite () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_definite;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_dict_entry (const GVariantType* type);
// gboolean g_variant_type_is_dict_entry (const ::GVariantType* type);
bool base::VariantTypeBase::is_dict_entry () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_dict_entry;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_maybe (const GVariantType* type);
// gboolean g_variant_type_is_maybe (const ::GVariantType* type);
bool base::VariantTypeBase::is_maybe () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_maybe;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_subtype_of (const GVariantType* type, const GVariantType* supertype);
// gboolean g_variant_type_is_subtype_of (const ::GVariantType* type, const ::GVariantType* supertype);
bool base::VariantTypeBase::is_subtype_of (const GLib::VariantType & supertype) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type, const ::GVariantType* supertype);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_subtype_of;
  auto supertype_to_c = gi::unwrap (supertype, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()), (const ::GVariantType*) (supertype_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_is_tuple (const GVariantType* type);
// gboolean g_variant_type_is_tuple (const ::GVariantType* type);
bool base::VariantTypeBase::is_tuple () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_tuple;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_type_is_variant (const GVariantType* type);
// gboolean g_variant_type_is_variant (const ::GVariantType* type);
bool base::VariantTypeBase::is_variant () const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_is_variant;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// const GVariantType* g_variant_type_key (const GVariantType* type);
// const ::GVariantType* g_variant_type_key (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::key () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_key;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gsize g_variant_type_n_items (const GVariantType* type);
// gsize g_variant_type_n_items (const ::GVariantType* type);
gsize base::VariantTypeBase::n_items () const noexcept
{
  typedef gsize (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_n_items;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return _temp_ret;
}

// const GVariantType* g_variant_type_next (const GVariantType* type);
// const ::GVariantType* g_variant_type_next (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::next () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_next;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_variant_type_peek_string (const GVariantType* type);
// const char* g_variant_type_peek_string (const ::GVariantType* type);
std::string base::VariantTypeBase::peek_string () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_peek_string;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GVariantType* g_variant_type_value (const GVariantType* type);
// const ::GVariantType* g_variant_type_value (const ::GVariantType* type);
GLib::VariantType base::VariantTypeBase::value () const noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_value;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const GVariantType* g_variant_type_checked_ (const gchar* arg0);
// const ::GVariantType* g_variant_type_checked_ (const char* arg0);
GLib::VariantType base::VariantTypeBase::checked_ (const std::string & arg0) noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (const char* arg0);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_checked_;
  auto arg0_to_c = gi::unwrap (arg0, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (arg0_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gsize g_variant_type_string_get_depth_ (const gchar* type_string);
// gsize g_variant_type_string_get_depth_ (const char* type_string);
gsize base::VariantTypeBase::string_get_depth_ (const std::string & type_string) noexcept
{
  typedef gsize (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_get_depth_;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_string_is_valid (const gchar* type_string);
// gboolean g_variant_type_string_is_valid (const char* type_string);
bool base::VariantTypeBase::string_is_valid (const std::string & type_string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* type_string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_is_valid;
  auto type_string_to_c = gi::unwrap (type_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (type_string_to_c));
  return _temp_ret;
}

// gboolean g_variant_type_string_scan (const gchar* string, const gchar* limit, const gchar** endptr);
// gboolean g_variant_type_string_scan (const char* string, const char* limit, const char** endptr);
bool base::VariantTypeBase::string_scan (const std::string & string, const std::string & limit, std::string * endptr) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
bool base::VariantTypeBase::string_scan (const std::string & string, std::string * endptr) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (endptr ? &endptr_o : nullptr));
  if (endptr) *endptr = gi::wrap (endptr_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, std::string> base::VariantTypeBase::string_scan (const std::string & string, const std::string & limit) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = gi::unwrap (limit, gi::transfer_none, gi::direction_in);
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (&endptr_o));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_full, gi::direction_out));
}
std::tuple<bool, std::string> base::VariantTypeBase::string_scan (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string, const char* limit, const char** endptr);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_type_string_scan;
  const char* endptr_o {};
  auto limit_to_c = nullptr;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c), (const char*) (limit_to_c), (const char**) (&endptr_o));
  return std::make_tuple (_temp_ret, gi::wrap (endptr_o, gi::transfer_full, gi::direction_out));
}


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_def_impl.hpp>)
#include <glib/varianttype_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_impl.hpp>)
#include <glib/varianttype_extra_impl.hpp>
#endif
#endif

#endif
