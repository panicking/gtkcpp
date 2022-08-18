// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDINGGROUP_IMPL_HPP_
#define _GI_GOBJECT_BINDINGGROUP_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// GBindingGroup* g_binding_group_new ();
// ::GBindingGroup* g_binding_group_new ();
GObject::BindingGroup base::BindingGroupBase::new_ () noexcept
{
  typedef ::GBindingGroup* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void g_binding_group_bind (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags);
// void g_binding_group_bind (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags);
void base::BindingGroupBase::bind (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_bind;
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none, gi::direction_in);
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c));
}

// void g_binding_group_bind_full (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify user_data_destroy);
// void g_binding_group_bind_full (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, GObject::BindingTransformFunc::cfunction_type transform_to, GObject::BindingTransformFunc::cfunction_type transform_from, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy);
// SKIP; callback misses closure info

// void g_binding_group_bind_with_closures (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags, GClosure* transform_to, GClosure* transform_from);
// void g_binding_group_bind_with_closures (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
void base::BindingGroupBase::bind_full (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags, GObject::Closure transform_to, GObject::Closure transform_from) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_bind_with_closures;
  auto transform_from_to_c = gi::unwrap (transform_from, gi::transfer_none, gi::direction_in);
  auto transform_to_to_c = gi::unwrap (transform_to, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none, gi::direction_in);
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c), (::GClosure*) (transform_to_to_c), (::GClosure*) (transform_from_to_c));
}
void base::BindingGroupBase::bind_full (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_bind_with_closures;
  auto transform_from_to_c = nullptr;
  auto transform_to_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto target_property_to_c = gi::unwrap (target_property, gi::transfer_none, gi::direction_in);
  auto target_to_c = gi::unwrap (target, gi::transfer_none, gi::direction_in);
  auto source_property_to_c = gi::unwrap (source_property, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (const char*) (source_property_to_c), (::GObject*) (target_to_c), (const char*) (target_property_to_c), (::GBindingFlags) (flags_to_c), (::GClosure*) (transform_to_to_c), (::GClosure*) (transform_from_to_c));
}

// gpointer g_binding_group_dup_source (GBindingGroup* self);
// ::GObject* g_binding_group_dup_source (::GBindingGroup* self);
GObject::Object base::BindingGroupBase::dup_source () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GBindingGroup* self);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_dup_source;
  auto _temp_ret = call_wrap_v ((::GBindingGroup*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_binding_group_set_source (GBindingGroup* self, gpointer source);
// void g_binding_group_set_source (::GBindingGroup* self, ::GObject* source);
void base::BindingGroupBase::set_source (GObject::Object source) noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, ::GObject* source);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_set_source;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GBindingGroup*) (gobj_()), (::GObject*) (source_to_c));
}
void base::BindingGroupBase::set_source () noexcept
{
  typedef void (*call_wrap_t) (::GBindingGroup* self, ::GObject* source);
  call_wrap_t call_wrap_v = (call_wrap_t) g_binding_group_set_source;
  auto source_to_c = nullptr;
  call_wrap_v ((::GBindingGroup*) (gobj_()), (::GObject*) (source_to_c));
}


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_def_impl.hpp>)
#include <gobject/bindinggroup_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_impl.hpp>)
#include <gobject/bindinggroup_extra_impl.hpp>
#endif
#endif

#endif
