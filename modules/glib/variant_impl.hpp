// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANT_IMPL_HPP_
#define _GI_GLIB_VARIANT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariant* g_variant_new (const gchar* format_string);
// ::GVariant* g_variant_new (const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_new_array (const GVariantType* child_type, GVariant* const* children, gsize n_children);
// ::GVariant* g_variant_new_array (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
GLib::Variant base::VariantBase::new_array (const GLib::VariantType & child_type, GLib::Variant * children, gsize n_children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_array;
  auto children_i = detail::make_list_unwrap_range (children, n_children, false);
  auto children_w = unwrap (children_i, gi::transfer_none, direction_in);
  auto children_to_c = children_w.gobj_(false);
  auto child_type_to_c = gi::unwrap (child_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant**) (children_to_c), (gsize) (children_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
GLib::Variant base::VariantBase::new_array (GLib::Variant * children, gsize n_children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_array;
  auto children_i = detail::make_list_unwrap_range (children, n_children, false);
  auto children_w = unwrap (children_i, gi::transfer_none, direction_in);
  auto children_to_c = children_w.gobj_(false);
  auto child_type_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant**) (children_to_c), (gsize) (children_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_boolean (gboolean value);
// ::GVariant* g_variant_new_boolean (gboolean value);
GLib::Variant base::VariantBase::new_boolean (gboolean value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_boolean;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gboolean) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_byte (guint8 value);
// ::GVariant* g_variant_new_byte (guint8 value);
GLib::Variant base::VariantBase::new_byte (guint8 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint8 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_byte;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint8) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_bytestring (const gchar* string);
// ::GVariant* g_variant_new_bytestring (const guint8* string);
GLib::Variant base::VariantBase::new_bytestring (const std::vector<guint8> & string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const guint8* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_bytestring;
  auto string_i = detail::make_list_unwrap_range<traits::ctype<guint8>::type> (string);
  auto string_w = unwrap (string_i, gi::transfer_none, direction_in);
  auto string_to_c = string_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const guint8*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_bytestring_array (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_bytestring_array (const char** strv, gssize length);
GLib::Variant base::VariantBase::new_bytestring_array (std::string * strv, gssize length) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_bytestring_array;
  auto strv_i = detail::make_list_unwrap_range (strv, length, false);
  auto strv_w = unwrap (strv_i, gi::transfer_none, direction_in);
  auto strv_to_c = strv_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_dict_entry (GVariant* key, GVariant* value);
// ::GVariant* g_variant_new_dict_entry (::GVariant* key, ::GVariant* value);
GLib::Variant base::VariantBase::new_dict_entry (GLib::Variant key, GLib::Variant value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_dict_entry;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (key_to_c), (::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_double (gdouble value);
// ::GVariant* g_variant_new_double (gdouble value);
GLib::Variant base::VariantBase::new_double (gdouble value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gdouble value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_double;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gdouble) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_fixed_array (const GVariantType* element_type, gconstpointer elements, gsize n_elements, gsize element_size);
// ::GVariant* g_variant_new_fixed_array (const ::GVariantType* element_type, const void* elements, gsize n_elements, gsize element_size);
GLib::Variant base::VariantBase::new_fixed_array (const GLib::VariantType & element_type, const void* elements, gsize n_elements, gsize element_size) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* element_type, const void* elements, gsize n_elements, gsize element_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_fixed_array;
  auto element_size_to_c = element_size;
  auto n_elements_to_c = n_elements;
  auto elements_to_c = elements;
  auto element_type_to_c = gi::unwrap (element_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (element_type_to_c), (const void*) (elements_to_c), (gsize) (n_elements_to_c), (gsize) (element_size_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_from_bytes (const GVariantType* type, GBytes* bytes, gboolean trusted);
// ::GVariant* g_variant_new_from_bytes (const ::GVariantType* type, ::GBytes* bytes, gboolean trusted);
GLib::Variant base::VariantBase::new_from_bytes (const GLib::VariantType & type, GLib::Bytes bytes, gboolean trusted) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* type, ::GBytes* bytes, gboolean trusted);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_from_bytes;
  auto trusted_to_c = trusted;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (type_to_c), (::GBytes*) (bytes_to_c), (gboolean) (trusted_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_from_data (const GVariantType* type, gconstpointer data, gsize size, gboolean trusted, GDestroyNotify notify, gpointer user_data);
// ::GVariant* g_variant_new_from_data (const ::GVariantType* type, const guint8* data, gsize size, gboolean trusted, GLib::DestroyNotify::cfunction_type notify, void* user_data);
// SKIP; callback misses closure info

// GVariant* g_variant_new_handle (gint32 value);
// ::GVariant* g_variant_new_handle (gint32 value);
GLib::Variant base::VariantBase::new_handle (gint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_handle;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_int16 (gint16 value);
// ::GVariant* g_variant_new_int16 (gint16 value);
GLib::Variant base::VariantBase::new_int16 (gint16 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint16 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int16;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint16) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_int32 (gint32 value);
// ::GVariant* g_variant_new_int32 (gint32 value);
GLib::Variant base::VariantBase::new_int32 (gint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int32;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_int64 (gint64 value);
// ::GVariant* g_variant_new_int64 (gint64 value);
GLib::Variant base::VariantBase::new_int64 (gint64 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (gint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_int64;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((gint64) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_maybe (const GVariantType* child_type, GVariant* child);
// ::GVariant* g_variant_new_maybe (const ::GVariantType* child_type, ::GVariant* child);
GLib::Variant base::VariantBase::new_maybe (const GLib::VariantType & child_type, GLib::Variant child) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant* child);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_maybe;
  auto child_to_c = gi::unwrap (child, gi::transfer_none, gi::direction_in);
  auto child_type_to_c = gi::unwrap (child_type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
GLib::Variant base::VariantBase::new_maybe () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const ::GVariantType* child_type, ::GVariant* child);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_maybe;
  auto child_to_c = nullptr;
  auto child_type_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (child_type_to_c), (::GVariant*) (child_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_object_path (const gchar* object_path);
// ::GVariant* g_variant_new_object_path (const char* object_path);
GLib::Variant base::VariantBase::new_object_path (const std::string & object_path) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* object_path);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_object_path;
  auto object_path_to_c = gi::unwrap (object_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (object_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_objv (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_objv (const char** strv, gssize length);
GLib::Variant base::VariantBase::new_objv (std::string * strv, gssize length) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_objv;
  auto strv_i = detail::make_list_unwrap_range (strv, length, false);
  auto strv_w = unwrap (strv_i, gi::transfer_none, direction_in);
  auto strv_to_c = strv_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_parsed (const gchar* format);
// ::GVariant* g_variant_new_parsed (const char* format);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_new_parsed_va (const gchar* format, va_list* app);
// ::GVariant* g_variant_new_parsed_va (const char* format,  app);
// IGNORE; not introspectable, app type  not supported

// GVariant* g_variant_new_printf (const gchar* format_string);
// ::GVariant* g_variant_new_printf (const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_new_signature (const gchar* signature);
// ::GVariant* g_variant_new_signature (const char* signature);
GLib::Variant base::VariantBase::new_signature (const std::string & signature) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* signature);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_signature;
  auto signature_to_c = gi::unwrap (signature, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (signature_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_string (const gchar* string);
// ::GVariant* g_variant_new_string (const char* string);
GLib::Variant base::VariantBase::new_string (const std::string & string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_strv (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_strv (const char** strv, gssize length);
GLib::Variant base::VariantBase::new_strv (std::string * strv, gssize length) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (const char** strv, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_strv;
  auto strv_i = detail::make_list_unwrap_range (strv, length, false);
  auto strv_w = unwrap (strv_i, gi::transfer_none, direction_in);
  auto strv_to_c = strv_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((const char**) (strv_to_c), (gssize) (strv_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_take_string (gchar* string);
// ::GVariant* g_variant_new_take_string (char* string);
GLib::Variant base::VariantBase::new_take_string (const std::string & string) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_take_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_tuple (GVariant* const* children, gsize n_children);
// ::GVariant* g_variant_new_tuple (::GVariant** children, gsize n_children);
GLib::Variant base::VariantBase::new_tuple (GLib::Variant * children, gsize n_children) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant** children, gsize n_children);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_tuple;
  auto children_i = detail::make_list_unwrap_range (children, n_children, false);
  auto children_w = unwrap (children_i, gi::transfer_none, direction_in);
  auto children_to_c = children_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::GVariant**) (children_to_c), (gsize) (children_w.size()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_uint16 (guint16 value);
// ::GVariant* g_variant_new_uint16 (guint16 value);
GLib::Variant base::VariantBase::new_uint16 (guint16 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint16 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint16;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint16) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_uint32 (guint32 value);
// ::GVariant* g_variant_new_uint32 (guint32 value);
GLib::Variant base::VariantBase::new_uint32 (guint32 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint32 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint32;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint32) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_uint64 (guint64 value);
// ::GVariant* g_variant_new_uint64 (guint64 value);
GLib::Variant base::VariantBase::new_uint64 (guint64 value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (guint64 value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_uint64;
  auto value_to_c = value;
  auto _temp_ret = call_wrap_v ((guint64) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_new_va (const gchar* format_string, const gchar** endptr, va_list* app);
// ::GVariant* g_variant_new_va (const char* format_string, const char* endptr,  app);
// IGNORE; not introspectable, app type  not supported, inconsistent in endptr pointer depth (2 vs 1)

// GVariant* g_variant_new_variant (GVariant* value);
// ::GVariant* g_variant_new_variant (::GVariant* value);
GLib::Variant base::VariantBase::new_variant (GLib::Variant value) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_new_variant;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* g_variant_byteswap (GVariant* value);
// ::GVariant* g_variant_byteswap (::GVariant* value);
GLib::Variant base::VariantBase::byteswap () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_byteswap;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_variant_check_format_string (GVariant* value, const gchar* format_string, gboolean copy_only);
// gboolean g_variant_check_format_string (::GVariant* value, const char* format_string, gboolean copy_only);
bool base::VariantBase::check_format_string (const std::string & format_string, gboolean copy_only) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value, const char* format_string, gboolean copy_only);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_check_format_string;
  auto copy_only_to_c = copy_only;
  auto format_string_to_c = gi::unwrap (format_string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (format_string_to_c), (gboolean) (copy_only_to_c));
  return _temp_ret;
}

// GVariantClass g_variant_classify (GVariant* value);
// ::GVariantClass g_variant_classify (::GVariant* value);
GLib::VariantClass base::VariantBase::classify () noexcept
{
  typedef ::GVariantClass (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_classify;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gint g_variant_compare (gconstpointer one, gconstpointer two);
// gint g_variant_compare (const ::GVariant* one, const ::GVariant* two);
gint base::VariantBase::compare (const GLib::Variant & two) const noexcept
{
  typedef gint (*call_wrap_t) (const ::GVariant* one, const ::GVariant* two);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_compare;
  auto two_to_c = gi::unwrap (two, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()), (const ::GVariant*) (two_to_c));
  return _temp_ret;
}

// gchar* g_variant_dup_bytestring (GVariant* value, gsize* length);
// guint8* g_variant_dup_bytestring (::GVariant* value, gsize* length);
std::vector<guint8> base::VariantBase::dup_bytestring (gsize * length) noexcept
{
  typedef guint8* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_bytestring;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<guint8>, gsize> base::VariantBase::dup_bytestring () noexcept
{
  typedef guint8* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_bytestring;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_full), length_o);
}

// gchar** g_variant_dup_bytestring_array (GVariant* value, gsize* length);
// char** g_variant_dup_bytestring_array (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::dup_bytestring_array () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_bytestring_array;
  gsize length;
  std::vector<std::string> _temp_ret;
  auto _ret_o = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_full, length, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// gchar** g_variant_dup_objv (GVariant* value, gsize* length);
// char** g_variant_dup_objv (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::dup_objv (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::VariantBase::dup_objv () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// gchar* g_variant_dup_string (GVariant* value, gsize* length);
// char* g_variant_dup_string (::GVariant* value, gsize* length);
std::string base::VariantBase::dup_string (gsize & length) noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  length = length_o;
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<std::string, gsize> base::VariantBase::dup_string () noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), length_o);
}

// gchar** g_variant_dup_strv (GVariant* value, gsize* length);
// char** g_variant_dup_strv (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::dup_strv (gsize * length) noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}
std::tuple<std::vector<std::string>, gsize> base::VariantBase::dup_strv () noexcept
{
  typedef char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dup_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full), length_o);
}

// gboolean g_variant_equal (gconstpointer one, gconstpointer two);
// gboolean g_variant_equal (const ::GVariant* one, const ::GVariant* two);
bool base::VariantBase::equal (const GLib::Variant & two) const noexcept
{
  typedef gboolean (*call_wrap_t) (const ::GVariant* one, const ::GVariant* two);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_equal;
  auto two_to_c = gi::unwrap (two, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()), (const ::GVariant*) (two_to_c));
  return _temp_ret;
}

// void g_variant_get (GVariant* value, const gchar* format_string);
// void g_variant_get (::GVariant* value, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// gboolean g_variant_get_boolean (GVariant* value);
// gboolean g_variant_get_boolean (::GVariant* value);
bool base::VariantBase::get_boolean () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_boolean;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint8 g_variant_get_byte (GVariant* value);
// guint8 g_variant_get_byte (::GVariant* value);
guint8 base::VariantBase::get_byte () noexcept
{
  typedef guint8 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_byte;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_variant_get_bytestring (GVariant* value);
// const guint8* g_variant_get_bytestring (::GVariant* value);
std::vector<guint8> base::VariantBase::get_bytestring () noexcept
{
  typedef const guint8* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_bytestring;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::detail::wrap_list<guint8> (_temp_ret, gi::transfer_none);
}

// const gchar** g_variant_get_bytestring_array (GVariant* value, gsize* length);
// const char** g_variant_get_bytestring_array (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::get_bytestring_array () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_bytestring_array;
  gsize length;
  std::vector<std::string> _temp_ret;
  auto _ret_o = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length));
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_container, length, _temp_ret.data());
  g_free (_ret_o);
  return _temp_ret;
}

// void g_variant_get_child (GVariant* value, gsize index_, const gchar* format_string);
// void g_variant_get_child (::GVariant* value, gsize index_, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_get_child_value (GVariant* value, gsize index_);
// ::GVariant* g_variant_get_child_value (::GVariant* value, gsize index_);
GLib::Variant base::VariantBase::get_child_value (gsize index_) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value, gsize index_);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_child_value;
  auto index__to_c = index_;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize) (index__to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gconstpointer g_variant_get_data (GVariant* value);
// const void* g_variant_get_data (::GVariant* value);
gconstpointer base::VariantBase::get_data () noexcept
{
  typedef const void* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_data;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// GBytes* g_variant_get_data_as_bytes (GVariant* value);
// ::GBytes* g_variant_get_data_as_bytes (::GVariant* value);
GLib::Bytes base::VariantBase::get_data_as_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_data_as_bytes;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gdouble g_variant_get_double (GVariant* value);
// gdouble g_variant_get_double (::GVariant* value);
gdouble base::VariantBase::get_double () noexcept
{
  typedef gdouble (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_double;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gconstpointer g_variant_get_fixed_array (GVariant* value, gsize* n_elements, gsize element_size);
// const void** g_variant_get_fixed_array (::GVariant* value, gsize* n_elements, gsize element_size);
std::vector<gpointer> base::VariantBase::get_fixed_array (gsize element_size) noexcept
{
  typedef const void** (*call_wrap_t) (::GVariant* value, gsize* n_elements, gsize element_size);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_fixed_array;
  auto element_size_to_c = element_size;
  gsize n_elements;
  std::vector<gpointer> _temp_ret;
  auto _ret_o = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&n_elements), (gsize) (element_size_to_c));
  _temp_ret.resize(n_elements);
  detail::wrap_array (_ret_o, gi::transfer_none, n_elements, _temp_ret.data());
  return _temp_ret;
}

// gint32 g_variant_get_handle (GVariant* value);
// gint32 g_variant_get_handle (::GVariant* value);
gint32 base::VariantBase::get_handle () noexcept
{
  typedef gint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_handle;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint16 g_variant_get_int16 (GVariant* value);
// gint16 g_variant_get_int16 (::GVariant* value);
gint16 base::VariantBase::get_int16 () noexcept
{
  typedef gint16 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_int16;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint32 g_variant_get_int32 (GVariant* value);
// gint32 g_variant_get_int32 (::GVariant* value);
gint32 base::VariantBase::get_int32 () noexcept
{
  typedef gint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_int32;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gint64 g_variant_get_int64 (GVariant* value);
// gint64 g_variant_get_int64 (::GVariant* value);
gint64 base::VariantBase::get_int64 () noexcept
{
  typedef gint64 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_int64;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// GVariant* g_variant_get_maybe (GVariant* value);
// ::GVariant* g_variant_get_maybe (::GVariant* value);
GLib::Variant base::VariantBase::get_maybe () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_maybe;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_variant_get_normal_form (GVariant* value);
// ::GVariant* g_variant_get_normal_form (::GVariant* value);
GLib::Variant base::VariantBase::get_normal_form () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_normal_form;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const gchar** g_variant_get_objv (GVariant* value, gsize* length);
// const char** g_variant_get_objv (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::get_objv (gsize * length) noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}
std::tuple<std::vector<std::string>, gsize> base::VariantBase::get_objv () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_objv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container), length_o);
}

// gsize g_variant_get_size (GVariant* value);
// gsize g_variant_get_size (::GVariant* value);
gsize base::VariantBase::get_size () noexcept
{
  typedef gsize (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_size;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// const gchar* g_variant_get_string (GVariant* value, gsize* length);
// const char* g_variant_get_string (::GVariant* value, gsize* length);
std::string base::VariantBase::get_string (gsize * length) noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
std::tuple<std::string, gsize> base::VariantBase::get_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_string;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out), length_o);
}

// const gchar** g_variant_get_strv (GVariant* value, gsize* length);
// const char** g_variant_get_strv (::GVariant* value, gsize* length);
std::vector<std::string> base::VariantBase::get_strv (gsize * length) noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (length ? &length_o : nullptr));
  if (length) *length = length_o;
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container);
}
std::tuple<std::vector<std::string>, gsize> base::VariantBase::get_strv () noexcept
{
  typedef const char** (*call_wrap_t) (::GVariant* value, gsize* length);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_strv;
  gsize length_o {};
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gsize*) (&length_o));
  return std::make_tuple (gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_container), length_o);
}

// const GVariantType* g_variant_get_type (GVariant* value);
// const ::GVariantType* g_variant_get_type (::GVariant* value);
GLib::VariantType base::VariantBase::get_type () noexcept
{
  typedef const ::GVariantType* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_type;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_variant_get_type_string (GVariant* value);
// const char* g_variant_get_type_string (::GVariant* value);
std::string base::VariantBase::get_type_string () noexcept
{
  typedef const char* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_type_string;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint16 g_variant_get_uint16 (GVariant* value);
// guint16 g_variant_get_uint16 (::GVariant* value);
guint16 base::VariantBase::get_uint16 () noexcept
{
  typedef guint16 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_uint16;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint32 g_variant_get_uint32 (GVariant* value);
// guint32 g_variant_get_uint32 (::GVariant* value);
guint32 base::VariantBase::get_uint32 () noexcept
{
  typedef guint32 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_uint32;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// guint64 g_variant_get_uint64 (GVariant* value);
// guint64 g_variant_get_uint64 (::GVariant* value);
guint64 base::VariantBase::get_uint64 () noexcept
{
  typedef guint64 (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_uint64;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// void g_variant_get_va (GVariant* value, const gchar* format_string, const gchar** endptr, va_list* app);
// void g_variant_get_va (::GVariant* value, const char* format_string, const char* endptr,  app);
// IGNORE; not introspectable, app type  not supported, inconsistent in endptr pointer depth (2 vs 1)

// GVariant* g_variant_get_variant (GVariant* value);
// ::GVariant* g_variant_get_variant (::GVariant* value);
GLib::Variant base::VariantBase::get_variant () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_get_variant;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint g_variant_hash (gconstpointer value);
// guint g_variant_hash (const ::GVariant* value);
guint base::VariantBase::hash () const noexcept
{
  typedef guint (*call_wrap_t) (const ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_hash;
  auto _temp_ret = call_wrap_v ((const ::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_container (GVariant* value);
// gboolean g_variant_is_container (::GVariant* value);
bool base::VariantBase::is_container () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_container;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_floating (GVariant* value);
// gboolean g_variant_is_floating (::GVariant* value);
bool base::VariantBase::is_floating () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_floating;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_normal_form (GVariant* value);
// gboolean g_variant_is_normal_form (::GVariant* value);
bool base::VariantBase::is_normal_form () noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_normal_form;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gboolean g_variant_is_of_type (GVariant* value, const GVariantType* type);
// gboolean g_variant_is_of_type (::GVariant* value, const ::GVariantType* type);
bool base::VariantBase::is_of_type (const GLib::VariantType & type) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariant* value, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_of_type;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const ::GVariantType*) (type_to_c));
  return _temp_ret;
}

// GVariantIter* g_variant_iter_new (GVariant* value);
// ::GVariantIter* g_variant_iter_new (::GVariant* value);
GLib::VariantIter base::VariantBase::iter_new () noexcept
{
  typedef ::GVariantIter* (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_iter_new;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_variant_lookup (GVariant* dictionary, const gchar* key, const gchar* format_string);
// gboolean g_variant_lookup (::GVariant* dictionary, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_lookup_value (GVariant* dictionary, const gchar* key, const GVariantType* expected_type);
// ::GVariant* g_variant_lookup_value (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
GLib::Variant base::VariantBase::lookup_value (const std::string & key, const GLib::VariantType & expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_lookup_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::VariantBase::lookup_value (const std::string & key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_lookup_value;
  auto expected_type_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gsize g_variant_n_children (GVariant* value);
// gsize g_variant_n_children (::GVariant* value);
gsize base::VariantBase::n_children () noexcept
{
  typedef gsize (*call_wrap_t) (::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_n_children;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()));
  return _temp_ret;
}

// gchar* g_variant_print (GVariant* value, gboolean type_annotate);
// char* g_variant_print (::GVariant* value, gboolean type_annotate);
std::string base::VariantBase::print (gboolean type_annotate) noexcept
{
  typedef char* (*call_wrap_t) (::GVariant* value, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_print;
  auto type_annotate_to_c = type_annotate;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GString* g_variant_print_string (GVariant* value, GString* string, gboolean type_annotate);
// ::GString* g_variant_print_string (::GVariant* value, ::GString* string, gboolean type_annotate);
GLib::String base::VariantBase::print_string (GLib::String string, gboolean type_annotate) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GVariant* value, ::GString* string, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_print_string;
  auto type_annotate_to_c = type_annotate;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (::GString*) (string_to_c), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::String base::VariantBase::print_string (gboolean type_annotate) noexcept
{
  typedef ::GString* (*call_wrap_t) (::GVariant* value, ::GString* string, gboolean type_annotate);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_print_string;
  auto type_annotate_to_c = type_annotate;
  auto string_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GVariant*) (gobj_()), (::GString*) (string_to_c), (gboolean) (type_annotate_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariant* g_variant_ref (GVariant* value);
// ::GVariant* g_variant_ref (::GVariant* value);
// IGNORE; marked ignore

// GVariant* g_variant_ref_sink (GVariant* value);
// ::GVariant* g_variant_ref_sink (::GVariant* value);
// IGNORE; marked ignore

// void g_variant_store (GVariant* value, gpointer data);
// void g_variant_store (::GVariant* value, void* data);
void base::VariantBase::store (void* data) noexcept
{
  typedef void (*call_wrap_t) (::GVariant* value, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_store;
  auto data_to_c = data;
  call_wrap_v ((::GVariant*) (gobj_()), (void*) (data_to_c));
}

// GVariant* g_variant_take_ref (GVariant* value);
// ::GVariant* g_variant_take_ref (::GVariant* value);
// IGNORE; marked ignore

// void g_variant_unref (GVariant* value);
// void g_variant_unref (::GVariant* value);
// IGNORE; marked ignore

// gboolean g_variant_is_object_path (const gchar* string);
// gboolean g_variant_is_object_path (const char* string);
bool base::VariantBase::is_object_path (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_object_path;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// gboolean g_variant_is_signature (const gchar* string);
// gboolean g_variant_is_signature (const char* string);
bool base::VariantBase::is_signature (const std::string & string) noexcept
{
  typedef gboolean (*call_wrap_t) (const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_is_signature;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (string_to_c));
  return _temp_ret;
}

// GVariant* g_variant_parse (const GVariantType* type, const gchar* text, const gchar* limit, const gchar** endptr, GError ** error);
// ::GVariant* g_variant_parse (const ::GVariantType* type, const char* text, const char* limit, const char* endptr, GError ** error);
// SKIP; inconsistent in endptr pointer depth (2 vs 1)

// gchar* g_variant_parse_error_print_context (GError* error, const gchar* source_str);
// char* g_variant_parse_error_print_context (::GError* error, const char* source_str);
std::string base::VariantBase::parse_error_print_context (GLib::Error error, const std::string & source_str) noexcept
{
  typedef char* (*call_wrap_t) (::GError* error, const char* source_str);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_parse_error_print_context;
  auto source_str_to_c = gi::unwrap (source_str, gi::transfer_none, gi::direction_in);
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GError*) (error_to_c), (const char*) (source_str_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GQuark g_variant_parse_error_quark ();
// ::GQuark g_variant_parse_error_quark ();
GLib::Quark base::VariantBase::parse_error_quark () noexcept
{
  typedef ::GQuark (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_parse_error_quark;
  auto _temp_ret = call_wrap_v ();
  return _temp_ret;
}

// GQuark g_variant_parser_get_error_quark ();
// ::GQuark g_variant_parser_get_error_quark ();
// IGNORE; deprecated


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variant_extra_def_impl.hpp>)
#include <glib/variant_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variant_extra_impl.hpp>)
#include <glib/variant_extra_impl.hpp>
#endif
#endif

#endif
