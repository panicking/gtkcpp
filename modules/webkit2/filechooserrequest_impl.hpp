// AUTO-GENERATED

#ifndef _GI_WEBKIT2_FILECHOOSERREQUEST_IMPL_HPP_
#define _GI_WEBKIT2_FILECHOOSERREQUEST_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_file_chooser_request_cancel (WebKitFileChooserRequest* request);
// void webkit_file_chooser_request_cancel (::WebKitFileChooserRequest* request);
void base::FileChooserRequestBase::cancel () noexcept
{
  typedef void (*call_wrap_t) (::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_cancel;
  call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()));
}

// const gchar* const* webkit_file_chooser_request_get_mime_types (WebKitFileChooserRequest* request);
// const char** webkit_file_chooser_request_get_mime_types (::WebKitFileChooserRequest* request);
std::vector<std::string> base::FileChooserRequestBase::get_mime_types () noexcept
{
  typedef const char** (*call_wrap_t) (::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_get_mime_types;
  auto _temp_ret = call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// GtkFileFilter* webkit_file_chooser_request_get_mime_types_filter (WebKitFileChooserRequest* request);
// ::GtkFileFilter* webkit_file_chooser_request_get_mime_types_filter (::WebKitFileChooserRequest* request);
Gtk::FileFilter base::FileChooserRequestBase::get_mime_types_filter () noexcept
{
  typedef ::GtkFileFilter* (*call_wrap_t) (::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_get_mime_types_filter;
  auto _temp_ret = call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// gboolean webkit_file_chooser_request_get_select_multiple (WebKitFileChooserRequest* request);
// gboolean webkit_file_chooser_request_get_select_multiple (::WebKitFileChooserRequest* request);
bool base::FileChooserRequestBase::get_select_multiple () noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_get_select_multiple;
  auto _temp_ret = call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()));
  return _temp_ret;
}

// const gchar* const* webkit_file_chooser_request_get_selected_files (WebKitFileChooserRequest* request);
// const char** webkit_file_chooser_request_get_selected_files (::WebKitFileChooserRequest* request);
std::vector<std::string> base::FileChooserRequestBase::get_selected_files () noexcept
{
  typedef const char** (*call_wrap_t) (::WebKitFileChooserRequest* request);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_get_selected_files;
  auto _temp_ret = call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// void webkit_file_chooser_request_select_files (WebKitFileChooserRequest* request, const gchar* const* files);
// void webkit_file_chooser_request_select_files (::WebKitFileChooserRequest* request, const char** files);
void base::FileChooserRequestBase::select_files (const std::vector<std::string> & files) noexcept
{
  typedef void (*call_wrap_t) (::WebKitFileChooserRequest* request, const char** files);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_file_chooser_request_select_files;
  auto files_i = detail::make_list_unwrap_range<traits::ctype<std::string>::type> (files);
  auto files_w = unwrap (files_i, gi::transfer_none, direction_in);
  auto files_to_c = files_w.gobj_(false);
  call_wrap_v ((::WebKitFileChooserRequest*) (gobj_()), (const char**) (files_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/filechooserrequest_extra_def_impl.hpp>)
#include <webkit2/filechooserrequest_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/filechooserrequest_extra_impl.hpp>)
#include <webkit2/filechooserrequest_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void FileChooserRequestClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitFileChooserRequestClass *methods = (::WebKitFileChooserRequestClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
