// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_CONTEXT_HPP_
#define _GI_JAVASCRIPTCORE_CONTEXT_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {

class Class;
class ClassVTable;
class Exception;
class Value;
class VirtualMachine;

class Context;

namespace base {


#define GI_JAVASCRIPTCORE_CONTEXT_BASE base::ContextBase
class ContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCContext BaseObjectType;

ContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_context_get_type(); } 

// JSCContext* jsc_context_new ();
// ::JSCContext* jsc_context_new ();
static GI_INLINE_DECL JavaScriptCore::Context new_ () noexcept;

// JSCContext* jsc_context_new_with_virtual_machine (JSCVirtualMachine* vm);
// ::JSCContext* jsc_context_new_with_virtual_machine (::JSCVirtualMachine* vm);
static GI_INLINE_DECL JavaScriptCore::Context new_with_virtual_machine (JavaScriptCore::VirtualMachine vm) noexcept;

// JSCContext* jsc_context_get_current ();
// ::JSCContext* jsc_context_get_current ();
static GI_INLINE_DECL JavaScriptCore::Context get_current () noexcept;

// JSCCheckSyntaxResult jsc_context_check_syntax (JSCContext* context, const char* code, gssize length, JSCCheckSyntaxMode mode, const char* uri, unsigned line_number, JSCException** exception);
// ::JSCCheckSyntaxResult jsc_context_check_syntax (::JSCContext* context, const char* code, gssize length, ::JSCCheckSyntaxMode mode, const char* uri, guint line_number, ::JSCException** exception);
GI_INLINE_DECL JavaScriptCore::CheckSyntaxResult check_syntax (const std::string & code, gssize length, JavaScriptCore::CheckSyntaxMode mode, const std::string & uri, guint line_number, JavaScriptCore::Exception * exception = nullptr) noexcept;
GI_INLINE_DECL std::tuple<JavaScriptCore::CheckSyntaxResult, JavaScriptCore::Exception> check_syntax (const std::string & code, gssize length, JavaScriptCore::CheckSyntaxMode mode, const std::string & uri, guint line_number) noexcept;

// void jsc_context_clear_exception (JSCContext* context);
// void jsc_context_clear_exception (::JSCContext* context);
GI_INLINE_DECL void clear_exception () noexcept;

// JSCValue* jsc_context_evaluate (JSCContext* context, const char* code, gssize length);
// ::JSCValue* jsc_context_evaluate (::JSCContext* context, const char* code, gssize length);
GI_INLINE_DECL JavaScriptCore::Value evaluate (const std::string & code, gssize length) noexcept;

// JSCValue* jsc_context_evaluate_in_object (JSCContext* context, const char* code, gssize length, gpointer object_instance, JSCClass* object_class, const char* uri, guint line_number, JSCValue** object);
// ::JSCValue* jsc_context_evaluate_in_object (::JSCContext* context, const char* code, gssize length, void* object_instance, ::JSCClass* object_class, const char* uri, guint line_number, ::JSCValue** object);
GI_INLINE_DECL JavaScriptCore::Value evaluate_in_object (const std::string & code, gssize length, void* object_instance, JavaScriptCore::Class object_class, const std::string & uri, guint line_number, JavaScriptCore::Value & object) noexcept;
GI_INLINE_DECL JavaScriptCore::Value evaluate_in_object (const std::string & code, gssize length, void* object_instance, const std::string & uri, guint line_number, JavaScriptCore::Value & object) noexcept;
GI_INLINE_DECL std::tuple<JavaScriptCore::Value, JavaScriptCore::Value> evaluate_in_object (const std::string & code, gssize length, void* object_instance, JavaScriptCore::Class object_class, const std::string & uri, guint line_number) noexcept;
GI_INLINE_DECL std::tuple<JavaScriptCore::Value, JavaScriptCore::Value> evaluate_in_object (const std::string & code, gssize length, void* object_instance, const std::string & uri, guint line_number) noexcept;

// JSCValue* jsc_context_evaluate_with_source_uri (JSCContext* context, const char* code, gssize length, const char* uri, guint line_number);
// ::JSCValue* jsc_context_evaluate_with_source_uri (::JSCContext* context, const char* code, gssize length, const char* uri, guint line_number);
GI_INLINE_DECL JavaScriptCore::Value evaluate_with_source_uri (const std::string & code, gssize length, const std::string & uri, guint line_number) noexcept;

// JSCException* jsc_context_get_exception (JSCContext* context);
// ::JSCException* jsc_context_get_exception (::JSCContext* context);
GI_INLINE_DECL JavaScriptCore::Exception get_exception () noexcept;

// JSCValue* jsc_context_get_global_object (JSCContext* context);
// ::JSCValue* jsc_context_get_global_object (::JSCContext* context);
GI_INLINE_DECL JavaScriptCore::Value get_global_object () noexcept;

// JSCValue* jsc_context_get_value (JSCContext* context, const char* name);
// ::JSCValue* jsc_context_get_value (::JSCContext* context, const char* name);
GI_INLINE_DECL JavaScriptCore::Value get_value (const std::string & name) noexcept;

// JSCVirtualMachine* jsc_context_get_virtual_machine (JSCContext* context);
// ::JSCVirtualMachine* jsc_context_get_virtual_machine (::JSCContext* context);
GI_INLINE_DECL JavaScriptCore::VirtualMachine get_virtual_machine () noexcept;

// void jsc_context_pop_exception_handler (JSCContext* context);
// void jsc_context_pop_exception_handler (::JSCContext* context);
GI_INLINE_DECL void pop_exception_handler () noexcept;

// void jsc_context_push_exception_handler (JSCContext* context, JSCExceptionHandler handler, gpointer user_data, GDestroyNotify destroy_notify);
// void jsc_context_push_exception_handler (::JSCContext* context, JavaScriptCore::ExceptionHandler::cfunction_type handler, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
GI_INLINE_DECL void push_exception_handler (JavaScriptCore::ExceptionHandler handler) noexcept;

// JSCClass* jsc_context_register_class (JSCContext* context, const char* name, JSCClass* parent_class, JSCClassVTable* vtable, GDestroyNotify destroy_notify);
// ::JSCClass* jsc_context_register_class (::JSCContext* context, const char* name, ::JSCClass* parent_class, ::JSCClassVTable* vtable, GLib::DestroyNotify::cfunction_type destroy_notify);
// SKIP; callback misses closure info

// void jsc_context_set_value (JSCContext* context, const char* name, JSCValue* value);
// void jsc_context_set_value (::JSCContext* context, const char* name, ::JSCValue* value);
GI_INLINE_DECL void set_value (const std::string & name, JavaScriptCore::Value value) noexcept;

// void jsc_context_throw (JSCContext* context, const char* error_message);
// void jsc_context_throw (::JSCContext* context, const char* error_message);
GI_INLINE_DECL void throw_ (const std::string & error_message) noexcept;

// void jsc_context_throw_exception (JSCContext* context, JSCException* exception);
// void jsc_context_throw_exception (::JSCContext* context, ::JSCException* exception);
GI_INLINE_DECL void throw_exception (JavaScriptCore::Exception exception) noexcept;

// void jsc_context_throw_printf (JSCContext* context, const char* format);
// void jsc_context_throw_printf (::JSCContext* context, const char* format);
// IGNORE; not introspectable, varargs not supported

// void jsc_context_throw_with_name (JSCContext* context, const char* error_name, const char* error_message);
// void jsc_context_throw_with_name (::JSCContext* context, const char* error_name, const char* error_message);
GI_INLINE_DECL void throw_with_name (const std::string & error_name, const std::string & error_message) noexcept;

// void jsc_context_throw_with_name_printf (JSCContext* context, const char* error_name, const char* format);
// void jsc_context_throw_with_name_printf (::JSCContext* context, const char* error_name, const char* format);
// IGNORE; not introspectable, varargs not supported

gi::property_proxy<JavaScriptCore::VirtualMachine, base::ContextBase> property_virtual_machine()
{ return gi::property_proxy<JavaScriptCore::VirtualMachine, base::ContextBase> (*this, "virtual-machine"); }
const gi::property_proxy<JavaScriptCore::VirtualMachine, base::ContextBase> property_virtual_machine() const
{ return gi::property_proxy<JavaScriptCore::VirtualMachine, base::ContextBase> (*this, "virtual-machine"); }

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/context_extra_def.hpp>)
#include <javascriptcore/context_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/context_extra.hpp>)
#include <javascriptcore/context_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class Context : public GI_JAVASCRIPTCORE_CONTEXT_BASE
{ typedef GI_JAVASCRIPTCORE_CONTEXT_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCContext>
{ typedef JavaScriptCore::Context type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {


class ContextClassDef
{
typedef ContextClassDef self;
public:
typedef JavaScriptCore::Context instance_type;
typedef ::JSCContextClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ContextClass: public detail::ClassTemplate<JavaScriptCore::impl::internal::ContextClassDef, GObject::impl::internal::ObjectClass>
{
typedef ContextClass self;
typedef detail::ClassTemplate<JavaScriptCore::impl::internal::ContextClassDef, GObject::impl::internal::ObjectClass> super;

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

using ContextImpl = detail::ObjectImpl<Context, internal::ContextClass>;

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
