// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETCONNECTION_HPP_
#define _GI_SOUP_WEBSOCKETCONNECTION_HPP_


namespace gi {

namespace repository {

namespace Soup {

class URI;
class WebsocketExtension;

class WebsocketConnection;

namespace base {


#define GI_SOUP_WEBSOCKETCONNECTION_BASE base::WebsocketConnectionBase
class WebsocketConnectionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupWebsocketConnection BaseObjectType;

WebsocketConnectionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_websocket_connection_get_type(); } 

// SoupWebsocketConnection* soup_websocket_connection_new (GIOStream* stream, SoupURI* uri, SoupWebsocketConnectionType type, const char* origin, const char* protocol);
// ::SoupWebsocketConnection* soup_websocket_connection_new (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol);
static GI_INLINE_DECL Soup::WebsocketConnection new_ (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::string & origin, const std::string & protocol) noexcept;
static GI_INLINE_DECL Soup::WebsocketConnection new_ (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type) noexcept;

// SoupWebsocketConnection* soup_websocket_connection_new_with_extensions (GIOStream* stream, SoupURI* uri, SoupWebsocketConnectionType type, const char* origin, const char* protocol, GList* extensions);
// ::SoupWebsocketConnection* soup_websocket_connection_new_with_extensions (::GIOStream* stream, ::SoupURI* uri, ::SoupWebsocketConnectionType type, const char* origin, const char* protocol, ::GList* extensions);
static GI_INLINE_DECL Soup::WebsocketConnection new_with_extensions (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::string & origin, const std::string & protocol, const std::vector<Soup::WebsocketExtension> & extensions) noexcept;
static GI_INLINE_DECL Soup::WebsocketConnection new_with_extensions (Gio::IOStream stream, Soup::URI uri, Soup::WebsocketConnectionType type, const std::vector<Soup::WebsocketExtension> & extensions) noexcept;

// void soup_websocket_connection_close (SoupWebsocketConnection* self, gushort code, const char* data);
// void soup_websocket_connection_close (::SoupWebsocketConnection* self, gushort code, const char* data);
GI_INLINE_DECL void close (gushort code, const std::string & data) noexcept;
GI_INLINE_DECL void close (gushort code) noexcept;

// gushort soup_websocket_connection_get_close_code (SoupWebsocketConnection* self);
// gushort soup_websocket_connection_get_close_code (::SoupWebsocketConnection* self);
GI_INLINE_DECL gushort get_close_code () noexcept;

// const char* soup_websocket_connection_get_close_data (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_close_data (::SoupWebsocketConnection* self);
GI_INLINE_DECL std::string get_close_data () noexcept;

// SoupWebsocketConnectionType soup_websocket_connection_get_connection_type (SoupWebsocketConnection* self);
// ::SoupWebsocketConnectionType soup_websocket_connection_get_connection_type (::SoupWebsocketConnection* self);
GI_INLINE_DECL Soup::WebsocketConnectionType get_connection_type () noexcept;

// GList* soup_websocket_connection_get_extensions (SoupWebsocketConnection* self);
// ::GList* soup_websocket_connection_get_extensions (::SoupWebsocketConnection* self);
GI_INLINE_DECL std::vector<Soup::WebsocketExtension> get_extensions () noexcept;

// GIOStream* soup_websocket_connection_get_io_stream (SoupWebsocketConnection* self);
// ::GIOStream* soup_websocket_connection_get_io_stream (::SoupWebsocketConnection* self);
GI_INLINE_DECL Gio::IOStream get_io_stream () noexcept;

// guint soup_websocket_connection_get_keepalive_interval (SoupWebsocketConnection* self);
// guint soup_websocket_connection_get_keepalive_interval (::SoupWebsocketConnection* self);
GI_INLINE_DECL guint get_keepalive_interval () noexcept;

// guint64 soup_websocket_connection_get_max_incoming_payload_size (SoupWebsocketConnection* self);
// guint64 soup_websocket_connection_get_max_incoming_payload_size (::SoupWebsocketConnection* self);
GI_INLINE_DECL guint64 get_max_incoming_payload_size () noexcept;

// const char* soup_websocket_connection_get_origin (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_origin (::SoupWebsocketConnection* self);
GI_INLINE_DECL std::string get_origin () noexcept;

// const char* soup_websocket_connection_get_protocol (SoupWebsocketConnection* self);
// const char* soup_websocket_connection_get_protocol (::SoupWebsocketConnection* self);
GI_INLINE_DECL std::string get_protocol () noexcept;

// SoupWebsocketState soup_websocket_connection_get_state (SoupWebsocketConnection* self);
// ::SoupWebsocketState soup_websocket_connection_get_state (::SoupWebsocketConnection* self);
GI_INLINE_DECL Soup::WebsocketState get_state () noexcept;

// SoupURI* soup_websocket_connection_get_uri (SoupWebsocketConnection* self);
// ::SoupURI* soup_websocket_connection_get_uri (::SoupWebsocketConnection* self);
GI_INLINE_DECL Soup::URI get_uri () noexcept;

// void soup_websocket_connection_send_binary (SoupWebsocketConnection* self, gconstpointer data, gsize length);
// void soup_websocket_connection_send_binary (::SoupWebsocketConnection* self, const guint8* data, gsize length);
GI_INLINE_DECL void send_binary (guint8 * data, gsize length) noexcept;

// void soup_websocket_connection_send_message (SoupWebsocketConnection* self, SoupWebsocketDataType type, GBytes* message);
// void soup_websocket_connection_send_message (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
GI_INLINE_DECL void send_message (Soup::WebsocketDataType type, GLib::Bytes message) noexcept;

// void soup_websocket_connection_send_text (SoupWebsocketConnection* self, const char* text);
// void soup_websocket_connection_send_text (::SoupWebsocketConnection* self, const char* text);
GI_INLINE_DECL void send_text (const std::string & text) noexcept;

// void soup_websocket_connection_set_keepalive_interval (SoupWebsocketConnection* self, guint interval);
// void soup_websocket_connection_set_keepalive_interval (::SoupWebsocketConnection* self, guint interval);
GI_INLINE_DECL void set_keepalive_interval (guint interval) noexcept;

// void soup_websocket_connection_set_max_incoming_payload_size (SoupWebsocketConnection* self, guint64 max_incoming_payload_size);
// void soup_websocket_connection_set_max_incoming_payload_size (::SoupWebsocketConnection* self, guint64 max_incoming_payload_size);
GI_INLINE_DECL void set_max_incoming_payload_size (guint64 max_incoming_payload_size) noexcept;

gi::property_proxy<Soup::WebsocketConnectionType, base::WebsocketConnectionBase> property_connection_type()
{ return gi::property_proxy<Soup::WebsocketConnectionType, base::WebsocketConnectionBase> (*this, "connection-type"); }
const gi::property_proxy<Soup::WebsocketConnectionType, base::WebsocketConnectionBase> property_connection_type() const
{ return gi::property_proxy<Soup::WebsocketConnectionType, base::WebsocketConnectionBase> (*this, "connection-type"); }

gi::property_proxy<gpointer, base::WebsocketConnectionBase> property_extensions()
{ return gi::property_proxy<gpointer, base::WebsocketConnectionBase> (*this, "extensions"); }
const gi::property_proxy<gpointer, base::WebsocketConnectionBase> property_extensions() const
{ return gi::property_proxy<gpointer, base::WebsocketConnectionBase> (*this, "extensions"); }

gi::property_proxy<Gio::IOStream, base::WebsocketConnectionBase> property_io_stream()
{ return gi::property_proxy<Gio::IOStream, base::WebsocketConnectionBase> (*this, "io-stream"); }
const gi::property_proxy<Gio::IOStream, base::WebsocketConnectionBase> property_io_stream() const
{ return gi::property_proxy<Gio::IOStream, base::WebsocketConnectionBase> (*this, "io-stream"); }

gi::property_proxy<guint, base::WebsocketConnectionBase> property_keepalive_interval()
{ return gi::property_proxy<guint, base::WebsocketConnectionBase> (*this, "keepalive-interval"); }
const gi::property_proxy<guint, base::WebsocketConnectionBase> property_keepalive_interval() const
{ return gi::property_proxy<guint, base::WebsocketConnectionBase> (*this, "keepalive-interval"); }

gi::property_proxy<guint64, base::WebsocketConnectionBase> property_max_incoming_payload_size()
{ return gi::property_proxy<guint64, base::WebsocketConnectionBase> (*this, "max-incoming-payload-size"); }
const gi::property_proxy<guint64, base::WebsocketConnectionBase> property_max_incoming_payload_size() const
{ return gi::property_proxy<guint64, base::WebsocketConnectionBase> (*this, "max-incoming-payload-size"); }

gi::property_proxy<std::string, base::WebsocketConnectionBase> property_origin()
{ return gi::property_proxy<std::string, base::WebsocketConnectionBase> (*this, "origin"); }
const gi::property_proxy<std::string, base::WebsocketConnectionBase> property_origin() const
{ return gi::property_proxy<std::string, base::WebsocketConnectionBase> (*this, "origin"); }

gi::property_proxy<std::string, base::WebsocketConnectionBase> property_protocol()
{ return gi::property_proxy<std::string, base::WebsocketConnectionBase> (*this, "protocol"); }
const gi::property_proxy<std::string, base::WebsocketConnectionBase> property_protocol() const
{ return gi::property_proxy<std::string, base::WebsocketConnectionBase> (*this, "protocol"); }

gi::property_proxy<Soup::WebsocketState, base::WebsocketConnectionBase> property_state()
{ return gi::property_proxy<Soup::WebsocketState, base::WebsocketConnectionBase> (*this, "state"); }
const gi::property_proxy<Soup::WebsocketState, base::WebsocketConnectionBase> property_state() const
{ return gi::property_proxy<Soup::WebsocketState, base::WebsocketConnectionBase> (*this, "state"); }

gi::property_proxy<Soup::URI, base::WebsocketConnectionBase> property_uri()
{ return gi::property_proxy<Soup::URI, base::WebsocketConnectionBase> (*this, "uri"); }
const gi::property_proxy<Soup::URI, base::WebsocketConnectionBase> property_uri() const
{ return gi::property_proxy<Soup::URI, base::WebsocketConnectionBase> (*this, "uri"); }

// signal closed
gi::signal_proxy<void(Soup::WebsocketConnection)> signal_closed()
{ return gi::signal_proxy<void(Soup::WebsocketConnection)> (*this, "closed"); }

// signal closing
gi::signal_proxy<void(Soup::WebsocketConnection)> signal_closing()
{ return gi::signal_proxy<void(Soup::WebsocketConnection)> (*this, "closing"); }

// signal error
gi::signal_proxy<void(Soup::WebsocketConnection, GLib::Error error)> signal_error()
{ return gi::signal_proxy<void(Soup::WebsocketConnection, GLib::Error error)> (*this, "error"); }

// signal message
gi::signal_proxy<void(Soup::WebsocketConnection, gint type, GLib::Bytes message)> signal_message()
{ return gi::signal_proxy<void(Soup::WebsocketConnection, gint type, GLib::Bytes message)> (*this, "message"); }

// signal pong
gi::signal_proxy<void(Soup::WebsocketConnection, GLib::Bytes message)> signal_pong()
{ return gi::signal_proxy<void(Soup::WebsocketConnection, GLib::Bytes message)> (*this, "pong"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketconnection_extra_def.hpp>)
#include <soup/websocketconnection_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketconnection_extra.hpp>)
#include <soup/websocketconnection_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class WebsocketConnection : public GI_SOUP_WEBSOCKETCONNECTION_BASE
{ typedef GI_SOUP_WEBSOCKETCONNECTION_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupWebsocketConnection>
{ typedef Soup::WebsocketConnection type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class WebsocketConnectionClassDef
{
typedef WebsocketConnectionClassDef self;
public:
typedef Soup::WebsocketConnection instance_type;
typedef ::SoupWebsocketConnectionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void WebsocketConnection::closed (SoupWebsocketConnection* self);
// void WebsocketConnection::closed (::SoupWebsocketConnection* self);
virtual void closed_ () noexcept = 0;

// void WebsocketConnection::closing (SoupWebsocketConnection* self);
// void WebsocketConnection::closing (::SoupWebsocketConnection* self);
virtual void closing_ () noexcept = 0;

// void WebsocketConnection::error (SoupWebsocketConnection* self, GError* error);
// void WebsocketConnection::error (::SoupWebsocketConnection* self, ::GError* error);
virtual void error_ (GLib::Error error) noexcept = 0;

// void WebsocketConnection::message (SoupWebsocketConnection* self, SoupWebsocketDataType type, GBytes* message);
// void WebsocketConnection::message (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
virtual void message_ (Soup::WebsocketDataType type, GLib::Bytes message) noexcept = 0;

// void WebsocketConnection::pong (SoupWebsocketConnection* self, GBytes* message);
// void WebsocketConnection::pong (::SoupWebsocketConnection* self, ::GBytes* message);
virtual void pong_ (GLib::Bytes message) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class WebsocketConnectionClass: public detail::ClassTemplate<Soup::impl::internal::WebsocketConnectionClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebsocketConnectionClass self;
typedef detail::ClassTemplate<Soup::impl::internal::WebsocketConnectionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void WebsocketConnection::closed (SoupWebsocketConnection* self);
// void WebsocketConnection::closed (::SoupWebsocketConnection* self);
GI_INLINE_DECL void closed_ () noexcept override;

// void WebsocketConnection::closing (SoupWebsocketConnection* self);
// void WebsocketConnection::closing (::SoupWebsocketConnection* self);
GI_INLINE_DECL void closing_ () noexcept override;

// void WebsocketConnection::error (SoupWebsocketConnection* self, GError* error);
// void WebsocketConnection::error (::SoupWebsocketConnection* self, ::GError* error);
GI_INLINE_DECL void error_ (GLib::Error error) noexcept override;

// void WebsocketConnection::message (SoupWebsocketConnection* self, SoupWebsocketDataType type, GBytes* message);
// void WebsocketConnection::message (::SoupWebsocketConnection* self, ::SoupWebsocketDataType type, ::GBytes* message);
GI_INLINE_DECL void message_ (Soup::WebsocketDataType type, GLib::Bytes message) noexcept override;

// void WebsocketConnection::pong (SoupWebsocketConnection* self, GBytes* message);
// void WebsocketConnection::pong (::SoupWebsocketConnection* self, ::GBytes* message);
GI_INLINE_DECL void pong_ (GLib::Bytes message) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using WebsocketConnectionImpl = detail::ObjectImpl<WebsocketConnection, internal::WebsocketConnectionClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
