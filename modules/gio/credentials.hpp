// AUTO-GENERATED

#ifndef _GI_GIO_CREDENTIALS_HPP_
#define _GI_GIO_CREDENTIALS_HPP_


namespace gi {

namespace repository {

namespace Gio {


class Credentials;

namespace base {


#define GI_GIO_CREDENTIALS_BASE base::CredentialsBase
class CredentialsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GCredentials BaseObjectType;

CredentialsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_credentials_get_type(); } 

// GCredentials* g_credentials_new ();
// ::GCredentials* g_credentials_new ();
static GI_INLINE_DECL Gio::Credentials new_ () noexcept;

// gpointer g_credentials_get_native (GCredentials* credentials, GCredentialsType native_type);
// void* g_credentials_get_native (::GCredentials* credentials, ::GCredentialsType native_type);
GI_INLINE_DECL gpointer get_native (Gio::CredentialsType native_type) noexcept;

// pid_t g_credentials_get_unix_pid (GCredentials* credentials, GError ** error);
// gint g_credentials_get_unix_pid (::GCredentials* credentials, GError ** error);
GI_INLINE_DECL gint get_unix_pid ();
GI_INLINE_DECL gint get_unix_pid (GLib::Error * _error) noexcept;

// uid_t g_credentials_get_unix_user (GCredentials* credentials, GError ** error);
// guint g_credentials_get_unix_user (::GCredentials* credentials, GError ** error);
GI_INLINE_DECL guint get_unix_user ();
GI_INLINE_DECL guint get_unix_user (GLib::Error * _error) noexcept;

// gboolean g_credentials_is_same_user (GCredentials* credentials, GCredentials* other_credentials, GError ** error);
// gboolean g_credentials_is_same_user (::GCredentials* credentials, ::GCredentials* other_credentials, GError ** error);
GI_INLINE_DECL bool is_same_user (Gio::Credentials other_credentials);
GI_INLINE_DECL bool is_same_user (Gio::Credentials other_credentials, GLib::Error * _error) noexcept;

// void g_credentials_set_native (GCredentials* credentials, GCredentialsType native_type, gpointer native);
// void g_credentials_set_native (::GCredentials* credentials, ::GCredentialsType native_type, void* native);
GI_INLINE_DECL void set_native (Gio::CredentialsType native_type, void* native) noexcept;

// gboolean g_credentials_set_unix_user (GCredentials* credentials, uid_t uid, GError ** error);
// gboolean g_credentials_set_unix_user (::GCredentials* credentials, guint uid, GError ** error);
GI_INLINE_DECL bool set_unix_user (guint uid);
GI_INLINE_DECL bool set_unix_user (guint uid, GLib::Error * _error) noexcept;

// gchar* g_credentials_to_string (GCredentials* credentials);
// char* g_credentials_to_string (::GCredentials* credentials);
GI_INLINE_DECL std::string to_string () noexcept;

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/credentials_extra_def.hpp>)
#include <gio/credentials_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/credentials_extra.hpp>)
#include <gio/credentials_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class Credentials : public GI_GIO_CREDENTIALS_BASE
{ typedef GI_GIO_CREDENTIALS_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GCredentials>
{ typedef Gio::Credentials type; }; 

} // namespace repository

} // namespace gi

#endif
