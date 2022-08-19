// AUTO-GENERATED

#ifndef _GI_WEBKIT2_COOKIEMANAGER_IMPL_HPP_
#define _GI_WEBKIT2_COOKIEMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_cookie_manager_add_cookie (WebKitCookieManager* cookie_manager, SoupCookie* cookie, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_add_cookie (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::CookieManagerBase::add_cookie (Soup::Cookie cookie, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_add_cookie;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::CookieManagerBase::add_cookie (Soup::Cookie cookie, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_add_cookie;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_cookie_manager_add_cookie_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// gboolean webkit_cookie_manager_add_cookie_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
bool base::CookieManagerBase::add_cookie_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_add_cookie_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CookieManagerBase::add_cookie_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_add_cookie_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_cookie_manager_delete_all_cookies (WebKitCookieManager* cookie_manager);
// void webkit_cookie_manager_delete_all_cookies (::WebKitCookieManager* cookie_manager);
// IGNORE; deprecated

// void webkit_cookie_manager_delete_cookie (WebKitCookieManager* cookie_manager, SoupCookie* cookie, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_delete_cookie (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::CookieManagerBase::delete_cookie (Soup::Cookie cookie, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_delete_cookie;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::CookieManagerBase::delete_cookie (Soup::Cookie cookie, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_delete_cookie;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean webkit_cookie_manager_delete_cookie_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// gboolean webkit_cookie_manager_delete_cookie_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
bool base::CookieManagerBase::delete_cookie_finish (Gio::AsyncResult result)
{
  typedef gboolean (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_delete_cookie_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::CookieManagerBase::delete_cookie_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_delete_cookie_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// void webkit_cookie_manager_delete_cookies_for_domain (WebKitCookieManager* cookie_manager, const gchar* domain);
// void webkit_cookie_manager_delete_cookies_for_domain (::WebKitCookieManager* cookie_manager, const char* domain);
// IGNORE; deprecated

// void webkit_cookie_manager_get_accept_policy (WebKitCookieManager* cookie_manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_accept_policy (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::CookieManagerBase::get_accept_policy (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_accept_policy;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::CookieManagerBase::get_accept_policy (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_accept_policy;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// WebKitCookieAcceptPolicy webkit_cookie_manager_get_accept_policy_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// ::WebKitCookieAcceptPolicy webkit_cookie_manager_get_accept_policy_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
WebKit2::CookieAcceptPolicy base::CookieManagerBase::get_accept_policy_finish (Gio::AsyncResult result)
{
  typedef ::WebKitCookieAcceptPolicy (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_accept_policy_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret);
}
WebKit2::CookieAcceptPolicy base::CookieManagerBase::get_accept_policy_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::WebKitCookieAcceptPolicy (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_accept_policy_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret);
}

// void webkit_cookie_manager_get_cookies (WebKitCookieManager* cookie_manager, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_cookies (::WebKitCookieManager* cookie_manager, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::CookieManagerBase::get_cookies (const std::string & uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_cookies;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::CookieManagerBase::get_cookies (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_cookies;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (const char*) (uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GList* webkit_cookie_manager_get_cookies_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_cookie_manager_get_cookies_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
std::vector<Soup::Cookie> base::CookieManagerBase::get_cookies_finish (Gio::AsyncResult result)
{
  typedef ::GList* (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_cookies_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}
std::vector<Soup::Cookie> base::CookieManagerBase::get_cookies_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GList* (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_get_cookies_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// void webkit_cookie_manager_get_domains_with_cookies (WebKitCookieManager* cookie_manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_domains_with_cookies (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gchar** webkit_cookie_manager_get_domains_with_cookies_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// char** webkit_cookie_manager_get_domains_with_cookies_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void webkit_cookie_manager_set_accept_policy (WebKitCookieManager* cookie_manager, WebKitCookieAcceptPolicy policy);
// void webkit_cookie_manager_set_accept_policy (::WebKitCookieManager* cookie_manager, ::WebKitCookieAcceptPolicy policy);
void base::CookieManagerBase::set_accept_policy (WebKit2::CookieAcceptPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, ::WebKitCookieAcceptPolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_set_accept_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (::WebKitCookieAcceptPolicy) (policy_to_c));
}

// void webkit_cookie_manager_set_persistent_storage (WebKitCookieManager* cookie_manager, const gchar* filename, WebKitCookiePersistentStorage storage);
// void webkit_cookie_manager_set_persistent_storage (::WebKitCookieManager* cookie_manager, const char* filename, ::WebKitCookiePersistentStorage storage);
void base::CookieManagerBase::set_persistent_storage (const std::string & filename, WebKit2::CookiePersistentStorage storage) noexcept
{
  typedef void (*call_wrap_t) (::WebKitCookieManager* cookie_manager, const char* filename, ::WebKitCookiePersistentStorage storage);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_cookie_manager_set_persistent_storage;
  auto storage_to_c = gi::unwrap (storage);
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitCookieManager*) (gobj_()), (const char*) (filename_to_c), (::WebKitCookiePersistentStorage) (storage_to_c));
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/cookiemanager_extra_def_impl.hpp>)
#include <webkit2/cookiemanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/cookiemanager_extra_impl.hpp>)
#include <webkit2/cookiemanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void CookieManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitCookieManagerClass *methods = (::WebKitCookieManagerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
