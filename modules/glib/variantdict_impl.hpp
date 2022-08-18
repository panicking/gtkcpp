// AUTO-GENERATED

#ifndef _GI_GLIB_VARIANTDICT_IMPL_HPP_
#define _GI_GLIB_VARIANTDICT_IMPL_HPP_

namespace gi {

namespace repository {

namespace GLib {

namespace base {

// GVariantDict* g_variant_dict_new (GVariant* from_asv);
// ::GVariantDict* g_variant_dict_new (::GVariant* from_asv);
GLib::VariantDict base::VariantDictBase::new_ (GLib::Variant from_asv) noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_new;
  auto from_asv_to_c = gi::unwrap (from_asv, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariant*) (from_asv_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::VariantDict base::VariantDictBase::new_ () noexcept
{
  typedef ::GVariantDict* (*call_wrap_t) (::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_new;
  auto from_asv_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GVariant*) (from_asv_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_variant_dict_clear (GVariantDict* dict);
// void g_variant_dict_clear (::GVariantDict* dict);
void base::VariantDictBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_clear;
  call_wrap_v ((::GVariantDict*) (gobj_()));
}

// gboolean g_variant_dict_contains (GVariantDict* dict, const gchar* key);
// gboolean g_variant_dict_contains (::GVariantDict* dict, const char* key);
bool base::VariantDictBase::contains (const std::string & key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariantDict* dict, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_contains;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// GVariant* g_variant_dict_end (GVariantDict* dict);
// ::GVariant* g_variant_dict_end (::GVariantDict* dict);
GLib::Variant base::VariantDictBase::end () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_end;
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_variant_dict_init (GVariantDict* dict, GVariant* from_asv);
// void g_variant_dict_init (::GVariantDict* dict, ::GVariant* from_asv);
void base::VariantDictBase::init (GLib::Variant from_asv) noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, ::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_init;
  auto from_asv_to_c = gi::unwrap (from_asv, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariantDict*) (gobj_()), (::GVariant*) (from_asv_to_c));
}
void base::VariantDictBase::init () noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, ::GVariant* from_asv);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_init;
  auto from_asv_to_c = nullptr;
  call_wrap_v ((::GVariantDict*) (gobj_()), (::GVariant*) (from_asv_to_c));
}

// void g_variant_dict_insert (GVariantDict* dict, const gchar* key, const gchar* format_string);
// void g_variant_dict_insert (::GVariantDict* dict, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// void g_variant_dict_insert_value (GVariantDict* dict, const gchar* key, GVariant* value);
// void g_variant_dict_insert_value (::GVariantDict* dict, const char* key, ::GVariant* value);
void base::VariantDictBase::insert_value (const std::string & key, GLib::Variant value) noexcept
{
  typedef void (*call_wrap_t) (::GVariantDict* dict, const char* key, ::GVariant* value);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_insert_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (::GVariant*) (value_to_c));
}

// gboolean g_variant_dict_lookup (GVariantDict* dict, const gchar* key, const gchar* format_string);
// gboolean g_variant_dict_lookup (::GVariantDict* dict, const char* key, const char* format_string);
// IGNORE; not introspectable, varargs not supported

// GVariant* g_variant_dict_lookup_value (GVariantDict* dict, const gchar* key, const GVariantType* expected_type);
// ::GVariant* g_variant_dict_lookup_value (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
GLib::Variant base::VariantDictBase::lookup_value (const std::string & key, const GLib::VariantType & expected_type) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_lookup_value;
  auto expected_type_to_c = gi::unwrap (expected_type, gi::transfer_none, gi::direction_in);
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Variant base::VariantDictBase::lookup_value (const std::string & key) noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::GVariantDict* dict, const char* key, const ::GVariantType* expected_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_lookup_value;
  auto expected_type_to_c = nullptr;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c), (const ::GVariantType*) (expected_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GVariantDict* g_variant_dict_ref (GVariantDict* dict);
// ::GVariantDict* g_variant_dict_ref (::GVariantDict* dict);
// IGNORE; marked ignore

// gboolean g_variant_dict_remove (GVariantDict* dict, const gchar* key);
// gboolean g_variant_dict_remove (::GVariantDict* dict, const char* key);
bool base::VariantDictBase::remove (const std::string & key) noexcept
{
  typedef gboolean (*call_wrap_t) (::GVariantDict* dict, const char* key);
  call_wrap_t call_wrap_v = (call_wrap_t) g_variant_dict_remove;
  auto key_to_c = gi::unwrap (key, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GVariantDict*) (gobj_()), (const char*) (key_to_c));
  return _temp_ret;
}

// void g_variant_dict_unref (GVariantDict* dict);
// void g_variant_dict_unref (::GVariantDict* dict);
// IGNORE; marked ignore


} // namespace base

} // namespace GLib

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_def_impl.hpp>)
#include <glib/variantdict_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<glib/variantdict_extra_impl.hpp>)
#include <glib/variantdict_extra_impl.hpp>
#endif
#endif

#endif
