// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIEJAR_HPP_
#define _GI_SOUP_COOKIEJAR_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Cookie;
class SessionFeature;
class URI;

class CookieJar;

namespace base {


#define GI_SOUP_COOKIEJAR_BASE base::CookieJarBase
class CookieJarBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::SoupCookieJar BaseObjectType;

CookieJarBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_cookie_jar_get_type(); } 

GI_INLINE_DECL Soup::SessionFeature interface_ (gi::interface_tag<Soup::SessionFeature>);

GI_INLINE_DECL operator Soup::SessionFeature ();

// SoupCookieJar* soup_cookie_jar_new ();
// ::SoupCookieJar* soup_cookie_jar_new ();
static GI_INLINE_DECL Soup::CookieJar new_ () noexcept;

// void soup_cookie_jar_add_cookie (SoupCookieJar* jar, SoupCookie* cookie);
// void soup_cookie_jar_add_cookie (::SoupCookieJar* jar, ::SoupCookie* cookie);
GI_INLINE_DECL void add_cookie (Soup::Cookie cookie) noexcept;

// void soup_cookie_jar_add_cookie_full (SoupCookieJar* jar, SoupCookie* cookie, SoupURI* uri, SoupURI* first_party);
// void soup_cookie_jar_add_cookie_full (::SoupCookieJar* jar, ::SoupCookie* cookie, ::SoupURI* uri, ::SoupURI* first_party);
GI_INLINE_DECL void add_cookie_full (Soup::Cookie cookie, Soup::URI uri, Soup::URI first_party) noexcept;
GI_INLINE_DECL void add_cookie_full (Soup::Cookie cookie) noexcept;

// void soup_cookie_jar_add_cookie_with_first_party (SoupCookieJar* jar, SoupURI* first_party, SoupCookie* cookie);
// void soup_cookie_jar_add_cookie_with_first_party (::SoupCookieJar* jar, ::SoupURI* first_party, ::SoupCookie* cookie);
GI_INLINE_DECL void add_cookie_with_first_party (Soup::URI first_party, Soup::Cookie cookie) noexcept;

// GSList* soup_cookie_jar_all_cookies (SoupCookieJar* jar);
// ::GSList* soup_cookie_jar_all_cookies (::SoupCookieJar* jar);
GI_INLINE_DECL std::vector<Soup::Cookie> all_cookies () noexcept;

// void soup_cookie_jar_delete_cookie (SoupCookieJar* jar, SoupCookie* cookie);
// void soup_cookie_jar_delete_cookie (::SoupCookieJar* jar, ::SoupCookie* cookie);
GI_INLINE_DECL void delete_cookie (Soup::Cookie cookie) noexcept;

// SoupCookieJarAcceptPolicy soup_cookie_jar_get_accept_policy (SoupCookieJar* jar);
// ::SoupCookieJarAcceptPolicy soup_cookie_jar_get_accept_policy (::SoupCookieJar* jar);
GI_INLINE_DECL Soup::CookieJarAcceptPolicy get_accept_policy () noexcept;

// GSList* soup_cookie_jar_get_cookie_list (SoupCookieJar* jar, SoupURI* uri, gboolean for_http);
// ::GSList* soup_cookie_jar_get_cookie_list (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
GI_INLINE_DECL std::vector<Soup::Cookie> get_cookie_list (Soup::URI uri, gboolean for_http) noexcept;

// GSList* soup_cookie_jar_get_cookie_list_with_same_site_info (SoupCookieJar* jar, SoupURI* uri, SoupURI* top_level, SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
// ::GSList* soup_cookie_jar_get_cookie_list_with_same_site_info (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* top_level, ::SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
GI_INLINE_DECL std::vector<Soup::Cookie> get_cookie_list_with_same_site_info (Soup::URI uri, Soup::URI top_level, Soup::URI site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation) noexcept;
GI_INLINE_DECL std::vector<Soup::Cookie> get_cookie_list_with_same_site_info (Soup::URI uri, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation) noexcept;

// char* soup_cookie_jar_get_cookies (SoupCookieJar* jar, SoupURI* uri, gboolean for_http);
// char* soup_cookie_jar_get_cookies (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
GI_INLINE_DECL std::string get_cookies (Soup::URI uri, gboolean for_http) noexcept;

// gboolean soup_cookie_jar_is_persistent (SoupCookieJar* jar);
// gboolean soup_cookie_jar_is_persistent (::SoupCookieJar* jar);
GI_INLINE_DECL bool is_persistent () noexcept;

// void soup_cookie_jar_save (SoupCookieJar* jar);
// void soup_cookie_jar_save (::SoupCookieJar* jar);
// IGNORE; deprecated

// void soup_cookie_jar_set_accept_policy (SoupCookieJar* jar, SoupCookieJarAcceptPolicy policy);
// void soup_cookie_jar_set_accept_policy (::SoupCookieJar* jar, ::SoupCookieJarAcceptPolicy policy);
GI_INLINE_DECL void set_accept_policy (Soup::CookieJarAcceptPolicy policy) noexcept;

// void soup_cookie_jar_set_cookie (SoupCookieJar* jar, SoupURI* uri, const char* cookie);
// void soup_cookie_jar_set_cookie (::SoupCookieJar* jar, ::SoupURI* uri, const char* cookie);
GI_INLINE_DECL void set_cookie (Soup::URI uri, const std::string & cookie) noexcept;

// void soup_cookie_jar_set_cookie_with_first_party (SoupCookieJar* jar, SoupURI* uri, SoupURI* first_party, const char* cookie);
// void soup_cookie_jar_set_cookie_with_first_party (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* first_party, const char* cookie);
GI_INLINE_DECL void set_cookie_with_first_party (Soup::URI uri, Soup::URI first_party, const std::string & cookie) noexcept;

gi::property_proxy<Soup::CookieJarAcceptPolicy, base::CookieJarBase> property_accept_policy()
{ return gi::property_proxy<Soup::CookieJarAcceptPolicy, base::CookieJarBase> (*this, "accept-policy"); }
const gi::property_proxy<Soup::CookieJarAcceptPolicy, base::CookieJarBase> property_accept_policy() const
{ return gi::property_proxy<Soup::CookieJarAcceptPolicy, base::CookieJarBase> (*this, "accept-policy"); }

gi::property_proxy<bool, base::CookieJarBase> property_read_only()
{ return gi::property_proxy<bool, base::CookieJarBase> (*this, "read-only"); }
const gi::property_proxy<bool, base::CookieJarBase> property_read_only() const
{ return gi::property_proxy<bool, base::CookieJarBase> (*this, "read-only"); }

// signal changed
gi::signal_proxy<void(Soup::CookieJar, Soup::Cookie old_cookie, Soup::Cookie new_cookie)> signal_changed()
{ return gi::signal_proxy<void(Soup::CookieJar, Soup::Cookie old_cookie, Soup::Cookie new_cookie)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookiejar_extra_def.hpp>)
#include <soup/cookiejar_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookiejar_extra.hpp>)
#include <soup/cookiejar_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class CookieJar : public GI_SOUP_COOKIEJAR_BASE
{ typedef GI_SOUP_COOKIEJAR_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupCookieJar>
{ typedef Soup::CookieJar type; }; 

} // namespace repository

} // namespace gi

#include "sessionfeature.hpp"

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class CookieJarClassDef
{
typedef CookieJarClassDef self;
public:
typedef Soup::CookieJar instance_type;
typedef ::SoupCookieJarClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void CookieJar::changed (SoupCookieJar* jar, SoupCookie* old_cookie, SoupCookie* new_cookie);
// void CookieJar::changed (::SoupCookieJar* jar, ::SoupCookie* old_cookie, ::SoupCookie* new_cookie);
virtual void changed_ (Soup::Cookie old_cookie, Soup::Cookie new_cookie) noexcept = 0;

// gboolean CookieJar::is_persistent (SoupCookieJar* jar);
// gboolean CookieJar::is_persistent (::SoupCookieJar* jar);
virtual bool is_persistent_ () noexcept = 0;

// void CookieJar::save (SoupCookieJar* jar);
// void CookieJar::save (::SoupCookieJar* jar);
// IGNORE; deprecated


};

GI_CLASS_IMPL_BEGIN


class CookieJarClass: public detail::ClassTemplate<Soup::impl::internal::CookieJarClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl>
{
typedef CookieJarClass self;
typedef detail::ClassTemplate<Soup::impl::internal::CookieJarClassDef, GObject::impl::internal::ObjectClass, Soup::impl::internal::SessionFeatureInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Soup::impl::internal::SessionFeatureInterfaceClassImpl SoupSessionFeatureInterface_type;


// void CookieJar::changed (SoupCookieJar* jar, SoupCookie* old_cookie, SoupCookie* new_cookie);
// void CookieJar::changed (::SoupCookieJar* jar, ::SoupCookie* old_cookie, ::SoupCookie* new_cookie);
GI_INLINE_DECL void changed_ (Soup::Cookie old_cookie, Soup::Cookie new_cookie) noexcept override;

// gboolean CookieJar::is_persistent (SoupCookieJar* jar);
// gboolean CookieJar::is_persistent (::SoupCookieJar* jar);
GI_INLINE_DECL bool is_persistent_ () noexcept override;

// void CookieJar::save (SoupCookieJar* jar);
// void CookieJar::save (::SoupCookieJar* jar);
// IGNORE; deprecated


};

} // namespace internal

GI_CLASS_IMPL_END

using CookieJarImpl = detail::ObjectImpl<CookieJar, internal::CookieJarClass>;

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
