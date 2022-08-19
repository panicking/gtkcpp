// AUTO-GENERATED

#ifndef _GI_SOUP_AUTH_HPP_
#define _GI_SOUP_AUTH_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Message;
class URI;

class Auth;

namespace base {


#define GI_SOUP_AUTH_BASE base::AuthBase
class AuthBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupAuth BaseObjectType;

AuthBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_auth_get_type(); } 

// SoupAuth* soup_auth_new (GType type, SoupMessage* msg, const char* auth_header);
// ::SoupAuth* soup_auth_new (GType type, ::SoupMessage* msg, const char* auth_header);
static GI_INLINE_DECL Soup::Auth new_ (GType type, Soup::Message msg, const std::string & auth_header) noexcept;

// void soup_auth_authenticate (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_authenticate (::SoupAuth* auth, const char* username, const char* password);
GI_INLINE_DECL void authenticate (const std::string & username, const std::string & password) noexcept;

// gboolean soup_auth_can_authenticate (SoupAuth* auth);
// gboolean soup_auth_can_authenticate (::SoupAuth* auth);
GI_INLINE_DECL bool can_authenticate () noexcept;

// void soup_auth_free_protection_space (SoupAuth* auth, GSList* space);
// void soup_auth_free_protection_space (::SoupAuth* auth, ::GSList* space);
GI_INLINE_DECL void free_protection_space (const std::vector<gpointer> & space) noexcept;

// char* soup_auth_get_authorization (SoupAuth* auth, SoupMessage* msg);
// char* soup_auth_get_authorization (::SoupAuth* auth, ::SoupMessage* msg);
GI_INLINE_DECL std::string get_authorization (Soup::Message msg) noexcept;

// const char* soup_auth_get_host (SoupAuth* auth);
// const char* soup_auth_get_host (::SoupAuth* auth);
GI_INLINE_DECL std::string get_host () noexcept;

// char* soup_auth_get_info (SoupAuth* auth);
// char* soup_auth_get_info (::SoupAuth* auth);
GI_INLINE_DECL std::string get_info () noexcept;

// GSList* soup_auth_get_protection_space (SoupAuth* auth, SoupURI* source_uri);
// ::GSList* soup_auth_get_protection_space (::SoupAuth* auth, ::SoupURI* source_uri);
GI_INLINE_DECL std::vector<std::string> get_protection_space (Soup::URI source_uri) noexcept;

// const char* soup_auth_get_realm (SoupAuth* auth);
// const char* soup_auth_get_realm (::SoupAuth* auth);
GI_INLINE_DECL std::string get_realm () noexcept;

// const char* soup_auth_get_saved_password (SoupAuth* auth, const char* user);
// const char* soup_auth_get_saved_password (::SoupAuth* auth, const char* user);
GI_INLINE_DECL std::string get_saved_password (const std::string & user) noexcept;

// GSList* soup_auth_get_saved_users (SoupAuth* auth);
// ::GSList* soup_auth_get_saved_users (::SoupAuth* auth);
GI_INLINE_DECL std::vector<std::string> get_saved_users () noexcept;

// const char* soup_auth_get_scheme_name (SoupAuth* auth);
// const char* soup_auth_get_scheme_name (::SoupAuth* auth);
GI_INLINE_DECL std::string get_scheme_name () noexcept;

// void soup_auth_has_saved_password (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_has_saved_password (::SoupAuth* auth, const char* username, const char* password);
GI_INLINE_DECL void has_saved_password (const std::string & username, const std::string & password) noexcept;

// gboolean soup_auth_is_authenticated (SoupAuth* auth);
// gboolean soup_auth_is_authenticated (::SoupAuth* auth);
GI_INLINE_DECL bool is_authenticated () noexcept;

// gboolean soup_auth_is_for_proxy (SoupAuth* auth);
// gboolean soup_auth_is_for_proxy (::SoupAuth* auth);
GI_INLINE_DECL bool is_for_proxy () noexcept;

// gboolean soup_auth_is_ready (SoupAuth* auth, SoupMessage* msg);
// gboolean soup_auth_is_ready (::SoupAuth* auth, ::SoupMessage* msg);
GI_INLINE_DECL bool is_ready (Soup::Message msg) noexcept;

// void soup_auth_save_password (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_save_password (::SoupAuth* auth, const char* username, const char* password);
GI_INLINE_DECL void save_password (const std::string & username, const std::string & password) noexcept;

// gboolean soup_auth_update (SoupAuth* auth, SoupMessage* msg, const char* auth_header);
// gboolean soup_auth_update (::SoupAuth* auth, ::SoupMessage* msg, const char* auth_header);
GI_INLINE_DECL bool update (Soup::Message msg, const std::string & auth_header) noexcept;

gi::property_proxy<std::string, base::AuthBase> property_host()
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "host"); }
const gi::property_proxy<std::string, base::AuthBase> property_host() const
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "host"); }

gi::property_proxy<bool, base::AuthBase> property_is_authenticated()
{ return gi::property_proxy<bool, base::AuthBase> (*this, "is-authenticated"); }
const gi::property_proxy<bool, base::AuthBase> property_is_authenticated() const
{ return gi::property_proxy<bool, base::AuthBase> (*this, "is-authenticated"); }

gi::property_proxy<bool, base::AuthBase> property_is_for_proxy()
{ return gi::property_proxy<bool, base::AuthBase> (*this, "is-for-proxy"); }
const gi::property_proxy<bool, base::AuthBase> property_is_for_proxy() const
{ return gi::property_proxy<bool, base::AuthBase> (*this, "is-for-proxy"); }

gi::property_proxy<std::string, base::AuthBase> property_realm()
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "realm"); }
const gi::property_proxy<std::string, base::AuthBase> property_realm() const
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "realm"); }

gi::property_proxy<std::string, base::AuthBase> property_scheme_name()
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "scheme-name"); }
const gi::property_proxy<std::string, base::AuthBase> property_scheme_name() const
{ return gi::property_proxy<std::string, base::AuthBase> (*this, "scheme-name"); }

// char* Auth::realm (const ::SoupAuth* obj);
// char* Auth::realm (const ::SoupAuth* obj);
GI_INLINE_DECL std::string realm_ () const noexcept;

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/auth_extra_def.hpp>)
#include <soup/auth_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/auth_extra.hpp>)
#include <soup/auth_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class Auth : public GI_SOUP_AUTH_BASE
{ typedef GI_SOUP_AUTH_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupAuth>
{ typedef Soup::Auth type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class AuthClassDef
{
typedef AuthClassDef self;
public:
typedef Soup::Auth instance_type;
typedef ::SoupAuthClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void Auth::authenticate (SoupAuth* auth, const char* username, const char* password);
// void Auth::authenticate (::SoupAuth* auth, const char* username, const char* password);
virtual void authenticate_ (const std::string & username, const std::string & password) noexcept = 0;

// gboolean Auth::can_authenticate (SoupAuth* auth);
// gboolean Auth::can_authenticate (::SoupAuth* auth);
virtual bool can_authenticate_ () noexcept = 0;

// char* Auth::get_authorization (SoupAuth* auth, SoupMessage* msg);
// char* Auth::get_authorization (::SoupAuth* auth, ::SoupMessage* msg);
virtual std::string get_authorization_ (Soup::Message msg) noexcept = 0;

// GSList* Auth::get_protection_space (SoupAuth* auth, SoupURI* source_uri);
// ::GSList* Auth::get_protection_space (::SoupAuth* auth, ::SoupURI* source_uri);
// SKIP; container return not supported

// gboolean Auth::is_authenticated (SoupAuth* auth);
// gboolean Auth::is_authenticated (::SoupAuth* auth);
virtual bool is_authenticated_ () noexcept = 0;

// gboolean Auth::is_ready (SoupAuth* auth, SoupMessage* msg);
// gboolean Auth::is_ready (::SoupAuth* auth, ::SoupMessage* msg);
virtual bool is_ready_ (Soup::Message msg) noexcept = 0;

// gboolean Auth::update (SoupAuth* auth, SoupMessage* msg, GHashTable* auth_header);
// gboolean Auth::update (::SoupAuth* auth, ::SoupMessage* msg, ::GHashTable* auth_header);
// SKIP; virtual-method container parameter not supported


};

GI_CLASS_IMPL_BEGIN


class AuthClass: public detail::ClassTemplate<Soup::impl::internal::AuthClassDef, GObject::impl::internal::ObjectClass>
{
typedef AuthClass self;
typedef detail::ClassTemplate<Soup::impl::internal::AuthClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void Auth::authenticate (SoupAuth* auth, const char* username, const char* password);
// void Auth::authenticate (::SoupAuth* auth, const char* username, const char* password);
GI_INLINE_DECL void authenticate_ (const std::string & username, const std::string & password) noexcept override;

// gboolean Auth::can_authenticate (SoupAuth* auth);
// gboolean Auth::can_authenticate (::SoupAuth* auth);
GI_INLINE_DECL bool can_authenticate_ () noexcept override;

// char* Auth::get_authorization (SoupAuth* auth, SoupMessage* msg);
// char* Auth::get_authorization (::SoupAuth* auth, ::SoupMessage* msg);
GI_INLINE_DECL std::string get_authorization_ (Soup::Message msg) noexcept override;

// GSList* Auth::get_protection_space (SoupAuth* auth, SoupURI* source_uri);
// ::GSList* Auth::get_protection_space (::SoupAuth* auth, ::SoupURI* source_uri);
// SKIP; container return not supported

// gboolean Auth::is_authenticated (SoupAuth* auth);
// gboolean Auth::is_authenticated (::SoupAuth* auth);
GI_INLINE_DECL bool is_authenticated_ () noexcept override;

// gboolean Auth::is_ready (SoupAuth* auth, SoupMessage* msg);
// gboolean Auth::is_ready (::SoupAuth* auth, ::SoupMessage* msg);
GI_INLINE_DECL bool is_ready_ (Soup::Message msg) noexcept override;

// gboolean Auth::update (SoupAuth* auth, SoupMessage* msg, GHashTable* auth_header);
// gboolean Auth::update (::SoupAuth* auth, ::SoupMessage* msg, ::GHashTable* auth_header);
// SKIP; virtual-method container parameter not supported


};

} // namespace internal

GI_CLASS_IMPL_END

using AuthImpl = detail::ObjectImpl<Auth, internal::AuthClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
