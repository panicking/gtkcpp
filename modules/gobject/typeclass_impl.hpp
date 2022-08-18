// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPECLASS_IMPL_HPP_
#define _GI_GOBJECT_TYPECLASS_IMPL_HPP_

namespace gi {

namespace repository {

namespace GObject {

namespace base {

// void g_type_class_add_private (gpointer g_class, gsize private_size);
// void g_type_class_add_private (::GTypeClass* g_class, gsize private_size);
// IGNORE; deprecated

// gint g_type_class_get_instance_private_offset (gpointer g_class);
// gint g_type_class_get_instance_private_offset (::GTypeClass* g_class);
gint base::TypeClassBase::get_instance_private_offset () noexcept
{
  typedef gint (*call_wrap_t) (::GTypeClass* g_class);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_get_instance_private_offset;
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (gobj_()));
  return _temp_ret;
}

// gpointer g_type_class_get_private (GTypeClass* klass, GType private_type);
// void* g_type_class_get_private (::GTypeClass* klass, GType private_type);
gpointer base::TypeClassBase::get_private (GType private_type) noexcept
{
  typedef void* (*call_wrap_t) (::GTypeClass* klass, GType private_type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_get_private;
  auto private_type_to_c = private_type;
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (gobj_()), (GType) (private_type_to_c));
  return _temp_ret;
}

// gpointer g_type_class_peek_parent (gpointer g_class);
// ::GTypeClass* g_type_class_peek_parent (::GTypeClass* g_class);
GObject::TypeClass base::TypeClassBase::peek_parent () noexcept
{
  typedef ::GTypeClass* (*call_wrap_t) (::GTypeClass* g_class);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_peek_parent;
  auto _temp_ret = call_wrap_v ((::GTypeClass*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void g_type_class_unref (gpointer g_class);
// void g_type_class_unref (::GTypeClass* g_class);
// IGNORE; marked ignore

// void g_type_class_unref_uncached (gpointer g_class);
// void g_type_class_unref_uncached (::GTypeClass* g_class);
void base::TypeClassBase::unref_uncached () noexcept
{
  typedef void (*call_wrap_t) (::GTypeClass* g_class);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_unref_uncached;
  call_wrap_v ((::GTypeClass*) (gobj_()));
}

// void g_type_class_adjust_private_offset (gpointer g_class, gint* private_size_or_offset);
// void g_type_class_adjust_private_offset (void* g_class, gint private_size_or_offset);
// SKIP; inconsistent in private_size_or_offset pointer depth (1 vs 0)

// gpointer g_type_class_peek (GType type);
// ::GTypeClass* g_type_class_peek (GType type);
GObject::TypeClass base::TypeClassBase::peek (GType type) noexcept
{
  typedef ::GTypeClass* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_peek;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer g_type_class_peek_static (GType type);
// ::GTypeClass* g_type_class_peek_static (GType type);
GObject::TypeClass base::TypeClassBase::peek_static (GType type) noexcept
{
  typedef ::GTypeClass* (*call_wrap_t) (GType type);
  call_wrap_t call_wrap_v = (call_wrap_t) g_type_class_peek_static;
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer g_type_class_ref (GType type);
// ::GTypeClass* g_type_class_ref (GType type);
// IGNORE; marked ignore


} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra_def_impl.hpp>)
#include <gobject/typeclass_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra_impl.hpp>)
#include <gobject/typeclass_extra_impl.hpp>
#endif
#endif

#endif
