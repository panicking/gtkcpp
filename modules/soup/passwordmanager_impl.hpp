// AUTO-GENERATED

#ifndef _GI_SOUP_PASSWORDMANAGER_IMPL_HPP_
#define _GI_SOUP_PASSWORDMANAGER_IMPL_HPP_

namespace gi {

namespace repository {

namespace Soup {

namespace base {

// void soup_password_manager_get_passwords_async (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, GMainContext* async_context, GCancellable* cancellable, SoupPasswordManagerCallback callback, gpointer user_data);
// void soup_password_manager_get_passwords_async (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
void base::PasswordManagerBase::get_passwords_async (Soup::Message msg, Soup::Auth auth, gboolean retrying, GLib::MainContext async_context, Gio::Cancellable cancellable, Soup::PasswordManagerCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_password_manager_get_passwords_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto async_context_to_c = gi::unwrap (async_context, gi::transfer_none, gi::direction_in);
  auto retrying_to_c = retrying;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupPasswordManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (gboolean) (retrying_to_c), (::GMainContext*) (async_context_to_c), (::GCancellable*) (cancellable_to_c), (Soup::PasswordManagerCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}
void base::PasswordManagerBase::get_passwords_async (Soup::Message msg, Soup::Auth auth, gboolean retrying, GLib::MainContext async_context, Soup::PasswordManagerCallback callback) noexcept
{
  typedef void (*call_wrap_t) (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_password_manager_get_passwords_async;
  auto callback_wrap_ = callback ? unwrap (std::move (callback), gi::scope_async) : nullptr;
  auto cancellable_to_c = nullptr;
  auto async_context_to_c = gi::unwrap (async_context, gi::transfer_none, gi::direction_in);
  auto retrying_to_c = retrying;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupPasswordManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (gboolean) (retrying_to_c), (::GMainContext*) (async_context_to_c), (::GCancellable*) (cancellable_to_c), (Soup::PasswordManagerCallback::cfunction_type) (callback_wrap_ ? &callback_wrap_->wrapper : nullptr), (void*) (callback_wrap_));
}

// void soup_password_manager_get_passwords_sync (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, GCancellable* cancellable);
// void soup_password_manager_get_passwords_sync (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
void base::PasswordManagerBase::get_passwords_sync (Soup::Message msg, Soup::Auth auth, Gio::Cancellable cancellable) noexcept
{
  typedef void (*call_wrap_t) (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_password_manager_get_passwords_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupPasswordManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (::GCancellable*) (cancellable_to_c));
}
void base::PasswordManagerBase::get_passwords_sync (Soup::Message msg, Soup::Auth auth) noexcept
{
  typedef void (*call_wrap_t) (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) soup_password_manager_get_passwords_sync;
  auto cancellable_to_c = nullptr;
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupPasswordManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (::GCancellable*) (cancellable_to_c));
}


} // namespace base

} // namespace Soup

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<soup/passwordmanager_extra_def_impl.hpp>)
#include <soup/passwordmanager_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<soup/passwordmanager_extra_impl.hpp>)
#include <soup/passwordmanager_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Soup {

namespace impl {

namespace internal {

void PasswordManagerInterfaceDef::interface_init (gpointer interface_struct, gpointer )
{
  ::SoupPasswordManagerInterface *methods = (::SoupPasswordManagerInterface *) interface_struct;
  (void) methods;

  methods->get_passwords_sync = (decltype (methods->get_passwords_sync)) detail::method_wrapper<self, void (*) (Soup::Message msg, Soup::Auth auth, Gio::Cancellable cancellable), gi::transfer_full_t, gi::transfer_none_t, gi::transfer_none_t, gi::transfer_none_t>::wrapper<&self::get_passwords_sync_>;
}

// void PasswordManager::get_passwords_async (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, gboolean retrying, GMainContext* async_context, GCancellable* cancellable, SoupPasswordManagerCallback callback, gpointer user_data);
// void PasswordManager::get_passwords_async (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, gboolean retrying, ::GMainContext* async_context, ::GCancellable* cancellable, Soup::PasswordManagerCallback::cfunction_type callback, void* user_data);
// SKIP; virtual-method callback parameter not supported

// void PasswordManager::get_passwords_sync (SoupPasswordManager* password_manager, SoupMessage* msg, SoupAuth* auth, GCancellable* cancellable);
// void PasswordManager::get_passwords_sync (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
void PasswordManagerInterfaceClassImpl::get_passwords_sync_ (Soup::Message msg, Soup::Auth auth, Gio::Cancellable cancellable) noexcept
{
  if (!get_struct_()->get_passwords_sync) return ;
  typedef void (*call_wrap_t) (::SoupPasswordManager* password_manager, ::SoupMessage* msg, ::SoupAuth* auth, ::GCancellable* cancellable);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_passwords_sync;
  auto cancellable_to_c = gi::unwrap (cancellable, gi::transfer_none, gi::direction_in);
  auto auth_to_c = gi::unwrap (auth, gi::transfer_none, gi::direction_in);
  auto msg_to_c = gi::unwrap (msg, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::SoupPasswordManager*) (gobj_()), (::SoupMessage*) (msg_to_c), (::SoupAuth*) (auth_to_c), (::GCancellable*) (cancellable_to_c));
}

} // namespace internal

} // namespace impl

} // namespace Soup

} // namespace repository

} // namespace gi

#endif
