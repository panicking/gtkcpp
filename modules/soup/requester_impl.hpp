// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTER_IMPL_HPP_
#define _GI_SOUP_REQUESTER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature RequesterBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

RequesterBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupRequester* soup_requester_new ();
// ::SoupRequester* soup_requester_new ();
Soup::Requester base::RequesterBase::new_ () noexcept
{
  typedef ::SoupRequester* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupRequest* soup_requester_request (SoupRequester* requester, const char* uri_string, GError ** error);
// ::SoupRequest* soup_requester_request (::SoupRequester* requester, const char* uri_string, GError ** error);
Soup::Request base::RequesterBase::request (const std::string & uri_string)
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupRequester* requester, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_request;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupRequester*) (gobj_()), (const char*) (uri_string_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Request base::RequesterBase::request (const std::string & uri_string, GLib::Error * _error) noexcept
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupRequester* requester, const char* uri_string, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_request;
  auto uri_string_to_c = gi::unwrap (uri_string, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupRequester*) (gobj_()), (const char*) (uri_string_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupRequest* soup_requester_request_uri (SoupRequester* requester, SoupURI* uri, GError ** error);
// ::SoupRequest* soup_requester_request_uri (::SoupRequester* requester, ::SoupURI* uri, GError ** error);
Soup::Request base::RequesterBase::request_uri (Soup::URI uri)
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupRequester* requester, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_request_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupRequester*) (gobj_()), (::SoupURI*) (uri_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::Request base::RequesterBase::request_uri (Soup::URI uri, GLib::Error * _error) noexcept
{
  typedef ::SoupRequest* (*call_wrap_t) (::SoupRequester* requester, ::SoupURI* uri, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_requester_request_uri;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupRequester*) (gobj_()), (::SoupURI*) (uri_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requester_extra_def_impl.hpp>)
#include <soup/requester_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requester_extra_impl.hpp>)
#include <soup/requester_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void RequesterClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupRequesterClass *methods = (::SoupRequesterClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
