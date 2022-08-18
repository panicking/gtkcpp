// AUTO-GENERATED

#ifndef _GI_GIO_PROPERTYACTION_HPP_
#define _GI_GIO_PROPERTYACTION_HPP_


namespace gi {

namespace repository {

namespace Gio {

class Action;

class PropertyAction;

namespace base {


#define GI_GIO_PROPERTYACTION_BASE base::PropertyActionBase
class PropertyActionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GPropertyAction BaseObjectType;

PropertyActionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_property_action_get_type(); } 

GI_INLINE_DECL Gio::Action interface_ (gi::interface_tag<Gio::Action>);

GI_INLINE_DECL operator Gio::Action ();

// GPropertyAction* g_property_action_new (const gchar* name, gpointer object, const gchar* property_name);
// ::GPropertyAction* g_property_action_new (const char* name, ::GObject* object, const char* property_name);
static GI_INLINE_DECL Gio::PropertyAction new_ (const std::string & name, GObject::Object object, const std::string & property_name) noexcept;

gi::property_proxy<bool, base::PropertyActionBase> property_enabled()
{ return gi::property_proxy<bool, base::PropertyActionBase> (*this, "enabled"); }
const gi::property_proxy<bool, base::PropertyActionBase> property_enabled() const
{ return gi::property_proxy<bool, base::PropertyActionBase> (*this, "enabled"); }

gi::property_proxy<bool, base::PropertyActionBase> property_invert_boolean()
{ return gi::property_proxy<bool, base::PropertyActionBase> (*this, "invert-boolean"); }
const gi::property_proxy<bool, base::PropertyActionBase> property_invert_boolean() const
{ return gi::property_proxy<bool, base::PropertyActionBase> (*this, "invert-boolean"); }

gi::property_proxy<std::string, base::PropertyActionBase> property_name()
{ return gi::property_proxy<std::string, base::PropertyActionBase> (*this, "name"); }
const gi::property_proxy<std::string, base::PropertyActionBase> property_name() const
{ return gi::property_proxy<std::string, base::PropertyActionBase> (*this, "name"); }

gi::property_proxy_write<GObject::Object, base::PropertyActionBase> property_object()
{ return gi::property_proxy_write<GObject::Object, base::PropertyActionBase> (*this, "object"); }

gi::property_proxy<GLib::VariantType, base::PropertyActionBase> property_parameter_type()
{ return gi::property_proxy<GLib::VariantType, base::PropertyActionBase> (*this, "parameter-type"); }
const gi::property_proxy<GLib::VariantType, base::PropertyActionBase> property_parameter_type() const
{ return gi::property_proxy<GLib::VariantType, base::PropertyActionBase> (*this, "parameter-type"); }

gi::property_proxy_write<std::string, base::PropertyActionBase> property_property_name()
{ return gi::property_proxy_write<std::string, base::PropertyActionBase> (*this, "property-name"); }

gi::property_proxy<GLib::Variant, base::PropertyActionBase> property_state()
{ return gi::property_proxy<GLib::Variant, base::PropertyActionBase> (*this, "state"); }
const gi::property_proxy<GLib::Variant, base::PropertyActionBase> property_state() const
{ return gi::property_proxy<GLib::Variant, base::PropertyActionBase> (*this, "state"); }

gi::property_proxy<GLib::VariantType, base::PropertyActionBase> property_state_type()
{ return gi::property_proxy<GLib::VariantType, base::PropertyActionBase> (*this, "state-type"); }
const gi::property_proxy<GLib::VariantType, base::PropertyActionBase> property_state_type() const
{ return gi::property_proxy<GLib::VariantType, base::PropertyActionBase> (*this, "state-type"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/propertyaction_extra_def.hpp>)
#include <gio/propertyaction_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/propertyaction_extra.hpp>)
#include <gio/propertyaction_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class PropertyAction : public GI_GIO_PROPERTYACTION_BASE
{ typedef GI_GIO_PROPERTYACTION_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GPropertyAction>
{ typedef Gio::PropertyAction type; }; 

} // namespace repository

} // namespace gi

#endif
