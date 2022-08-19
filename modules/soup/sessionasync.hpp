// AUTO-GENERATED

#ifndef _GI_SOUP_SESSIONASYNC_HPP_
#define _GI_SOUP_SESSIONASYNC_HPP_

#include "session.hpp"

namespace gi {

namespace repository {

namespace Soup {


class SessionAsync;

namespace base {


#define GI_SOUP_SESSIONASYNC_BASE base::SessionAsyncBase
class SessionAsyncBase : public Soup::Session
{
typedef Soup::Session super_type;
public:
typedef ::SoupSessionAsync BaseObjectType;

SessionAsyncBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_session_async_get_type(); } 

// SoupSession* soup_session_async_new ();
// ::SoupSessionAsync* soup_session_async_new ();
// IGNORE; deprecated

// SoupSession* soup_session_async_new_with_options (const char* optname1);
// ::SoupSessionAsync* soup_session_async_new_with_options (const char* optname1);
// IGNORE; deprecated, varargs not supported

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/sessionasync_extra_def.hpp>)
#include <soup/sessionasync_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/sessionasync_extra.hpp>)
#include <soup/sessionasync_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class SessionAsync : public GI_SOUP_SESSIONASYNC_BASE
{ typedef GI_SOUP_SESSIONASYNC_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupSessionAsync>
{ typedef Soup::SessionAsync type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class SessionAsyncClassDef
{
typedef SessionAsyncClassDef self;
public:
typedef Soup::SessionAsync instance_type;
typedef ::SoupSessionAsyncClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SessionAsyncClass: public detail::ClassTemplate<Soup::impl::internal::SessionAsyncClassDef, Soup::impl::internal::SessionClass>
{
typedef SessionAsyncClass self;
typedef detail::ClassTemplate<Soup::impl::internal::SessionAsyncClassDef, Soup::impl::internal::SessionClass> super;

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

using SessionAsyncImpl = detail::ObjectImpl<SessionAsync, internal::SessionAsyncClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
