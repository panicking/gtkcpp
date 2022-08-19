// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTHTTP_HPP_
#define _GI_SOUP_REQUESTHTTP_HPP_

#include "request.hpp"

namespace gi {

namespace repository {

namespace Soup {

class Message;

class RequestHTTP;

namespace base {


#define GI_SOUP_REQUESTHTTP_BASE base::RequestHTTPBase
class RequestHTTPBase : public Soup::Request
{
typedef Soup::Request super_type;
public:
typedef ::SoupRequestHTTP BaseObjectType;

RequestHTTPBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_request_http_get_type(); } 

// SoupMessage* soup_request_http_get_message (SoupRequestHTTP* http);
// ::SoupMessage* soup_request_http_get_message (::SoupRequestHTTP* http);
GI_INLINE_DECL Soup::Message get_message () noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requesthttp_extra_def.hpp>)
#include <soup/requesthttp_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requesthttp_extra.hpp>)
#include <soup/requesthttp_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class RequestHTTP : public GI_SOUP_REQUESTHTTP_BASE
{ typedef GI_SOUP_REQUESTHTTP_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupRequestHTTP>
{ typedef Soup::RequestHTTP type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class RequestHTTPClassDef
{
typedef RequestHTTPClassDef self;
public:
typedef Soup::RequestHTTP instance_type;
typedef ::SoupRequestHTTPClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RequestHTTPClass: public detail::ClassTemplate<Soup::impl::internal::RequestHTTPClassDef, Soup::impl::internal::RequestClass>
{
typedef RequestHTTPClass self;
typedef detail::ClassTemplate<Soup::impl::internal::RequestHTTPClassDef, Soup::impl::internal::RequestClass> super;

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

using RequestHTTPImpl = detail::ObjectImpl<RequestHTTP, internal::RequestHTTPClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
