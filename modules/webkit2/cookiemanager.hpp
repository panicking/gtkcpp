// AUTO-GENERATED

#ifndef _GI_WEBKIT2_COOKIEMANAGER_HPP_
#define _GI_WEBKIT2_COOKIEMANAGER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class CookieManager;

namespace base {


#define GI_WEBKIT2_COOKIEMANAGER_BASE base::CookieManagerBase
class CookieManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitCookieManager BaseObjectType;

CookieManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_cookie_manager_get_type(); } 

// void webkit_cookie_manager_add_cookie (WebKitCookieManager* cookie_manager, SoupCookie* cookie, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_add_cookie (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void add_cookie (Soup::Cookie cookie, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void add_cookie (Soup::Cookie cookie, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_cookie_manager_add_cookie_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// gboolean webkit_cookie_manager_add_cookie_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool add_cookie_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool add_cookie_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_cookie_manager_delete_all_cookies (WebKitCookieManager* cookie_manager);
// void webkit_cookie_manager_delete_all_cookies (::WebKitCookieManager* cookie_manager);
// IGNORE; deprecated

// void webkit_cookie_manager_delete_cookie (WebKitCookieManager* cookie_manager, SoupCookie* cookie, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_delete_cookie (::WebKitCookieManager* cookie_manager, ::SoupCookie* cookie, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void delete_cookie (Soup::Cookie cookie, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void delete_cookie (Soup::Cookie cookie, Gio::AsyncReadyCallback callback) noexcept;

// gboolean webkit_cookie_manager_delete_cookie_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// gboolean webkit_cookie_manager_delete_cookie_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL bool delete_cookie_finish (Gio::AsyncResult result);
GI_INLINE_DECL bool delete_cookie_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_cookie_manager_delete_cookies_for_domain (WebKitCookieManager* cookie_manager, const gchar* domain);
// void webkit_cookie_manager_delete_cookies_for_domain (::WebKitCookieManager* cookie_manager, const char* domain);
// IGNORE; deprecated

// void webkit_cookie_manager_get_accept_policy (WebKitCookieManager* cookie_manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_accept_policy (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_accept_policy (Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_accept_policy (Gio::AsyncReadyCallback callback) noexcept;

// WebKitCookieAcceptPolicy webkit_cookie_manager_get_accept_policy_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// ::WebKitCookieAcceptPolicy webkit_cookie_manager_get_accept_policy_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL WebKit2::CookieAcceptPolicy get_accept_policy_finish (Gio::AsyncResult result);
GI_INLINE_DECL WebKit2::CookieAcceptPolicy get_accept_policy_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_cookie_manager_get_cookies (WebKitCookieManager* cookie_manager, const gchar* uri, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_cookies (::WebKitCookieManager* cookie_manager, const char* uri, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
GI_INLINE_DECL void get_cookies (const std::string & uri, Gio::Cancellable cancellable, Gio::AsyncReadyCallback callback) noexcept;
GI_INLINE_DECL void get_cookies (const std::string & uri, Gio::AsyncReadyCallback callback) noexcept;

// GList* webkit_cookie_manager_get_cookies_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// ::GList* webkit_cookie_manager_get_cookies_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
GI_INLINE_DECL std::vector<Soup::Cookie> get_cookies_finish (Gio::AsyncResult result);
GI_INLINE_DECL std::vector<Soup::Cookie> get_cookies_finish (Gio::AsyncResult result, GLib::Error * _error) noexcept;

// void webkit_cookie_manager_get_domains_with_cookies (WebKitCookieManager* cookie_manager, GCancellable* cancellable, GAsyncReadyCallback callback, gpointer user_data);
// void webkit_cookie_manager_get_domains_with_cookies (::WebKitCookieManager* cookie_manager, ::GCancellable* cancellable, Gio::AsyncReadyCallback::cfunction_type callback, void* user_data);
// IGNORE; deprecated

// gchar** webkit_cookie_manager_get_domains_with_cookies_finish (WebKitCookieManager* cookie_manager, GAsyncResult* result, GError ** error);
// char** webkit_cookie_manager_get_domains_with_cookies_finish (::WebKitCookieManager* cookie_manager, ::GAsyncResult* result, GError ** error);
// IGNORE; deprecated

// void webkit_cookie_manager_set_accept_policy (WebKitCookieManager* cookie_manager, WebKitCookieAcceptPolicy policy);
// void webkit_cookie_manager_set_accept_policy (::WebKitCookieManager* cookie_manager, ::WebKitCookieAcceptPolicy policy);
GI_INLINE_DECL void set_accept_policy (WebKit2::CookieAcceptPolicy policy) noexcept;

// void webkit_cookie_manager_set_persistent_storage (WebKitCookieManager* cookie_manager, const gchar* filename, WebKitCookiePersistentStorage storage);
// void webkit_cookie_manager_set_persistent_storage (::WebKitCookieManager* cookie_manager, const char* filename, ::WebKitCookiePersistentStorage storage);
GI_INLINE_DECL void set_persistent_storage (const std::string & filename, WebKit2::CookiePersistentStorage storage) noexcept;

// signal changed
gi::signal_proxy<void(WebKit2::CookieManager)> signal_changed()
{ return gi::signal_proxy<void(WebKit2::CookieManager)> (*this, "changed"); }

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/cookiemanager_extra_def.hpp>)
#include <webkit2/cookiemanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/cookiemanager_extra.hpp>)
#include <webkit2/cookiemanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class CookieManager : public GI_WEBKIT2_COOKIEMANAGER_BASE
{ typedef GI_WEBKIT2_COOKIEMANAGER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitCookieManager>
{ typedef WebKit2::CookieManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class CookieManagerClassDef
{
typedef CookieManagerClassDef self;
public:
typedef WebKit2::CookieManager instance_type;
typedef ::WebKitCookieManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class CookieManagerClass: public detail::ClassTemplate<WebKit2::impl::internal::CookieManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef CookieManagerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::CookieManagerClassDef, GObject::impl::internal::ObjectClass> super;

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

using CookieManagerImpl = detail::ObjectImpl<CookieManager, internal::CookieManagerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
