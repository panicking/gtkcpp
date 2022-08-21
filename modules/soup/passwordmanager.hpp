// AUTO-GENERATED

#ifndef _GI_SOUP_PASSWORDMANAGER_HPP_
#define _GI_SOUP_PASSWORDMANAGER_HPP_


namespace gi {

namespace repository {

namespace Soup {

class Auth;
class Message;

class PasswordManager;

namespace base {


#define GI_SOUP_PASSWORDMANAGER_BASE base::PasswordManagerBase
class PasswordManagerBase : public gi::InterfaceBase
{
typedef gi::InterfaceBase super_type;
public:
typedef ::SoupPasswordManager BaseObjectType;

PasswordManagerBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return soup_password_manager_get_type(); } 

// void soup_password_manager_get_passwords_async (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, GMainContext* async_context, GCancellable* cancellable, SoupPasswordManagerCallback callback, gpointer user_data);
// void soup_password_manager_get_passwords_async (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
// IGNORE; marked ignore

// void soup_password_manager_get_passwords_sync (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, GCancellable* cancellable);
// void soup_password_manager_get_passwords_sync (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/passwordmanager_extra_def.hpp>)
#include <soup/passwordmanager_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/passwordmanager_extra.hpp>)
#include <soup/passwordmanager_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

class PasswordManager : public GI_SOUP_PASSWORDMANAGER_BASE
{ typedef GI_SOUP_PASSWORDMANAGER_BASE super_type; using super_type::super_type; };

} // namespace Soup

template<> struct declare_cpptype_of<::SoupPasswordManager>
{ typedef Soup::PasswordManager type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {


class PasswordManagerInterfaceDef
{
typedef PasswordManagerInterfaceDef self;
public:
typedef Soup::PasswordManager instance_type;
typedef ::SoupPasswordManagerInterface interface_type;

protected:
static GI_INLINE_DECL void interface_init (gpointer interface_struct, gpointer );

// void PasswordManager::get_passwords_async (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, GMainContext* async_context, GCancellable* cancellable, SoupPasswordManagerCallback callback, gpointer user_data);
// void PasswordManager::get_passwords_async (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void PasswordManager::get_passwords_sync (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, GCancellable* cancellable);
// void PasswordManager::get_passwords_sync (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
virtual void get_passwords_sync_ (Soup::Message msg, Soup::Auth auth, Gio::Cancellable cancellable) noexcept = 0;


};

using PasswordManagerImpl = detail::InterfaceImpl<PasswordManagerInterfaceDef>;

class PasswordManagerInterfaceClassImpl: public detail::InterfaceClassImpl<PasswordManagerImpl>
{
typedef PasswordManagerInterfaceClassImpl self;
typedef detail::InterfaceClassImpl<PasswordManagerImpl> super;

protected:
using super::super;

// void PasswordManager::get_passwords_async (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, GMainContext* async_context, GCancellable* cancellable, SoupPasswordManagerCallback callback, gpointer user_data);
// void PasswordManager::get_passwords_async (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void PasswordManager::get_passwords_sync (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, GCancellable* cancellable);
// void PasswordManager::get_passwords_sync (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
GI_INLINE_DECL void get_passwords_sync_ (Soup::Message msg, Soup::Auth auth, Gio::Cancellable cancellable) noexcept override;


};

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
