// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FAVICONDATABASE_IMPL_HPP_
#define _GI_WEBKIT2_FAVICONDATABASE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_favicon_database_clear (WebKitFaviconDatabase* database);
// void webkit_favicon_database_clear (::WebKitFaviconDatabase* database);
void base::FaviconDatabaseBase::clear () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFaviconDatabase* database);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_clear;
  call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()));
}

// void webkit_favicon_database_get_favicon (WebKitFaviconDatabase* database, const gchar* page_uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_favicon_database_get_favicon (::WebKitFaviconDatabase* database, const char* page_uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::FaviconDatabaseBase::get_favicon (const std::string & page_uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitFaviconDatabase* database, const char* page_uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_get_favicon;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto page_uri_to_c = gi::unwrap (page_uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()), (const char*) (page_uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::FaviconDatabaseBase::get_favicon (const std::string & page_uri, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitFaviconDatabase* database, const char* page_uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_get_favicon;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto page_uri_to_c = gi::unwrap (page_uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()), (const char*) (page_uri_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// cairo_surface_t* webkit_favicon_database_get_favicon_finish (WebKitFaviconDatabase* database, GAsyncResult* result, GError ** error);
// ::cairo_surface_t* webkit_favicon_database_get_favicon_finish (::WebKitFaviconDatabase* database, ::GAsyncResult* result, GError ** error);
cairo::Surface base::FaviconDatabaseBase::get_favicon_finish (Gio::AsyncResult result)
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::WebKitFaviconDatabase* database, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_get_favicon_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
cairo::Surface base::FaviconDatabaseBase::get_favicon_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::cairo_surface_t* (*call_wrap_t) (::WebKitFaviconDatabase* database, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_get_favicon_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gchar* webkit_favicon_database_get_favicon_uri (WebKitFaviconDatabase* database, const gchar* page_uri);
// char* webkit_favicon_database_get_favicon_uri (::WebKitFaviconDatabase* database, const char* page_uri);
std::string base::FaviconDatabaseBase::get_favicon_uri (const std::string & page_uri) noexcept
{
  typedef char* (*call_wrap_t) (::WebKitFaviconDatabase* database, const char* page_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_favicon_database_get_favicon_uri;
  auto page_uri_to_c = gi::unwrap (page_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitFaviconDatabase*) (gobj_()), (const char*) (page_uri_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}



} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/favicondatabase_extra_def_impl.hpp>)
#include <webkit2/favicondatabase_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/favicondatabase_extra_impl.hpp>)
#include <webkit2/favicondatabase_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void FaviconDatabaseClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitFaviconDatabaseClass *methods = (::WebKitFaviconDatabaseClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
