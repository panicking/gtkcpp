// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTITER_HPP_
#define _GI_GLIB_VARIANTITER_HPP_


namespace gi {

namespace repository {

namespace GLib {

class Variant;

class VariantIter;

namespace base {


#define GI_GLIB_VARIANTITER_BASE base::VariantIterBase
class VariantIterBase : public gi::detail::CBoxedWrapper<VariantIterBase, ::GVariantIter>
{
typedef gi::detail::CBoxedWrapper<VariantIterBase, ::GVariantIter> super_type;
public:

VariantIterBase (std::nullptr_t = nullptr) : super_type() {}

// GVariantIter* g_variant_iter_copy (GVariantIter* iter);
// ::GVariantIter* g_variant_iter_copy (::GVariantIter* iter);
GI_INLINE_DECL GLib::VariantIter copy () noexcept;

// void g_variant_iter_free (GVariantIter* iter);
// void g_variant_iter_free (::GVariantIter* iter);
// IGNORE; marked ignore

// gsize g_variant_iter_init (GVariantIter* iter, GVariant* value);
// gsize g_variant_iter_init (::GVariantIter* iter, ::GVariant* value);
GI_INLINE_DECL gsize init (GLib::Variant value) noexcept;

// gboolean g_variant_iter_loop (GVariantIter* iter, const gchar* format_string);
// gboolean g_variant_iter_loop (::GVariantIter* iter, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// gsize g_variant_iter_n_children (GVariantIter* iter);
// gsize g_variant_iter_n_children (::GVariantIter* iter);
GI_INLINE_DECL gsize n_children () noexcept;

// gboolean g_variant_iter_next (GVariantIter* iter, const gchar* format_string);
// gboolean g_variant_iter_next (::GVariantIter* iter, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_iter_next_value (GVariantIter* iter);
// ::GVariant* g_variant_iter_next_value (::GVariantIter* iter);
GI_INLINE_DECL GLib::Variant next_value () noexcept;

}; // class

} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra_def.hpp>)
#include <glib/variantiter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantiter_extra.hpp>)
#include <glib/variantiter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GLib {

class VariantIter : public GI_GLIB_VARIANTITER_BASE
{ typedef GI_GLIB_VARIANTITER_BASE super_type; using super_type::super_type; };

} // namespace GLib

template<> struct declare_cpptype_of<::GVariantIter>
{ typedef GLib::VariantIter type; }; 

} // namespace repository

} // namespace gi

#endif
