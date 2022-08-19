// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SECURITYMANAGER_IMPL_HPP_
#define _GI_WEBKIT2_SECURITYMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// void webkit_security_manager_register_uri_scheme_as_cors_enabled (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_cors_enabled (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_cors_enabled (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_cors_enabled;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// void webkit_security_manager_register_uri_scheme_as_display_isolated (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_display_isolated (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_display_isolated (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_display_isolated;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// void webkit_security_manager_register_uri_scheme_as_empty_document (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_empty_document (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_empty_document (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_empty_document;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// void webkit_security_manager_register_uri_scheme_as_local (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_local (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_local (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_local;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// void webkit_security_manager_register_uri_scheme_as_no_access (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_no_access (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_no_access (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_no_access;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// void webkit_security_manager_register_uri_scheme_as_secure (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_secure (::WebKitSecurityManager* security_manager, const char* scheme);
void base::SecurityManagerBase::register_uri_scheme_as_secure (const std::string & scheme) noexcept
{
  typedef void (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_register_uri_scheme_as_secure;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
}

// gboolean webkit_security_manager_uri_scheme_is_cors_enabled (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_cors_enabled (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_cors_enabled (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_cors_enabled;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean webkit_security_manager_uri_scheme_is_display_isolated (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_display_isolated (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_display_isolated (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_display_isolated;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean webkit_security_manager_uri_scheme_is_empty_document (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_empty_document (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_empty_document (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_empty_document;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean webkit_security_manager_uri_scheme_is_local (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_local (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_local (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_local;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean webkit_security_manager_uri_scheme_is_no_access (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_no_access (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_no_access (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_no_access;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}

// gboolean webkit_security_manager_uri_scheme_is_secure (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_secure (::WebKitSecurityManager* security_manager, const char* scheme);
bool base::SecurityManagerBase::uri_scheme_is_secure (const std::string & scheme) noexcept
{
  typedef gboolean (*call_wrap_t) (::WebKitSecurityManager* security_manager, const char* scheme);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_security_manager_uri_scheme_is_secure;
  auto scheme_to_c = gi::unwrap (scheme, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((::WebKitSecurityManager*) (gobj_()), (const char*) (scheme_to_c));
  return _temp_ret;
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/securitymanager_extra_def_impl.hpp>)
#include <webkit2/securitymanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/securitymanager_extra_impl.hpp>)
#include <webkit2/securitymanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void SecurityManagerClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitSecurityManagerClass *methods = (::WebKitSecurityManagerClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
