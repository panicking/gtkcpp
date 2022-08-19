// AUTO-GENERATED

#ifndef _GI_SOUP_REQUESTDATA_HPP_
#define _GI_SOUP_REQUESTDATA_HPP_

#include "request.hpp"

namespace gi {

namespace repository {

namespace Soup {


class RequestData;

namespace base {


#define GI_SOUP_REQUESTDATA_BASE base::RequestDataBase
class RequestDataBase : public Soup::Request
{
typedef Soup::Request super_type;
public:
typedef ::SoupRequestData BaseObjectType;

RequestDataBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_request_data_get_type(); } 

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/requestdata_extra_def.hpp>)
#include <soup/requestdata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/requestdata_extra.hpp>)
#include <soup/requestdata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class RequestData : public GI_SOUP_REQUESTDATA_BASE
{ typedef GI_SOUP_REQUESTDATA_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupRequestData>
{ typedef Soup::RequestData type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class RequestDataClassDef
{
typedef RequestDataClassDef self;
public:
typedef Soup::RequestData instance_type;
typedef ::SoupRequestDataClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class RequestDataClass: public detail::ClassTemplate<Soup::impl::internal::RequestDataClassDef, Soup::impl::internal::RequestClass>
{
typedef RequestDataClass self;
typedef detail::ClassTemplate<Soup::impl::internal::RequestDataClassDef, Soup::impl::internal::RequestClass> super;

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

using RequestDataImpl = detail::ObjectImpl<RequestData, internal::RequestDataClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
