// AUTO-GENERATED

#ifndef _GI_SOUP_COOKIEJAR_IMPL_HPP_
#define _GI_SOUP_COOKIEJAR_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

Soup::SessionFeature CookieJarBase::interface_ (gi::interface_tag<Soup::SessionFeature>)
{ return gi::wrap ((Soup::SessionFeature::BaseObjectType*) gobj_copy_(), gi::transfer_full, gi::direction_out); }

CookieJarBase::operator Soup::SessionFeature ()
{ return interface_ (gi::interface_tag<Soup::SessionFeature>()); }

// SoupCookieJar* soup_cookie_jar_new ();
// ::SoupCookieJar* soup_cookie_jar_new ();
Soup::CookieJar base::CookieJarBase::new_ () noexcept
{
  typedef ::SoupCookieJar* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_cookie_jar_add_cookie (SoupCookieJar* jar, SoupCookie* cookie);
// void soup_cookie_jar_add_cookie (::SoupCookieJar* jar, ::SoupCookie* cookie);
void base::CookieJarBase::add_cookie (Soup::Cookie cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_add_cookie;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookie*) (cookie_to_c));
}

// void soup_cookie_jar_add_cookie_full (SoupCookieJar* jar, SoupCookie* cookie, SoupURI* uri, SoupURI* first_party);
// void soup_cookie_jar_add_cookie_full (::SoupCookieJar* jar, ::SoupCookie* cookie, ::SoupURI* uri, ::SoupURI* first_party);
void base::CookieJarBase::add_cookie_full (Soup::Cookie cookie, Soup::URI uri, Soup::URI first_party) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookie* cookie, ::SoupURI* uri, ::SoupURI* first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_add_cookie_full;
  auto first_party_to_c = gi::unwrap (first_party, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::SoupURI*) (uri_to_c), (::SoupURI*) (first_party_to_c));
}
void base::CookieJarBase::add_cookie_full (Soup::Cookie cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookie* cookie, ::SoupURI* uri, ::SoupURI* first_party);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_add_cookie_full;
  auto first_party_to_c = nullptr;
  auto uri_to_c = nullptr;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_full, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookie*) (cookie_to_c), (::SoupURI*) (uri_to_c), (::SoupURI*) (first_party_to_c));
}

// void soup_cookie_jar_add_cookie_with_first_party (SoupCookieJar* jar, SoupURI* first_party, SoupCookie* cookie);
// void soup_cookie_jar_add_cookie_with_first_party (::SoupCookieJar* jar, ::SoupURI* first_party, ::SoupCookie* cookie);
void base::CookieJarBase::add_cookie_with_first_party (Soup::URI first_party, Soup::Cookie cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* first_party, ::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_add_cookie_with_first_party;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_full, gi::direction_in);
  auto first_party_to_c = gi::unwrap (first_party, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (first_party_to_c), (::SoupCookie*) (cookie_to_c));
}

// GSList* soup_cookie_jar_all_cookies (SoupCookieJar* jar);
// ::GSList* soup_cookie_jar_all_cookies (::SoupCookieJar* jar);
std::vector<Soup::Cookie> base::CookieJarBase::all_cookies () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupCookieJar* jar);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_all_cookies;
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// void soup_cookie_jar_delete_cookie (SoupCookieJar* jar, SoupCookie* cookie);
// void soup_cookie_jar_delete_cookie (::SoupCookieJar* jar, ::SoupCookie* cookie);
void base::CookieJarBase::delete_cookie (Soup::Cookie cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookie* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_delete_cookie;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookie*) (cookie_to_c));
}

// SoupCookieJarAcceptPolicy soup_cookie_jar_get_accept_policy (SoupCookieJar* jar);
// ::SoupCookieJarAcceptPolicy soup_cookie_jar_get_accept_policy (::SoupCookieJar* jar);
Soup::CookieJarAcceptPolicy base::CookieJarBase::get_accept_policy () noexcept
{
  typedef ::SoupCookieJarAcceptPolicy (*call_wrap_t) (::SoupCookieJar* jar);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_get_accept_policy;
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// GSList* soup_cookie_jar_get_cookie_list (SoupCookieJar* jar, SoupURI* uri, gboolean for_http);
// ::GSList* soup_cookie_jar_get_cookie_list (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
std::vector<Soup::Cookie> base::CookieJarBase::get_cookie_list (Soup::URI uri, gboolean for_http) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_get_cookie_list;
  auto for_http_to_c = for_http;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (gboolean) (for_http_to_c));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// GSList* soup_cookie_jar_get_cookie_list_with_same_site_info (SoupCookieJar* jar, SoupURI* uri, SoupURI* top_level, SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
// ::GSList* soup_cookie_jar_get_cookie_list_with_same_site_info (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* top_level, ::SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
std::vector<Soup::Cookie> base::CookieJarBase::get_cookie_list_with_same_site_info (Soup::URI uri, Soup::URI top_level, Soup::URI site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* top_level, ::SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_get_cookie_list_with_same_site_info;
  auto is_top_level_navigation_to_c = is_top_level_navigation;
  auto is_safe_method_to_c = is_safe_method;
  auto for_http_to_c = for_http;
  auto site_for_cookies_to_c = gi::unwrap (site_for_cookies, gi::transfer_none, gi::direction_in);
  auto top_level_to_c = gi::unwrap (top_level, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (::SoupURI*) (top_level_to_c), (::SoupURI*) (site_for_cookies_to_c), (gboolean) (for_http_to_c), (gboolean) (is_safe_method_to_c), (gboolean) (is_top_level_navigation_to_c));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}
std::vector<Soup::Cookie> base::CookieJarBase::get_cookie_list_with_same_site_info (Soup::URI uri, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* top_level, ::SoupURI* site_for_cookies, gboolean for_http, gboolean is_safe_method, gboolean is_top_level_navigation);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_get_cookie_list_with_same_site_info;
  auto is_top_level_navigation_to_c = is_top_level_navigation;
  auto is_safe_method_to_c = is_safe_method;
  auto for_http_to_c = for_http;
  auto site_for_cookies_to_c = nullptr;
  auto top_level_to_c = nullptr;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (::SoupURI*) (top_level_to_c), (::SoupURI*) (site_for_cookies_to_c), (gboolean) (for_http_to_c), (gboolean) (is_safe_method_to_c), (gboolean) (is_top_level_navigation_to_c));
  return gi::detail::wrap_list<Soup::Cookie> (_temp_ret, gi::transfer_full);
}

// char* soup_cookie_jar_get_cookies (SoupCookieJar* jar, SoupURI* uri, gboolean for_http);
// char* soup_cookie_jar_get_cookies (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
std::string base::CookieJarBase::get_cookies (Soup::URI uri, gboolean for_http) noexcept
{
  typedef char* (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, gboolean for_http);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_get_cookies;
  auto for_http_to_c = for_http;
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (gboolean) (for_http_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean soup_cookie_jar_is_persistent (SoupCookieJar* jar);
// gboolean soup_cookie_jar_is_persistent (::SoupCookieJar* jar);
bool base::CookieJarBase::is_persistent () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupCookieJar* jar);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_is_persistent;
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()));
  return _temp_ret;
}

// void soup_cookie_jar_save (SoupCookieJar* jar);
// void soup_cookie_jar_save (::SoupCookieJar* jar);
// IGNORE; deprecated

// void soup_cookie_jar_set_accept_policy (SoupCookieJar* jar, SoupCookieJarAcceptPolicy policy);
// void soup_cookie_jar_set_accept_policy (::SoupCookieJar* jar, ::SoupCookieJarAcceptPolicy policy);
void base::CookieJarBase::set_accept_policy (Soup::CookieJarAcceptPolicy policy) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookieJarAcceptPolicy policy);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_set_accept_policy;
  auto policy_to_c = gi::unwrap (policy);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookieJarAcceptPolicy) (policy_to_c));
}

// void soup_cookie_jar_set_cookie (SoupCookieJar* jar, SoupURI* uri, const char* cookie);
// void soup_cookie_jar_set_cookie (::SoupCookieJar* jar, ::SoupURI* uri, const char* cookie);
void base::CookieJarBase::set_cookie (Soup::URI uri, const std::string & cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, const char* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_set_cookie;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (const char*) (cookie_to_c));
}

// void soup_cookie_jar_set_cookie_with_first_party (SoupCookieJar* jar, SoupURI* uri, SoupURI* first_party, const char* cookie);
// void soup_cookie_jar_set_cookie_with_first_party (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* first_party, const char* cookie);
void base::CookieJarBase::set_cookie_with_first_party (Soup::URI uri, Soup::URI first_party, const std::string & cookie) noexcept
{
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupURI* uri, ::SoupURI* first_party, const char* cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_cookie_jar_set_cookie_with_first_party;
  auto cookie_to_c = gi::unwrap (cookie, gi::transfer_none, gi::direction_in);
  auto first_party_to_c = gi::unwrap (first_party, gi::transfer_none, gi::direction_in);
  auto uri_to_c = gi::unwrap (uri, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupURI*) (uri_to_c), (::SoupURI*) (first_party_to_c), (const char*) (cookie_to_c));
}



} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/cookiejar_extra_def_impl.hpp>)
#include <soup/cookiejar_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/cookiejar_extra_impl.hpp>)
#include <soup/cookiejar_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void CookieJarClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupCookieJarClass *methods = (::SoupCookieJarClass *) class_struct;
  (void) methods;

  methods->changed = (decltype (methods->changed)) detail::method_wrapper<self, void (*) (Soup::Cookie old_cookie, Soup::Cookie new_cookie), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::changed_>;
  methods->is_persistent = (decltype (methods->is_persistent)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_persistent_>;
}

// void CookieJar::changed (SoupCookieJar* jar, SoupCookie* old_cookie, SoupCookie* new_cookie);
// void CookieJar::changed (::SoupCookieJar* jar, ::SoupCookie* old_cookie, ::SoupCookie* new_cookie);
void CookieJarClass::changed_ (Soup::Cookie old_cookie, Soup::Cookie new_cookie) noexcept
{
  if (!get_struct_()->changed) return ;
  typedef void (*call_wrap_t) (::SoupCookieJar* jar, ::SoupCookie* old_cookie, ::SoupCookie* new_cookie);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->changed;
  auto new_cookie_to_c = gi::unwrap (new_cookie, gi::transfer_none, gi::direction_in);
  auto old_cookie_to_c = gi::unwrap (old_cookie, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupCookieJar*) (gobj_()), (::SoupCookie*) (old_cookie_to_c), (::SoupCookie*) (new_cookie_to_c));
}

// gboolean CookieJar::is_persistent (SoupCookieJar* jar);
// gboolean CookieJar::is_persistent (::SoupCookieJar* jar);
bool CookieJarClass::is_persistent_ () noexcept
{
  if (!get_struct_()->is_persistent) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupCookieJar* jar);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_persistent;
  auto _temp_ret = call_wrap_v ((::SoupCookieJar*) (gobj_()));
  return _temp_ret;
}

// void CookieJar::save (SoupCookieJar* jar);
// void CookieJar::save (::SoupCookieJar* jar);
// IGNORE; deprecated

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
