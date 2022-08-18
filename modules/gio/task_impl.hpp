// AUTO-GENERATED

#ifndef _GI_GIO_TASK_IMPL_HPP_
#define _GI_GIO_TASK_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

Gio::AsyncResult TaskBase::interface_ (gi::interface_tag<Gio::AsyncResult>)
{ return gi::wrap ((Gio::AsyncResult::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

TaskBase::operator Gio::AsyncResult ()
{ return interface_ (gi::interface_tag<Gio::AsyncResult>()); }

// GTask* g_task_new (gpointer source_object, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer callback_data);
// ::GTask* g_task_new (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
Gio::Task base::TaskBase::new_ (GObject::Object source_object, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef ::GTask* (*call_wrap_t) (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GObject*) (source_object_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::Task base::TaskBase::new_ (Gio::AsyncReadyCallback callback) noexcept
{
  typedef ::GTask* (*call_wrap_t) (::GObject* source_object, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_new;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto source_object_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::GObject*) (source_object_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean g_task_is_valid (gpointer result, gpointer source_object);
// gboolean g_task_is_valid (::GAsyncResult* result, ::GObject* source_object);
bool base::TaskBase::is_valid (Gio::AsyncResult result, GObject::Object source_object) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_is_valid;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}
bool base::TaskBase::is_valid (Gio::AsyncResult result) noexcept
{
  typedef gboolean (*call_wrap_t) (::GAsyncResult* result, ::GObject* source_object);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_is_valid;
  auto source_object_to_c = nullptr;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GAsyncResult*) (result_to_c), (::GObject*) (source_object_to_c));
  return _temp_ret;
}

// void g_task_report_error (gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GError* error);
// void g_task_report_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
void base::TaskBase::report_error (GObject::Object source_object, Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_report_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_full, gi::direction_in);
  auto source_tag_to_c = source_tag;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto source_object_to_c = gi::unwrap (source_object, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GObject*) (source_object_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (void*) (source_tag_to_c), (::GError*) (error_to_c));
}
void base::TaskBase::report_error (Gio::AsyncReadyCallback callback, void* source_tag, GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_report_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_full, gi::direction_in);
  auto source_tag_to_c = source_tag;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto source_object_to_c = nullptr;
  call_wrap_v ((::GObject*) (source_object_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_), (void*) (source_tag_to_c), (::GError*) (error_to_c));
}

// void g_task_report_new_error (gpointer source_object, GAsyncReadyCallback callback, gpointer callback_data, gpointer source_tag, GQuark domain, gint code, const char* format);
// void g_task_report_new_error (::GObject* source_object, Gio::AsyncReadyCallback::cfunction_type callback, void* callback_data, void* source_tag, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_task_attach_source (GTask* task, GSource* source, GSourceFunc callback);
// void g_task_attach_source (::GTask* task, ::GSource* source, GLib::SourceFunc::cfunction_type callback);
// IGNORE; not introspectable, callback misses closure info

// GCancellable* g_task_get_cancellable (GTask* task);
// ::GCancellable* g_task_get_cancellable (::GTask* task);
Gio::Cancellable base::TaskBase::get_cancellable () noexcept
{
  typedef ::GCancellable* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_cancellable;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean g_task_get_check_cancellable (GTask* task);
// gboolean g_task_get_check_cancellable (::GTask* task);
bool base::TaskBase::get_check_cancellable () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_check_cancellable;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_get_completed (GTask* task);
// gboolean g_task_get_completed (::GTask* task);
bool base::TaskBase::get_completed () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_completed;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// GMainContext* g_task_get_context (GTask* task);
// ::GMainContext* g_task_get_context (::GTask* task);
GLib::MainContext base::TaskBase::get_context () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_context;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* g_task_get_name (GTask* task);
// const char* g_task_get_name (::GTask* task);
std::string base::TaskBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_name;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gint g_task_get_priority (GTask* task);
// gint g_task_get_priority (::GTask* task);
gint base::TaskBase::get_priority () noexcept
{
  typedef gint (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_priority;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_get_return_on_cancel (GTask* task);
// gboolean g_task_get_return_on_cancel (::GTask* task);
bool base::TaskBase::get_return_on_cancel () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_return_on_cancel;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gpointer g_task_get_source_object (GTask* task);
// ::GObject* g_task_get_source_object (::GTask* task);
GObject::Object base::TaskBase::get_source_object () noexcept
{
  typedef ::GObject* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_source_object;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gpointer g_task_get_source_tag (GTask* task);
// void* g_task_get_source_tag (::GTask* task);
gpointer base::TaskBase::get_source_tag () noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_source_tag;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gpointer g_task_get_task_data (GTask* task);
// void* g_task_get_task_data (::GTask* task);
gpointer base::TaskBase::get_task_data () noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_get_task_data;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_had_error (GTask* task);
// gboolean g_task_had_error (::GTask* task);
bool base::TaskBase::had_error () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_had_error;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// gboolean g_task_propagate_boolean (GTask* task, GError ** error);
// gboolean g_task_propagate_boolean (::GTask* task, GError ** error);
bool base::TaskBase::propagate_boolean ()
{
  typedef gboolean (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_boolean;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TaskBase::propagate_boolean (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_boolean;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gssize g_task_propagate_int (GTask* task, GError ** error);
// gssize g_task_propagate_int (::GTask* task, GError ** error);
gssize base::TaskBase::propagate_int ()
{
  typedef gssize (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_int;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gssize base::TaskBase::propagate_int (GLib::Error * _error) noexcept
{
  typedef gssize (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_int;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gpointer g_task_propagate_pointer (GTask* task, GError ** error);
// void* g_task_propagate_pointer (::GTask* task, GError ** error);
gpointer base::TaskBase::propagate_pointer ()
{
  typedef void* (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_pointer;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), &error);
  gi::check_error (error);
  return _temp_ret;
}
gpointer base::TaskBase::propagate_pointer (GLib::Error * _error) noexcept
{
  typedef void* (*call_wrap_t) (::GTask* task, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_pointer;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// gboolean g_task_propagate_value (GTask* task, GValue* value, GError ** error);
// gboolean g_task_propagate_value (::GTask* task, ::GValue* value, GError ** error);
bool base::TaskBase::propagate_value (GObject::Value & value)
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_value;
  traits::unset_wrapper<GValue>::type value_c;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) &value_c), &error);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  gi::check_error (error);
  return _temp_ret;
}
bool base::TaskBase::propagate_value (GObject::Value & value, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_value;
  traits::unset_wrapper<GValue>::type value_c;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  value = gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}
std::tuple<bool, GObject::Value> base::TaskBase::propagate_value ()
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_value;
  traits::unset_wrapper<GValue>::type value_c;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) &value_c), &error);
  gi::check_error (error);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}
std::tuple<bool, GObject::Value> base::TaskBase::propagate_value (GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, ::GValue* value, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_propagate_value;
  traits::unset_wrapper<GValue>::type value_c;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (::GValue*) ((GValue*) &value_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return std::make_tuple (_temp_ret, gi::wrap ((GValue*) &value_c, gi::transfer_none, gi::direction_out));
}

// void g_task_return_boolean (GTask* task, gboolean result);
// void g_task_return_boolean (::GTask* task, gboolean result);
void base::TaskBase::return_boolean (gboolean result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gboolean result);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_boolean;
  auto result_to_c = result;
  call_wrap_v ((::GTask*) (gobj_()), (gboolean) (result_to_c));
}

// void g_task_return_error (GTask* task, GError* error);
// void g_task_return_error (::GTask* task, ::GError* error);
void base::TaskBase::return_error (GLib::Error error) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_error;
  auto error_to_c = gi::unwrap (error, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::GTask*) (gobj_()), (::GError*) (error_to_c));
}

// gboolean g_task_return_error_if_cancelled (GTask* task);
// gboolean g_task_return_error_if_cancelled (::GTask* task);
bool base::TaskBase::return_error_if_cancelled () noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_error_if_cancelled;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()));
  return _temp_ret;
}

// void g_task_return_int (GTask* task, gssize result);
// void g_task_return_int (::GTask* task, gssize result);
void base::TaskBase::return_int (gssize result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gssize result);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_int;
  auto result_to_c = result;
  call_wrap_v ((::GTask*) (gobj_()), (gssize) (result_to_c));
}

// void g_task_return_new_error (GTask* task, GQuark domain, gint code, const char* format);
// void g_task_return_new_error (::GTask* task, ::GQuark domain, gint code, const char* format);
// IGNORE; not introspectable, varargs not supported

// void g_task_return_pointer (GTask* task, gpointer result, GDestroyNotify result_destroy);
// void g_task_return_pointer (::GTask* task, void* result, GLib::DestroyNotify::cfunction_type result_destroy);
// SKIP; callback misses closure info

// void g_task_return_value (GTask* task, GValue* result);
// void g_task_return_value (::GTask* task, ::GValue* result);
void base::TaskBase::return_value (GObject::Value result) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GValue* result);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_value;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (result_to_c));
}
void base::TaskBase::return_value () noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, ::GValue* result);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_return_value;
  auto result_to_c = nullptr;
  call_wrap_v ((::GTask*) (gobj_()), (::GValue*) (result_to_c));
}

// void g_task_run_in_thread (GTask* task, GTaskThreadFunc task_func);
// void g_task_run_in_thread (::GTask* task,  task_func);
// SKIP; task_func type  not supported

// void g_task_run_in_thread_sync (GTask* task, GTaskThreadFunc task_func);
// void g_task_run_in_thread_sync (::GTask* task,  task_func);
// SKIP; task_func type  not supported

// void g_task_set_check_cancellable (GTask* task, gboolean check_cancellable);
// void g_task_set_check_cancellable (::GTask* task, gboolean check_cancellable);
void base::TaskBase::set_check_cancellable (gboolean check_cancellable) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gboolean check_cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_check_cancellable;
  auto check_cancellable_to_c = check_cancellable;
  call_wrap_v ((::GTask*) (gobj_()), (gboolean) (check_cancellable_to_c));
}

// void g_task_set_name (GTask* task, const gchar* name);
// void g_task_set_name (::GTask* task, const char* name);
void base::TaskBase::set_name (const std::string & name) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_name;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}
void base::TaskBase::set_name () noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_name;
  auto name_to_c = nullptr;
  call_wrap_v ((::GTask*) (gobj_()), (const char*) (name_to_c));
}

// void g_task_set_priority (GTask* task, gint priority);
// void g_task_set_priority (::GTask* task, gint priority);
void base::TaskBase::set_priority (gint priority) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, gint priority);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_priority;
  auto priority_to_c = priority;
  call_wrap_v ((::GTask*) (gobj_()), (gint) (priority_to_c));
}

// gboolean g_task_set_return_on_cancel (GTask* task, gboolean return_on_cancel);
// gboolean g_task_set_return_on_cancel (::GTask* task, gboolean return_on_cancel);
bool base::TaskBase::set_return_on_cancel (gboolean return_on_cancel) noexcept
{
  typedef gboolean (*call_wrap_t) (::GTask* task, gboolean return_on_cancel);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_return_on_cancel;
  auto return_on_cancel_to_c = return_on_cancel;
  auto _temp_ret = call_wrap_v ((::GTask*) (gobj_()), (gboolean) (return_on_cancel_to_c));
  return _temp_ret;
}

// void g_task_set_source_tag (GTask* task, gpointer source_tag);
// void g_task_set_source_tag (::GTask* task, void* source_tag);
void base::TaskBase::set_source_tag (void* source_tag) noexcept
{
  typedef void (*call_wrap_t) (::GTask* task, void* source_tag);
  call_wrap_t call_wrap_v = (call_wrap_t) g_task_set_source_tag;
  auto source_tag_to_c = source_tag;
  call_wrap_v ((::GTask*) (gobj_()), (void*) (source_tag_to_c));
}

// void g_task_set_task_data (GTask* task, gpointer task_data, GDestroyNotify task_data_destroy);
// void g_task_set_task_data (::GTask* task, void* task_data, GLib::DestroyNotify::cfunction_type task_data_destroy);
// SKIP; callback misses closure info


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/task_extra_def_impl.hpp>)
#include <gio/task_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/task_extra_impl.hpp>)
#include <gio/task_extra_impl.hpp>
#endif
#endif

#endif
