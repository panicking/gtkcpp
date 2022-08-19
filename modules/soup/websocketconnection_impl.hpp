// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETCONNECTION_IMPL_HPP_
#define _GI_SOUP_WEBSOCKETCONNECTION_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupWebsocketConnection* soup_websocket_connection_new (GIOStream* stream, SoupURI* uri, SoupWebsocketConnectionType type, const char* origin, const char* protocol);
// ::SoupWebsocketConnection* soup_websocket_connection_new (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol);
Soup::WebsocketConnection base::WebsocketConnectionBase::new_ (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::string & origin, const std::string & protocol) noexcept
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_new;
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (::SoupURI*) (uri_to_c), (::SoupWebsocketConnectionType) (type_to_c), (const char*) (origin_to_c), (const char*) (protocol_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::WebsocketConnection base::WebsocketConnectionBase::new_ (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type) noexcept
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_new;
  auto protocol_to_c = nullptr;
  auto origin_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (::SoupURI*) (uri_to_c), (::SoupWebsocketConnectionType) (type_to_c), (const char*) (origin_to_c), (const char*) (protocol_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// SoupWebsocketConnection* soup_websocket_connection_new_with_extensions (GIOStream* stream, SoupURI* uri, SoupWebsocketConnectionType type, const char* origin, const char* protocol, GList* extensions);
// ::SoupWebsocketConnection* soup_websocket_connection_new_with_extensions (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol, ::GList* extensions);
Soup::WebsocketConnection base::WebsocketConnectionBase::new_with_extensions (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::string & origin, const std::string & protocol, const std::vector<Soup::WebsocketExtension> & extensions) noexcept
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol, ::GList* extensions);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_new_with_extensions;
  auto extensions_i = detail::make_list_unwrap_range<::GList> (extensions);
  auto extensions_w = unwrap (extensions_i, gi::transfer_full, direction_in);
  auto extensions_to_c = extensions_w.gobj_(true);
  auto protocol_to_c = gi::unwrap (protocol, gi::transfer_none, gi::direction_in);
  auto origin_to_c = gi::unwrap (origin, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (::SoupURI*) (uri_to_c), (::SoupWebsocketConnectionType) (type_to_c), (const char*) (origin_to_c), (const char*) (protocol_to_c), (::GList*) (extensions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}
Soup::WebsocketConnection base::WebsocketConnectionBase::new_with_extensions (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::vector<Soup::WebsocketExtension> & extensions) noexcept
{
  typedef ::SoupWebsocketConnection* (*call_wrap_t) (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol, ::GList* extensions);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_new_with_extensions;
  auto extensions_i = detail::make_list_unwrap_range<::GList> (extensions);
  auto extensions_w = unwrap (extensions_i, gi::transfer_full, direction_in);
  auto extensions_to_c = extensions_w.gobj_(true);
  auto protocol_to_c = nullptr;
  auto origin_to_c = nullptr;
  auto type_to_c = gi::unwrap (type);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto stream_to_c = gi::unwrap (stream, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::GIOStream*) (stream_to_c), (::SoupURI*) (uri_to_c), (::SoupWebsocketConnectionType) (type_to_c), (const char*) (origin_to_c), (const char*) (protocol_to_c), (::GList*) (extensions_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_websocket_connection_close (SoupWebsocketConnection* self, gushort code, const char* data);
// void soup_websocket_connection_close (::SoupWebsocketConnection* self, gushort code, const char* data);
void base::WebsocketConnectionBase::close (gushort code, const std::string & data) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, gushort code, const char* data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_close;
  auto data_to_c = gi::unwrap (data, gi::transfer_none, gi::direction_in);
  auto code_to_c = code;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (gushort) (code_to_c), (const char*) (data_to_c));
}
void base::WebsocketConnectionBase::close (gushort code) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, gushort code, const char* data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_close;
  auto data_to_c = nullptr;
  auto code_to_c = code;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (gushort) (code_to_c), (const char*) (data_to_c));
}

// gushort soup_websocket_connection_get_close_code (SoupWebsocketConnection* self);
// gushort soup_websocket_connection_get_close_code (::SoupWebsocketConnection* self);
gushort base::WebsocketConnectionBase::get_close_code () noexcept
{
  typedef gushort (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_close_code;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return _temp_ret;
}

// const char* soup_websocket_connection_get_close_data (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_close_data (::SoupWebsocketConnection* self);
std::string base::WebsocketConnectionBase::get_close_data () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_close_data;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupWebsocketConnectionType soup_websocket_connection_get_connection_type (SoupWebsocketConnection* self);
// ::SoupWebsocketConnectionType soup_websocket_connection_get_connection_type (::SoupWebsocketConnection* self);
Soup::WebsocketConnectionType base::WebsocketConnectionBase::get_connection_type () noexcept
{
  typedef ::SoupWebsocketConnectionType (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_connection_type;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GList* soup_websocket_connection_get_extensions (SoupWebsocketConnection* self);
// ::GList* soup_websocket_connection_get_extensions (::SoupWebsocketConnection* self);
std::vector<Soup::WebsocketExtension> base::WebsocketConnectionBase::get_extensions () noexcept
{
  typedef ::GList* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_extensions;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::detail::wrap_list<Soup::WebsocketExtension> (_temp_ret, gi::transfer_none);
}

// GIOStream* soup_websocket_connection_get_io_stream (SoupWebsocketConnection* self);
// ::GIOStream* soup_websocket_connection_get_io_stream (::SoupWebsocketConnection* self);
Gio::IOStream base::WebsocketConnectionBase::get_io_stream () noexcept
{
  typedef ::GIOStream* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_io_stream;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// guint soup_websocket_connection_get_keepalive_interval (SoupWebsocketConnection* self);
// guint soup_websocket_connection_get_keepalive_interval (::SoupWebsocketConnection* self);
guint base::WebsocketConnectionBase::get_keepalive_interval () noexcept
{
  typedef guint (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_keepalive_interval;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return _temp_ret;
}

// guint64 soup_websocket_connection_get_max_incoming_payload_size (SoupWebsocketConnection* self);
// guint64 soup_websocket_connection_get_max_incoming_payload_size (::SoupWebsocketConnection* self);
guint64 base::WebsocketConnectionBase::get_max_incoming_payload_size () noexcept
{
  typedef guint64 (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_max_incoming_payload_size;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return _temp_ret;
}

// const char* soup_websocket_connection_get_origin (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_origin (::SoupWebsocketConnection* self);
std::string base::WebsocketConnectionBase::get_origin () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_origin;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_websocket_connection_get_protocol (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_protocol (::SoupWebsocketConnection* self);
std::string base::WebsocketConnectionBase::get_protocol () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_protocol;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// SoupWebsocketState soup_websocket_connection_get_state (SoupWebsocketConnection* self);
// ::SoupWebsocketState soup_websocket_connection_get_state (::SoupWebsocketConnection* self);
Soup::WebsocketState base::WebsocketConnectionBase::get_state () noexcept
{
  typedef ::SoupWebsocketState (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_state;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// SoupURI* soup_websocket_connection_get_uri (SoupWebsocketConnection* self);
// ::SoupURI* soup_websocket_connection_get_uri (::SoupWebsocketConnection* self);
Soup::URI base::WebsocketConnectionBase::get_uri () noexcept
{
  typedef ::SoupURI* (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_get_uri;
  auto _temp_ret = call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_websocket_connection_send_binary (SoupWebsocketConnection* self, gconstpointer data, gsize length);
// void soup_websocket_connection_send_binary (::SoupWebsocketConnection* self, const guint8* data, gsize length);
void base::WebsocketConnectionBase::send_binary (guint8 * data, gsize length) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, const guint8* data, gsize length);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_send_binary;
  auto data_i = detail::make_list_unwrap_range (data, length, false);
  auto data_w = unwrap (data_i, gi::transfer_none, direction_in);
  auto data_to_c = data_w.gobj_(false);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (const guint8*) (data_to_c), (gsize) (data_w.size()));
}

// void soup_websocket_connection_send_message (SoupWebsocketConnection* self, SoupWebsocketDataType type, GBytes* message);
// void soup_websocket_connection_send_message (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
void base::WebsocketConnectionBase::send_message (Soup::WebsocketDataType type, GLib::Bytes message) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_send_message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (::SoupWebsocketDataType) (type_to_c), (::GBytes*) (message_to_c));
}

// void soup_websocket_connection_send_text (SoupWebsocketConnection* self, const char* text);
// void soup_websocket_connection_send_text (::SoupWebsocketConnection* self, const char* text);
void base::WebsocketConnectionBase::send_text (const std::string & text) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_send_text;
  auto text_to_c = gi::unwrap (text, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (const char*) (text_to_c));
}

// void soup_websocket_connection_set_keepalive_interval (SoupWebsocketConnection* self, guint interval);
// void soup_websocket_connection_set_keepalive_interval (::SoupWebsocketConnection* self, guint interval);
void base::WebsocketConnectionBase::set_keepalive_interval (guint interval) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, guint interval);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_set_keepalive_interval;
  auto interval_to_c = interval;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (guint) (interval_to_c));
}

// void soup_websocket_connection_set_max_incoming_payload_size (SoupWebsocketConnection* self, guint64 max_incoming_payload_size);
// void soup_websocket_connection_set_max_incoming_payload_size (::SoupWebsocketConnection* self, guint64 max_incoming_payload_size);
void base::WebsocketConnectionBase::set_max_incoming_payload_size (guint64 max_incoming_payload_size) noexcept
{
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, guint64 max_incoming_payload_size);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_websocket_connection_set_max_incoming_payload_size;
  auto max_incoming_payload_size_to_c = max_incoming_payload_size;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (guint64) (max_incoming_payload_size_to_c));
}







} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketconnection_extra_def_impl.hpp>)
#include <soup/websocketconnection_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketconnection_extra_impl.hpp>)
#include <soup/websocketconnection_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void WebsocketConnectionClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupWebsocketConnectionClass *methods = (::SoupWebsocketConnectionClass *) class_struct;
  (void) methods;

  methods->closed = (decltype (methods->closed)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::closed_>;
  methods->closing = (decltype (methods->closing)) detail::method_wrapper<self, void (*) (), gi::transfer_full_t>::wrapper<&self::closing_>;
  methods->error = (decltype (methods->error)) detail::method_wrapper<self, void (*) (GLib::Error error), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::error_>;
  methods->message = (decltype (methods->message)) detail::method_wrapper<self, void (*) (Soup::WebsocketDataType type, GLib::Bytes message), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::message_>;
  methods->pong = (decltype (methods->pong)) detail::method_wrapper<self, void (*) (GLib::Bytes message), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::pong_>;
}

// void WebsocketConnection::closed (SoupWebsocketConnection* self);
// void WebsocketConnection::closed (::SoupWebsocketConnection* self);
void WebsocketConnectionClass::closed_ () noexcept
{
  if (!get_struct_()->closed) return ;
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closed;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
}

// void WebsocketConnection::closing (SoupWebsocketConnection* self);
// void WebsocketConnection::closing (::SoupWebsocketConnection* self);
void WebsocketConnectionClass::closing_ () noexcept
{
  if (!get_struct_()->closing) return ;
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->closing;
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()));
}

// void WebsocketConnection::error (SoupWebsocketConnection* self, GError* error);
// void WebsocketConnection::error (::SoupWebsocketConnection* self, ::GError* error);
void WebsocketConnectionClass::error_ (GLib::Error error) noexcept
{
  if (!get_struct_()->error) return ;
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, ::GError* error);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->error;
  auto error_to_c = gi::unwrap (error, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (::GError*) (error_to_c));
}

// void WebsocketConnection::message (SoupWebsocketConnection* self, SoupWebsocketDataType type, GBytes* message);
// void WebsocketConnection::message (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
void WebsocketConnectionClass::message_ (Soup::WebsocketDataType type, GLib::Bytes message) noexcept
{
  if (!get_struct_()->message) return ;
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->message;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  auto type_to_c = gi::unwrap (type);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (::SoupWebsocketDataType) (type_to_c), (::GBytes*) (message_to_c));
}

// void WebsocketConnection::pong (SoupWebsocketConnection* self, GBytes* message);
// void WebsocketConnection::pong (::SoupWebsocketConnection* self, ::GBytes* message);
void WebsocketConnectionClass::pong_ (GLib::Bytes message) noexcept
{
  if (!get_struct_()->pong) return ;
  typedef void (*call_wrap_t) (::SoupWebsocketConnection* self, ::GBytes* message);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->pong;
  auto message_to_c = gi::unwrap (message, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupWebsocketConnection*) (gobj_()), (::GBytes*) (message_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
