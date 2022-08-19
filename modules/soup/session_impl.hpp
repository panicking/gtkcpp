// AUTO-GENERATED

#ifndef _GI_SOUP_SESSION_IMPL_HPP_
#define _GI_SOUP_SESSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupSession* soup_session_new ();
// ::SoupSession* soup_session_new ();
Soup::Session base::SessionBase::new_ () noexcept
{
  typedef ::SoupSession* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupSession* soup_session_new_with_options (const char* optname1);
// ::SoupSession* soup_session_new_with_options (const char* optname1);
// IGNORE; not introspectable, varargs not supported

// void soup_session_abort (SoupSession* session);
// void soup_session_abort (::SoupSession* session);
void base::SessionBase::abort () noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_abort;
  call_wrap_v ((::SoupSession*) (gobj_()));
}

// void soup_session_add_feature (SoupSession* session, SoupSessionFeature* feature);
// void soup_session_add_feature (::SoupSession* session, ::SoupSessionFeature* feature);
void base::SessionBase::add_feature (Soup::SessionFeature feature) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupSessionFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_add_feature;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupSessionFeature*) (feature_to_c));
}

// void soup_session_add_feature_by_type (SoupSession* session, GType feature_type);
// void soup_session_add_feature_by_type (::SoupSession* session, GType feature_type);
void base::SessionBase::add_feature_by_type (GType feature_type) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_add_feature_by_type;
  auto feature_type_to_c = feature_type;
  call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c));
}

// void soup_session_cancel_message (SoupSession* session, SoupMessage* msg, guint status_code);
// void soup_session_cancel_message (::SoupSession* session, ::SoupMessage* msg, guint status_code);
void base::SessionBase::cancel_message (Soup::Message msg, guint status_code) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, guint status_code);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_cancel_message;
  auto status_code_to_c = status_code;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (guint) (status_code_to_c));
}

// void soup_session_connect_async (SoupSession* session, SoupURI* uri, GCancellable* cancellable, SoupSessionConnectProgressCallback progress_callback, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_connect_async (::SoupSession* session, ::SoupURI* uri, ::GCancellable* cancellable, Soup::SessionConnectProgressCallback::cfunction_type progress_callback, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// SKIP; callback misses closure info

// GIOStream* soup_session_connect_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::GIOStream* soup_session_connect_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
Gio::IOStream base::SessionBase::connect_finish (Gio::AsyncResult result)
{
  typedef ::GIOStream* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::IOStream base::SessionBase::connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GMainContext* soup_session_get_async_context (SoupSession* session);
// ::GMainContext* soup_session_get_async_context (::SoupSession* session);
GLib::MainContext base::SessionBase::get_async_context () noexcept
{
  typedef ::GMainContext* (*call_wrap_t) (::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_get_async_context;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupSessionFeature* soup_session_get_feature (SoupSession* session, GType feature_type);
// ::SoupSessionFeature* soup_session_get_feature (::SoupSession* session, GType feature_type);
Soup::SessionFeature base::SessionBase::get_feature (GType feature_type) noexcept
{
  typedef ::SoupSessionFeature* (*call_wrap_t) (::SoupSession* session, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_get_feature;
  auto feature_type_to_c = feature_type;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupSessionFeature* soup_session_get_feature_for_message (SoupSession* session, GType feature_type, SoupMessage* msg);
// ::SoupSessionFeature* soup_session_get_feature_for_message (::SoupSession* session, GType feature_type, ::SoupMessage* msg);
Soup::SessionFeature base::SessionBase::get_feature_for_message (GType feature_type, Soup::Message msg) noexcept
{
  typedef ::SoupSessionFeature* (*call_wrap_t) (::SoupSession* session, GType feature_type, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_get_feature_for_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto feature_type_to_c = feature_type;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* soup_session_get_features (SoupSession* session, GType feature_type);
// ::GSList* soup_session_get_features (::SoupSession* session, GType feature_type);
std::vector<Soup::SessionFeature> base::SessionBase::get_features (GType feature_type) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupSession* session, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_get_features;
  auto feature_type_to_c = feature_type;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c));
  return gi::detail::wrap_list<Soup::SessionFeature> (_temp_ret, gi::transfer_container);
}

// gboolean soup_session_has_feature (SoupSession* session, GType feature_type);
// gboolean soup_session_has_feature (::SoupSession* session, GType feature_type);
bool base::SessionBase::has_feature (GType feature_type) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSession* session, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_has_feature;
  auto feature_type_to_c = feature_type;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c));
  return _temp_ret;
}

// void soup_session_pause_message (SoupSession* session, SoupMessage* msg);
// void soup_session_pause_message (::SoupSession* session, ::SoupMessage* msg);
void base::SessionBase::pause_message (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_pause_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// void soup_session_prefetch_dns (SoupSession* session, const char* hostname, GCancellable* cancellable, SoupAddressCallback callback, gpointer user_data);
// void soup_session_prefetch_dns (::SoupSession* session, const char* hostname, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
void base::SessionBase::prefetch_dns (const std::string & hostname, Gio::Cancellable cancellable, Soup::AddressCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, const char* hostname, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_prefetch_dns;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Soup::AddressCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SessionBase::prefetch_dns (const std::string & hostname, Soup::AddressCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, const char* hostname, ::GCancellable* cancellable, Soup::AddressCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_prefetch_dns;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto hostname_to_c = gi::unwrap (hostname, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (hostname_to_c), (::GCancellable*) (cancellable_to_c), (Soup::AddressCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void soup_session_prepare_for_uri (SoupSession* session, SoupURI* uri);
// void soup_session_prepare_for_uri (::SoupSession* session, ::SoupURI* uri);
// IGNORE; deprecated

// void soup_session_queue_message (SoupSession* session, SoupMessage* msg, SoupSessionCallback callback, gpointer user_data);
// void soup_session_queue_message (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
void base::SessionBase::queue_message (Soup::Message msg, Soup::SessionCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_queue_message;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (Soup::SessionCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// gboolean soup_session_redirect_message (SoupSession* session, SoupMessage* msg);
// gboolean soup_session_redirect_message (::SoupSession* session, ::SoupMessage* msg);
bool base::SessionBase::redirect_message (Soup::Message msg) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_redirect_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

// void soup_session_remove_feature (SoupSession* session, SoupSessionFeature* feature);
// void soup_session_remove_feature (::SoupSession* session, ::SoupSessionFeature* feature);
void base::SessionBase::remove_feature (Soup::SessionFeature feature) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupSessionFeature* feature);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_remove_feature;
  auto feature_to_c = gi::unwrap (feature, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupSessionFeature*) (feature_to_c));
}

// void soup_session_remove_feature_by_type (SoupSession* session, GType feature_type);
// void soup_session_remove_feature_by_type (::SoupSession* session, GType feature_type);
void base::SessionBase::remove_feature_by_type (GType feature_type) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, GType feature_type);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_remove_feature_by_type;
  auto feature_type_to_c = feature_type;
  call_wrap_v ((::SoupSession*) (gobj_()), (GType) (feature_type_to_c));
}

// SoupRequest* soup_session_request (SoupSession* session, const char* uri_string, GError ** error);
// ::SoupRequest* soup_session_request (::SoupSession* session, const char* uri_string, GError ** error);
Soup::Request base::SessionBase::request (const std::string & uri_string)
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupSession* session, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (uri_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Request base::SessionBase::request (const std::string & uri_string, GLib::Error * _error) noexcept
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupSession* session, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (uri_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupRequestHTTP* soup_session_request_http (SoupSession* session, const char* method, const char* uri_string, GError ** error);
// ::SoupRequestHTTP* soup_session_request_http (::SoupSession* session, const char* method, const char* uri_string, GError ** error);
Soup::RequestHTTP base::SessionBase::request_http (const std::string & method, const std::string & uri_string)
{
  typedef ::SoupRequestHTTP* (*call_wrap_t) (::SoupSession* session, const char* method, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_http;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (method_to_c), (const char*) (uri_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::RequestHTTP base::SessionBase::request_http (const std::string & method, const std::string & uri_string, GLib::Error * _error) noexcept
{
  typedef ::SoupRequestHTTP* (*call_wrap_t) (::SoupSession* session, const char* method, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_http;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (method_to_c), (const char*) (uri_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupRequestHTTP* soup_session_request_http_uri (SoupSession* session, const char* method, SoupURI* uri, GError ** error);
// ::SoupRequestHTTP* soup_session_request_http_uri (::SoupSession* session, const char* method, ::SoupURI* uri, GError ** error);
Soup::RequestHTTP base::SessionBase::request_http_uri (const std::string & method, Soup::URI uri)
{
  typedef ::SoupRequestHTTP* (*call_wrap_t) (::SoupSession* session, const char* method, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_http_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (method_to_c), (::SoupURI*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::RequestHTTP base::SessionBase::request_http_uri (const std::string & method, Soup::URI uri, GLib::Error * _error) noexcept
{
  typedef ::SoupRequestHTTP* (*call_wrap_t) (::SoupSession* session, const char* method, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_http_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto method_to_c = gi::unwrap (method, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (const char*) (method_to_c), (::SoupURI*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupRequest* soup_session_request_uri (SoupSession* session, SoupURI* uri, GError ** error);
// ::SoupRequest* soup_session_request_uri (::SoupSession* session, ::SoupURI* uri, GError ** error);
Soup::Request base::SessionBase::request_uri (Soup::URI uri)
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupSession* session, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupURI*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Request base::SessionBase::request_uri (Soup::URI uri, GLib::Error * _error) noexcept
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupSession* session, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_request_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupURI*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_session_requeue_message (SoupSession* session, SoupMessage* msg);
// void soup_session_requeue_message (::SoupSession* session, ::SoupMessage* msg);
void base::SessionBase::requeue_message (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_requeue_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// GInputStream* soup_session_send (SoupSession* session, SoupMessage* msg, GCancellable* cancellable, GError ** error);
// ::GInputStream* soup_session_send (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
Gio::InputStream base::SessionBase::send (Soup::Message msg, Gio::Cancellable cancellable)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::SessionBase::send (Soup::Message msg)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send;
  auto cancellable_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::SessionBase::send (Soup::Message msg, Gio::Cancellable cancellable, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::SessionBase::send (Soup::Message msg, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send;
  auto cancellable_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_session_send_async (SoupSession* session, SoupMessage* msg, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_send_async (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SessionBase::send_async (Soup::Message msg, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SessionBase::send_async (Soup::Message msg, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// GInputStream* soup_session_send_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::GInputStream* soup_session_send_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
Gio::InputStream base::SessionBase::send_finish (Gio::AsyncResult result)
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Gio::InputStream base::SessionBase::send_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::GInputStream* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// guint soup_session_send_message (SoupSession* session, SoupMessage* msg);
// guint soup_session_send_message (::SoupSession* session, ::SoupMessage* msg);
guint base::SessionBase::send_message (Soup::Message msg) noexcept
{
  typedef guint (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_send_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

// GIOStream* soup_session_steal_connection (SoupSession* session, SoupMessage* msg);
// ::GIOStream* soup_session_steal_connection (::SoupSession* session, ::SoupMessage* msg);
Gio::IOStream base::SessionBase::steal_connection (Soup::Message msg) noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_steal_connection;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_session_unpause_message (SoupSession* session, SoupMessage* msg);
// void soup_session_unpause_message (::SoupSession* session, ::SoupMessage* msg);
void base::SessionBase::unpause_message (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_unpause_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// void soup_session_websocket_connect_async (SoupSession* session, SoupMessage* msg, const char* origin, char** protocols, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void soup_session_websocket_connect_async (::SoupSession* session, ::SoupMessage* msg, const char* origin, char** protocols, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
void base::SessionBase::websocket_connect_async (Soup::Message msg, const std::string & origin, const std::vector<std::string> & protocols, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, const char* origin, char** protocols, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_websocket_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::SessionBase::websocket_connect_async (Soup::Message msg, const std::vector<std::string> & protocols, Gio::AsyncReadyCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, const char* origin, char** protocols, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_websocket_connect_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto protocols_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (protocols);
  auto protocols_w = unwrap (protocols_i, gi::transfer_none, direction_in);
  auto protocols_to_c = protocols_w.gobj_(false);
  auto origin_to_c = nullptr;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (origin_to_c), (char**) (protocols_to_c), (::GCancellable*) (cancellable_to_c), (Gio::AsyncReadyCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// SoupWebsocketConnection* soup_session_websocket_connect_finish (SoupSession* session, GAsyncResult* result, GError ** error);
// ::SoupWebsocketConnection* soup_session_websocket_connect_finish (::SoupSession* session, ::GAsyncResult* result, GError ** error);
Soup::WebsocketConnection base::SessionBase::websocket_connect_finish (Gio::AsyncResult result)
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_websocket_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::WebsocketConnection base::SessionBase::websocket_connect_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::SoupSession* session, ::GAsyncResult* result, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_websocket_connect_finish;
  auto result_to_c = gi::unwrap (result, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::GAsyncResult*) (result_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_session_would_redirect (SoupSession* session, SoupMessage* msg);
// gboolean soup_session_would_redirect (::SoupSession* session, ::SoupMessage* msg);
bool base::SessionBase::would_redirect (Soup::Message msg) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_session_would_redirect;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}




// IGNORE; deprecated




} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/session_extra_def_impl.hpp>)
#include <soup/session_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/session_extra_impl.hpp>)
#include <soup/session_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void SessionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupSessionClass *methods = (::SoupSessionClass *) class_struct;
  (void) methods;

  methods->auth_required = (decltype (methods->auth_required)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::Auth auth, gboolean retrying), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::auth_required_>;
  methods->authenticate = (decltype (methods->authenticate)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::Auth auth, gboolean retrying), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::authenticate_>;
  methods->cancel_message = (decltype (methods->cancel_message)) detail::method_wrapper<self, void (*) (Soup::Message msg, guint status_code), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::cancel_message_>;
  methods->flush_queue = (decltype (methods->flush_queue)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::flush_queue_>;
  methods->kick = (decltype (methods->kick)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::kick_>;
  methods->request_started = (decltype (methods->request_started)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::Socket socket), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::request_started_>;
  methods->requeue_message = (decltype (methods->requeue_message)) detail::method_wrapper<self, void (*) (Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::requeue_message_>;
  methods->send_message = (decltype (methods->send_message)) detail::method_wrapper<self, guint (*) (Soup::Message msg), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::send_message_>;
}

// void Session::auth_required (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::auth_required (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
void SessionClass::auth_required_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept
{
  if (!get_struct_()->auth_required) return ;
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->auth_required;
  auto retrying_to_c = retrying;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (gboolean) (retrying_to_c));
}

// void Session::authenticate (SoupSession* session, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void Session::authenticate (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
void SessionClass::authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept
{
  if (!get_struct_()->authenticate) return ;
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authenticate;
  auto retrying_to_c = retrying;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (gboolean) (retrying_to_c));
}

// void Session::cancel_message (SoupSession* session, SoupMessage* msg, guint status_code);
// void Session::cancel_message (::SoupSession* session, ::SoupMessage* msg, guint status_code);
void SessionClass::cancel_message_ (Soup::Message msg, guint status_code) noexcept
{
  if (!get_struct_()->cancel_message) return ;
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, guint status_code);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->cancel_message;
  auto status_code_to_c = status_code;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (guint) (status_code_to_c));
}

// void Session::flush_queue (SoupSession* session);
// void Session::flush_queue (::SoupSession* session);
void SessionClass::flush_queue_ () noexcept
{
  if (!get_struct_()->flush_queue) return ;
  typedef void (*call_wrap_t) (::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->flush_queue;
  call_wrap_v ((::SoupSession*) (gobj_()));
}

// void Session::kick (SoupSession* session);
// void Session::kick (::SoupSession* session);
void SessionClass::kick_ () noexcept
{
  if (!get_struct_()->kick) return ;
  typedef void (*call_wrap_t) (::SoupSession* session);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->kick;
  call_wrap_v ((::SoupSession*) (gobj_()));
}

// void Session::queue_message (SoupSession* session, SoupMessage* msg, SoupSessionCallback callback, gpointer user_data);
// void Session::queue_message (::SoupSession* session, ::SoupMessage* msg, Soup::SessionCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void Session::request_started (SoupSession* session, SoupMessage* msg, SoupSocket* socket);
// void Session::request_started (::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
void SessionClass::request_started_ (Soup::Message msg, Soup::Socket socket) noexcept
{
  if (!get_struct_()->request_started) return ;
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg, ::SoupSocket* socket);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->request_started;
  auto socket_to_c = gi::unwrap (socket, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupSocket*) (socket_to_c));
}

// void Session::requeue_message (SoupSession* session, SoupMessage* msg);
// void Session::requeue_message (::SoupSession* session, ::SoupMessage* msg);
void SessionClass::requeue_message_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->requeue_message) return ;
  typedef void (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->requeue_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// guint Session::send_message (SoupSession* session, SoupMessage* msg);
// guint Session::send_message (::SoupSession* session, ::SoupMessage* msg);
guint SessionClass::send_message_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->send_message) return guint{};
  typedef guint (*call_wrap_t) (::SoupSession* session, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->send_message;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupSession*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
