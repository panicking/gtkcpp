// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE__CALLBACKS_HPP_
#define _GI_JAVASCRIPTCORE__CALLBACKS_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

class Class;
class Context;
class Exception;
class Value;

// typedef gboolean (*JSCClassDeletePropertyFunction) (JSCClass* jsc_class, JSCContext* context, gpointer instance, const char* name);
// typedef gboolean (*JSCClassDeletePropertyFunction) (::JSCClass* jsc_class, ::JSCContext* context, void* instance, const char* name);
// SKIP; not a callback since no user_data

// typedef gchar** (*JSCClassEnumeratePropertiesFunction) (JSCClass* jsc_class, JSCContext* context, gpointer instance);
// typedef char** (*JSCClassEnumeratePropertiesFunction) (::JSCClass* jsc_class, ::JSCContext* context, void* instance);
// SKIP; container return not supported

// typedef JSCValue* (*JSCClassGetPropertyFunction) (JSCClass* jsc_class, JSCContext* context, gpointer instance, const char* name);
// typedef ::JSCValue* (*JSCClassGetPropertyFunction) (::JSCClass* jsc_class, ::JSCContext* context, void* instance, const char* name);
// SKIP; not a callback since no user_data

// typedef gboolean (*JSCClassHasPropertyFunction) (JSCClass* jsc_class, JSCContext* context, gpointer instance, const char* name);
// typedef gboolean (*JSCClassHasPropertyFunction) (::JSCClass* jsc_class, ::JSCContext* context, void* instance, const char* name);
// SKIP; not a callback since no user_data

// typedef gboolean (*JSCClassSetPropertyFunction) (JSCClass* jsc_class, JSCContext* context, gpointer instance, const char* name, JSCValue* value);
// typedef gboolean (*JSCClassSetPropertyFunction) (::JSCClass* jsc_class, ::JSCContext* context, void* instance, const char* name, ::JSCValue* value);
// SKIP; not a callback since no user_data

// typedef void (*JSCExceptionHandler) (JSCContext* context, JSCException* exception, gpointer user_data);
// typedef void (*JSCExceptionHandler) (::JSCContext* context, ::JSCException* exception, void* user_data);
typedef gi::detail::callback<void(JavaScriptCore::Context context, JavaScriptCore::Exception exception), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t> ExceptionHandler;

// typedef gboolean (*JSCOptionsFunc) (const char* option, JSCOptionType type, const char* description, gpointer user_data);
// typedef gboolean (*JSCOptionsFunc) (const char* option, ::JSCOptionType type, const char* description, void* user_data);
typedef gi::detail::callback<bool(const std::string & option, JavaScriptCore::OptionType type, const std::string & description), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t> OptionsFunc;

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
