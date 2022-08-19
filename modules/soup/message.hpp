// AUTO-GENERATED

#ifndef _GI_SOUP_MESSAGE_HPP_
#define _GI_SOUP_MESSAGE_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Address;
class Buffer;
class MessageBody;
class MessageHeaders;
class Request;
class URI;

class Message;

namespace base {


#define GI_SOUP_MESSAGE_BASE base::MessageBase
class MessageBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupMessage BaseObjectType;

MessageBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_message_get_type(); } 

// SoupMessage* soup_message_new (const char* method, const char* uri_string);
// ::SoupMessage* soup_message_new (const char* method, const char* uri_string);
static GI_INLINE_DECL Soup::Message new_ (const std::string & method, const std::string & uri_string) noexcept;

// SoupMessage* soup_message_new_from_uri (const char* method, SoupURI* uri);
// ::SoupMessage* soup_message_new_from_uri (const char* method, ::SoupURI* uri);
static GI_INLINE_DECL Soup::Message new_from_uri (const std::string & method, Soup::URI uri) noexcept;

// guint soup_message_add_header_handler (SoupMessage* msg, const char* signal, const char* header, GCallback callback, gpointer user_data);
// guint soup_message_add_header_handler (::SoupMessage* msg, const char* signal, const char* header,  callback, void* user_data);
// IGNORE; not introspectable, callback type  not supported

// guint soup_message_add_status_code_handler (SoupMessage* msg, const char* signal, guint status_code, GCallback callback, gpointer user_data);
// guint soup_message_add_status_code_handler (::SoupMessage* msg, const char* signal, guint status_code,  callback, void* user_data);
// IGNORE; not introspectable, callback type  not supported

// void soup_message_content_sniffed (SoupMessage* msg, const char* content_type, GHashTable* params);
// void soup_message_content_sniffed (::SoupMessage* msg, const char* content_type, ::GHashTable* params);
GI_INLINE_DECL void content_sniffed (const std::string & content_type, const std::map<gpointer, gpointer> & params) noexcept;

// void soup_message_disable_feature (SoupMessage* msg, GType feature_type);
// void soup_message_disable_feature (::SoupMessage* msg, GType feature_type);
GI_INLINE_DECL void disable_feature (GType feature_type) noexcept;

// void soup_message_finished (SoupMessage* msg);
// void soup_message_finished (::SoupMessage* msg);
GI_INLINE_DECL void finished () noexcept;

// SoupAddress* soup_message_get_address (SoupMessage* msg);
// ::SoupAddress* soup_message_get_address (::SoupMessage* msg);
GI_INLINE_DECL Soup::Address get_address () noexcept;

// SoupURI* soup_message_get_first_party (SoupMessage* msg);
// ::SoupURI* soup_message_get_first_party (::SoupMessage* msg);
GI_INLINE_DECL Soup::URI get_first_party () noexcept;

// SoupMessageFlags soup_message_get_flags (SoupMessage* msg);
// ::SoupMessageFlags soup_message_get_flags (::SoupMessage* msg);
GI_INLINE_DECL Soup::MessageFlags get_flags () noexcept;

// SoupHTTPVersion soup_message_get_http_version (SoupMessage* msg);
// ::SoupHTTPVersion soup_message_get_http_version (::SoupMessage* msg);
GI_INLINE_DECL Soup::HTTPVersion get_http_version () noexcept;

// gboolean soup_message_get_https_status (SoupMessage* msg, GTlsCertificate** certificate, GTlsCertificateFlags* errors);
// gboolean soup_message_get_https_status (::SoupMessage* msg, ::GTlsCertificate** certificate, ::GTlsCertificateFlags* errors);
GI_INLINE_DECL bool get_https_status (Gio::TlsCertificate & certificate, Gio::TlsCertificateFlags & errors) noexcept;
GI_INLINE_DECL std::tuple<bool, Gio::TlsCertificate, Gio::TlsCertificateFlags> get_https_status () noexcept;

// gboolean soup_message_get_is_top_level_navigation (SoupMessage* msg);
// gboolean soup_message_get_is_top_level_navigation (::SoupMessage* msg);
GI_INLINE_DECL bool get_is_top_level_navigation () noexcept;

// SoupMessagePriority soup_message_get_priority (SoupMessage* msg);
// ::SoupMessagePriority soup_message_get_priority (::SoupMessage* msg);
GI_INLINE_DECL Soup::MessagePriority get_priority () noexcept;

// SoupURI* soup_message_get_site_for_cookies (SoupMessage* msg);
// ::SoupURI* soup_message_get_site_for_cookies (::SoupMessage* msg);
GI_INLINE_DECL Soup::URI get_site_for_cookies () noexcept;

// SoupRequest* soup_message_get_soup_request (SoupMessage* msg);
// ::SoupRequest* soup_message_get_soup_request (::SoupMessage* msg);
GI_INLINE_DECL Soup::Request get_soup_request () noexcept;

// SoupURI* soup_message_get_uri (SoupMessage* msg);
// ::SoupURI* soup_message_get_uri (::SoupMessage* msg);
GI_INLINE_DECL Soup::URI get_uri () noexcept;

// void soup_message_got_body (SoupMessage* msg);
// void soup_message_got_body (::SoupMessage* msg);
GI_INLINE_DECL void got_body () noexcept;

// void soup_message_got_chunk (SoupMessage* msg, SoupBuffer* chunk);
// void soup_message_got_chunk (::SoupMessage* msg, ::SoupBuffer* chunk);
GI_INLINE_DECL void got_chunk (Soup::Buffer chunk) noexcept;

// void soup_message_got_headers (SoupMessage* msg);
// void soup_message_got_headers (::SoupMessage* msg);
GI_INLINE_DECL void got_headers () noexcept;

// void soup_message_got_informational (SoupMessage* msg);
// void soup_message_got_informational (::SoupMessage* msg);
GI_INLINE_DECL void got_informational () noexcept;

// gboolean soup_message_is_feature_disabled (SoupMessage* msg, GType feature_type);
// gboolean soup_message_is_feature_disabled (::SoupMessage* msg, GType feature_type);
GI_INLINE_DECL bool is_feature_disabled (GType feature_type) noexcept;

// gboolean soup_message_is_keepalive (SoupMessage* msg);
// gboolean soup_message_is_keepalive (::SoupMessage* msg);
GI_INLINE_DECL bool is_keepalive () noexcept;

// void soup_message_restarted (SoupMessage* msg);
// void soup_message_restarted (::SoupMessage* msg);
GI_INLINE_DECL void restarted () noexcept;

// void soup_message_set_chunk_allocator (SoupMessage* msg, SoupChunkAllocator allocator, gpointer user_data, GDestroyNotify destroy_notify);
// void soup_message_set_chunk_allocator (::SoupMessage* msg,  allocator, void* user_data, GLib::DestroyNotify::cfunction_type destroy_notify);
// IGNORE; deprecated

// void soup_message_set_first_party (SoupMessage* msg, SoupURI* first_party);
// void soup_message_set_first_party (::SoupMessage* msg, ::SoupURI* first_party);
GI_INLINE_DECL void set_first_party (Soup::URI first_party) noexcept;

// void soup_message_set_flags (SoupMessage* msg, SoupMessageFlags flags);
// void soup_message_set_flags (::SoupMessage* msg, ::SoupMessageFlags flags);
GI_INLINE_DECL void set_flags (Soup::MessageFlags flags) noexcept;

// void soup_message_set_http_version (SoupMessage* msg, SoupHTTPVersion version);
// void soup_message_set_http_version (::SoupMessage* msg, ::SoupHTTPVersion version);
GI_INLINE_DECL void set_http_version (Soup::HTTPVersion version) noexcept;

// void soup_message_set_is_top_level_navigation (SoupMessage* msg, gboolean is_top_level_navigation);
// void soup_message_set_is_top_level_navigation (::SoupMessage* msg, gboolean is_top_level_navigation);
GI_INLINE_DECL void set_is_top_level_navigation (gboolean is_top_level_navigation) noexcept;

// void soup_message_set_priority (SoupMessage* msg, SoupMessagePriority priority);
// void soup_message_set_priority (::SoupMessage* msg, ::SoupMessagePriority priority);
GI_INLINE_DECL void set_priority (Soup::MessagePriority priority) noexcept;

// void soup_message_set_redirect (SoupMessage* msg, guint status_code, const char* redirect_uri);
// void soup_message_set_redirect (::SoupMessage* msg, guint status_code, const char* redirect_uri);
GI_INLINE_DECL void set_redirect (guint status_code, const std::string & redirect_uri) noexcept;

// void soup_message_set_request (SoupMessage* msg, const char* content_type, SoupMemoryUse req_use, const char* req_body, gsize req_length);
// void soup_message_set_request (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse req_use, const guint8* req_body, gsize req_length);
GI_INLINE_DECL void set_request (const std::string & content_type, Soup::MemoryUse req_use, guint8 * req_body, gsize req_length) noexcept;
GI_INLINE_DECL void set_request (Soup::MemoryUse req_use, guint8 * req_body, gsize req_length) noexcept;

// void soup_message_set_response (SoupMessage* msg, const char* content_type, SoupMemoryUse resp_use, const char* resp_body, gsize resp_length);
// void soup_message_set_response (::SoupMessage* msg, const char* content_type, ::SoupMemoryUse resp_use, const guint8* resp_body, gsize resp_length);
GI_INLINE_DECL void set_response (const std::string & content_type, Soup::MemoryUse resp_use, guint8 * resp_body, gsize resp_length) noexcept;
GI_INLINE_DECL void set_response (Soup::MemoryUse resp_use, guint8 * resp_body, gsize resp_length) noexcept;

// void soup_message_set_site_for_cookies (SoupMessage* msg, SoupURI* site_for_cookies);
// void soup_message_set_site_for_cookies (::SoupMessage* msg, ::SoupURI* site_for_cookies);
GI_INLINE_DECL void set_site_for_cookies (Soup::URI site_for_cookies) noexcept;
GI_INLINE_DECL void set_site_for_cookies () noexcept;

// void soup_message_set_status (SoupMessage* msg, guint status_code);
// void soup_message_set_status (::SoupMessage* msg, guint status_code);
GI_INLINE_DECL void set_status (guint status_code) noexcept;

// void soup_message_set_status_full (SoupMessage* msg, guint status_code, const char* reason_phrase);
// void soup_message_set_status_full (::SoupMessage* msg, guint status_code, const char* reason_phrase);
GI_INLINE_DECL void set_status_full (guint status_code, const std::string & reason_phrase) noexcept;

// void soup_message_set_uri (SoupMessage* msg, SoupURI* uri);
// void soup_message_set_uri (::SoupMessage* msg, ::SoupURI* uri);
GI_INLINE_DECL void set_uri (Soup::URI uri) noexcept;

// void soup_message_starting (SoupMessage* msg);
// void soup_message_starting (::SoupMessage* msg);
GI_INLINE_DECL void starting () noexcept;

// void soup_message_wrote_body (SoupMessage* msg);
// void soup_message_wrote_body (::SoupMessage* msg);
GI_INLINE_DECL void wrote_body () noexcept;

// void soup_message_wrote_body_data (SoupMessage* msg, SoupBuffer* chunk);
// void soup_message_wrote_body_data (::SoupMessage* msg, ::SoupBuffer* chunk);
GI_INLINE_DECL void wrote_body_data (Soup::Buffer chunk) noexcept;

// void soup_message_wrote_chunk (SoupMessage* msg);
// void soup_message_wrote_chunk (::SoupMessage* msg);
GI_INLINE_DECL void wrote_chunk () noexcept;

// void soup_message_wrote_headers (SoupMessage* msg);
// void soup_message_wrote_headers (::SoupMessage* msg);
GI_INLINE_DECL void wrote_headers () noexcept;

// void soup_message_wrote_informational (SoupMessage* msg);
// void soup_message_wrote_informational (::SoupMessage* msg);
GI_INLINE_DECL void wrote_informational () noexcept;

gi::property_proxy<Soup::URI, base::MessageBase> property_first_party()
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "first-party"); }
const gi::property_proxy<Soup::URI, base::MessageBase> property_first_party() const
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "first-party"); }

gi::property_proxy<Soup::MessageFlags, base::MessageBase> property_flags()
{ return gi::property_proxy<Soup::MessageFlags, base::MessageBase> (*this, "flags"); }
const gi::property_proxy<Soup::MessageFlags, base::MessageBase> property_flags() const
{ return gi::property_proxy<Soup::MessageFlags, base::MessageBase> (*this, "flags"); }

gi::property_proxy<Soup::HTTPVersion, base::MessageBase> property_http_version()
{ return gi::property_proxy<Soup::HTTPVersion, base::MessageBase> (*this, "http-version"); }
const gi::property_proxy<Soup::HTTPVersion, base::MessageBase> property_http_version() const
{ return gi::property_proxy<Soup::HTTPVersion, base::MessageBase> (*this, "http-version"); }

gi::property_proxy<bool, base::MessageBase> property_is_top_level_navigation()
{ return gi::property_proxy<bool, base::MessageBase> (*this, "is-top-level-navigation"); }
const gi::property_proxy<bool, base::MessageBase> property_is_top_level_navigation() const
{ return gi::property_proxy<bool, base::MessageBase> (*this, "is-top-level-navigation"); }

gi::property_proxy<std::string, base::MessageBase> property_method()
{ return gi::property_proxy<std::string, base::MessageBase> (*this, "method"); }
const gi::property_proxy<std::string, base::MessageBase> property_method() const
{ return gi::property_proxy<std::string, base::MessageBase> (*this, "method"); }

gi::property_proxy<Soup::MessagePriority, base::MessageBase> property_priority()
{ return gi::property_proxy<Soup::MessagePriority, base::MessageBase> (*this, "priority"); }
const gi::property_proxy<Soup::MessagePriority, base::MessageBase> property_priority() const
{ return gi::property_proxy<Soup::MessagePriority, base::MessageBase> (*this, "priority"); }

gi::property_proxy<std::string, base::MessageBase> property_reason_phrase()
{ return gi::property_proxy<std::string, base::MessageBase> (*this, "reason-phrase"); }
const gi::property_proxy<std::string, base::MessageBase> property_reason_phrase() const
{ return gi::property_proxy<std::string, base::MessageBase> (*this, "reason-phrase"); }

gi::property_proxy<Soup::MessageBody, base::MessageBase> property_request_body()
{ return gi::property_proxy<Soup::MessageBody, base::MessageBase> (*this, "request-body"); }
const gi::property_proxy<Soup::MessageBody, base::MessageBase> property_request_body() const
{ return gi::property_proxy<Soup::MessageBody, base::MessageBase> (*this, "request-body"); }

gi::property_proxy<GLib::Bytes, base::MessageBase> property_request_body_data()
{ return gi::property_proxy<GLib::Bytes, base::MessageBase> (*this, "request-body-data"); }
const gi::property_proxy<GLib::Bytes, base::MessageBase> property_request_body_data() const
{ return gi::property_proxy<GLib::Bytes, base::MessageBase> (*this, "request-body-data"); }

gi::property_proxy<Soup::MessageHeaders, base::MessageBase> property_request_headers()
{ return gi::property_proxy<Soup::MessageHeaders, base::MessageBase> (*this, "request-headers"); }
const gi::property_proxy<Soup::MessageHeaders, base::MessageBase> property_request_headers() const
{ return gi::property_proxy<Soup::MessageHeaders, base::MessageBase> (*this, "request-headers"); }

gi::property_proxy<Soup::MessageBody, base::MessageBase> property_response_body()
{ return gi::property_proxy<Soup::MessageBody, base::MessageBase> (*this, "response-body"); }
const gi::property_proxy<Soup::MessageBody, base::MessageBase> property_response_body() const
{ return gi::property_proxy<Soup::MessageBody, base::MessageBase> (*this, "response-body"); }

gi::property_proxy<GLib::Bytes, base::MessageBase> property_response_body_data()
{ return gi::property_proxy<GLib::Bytes, base::MessageBase> (*this, "response-body-data"); }
const gi::property_proxy<GLib::Bytes, base::MessageBase> property_response_body_data() const
{ return gi::property_proxy<GLib::Bytes, base::MessageBase> (*this, "response-body-data"); }

gi::property_proxy<Soup::MessageHeaders, base::MessageBase> property_response_headers()
{ return gi::property_proxy<Soup::MessageHeaders, base::MessageBase> (*this, "response-headers"); }
const gi::property_proxy<Soup::MessageHeaders, base::MessageBase> property_response_headers() const
{ return gi::property_proxy<Soup::MessageHeaders, base::MessageBase> (*this, "response-headers"); }

gi::property_proxy<bool, base::MessageBase> property_server_side()
{ return gi::property_proxy<bool, base::MessageBase> (*this, "server-side"); }
const gi::property_proxy<bool, base::MessageBase> property_server_side() const
{ return gi::property_proxy<bool, base::MessageBase> (*this, "server-side"); }

gi::property_proxy<Soup::URI, base::MessageBase> property_site_for_cookies()
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "site-for-cookies"); }
const gi::property_proxy<Soup::URI, base::MessageBase> property_site_for_cookies() const
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "site-for-cookies"); }

gi::property_proxy<guint, base::MessageBase> property_status_code()
{ return gi::property_proxy<guint, base::MessageBase> (*this, "status-code"); }
const gi::property_proxy<guint, base::MessageBase> property_status_code() const
{ return gi::property_proxy<guint, base::MessageBase> (*this, "status-code"); }

gi::property_proxy<Gio::TlsCertificate, base::MessageBase> property_tls_certificate()
{ return gi::property_proxy<Gio::TlsCertificate, base::MessageBase> (*this, "tls-certificate"); }
const gi::property_proxy<Gio::TlsCertificate, base::MessageBase> property_tls_certificate() const
{ return gi::property_proxy<Gio::TlsCertificate, base::MessageBase> (*this, "tls-certificate"); }

gi::property_proxy<Gio::TlsCertificateFlags, base::MessageBase> property_tls_errors()
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::MessageBase> (*this, "tls-errors"); }
const gi::property_proxy<Gio::TlsCertificateFlags, base::MessageBase> property_tls_errors() const
{ return gi::property_proxy<Gio::TlsCertificateFlags, base::MessageBase> (*this, "tls-errors"); }

gi::property_proxy<Soup::URI, base::MessageBase> property_uri()
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "uri"); }
const gi::property_proxy<Soup::URI, base::MessageBase> property_uri() const
{ return gi::property_proxy<Soup::URI, base::MessageBase> (*this, "uri"); }

// const char* Message::method (const ::SoupMessage* obj);
// const char* Message::method (const ::SoupMessage* obj);
GI_INLINE_DECL std::string method_ () const noexcept;

// guint Message::status_code (const ::SoupMessage* obj);
// guint Message::status_code (const ::SoupMessage* obj);
GI_INLINE_DECL guint status_code_ () const noexcept;

//  Message::status_code (::SoupMessage* obj, guint _value);
// void Message::status_code (::SoupMessage* obj, guint _value);
GI_INLINE_DECL void status_code_ (guint _value) noexcept;

// char* Message::reason_phrase (const ::SoupMessage* obj);
// char* Message::reason_phrase (const ::SoupMessage* obj);
GI_INLINE_DECL std::string reason_phrase_ () const noexcept;

// ::SoupMessageBody* Message::request_body (const ::SoupMessage* obj);
// ::SoupMessageBody* Message::request_body (const ::SoupMessage* obj);
GI_INLINE_DECL Soup::MessageBody request_body_ () const noexcept;

// ::SoupMessageHeaders* Message::request_headers (const ::SoupMessage* obj);
// ::SoupMessageHeaders* Message::request_headers (const ::SoupMessage* obj);
GI_INLINE_DECL Soup::MessageHeaders request_headers_ () const noexcept;

// ::SoupMessageBody* Message::response_body (const ::SoupMessage* obj);
// ::SoupMessageBody* Message::response_body (const ::SoupMessage* obj);
GI_INLINE_DECL Soup::MessageBody response_body_ () const noexcept;

// ::SoupMessageHeaders* Message::response_headers (const ::SoupMessage* obj);
// ::SoupMessageHeaders* Message::response_headers (const ::SoupMessage* obj);
GI_INLINE_DECL Soup::MessageHeaders response_headers_ () const noexcept;

// signal content-sniffed
// SKIP; glib:signal container parameter not supported

// signal finished
gi::signal_proxy<void(Soup::Message)> signal_finished()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "finished"); }

// signal got-body
gi::signal_proxy<void(Soup::Message)> signal_got_body()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "got-body"); }

// signal got-chunk
gi::signal_proxy<void(Soup::Message, Soup::Buffer chunk)> signal_got_chunk()
{ return gi::signal_proxy<void(Soup::Message, Soup::Buffer chunk)> (*this, "got-chunk"); }

// signal got-headers
gi::signal_proxy<void(Soup::Message)> signal_got_headers()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "got-headers"); }

// signal got-informational
gi::signal_proxy<void(Soup::Message)> signal_got_informational()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "got-informational"); }

// signal network-event
gi::signal_proxy<void(Soup::Message, Gio::SocketClientEvent event, Gio::IOStream connection)> signal_network_event()
{ return gi::signal_proxy<void(Soup::Message, Gio::SocketClientEvent event, Gio::IOStream connection)> (*this, "network-event"); }

// signal restarted
gi::signal_proxy<void(Soup::Message)> signal_restarted()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "restarted"); }

// signal starting
gi::signal_proxy<void(Soup::Message)> signal_starting()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "starting"); }

// signal wrote-body
gi::signal_proxy<void(Soup::Message)> signal_wrote_body()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "wrote-body"); }

// signal wrote-body-data
gi::signal_proxy<void(Soup::Message, Soup::Buffer chunk)> signal_wrote_body_data()
{ return gi::signal_proxy<void(Soup::Message, Soup::Buffer chunk)> (*this, "wrote-body-data"); }

// signal wrote-chunk
gi::signal_proxy<void(Soup::Message)> signal_wrote_chunk()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "wrote-chunk"); }

// signal wrote-headers
gi::signal_proxy<void(Soup::Message)> signal_wrote_headers()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "wrote-headers"); }

// signal wrote-informational
gi::signal_proxy<void(Soup::Message)> signal_wrote_informational()
{ return gi::signal_proxy<void(Soup::Message)> (*this, "wrote-informational"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/message_extra_def.hpp>)
#include <soup/message_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/message_extra.hpp>)
#include <soup/message_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Message : public GI_SOUP_MESSAGE_BASE
{ typedef GI_SOUP_MESSAGE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupMessage>
{ typedef Soup::Message type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class MessageClassDef
{
typedef MessageClassDef self;
public:
typedef Soup::Message instance_type;
typedef ::SoupMessageClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Message::finished (SoupMessage* msg);
// void Message::finished (::SoupMessage* msg);
virtual void finished_ () noexcept = 0;

// void Message::got_body (SoupMessage* msg);
// void Message::got_body (::SoupMessage* msg);
virtual void got_body_ () noexcept = 0;

// void Message::got_chunk (SoupMessage* msg, SoupBuffer* chunk);
// void Message::got_chunk (::SoupMessage* msg, ::SoupBuffer* chunk);
virtual void got_chunk_ (Soup::Buffer chunk) noexcept = 0;

// void Message::got_headers (SoupMessage* msg);
// void Message::got_headers (::SoupMessage* msg);
virtual void got_headers_ () noexcept = 0;

// void Message::got_informational (SoupMessage* msg);
// void Message::got_informational (::SoupMessage* msg);
virtual void got_informational_ () noexcept = 0;

// void Message::restarted (SoupMessage* msg);
// void Message::restarted (::SoupMessage* msg);
virtual void restarted_ () noexcept = 0;

// void Message::starting (SoupMessage* msg);
// void Message::starting (::SoupMessage* msg);
virtual void starting_ () noexcept = 0;

// void Message::wrote_body (SoupMessage* msg);
// void Message::wrote_body (::SoupMessage* msg);
virtual void wrote_body_ () noexcept = 0;

// void Message::wrote_chunk (SoupMessage* msg);
// void Message::wrote_chunk (::SoupMessage* msg);
virtual void wrote_chunk_ () noexcept = 0;

// void Message::wrote_headers (SoupMessage* msg);
// void Message::wrote_headers (::SoupMessage* msg);
virtual void wrote_headers_ () noexcept = 0;

// void Message::wrote_informational (SoupMessage* msg);
// void Message::wrote_informational (::SoupMessage* msg);
virtual void wrote_informational_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class MessageClass: public detail::ClassTemplate<Soup::impl::internal::MessageClassDef, GObject::impl::internal::ObjectClass>
{
typedef MessageClass self;
typedef detail::ClassTemplate<Soup::impl::internal::MessageClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Message::finished (SoupMessage* msg);
// void Message::finished (::SoupMessage* msg);
GI_INLINE_DECL void finished_ () noexcept override;

// void Message::got_body (SoupMessage* msg);
// void Message::got_body (::SoupMessage* msg);
GI_INLINE_DECL void got_body_ () noexcept override;

// void Message::got_chunk (SoupMessage* msg, SoupBuffer* chunk);
// void Message::got_chunk (::SoupMessage* msg, ::SoupBuffer* chunk);
GI_INLINE_DECL void got_chunk_ (Soup::Buffer chunk) noexcept override;

// void Message::got_headers (SoupMessage* msg);
// void Message::got_headers (::SoupMessage* msg);
GI_INLINE_DECL void got_headers_ () noexcept override;

// void Message::got_informational (SoupMessage* msg);
// void Message::got_informational (::SoupMessage* msg);
GI_INLINE_DECL void got_informational_ () noexcept override;

// void Message::restarted (SoupMessage* msg);
// void Message::restarted (::SoupMessage* msg);
GI_INLINE_DECL void restarted_ () noexcept override;

// void Message::starting (SoupMessage* msg);
// void Message::starting (::SoupMessage* msg);
GI_INLINE_DECL void starting_ () noexcept override;

// void Message::wrote_body (SoupMessage* msg);
// void Message::wrote_body (::SoupMessage* msg);
GI_INLINE_DECL void wrote_body_ () noexcept override;

// void Message::wrote_chunk (SoupMessage* msg);
// void Message::wrote_chunk (::SoupMessage* msg);
GI_INLINE_DECL void wrote_chunk_ () noexcept override;

// void Message::wrote_headers (SoupMessage* msg);
// void Message::wrote_headers (::SoupMessage* msg);
GI_INLINE_DECL void wrote_headers_ () noexcept override;

// void Message::wrote_informational (SoupMessage* msg);
// void Message::wrote_informational (::SoupMessage* msg);
GI_INLINE_DECL void wrote_informational_ () noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using MessageImpl = detail::ObjectImpl<Message, internal::MessageClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
