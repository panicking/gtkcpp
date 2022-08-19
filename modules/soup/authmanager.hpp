// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHMANAGER_HPP_
#define _GI_SOUP_AUTHMANAGER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Auth;
class Message;
class SessionFeature;
class URI;

class AuthManager;

namespace base {


#define GI_SOUP_AUTHMANAGER_BASE base::AuthManagerBase
class AuthManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupAuthManager BaseObjectType;

AuthManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_auth_manager_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// void soup_auth_manager_clear_cached_credentials (SoupAuthManager* manager);
// void soup_auth_manager_clear_cached_credentials (::SoupAuthManager* manager);
GI_INLINE_DECL void clear_cached_credentials () noexcept;

// void soup_auth_manager_use_auth (SoupAuthManager* manager, SoupURI* uri, SoupAuth* auth);
// void soup_auth_manager_use_auth (::SoupAuthManager* manager, ::SoupURI* uri, ::SoupAuth* auth);
GI_INLINE_DECL void use_auth (Soup::URI uri, Soup::Auth auth) noexcept;

// signal authenticate
gi::signal_proxy<void(Soup::AuthManager, Soup::Message msg, Soup::Auth auth, gboolean retrying)> signal_authenticate()
{ return gi::signal_proxy<void(Soup::AuthManager, Soup::Message msg, Soup::Auth auth, gboolean retrying)> (*this, "authenticate"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authmanager_extra_def.hpp>)
#include <soup/authmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authmanager_extra.hpp>)
#include <soup/authmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class AuthManager : public GI_SOUP_AUTHMANAGER_BASE
{ typedef GI_SOUP_AUTHMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAuthManager>
{ typedef Soup::AuthManager type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AuthManagerClassDef
{
typedef AuthManagerClassDef self;
public:
typedef Soup::AuthManager instance_type;
typedef ::SoupAuthManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void AuthManager::authenticate (SoupAuthManager* manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void AuthManager::authenticate (::SoupAuthManager* manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
virtual void authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class AuthManagerClass: public detail::ClassTemplate<Soup::impl::internal::AuthManagerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef AuthManagerClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AuthManagerClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;


// void AuthManager::authenticate (SoupAuthManager* manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying);
// void AuthManager::authenticate (::SoupAuthManager* manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying);
GI_INLINE_DECL void authenticate_ (Soup::Message msg, Soup::Auth auth, gboolean retrying) noexcept override;


};

} // namespace internal

GI_CLASS_IMPL_END

using AuthManagerImpl = detail::ObjectImpl<AuthManager, internal::AuthManagerClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
