// AUTO-GENERATED

#ifndef _GI_GIO_SIMPLEASYNCRESULT_HPP_
#define _GI_GIO_SIMPLEASYNCRESULT_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class SimpleAsyncResult;

namespace base {


#define GI_GIO_SIMPLEASYNCRESULT_BASE base::SimpleAsyncResultBase
class SimpleAsyncResultBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GSimpleAsyncResult BaseObjectType;

SimpleAsyncResultBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_simple_async_result_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GSimpleAsyncResult* g_simple_async_result_new (GObject* source_object, GAsyncReadyCallback callback, gpointer user_data, gpointer source_tag);
// ::GSimpleAsyncResult* g_simple_async_result_new (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, void* source_tag);
// IGNORE; deprecated

// GSimpleAsyncResult* g_simple_async_result_new_error (GObject* source_object, GAsyncReadyCallback callback, gpointer user_data, GQuark domain, gint code, const char* format);
// ::GSimpleAsyncResult* g_simple_async_result_new_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, ::GQuark domain, gint code, const char* format);
// IGNORE; deprecated, varargs not supported

// GSimpleAsyncResult* g_simple_async_result_new_from_error (GObject* source_object, GAsyncReadyCallback callback, gpointer user_data, const GError* error);
// ::GSimpleAsyncResult* g_simple_async_result_new_from_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, const ::GError* error);
// IGNORE; deprecated

// GSimpleAsyncResult* g_simple_async_result_new_take_error (GObject* source_object, GAsyncReadyCallback callback, gpointer user_data, GError* error);
// ::GSimpleAsyncResult* g_simple_async_result_new_take_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data, ::GError* error);
// IGNORE; deprecated

// gboolean g_simple_async_result_is_valid (GAsyncResult* result, GObject* source, gpointer source_tag);
// gboolean g_simple_async_result_is_valid (::GAsyncResult* result, ::GObject* source, void* source_tag);
// IGNORE; deprecated

// void g_simple_async_result_complete (GSimpleAsyncResult* simple);
// void g_simple_async_result_complete (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// void g_simple_async_result_complete_in_idle (GSimpleAsyncResult* simple);
// void g_simple_async_result_complete_in_idle (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// gboolean g_simple_async_result_get_op_res_gboolean (GSimpleAsyncResult* simple);
// gboolean g_simple_async_result_get_op_res_gboolean (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// gpointer g_simple_async_result_get_op_res_gpointer (GSimpleAsyncResult* simple);
// void* g_simple_async_result_get_op_res_gpointer (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// gssize g_simple_async_result_get_op_res_gssize (GSimpleAsyncResult* simple);
// gssize g_simple_async_result_get_op_res_gssize (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// gpointer g_simple_async_result_get_source_tag (GSimpleAsyncResult* simple);
// void* g_simple_async_result_get_source_tag (::GSimpleAsyncResult* simple);
// IGNORE; deprecated

// gboolean g_simple_async_result_propagate_error (GSimpleAsyncResult* simple, GError ** error);
// gboolean g_simple_async_result_propagate_error (::GSimpleAsyncResult* simple, GError ** error);
// IGNORE; deprecated

// void g_simple_async_result_run_in_thread (GSimpleAsyncResult* simple, GSimpleAsyncThreadFunc func, int io_priority, GCancellable* cancellable);
// void g_simple_async_result_run_in_thread (::GSimpleAsyncResult* simple,  func, gint io_priority, ::GCancellable* cancellable);
// IGNORE; deprecated

// void g_simple_async_result_set_check_cancellable (GSimpleAsyncResult* simple, GCancellable* check_cancellable);
// void g_simple_async_result_set_check_cancellable (::GSimpleAsyncResult* simple, ::GCancellable* check_cancellable);
// IGNORE; deprecated

// void g_simple_async_result_set_error (GSimpleAsyncResult* simple, GQuark domain, gint code, const char* format);
// void g_simple_async_result_set_error (::GSimpleAsyncResult* simple, ::GQuark domain, gint code, const char* format);
// IGNORE; deprecated, varargs not supported

// void g_simple_async_result_set_error_va (GSimpleAsyncResult* simple, GQuark domain, gint code, const char* format, va_list args);
// void g_simple_async_result_set_error_va (::GSimpleAsyncResult* simple, ::GQuark domain, gint code, const char* format,  args);
// IGNORE; deprecated

// void g_simple_async_result_set_from_error (GSimpleAsyncResult* simple, const GError* error);
// void g_simple_async_result_set_from_error (::GSimpleAsyncResult* simple, const ::GError* error);
// IGNORE; deprecated

// void g_simple_async_result_set_handle_cancellation (GSimpleAsyncResult* simple, gboolean handle_cancellation);
// void g_simple_async_result_set_handle_cancellation (::GSimpleAsyncResult* simple, gboolean handle_cancellation);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gboolean (GSimpleAsyncResult* simple, gboolean op_res);
// void g_simple_async_result_set_op_res_gboolean (::GSimpleAsyncResult* simple, gboolean op_res);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gpointer (GSimpleAsyncResult* simple, gpointer op_res, GDestroyNotify destroy_op_res);
// void g_simple_async_result_set_op_res_gpointer (::GSimpleAsyncResult* simple, void* op_res, GLib::DestroyNotify::cfunction_type destroy_op_res);
// IGNORE; deprecated

// void g_simple_async_result_set_op_res_gssize (GSimpleAsyncResult* simple, gssize op_res);
// void g_simple_async_result_set_op_res_gssize (::GSimpleAsyncResult* simple, gssize op_res);
// IGNORE; deprecated

// void g_simple_async_result_take_error (GSimpleAsyncResult* simple, GError* error);
// void g_simple_async_result_take_error (::GSimpleAsyncResult* simple, ::GError* error);
// IGNORE; deprecated

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/simpleasyncresult_extra_def.hpp>)
#include <gio/simpleasyncresult_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/simpleasyncresult_extra.hpp>)
#include <gio/simpleasyncresult_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class SimpleAsyncResult : public GI_GIO_SIMPLEASYNCRESULT_BASE
{ typedef GI_GIO_SIMPLEASYNCRESULT_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GSimpleAsyncResult>
{ typedef Gio::SimpleAsyncResult type; }; 

} // namespace repository

} // namespace gi

#endif
