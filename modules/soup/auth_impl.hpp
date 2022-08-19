// AUTO-GENERATED

#ifndef _GI_SOUP_AUTH_IMPL_HPP_
#define _GI_SOUP_AUTH_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// SoupAuth* soup_auth_new (GType type, SoupMessage* msg, const char* auth_header);
// ::SoupAuth* soup_auth_new (GType type, ::SoupMessage* msg, const char* auth_header);
Soup::Auth base::AuthBase::new_ (GType type, Soup::Message msg, const std::string & auth_header) noexcept
{
  typedef ::SoupAuth* (*call_wrap_t) (GType type, ::SoupMessage* msg, const char* auth_header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_new;
  auto auth_header_to_c = gi::unwrap (auth_header, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto type_to_c = type;
  auto _temp_ret = call_wrap_v ((GType) (type_to_c), (::SoupMessage*) (msg_to_c), (const char*) (auth_header_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_auth_authenticate (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_authenticate (::SoupAuth* auth, const char* username, const char* password);
void base::AuthBase::authenticate (const std::string & username, const std::string & password) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuth* auth, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_authenticate;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuth*) (gobj_()), (const char*) (username_to_c), (const char*) (password_to_c));
}

// gboolean soup_auth_can_authenticate (SoupAuth* auth);
// gboolean soup_auth_can_authenticate (::SoupAuth* auth);
bool base::AuthBase::can_authenticate () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_can_authenticate;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return _temp_ret;
}

// void soup_auth_free_protection_space (SoupAuth* auth, GSList* space);
// void soup_auth_free_protection_space (::SoupAuth* auth, ::GSList* space);
void base::AuthBase::free_protection_space (const std::vector<gpointer> & space) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuth* auth, ::GSList* space);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_free_protection_space;
  auto space_i = detail::make_list_unwrap_range<::GSList> (space);
  auto space_w = unwrap (space_i, gi::transfer_none, direction_in);
  auto space_to_c = space_w.gobj_(false);
  call_wrap_v ((::SoupAuth*) (gobj_()), (::GSList*) (space_to_c));
}

// char* soup_auth_get_authorization (SoupAuth* auth, SoupMessage* msg);
// char* soup_auth_get_authorization (::SoupAuth* auth, ::SoupMessage* msg);
std::string base::AuthBase::get_authorization (Soup::Message msg) noexcept
{
  typedef char* (*call_wrap_t) (::SoupAuth* auth, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_authorization;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// const char* soup_auth_get_host (SoupAuth* auth);
// const char* soup_auth_get_host (::SoupAuth* auth);
std::string base::AuthBase::get_host () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_host;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// char* soup_auth_get_info (SoupAuth* auth);
// char* soup_auth_get_info (::SoupAuth* auth);
std::string base::AuthBase::get_info () noexcept
{
  typedef char* (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_info;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* soup_auth_get_protection_space (SoupAuth* auth, SoupURI* source_uri);
// ::GSList* soup_auth_get_protection_space (::SoupAuth* auth, ::SoupURI* source_uri);
std::vector<std::string> base::AuthBase::get_protection_space (Soup::URI source_uri) noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupAuth* auth, ::SoupURI* source_uri);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_protection_space;
  auto source_uri_to_c = gi::unwrap (source_uri, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupURI*) (source_uri_to_c));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// const char* soup_auth_get_realm (SoupAuth* auth);
// const char* soup_auth_get_realm (::SoupAuth* auth);
std::string base::AuthBase::get_realm () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_realm;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* soup_auth_get_saved_password (SoupAuth* auth, const char* user);
// const char* soup_auth_get_saved_password (::SoupAuth* auth, const char* user);
std::string base::AuthBase::get_saved_password (const std::string & user) noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAuth* auth, const char* user);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_saved_password;
  auto user_to_c = gi::unwrap (user, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (const char*) (user_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GSList* soup_auth_get_saved_users (SoupAuth* auth);
// ::GSList* soup_auth_get_saved_users (::SoupAuth* auth);
std::vector<std::string> base::AuthBase::get_saved_users () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_saved_users;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return gi::detail::wrap_list<std::string> (_temp_ret, gi::transfer_full);
}

// const char* soup_auth_get_scheme_name (SoupAuth* auth);
// const char* soup_auth_get_scheme_name (::SoupAuth* auth);
std::string base::AuthBase::get_scheme_name () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_get_scheme_name;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_auth_has_saved_password (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_has_saved_password (::SoupAuth* auth, const char* username, const char* password);
void base::AuthBase::has_saved_password (const std::string & username, const std::string & password) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuth* auth, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_has_saved_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuth*) (gobj_()), (const char*) (username_to_c), (const char*) (password_to_c));
}

// gboolean soup_auth_is_authenticated (SoupAuth* auth);
// gboolean soup_auth_is_authenticated (::SoupAuth* auth);
bool base::AuthBase::is_authenticated () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_is_authenticated;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_auth_is_for_proxy (SoupAuth* auth);
// gboolean soup_auth_is_for_proxy (::SoupAuth* auth);
bool base::AuthBase::is_for_proxy () noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_is_for_proxy;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return _temp_ret;
}

// gboolean soup_auth_is_ready (SoupAuth* auth, SoupMessage* msg);
// gboolean soup_auth_is_ready (::SoupAuth* auth, ::SoupMessage* msg);
bool base::AuthBase::is_ready (Soup::Message msg) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_is_ready;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

// void soup_auth_save_password (SoupAuth* auth, const char* username, const char* password);
// void soup_auth_save_password (::SoupAuth* auth, const char* username, const char* password);
void base::AuthBase::save_password (const std::string & username, const std::string & password) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuth* auth, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_save_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuth*) (gobj_()), (const char*) (username_to_c), (const char*) (password_to_c));
}

// gboolean soup_auth_update (SoupAuth* auth, SoupMessage* msg, const char* auth_header);
// gboolean soup_auth_update (::SoupAuth* auth, ::SoupMessage* msg, const char* auth_header);
bool base::AuthBase::update (Soup::Message msg, const std::string & auth_header) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth, ::SoupMessage* msg, const char* auth_header);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_update;
  auto auth_header_to_c = gi::unwrap (auth_header, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (auth_header_to_c));
  return _temp_ret;
}

static char* _field_realm_get (const ::SoupAuth* obj) { return (char*) obj->realm; }
// char* Auth::realm (const ::SoupAuth* obj);
// char* Auth::realm (const ::SoupAuth* obj);
std::string base::AuthBase::realm_ () const noexcept
{
  typedef char* (*call_wrap_t) (const ::SoupAuth* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_realm_get;
  auto _temp_ret = call_wrap_v ((const ::SoupAuth*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/auth_extra_def_impl.hpp>)
#include <soup/auth_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/auth_extra_impl.hpp>)
#include <soup/auth_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AuthClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAuthClass *methods = (::SoupAuthClass *) class_struct;
  (void) methods;

  methods->authenticate = (decltype (methods->authenticate)) detail::method_wrapper<self, void (*) (const std::string & username, const std::string & password), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::authenticate_>;
  methods->can_authenticate = (decltype (methods->can_authenticate)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::can_authenticate_>;
  methods->get_authorization = (decltype (methods->get_authorization)) detail::method_wrapper<self, std::string (*) (Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::get_authorization_>;
  methods->is_authenticated = (decltype (methods->is_authenticated)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t>::wrapper<&self::is_authenticated_>;
  methods->is_ready = (decltype (methods->is_ready)) detail::method_wrapper<self, bool (*) (Soup::Message msg), gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::is_ready_>;
}

// void Auth::authenticate (SoupAuth* auth, const char* username, const char* password);
// void Auth::authenticate (::SoupAuth* auth, const char* username, const char* password);
void AuthClass::authenticate_ (const std::string & username, const std::string & password) noexcept
{
  if (!get_struct_()->authenticate) return ;
  typedef void (*call_wrap_t) (::SoupAuth* auth, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->authenticate;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuth*) (gobj_()), (const char*) (username_to_c), (const char*) (password_to_c));
}

// gboolean Auth::can_authenticate (SoupAuth* auth);
// gboolean Auth::can_authenticate (::SoupAuth* auth);
bool AuthClass::can_authenticate_ () noexcept
{
  if (!get_struct_()->can_authenticate) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->can_authenticate;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return _temp_ret;
}

// char* Auth::get_authorization (SoupAuth* auth, SoupMessage* msg);
// char* Auth::get_authorization (::SoupAuth* auth, ::SoupMessage* msg);
std::string AuthClass::get_authorization_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->get_authorization) return std::string{};
  typedef char* (*call_wrap_t) (::SoupAuth* auth, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_authorization;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// GSList* Auth::get_protection_space (SoupAuth* auth, SoupURI* source_uri);
// ::GSList* Auth::get_protection_space (::SoupAuth* auth, ::SoupURI* source_uri);
// SKIP; container return not supported

// gboolean Auth::is_authenticated (SoupAuth* auth);
// gboolean Auth::is_authenticated (::SoupAuth* auth);
bool AuthClass::is_authenticated_ () noexcept
{
  if (!get_struct_()->is_authenticated) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_authenticated;
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()));
  return _temp_ret;
}

// gboolean Auth::is_ready (SoupAuth* auth, SoupMessage* msg);
// gboolean Auth::is_ready (::SoupAuth* auth, ::SoupMessage* msg);
bool AuthClass::is_ready_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->is_ready) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupAuth* auth, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_ready;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuth*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

// gboolean Auth::update (SoupAuth* auth, SoupMessage* msg, GHashTable* auth_header);
// gboolean Auth::update (::SoupAuth* auth, ::SoupMessage* msg, ::GHashTable* auth_header);
// SKIP; virtual-method container parameter not supported

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
