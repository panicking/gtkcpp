// AUTO-GENERATED

#ifndef _GI_SOUP_REQUEST_IMPL_HPP_
#define _GI_SOUP_REQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Gio::Initable RequestBase::interface_ (gi::interface_tag<Gio::Initable>)
{ return gi::wrap ((Gio::Initable::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RequestBase::operator Gio::Initable ()
{ return interface_ (gi::interface_tag<Gio::Initable>()); }

// goffset soup_request_get_content_length (SoupRequest* request);
// gint64 soup_request_get_content_length (::SoupRequest* request);
gint64 base::RequestBase::get_content_length () noexcept
{
  typedef gint64 (*call_wrap_t) (::SoupRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_get_content_length;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()));
  return _temp_ret;
}

// const char* soup_request_get_content_type (SoupRequest* request);
// const char* soup_request_get_content_type (::SoupRequest* request);
std::string base::RequestBase::get_content_type () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_get_content_type;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupSession* soup_request_get_session (SoupRequest* request);
// ::SoupSession* soup_request_get_session (::SoupRequest* request);
Soup::Session base::RequestBase::get_session () noexcept
{
  typedef ::SoupSession* (*call_wrap_t) (::SoupRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_get_session;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupURI* soup_request_get_uri (SoupRequest* request);
// ::SoupURI* soup_request_get_uri (::SoupRequest* request);
Soup::URI base::RequestBase::get_uri () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_get_uri;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GInputStream* soup_request_send (SoupRequest* request, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_request_send (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
Gio::InputStream base::RequestBase::send (Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::RequestBase::send ()
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send;
  auto cancellable_to_c = nullptr;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::RequestBase::send (Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::RequestBase::send (GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send;
  auto cancellable_to_c = nullptr;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_request_send_async (SoupRequest* request, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_request_send_async (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::RequestBase::send_async (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::RequestBase::send_async (Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  call_wrap_v ((::SoupRequest*) (gobj_()), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* soup_request_send_finish (SoupRequest* request, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_request_send_finish (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
Gio::InputStream base::RequestBase::send_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::RequestBase::send_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_request_send_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/request_extra_def_impl.hpp>)
#include <soup/request_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/request_extra_impl.hpp>)
#include <soup/request_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void RequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupRequestClass *methods = (::SoupRequestClass *) class_struct;
  (void) methods;

  methods->get_content_length = (decltype (methods->get_content_length)) detail::method_wrapper<self, gint64 (*) (), gi::transfer_none_t>::wrapper<&self::get_content_length_>;
}

// gboolean Request::check_uri (SoupRequest* req_base, SoupURI* uri, GError ** error);
// gboolean Request::check_uri (::SoupRequest* req_base, ::SoupURI* uri, GError ** error);
// SKIP; callee GError not supported

// goffset Request::get_content_length (SoupRequest* request);
// gint64 Request::get_content_length (::SoupRequest* request);
gint64 RequestClass::get_content_length_ () noexcept
{
  if (!get_struct_()->get_content_length) return gint64{};
  typedef gint64 (*call_wrap_t) (::SoupRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_content_length;
  auto _temp_ret = call_wrap_v ((::SoupRequest*) (gobj_()));
  return _temp_ret;
}

// const char* Request::get_content_type (SoupRequest* request);
// const char* Request::get_content_type (::SoupRequest* request);
// SKIP; invalid callback return transfer none

// GInputStream* Request::send (SoupRequest* request, GCancellable* cancellable, GError ** error);
// ::GInputStream* Request::send (::SoupRequest* request, ::GCancellable* cancellable, GError ** error);
// SKIP; callee GError not supported

// void Request::send_async (SoupRequest* request, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void Request::send_async (::SoupRequest* request, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// GInputStream* Request::send_finish (SoupRequest* request, GAsyncResult* result, GError ** error);
// ::GInputStream* Request::send_finish (::SoupRequest* request, ::GAsyncResult* result, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
