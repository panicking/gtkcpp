// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTDICT_HPP_
#define _GI_GLIB_VARIANTDICT_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;
class VariantType;

class VariantDict;

namespace base {


#define GI_GLIB_VARIANTDICT_BASE base::VariantDictBase
class VariantDictBase : public gi::detail::GBoxedWrapper<VariantDictBase, ::GVariantDict>
{
typedef gi::detail::GBoxedWrapper<VariantDictBase, ::GVariantDict> super_type;
public:

VariantDictBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_dict_get_type(); } 

// GVariantDict* g_variant_dict_new (GVariant* from_asv);
// ::GVariantDict* g_variant_dict_new (::GVariant* from_asv);
static GI_INLINE_DECL GLib::VariantDict new_ (GLib::Variant from_asv) noexcept;
static GI_INLINE_DECL GLib::VariantDict new_ () noexcept;

// void g_variant_dict_clear (GVariantDict* dict);
// void g_variant_dict_clear (::GVariantDict* dict);
GI_INLINE_DECL void clear () noexcept;

// gboolean g_variant_dict_contains (GVariantDict* dict, const gchar* key);
// gboolean g_variant_dict_contains (::GVariantDict* dict, const char* key);
GI_INLINE_DECL bool contains (const std::string & key) noexcept;

// GVariant* g_variant_dict_end (GVariantDict* dict);
// ::GVariant* g_variant_dict_end (::GVariantDict* dict);
GI_INLINE_DECL GLib::Variant end () noexcept;

// void g_variant_dict_init (GVariantDict* dict, GVariant* from_asv);
// void g_variant_dict_init (::GVariantDict* dict, ::GVariant* from_asv);
GI_INLINE_DECL void init (GLib::Variant from_asv) noexcept;
GI_INLINE_DECL void init () noexcept;

// void g_variant_dict_insert (GVariantDict* dict, const gchar* key, const gchar* format_string);
// void g_variant_dict_insert (::GVariantDict* dict, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_variant_dict_insert_value (GVariantDict* dict, const gchar* key, GVariant* value);
// void g_variant_dict_insert_value (::GVariantDict* dict, const char* key, ::GVariant* value);
GI_INLINE_DECL void insert_value (const std::string & key, GLib::Variant value) noexcept;

// gboolean g_variant_dict_lookup (GVariantDict* dict, const gchar* key, const gchar* format_string);
// gboolean g_variant_dict_lookup (::GVariantDict* dict, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_dict_lookup_value (GVariantDict* dict, const gchar* key, const GVariantType* expected_type);
// ::GVariant* g_variant_dict_lookup_value (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
GI_INLINE_DECL GLib::Variant lookup_value (const std::string & key, const GLib::VariantType & expected_type) noexcept;
GI_INLINE_DECL GLib::Variant lookup_value (const std::string & key) noexcept;

// GVariantDict* g_variant_dict_ref (GVariantDict* dict);
// ::GVariantDict* g_variant_dict_ref (::GVariantDict* dict);
// IGNORE; marked ignore

// gboolean g_variant_dict_remove (GVariantDict* dict, const gchar* key);
// gboolean g_variant_dict_remove (::GVariantDict* dict, const char* key);
GI_INLINE_DECL bool remove (const std::string & key) noexcept;

// void g_variant_dict_unref (GVariantDict* dict);
// void g_variant_dict_unref (::GVariantDict* dict);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_def.hpp>)
#include <glib/variantdict_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra.hpp>)
#include <glib/variantdict_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantDict : public GI_GLIB_VARIANTDICT_BASE
{ typedef GI_GLIB_VARIANTDICT_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantDict>
{ typedef GLib::VariantDict type; }; 

} // namespace repository

} // namespace gi

#endif
