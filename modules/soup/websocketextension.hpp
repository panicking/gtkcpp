// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETEXTENSION_HPP_
#define _GI_SOUP_WEBSOCKETEXTENSION_HPP_


namespace gi {

namespace repository {

namespace Soup {


class WebsocketExtension;

namespace base {


#define GI_SOUP_WEBSOCKETEXTENSION_BASE base::WebsocketExtensionBase
class WebsocketExtensionBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupWebsocketExtension BaseObjectType;

WebsocketExtensionBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_websocket_extension_get_type(); } 

// gboolean soup_websocket_extension_configure (SoupWebsocketExtension* extension, SoupWebsocketConnectionType connection_type, GHashTable* params, GError ** error);
// gboolean soup_websocket_extension_configure (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
GI_INLINE_DECL bool configure (Soup::WebsocketConnectionType connection_type, const std::map<gpointer, gpointer> & params);
GI_INLINE_DECL bool configure (Soup::WebsocketConnectionType connection_type, const std::map<gpointer, gpointer> & params, GLib::Error * _error) noexcept;

// char* soup_websocket_extension_get_request_params (SoupWebsocketExtension* extension);
// char* soup_websocket_extension_get_request_params (::SoupWebsocketExtension* extension);
GI_INLINE_DECL std::string get_request_params () noexcept;

// char* soup_websocket_extension_get_response_params (SoupWebsocketExtension* extension);
// char* soup_websocket_extension_get_response_params (::SoupWebsocketExtension* extension);
GI_INLINE_DECL std::string get_response_params () noexcept;

// GBytes* soup_websocket_extension_process_incoming_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* soup_websocket_extension_process_incoming_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
GI_INLINE_DECL GLib::Bytes process_incoming_message (guint8 & header, GLib::Bytes payload);
GI_INLINE_DECL GLib::Bytes process_incoming_message (guint8 & header, GLib::Bytes payload, GLib::Error * _error) noexcept;

// GBytes* soup_websocket_extension_process_outgoing_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* soup_websocket_extension_process_outgoing_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
GI_INLINE_DECL GLib::Bytes process_outgoing_message (guint8 & header, GLib::Bytes payload);
GI_INLINE_DECL GLib::Bytes process_outgoing_message (guint8 & header, GLib::Bytes payload, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketextension_extra_def.hpp>)
#include <soup/websocketextension_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketextension_extra.hpp>)
#include <soup/websocketextension_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class WebsocketExtension : public GI_SOUP_WEBSOCKETEXTENSION_BASE
{ typedef GI_SOUP_WEBSOCKETEXTENSION_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupWebsocketExtension>
{ typedef Soup::WebsocketExtension type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class WebsocketExtensionClassDef
{
typedef WebsocketExtensionClassDef self;
public:
typedef Soup::WebsocketExtension instance_type;
typedef ::SoupWebsocketExtensionClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// gboolean WebsocketExtension::configure (SoupWebsocketExtension* extension, SoupWebsocketConnectionType connection_type, GHashTable* params, GError ** error);
// gboolean WebsocketExtension::configure (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// char* WebsocketExtension::get_request_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_request_params (::SoupWebsocketExtension* extension);
virtual std::string get_request_params_ () noexcept = 0;

// char* WebsocketExtension::get_response_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_response_params (::SoupWebsocketExtension* extension);
virtual std::string get_response_params_ () noexcept = 0;

// GBytes* WebsocketExtension::process_incoming_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_incoming_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// GBytes* WebsocketExtension::process_outgoing_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_outgoing_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

GI_CLASS_IMPL_BEGIN


class WebsocketExtensionClass: public detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionClassDef, GObject::impl::internal::ObjectClass>
{
typedef WebsocketExtensionClass self;
typedef detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// gboolean WebsocketExtension::configure (SoupWebsocketExtension* extension, SoupWebsocketConnectionType connection_type, GHashTable* params, GError ** error);
// gboolean WebsocketExtension::configure (::SoupWebsocketExtension* extension, ::SoupWebsocketConnectionType connection_type, ::GHashTable* params, GError ** error);
// SKIP; virtual-method container parameter not supported, callee GError not supported

// char* WebsocketExtension::get_request_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_request_params (::SoupWebsocketExtension* extension);
GI_INLINE_DECL std::string get_request_params_ () noexcept override;

// char* WebsocketExtension::get_response_params (SoupWebsocketExtension* extension);
// char* WebsocketExtension::get_response_params (::SoupWebsocketExtension* extension);
GI_INLINE_DECL std::string get_response_params_ () noexcept override;

// GBytes* WebsocketExtension::process_incoming_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_incoming_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported

// GBytes* WebsocketExtension::process_outgoing_message (SoupWebsocketExtension* extension, guint8* header, GBytes* payload, GError ** error);
// ::GBytes* WebsocketExtension::process_outgoing_message (::SoupWebsocketExtension* extension, guint8* header, ::GBytes* payload, GError ** error);
// SKIP; virtual-method out parameter not supported, callee GError not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using WebsocketExtensionImpl = detail::ObjectImpl<WebsocketExtension, internal::WebsocketExtensionClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
