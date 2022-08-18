// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANT_HPP_
#define _GI_GLIB_VARIANT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Bytes;
class Error;
class String;
class VariantIter;
class VariantType;

class Variant;

namespace base {


#define GI_GLIB_VARIANT_BASE base::VariantBase
class VariantBase : public detail::VariantWrapper
{
typedef detail::VariantWrapper super_type;
public:

VariantBase (std::nullptr_t = nullptr) : super_type() {}

// GVariant* g_variant_new (const gchar* format_string);
// ::GVariant* g_variant_new (const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_new_array (const GVariantType* child_type, GVariant* const* children, gsize n_children);
// ::GVariant* g_variant_new_array (const ::GVariantType* child_type, ::GVariant** children, gsize n_children);
static GI_INLINE_DECL GLib::Variant new_array (const GLib::VariantType & child_type, GLib::Variant * children, gsize n_children) noexcept;
static GI_INLINE_DECL GLib::Variant new_array (GLib::Variant * children, gsize n_children) noexcept;

// GVariant* g_variant_new_boolean (gboolean value);
// ::GVariant* g_variant_new_boolean (gboolean value);
static GI_INLINE_DECL GLib::Variant new_boolean (gboolean value) noexcept;

// GVariant* g_variant_new_byte (guint8 value);
// ::GVariant* g_variant_new_byte (guint8 value);
static GI_INLINE_DECL GLib::Variant new_byte (guint8 value) noexcept;

// GVariant* g_variant_new_bytestring (const gchar* string);
// ::GVariant* g_variant_new_bytestring (const guint8* string);
static GI_INLINE_DECL GLib::Variant new_bytestring (const std::vector<guint8> & string) noexcept;

// GVariant* g_variant_new_bytestring_array (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_bytestring_array (const char** strv, gssize length);
static GI_INLINE_DECL GLib::Variant new_bytestring_array (std::string * strv, gssize length) noexcept;

// GVariant* g_variant_new_dict_entry (GVariant* key, GVariant* value);
// ::GVariant* g_variant_new_dict_entry (::GVariant* key, ::GVariant* value);
static GI_INLINE_DECL GLib::Variant new_dict_entry (GLib::Variant key, GLib::Variant value) noexcept;

// GVariant* g_variant_new_double (gdouble value);
// ::GVariant* g_variant_new_double (gdouble value);
static GI_INLINE_DECL GLib::Variant new_double (gdouble value) noexcept;

// GVariant* g_variant_new_fixed_array (const GVariantType* element_type, gconstpointer elements, gsize n_elements, gsize element_size);
// ::GVariant* g_variant_new_fixed_array (const ::GVariantType* element_type, const void* elements, gsize n_elements, gsize element_size);
static GI_INLINE_DECL GLib::Variant new_fixed_array (const GLib::VariantType & element_type, const void* elements, gsize n_elements, gsize element_size) noexcept;

// GVariant* g_variant_new_from_bytes (const GVariantType* type, GBytes* bytes, gboolean trusted);
// ::GVariant* g_variant_new_from_bytes (const ::GVariantType* type, ::GBytes* bytes, gboolean trusted);
static GI_INLINE_DECL GLib::Variant new_from_bytes (const GLib::VariantType & type, GLib::Bytes bytes, gboolean trusted) noexcept;

// GVariant* g_variant_new_from_data (const GVariantType* type, gconstpointer data, gsize size, gboolean trusted, GDestroyNotify notify, gpointer user_data);
// ::GVariant* g_variant_new_from_data (const ::GVariantType* type, const guint8* data, gsize size, gboolean trusted, GLib::DestroyNotify::cfunction_type notify, void* user_data);
// SKIP; callback misses closure info

// GVariant* g_variant_new_handle (gint32 value);
// ::GVariant* g_variant_new_handle (gint32 value);
static GI_INLINE_DECL GLib::Variant new_handle (gint32 value) noexcept;

// GVariant* g_variant_new_int16 (gint16 value);
// ::GVariant* g_variant_new_int16 (gint16 value);
static GI_INLINE_DECL GLib::Variant new_int16 (gint16 value) noexcept;

// GVariant* g_variant_new_int32 (gint32 value);
// ::GVariant* g_variant_new_int32 (gint32 value);
static GI_INLINE_DECL GLib::Variant new_int32 (gint32 value) noexcept;

// GVariant* g_variant_new_int64 (gint64 value);
// ::GVariant* g_variant_new_int64 (gint64 value);
static GI_INLINE_DECL GLib::Variant new_int64 (gint64 value) noexcept;

// GVariant* g_variant_new_maybe (const GVariantType* child_type, GVariant* child);
// ::GVariant* g_variant_new_maybe (const ::GVariantType* child_type, ::GVariant* child);
static GI_INLINE_DECL GLib::Variant new_maybe (const GLib::VariantType & child_type, GLib::Variant child) noexcept;
static GI_INLINE_DECL GLib::Variant new_maybe () noexcept;

// GVariant* g_variant_new_object_path (const gchar* object_path);
// ::GVariant* g_variant_new_object_path (const char* object_path);
static GI_INLINE_DECL GLib::Variant new_object_path (const std::string & object_path) noexcept;

// GVariant* g_variant_new_objv (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_objv (const char** strv, gssize length);
static GI_INLINE_DECL GLib::Variant new_objv (std::string * strv, gssize length) noexcept;

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
static GI_INLINE_DECL GLib::Variant new_signature (const std::string & signature) noexcept;

// GVariant* g_variant_new_string (const gchar* string);
// ::GVariant* g_variant_new_string (const char* string);
static GI_INLINE_DECL GLib::Variant new_string (const std::string & string) noexcept;

// GVariant* g_variant_new_strv (const gchar* const* strv, gssize length);
// ::GVariant* g_variant_new_strv (const char** strv, gssize length);
static GI_INLINE_DECL GLib::Variant new_strv (std::string * strv, gssize length) noexcept;

// GVariant* g_variant_new_take_string (gchar* string);
// ::GVariant* g_variant_new_take_string (char* string);
static GI_INLINE_DECL GLib::Variant new_take_string (const std::string & string) noexcept;

// GVariant* g_variant_new_tuple (GVariant* const* children, gsize n_children);
// ::GVariant* g_variant_new_tuple (::GVariant** children, gsize n_children);
static GI_INLINE_DECL GLib::Variant new_tuple (GLib::Variant * children, gsize n_children) noexcept;

// GVariant* g_variant_new_uint16 (guint16 value);
// ::GVariant* g_variant_new_uint16 (guint16 value);
static GI_INLINE_DECL GLib::Variant new_uint16 (guint16 value) noexcept;

// GVariant* g_variant_new_uint32 (guint32 value);
// ::GVariant* g_variant_new_uint32 (guint32 value);
static GI_INLINE_DECL GLib::Variant new_uint32 (guint32 value) noexcept;

// GVariant* g_variant_new_uint64 (guint64 value);
// ::GVariant* g_variant_new_uint64 (guint64 value);
static GI_INLINE_DECL GLib::Variant new_uint64 (guint64 value) noexcept;

// GVariant* g_variant_new_va (const gchar* format_string, const gchar** endptr, va_list* app);
// ::GVariant* g_variant_new_va (const char* format_string, const char* endptr,  app);
// IGNORE; not introspectable, app type  not supported, inconsistent in endptr pointer depth (2 vs 1)

// GVariant* g_variant_new_variant (GVariant* value);
// ::GVariant* g_variant_new_variant (::GVariant* value);
static GI_INLINE_DECL GLib::Variant new_variant (GLib::Variant value) noexcept;

// GVariant* g_variant_byteswap (GVariant* value);
// ::GVariant* g_variant_byteswap (::GVariant* value);
GI_INLINE_DECL GLib::Variant byteswap () noexcept;

// gboolean g_variant_check_format_string (GVariant* value, const gchar* format_string, gboolean copy_only);
// gboolean g_variant_check_format_string (::GVariant* value, const char* format_string, gboolean copy_only);
GI_INLINE_DECL bool check_format_string (const std::string & format_string, gboolean copy_only) noexcept;

// GVariantClass g_variant_classify (GVariant* value);
// ::GVariantClass g_variant_classify (::GVariant* value);
GI_INLINE_DECL GLib::VariantClass classify () noexcept;

// gint g_variant_compare (gconstpointer one, gconstpointer two);
// gint g_variant_compare (const ::GVariant* one, const ::GVariant* two);
GI_INLINE_DECL gint compare (const GLib::Variant & two) const noexcept;

// gchar* g_variant_dup_bytestring (GVariant* value, gsize* length);
// guint8* g_variant_dup_bytestring (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<guint8> dup_bytestring (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<guint8>, gsize> dup_bytestring () noexcept;

// gchar** g_variant_dup_bytestring_array (GVariant* value, gsize* length);
// char** g_variant_dup_bytestring_array (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> dup_bytestring_array () noexcept;

// gchar** g_variant_dup_objv (GVariant* value, gsize* length);
// char** g_variant_dup_objv (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> dup_objv (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> dup_objv () noexcept;

// gchar* g_variant_dup_string (GVariant* value, gsize* length);
// char* g_variant_dup_string (::GVariant* value, gsize* length);
GI_INLINE_DECL std::string dup_string (gsize & length) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> dup_string () noexcept;

// gchar** g_variant_dup_strv (GVariant* value, gsize* length);
// char** g_variant_dup_strv (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> dup_strv (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> dup_strv () noexcept;

// gboolean g_variant_equal (gconstpointer one, gconstpointer two);
// gboolean g_variant_equal (const ::GVariant* one, const ::GVariant* two);
GI_INLINE_DECL bool equal (const GLib::Variant & two) const noexcept;

// void g_variant_get (GVariant* value, const gchar* format_string);
// void g_variant_get (::GVariant* value, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// gboolean g_variant_get_boolean (GVariant* value);
// gboolean g_variant_get_boolean (::GVariant* value);
GI_INLINE_DECL bool get_boolean () noexcept;

// guint8 g_variant_get_byte (GVariant* value);
// guint8 g_variant_get_byte (::GVariant* value);
GI_INLINE_DECL guint8 get_byte () noexcept;

// const gchar* g_variant_get_bytestring (GVariant* value);
// const guint8* g_variant_get_bytestring (::GVariant* value);
GI_INLINE_DECL std::vector<guint8> get_bytestring () noexcept;

// const gchar** g_variant_get_bytestring_array (GVariant* value, gsize* length);
// const char** g_variant_get_bytestring_array (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_bytestring_array () noexcept;

// void g_variant_get_child (GVariant* value, gsize index_, const gchar* format_string);
// void g_variant_get_child (::GVariant* value, gsize index_, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_get_child_value (GVariant* value, gsize index_);
// ::GVariant* g_variant_get_child_value (::GVariant* value, gsize index_);
GI_INLINE_DECL GLib::Variant get_child_value (gsize index_) noexcept;

// gconstpointer g_variant_get_data (GVariant* value);
// const void* g_variant_get_data (::GVariant* value);
GI_INLINE_DECL gconstpointer get_data () noexcept;

// GBytes* g_variant_get_data_as_bytes (GVariant* value);
// ::GBytes* g_variant_get_data_as_bytes (::GVariant* value);
GI_INLINE_DECL GLib::Bytes get_data_as_bytes () noexcept;

// gdouble g_variant_get_double (GVariant* value);
// gdouble g_variant_get_double (::GVariant* value);
GI_INLINE_DECL gdouble get_double () noexcept;

// gconstpointer g_variant_get_fixed_array (GVariant* value, gsize* n_elements, gsize element_size);
// const void** g_variant_get_fixed_array (::GVariant* value, gsize* n_elements, gsize element_size);
GI_INLINE_DECL std::vector<gpointer> get_fixed_array (gsize element_size) noexcept;

// gint32 g_variant_get_handle (GVariant* value);
// gint32 g_variant_get_handle (::GVariant* value);
GI_INLINE_DECL gint32 get_handle () noexcept;

// gint16 g_variant_get_int16 (GVariant* value);
// gint16 g_variant_get_int16 (::GVariant* value);
GI_INLINE_DECL gint16 get_int16 () noexcept;

// gint32 g_variant_get_int32 (GVariant* value);
// gint32 g_variant_get_int32 (::GVariant* value);
GI_INLINE_DECL gint32 get_int32 () noexcept;

// gint64 g_variant_get_int64 (GVariant* value);
// gint64 g_variant_get_int64 (::GVariant* value);
GI_INLINE_DECL gint64 get_int64 () noexcept;

// GVariant* g_variant_get_maybe (GVariant* value);
// ::GVariant* g_variant_get_maybe (::GVariant* value);
GI_INLINE_DECL GLib::Variant get_maybe () noexcept;

// GVariant* g_variant_get_normal_form (GVariant* value);
// ::GVariant* g_variant_get_normal_form (::GVariant* value);
GI_INLINE_DECL GLib::Variant get_normal_form () noexcept;

// const gchar** g_variant_get_objv (GVariant* value, gsize* length);
// const char** g_variant_get_objv (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_objv (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_objv () noexcept;

// gsize g_variant_get_size (GVariant* value);
// gsize g_variant_get_size (::GVariant* value);
GI_INLINE_DECL gsize get_size () noexcept;

// const gchar* g_variant_get_string (GVariant* value, gsize* length);
// const char* g_variant_get_string (::GVariant* value, gsize* length);
GI_INLINE_DECL std::string get_string (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::string, gsize> get_string () noexcept;

// const gchar** g_variant_get_strv (GVariant* value, gsize* length);
// const char** g_variant_get_strv (::GVariant* value, gsize* length);
GI_INLINE_DECL std::vector<std::string> get_strv (gsize * length = nullptr) noexcept;
GI_INLINE_DECL std::tuple<std::vector<std::string>, gsize> get_strv () noexcept;

// const GVariantType* g_variant_get_type (GVariant* value);
// const ::GVariantType* g_variant_get_type (::GVariant* value);
GI_INLINE_DECL GLib::VariantType get_type () noexcept;

// const gchar* g_variant_get_type_string (GVariant* value);
// const char* g_variant_get_type_string (::GVariant* value);
GI_INLINE_DECL std::string get_type_string () noexcept;

// guint16 g_variant_get_uint16 (GVariant* value);
// guint16 g_variant_get_uint16 (::GVariant* value);
GI_INLINE_DECL guint16 get_uint16 () noexcept;

// guint32 g_variant_get_uint32 (GVariant* value);
// guint32 g_variant_get_uint32 (::GVariant* value);
GI_INLINE_DECL guint32 get_uint32 () noexcept;

// guint64 g_variant_get_uint64 (GVariant* value);
// guint64 g_variant_get_uint64 (::GVariant* value);
GI_INLINE_DECL guint64 get_uint64 () noexcept;

// void g_variant_get_va (GVariant* value, const gchar* format_string, const gchar** endptr, va_list* app);
// void g_variant_get_va (::GVariant* value, const char* format_string, const char* endptr,  app);
// IGNORE; not introspectable, app type  not supported, inconsistent in endptr pointer depth (2 vs 1)

// GVariant* g_variant_get_variant (GVariant* value);
// ::GVariant* g_variant_get_variant (::GVariant* value);
GI_INLINE_DECL GLib::Variant get_variant () noexcept;

// guint g_variant_hash (gconstpointer value);
// guint g_variant_hash (const ::GVariant* value);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_variant_is_container (GVariant* value);
// gboolean g_variant_is_container (::GVariant* value);
GI_INLINE_DECL bool is_container () noexcept;

// gboolean g_variant_is_floating (GVariant* value);
// gboolean g_variant_is_floating (::GVariant* value);
GI_INLINE_DECL bool is_floating () noexcept;

// gboolean g_variant_is_normal_form (GVariant* value);
// gboolean g_variant_is_normal_form (::GVariant* value);
GI_INLINE_DECL bool is_normal_form () noexcept;

// gboolean g_variant_is_of_type (GVariant* value, const GVariantType* type);
// gboolean g_variant_is_of_type (::GVariant* value, const ::GVariantType* type);
GI_INLINE_DECL bool is_of_type (const GLib::VariantType & type) noexcept;

// GVariantIter* g_variant_iter_new (GVariant* value);
// ::GVariantIter* g_variant_iter_new (::GVariant* value);
GI_INLINE_DECL GLib::VariantIter iter_new () noexcept;

// gboolean g_variant_lookup (GVariant* dictionary, const gchar* key, const gchar* format_string);
// gboolean g_variant_lookup (::GVariant* dictionary, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_lookup_value (GVariant* dictionary, const gchar* key, const GVariantType* expected_type);
// ::GVariant* g_variant_lookup_value (::GVariant* dictionary, const char* key, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant lookup_value (const std::string & key, const GLib::VariantType & expected_type) noexcept;
GI_INLINE_DECL GLib::Variant lookup_value (const std::string & key) noexcept;

// gsize g_variant_n_children (GVariant* value);
// gsize g_variant_n_children (::GVariant* value);
GI_INLINE_DECL gsize n_children () noexcept;

// gchar* g_variant_print (GVariant* value, gboolean type_annotate);
// char* g_variant_print (::GVariant* value, gboolean type_annotate);
GI_INLINE_DECL std::string print (gboolean type_annotate) noexcept;

// GString* g_variant_print_string (GVariant* value, GString* string, gboolean type_annotate);
// ::GString* g_variant_print_string (::GVariant* value, ::GString* string, gboolean type_annotate);
GI_INLINE_DECL GLib::String print_string (GLib::String string, gboolean type_annotate) noexcept;
GI_INLINE_DECL GLib::String print_string (gboolean type_annotate) noexcept;

// GVariant* g_variant_ref (GVariant* value);
// ::GVariant* g_variant_ref (::GVariant* value);
// IGNORE; marked ignore

// GVariant* g_variant_ref_sink (GVariant* value);
// ::GVariant* g_variant_ref_sink (::GVariant* value);
// IGNORE; marked ignore

// void g_variant_store (GVariant* value, gpointer data);
// void g_variant_store (::GVariant* value, void* data);
GI_INLINE_DECL void store (void* data) noexcept;

// GVariant* g_variant_take_ref (GVariant* value);
// ::GVariant* g_variant_take_ref (::GVariant* value);
// IGNORE; marked ignore

// void g_variant_unref (GVariant* value);
// void g_variant_unref (::GVariant* value);
// IGNORE; marked ignore

// gboolean g_variant_is_object_path (const gchar* string);
// gboolean g_variant_is_object_path (const char* string);
static GI_INLINE_DECL bool is_object_path (const std::string & string) noexcept;

// gboolean g_variant_is_signature (const gchar* string);
// gboolean g_variant_is_signature (const char* string);
static GI_INLINE_DECL bool is_signature (const std::string & string) noexcept;

// GVariant* g_variant_parse (const GVariantType* type, const gchar* text, const gchar* limit, const gchar** endptr, GError ** error);
// ::GVariant* g_variant_parse (const ::GVariantType* type, const char* text, const char* limit, const char* endptr, GError ** error);
// SKIP; inconsistent in endptr pointer depth (2 vs 1)

// gchar* g_variant_parse_error_print_context (GError* error, const gchar* source_str);
// char* g_variant_parse_error_print_context (::GError* error, const char* source_str);
static GI_INLINE_DECL std::string parse_error_print_context (GLib::Error error, const std::string & source_str) noexcept;

// GQuark g_variant_parse_error_quark ();
// ::GQuark g_variant_parse_error_quark ();
static GI_INLINE_DECL GLib::Quark parse_error_quark () noexcept;

// GQuark g_variant_parser_get_error_quark ();
// ::GQuark g_variant_parser_get_error_quark ();
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variant_extra_def.hpp>)
#include <glib/variant_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variant_extra.hpp>)
#include <glib/variant_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class Variant : public GI_GLIB_VARIANT_BASE
{ typedef GI_GLIB_VARIANT_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariant>
{ typedef GLib::Variant type; }; 

} // namespace repository

} // namespace gi

#endif
