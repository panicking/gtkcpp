// AUTO-GENERATED

#ifndef _GI_WEBKIT2_USERMESSAGE_IMPL_HPP_
#define _GI_WEBKIT2_USERMESSAGE_IMPL_HPP_

namespace gi {

namespace repository {

namespace WebKit2 {

namespace base {

// WebKitUserMessage* webkit_user_message_new (const char* name, GVariant* parameters);
// ::WebKitUserMessage* webkit_user_message_new (const char* name, ::GVariant* parameters);
WebKit2::UserMessage base::UserMessageBase::new_ (const std::string & name, GLib::Variant parameters) noexcept
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (const char* name, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_new;
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GVariant*) (parameters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
WebKit2::UserMessage base::UserMessageBase::new_ (const std::string & name) noexcept
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (const char* name, ::GVariant* parameters);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_new;
  auto parameters_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GVariant*) (parameters_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// WebKitUserMessage* webkit_user_message_new_with_fd_list (const char* name, GVariant* parameters, GUnixFDList* fd_list);
// ::WebKitUserMessage* webkit_user_message_new_with_fd_list (const char* name, ::GVariant* parameters, ::GUnixFDList* fd_list);
WebKit2::UserMessage base::UserMessageBase::new_with_fd_list (const std::string & name, GLib::Variant parameters, Gio::UnixFDList fd_list) noexcept
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (const char* name, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_new_with_fd_list;
  auto fd_list_to_c = gi::unwrap (fd_list, gi::transfer_none, gi::direction_in);
  auto parameters_to_c = gi::unwrap (parameters, gi::transfer_none, gi::direction_in);
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}
WebKit2::UserMessage base::UserMessageBase::new_with_fd_list (const std::string & name) noexcept
{
  typedef ::WebKitUserMessage* (*call_wrap_t) (const char* name, ::GVariant* parameters, ::GUnixFDList* fd_list);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_new_with_fd_list;
  auto fd_list_to_c = nullptr;
  auto parameters_to_c = nullptr;
  auto name_to_c = gi::unwrap (name, gi::transfer_none, gi::direction_in);
  auto _temp_ret = call_wrap_v ((const char*) (name_to_c), (::GVariant*) (parameters_to_c), (::GUnixFDList*) (fd_list_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GUnixFDList* webkit_user_message_get_fd_list (WebKitUserMessage* message);
// ::GUnixFDList* webkit_user_message_get_fd_list (::WebKitUserMessage* message);
Gio::UnixFDList base::UserMessageBase::get_fd_list () noexcept
{
  typedef ::GUnixFDList* (*call_wrap_t) (::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_get_fd_list;
  auto _temp_ret = call_wrap_v ((::WebKitUserMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// const char* webkit_user_message_get_name (WebKitUserMessage* message);
// const char* webkit_user_message_get_name (::WebKitUserMessage* message);
std::string base::UserMessageBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_get_name;
  auto _temp_ret = call_wrap_v ((::WebKitUserMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// GVariant* webkit_user_message_get_parameters (WebKitUserMessage* message);
// ::GVariant* webkit_user_message_get_parameters (::WebKitUserMessage* message);
GLib::Variant base::UserMessageBase::get_parameters () noexcept
{
  typedef ::GVariant* (*call_wrap_t) (::WebKitUserMessage* message);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_get_parameters;
  auto _temp_ret = call_wrap_v ((::WebKitUserMessage*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none, gi::direction_out);
}

// void webkit_user_message_send_reply (WebKitUserMessage* message, WebKitUserMessage* reply);
// void webkit_user_message_send_reply (::WebKitUserMessage* message, ::WebKitUserMessage* reply);
void base::UserMessageBase::send_reply (WebKit2::UserMessage reply) noexcept
{
  typedef void (*call_wrap_t) (::WebKitUserMessage* message, ::WebKitUserMessage* reply);
  call_wrap_t call_wrap_v = (call_wrap_t) webkit_user_message_send_reply;
  auto reply_to_c = gi::unwrap (reply, gi::transfer_none, gi::direction_in);
  call_wrap_v ((::WebKitUserMessage*) (gobj_()), (::WebKitUserMessage*) (reply_to_c));
}


} // namespace base

} // namespace WebKit2

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<webkit2/usermessage_extra_def_impl.hpp>)
#include <webkit2/usermessage_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<webkit2/usermessage_extra_impl.hpp>)
#include <webkit2/usermessage_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace WebKit2 {

namespace impl {

namespace internal {

void UserMessageClassDef::class_init (gpointer class_struct, gpointer )
{
  ::WebKitUserMessageClass *methods = (::WebKitUserMessageClass *) class_struct;
  (void) methods;

}

} // namespace internal

} // namespace impl

} // namespace WebKit2

} // namespace repository

} // namespace gi

#endif
