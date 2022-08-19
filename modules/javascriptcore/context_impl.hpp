// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_CONTEXT_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_CONTEXT_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

// JSCContext* jsc_context_new ();
// ::JSCContext* jsc_context_new ();
JavaScriptCore::Context base::ContextBase::new_ () noexcept
{
  typedef ::JSCContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCContext* jsc_context_new_with_virtual_machine (JSCVirtualMachine* vm);
// ::JSCContext* jsc_context_new_with_virtual_machine (::JSCVirtualMachine* vm);
JavaScriptCore::Context base::ContextBase::new_with_virtual_machine (JavaScriptCore::VirtualMachine vm) noexcept
{
  typedef ::JSCContext* (*call_wrap_t) (::JSCVirtualMachine* vm);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_new_with_virtual_machine;
  auto vm_to_c = gi::unwrap (vm, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCVirtualMachine*) (vm_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCContext* jsc_context_get_current ();
// ::JSCContext* jsc_context_get_current ();
JavaScriptCore::Context base::ContextBase::get_current () noexcept
{
  typedef ::JSCContext* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_get_current;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// JSCCheckSyntaxResult jsc_context_check_syntax (JSCContext* context, const char* code, gssize length, JSCCheckSyntaxMode mode, const char* uri, unsigned line_number, JSCException** exception);
// ::JSCCheckSyntaxResult jsc_context_check_syntax (::JSCContext* context, const char* code, gssize length, ::JSCCheckSyntaxMode mode, const char* uri, guint line_number, ::JSCException** exception);
JavaScriptCore::CheckSyntaxResult base::ContextBase::check_syntax (const std::string & code, gssize length, JavaScriptCore::CheckSyntaxMode mode, const std::string & uri, guint line_number, JavaScriptCore::Exception * exception) noexcept
{
  typedef ::JSCCheckSyntaxResult (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, ::JSCCheckSyntaxMode mode, const char* uri, guint line_number, ::JSCException** exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_check_syntax;
  ::JSCException* exception_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto mode_to_c = gi::unwrap (mode);
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (::JSCCheckSyntaxMode) (mode_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCException**) (exception ? &exception_o : nullptr));
  if (exception) *exception = gi::wrap (exception_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}
std::tuple<JavaScriptCore::CheckSyntaxResult, JavaScriptCore::Exception> base::ContextBase::check_syntax (const std::string & code, gssize length, JavaScriptCore::CheckSyntaxMode mode, const std::string & uri, guint line_number) noexcept
{
  typedef ::JSCCheckSyntaxResult (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, ::JSCCheckSyntaxMode mode, const char* uri, guint line_number, ::JSCException** exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_check_syntax;
  ::JSCException* exception_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto mode_to_c = gi::unwrap (mode);
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (::JSCCheckSyntaxMode) (mode_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCException**) (&exception_o));
  return std::make_tuple (gi::wrap (_temp_ret), gi::wrap (exception_o, gi::transfer_full, gi::direction_out));
}

// void jsc_context_clear_exception (JSCContext* context);
// void jsc_context_clear_exception (::JSCContext* context);
void base::ContextBase::clear_exception () noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_clear_exception;
  call_wrap_v ((::JSCContext*) (gobj_()));
}

// JSCValue* jsc_context_evaluate (JSCContext* context, const char* code, gssize length);
// ::JSCValue* jsc_context_evaluate (::JSCContext* context, const char* code, gssize length);
JavaScriptCore::Value base::ContextBase::evaluate (const std::string & code, gssize length) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate;
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_context_evaluate_in_object (JSCContext* context, const char* code, gssize length, gpointer object_instance, JSCClass* object_class, const char* uri, guint line_number, JSCValue** object);
// ::JSCValue* jsc_context_evaluate_in_object (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
JavaScriptCore::Value base::ContextBase::evaluate_in_object (const std::string & code, gssize length, void* object_instance, JavaScriptCore::Class object_class, const std::string & uri, guint line_number, JavaScriptCore::Value & object) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate_in_object;
  ::JSCValue* object_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto object_class_to_c = gi::unwrap (object_class, gi::transfer_none, gi::direction_in);
  auto object_instance_to_c = object_instance;
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (void*) (object_instance_to_c), (::JSCClass*) (object_class_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCValue**) (&object_o));
  object = gi::wrap (object_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
JavaScriptCore::Value base::ContextBase::evaluate_in_object (const std::string & code, gssize length, void* object_instance, const std::string & uri, guint line_number, JavaScriptCore::Value & object) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate_in_object;
  ::JSCValue* object_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto object_class_to_c = nullptr;
  auto object_instance_to_c = object_instance;
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (void*) (object_instance_to_c), (::JSCClass*) (object_class_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCValue**) (&object_o));
  object = gi::wrap (object_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
std::tuple<JavaScriptCore::Value, JavaScriptCore::Value> base::ContextBase::evaluate_in_object (const std::string & code, gssize length, void* object_instance, JavaScriptCore::Class object_class, const std::string & uri, guint line_number) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate_in_object;
  ::JSCValue* object_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto object_class_to_c = gi::unwrap (object_class, gi::transfer_none, gi::direction_in);
  auto object_instance_to_c = object_instance;
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (void*) (object_instance_to_c), (::JSCClass*) (object_class_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCValue**) (&object_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (object_o, gi::transfer_full, gi::direction_out));
}
std::tuple<JavaScriptCore::Value, JavaScriptCore::Value> base::ContextBase::evaluate_in_object (const std::string & code, gssize length, void* object_instance, const std::string & uri, guint line_number) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate_in_object;
  ::JSCValue* object_o {};
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto object_class_to_c = nullptr;
  auto object_instance_to_c = object_instance;
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (void*) (object_instance_to_c), (::JSCClass*) (object_class_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c), (::JSCValue**) (&object_o));
  return std::make_tuple (gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out), gi::wrap (object_o, gi::transfer_full, gi::direction_out));
}

// JSCValue* jsc_context_evaluate_with_source_uri (JSCContext* context, const char* code, gssize length, const char* uri, guint line_number);
// ::JSCValue* jsc_context_evaluate_with_source_uri (::JSCContext* context, const char* code, gssize length, const char* uri, guint line_number);
JavaScriptCore::Value base::ContextBase::evaluate_with_source_uri (const std::string & code, gssize length, const std::string & uri, guint line_number) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* code, gssize length, const char* uri, guint line_number);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_evaluate_with_source_uri;
  auto line_number_to_c = line_number;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto length_to_c = length;
  auto code_to_c = gi::unwrap (code, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (code_to_c), (gssize) (length_to_c), (const char*) (uri_to_c), (guint) (line_number_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCException* jsc_context_get_exception (JSCContext* context);
// ::JSCException* jsc_context_get_exception (::JSCContext* context);
JavaScriptCore::Exception base::ContextBase::get_exception () noexcept
{
  typedef ::JSCException* (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_get_exception;
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// JSCValue* jsc_context_get_global_object (JSCContext* context);
// ::JSCValue* jsc_context_get_global_object (::JSCContext* context);
JavaScriptCore::Value base::ContextBase::get_global_object () noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_get_global_object;
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCValue* jsc_context_get_value (JSCContext* context, const char* name);
// ::JSCValue* jsc_context_get_value (::JSCContext* context, const char* name);
JavaScriptCore::Value base::ContextBase::get_value (const std::string & name) noexcept
{
  typedef ::JSCValue* (*call_wrap_t) (::JSCContext* context, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_get_value;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCVirtualMachine* jsc_context_get_virtual_machine (JSCContext* context);
// ::JSCVirtualMachine* jsc_context_get_virtual_machine (::JSCContext* context);
JavaScriptCore::VirtualMachine base::ContextBase::get_virtual_machine () noexcept
{
  typedef ::JSCVirtualMachine* (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_get_virtual_machine;
  auto _temp_ret = call_wrap_v ((::JSCContext*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void jsc_context_pop_exception_handler (JSCContext* context);
// void jsc_context_pop_exception_handler (::JSCContext* context);
void base::ContextBase::pop_exception_handler () noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_pop_exception_handler;
  call_wrap_v ((::JSCContext*) (gobj_()));
}

// void jsc_context_push_exception_handler (JSCContext* context, JSCExceptionHandler handler, gpointer user_data, GDestroyNotify destroy_notify);
// void jsc_context_push_exception_handler (::JSCContext* context, JavaScriptCore::ExceptionHandler::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
void base::ContextBase::push_exception_handler (JavaScriptCore::ExceptionHandler handler) noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context, JavaScriptCore::ExceptionHandler::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_push_exception_handler;
  auto handler_wrap_ = handler ? unwrap (std::move (handler), gi::scope_notified) : nullptr;
  call_wrap_v ((::JSCContext*) (gobj_()), (JavaScriptCore::ExceptionHandler::cfunction_type) (handler_wrap_ ? &handler_wrap_->wrapper : nullptr), (void*) (handler_wrap_), (GLib::DestroyNotify::cfunction_type) (handler_wrap_ ? &handler_wrap_->destroy : nullptr));
}

// JSCClass* jsc_context_register_class (JSCContext* context, const char* name, JSCClass* parent_class, JSCClassVTable* vtable, GDestroyNotify destroy_notify);
// ::JSCClass* jsc_context_register_class (::JSCContext* context, const char* name, ::JSCClass* parent_class, ::JSCClassVTable* vtable, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; callback misses closure info

// void jsc_context_set_value (JSCContext* context, const char* name, JSCValue* value);
// void jsc_context_set_value (::JSCContext* context, const char* name, ::JSCValue* value);
void base::ContextBase::set_value (const std::string & name, JavaScriptCore::Value value) noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context, const char* name, ::JSCValue* value);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_set_value;
  auto value_to_c = gi::unwrap (value, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (name_to_c), (::JSCValue*) (value_to_c));
}

// void jsc_context_throw (JSCContext* context, const char* error_message);
// void jsc_context_throw (::JSCContext* context, const char* error_message);
void base::ContextBase::throw_ (const std::string & error_message) noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_throw;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (error_message_to_c));
}

// void jsc_context_throw_exception (JSCContext* context, JSCException* exception);
// void jsc_context_throw_exception (::JSCContext* context, ::JSCException* exception);
void base::ContextBase::throw_exception (JavaScriptCore::Exception exception) noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context, ::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_throw_exception;
  auto exception_to_c = gi::unwrap (exception, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCContext*) (gobj_()), (::JSCException*) (exception_to_c));
}

// void jsc_context_throw_printf (JSCContext* context, const char* format);
// void jsc_context_throw_printf (::JSCContext* context, const char* format);
// IGNORE; not introspectable, varargs not supported

// void jsc_context_throw_with_name (JSCContext* context, const char* error_name, const char* error_message);
// void jsc_context_throw_with_name (::JSCContext* context, const char* error_name, const char* error_message);
void base::ContextBase::throw_with_name (const std::string & error_name, const std::string & error_message) noexcept
{
  typedef void (*call_wrap_t) (::JSCContext* context, const char* error_name, const char* error_message);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_context_throw_with_name;
  auto error_message_to_c = gi::unwrap (error_message, gi::transfer_none, gi::direction_in);
  auto error_name_to_c = gi::unwrap (error_name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::JSCContext*) (gobj_()), (const char*) (error_name_to_c), (const char*) (error_message_to_c));
}

// void jsc_context_throw_with_name_printf (JSCContext* context, const char* error_name, const char* format);
// void jsc_context_throw_with_name_printf (::JSCContext* context, const char* error_name, const char* format);
// IGNORE; not introspectable, varargs not supported


} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/context_extra_def_impl.hpp>)
#include <javascriptcore/context_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/context_extra_impl.hpp>)
#include <javascriptcore/context_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {

void ContextClassDef::class_init (gpointer class_struct, gpointer )
{
  ::JSCContextClass *methods = (::JSCContextClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
