// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_VALUE_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_VALUE_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

// JSCValue* jsc_value_new_array (JSCContext* context, GType first_item_type);
// ::JSCValue* jsc_value_new_array (::JSCContext* context, GType first_item_type);
// IGNORE; not introspectable, varargs not supported

// JSCValue* jsc_value_new_array_from_garray (JSCContext* context, GPtrArray* array);
// ::JSCValue* jsc_value_new_array_from_garray (::JSCContext* context,  array);
// SKIP; array type  not supported

// JSCValue* jsc_value_new_array_from_strv (JSCContext* context, const char* const* strv);
// ::JSCValue* jsc_value_new_array_from_strv (::JSCContext* context, const char** strv);
JavaScriptCore::Value base::ValueBase::new_array_from_strv (JavaScriptCore::Context context, const std::vector<std::string> & strv) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char** strv);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_array_from_strv;
  auto strv_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (strv);
  auto strv_w = unwrap (strv_i, gi::transfer_none, direction_in);
  auto strv_to_c = strv_w.gobj_(false);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char**) (strv_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_boolean (JSCContext* context, gboolean value);
// ::JSCValue* jsc_value_new_boolean (::JSCContext* context, gboolean value);
JavaScriptCore::Value base::ValueBase::new_boolean (JavaScriptCore::Context context, gboolean value) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, gboolean value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_boolean;
  auto value_to_c = value;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (gboolean) (value_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_from_json (JSCContext* context, const char* json);
// ::JSCValue* jsc_value_new_from_json (::JSCContext* context, const char* json);
JavaScriptCore::Value base::ValueBase::new_from_json (JavaScriptCore::Context context, const std::string & json) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* json);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_from_json;
  auto json_to_c = gi::unwrap (json, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char*) (json_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

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
JavaScriptCore::Value base::ValueBase::new_null (JavaScriptCore::Context context) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_null;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_number (JSCContext* context, double number);
// ::JSCValue* jsc_value_new_number (::JSCContext* context, gdouble number);
JavaScriptCore::Value base::ValueBase::new_number (JavaScriptCore::Context context, gdouble number) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, gdouble number);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_number;
  auto number_to_c = number;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (gdouble) (number_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_object (JSCContext* context, gpointer instance, JSCClass* jsc_class);
// ::JSCValue* jsc_value_new_object (::JSCContext* context, void* instance, ::JSCClass* jsc_class);
JavaScriptCore::Value base::ValueBase::new_object (JavaScriptCore::Context context, void* instance, JavaScriptCore::Class jsc_class) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, void* instance, ::JSCClass* jsc_class);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_object;
  auto jsc_class_to_c = gi::unwrap (jsc_class, gi::transfer_none, gi::direction_in);
  auto instance_to_c = instance;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (void*) (instance_to_c), (::JSCClass*) (jsc_class_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
JavaScriptCore::Value base::ValueBase::new_object (JavaScriptCore::Context context, void* instance) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, void* instance, ::JSCClass* jsc_class);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_object;
  auto jsc_class_to_c = nullptr;
  auto instance_to_c = instance;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (void*) (instance_to_c), (::JSCClass*) (jsc_class_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_string (JSCContext* context, const char* string);
// ::JSCValue* jsc_value_new_string (::JSCContext* context, const char* string);
JavaScriptCore::Value base::ValueBase::new_string (JavaScriptCore::Context context, const std::string & string) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_string;
  auto string_to_c = gi::unwrap (string, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
JavaScriptCore::Value base::ValueBase::new_string (JavaScriptCore::Context context) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* string);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_string;
  auto string_to_c = nullptr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char*) (string_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_string_from_bytes (JSCContext* context, GBytes* bytes);
// ::JSCValue* jsc_value_new_string_from_bytes (::JSCContext* context, ::GBytes* bytes);
JavaScriptCore::Value base::ValueBase::new_string_from_bytes (JavaScriptCore::Context context, GLib::Bytes bytes) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_string_from_bytes;
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
JavaScriptCore::Value base::ValueBase::new_string_from_bytes (JavaScriptCore::Context context) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, ::GBytes* bytes);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_string_from_bytes;
  auto bytes_to_c = nullptr;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (::GBytes*) (bytes_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_new_undefined (JSCContext* context);
// ::JSCValue* jsc_value_new_undefined (::JSCContext* context);
JavaScriptCore::Value base::ValueBase::new_undefined (JavaScriptCore::Context context) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_new_undefined;
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_constructor_call (JSCValue* value, GType first_parameter_type);
// ::JSCValue* jsc_value_constructor_call (::JSCValue* value, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by constructor_callv, varargs not supported

// JSCValue* jsc_value_constructor_callv (JSCValue* value, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_constructor_callv (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
JavaScriptCore::Value base::ValueBase::constructor_call (guint n_parameters, JavaScriptCore::Value * parameters) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_constructor_callv;
  auto parameters_i = detail::make_list_unwrap_range (parameters, n_parameters, false);
  auto parameters_w = unwrap (parameters_i, gi::transfer_none, direction_in);
  auto parameters_to_c = parameters_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (guint) (parameters_w.size()), (::JSCValue**) (parameters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_function_call (JSCValue* value, GType first_parameter_type);
// ::JSCValue* jsc_value_function_call (::JSCValue* value, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by function_callv, varargs not supported

// JSCValue* jsc_value_function_callv (JSCValue* value, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_function_callv (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
JavaScriptCore::Value base::ValueBase::function_call (guint n_parameters, JavaScriptCore::Value * parameters) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCValue* value, guint n_parameters, ::JSCValue** parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_function_callv;
  auto parameters_i = detail::make_list_unwrap_range (parameters, n_parameters, false);
  auto parameters_w = unwrap (parameters_i, gi::transfer_none, direction_in);
  auto parameters_to_c = parameters_w.gobj_(false);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (guint) (parameters_w.size()), (::JSCValue**) (parameters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCContext* jsc_value_get_context (JSCValue* value);
// ::JSCContext* jsc_value_get_context (::JSCValue* value);
JavaScriptCore::Context base::ValueBase::get_context () noexcept
{
  typedef ::JSCContext* (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_get_context;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean jsc_value_is_array (JSCValue* value);
// gboolean jsc_value_is_array (::JSCValue* value);
bool base::ValueBase::is_array () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_array;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_boolean (JSCValue* value);
// gboolean jsc_value_is_boolean (::JSCValue* value);
bool base::ValueBase::is_boolean () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_boolean;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_constructor (JSCValue* value);
// gboolean jsc_value_is_constructor (::JSCValue* value);
bool base::ValueBase::is_constructor () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_constructor;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_function (JSCValue* value);
// gboolean jsc_value_is_function (::JSCValue* value);
bool base::ValueBase::is_function () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_function;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_null (JSCValue* value);
// gboolean jsc_value_is_null (::JSCValue* value);
bool base::ValueBase::is_null () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_null;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_number (JSCValue* value);
// gboolean jsc_value_is_number (::JSCValue* value);
bool base::ValueBase::is_number () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_number;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_object (JSCValue* value);
// gboolean jsc_value_is_object (::JSCValue* value);
bool base::ValueBase::is_object () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_object;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_string (JSCValue* value);
// gboolean jsc_value_is_string (::JSCValue* value);
bool base::ValueBase::is_string () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_string;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gboolean jsc_value_is_undefined (JSCValue* value);
// gboolean jsc_value_is_undefined (::JSCValue* value);
bool base::ValueBase::is_undefined () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_is_undefined;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// void jsc_value_object_define_property_accessor (JSCValue* value, const char* property_name, JSCValuePropertyFlags flags, GType property_type, GCallback getter, GCallback setter, gpointer user_data, GDestroyNotify destroy_notify);
// void jsc_value_object_define_property_accessor (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, GType property_type,  getter,  setter, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; setter type  not supported, getter type  not supported

// void jsc_value_object_define_property_data (JSCValue* value, const char* property_name, JSCValuePropertyFlags flags, JSCValue* property_value);
// void jsc_value_object_define_property_data (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, ::JSCValue* property_value);
void base::ValueBase::object_define_property_data (const std::string & property_name, JavaScriptCore::ValuePropertyFlags flags, JavaScriptCore::Value property_value) noexcept
{
  typedef void (*call_wrap_t) (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, ::JSCValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_define_property_data;
  auto property_value_to_c = gi::unwrap (property_value, gi::transfer_none, gi::direction_in);
  auto flags_to_c = gi::unwrap (flags);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (property_name_to_c), (::JSCValuePropertyFlags) (flags_to_c), (::JSCValue*) (property_value_to_c));
}
void base::ValueBase::object_define_property_data (const std::string & property_name, JavaScriptCore::ValuePropertyFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::JSCValue* value, const char* property_name, ::JSCValuePropertyFlags flags, ::JSCValue* property_value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_define_property_data;
  auto property_value_to_c = nullptr;
  auto flags_to_c = gi::unwrap (flags);
  auto property_name_to_c = gi::unwrap (property_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (property_name_to_c), (::JSCValuePropertyFlags) (flags_to_c), (::JSCValue*) (property_value_to_c));
}

// gboolean jsc_value_object_delete_property (JSCValue* value, const char* name);
// gboolean jsc_value_object_delete_property (::JSCValue* value, const char* name);
bool base::ValueBase::object_delete_property (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_delete_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// gchar** jsc_value_object_enumerate_properties (JSCValue* value);
// char** jsc_value_object_enumerate_properties (::JSCValue* value);
std::vector<std::string> base::ValueBase::object_enumerate_properties () noexcept
{
  typedef char** (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_enumerate_properties;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// JSCValue* jsc_value_object_get_property (JSCValue* value, const char* name);
// ::JSCValue* jsc_value_object_get_property (::JSCValue* value, const char* name);
JavaScriptCore::Value base::ValueBase::object_get_property (const std::string & name) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCValue* value, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_get_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_value_object_get_property_at_index (JSCValue* value, guint index);
// ::JSCValue* jsc_value_object_get_property_at_index (::JSCValue* value, guint index);
JavaScriptCore::Value base::ValueBase::object_get_property_at_index (guint index) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCValue* value, guint index);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_get_property_at_index;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (guint) (index_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean jsc_value_object_has_property (JSCValue* value, const char* name);
// gboolean jsc_value_object_has_property (::JSCValue* value, const char* name);
bool base::ValueBase::object_has_property (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_has_property;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// JSCValue* jsc_value_object_invoke_method (JSCValue* value, const char* name, GType first_parameter_type);
// ::JSCValue* jsc_value_object_invoke_method (::JSCValue* value, const char* name, GType first_parameter_type);
// IGNORE; not introspectable; shadowed-by object_invoke_methodv, varargs not supported

// JSCValue* jsc_value_object_invoke_methodv (JSCValue* value, const char* name, guint n_parameters, JSCValue** parameters);
// ::JSCValue* jsc_value_object_invoke_methodv (::JSCValue* value, const char* name, guint n_parameters, ::JSCValue** parameters);
JavaScriptCore::Value base::ValueBase::object_invoke_method (const std::string & name, guint n_parameters, JavaScriptCore::Value * parameters) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCValue* value, const char* name, guint n_parameters, ::JSCValue** parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_invoke_methodv;
  auto parameters_i = detail::make_list_unwrap_range (parameters, n_parameters, false);
  auto parameters_w = unwrap (parameters_i, gi::transfer_none, direction_in);
  auto parameters_to_c = parameters_w.gobj_(false);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c), (guint) (parameters_w.size()), (::JSCValue**) (parameters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean jsc_value_object_is_instance_of (JSCValue* value, const char* name);
// gboolean jsc_value_object_is_instance_of (::JSCValue* value, const char* name);
bool base::ValueBase::object_is_instance_of (const std::string & name) noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_is_instance_of;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c));
  return _temp_ret;
}

// void jsc_value_object_set_property (JSCValue* value, const char* name, JSCValue* property);
// void jsc_value_object_set_property (::JSCValue* value, const char* name, ::JSCValue* property);
void base::ValueBase::object_set_property (const std::string & name, JavaScriptCore::Value property) noexcept
{
  typedef void (*call_wrap_t) (::JSCValue* value, const char* name, ::JSCValue* property);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_set_property;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCValue*) (gobj_()), (const char*) (name_to_c), (::JSCValue*) (property_to_c));
}

// void jsc_value_object_set_property_at_index (JSCValue* value, guint index, JSCValue* property);
// void jsc_value_object_set_property_at_index (::JSCValue* value, guint index, ::JSCValue* property);
void base::ValueBase::object_set_property_at_index (guint index, JavaScriptCore::Value property) noexcept
{
  typedef void (*call_wrap_t) (::JSCValue* value, guint index, ::JSCValue* property);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_object_set_property_at_index;
  auto property_to_c = gi::unwrap (property, gi::transfer_none, gi::direction_in);
  auto index_to_c = index;
  call_wrap_v ((::JSCValue*) (gobj_()), (guint) (index_to_c), (::JSCValue*) (property_to_c));
}

// gboolean jsc_value_to_boolean (JSCValue* value);
// gboolean jsc_value_to_boolean (::JSCValue* value);
bool base::ValueBase::to_boolean () noexcept
{
  typedef gboolean (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_boolean;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// double jsc_value_to_double (JSCValue* value);
// gdouble jsc_value_to_double (::JSCValue* value);
gdouble base::ValueBase::to_double () noexcept
{
  typedef gdouble (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_double;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// gint32 jsc_value_to_int32 (JSCValue* value);
// gint32 jsc_value_to_int32 (::JSCValue* value);
gint32 base::ValueBase::to_int32 () noexcept
{
  typedef gint32 (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_int32;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return _temp_ret;
}

// char* jsc_value_to_json (JSCValue* value, guint indent);
// char* jsc_value_to_json (::JSCValue* value, guint indent);
std::string base::ValueBase::to_json (guint indent) noexcept
{
  typedef char* (*call_wrap_t) (::JSCValue* value, guint indent);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_json;
  auto indent_to_c = indent;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()), (guint) (indent_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* jsc_value_to_string (JSCValue* value);
// char* jsc_value_to_string (::JSCValue* value);
std::string base::ValueBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_string;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GBytes* jsc_value_to_string_as_bytes (JSCValue* value);
// ::GBytes* jsc_value_to_string_as_bytes (::JSCValue* value);
GLib::Bytes base::ValueBase::to_string_as_bytes () noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_value_to_string_as_bytes;
  auto _temp_ret = call_wrap_v ((::JSCValue*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/value_extra_def_impl.hpp>)
#include <javascriptcore/value_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/value_extra_impl.hpp>)
#include <javascriptcore/value_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {

void ValueClassDef::class_init (gpointer class_struct, gpointer )
{
  ::JSCValueClass *methods = (::JSCValueClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
