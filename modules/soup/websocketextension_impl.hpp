// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETEXTENSION_IMPL_HPP_
#define _GI_SOUP_WEBSOCKETEXTENSION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// gboolean soup_websocket_extension_configure (SoupWebsocketExtension* extension, SoupWebsocketConnectionType connection_type, GHashTable* params, GError ** error);
// gboolean soup_websocket_extension_configure (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
bool base::WebsocketExtensionBase::configure (Soup::WebsocketConnectionType connection_type, const std::map<gpointer, gpointer> & params)
{
  typedef gboolean (*call_wrap_t) (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_configure;
  auto & params_i = params;
  auto params_w = unwrap (params_i, gi::transfer_none, direction_in);
  auto params_to_c = params_w.gobj_(false);
  auto connection_type_to_c = gi::unwrap (connection_type);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (::SoupWebsocketConnectionType) (connection_type_to_c), (::GHashTable*) (params_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::WebsocketExtensionBase::configure (Soup::WebsocketConnectionType connection_type, const std::map<gpointer, gpointer> & params, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_configure;
  auto & params_i = params;
  auto params_w = unwrap (params_i, gi::transfer_none, direction_in);
  auto params_to_c = params_w.gobj_(false);
  auto connection_type_to_c = gi::unwrap (connection_type);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (::SoupWebsocketConnectionType) (connection_type_to_c), (::GHashTable*) (params_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return _temp_ret;
}

// char* soup_websocket_extension_get_request_params (SoupWebsocketExtension* extension);
// char* soup_websocket_extension_get_request_params (::SoupWebsocketExtension* extension);
std::string base::WebsocketExtensionBase::get_request_params () noexcept
{
  typedef char* (*call_wrap_t) (::SoupWebsocketExtension* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_get_request_params;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* soup_websocket_extension_get_response_params (SoupWebsocketExtension* extension);
// char* soup_websocket_extension_get_response_params (::SoupWebsocketExtension* extension);
std::string base::WebsocketExtensionBase::get_response_params () noexcept
{
  typedef char* (*call_wrap_t) (::SoupWebsocketExtension* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_get_response_params;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GBytes* soup_websocket_extension_process_incoming_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* soup_websocket_extension_process_incoming_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
GLib::Bytes base::WebsocketExtensionBase::process_incoming_message (guint8 & header, GLib::Bytes payload)
{
  typedef ::GBytes* (*call_wrap_t) (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_process_incoming_message;
  auto payload_to_c = gi::unwrap (payload, gi::transfer_full, gi::direction_in);
  auto header_to_c = header;
  guint8 header_o = header_to_c;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (guint8*) (&header_o), (::GBytes*) (payload_to_c), &error);
  header = header_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::WebsocketExtensionBase::process_incoming_message (guint8 & header, GLib::Bytes payload, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_process_incoming_message;
  auto payload_to_c = gi::unwrap (payload, gi::transfer_full, gi::direction_in);
  auto header_to_c = header;
  guint8 header_o = header_to_c;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (guint8*) (&header_o), (::GBytes*) (payload_to_c), _error ? &_error_o : nullptr);
  header = header_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GBytes* soup_websocket_extension_process_outgoing_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* soup_websocket_extension_process_outgoing_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
GLib::Bytes base::WebsocketExtensionBase::process_outgoing_message (guint8 & header, GLib::Bytes payload)
{
  typedef ::GBytes* (*call_wrap_t) (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_process_outgoing_message;
  auto payload_to_c = gi::unwrap (payload, gi::transfer_full, gi::direction_in);
  auto header_to_c = header;
  guint8 header_o = header_to_c;
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (guint8*) (&header_o), (::GBytes*) (payload_to_c), &error);
  header = header_o;
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
GLib::Bytes base::WebsocketExtensionBase::process_outgoing_message (guint8 & header, GLib::Bytes payload, GLib::Error * _error) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_extension_process_outgoing_message;
  auto payload_to_c = gi::unwrap (payload, gi::transfer_full, gi::direction_in);
  auto header_to_c = header;
  guint8 header_o = header_to_c;
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()), (guint8*) (&header_o), (::GBytes*) (payload_to_c), _error ? &_error_o : nullptr);
  header = header_o;
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full, gi::direction_out);
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketextension_extra_def_impl.hpp>)
#include <soup/websocketextension_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketextension_extra_impl.hpp>)
#include <soup/websocketextension_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void WebsocketExtensionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupWebsocketExtensionClass *methods = (::SoupWebsocketExtensionClass *) class_struct;
  (void) methods;

  methods->get_request_params = (decltype (methods->get_request_params)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_request_params_>;
  methods->get_response_params = (decltype (methods->get_response_params)) detail::method_wrapper<self, std::string (*) (), gi::transfer_full_t>::wrapper<&self::get_response_params_>;
}

// gboolean WebsocketExtension::configure (SoupWebsocketExtension* extension, SoupWebsocketConnectionType connection_type, GHashTable* params, GError ** error);
// gboolean WebsocketExtension::configure (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// char* WebsocketExtension::get_request_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_request_params (::SoupWebsocketExtension* extension);
std::string WebsocketExtensionClass::get_request_params_ () noexcept
{
  if (!get_struct_()->get_request_params) return std::string{};
  typedef char* (*call_wrap_t) (::SoupWebsocketExtension* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_request_params;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* WebsocketExtension::get_response_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_response_params (::SoupWebsocketExtension* extension);
std::string WebsocketExtensionClass::get_response_params_ () noexcept
{
  if (!get_struct_()->get_response_params) return std::string{};
  typedef char* (*call_wrap_t) (::SoupWebsocketExtension* extension);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_response_params;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketExtension*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GBytes* WebsocketExtension::process_incoming_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_incoming_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// GBytes* WebsocketExtension::process_outgoing_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_outgoing_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
