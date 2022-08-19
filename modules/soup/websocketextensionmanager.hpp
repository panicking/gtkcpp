// AUTO-GENERATED

#ifndef _GI_SOUP_WEBSOCKETEXTENSIONMANAGER_HPP_
#define _GI_SOUP_WEBSOCKETEXTENSIONMANAGER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class SessionFeature;

class WebsocketExtensionManager;

namespace base {


#define GI_SOUP_WEBSOCKETEXTENSIONMANAGER_BASE base::WebsocketExtensionManagerBase
class WebsocketExtensionManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupWebsocketExtensionManager BaseObjectType;

WebsocketExtensionManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_websocket_extension_manager_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/websocketextensionmanager_extra_def.hpp>)
#include <soup/websocketextensionmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/websocketextensionmanager_extra.hpp>)
#include <soup/websocketextensionmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class WebsocketExtensionManager : public GI_SOUP_WEBSOCKETEXTENSIONMANAGER_BASE
{ typedef GI_SOUP_WEBSOCKETEXTENSIONMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupWebsocketExtensionManager>
{ typedef Soup::WebsocketExtensionManager type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class WebsocketExtensionManagerClassDef
{
typedef WebsocketExtensionManagerClassDef self;
public:
typedef Soup::WebsocketExtensionManager instance_type;
typedef ::SoupWebsocketExtensionManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class WebsocketExtensionManagerClass: public detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionManagerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef WebsocketExtensionManagerClass self;
typedef detail::ClassTemplate<Soup::impl::internal::WebsocketExtensionManagerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;



};

} // namespace internal

GI_CLASS_IMPL_END

using WebsocketExtensionManagerImpl = detail::ObjectImpl<WebsocketExtensionManager, internal::WebsocketExtensionManagerClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
