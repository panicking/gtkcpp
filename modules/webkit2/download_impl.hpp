// AUTO-GENERATED

#ifndef _GI_WEBKIT2_DOWNLOAD_IMPL_HPP_
#define _GI_WEBKIT2_DOWNLOAD_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_download_cancel (WebKitDownload* download);
// void webkit_download_cancel (::WebKitDownload* download);
void base::DownloadBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_cancel;
  call_wrap_v ((::WebKitDownload*) (gobj_()));
}

// gboolean webkit_download_get_allow_overwrite (WebKitDownload* download);
// gboolean webkit_download_get_allow_overwrite (::WebKitDownload* download);
bool base::DownloadBase::get_allow_overwrite () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_allow_overwrite;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return _temp_ret;
}

// const gchar* webkit_download_get_destination (WebKitDownload* download);
// const char* webkit_download_get_destination (::WebKitDownload* download);
std::string base::DownloadBase::get_destination () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_destination;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gdouble webkit_download_get_elapsed_time (WebKitDownload* download);
// gdouble webkit_download_get_elapsed_time (::WebKitDownload* download);
gdouble base::DownloadBase::get_elapsed_time () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_elapsed_time;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return _temp_ret;
}

// gdouble webkit_download_get_estimated_progress (WebKitDownload* download);
// gdouble webkit_download_get_estimated_progress (::WebKitDownload* download);
gdouble base::DownloadBase::get_estimated_progress () noexcept
{
  typedef gdouble (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_estimated_progress;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return _temp_ret;
}

// guint64 webkit_download_get_received_data_length (WebKitDownload* download);
// guint64 webkit_download_get_received_data_length (::WebKitDownload* download);
guint64 base::DownloadBase::get_received_data_length () noexcept
{
  typedef guint64 (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_received_data_length;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return _temp_ret;
}

// WebKitURIRequest* webkit_download_get_request (WebKitDownload* download);
// ::WebKitURIRequest* webkit_download_get_request (::WebKitDownload* download);
WebKit2::URIRequest base::DownloadBase::get_request () noexcept
{
  typedef ::WebKitURIRequest* (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_request;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitURIResponse* webkit_download_get_response (WebKitDownload* download);
// ::WebKitURIResponse* webkit_download_get_response (::WebKitDownload* download);
WebKit2::URIResponse base::DownloadBase::get_response () noexcept
{
  typedef ::WebKitURIResponse* (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_response;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitWebView* webkit_download_get_web_view (WebKitDownload* download);
// ::WebKitWebView* webkit_download_get_web_view (::WebKitDownload* download);
WebKit2::WebView base::DownloadBase::get_web_view () noexcept
{
  typedef ::WebKitWebView* (*call_wrap_t) (::WebKitDownload* download);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_get_web_view;
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_download_set_allow_overwrite (WebKitDownload* download, gboolean allowed);
// void webkit_download_set_allow_overwrite (::WebKitDownload* download, gboolean allowed);
void base::DownloadBase::set_allow_overwrite (gboolean allowed) noexcept
{
  typedef void (*call_wrap_t) (::WebKitDownload* download, gboolean allowed);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_set_allow_overwrite;
  auto allowed_to_c = allowed;
  call_wrap_v ((::WebKitDownload*) (gobj_()), (gboolean) (allowed_to_c));
}

// void webkit_download_set_destination (WebKitDownload* download, const gchar* uri);
// void webkit_download_set_destination (::WebKitDownload* download, const char* uri);
void base::DownloadBase::set_destination (const std::string & uri) noexcept
{
  typedef void (*call_wrap_t) (::WebKitDownload* download, const char* uri);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_download_set_destination;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitDownload*) (gobj_()), (const char*) (uri_to_c));
}







} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/download_extra_def_impl.hpp>)
#include <webkit2/download_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/download_extra_impl.hpp>)
#include <webkit2/download_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void DownloadClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitDownloadClass *methods = (::WebKitDownloadClass *) class_struct;
  (void) methods;

  methods->decide_destination = (decltype (methods->decide_destination)) detail::method_wrapper<self, bool (*) (const std::string & suggested_filename), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::decide_destination_>;
}

// gboolean Download::decide_destination (WebKitDownload* download, const gchar* suggested_filename);
// gboolean Download::decide_destination (::WebKitDownload* download, const char* suggested_filename);
bool DownloadClass::decide_destination_ (const std::string & suggested_filename) noexcept
{
  if (!get_struct_()->decide_destination) return bool{};
  typedef gboolean (*call_wrap_t) (::WebKitDownload* download, const char* suggested_filename);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->decide_destination;
  auto suggested_filename_to_c = gi::unwrap (suggested_filename, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitDownload*) (gobj_()), (const char*) (suggested_filename_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
