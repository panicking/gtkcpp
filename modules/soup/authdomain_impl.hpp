// AUTO-GENERATED

#ifndef _GI_SOUP_AUTHDOMAIN_IMPL_HPP_
#define _GI_SOUP_AUTHDOMAIN_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// char* soup_auth_domain_accepts (SoupAuthDomain* domain, SoupMessage* msg);
// char* soup_auth_domain_accepts (::SoupAuthDomain* domain, ::SoupMessage* msg);
std::string base::AuthDomainBase::accepts (Soup::Message msg) noexcept
{
  typedef char* (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_accepts;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// void soup_auth_domain_add_path (SoupAuthDomain* domain, const char* path);
// void soup_auth_domain_add_path (::SoupAuthDomain* domain, const char* path);
void base::AuthDomainBase::add_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomain* domain, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_add_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuthDomain*) (gobj_()), (const char*) (path_to_c));
}

// void soup_auth_domain_challenge (SoupAuthDomain* domain, SoupMessage* msg);
// void soup_auth_domain_challenge (::SoupAuthDomain* domain, ::SoupMessage* msg);
void base::AuthDomainBase::challenge (Soup::Message msg) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_challenge;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c));
}

// gboolean soup_auth_domain_check_password (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password);
// gboolean soup_auth_domain_check_password (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
bool base::AuthDomainBase::check_password (Soup::Message msg, const std::string & username, const std::string & password) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_check_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return _temp_ret;
}

// gboolean soup_auth_domain_covers (SoupAuthDomain* domain, SoupMessage* msg);
// gboolean soup_auth_domain_covers (::SoupAuthDomain* domain, ::SoupMessage* msg);
bool base::AuthDomainBase::covers (Soup::Message msg) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_covers;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return _temp_ret;
}

// const char* soup_auth_domain_get_realm (SoupAuthDomain* domain);
// const char* soup_auth_domain_get_realm (::SoupAuthDomain* domain);
std::string base::AuthDomainBase::get_realm () noexcept
{
  typedef const char* (*call_wrap_t) (::SoupAuthDomain* domain);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_get_realm;
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void soup_auth_domain_remove_path (SoupAuthDomain* domain, const char* path);
// void soup_auth_domain_remove_path (::SoupAuthDomain* domain, const char* path);
void base::AuthDomainBase::remove_path (const std::string & path) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomain* domain, const char* path);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_remove_path;
  auto path_to_c = gi::unwrap (path, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupAuthDomain*) (gobj_()), (const char*) (path_to_c));
}

// void soup_auth_domain_set_filter (SoupAuthDomain* domain, SoupAuthDomainFilter filter, gpointer filter_data, GDestroyNotify dnotify);
// void soup_auth_domain_set_filter (::SoupAuthDomain* domain, Soup::AuthDomainFilter::cfunction_type filter, void* filter_data, GLib::DestroyNotify::cfunction_type dnotify);
void base::AuthDomainBase::set_filter (Soup::AuthDomainFilter filter) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomain* domain, Soup::AuthDomainFilter::cfunction_type filter, void* filter_data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_set_filter;
  auto filter_wrap_ = filter ? unwrap (std::move (filter), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupAuthDomain*) (gobj_()), (Soup::AuthDomainFilter::cfunction_type) (filter_wrap_ ? &filter_wrap_->wrapper : nullptr), (void*) (filter_wrap_), (GLib::DestroyNotify::cfunction_type) (filter_wrap_ ? &filter_wrap_->destroy : nullptr));
}

// void soup_auth_domain_set_generic_auth_callback (SoupAuthDomain* domain, SoupAuthDomainGenericAuthCallback auth_callback, gpointer auth_data, GDestroyNotify dnotify);
// void soup_auth_domain_set_generic_auth_callback (::SoupAuthDomain* domain, Soup::AuthDomainGenericAuthCallback::cfunction_type auth_callback, void* auth_data, GLib::DestroyNotify::cfunction_type dnotify);
void base::AuthDomainBase::set_generic_auth_callback (Soup::AuthDomainGenericAuthCallback auth_callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupAuthDomain* domain, Soup::AuthDomainGenericAuthCallback::cfunction_type auth_callback, void* auth_data, GLib::DestroyNotify::cfunction_type dnotify);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_set_generic_auth_callback;
  auto auth_callback_wrap_ = auth_callback ? unwrap (std::move (auth_callback), gi::scope_notified) : nullptr;
  call_wrap_v ((::SoupAuthDomain*) (gobj_()), (Soup::AuthDomainGenericAuthCallback::cfunction_type) (auth_callback_wrap_ ? &auth_callback_wrap_->wrapper : nullptr), (void*) (auth_callback_wrap_), (GLib::DestroyNotify::cfunction_type) (auth_callback_wrap_ ? &auth_callback_wrap_->destroy : nullptr));
}

// gboolean soup_auth_domain_try_generic_auth_callback (SoupAuthDomain* domain, SoupMessage* msg, const char* username);
// gboolean soup_auth_domain_try_generic_auth_callback (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username);
bool base::AuthDomainBase::try_generic_auth_callback (Soup::Message msg, const std::string & username) noexcept
{
  typedef gboolean (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_auth_domain_try_generic_auth_callback;
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (username_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/authdomain_extra_def_impl.hpp>)
#include <soup/authdomain_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/authdomain_extra_impl.hpp>)
#include <soup/authdomain_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void AuthDomainClassDef::class_init (gpointer class_struct, gpointer )
{
  ::SoupAuthDomainClass *methods = (::SoupAuthDomainClass *) class_struct;
  (void) methods;

  methods->accepts = (decltype (methods->accepts)) detail::method_wrapper<self, std::string (*) (Soup::Message msg, const std::string & header), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::accepts_>;
  methods->challenge = (decltype (methods->challenge)) detail::method_wrapper<self, std::string (*) (Soup::Message msg), gi::transfer_full_t, gi::transfer_none_t>::wrapper<&self::challenge_>;
  methods->check_password = (decltype (methods->check_password)) detail::method_wrapper<self, bool (*) (Soup::Message msg, const std::string & username, const std::string & password), gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::check_password_>;
}

// char* AuthDomain::accepts (SoupAuthDomain* domain, SoupMessage* msg, const char* header);
// char* AuthDomain::accepts (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* header);
std::string AuthDomainClass::accepts_ (Soup::Message msg, const std::string & header) noexcept
{
  if (!get_struct_()->accepts) return std::string{};
  typedef char* (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* header);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->accepts;
  auto header_to_c = gi::unwrap (header, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (header_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// char* AuthDomain::challenge (SoupAuthDomain* domain, SoupMessage* msg);
// char* AuthDomain::challenge (::SoupAuthDomain* domain, ::SoupMessage* msg);
std::string AuthDomainClass::challenge_ (Soup::Message msg) noexcept
{
  if (!get_struct_()->challenge) return std::string{};
  typedef char* (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->challenge;
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full, gi::direction_out);
}

// gboolean AuthDomain::check_password (SoupAuthDomain* domain, SoupMessage* msg, const char* username, const char* password);
// gboolean AuthDomain::check_password (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
bool AuthDomainClass::check_password_ (Soup::Message msg, const std::string & username, const std::string & password) noexcept
{
  if (!get_struct_()->check_password) return bool{};
  typedef gboolean (*call_wrap_t) (::SoupAuthDomain* domain, ::SoupMessage* msg, const char* username, const char* password);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->check_password;
  auto password_to_c = gi::unwrap (password, gi::transfer_none, gi::direction_in);
  auto username_to_c = gi::unwrap (username, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::SoupAuthDomain*) (gobj_()), (::SoupMessage*) (msg_to_c), (const char*) (username_to_c), (const char*) (password_to_c));
  return _temp_ret;
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
