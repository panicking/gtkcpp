// AUTO-GENERATED

#ifndef _GI_WEBKIT2_WEBRESOURCE_IMPL_HPP_
#define _GI_WEBKIT2_WEBRESOURCE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_web_resource_get_data (WebKitWebResource* resource, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_web_resource_get_data (::WebKitWebResource* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::WebResourceBase::get_data (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebResource* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitWebResource*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::WebResourceBase::get_data (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::WebKitWebResource* resource, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_data;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::WebKitWebResource*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// guchar* webkit_web_resource_get_data_finish (WebKitWebResource* resource, GAsyncResult* result, gsize* length, GError ** error);
// guint8* webkit_web_resource_get_data_finish (::WebKitWebResource* resource, ::GAsyncResult* result, gsize* length, GError ** error);
std::vector<guint8> base::WebResourceBase::get_data_finish (Gio::AsyncResult result)
{
  typedef guint8* (*call_wrap_t) (::WebKitWebResource* resource, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_data_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<guint8> _temp_ret;
  GError *error = NULL;
  auto _ret_o = call_wrap_v ((::WebKitWebResource*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length), &error);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_full, length, _temp_ret.data());
  g_free (_ret_o);
  gi::check_error (error);
  return _temp_ret;
}
std::vector<guint8> base::WebResourceBase::get_data_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef guint8* (*call_wrap_t) (::WebKitWebResource* resource, ::GAsyncResult* result, gsize* length, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_data_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  gsize length;
  std::vector<guint8> _temp_ret;
  GError* _error_o {};
  auto _ret_o = call_wrap_v ((::WebKitWebResource*) (gobj_()), (::GAsyncResult*) (result_to_c), (gsize*) (&length), _error ? &_error_o : nullptr);
  _temp_ret.resize(length);
  detail::wrap_array (_ret_o, gi::transfer_full, length, _temp_ret.data());
  g_free (_ret_o);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// WebKitURIResponse* webkit_web_resource_get_response (WebKitWebResource* resource);
// ::WebKitURIResponse* webkit_web_resource_get_response (::WebKitWebResource* resource);
WebKit2::URIResponse base::WebResourceBase::get_response () noexcept
{
  typedef ::WebKitURIResponse* (*call_wrap_t) (::WebKitWebResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_response;
  auto _temp_ret = call_wrap_v ((::WebKitWebResource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const gchar* webkit_web_resource_get_uri (WebKitWebResource* resource);
// const char* webkit_web_resource_get_uri (::WebKitWebResource* resource);
std::string base::WebResourceBase::get_uri () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitWebResource* resource);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_web_resource_get_uri;
  auto _temp_ret = call_wrap_v ((::WebKitWebResource*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}







} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/webresource_extra_def_impl.hpp>)
#include <webkit2/webresource_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/webresource_extra_impl.hpp>)
#include <webkit2/webresource_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void WebResourceClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitWebResourceClass *methods = (::WebKitWebResourceClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
