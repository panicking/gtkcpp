// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTER_HPP_
#define _GI_SOUP_REQUESTER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Request;
class SessionFeature;
class URI;

class Requester;

namespace base {


#define GI_SOUP_REQUESTER_BASE base::RequesterBase
class RequesterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupRequester BaseObjectType;

RequesterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_requester_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupRequester* soup_requester_new ();
// ::SoupRequester* soup_requester_new ();
static GI_INLINE_DECL Soup::Requester new_ () noexcept;

// SoupRequest* soup_requester_request (SoupRequester* requester, const char* uri_string, GError ** error);
// ::SoupRequest* soup_requester_request (::SoupRequester* requester, const char* uri_string, GError ** error);
GI_INLINE_DECL Soup::Request request (const std::string & uri_string);
GI_INLINE_DECL Soup::Request request (const std::string & uri_string, GLib::Error * _error) noexcept;

// SoupRequest* soup_requester_request_uri (SoupRequester* requester, SoupURI* uri, GError ** error);
// ::SoupRequest* soup_requester_request_uri (::SoupRequester* requester, ::SoupURI* uri, GError ** error);
GI_INLINE_DECL Soup::Request request_uri (Soup::URI uri);
GI_INLINE_DECL Soup::Request request_uri (Soup::URI uri, GLib::Error * _error) noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requester_extra_def.hpp>)
#include <soup/requester_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requester_extra.hpp>)
#include <soup/requester_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Requester : public GI_SOUP_REQUESTER_BASE
{ typedef GI_SOUP_REQUESTER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupRequester>
{ typedef Soup::Requester type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class RequesterClassDef
{
typedef RequesterClassDef self;
public:
typedef Soup::Requester instance_type;
typedef ::SoupRequesterClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RequesterClass: public detail::ClassTemplate<Soup::impl::internal::RequesterClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef RequesterClass self;
typedef detail::ClassTemplate<Soup::impl::internal::RequesterClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

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

using RequesterImpl = detail::ObjectImpl<Requester, internal::RequesterClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
