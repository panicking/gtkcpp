// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_CLASS_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_CLASS_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

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
std::string base::ClassBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::JSCClass* jsc_class);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_class_get_name;
  auto _temp_ret = call_wrap_v ((::JSCClass*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// JSCClass* jsc_class_get_parent (JSCClass* jsc_class);
// ::JSCClass* jsc_class_get_parent (::JSCClass* jsc_class);
JavaScriptCore::Class base::ClassBase::get_parent () noexcept
{
  typedef ::JSCClass* (*call_wrap_t) (::JSCClass* jsc_class);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_class_get_parent;
  auto _temp_ret = call_wrap_v ((::JSCClass*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/class_extra_def_impl.hpp>)
#include <javascriptcore/class_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/class_extra_impl.hpp>)
#include <javascriptcore/class_extra_impl.hpp>
#endif
#endif

#endif
