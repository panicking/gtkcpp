// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEMODULE_HPP_
#define _GI_GOBJECT_TYPEMODULE_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class EnumValue;
class FlagsValue;
class InterfaceInfo;
class TypeInfo;
class TypePlugin;

class TypeModule;

namespace base {


#define GI_GOBJECT_TYPEMODULE_BASE base::TypeModuleBase
class TypeModuleBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTypeModule BaseObjectType;

TypeModuleBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_type_module_get_type(); } 

GI_INLINE_DECL GObject::TypePlugin interface_ (gi::interface_tag<GObject::TypePlugin>);

GI_INLINE_DECL operator GObject::TypePlugin ();

// void g_type_module_add_interface (GTypeModule* module, GType instance_type, GType interface_type, const GInterfaceInfo* interface_info);
// void g_type_module_add_interface (::GTypeModule* module, GType instance_type, GType interface_type, const ::GInterfaceInfo* interface_info);
GI_INLINE_DECL void add_interface (GType instance_type, GType interface_type, const GObject::InterfaceInfo & interface_info) noexcept;

// GType g_type_module_register_enum (GTypeModule* module, const gchar* name, const GEnumValue* const_static_values);
// GType g_type_module_register_enum (::GTypeModule* module, const char* name, const ::GEnumValue* const_static_values);
GI_INLINE_DECL GType register_enum (const std::string & name, const GObject::EnumValue & const_static_values) noexcept;

// GType g_type_module_register_flags (GTypeModule* module, const gchar* name, const GFlagsValue* const_static_values);
// GType g_type_module_register_flags (::GTypeModule* module, const char* name, const ::GFlagsValue* const_static_values);
GI_INLINE_DECL GType register_flags (const std::string & name, const GObject::FlagsValue & const_static_values) noexcept;

// GType g_type_module_register_type (GTypeModule* module, GType parent_type, const gchar* type_name, const GTypeInfo* type_info, GTypeFlags flags);
// GType g_type_module_register_type (::GTypeModule* module, GType parent_type, const char* type_name, const ::GTypeInfo* type_info, ::GTypeFlags flags);
GI_INLINE_DECL GType register_type (GType parent_type, const std::string & type_name, const GObject::TypeInfo & type_info, GObject::TypeFlags flags) noexcept;

// void g_type_module_set_name (GTypeModule* module, const gchar* name);
// void g_type_module_set_name (::GTypeModule* module, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;

// void g_type_module_unuse (GTypeModule* module);
// void g_type_module_unuse (::GTypeModule* module);
GI_INLINE_DECL void unuse () noexcept;

// gboolean g_type_module_use (GTypeModule* module);
// gboolean g_type_module_use (::GTypeModule* module);
GI_INLINE_DECL bool use () noexcept;

// guint TypeModule::use_count (const ::GTypeModule* obj);
// guint TypeModule::use_count (const ::GTypeModule* obj);
GI_INLINE_DECL guint use_count_ () const noexcept;

//  TypeModule::use_count (::GTypeModule* obj, guint _value);
// void TypeModule::use_count (::GTypeModule* obj, guint _value);
GI_INLINE_DECL void use_count_ (guint _value) noexcept;

// char* TypeModule::name (const ::GTypeModule* obj);
// char* TypeModule::name (const ::GTypeModule* obj);
GI_INLINE_DECL std::string name_ () const noexcept;

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra_def.hpp>)
#include <gobject/typemodule_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typemodule_extra.hpp>)
#include <gobject/typemodule_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeModule : public GI_GOBJECT_TYPEMODULE_BASE
{ typedef GI_GOBJECT_TYPEMODULE_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeModule>
{ typedef GObject::TypeModule type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

namespace impl {

namespace internal {


class TypeModuleClassDef
{
typedef TypeModuleClassDef self;
public:
typedef GObject::TypeModule instance_type;
typedef ::GTypeModuleClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean TypeModule::load (GTypeModule* module);
// gboolean TypeModule::load (::GTypeModule* module);
virtual bool load_ () noexcept = 0;

// void TypeModule::unload (GTypeModule* module);
// void TypeModule::unload (::GTypeModule* module);
virtual void unload_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class TypeModuleClass: public detail::ClassTemplate<GObject::impl::internal::TypeModuleClassDef, GObject::impl::internal::ObjectClass>
{
typedef TypeModuleClass self;
typedef detail::ClassTemplate<GObject::impl::internal::TypeModuleClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean TypeModule::load (GTypeModule* module);
// gboolean TypeModule::load (::GTypeModule* module);
GI_INLINE_DECL bool load_ () noexcept override;

// void TypeModule::unload (GTypeModule* module);
// void TypeModule::unload (::GTypeModule* module);
GI_INLINE_DECL void unload_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using TypeModuleImpl = detail::ObjectImpl<TypeModule, internal::TypeModuleClass>;

} // namespace impl

} // namespace GObject

} // namespace repository

} // namespace gi

#endif
