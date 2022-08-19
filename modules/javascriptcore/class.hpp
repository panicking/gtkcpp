// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_CLASS_HPP_
#define _GI_JAVASCRIPTCORE_CLASS_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {

class Context;
class Value;

class Class;

namespace base {


#define GI_JAVASCRIPTCORE_CLASS_BASE base::ClassBase
class ClassBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCClass BaseObjectType;

ClassBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_class_get_type(); } 

// JSCValue* jsc_class_add_constructor (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_params);
// ::JSCValue* jsc_class_add_constructor (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_params);
// IGNORE; not introspectable; shadowed-by add_constructorv, varargs not supported

// JSCValue* jsc_class_add_constructor_variadic (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type);
// ::JSCValue* jsc_class_add_constructor_variadic (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type);
// SKIP; callback type  not supported

// JSCValue* jsc_class_add_constructorv (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// ::JSCValue* jsc_class_add_constructorv (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// SKIP; callback type  not supported

// void jsc_class_add_method (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_params);
// void jsc_class_add_method (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_params);
// IGNORE; not introspectable; shadowed-by add_methodv, varargs not supported

// void jsc_class_add_method_variadic (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type);
// void jsc_class_add_method_variadic (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type);
// SKIP; callback type  not supported

// void jsc_class_add_methodv (JSCClass* jsc_class, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// void jsc_class_add_methodv (::JSCClass* jsc_class, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// SKIP; callback type  not supported

// void jsc_class_add_property (JSCClass* jsc_class, const char* name, GType property_type, GCallback getter, GCallback setter, gpointer user_data, GDestroyNotify destroy_notify);
// void jsc_class_add_property (::JSCClass* jsc_class, const char* name, GType property_type,  getter,  setter, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; setter type  not supported, getter type  not supported

// const char* jsc_class_get_name (JSCClass* jsc_class);
// const char* jsc_class_get_name (::JSCClass* jsc_class);
GI_INLINE_DECL std::string get_name () noexcept;

// JSCClass* jsc_class_get_parent (JSCClass* jsc_class);
// ::JSCClass* jsc_class_get_parent (::JSCClass* jsc_class);
GI_INLINE_DECL JavaScriptCore::Class get_parent () noexcept;

gi::property_proxy_write<JavaScriptCore::Context, base::ClassBase> property_context()
{ return gi::property_proxy_write<JavaScriptCore::Context, base::ClassBase> (*this, "context"); }

gi::property_proxy<std::string, base::ClassBase> property_name()
{ return gi::property_proxy<std::string, base::ClassBase> (*this, "name"); }
const gi::property_proxy<std::string, base::ClassBase> property_name() const
{ return gi::property_proxy<std::string, base::ClassBase> (*this, "name"); }

gi::property_proxy<JavaScriptCore::Class, base::ClassBase> property_parent()
{ return gi::property_proxy<JavaScriptCore::Class, base::ClassBase> (*this, "parent"); }
const gi::property_proxy<JavaScriptCore::Class, base::ClassBase> property_parent() const
{ return gi::property_proxy<JavaScriptCore::Class, base::ClassBase> (*this, "parent"); }

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/class_extra_def.hpp>)
#include <javascriptcore/class_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/class_extra.hpp>)
#include <javascriptcore/class_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class Class : public GI_JAVASCRIPTCORE_CLASS_BASE
{ typedef GI_JAVASCRIPTCORE_CLASS_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCClass>
{ typedef JavaScriptCore::Class type; }; 

} // namespace repository

} // namespace gi

#endif
