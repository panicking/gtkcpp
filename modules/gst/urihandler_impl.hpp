// AUTO-GENERATED

#ifndef _GI_GST_URIHANDLER_IMPL_HPP_
#define _GI_GST_URIHANDLER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gst {

namespace base {

// const gchar* const* gst_uri_handler_get_protocols (GstURIHandler* handler);
// const char** gst_uri_handler_get_protocols (::GstURIHandler* handler);
std::vector<std::string> base::URIHandlerBase::get_protocols () noexcept
{
  typedef const char** (*call_wrap_t) (::GstURIHandler* handler);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_handler_get_protocols;
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_none);
}

// gchar* gst_uri_handler_get_uri (GstURIHandler* handler);
// char* gst_uri_handler_get_uri (::GstURIHandler* handler);
std::string base::URIHandlerBase::get_uri () noexcept
{
  typedef char* (*call_wrap_t) (::GstURIHandler* handler);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_handler_get_uri;
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GstURIType gst_uri_handler_get_uri_type (GstURIHandler* handler);
// ::GstURIType gst_uri_handler_get_uri_type (::GstURIHandler* handler);
Gst::URIType base::URIHandlerBase::get_uri_type () noexcept
{
  typedef ::GstURIType (*call_wrap_t) (::GstURIHandler* handler);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_handler_get_uri_type;
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// gboolean gst_uri_handler_set_uri (GstURIHandler* handler, const gchar* uri, GError ** error);
// gboolean gst_uri_handler_set_uri (::GstURIHandler* handler, const char* uri, GError ** error);
bool base::URIHandlerBase::set_uri (const std::string & uri)
{
  typedef gboolean (*call_wrap_t) (::GstURIHandler* handler, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_handler_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()), (const char*) (uri_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::URIHandlerBase::set_uri (const std::string & uri, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::GstURIHandler* handler, const char* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) gst_uri_handler_set_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()), (const char*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}


} // namespace base

} // namespace Gst

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gst/urihandler_extra_def_impl.hpp>)
#include <gst/urihandler_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gst/urihandler_extra_impl.hpp>)
#include <gst/urihandler_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gst {

namespace impl {

namespace internal {

void URIHandlerInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::GstURIHandlerInterface *methods = (::GstURIHandlerInterface *) interface_struct;
  (void) methods;

  methods->get_uri = (decltype (methods->get_uri)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_uri_>;
}

// gchar* URIHandler::get_uri (GstURIHandler* handler);
// char* URIHandler::get_uri (::GstURIHandler* handler);
std::string URIHandlerInterfaceClassImpl::get_uri_ () noexcept
{
  if (!get_struct_()->get_uri) return std::string{};
  typedef char* (*call_wrap_t) (::GstURIHandler* handler);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_uri;
  auto _temp_ret = call_wrap_v ((::GstURIHandler*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean URIHandler::set_uri (GstURIHandler* handler, const gchar* uri, GError ** error);
// gboolean URIHandler::set_uri (::GstURIHandler* handler, const char* uri, GError ** error);
// SKIP; callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Gst

} // namespace repository

} // namespace gi

#endif
