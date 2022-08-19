// AUTO-GENERATED

#ifndef _GI_WEBKIT2_SECURITYMANAGER_HPP_
#define _GI_WEBKIT2_SECURITYMANAGER_HPP_


namespace gi {

namespace repository {

namespace WebKit2 {


class SecurityManager;

namespace base {


#define GI_WEBKIT2_SECURITYMANAGER_BASE base::SecurityManagerBase
class SecurityManagerBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::WebKitSecurityManager BaseObjectType;

SecurityManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return webkit_security_manager_get_type(); } 

// void webkit_security_manager_register_uri_scheme_as_cors_enabled (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_cors_enabled (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_cors_enabled (const std::string & scheme) noexcept;

// void webkit_security_manager_register_uri_scheme_as_display_isolated (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_display_isolated (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_display_isolated (const std::string & scheme) noexcept;

// void webkit_security_manager_register_uri_scheme_as_empty_document (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_empty_document (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_empty_document (const std::string & scheme) noexcept;

// void webkit_security_manager_register_uri_scheme_as_local (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_local (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_local (const std::string & scheme) noexcept;

// void webkit_security_manager_register_uri_scheme_as_no_access (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_no_access (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_no_access (const std::string & scheme) noexcept;

// void webkit_security_manager_register_uri_scheme_as_secure (WebKitSecurityManager* security_manager, const gchar* scheme);
// void webkit_security_manager_register_uri_scheme_as_secure (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL void register_uri_scheme_as_secure (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_cors_enabled (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_cors_enabled (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_cors_enabled (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_display_isolated (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_display_isolated (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_display_isolated (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_empty_document (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_empty_document (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_empty_document (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_local (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_local (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_local (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_no_access (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_no_access (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_no_access (const std::string & scheme) noexcept;

// gboolean webkit_security_manager_uri_scheme_is_secure (WebKitSecurityManager* security_manager, const gchar* scheme);
// gboolean webkit_security_manager_uri_scheme_is_secure (::WebKitSecurityManager* security_manager, const char* scheme);
GI_INLINE_DECL bool uri_scheme_is_secure (const std::string & scheme) noexcept;

}; // class

} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/securitymanager_extra_def.hpp>)
#include <webkit2/securitymanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/securitymanager_extra.hpp>)
#include <webkit2/securitymanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

class SecurityManager : public GI_WEBKIT2_SECURITYMANAGER_BASE
{ typedef GI_WEBKIT2_SECURITYMANAGER_BASE super_type; using super_type::super_type; };

} // namespace WebKit2

template<> struct declare_cpptype_of<::WebKitSecurityManager>
{ typedef WebKit2::SecurityManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {


class SecurityManagerClassDef
{
typedef SecurityManagerClassDef self;
public:
typedef WebKit2::SecurityManager instance_type;
typedef ::WebKitSecurityManagerClass class_type;

protected:
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class SecurityManagerClass: public detail::ClassTemplate<WebKit2::impl::internal::SecurityManagerClassDef, GObject::impl::internal::ObjectClass>
{
typedef SecurityManagerClass self;
typedef detail::ClassTemplate<WebKit2::impl::internal::SecurityManagerClassDef, GObject::impl::internal::ObjectClass> super;

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

using SecurityManagerImpl = detail::ObjectImpl<SecurityManager, internal::SecurityManagerClass>;

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
