// AUTO-GENERATED

#ifndef _GI_GOBJECT_BINDINGGROUP_HPP_
#define _GI_GOBJECT_BINDINGGROUP_HPP_

#include "object.hpp"

namespace gi {

namespace repository {

namespace GObject {

class Closure;
class Object;

class BindingGroup;

namespace base {


#define GI_GOBJECT_BINDINGGROUP_BASE base::BindingGroupBase
class BindingGroupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GBindingGroup BaseObjectType;

BindingGroupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_binding_group_get_type(); } 

// GBindingGroup* g_binding_group_new ();
// ::GBindingGroup* g_binding_group_new ();
static GI_INLINE_DECL GObject::BindingGroup new_ () noexcept;

// void g_binding_group_bind (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags);
// void g_binding_group_bind (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags);
GI_INLINE_DECL void bind (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags) noexcept;

// void g_binding_group_bind_full (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags, GBindingTransformFunc transform_to, GBindingTransformFunc transform_from, gpointer user_data, GDestroyNotify user_data_destroy);
// void g_binding_group_bind_full (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, GObject::BindingTransformFunc::cfunction_type transform_to, GObject::BindingTransformFunc::cfunction_type transform_from, void* user_data, GLib::DestroyNotify::cfunction_type user_data_destroy);
// SKIP; callback misses closure info

// void g_binding_group_bind_with_closures (GBindingGroup* self, const gchar* source_property, gpointer target, const gchar* target_property, GBindingFlags flags, GClosure* transform_to, GClosure* transform_from);
// void g_binding_group_bind_with_closures (::GBindingGroup* self, const char* source_property, ::GObject* target, const char* target_property, ::GBindingFlags flags, ::GClosure* transform_to, ::GClosure* transform_from);
GI_INLINE_DECL void bind_full (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags, GObject::Closure transform_to, GObject::Closure transform_from) noexcept;
GI_INLINE_DECL void bind_full (const std::string & source_property, GObject::Object target, const std::string & target_property, GObject::BindingFlags flags) noexcept;

// gpointer g_binding_group_dup_source (GBindingGroup* self);
// ::GObject* g_binding_group_dup_source (::GBindingGroup* self);
GI_INLINE_DECL GObject::Object dup_source () noexcept;

// void g_binding_group_set_source (GBindingGroup* self, gpointer source);
// void g_binding_group_set_source (::GBindingGroup* self, ::GObject* source);
GI_INLINE_DECL void set_source (GObject::Object source) noexcept;
GI_INLINE_DECL void set_source () noexcept;

gi::property_proxy<GObject::Object, base::BindingGroupBase> property_source()
{ return gi::property_proxy<GObject::Object, base::BindingGroupBase> (*this, "source"); }
const gi::property_proxy<GObject::Object, base::BindingGroupBase> property_source() const
{ return gi::property_proxy<GObject::Object, base::BindingGroupBase> (*this, "source"); }

}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra_def.hpp>)
#include <gobject/bindinggroup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/bindinggroup_extra.hpp>)
#include <gobject/bindinggroup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class BindingGroup : public GI_GOBJECT_BINDINGGROUP_BASE
{ typedef GI_GOBJECT_BINDINGGROUP_BASE super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GBindingGroup>
{ typedef GObject::BindingGroup type; }; 

} // namespace repository

} // namespace gi

#endif
