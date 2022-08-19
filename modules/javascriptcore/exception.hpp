// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_EXCEPTION_HPP_
#define _GI_JAVASCRIPTCORE_EXCEPTION_HPP_


namespace gi {

namespace repository {

namespace JavaScriptCore {

class Context;

class Exception;

namespace base {


#define GI_JAVASCRIPTCORE_EXCEPTION_BASE base::ExceptionBase
class ExceptionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::JSCException BaseObjectType;

ExceptionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return jsc_exception_get_type(); } 

// JSCException* jsc_exception_new (JSCContext* context, const char* message);
// ::JSCException* jsc_exception_new (::JSCContext* context, const char* message);
static GI_INLINE_DECL JavaScriptCore::Exception new_ (JavaScriptCore::Context context, const std::string & message) noexcept;

// JSCException* jsc_exception_new_printf (JSCContext* context, const char* format);
// ::JSCException* jsc_exception_new_printf (::JSCContext* context, const char* format);
// IGNORE; not introspectable, varargs not supported

// JSCException* jsc_exception_new_vprintf (JSCContext* context, const char* format, va_list args);
// ::JSCException* jsc_exception_new_vprintf (::JSCContext* context, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// JSCException* jsc_exception_new_with_name (JSCContext* context, const char* name, const char* message);
// ::JSCException* jsc_exception_new_with_name (::JSCContext* context, const char* name, const char* message);
static GI_INLINE_DECL JavaScriptCore::Exception new_with_name (JavaScriptCore::Context context, const std::string & name, const std::string & message) noexcept;

// JSCException* jsc_exception_new_with_name_printf (JSCContext* context, const char* name, const char* format);
// ::JSCException* jsc_exception_new_with_name_printf (::JSCContext* context, const char* name, const char* format);
// IGNORE; not introspectable, varargs not supported

// JSCException* jsc_exception_new_with_name_vprintf (JSCContext* context, const char* name, const char* format, va_list args);
// ::JSCException* jsc_exception_new_with_name_vprintf (::JSCContext* context, const char* name, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// const char* jsc_exception_get_backtrace_string (JSCException* exception);
// const char* jsc_exception_get_backtrace_string (::JSCException* exception);
GI_INLINE_DECL std::string get_backtrace_string () noexcept;

// guint jsc_exception_get_column_number (JSCException* exception);
// guint jsc_exception_get_column_number (::JSCException* exception);
GI_INLINE_DECL guint get_column_number () noexcept;

// guint jsc_exception_get_line_number (JSCException* exception);
// guint jsc_exception_get_line_number (::JSCException* exception);
GI_INLINE_DECL guint get_line_number () noexcept;

// const char* jsc_exception_get_message (JSCException* exception);
// const char* jsc_exception_get_message (::JSCException* exception);
GI_INLINE_DECL std::string get_message () noexcept;

// const char* jsc_exception_get_name (JSCException* exception);
// const char* jsc_exception_get_name (::JSCException* exception);
GI_INLINE_DECL std::string get_name () noexcept;

// const char* jsc_exception_get_source_uri (JSCException* exception);
// const char* jsc_exception_get_source_uri (::JSCException* exception);
GI_INLINE_DECL std::string get_source_uri () noexcept;

// char* jsc_exception_report (JSCException* exception);
// char* jsc_exception_report (::JSCException* exception);
GI_INLINE_DECL std::string report () noexcept;

// char* jsc_exception_to_string (JSCException* exception);
// char* jsc_exception_to_string (::JSCException* exception);
GI_INLINE_DECL std::string to_string () noexcept;

}; // class

} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/exception_extra_def.hpp>)
#include <javascriptcore/exception_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/exception_extra.hpp>)
#include <javascriptcore/exception_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

class Exception : public GI_JAVASCRIPTCORE_EXCEPTION_BASE
{ typedef GI_JAVASCRIPTCORE_EXCEPTION_BASE super_type; using super_type::super_type; };

} // namespace JavaScriptCore

template<> struct declare_cpptype_of<::JSCException>
{ typedef JavaScriptCore::Exception type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {


class ExceptionClassDef
{
typedef ExceptionClassDef self;
public:
typedef JavaScriptCore::Exception instance_type;
typedef ::JSCExceptionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class ExceptionClass: public detail::ClassTemplate<JavaScriptCore::impl::internal::ExceptionClassDef, GObject::impl::internal::ObjectClass>
{
typedef ExceptionClass self;
typedef detail::ClassTemplate<JavaScriptCore::impl::internal::ExceptionClassDef, GObject::impl::internal::ObjectClass> super;

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

using ExceptionImpl = detail::ObjectImpl<Exception, internal::ExceptionClass>;

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
