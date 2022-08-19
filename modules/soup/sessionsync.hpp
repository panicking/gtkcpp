// AUTO-GENERATED

#ifndef _GI_SOUP_SESSIONSYNC_HPP_
#define _GI_SOUP_SESSIONSYNC_HPP_

#include "session.hpp"

namespace gi {

namespace repository {

namespace Soup {


class SessionSync;

namespace base {


#define GI_SOUP_SESSIONSYNC_BASE base::SessionSyncBase
class SessionSyncBase : public Soup::Session
{
typedef Soup::Session super_type;
public:
typedef ::SoupSessionSync BaseObjectType;

SessionSyncBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_session_sync_get_type(); } 

// SoupSession* soup_session_sync_new ();
// ::SoupSessionSync* soup_session_sync_new ();
// IGNORE; deprecated

// SoupSession* soup_session_sync_new_with_options (const char* optname1);
// ::SoupSessionSync* soup_session_sync_new_with_options (const char* optname1);
// IGNORE; deprecated, varargs not supported

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/sessionsync_extra_def.hpp>)
#include <soup/sessionsync_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/sessionsync_extra.hpp>)
#include <soup/sessionsync_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class SessionSync : public GI_SOUP_SESSIONSYNC_BASE
{ typedef GI_SOUP_SESSIONSYNC_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupSessionSync>
{ typedef Soup::SessionSync type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class SessionSyncClassDef
{
typedef SessionSyncClassDef self;
public:
typedef Soup::SessionSync instance_type;
typedef ::SoupSessionSyncClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SessionSyncClass: public detail::ClassTemplate<Soup::impl::internal::SessionSyncClassDef, Soup::impl::internal::SessionClass>
{
typedef SessionSyncClass self;
typedef detail::ClassTemplate<Soup::impl::internal::SessionSyncClassDef, Soup::impl::internal::SessionClass> super;

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

using SessionSyncImpl = detail::ObjectImpl<SessionSync, internal::SessionSyncClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
