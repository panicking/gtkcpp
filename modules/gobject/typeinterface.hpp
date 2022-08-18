// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEINTERFACE_HPP_
#define _GI_GOBJECT_TYPEINTERFACE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeClass;
class TypePlugin;

class TypeInterface;

namespace base {


#define GI_GOBJECT_TYPEINTERFACE_BASE base::TypeInterfaceBase
class TypeInterfaceBase : public gi::detail::CBoxedWrapper<TypeInterfaceBase, ::GTypeInterface>
{
typedef gi::detail::CBoxedWrapper<TypeInterfaceBase, ::GTypeInterface> super_type;
public:

TypeInterfaceBase (std::nullptr_t = nullptr) : super_type() {}

// gpointer g_type_interface_peek_parent (gpointer g_iface);
// ::GTypeInterface* g_type_interface_peek_parent (::GTypeInterface* g_iface);
GI_INLINE_DECL GObject::TypeInterface peek_parent () noexcept;

// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
// void g_type_interface_add_prerequisite (GType interface_type, GType prerequisite_type);
static GI_INLINE_DECL void add_prerequisite (GType interface_type, GType prerequisite_type) noexcept;

// GTypePlugin* g_type_interface_get_plugin (GType instance_type, GType interface_type);
// ::GTypePlugin* g_type_interface_get_plugin (GType instance_type, GType interface_type);
static GI_INLINE_DECL GObject::TypePlugin get_plugin (GType instance_type, GType interface_type) noexcept;

// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
// GType g_type_interface_instantiatable_prerequisite (GType interface_type);
static GI_INLINE_DECL GType instantiatable_prerequisite (GType interface_type) noexcept;

// gpointer g_type_interface_peek (gpointer instance_class, GType iface_type);
// ::GTypeInterface* g_type_interface_peek (::GTypeClass* instance_class, GType iface_type);
static GI_INLINE_DECL GObject::TypeInterface peek (GObject::TypeClass instance_class, GType iface_type) noexcept;

// GType* g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
// GType* g_type_interface_prerequisites (GType interface_type, guint* n_prerequisites);
static GI_INLINE_DECL std::vector<GType> prerequisites (GType interface_type) noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra_def.hpp>)
#include <gobject/typeinterface_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typeinterface_extra.hpp>)
#include <gobject/typeinterface_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeInterface : public GI_GOBJECT_TYPEINTERFACE_BASE
{ typedef GI_GOBJECT_TYPEINTERFACE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeInterface>
{ typedef GObject::TypeInterface type; }; 

} // namespace repository

} // namespace gi

#endif
