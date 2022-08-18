// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDING_HPP_
#define _GI_GOBJECT_BINDING_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class Object;

class Binding;

namespace base {


#define GI_GOBJECT_BINDING_BASE base::BindingBase
class BindingBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GBinding BaseObjectType;

BindingBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_binding_get_type(); } 

// GObject* g_binding_dup_source (GBinding* binding);
// ::GObject* g_binding_dup_source (::GBinding* binding);
GI_INLINE_DECL GObject::Object dup_source () noexcept;

// GObject* g_binding_dup_target (GBinding* binding);
// ::GObject* g_binding_dup_target (::GBinding* binding);
GI_INLINE_DECL GObject::Object dup_target () noexcept;

// GBindingFlags g_binding_get_flags (GBinding* binding);
// ::GBindingFlags g_binding_get_flags (::GBinding* binding);
GI_INLINE_DECL GObject::BindingFlags get_flags () noexcept;

// GObject* g_binding_get_source (GBinding* binding);
// ::GObject* g_binding_get_source (::GBinding* binding);
// IGNORE; deprecated

// const gchar* g_binding_get_source_property (GBinding* binding);
// const char* g_binding_get_source_property (::GBinding* binding);
GI_INLINE_DECL std::string get_source_property () noexcept;

// GObject* g_binding_get_target (GBinding* binding);
// ::GObject* g_binding_get_target (::GBinding* binding);
// IGNORE; deprecated

// const gchar* g_binding_get_target_property (GBinding* binding);
// const char* g_binding_get_target_property (::GBinding* binding);
GI_INLINE_DECL std::string get_target_property () noexcept;

// void g_binding_unbind (GBinding* binding);
// void g_binding_unbind (::GBinding* binding);
GI_INLINE_DECL void unbind () noexcept;

gi::property_proxy<GObject::BindingFlags, base::BindingBase> property_flags()
{ return gi::property_proxy<GObject::BindingFlags, base::BindingBase> (*this, "flags"); }
const gi::property_proxy<GObject::BindingFlags, base::BindingBase> property_flags() const
{ return gi::property_proxy<GObject::BindingFlags, base::BindingBase> (*this, "flags"); }

gi::property_proxy<GObject::Object, base::BindingBase> property_source()
{ return gi::property_proxy<GObject::Object, base::BindingBase> (*this, "source"); }
const gi::property_proxy<GObject::Object, base::BindingBase> property_source() const
{ return gi::property_proxy<GObject::Object, base::BindingBase> (*this, "source"); }

gi::property_proxy<std::string, base::BindingBase> property_source_property()
{ return gi::property_proxy<std::string, base::BindingBase> (*this, "source-property"); }
const gi::property_proxy<std::string, base::BindingBase> property_source_property() const
{ return gi::property_proxy<std::string, base::BindingBase> (*this, "source-property"); }

gi::property_proxy<GObject::Object, base::BindingBase> property_target()
{ return gi::property_proxy<GObject::Object, base::BindingBase> (*this, "target"); }
const gi::property_proxy<GObject::Object, base::BindingBase> property_target() const
{ return gi::property_proxy<GObject::Object, base::BindingBase> (*this, "target"); }

gi::property_proxy<std::string, base::BindingBase> property_target_property()
{ return gi::property_proxy<std::string, base::BindingBase> (*this, "target-property"); }
const gi::property_proxy<std::string, base::BindingBase> property_target_property() const
{ return gi::property_proxy<std::string, base::BindingBase> (*this, "target-property"); }

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/binding_extra_def.hpp>)
#include <gobject/binding_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/binding_extra.hpp>)
#include <gobject/binding_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class Binding : public GI_GOBJECT_BINDING_BASE
{ typedef GI_GOBJECT_BINDING_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GBinding>
{ typedef GObject::Binding type; }; 

} // namespace repository

} // namespace gi

#endif
