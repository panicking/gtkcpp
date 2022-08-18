// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTBUILDER_HPP_
#define _GI_GLIB_VARIANTBUILDER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;
class VariantType;

class VariantBuilder;

namespace base {


#define GI_GLIB_VARIANTBUILDER_BASE base::VariantBuilderBase
class VariantBuilderBase : public gi::detail::GBoxedWrapper<VariantBuilderBase, ::GVariantBuilder>
{
typedef gi::detail::GBoxedWrapper<VariantBuilderBase, ::GVariantBuilder> super_type;
public:

VariantBuilderBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return g_variant_builder_get_type(); } 

// GVariantBuilder* g_variant_builder_new (const GVariantType* type);
// ::GVariantBuilder* g_variant_builder_new (const ::GVariantType* type);
static GI_INLINE_DECL GLib::VariantBuilder new_ (const GLib::VariantType & type) noexcept;

// void g_variant_builder_add (GVariantBuilder* builder, const gchar* format_string);
// void g_variant_builder_add (::GVariantBuilder* builder, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_parsed (GVariantBuilder* builder, const gchar* format);
// void g_variant_builder_add_parsed (::GVariantBuilder* builder, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_value (GVariantBuilder* builder, GVariant* value);
// void g_variant_builder_add_value (::GVariantBuilder* builder, ::GVariant* value);
GI_INLINE_DECL void add_value (GLib::Variant value) noexcept;

// void g_variant_builder_clear (GVariantBuilder* builder);
// void g_variant_builder_clear (::GVariantBuilder* builder);
GI_INLINE_DECL void clear () noexcept;

// void g_variant_builder_close (GVariantBuilder* builder);
// void g_variant_builder_close (::GVariantBuilder* builder);
GI_INLINE_DECL void close () noexcept;

// GVariant* g_variant_builder_end (GVariantBuilder* builder);
// ::GVariant* g_variant_builder_end (::GVariantBuilder* builder);
GI_INLINE_DECL GLib::Variant end () noexcept;

// void g_variant_builder_init (GVariantBuilder* builder, const GVariantType* type);
// void g_variant_builder_init (::GVariantBuilder* builder, const ::GVariantType* type);
GI_INLINE_DECL void init (const GLib::VariantType & type) noexcept;

// void g_variant_builder_open (GVariantBuilder* builder, const GVariantType* type);
// void g_variant_builder_open (::GVariantBuilder* builder, const ::GVariantType* type);
GI_INLINE_DECL void open (const GLib::VariantType & type) noexcept;

// GVariantBuilder* g_variant_builder_ref (GVariantBuilder* builder);
// ::GVariantBuilder* g_variant_builder_ref (::GVariantBuilder* builder);
// IGNORE; marked ignore

// void g_variant_builder_unref (GVariantBuilder* builder);
// void g_variant_builder_unref (::GVariantBuilder* builder);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra_def.hpp>)
#include <glib/variantbuilder_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra.hpp>)
#include <glib/variantbuilder_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantBuilder : public GI_GLIB_VARIANTBUILDER_BASE
{ typedef GI_GLIB_VARIANTBUILDER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantBuilder>
{ typedef GLib::VariantBuilder type; }; 

} // namespace repository

} // namespace gi

#endif
