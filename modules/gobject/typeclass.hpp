// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPECLASS_HPP_
#define _GI_GOBJECT_TYPECLASS_HPP_


namespace gi {

namespace repository {

namespace GObject {


class TypeClass;

namespace base {


#define GI_GOBJECT_TYPECLASS_BASE base::TypeClassBase
class TypeClassBase : public gi::detail::CBoxedWrapper<TypeClassBase, ::GTypeClass>
{
typedef gi::detail::CBoxedWrapper<TypeClassBase, ::GTypeClass> super_type;
public:

TypeClassBase (std::nullptr_t = nullptr) : super_type() {}

// void g_type_class_add_private (gpointer g_class, gsize private_size);
// void g_type_class_add_private (::GTypeClass* g_class, gsize private_size);
// IGNORE; deprecated

// gint g_type_class_get_instance_private_offset (gpointer g_class);
// gint g_type_class_get_instance_private_offset (::GTypeClass* g_class);
GI_INLINE_DECL gint get_instance_private_offset () noexcept;

// gpointer g_type_class_get_private (GTypeClass* klass, GType private_type);
// void* g_type_class_get_private (::GTypeClass* klass, GType private_type);
GI_INLINE_DECL gpointer get_private (GType private_type) noexcept;

// gpointer g_type_class_peek_parent (gpointer g_class);
// ::GTypeClass* g_type_class_peek_parent (::GTypeClass* g_class);
GI_INLINE_DECL GObject::TypeClass peek_parent () noexcept;

// void g_type_class_unref (gpointer g_class);
// void g_type_class_unref (::GTypeClass* g_class);
// IGNORE; marked ignore

// void g_type_class_unref_uncached (gpointer g_class);
// void g_type_class_unref_uncached (::GTypeClass* g_class);
GI_INLINE_DECL void unref_uncached () noexcept;

// void g_type_class_adjust_private_offset (gpointer g_class, gint* private_size_or_offset);
// void g_type_class_adjust_private_offset (void* g_class, gint private_size_or_offset);
// SKIP; inconsistent in private_size_or_offset pointer depth (1 vs 0)

// gpointer g_type_class_peek (GType type);
// ::GTypeClass* g_type_class_peek (GType type);
static GI_INLINE_DECL GObject::TypeClass peek (GType type) noexcept;

// gpointer g_type_class_peek_static (GType type);
// ::GTypeClass* g_type_class_peek_static (GType type);
static GI_INLINE_DECL GObject::TypeClass peek_static (GType type) noexcept;

// gpointer g_type_class_ref (GType type);
// ::GTypeClass* g_type_class_ref (GType type);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra_def.hpp>)
#include <gobject/typeclass_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeclass_extra.hpp>)
#include <gobject/typeclass_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeClass : public GI_GOBJECT_TYPECLASS_BASE
{ typedef GI_GOBJECT_TYPECLASS_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeClass>
{ typedef GObject::TypeClass type; }; 

} // namespace repository

} // namespace gi

#endif
