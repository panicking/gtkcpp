// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERCONTENTFILTERSTORE_IMPL_HPP_
#define _GI_WEBKIT2_USERCONTENTFILTERSTORE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitUserContentFilterStore* webkit_user_content_filter_store_new (const gchar* storage_path);
// ::WebKitUserContentFilterStore* webkit_user_content_filter_store_new (const char* storage_path);
WebKit2::UserContentFilterStore base::UserContentFilterStoreBase::new_ (const std::string & storage_path) noexcept
{
  typedef ::WebKitUserContentFilterStore* (*call_wrap_t) (const char* storage_path);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_new;
  auto storage_path_to_c = gi::unwrap (storage_path, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (storage_path_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_user_content_filter_store_fetch_identifiers (WebKitUserContentFilterStore* store, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_fetch_identifiers (::WebKitUserContentFilterStore* store, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::UserContentFilterStoreBase::fetch_identifiers (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_fetch_identifiers;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UserContentFilterStoreBase::fetch_identifiers (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_fetch_identifiers;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gchar** webkit_user_content_filter_store_fetch_identifiers_finish (WebKitUserContentFilterStore* store, GAsyncResult* result);
// char** webkit_user_content_filter_store_fetch_identifiers_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result);
std::vector<std::string> base::UserContentFilterStoreBase::fetch_identifiers_finish (Gio::AsyncResult result) noexcept
{
  typedef char** (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_fetch_identifiers_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// const gchar* webkit_user_content_filter_store_get_path (WebKitUserContentFilterStore* store);
// const char* webkit_user_content_filter_store_get_path (::WebKitUserContentFilterStore* store);
std::string base::UserContentFilterStoreBase::get_path () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitUserContentFilterStore* store);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_get_path;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_user_content_filter_store_load (WebKitUserContentFilterStore* store, const gchar* identifier, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_load (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::UserContentFilterStoreBase::load (const std::string & identifier, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_load;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UserContentFilterStoreBase::load (const std::string & identifier, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_load;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitUserContentFilter* webkit_user_content_filter_store_load_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_load_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
WebKit2::UserContentFilter base::UserContentFilterStoreBase::load_finish (Gio::AsyncResult result)
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_load_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::UserContentFilter base::UserContentFilterStoreBase::load_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_load_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_user_content_filter_store_remove (WebKitUserContentFilterStore* store, const gchar* identifier, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_remove (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::UserContentFilterStoreBase::remove (const std::string & identifier, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_remove;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UserContentFilterStoreBase::remove (const std::string & identifier, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_remove;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_user_content_filter_store_remove_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// gboolean webkit_user_content_filter_store_remove_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
bool base::UserContentFilterStoreBase::remove_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_remove_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::UserContentFilterStoreBase::remove_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_remove_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_user_content_filter_store_save (WebKitUserContentFilterStore* store, const gchar* identifier, GBytes* source, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_save (::WebKitUserContentFilterStore* store, const char* identifier, ::GBytes* source, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::UserContentFilterStoreBase::save (const std::string & identifier, GLib::Bytes source, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GBytes* source, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GBytes*) (source_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UserContentFilterStoreBase::save (const std::string & identifier, GLib::Bytes source, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GBytes* source, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto source_to_c = gi::unwrap (source, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GBytes*) (source_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitUserContentFilter* webkit_user_content_filter_store_save_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_save_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
WebKit2::UserContentFilter base::UserContentFilterStoreBase::save_finish (Gio::AsyncResult result)
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::UserContentFilter base::UserContentFilterStoreBase::save_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void webkit_user_content_filter_store_save_from_file (WebKitUserContentFilterStore* store, const gchar* identifier, GFile* file, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_user_content_filter_store_save_from_file (::WebKitUserContentFilterStore* store, const char* identifier, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::UserContentFilterStoreBase::save_from_file (const std::string & identifier, Gio::File file, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_from_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GFile*) (file_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::UserContentFilterStoreBase::save_from_file (const std::string & identifier, Gio::File file, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserContentFilterStore* store, const char* identifier, ::GFile* file, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_from_file;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto file_to_c = gi::unwrap (file, gi::transfer_none, gi::direction_in);
  auto identifier_to_c = gi::unwrap (identifier, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (const char*) (identifier_to_c), (::GFile*) (file_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitUserContentFilter* webkit_user_content_filter_store_save_from_file_finish (WebKitUserContentFilterStore* store, GAsyncResult* result, GError ** error);
// ::WebKitUserContentFilter* webkit_user_content_filter_store_save_from_file_finish (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
WebKit2::UserContentFilter base::UserContentFilterStoreBase::save_from_file_finish (Gio::AsyncResult result)
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_from_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
WebKit2::UserContentFilter base::UserContentFilterStoreBase::save_from_file_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitUserContentFilter* (*call_wrap_t) (::WebKitUserContentFilterStore* store, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_content_filter_store_save_from_file_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitUserContentFilterStore*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilterstore_extra_def_impl.hpp>)
#include <webkit2/usercontentfilterstore_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usercontentfilterstore_extra_impl.hpp>)
#include <webkit2/usercontentfilterstore_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void UserContentFilterStoreClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitUserContentFilterStoreClass *methods = (::WebKitUserContentFilterStoreClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
