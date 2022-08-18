// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTTYPE_HPP_
#define _GI_GLIB_VARIANTTYPE_HPP_


namespace gi {

namespace repository {

namespace GLib {


class VariantType;

namespace base {


#define GI_GLIB_VARIANTTYPE_BASE base::VariantTypeBase
class VariantTypeBase : public gi::detail::GBoxedWrapper<VariantTypeBase, ::GVariantType>
{
typedef gi::detail::GBoxedWrapper<VariantTypeBase, ::GVariantType> super_type;
public:

VariantTypeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_type_get_gtype(); } 

// GVariantType* g_variant_type_new (const gchar* type_string);
// ::GVariantType* g_variant_type_new (const char* type_string);
static GI_INLINE_DECL GLib::VariantType new_ (const std::string & type_string) noexcept;

// GVariantType* g_variant_type_new_array (const GVariantType* element);
// ::GVariantType* g_variant_type_new_array (const ::GVariantType* element);
static GI_INLINE_DECL GLib::VariantType new_array (const GLib::VariantType & element) noexcept;

// GVariantType* g_variant_type_new_dict_entry (const GVariantType* key, const GVariantType* value);
// ::GVariantType* g_variant_type_new_dict_entry (const ::GVariantType* key, const ::GVariantType* value);
static GI_INLINE_DECL GLib::VariantType new_dict_entry (const GLib::VariantType & key, const GLib::VariantType & value) noexcept;

// GVariantType* g_variant_type_new_maybe (const GVariantType* element);
// ::GVariantType* g_variant_type_new_maybe (const ::GVariantType* element);
static GI_INLINE_DECL GLib::VariantType new_maybe (const GLib::VariantType & element) noexcept;

// GVariantType* g_variant_type_new_tuple (const GVariantType* const* items, gint length);
// ::GVariantType* g_variant_type_new_tuple (const ::GVariantType** items, gint length);
static GI_INLINE_DECL GLib::VariantType new_tuple (GLib::VariantType * items, gint length) noexcept;

// GVariantType* g_variant_type_copy (const GVariantType* type);
// ::GVariantType* g_variant_type_copy (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType copy () const noexcept;

// gchar* g_variant_type_dup_string (const GVariantType* type);
// char* g_variant_type_dup_string (const ::GVariantType* type);
GI_INLINE_DECL std::string dup_string () const noexcept;

// const GVariantType* g_variant_type_element (const GVariantType* type);
// const ::GVariantType* g_variant_type_element (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType element () const noexcept;

// gboolean g_variant_type_equal (gconstpointer type1, gconstpointer type2);
// gboolean g_variant_type_equal (const ::GVariantType* type1, const ::GVariantType* type2);
GI_INLINE_DECL bool equal (const GLib::VariantType & type2) const noexcept;

// const GVariantType* g_variant_type_first (const GVariantType* type);
// const ::GVariantType* g_variant_type_first (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType first () const noexcept;

// void g_variant_type_free (GVariantType* type);
// void g_variant_type_free (::GVariantType* type);
// IGNORE; marked ignore

// gsize g_variant_type_get_string_length (const GVariantType* type);
// gsize g_variant_type_get_string_length (const ::GVariantType* type);
GI_INLINE_DECL gsize get_string_length () const noexcept;

// guint g_variant_type_hash (gconstpointer type);
// guint g_variant_type_hash (const ::GVariantType* type);
GI_INLINE_DECL guint hash () const noexcept;

// gboolean g_variant_type_is_array (const GVariantType* type);
// gboolean g_variant_type_is_array (const ::GVariantType* type);
GI_INLINE_DECL bool is_array () const noexcept;

// gboolean g_variant_type_is_basic (const GVariantType* type);
// gboolean g_variant_type_is_basic (const ::GVariantType* type);
GI_INLINE_DECL bool is_basic () const noexcept;

// gboolean g_variant_type_is_container (const GVariantType* type);
// gboolean g_variant_type_is_container (const ::GVariantType* type);
GI_INLINE_DECL bool is_container () const noexcept;

// gboolean g_variant_type_is_definite (const GVariantType* type);
// gboolean g_variant_type_is_definite (const ::GVariantType* type);
GI_INLINE_DECL bool is_definite () const noexcept;

// gboolean g_variant_type_is_dict_entry (const GVariantType* type);
// gboolean g_variant_type_is_dict_entry (const ::GVariantType* type);
GI_INLINE_DECL bool is_dict_entry () const noexcept;

// gboolean g_variant_type_is_maybe (const GVariantType* type);
// gboolean g_variant_type_is_maybe (const ::GVariantType* type);
GI_INLINE_DECL bool is_maybe () const noexcept;

// gboolean g_variant_type_is_subtype_of (const GVariantType* type, const GVariantType* supertype);
// gboolean g_variant_type_is_subtype_of (const ::GVariantType* type, const ::GVariantType* supertype);
GI_INLINE_DECL bool is_subtype_of (const GLib::VariantType & supertype) const noexcept;

// gboolean g_variant_type_is_tuple (const GVariantType* type);
// gboolean g_variant_type_is_tuple (const ::GVariantType* type);
GI_INLINE_DECL bool is_tuple () const noexcept;

// gboolean g_variant_type_is_variant (const GVariantType* type);
// gboolean g_variant_type_is_variant (const ::GVariantType* type);
GI_INLINE_DECL bool is_variant () const noexcept;

// const GVariantType* g_variant_type_key (const GVariantType* type);
// const ::GVariantType* g_variant_type_key (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType key () const noexcept;

// gsize g_variant_type_n_items (const GVariantType* type);
// gsize g_variant_type_n_items (const ::GVariantType* type);
GI_INLINE_DECL gsize n_items () const noexcept;

// const GVariantType* g_variant_type_next (const GVariantType* type);
// const ::GVariantType* g_variant_type_next (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType next () const noexcept;

// const gchar* g_variant_type_peek_string (const GVariantType* type);
// const char* g_variant_type_peek_string (const ::GVariantType* type);
GI_INLINE_DECL std::string peek_string () const noexcept;

// const GVariantType* g_variant_type_value (const GVariantType* type);
// const ::GVariantType* g_variant_type_value (const ::GVariantType* type);
GI_INLINE_DECL GLib::VariantType value () const noexcept;

// const GVariantType* g_variant_type_checked_ (const gchar* arg0);
// const ::GVariantType* g_variant_type_checked_ (const char* arg0);
static GI_INLINE_DECL GLib::VariantType checked_ (const std::string & arg0) noexcept;

// gsize g_variant_type_string_get_depth_ (const gchar* type_string);
// gsize g_variant_type_string_get_depth_ (const char* type_string);
static GI_INLINE_DECL gsize string_get_depth_ (const std::string & type_string) noexcept;

// gboolean g_variant_type_string_is_valid (const gchar* type_string);
// gboolean g_variant_type_string_is_valid (const char* type_string);
static GI_INLINE_DECL bool string_is_valid (const std::string & type_string) noexcept;

// gboolean g_variant_type_string_scan (const gchar* string, const gchar* limit, const gchar** endptr);
// gboolean g_variant_type_string_scan (const char* string, const char* limit, const char** endptr);
static GI_INLINE_DECL bool string_scan (const std::string & string, const std::string & limit, std::string * endptr = nullptr) noexcept;
static GI_INLINE_DECL bool string_scan (const std::string & string, std::string * endptr = nullptr) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string> string_scan (const std::string & string, const std::string & limit) noexcept;
static GI_INLINE_DECL std::tuple<bool, std::string> string_scan (const std::string & string) noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra_def.hpp>)
#include <glib/varianttype_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/varianttype_extra.hpp>)
#include <glib/varianttype_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantType : public GI_GLIB_VARIANTTYPE_BASE
{ typedef GI_GLIB_VARIANTTYPE_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantType>
{ typedef GLib::VariantType type; }; 

} // namespace repository

} // namespace gi

#endif
