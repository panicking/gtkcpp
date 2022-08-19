// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_VALUE_HPP_
#define _GI_JAVASCRIPTCORE_VALUE_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {

class Class;
class Context;

class Value;

namespace base {


#define GI_JAVASCRIPTCORE_VALUE_BASE base::ValueBase
class ValueBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCValue BaseObjectType;

ValueBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_value_get_type(); } 

// JSCValue* jsc_value_new_array (JSCContext* context, GType first_item_type);
// ::JSCValue* jsc_value_new_array (::JSCContext* context, GType first_item_type);
// IGNORE; not introspectable, varargs not supported

// JSCValue* jsc_value_new_array_from_garray (JSCContext* context, GPtrArray* array);
// ::JSCValue* jsc_value_new_array_from_garray (::JSCContext* context,  array);
// SKIP; array type  not supported

// JSCValue* jsc_value_new_array_from_strv (JSCContext* context, const char* const* strv);
// ::JSCValue* jsc_value_new_array_from_strv (::JSCContext* context, const char** strv);
static GI_INLINE_DECL JavaScriptCore::Value new_array_from_strv (JavaScriptCore::Context context, const std::vector<std::string> & strv) noexcept;

// JSCValue* jsc_value_new_boolean (JSCContext* context, gboolean value);
// ::JSCValue* jsc_value_new_boolean (::JSCContext* context, gboolean value);
static GI_INLINE_DECL JavaScriptCore::Value new_boolean (JavaScriptCore::Context context, gboolean value) noexcept;

// JSCValue* jsc_value_new_from_json (JSCContext* context, const char* json);
// ::JSCValue* jsc_value_new_from_json (::JSCContext* context, const char* json);
static GI_INLINE_DECL JavaScriptCore::Value new_from_json (JavaScriptCore::Context context, const std::string & json) noexcept;

// JSCValue* jsc_value_new_function (JSCContext* context, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_params);
// ::JSCValue* jsc_value_new_function (::JSCContext* context, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_params);
// IGNORE; not introspectable; shadowed-by new_functionv, varargs not supported

// JSCValue* jsc_value_new_function_variadic (JSCContext* context, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type);
// ::JSCValue* jsc_value_new_function_variadic (::JSCContext* context, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type);
// SKIP; callback type  not supported

// JSCValue* jsc_value_new_functionv (JSCContext* context, const char* name, GCallback callback, gpointer user_data, GDestroyNotify destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// ::JSCValue* jsc_value_new_functionv (::JSCContext* context, const char* name,  callback, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify, GType return_type, guint n_parameters, GType* parameter_types);
// SKIP; callback type  not supported

// JSCValue* jsc_value_new_null (JSCContext* context);
// ::JSCValue* jsc_value_new_null (::JSCContext* context);
static GI_INLINE_DECL JavaScriptCore::Value new_null (JavaScriptCore::Context context) noexcept;

// JSCValue* jsc_value_new_number (JSCContext* context, double number);
// ::JSCValue* jsc_value_new_number (::JSCContext* context, gdouble number);
static GI_INLINE_DECL JavaScriptCore::Value new_number (JavaScriptCore::Context context, gdouble number) noexcept;

// JSCValue* jsc_value_new_object (JSCContext* context, gpointer instance, JSCClass* jsc_class);
// ::JSCValue* jsc_value_new_object (::JSCContext* context, void* instance, ::JSCClass* jsc_class);
static GI_INLINE_DECL JavaScriptCore::Value new_object (JavaScriptCore::Context context, void* instance, JavaScriptCore::Class jsc_class) noexcept;
static GI_INLINE_DECL JavaScriptCore::Value new_object (JavaScriptCore::Context context, void* instance) noexcept;

// JSCValue* jsc_value_new_string (JSCContext* context, const char* string);
// ::JSCValue* jsc_value_new_string (::JSCContext* context, const char* string);
static GI_INLINE_DECL JavaScriptCore::Value new_string (JavaScriptCore::Context context, const std::string & string) noexcept;
static GI_INLINE_DECL JavaScriptCore::Value new_string (JavaScriptCore::Context context) noexcept;

// JSCValue* jsc_value_new_string_from_bytes (JSCContext* context, GBytes* bytes);
// ::JSCValue* jsc_value_new_string_from_bytes (::JSCContext* context, ::GBytes* bytes);
static GI_INLINE_DECL JavaScriptCore::Value new_string_from_bytes (JavaScriptCore::Context context, GLib::Bytes bytes) noexcept;
static GI_INLINE_DECL JavaScriptCore::Value new_string_from_bytes (JavaScriptCore::Context context) noexcept;

// JSCValue* jsc_value_new_undefined (JSCContext* context);
// ::JSCValue* jsc_value_new_undefined (::JSCContext* context);
static GI_INLINE_DECL JavaScriptCore::Value new_undefined (JavaScriptCore::Context context) noexcept;

// JSCValue* jsc_value_constructor_call (JSCValue* value, GType first_parameter_type);
// ::JSCValue* jsc_value_constructor_call (::JSCValue* value, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by constructor_callv, varargs not supported

// JSCValue* jsc_value_constructor_callv (JSCValue* value, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_constructor_callv (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
GI_INLINE_DECL JavaScriptCore::Value constructor_call (guint n_parameters, JavaScriptCore::Value * parameters) noexcept;

// JSCValue* jsc_value_function_call (JSCValue* value, GType first_parameter_type);
// ::JSCValue* jsc_value_function_call (::JSCValue* value, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by function_callv, varargs not supported

// JSCValue* jsc_value_function_callv (JSCValue* value, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_function_callv (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
GI_INLINE_DECL JavaScriptCore::Value function_call (guint n_parameters, JavaScriptCore::Value * parameters) noexcept;

// JSCContext* jsc_value_get_context (JSCValue* value);
// ::JSCContext* jsc_value_get_context (::JSCValue* value);
GI_INLINE_DECL JavaScriptCore::Context get_context () noexcept;

// gboolean jsc_value_is_array (JSCValue* value);
// gboolean jsc_value_is_array (::JSCValue* value);
GI_INLINE_DECL bool is_array () noexcept;

// gboolean jsc_value_is_boolean (JSCValue* value);
// gboolean jsc_value_is_boolean (::JSCValue* value);
GI_INLINE_DECL bool is_boolean () noexcept;

// gboolean jsc_value_is_constructor (JSCValue* value);
// gboolean jsc_value_is_constructor (::JSCValue* value);
GI_INLINE_DECL bool is_constructor () noexcept;

// gboolean jsc_value_is_function (JSCValue* value);
// gboolean jsc_value_is_function (::JSCValue* value);
GI_INLINE_DECL bool is_function () noexcept;

// gboolean jsc_value_is_null (JSCValue* value);
// gboolean jsc_value_is_null (::JSCValue* value);
GI_INLINE_DECL bool is_null () noexcept;

// gboolean jsc_value_is_number (JSCValue* value);
// gboolean jsc_value_is_number (::JSCValue* value);
GI_INLINE_DECL bool is_number () noexcept;

// gboolean jsc_value_is_object (JSCValue* value);
// gboolean jsc_value_is_object (::JSCValue* value);
GI_INLINE_DECL bool is_object () noexcept;

// gboolean jsc_value_is_string (JSCValue* value);
// gboolean jsc_value_is_string (::JSCValue* value);
GI_INLINE_DECL bool is_string () noexcept;

// gboolean jsc_value_is_undefined (JSCValue* value);
// gboolean jsc_value_is_undefined (::JSCValue* value);
GI_INLINE_DECL bool is_undefined () noexcept;

// void jsc_value_object_define_property_accessor (JSCValue* value, const char* property_name, JSCValuePropertyFlags flags, GType property_type, GCallback getter, GCallback setter, gpointer user_data, GDestroyNotify destroy_notify);
// void jsc_value_object_define_property_accessor (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, GType property_type,  getter,  setter, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; setter type  not supported, getter type  not supported

// void jsc_value_object_define_property_data (JSCValue* value, const char* property_name, JSCValuePropertyFlags flags, JSCValue* property_value);
// void jsc_value_object_define_property_data (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, ::JSCValue* property_value);
GI_INLINE_DECL void object_define_property_data (const std::string & property_name, JavaScriptCore::ValuePropertyFlags flags, JavaScriptCore::Value property_value) noexcept;
GI_INLINE_DECL void object_define_property_data (const std::string & property_name, JavaScriptCore::ValuePropertyFlags flags) noexcept;

// gboolean jsc_value_object_delete_property (JSCValue* value, const char* name);
// gboolean jsc_value_object_delete_property (::JSCValue* value, const char* name);
GI_INLINE_DECL bool object_delete_property (const std::string & name) noexcept;

// gchar** jsc_value_object_enumerate_properties (JSCValue* value);
// char** jsc_value_object_enumerate_properties (::JSCValue* value);
GI_INLINE_DECL std::vector<std::string> object_enumerate_properties () noexcept;

// JSCValue* jsc_value_object_get_property (JSCValue* value, const char* name);
// ::JSCValue* jsc_value_object_get_property (::JSCValue* value, const char* name);
GI_INLINE_DECL JavaScriptCore::Value object_get_property (const std::string & name) noexcept;

// JSCValue* jsc_value_object_get_property_at_index (JSCValue* value, guint index);
// ::JSCValue* jsc_value_object_get_property_at_index (::JSCValue* value, guint index);
GI_INLINE_DECL JavaScriptCore::Value object_get_property_at_index (guint index) noexcept;

// gboolean jsc_value_object_has_property (JSCValue* value, const char* name);
// gboolean jsc_value_object_has_property (::JSCValue* value, const char* name);
GI_INLINE_DECL bool object_has_property (const std::string & name) noexcept;

// JSCValue* jsc_value_object_invoke_method (JSCValue* value, const char* name, GType first_parameter_type);
// ::JSCValue* jsc_value_object_invoke_method (::JSCValue* value, const char* name, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by object_invoke_methodv, varargs not supported

// JSCValue* jsc_value_object_invoke_methodv (JSCValue* value, const char* name, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_object_invoke_methodv (::JSCValue* value, const char* name, guint n_parameters, ::JSCValue** parameters);
GI_INLINE_DECL JavaScriptCore::Value object_invoke_method (const std::string & name, guint n_parameters, JavaScriptCore::Value * parameters) noexcept;

// gboolean jsc_value_object_is_instance_of (JSCValue* value, const char* name);
// gboolean jsc_value_object_is_instance_of (::JSCValue* value, const char* name);
GI_INLINE_DECL bool object_is_instance_of (const std::string & name) noexcept;

// void jsc_value_object_set_property (JSCValue* value, const char* name, JSCValue* property);
// void jsc_value_object_set_property (::JSCValue* value, const char* name, ::JSCValue* property);
GI_INLINE_DECL void object_set_property (const std::string & name, JavaScriptCore::Value property) noexcept;

// void jsc_value_object_set_property_at_index (JSCValue* value, guint index, JSCValue* property);
// void jsc_value_object_set_property_at_index (::JSCValue* value, guint index, ::JSCValue* property);
GI_INLINE_DECL void object_set_property_at_index (guint index, JavaScriptCore::Value property) noexcept;

// gboolean jsc_value_to_boolean (JSCValue* value);
// gboolean jsc_value_to_boolean (::JSCValue* value);
GI_INLINE_DECL bool to_boolean () noexcept;

// double jsc_value_to_double (JSCValue* value);
// gdouble jsc_value_to_double (::JSCValue* value);
GI_INLINE_DECL gdouble to_double () noexcept;

// gint32 jsc_value_to_int32 (JSCValue* value);
// gint32 jsc_value_to_int32 (::JSCValue* value);
GI_INLINE_DECL gint32 to_int32 () noexcept;

// char* jsc_value_to_json (JSCValue* value, guint indent);
// char* jsc_value_to_json (::JSCValue* value, guint indent);
GI_INLINE_DECL std::string to_json (guint indent) noexcept;

// char* jsc_value_to_string (JSCValue* value);
// char* jsc_value_to_string (::JSCValue* value);
GI_INLINE_DECL std::string to_string () noexcept;

// GBytes* jsc_value_to_string_as_bytes (JSCValue* value);
// ::GBytes* jsc_value_to_string_as_bytes (::JSCValue* value);
GI_INLINE_DECL GLib::Bytes to_string_as_bytes () noexcept;

gi::property_proxy<JavaScriptCore::Context, base::ValueBase> property_context()
{ return gi::property_proxy<JavaScriptCore::Context, base::ValueBase> (*this, "context"); }
const gi::property_proxy<JavaScriptCore::Context, base::ValueBase> property_context() const
{ return gi::property_proxy<JavaScriptCore::Context, base::ValueBase> (*this, "context"); }

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/value_extra_def.hpp>)
#include <javascriptcore/value_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/value_extra.hpp>)
#include <javascriptcore/value_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class Value : public GI_JAVASCRIPTCORE_VALUE_BASE
{ typedef GI_JAVASCRIPTCORE_VALUE_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCValue>
{ typedef JavaScriptCore::Value type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {


class ValueClassDef
{
typedef ValueClassDef self;
public:
typedef JavaScriptCore::Value instance_type;
typedef ::JSCValueClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ValueClass: public detail::ClassTemplate<JavaScriptCore::impl::internal::ValueClassDef, GObject::impl::internal::ObjectClass>
{
typedef ValueClass self;
typedef detail::ClassTemplate<JavaScriptCore::impl::internal::ValueClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using ValueImpl = detail::ObjectImpl<Value, internal::ValueClass>;

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
