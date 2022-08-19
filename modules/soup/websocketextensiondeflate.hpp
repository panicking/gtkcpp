// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETEXTENSIONDEFLATE_HPP_
#define _GI_SOUP_WEBSOCKETEXTENSIONDEFLATE_HPP_

#include "websocketextension.hpp"

namespace gi {

namespace repository {

namespace Soup {


class WebsocketExtensionDeflate;

namespace base {


#define GI_SOUP_WEBSOCKETEXTENSIONDEFLATE_BASE base::WebsocketExtensionDeflateBase
class WebsocketExtensionDeflateBase : public Soup::WebsocketExtension
{
typedef Soup::WebsocketExtension super_type;
public:
typedef ::SoupWebsocketExtensionDeflate BaseObjectType;

WebsocketExtensionDeflateBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_websocket_extension_deflate_get_type(); } 

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketextensiondeflate_extra_def.hpp>)
#include <soup/websocketextensiondeflate_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketextensiondeflate_extra.hpp>)
#include <soup/websocketextensiondeflate_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class WebsocketExtensionDeflate : public GI_SOUP_WEBSOCKETEXTENSIONDEFLATE_BASE
{ typedef GI_SOUP_WEBSOCKETEXTENSIONDEFLATE_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupWebsocketExtensionDeflate>
{ typedef Soup::WebsocketExtensionDeflate type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class WebsocketExtensionDeflateClassDef
{
typedef WebsocketExtensionDeflateClassDef self;
public:
typedef Soup::WebsocketExtensionDeflate instance_type;
typedef ::SoupWebsocketExtensionDeflateClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebsocketExtensionDeflateClass: public detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionDeflateClassDef, Soup::impl::internal::WebsocketExtensionClass>
{
typedef WebsocketExtensionDeflateClass self;
typedef detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionDeflateClassDef, Soup::impl::internal::WebsocketExtensionClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types



};

} // namespace internal

GI_CLASS_IMPL_END

using WebsocketExtensionDeflateImpl = detail::ObjectImpl<WebsocketExtensionDeflate, internal::WebsocketExtensionDeflateClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
