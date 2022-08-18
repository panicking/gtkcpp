// AUTO-GENERATED

#ifndef _GI_GIO_TASK_HPP_
#define _GI_GIO_TASK_HPP_


namespace gi {

namespace repository {

namespace Gio {

class AsyncResult;
class Cancellable;

class Task;

namespace base {


#define GI_GIO_TASK_BASE base::TaskBase
class TaskBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GTask BaseObjectType;

TaskBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_task_get_type(); } 

GI_INLINE_DECL Gio::AsyncResult interface_ (gi::interface_tag<Gio::AsyncResult>);

GI_INLINE_DECL operator Gio::AsyncResult ();

// GTask* g_task_new (gpointer source_object, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer callback_data);
// ::GTask* g_task_new (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
static GI_INLINE_DECL Gio::Task new_ (GObject::Object source_object, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
static GI_INLINE_DECL Gio::Task new_ (Gio::AsyncReadyCallback callback) noexcept;

// gboolean g_task_is_valid (gpointer result, gpointer source_object);
// gboolean g_task_is_valid (::GAsyncResult* result, ::GObject* source_object);
static GI_INLINE_DECL bool is_valid (Gio::AsyncResult result, GObject::Object source_object) noexcept;
static GI_INLINE_DECL bool is_valid (Gio::AsyncResult result) noexcept;

// void g_task_report_error (gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GError* error);
// void g_task_report_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
static GI_INLINE_DECL void report_error (GObject::Object source_object, Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept;
static GI_INLINE_DECL void report_error (Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept;

// void g_task_report_new_error (gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GQuark domain, gint code, const char* format);
// void g_task_report_new_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_task_attach_source (GTask* task, GSource* source, GSourceFunc callback);
// void g_task_attach_source (::GTask* task, ::GSource* source, GLib::SourceFunc::cfunction_type callback);
// IGNORE; not introspectable, callback misses closure info

// GCancellable* g_task_get_cancellable (GTask* task);
// ::GCancellable* g_task_get_cancellable (::GTask* task);
GI_INLINE_DECL Gio::Cancellable get_cancellable () noexcept;

// gboolean g_task_get_check_cancellable (GTask* task);
// gboolean g_task_get_check_cancellable (::GTask* task);
GI_INLINE_DECL bool get_check_cancellable () noexcept;

// gboolean g_task_get_completed (GTask* task);
// gboolean g_task_get_completed (::GTask* task);
GI_INLINE_DECL bool get_completed () noexcept;

// GMainContext* g_task_get_context (GTask* task);
// ::GMainContext* g_task_get_context (::GTask* task);
GI_INLINE_DECL GLib::MainContext get_context () noexcept;

// const gchar* g_task_get_name (GTask* task);
// const char* g_task_get_name (::GTask* task);
GI_INLINE_DECL std::string get_name () noexcept;

// gint g_task_get_priority (GTask* task);
// gint g_task_get_priority (::GTask* task);
GI_INLINE_DECL gint get_priority () noexcept;

// gboolean g_task_get_return_on_cancel (GTask* task);
// gboolean g_task_get_return_on_cancel (::GTask* task);
GI_INLINE_DECL bool get_return_on_cancel () noexcept;

// gpointer g_task_get_source_object (GTask* task);
// ::GObject* g_task_get_source_object (::GTask* task);
GI_INLINE_DECL GObject::Object get_source_object () noexcept;

// gpointer g_task_get_source_tag (GTask* task);
// void* g_task_get_source_tag (::GTask* task);
GI_INLINE_DECL gpointer get_source_tag () noexcept;

// gpointer g_task_get_task_data (GTask* task);
// void* g_task_get_task_data (::GTask* task);
GI_INLINE_DECL gpointer get_task_data () noexcept;

// gboolean g_task_had_error (GTask* task);
// gboolean g_task_had_error (::GTask* task);
GI_INLINE_DECL bool had_error () noexcept;

// gboolean g_task_propagate_boolean (GTask* task, GError ** error);
// gboolean g_task_propagate_boolean (::GTask* task, GError ** error);
GI_INLINE_DECL bool propagate_boolean ();
GI_INLINE_DECL bool propagate_boolean (GLib::Error * _error) noexcept;

// gssize g_task_propagate_int (GTask* task, GError ** error);
// gssize g_task_propagate_int (::GTask* task, GError ** error);
GI_INLINE_DECL gssize propagate_int ();
GI_INLINE_DECL gssize propagate_int (GLib::Error * _error) noexcept;

// gpointer g_task_propagate_pointer (GTask* task, GError ** error);
// void* g_task_propagate_pointer (::GTask* task, GError ** error);
GI_INLINE_DECL gpointer propagate_pointer ();
GI_INLINE_DECL gpointer propagate_pointer (GLib::Error * _error) noexcept;

// gboolean g_task_propagate_value (GTask* task, GValue* value, GError ** error);
// gboolean g_task_propagate_value (::GTask* task, ::GValue* value, GError ** error);
GI_INLINE_DECL bool propagate_value (GObject::Value & value);
GI_INLINE_DECL bool propagate_value (GObject::Value & value, GLib::Error * _error) noexcept;
GI_INLINE_DECL std::tuple<bool, GObject::Value> propagate_value ();
GI_INLINE_DECL std::tuple<bool, GObject::Value> propagate_value (GLib::Error * _error) noexcept;

// void g_task_return_boolean (GTask* task, gboolean result);
// void g_task_return_boolean (::GTask* task, gboolean result);
GI_INLINE_DECL void return_boolean (gboolean result) noexcept;

// void g_task_return_error (GTask* task, GError* error);
// void g_task_return_error (::GTask* task, ::GError* error);
GI_INLINE_DECL void return_error (GLib::Error error) noexcept;

// gboolean g_task_return_error_if_cancelled (GTask* task);
// gboolean g_task_return_error_if_cancelled (::GTask* task);
GI_INLINE_DECL bool return_error_if_cancelled () noexcept;

// void g_task_return_int (GTask* task, gssize result);
// void g_task_return_int (::GTask* task, gssize result);
GI_INLINE_DECL void return_int (gssize result) noexcept;

// void g_task_return_new_error (GTask* task, GQuark domain, gint code, const char* format);
// void g_task_return_new_error (::GTask* task, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_pointer (GTask* task, gpointer result, GDestroyNotify result_destroy);
// void g_task_return_pointer (::GTask* task, void* result, GLib::DestroyNotify::cfunction_type result_destroy);
// SKIP; callback misses closure info

// void g_task_return_value (GTask* task, GValue* result);
// void g_task_return_value (::GTask* task, ::GValue* result);
GI_INLINE_DECL void return_value (GObject::Value result) noexcept;
GI_INLINE_DECL void return_value () noexcept;

// void g_task_run_in_thread (GTask* task, GTaskThreadFunc task_func);
// void g_task_run_in_thread (::GTask* task,  task_func);
// SKIP; task_func type  not supported

// void g_task_run_in_thread_sync (GTask* task, GTaskThreadFunc task_func);
// void g_task_run_in_thread_sync (::GTask* task,  task_func);
// SKIP; task_func type  not supported

// void g_task_set_check_cancellable (GTask* task, gboolean check_cancellable);
// void g_task_set_check_cancellable (::GTask* task, gboolean check_cancellable);
GI_INLINE_DECL void set_check_cancellable (gboolean check_cancellable) noexcept;

// void g_task_set_name (GTask* task, const gchar* name);
// void g_task_set_name (::GTask* task, const char* name);
GI_INLINE_DECL void set_name (const std::string & name) noexcept;
GI_INLINE_DECL void set_name () noexcept;

// void g_task_set_priority (GTask* task, gint priority);
// void g_task_set_priority (::GTask* task, gint priority);
GI_INLINE_DECL void set_priority (gint priority) noexcept;

// gboolean g_task_set_return_on_cancel (GTask* task, gboolean return_on_cancel);
// gboolean g_task_set_return_on_cancel (::GTask* task, gboolean return_on_cancel);
GI_INLINE_DECL bool set_return_on_cancel (gboolean return_on_cancel) noexcept;

// void g_task_set_source_tag (GTask* task, gpointer source_tag);
// void g_task_set_source_tag (::GTask* task, void* source_tag);
GI_INLINE_DECL void set_source_tag (void* source_tag) noexcept;

// void g_task_set_task_data (GTask* task, gpointer task_data, GDestroyNotify task_data_destroy);
// void g_task_set_task_data (::GTask* task, void* task_data, GLib::DestroyNotify::cfunction_type task_data_destroy);
// SKIP; callback misses closure info

gi::property_proxy<bool, base::TaskBase> property_completed()
{ return gi::property_proxy<bool, base::TaskBase> (*this, "completed"); }
const gi::property_proxy<bool, base::TaskBase> property_completed() const
{ return gi::property_proxy<bool, base::TaskBase> (*this, "completed"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/task_extra_def.hpp>)
#include <gio/task_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/task_extra.hpp>)
#include <gio/task_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Task : public GI_GIO_TASK_BASE
{ typedef GI_GIO_TASK_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GTask>
{ typedef Gio::Task type; }; 

} // namespace repository

} // namespace gi

#endif
