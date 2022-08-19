// AUTO-GENERATED

#ifndef _GI_JAVASCRIPTCORE_EXCEPTION_IMPL_HPP_
#define _GI_JAVASCRIPTCORE_EXCEPTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace base {

// JSCException* jsc_exception_new (JSCContext* context, const char* message);
// ::JSCException* jsc_exception_new (::JSCContext* context, const char* message);
JavaScriptCore::Exception base::ExceptionBase::new_ (JavaScriptCore::Context context, const std::string & message) noexcept
{
  typedef ::JSCException* (*call_wrap_t) (::JSCContext* context, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_new;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char*) (message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCException* jsc_exception_new_printf (JSCContext* context, const char* format);
// ::JSCException* jsc_exception_new_printf (::JSCContext* context, const char* format);
// IGNORE; not introspectable, varargs not supported

// JSCException* jsc_exception_new_vprintf (JSCContext* context, const char* format, va_list args);
// ::JSCException* jsc_exception_new_vprintf (::JSCContext* context, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// JSCException* jsc_exception_new_with_name (JSCContext* context, const char* name, const char* message);
// ::JSCException* jsc_exception_new_with_name (::JSCContext* context, const char* name, const char* message);
JavaScriptCore::Exception base::ExceptionBase::new_with_name (JavaScriptCore::Context context, const std::string & name, const std::string & message) noexcept
{
  typedef ::JSCException* (*call_wrap_t) (::JSCContext* context, const char* name, const char* message);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_new_with_name;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto context_to_c = gi::unwrap (context, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::JSCContext*) (context_to_c), (const char*) (name_to_c), (const char*) (message_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// JSCException* jsc_exception_new_with_name_printf (JSCContext* context, const char* name, const char* format);
// ::JSCException* jsc_exception_new_with_name_printf (::JSCContext* context, const char* name, const char* format);
// IGNORE; not introspectable, varargs not supported

// JSCException* jsc_exception_new_with_name_vprintf (JSCContext* context, const char* name, const char* format, va_list args);
// ::JSCException* jsc_exception_new_with_name_vprintf (::JSCContext* context, const char* name, const char* format,  args);
// IGNORE; not introspectable, args type  not supported

// const char* jsc_exception_get_backtrace_string (JSCException* exception);
// const char* jsc_exception_get_backtrace_string (::JSCException* exception);
std::string base::ExceptionBase::get_backtrace_string () noexcept
{
  typedef const char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_backtrace_string;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint jsc_exception_get_column_number (JSCException* exception);
// guint jsc_exception_get_column_number (::JSCException* exception);
guint base::ExceptionBase::get_column_number () noexcept
{
  typedef guint (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_column_number;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return _temp_ret;
}

// guint jsc_exception_get_line_number (JSCException* exception);
// guint jsc_exception_get_line_number (::JSCException* exception);
guint base::ExceptionBase::get_line_number () noexcept
{
  typedef guint (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_line_number;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return _temp_ret;
}

// const char* jsc_exception_get_message (JSCException* exception);
// const char* jsc_exception_get_message (::JSCException* exception);
std::string base::ExceptionBase::get_message () noexcept
{
  typedef const char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_message;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* jsc_exception_get_name (JSCException* exception);
// const char* jsc_exception_get_name (::JSCException* exception);
std::string base::ExceptionBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_name;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* jsc_exception_get_source_uri (JSCException* exception);
// const char* jsc_exception_get_source_uri (::JSCException* exception);
std::string base::ExceptionBase::get_source_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_get_source_uri;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// char* jsc_exception_report (JSCException* exception);
// char* jsc_exception_report (::JSCException* exception);
std::string base::ExceptionBase::report () noexcept
{
  typedef char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_report;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* jsc_exception_to_string (JSCException* exception);
// char* jsc_exception_to_string (::JSCException* exception);
std::string base::ExceptionBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::JSCException* exception);
  call_wrap_t call_wrap_v = (call_wrap_t) jsc_exception_to_string;
  auto _temp_ret = call_wrap_v ((::JSCException*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<javascriptcore/exception_extra_def_impl.hpp>)
#include <javascriptcore/exception_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<javascriptcore/exception_extra_impl.hpp>)
#include <javascriptcore/exception_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace JavaScriptCore {

namespace impl {

namespace internal {

void ExceptionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::JSCExceptionClass *methods = (::JSCExceptionClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace JavaScriptCore

} // namespace repository

} // namespace gi

#endif
