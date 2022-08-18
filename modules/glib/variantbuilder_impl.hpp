// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTBUILDER_IMPL_HPP_
#define _GI_GLIB_VARIANTBUILDER_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantBuilder* g_variant_builder_new (const GVariantType* type);
// ::GVariantBuilder* g_variant_builder_new (const ::GVariantType* type);
GLib::VariantBuilder base::VariantBuilderBase::new_ (const GLib::VariantType & type) noexcept
{
  typedef ::GVariantBuilder* (*call_wrap_t) (const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_new;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const ::GVariantType*) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_variant_builder_add (GVariantBuilder* builder, const gchar* format_string);
// void g_variant_builder_add (::GVariantBuilder* builder, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_parsed (GVariantBuilder* builder, const gchar* format);
// void g_variant_builder_add_parsed (::GVariantBuilder* builder, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_variant_builder_add_value (GVariantBuilder* builder, GVariant* value);
// void g_variant_builder_add_value (::GVariantBuilder* builder, ::GVariant* value);
void base::VariantBuilderBase::add_value (GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GVariantBuilder* builder, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_add_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariantBuilder*) (gobj_()), (::GVariant*) (value_to_c));
}

// void g_variant_builder_clear (GVariantBuilder* builder);
// void g_variant_builder_clear (::GVariantBuilder* builder);
void base::VariantBuilderBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GVariantBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_clear;
  call_wrap_v ((::GVariantBuilder*) (gobj_()));
}

// void g_variant_builder_close (GVariantBuilder* builder);
// void g_variant_builder_close (::GVariantBuilder* builder);
void base::VariantBuilderBase::close () noexcept
{
  typedef void (*call_wrap_t) (::GVariantBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_close;
  call_wrap_v ((::GVariantBuilder*) (gobj_()));
}

// GVariant* g_variant_builder_end (GVariantBuilder* builder);
// ::GVariant* g_variant_builder_end (::GVariantBuilder* builder);
GLib::Variant base::VariantBuilderBase::end () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantBuilder* builder);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_end;
  auto _temp_ret = call_wrap_v ((::GVariantBuilder*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_variant_builder_init (GVariantBuilder* builder, const GVariantType* type);
// void g_variant_builder_init (::GVariantBuilder* builder, const ::GVariantType* type);
void base::VariantBuilderBase::init (const GLib::VariantType & type) noexcept
{
  typedef void (*call_wrap_t) (::GVariantBuilder* builder, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_init;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariantBuilder*) (gobj_()), (const ::GVariantType*) (type_to_c));
}

// void g_variant_builder_open (GVariantBuilder* builder, const GVariantType* type);
// void g_variant_builder_open (::GVariantBuilder* builder, const ::GVariantType* type);
void base::VariantBuilderBase::open (const GLib::VariantType & type) noexcept
{
  typedef void (*call_wrap_t) (::GVariantBuilder* builder, const ::GVariantType* type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_builder_open;
  auto type_to_c = gi::unwrap (type, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariantBuilder*) (gobj_()), (const ::GVariantType*) (type_to_c));
}

// GVariantBuilder* g_variant_builder_ref (GVariantBuilder* builder);
// ::GVariantBuilder* g_variant_builder_ref (::GVariantBuilder* builder);
// IGNORE; marked ignore

// void g_variant_builder_unref (GVariantBuilder* builder);
// void g_variant_builder_unref (::GVariantBuilder* builder);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra_def_impl.hpp>)
#include <glib/variantbuilder_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantbuilder_extra_impl.hpp>)
#include <glib/variantbuilder_extra_impl.hpp>
#endif
#endif

#endif
